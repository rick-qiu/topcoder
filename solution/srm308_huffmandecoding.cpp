/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6477
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

class HuffmanDecoding {
public:
    string decode(string archive, vector<string> dictionary);
};

string HuffmanDecoding::decode(string archive, vector<string> dictionary) {
    string ret;
    return ret;
}


int test0() {
    string archive = "101101";
    vector<string> dictionary = {"00", "10", "01", "11"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "BDC";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string archive = "10111010";
    vector<string> dictionary = {"0", "111", "10"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "CBAC";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string archive = "0001001100100111001";
    vector<string> dictionary = {"1", "0"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBABBAABBABBAAABBA";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string archive = "111011011000100110";
    vector<string> dictionary = {"010", "00", "0110", "0111", "11", "100", "101"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "EGGFAC";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string archive = "001101100101100110111101011001011001010";
    vector<string> dictionary = {"110", "011", "10", "0011", "00011", "111", "00010", "0010", "010", "0000"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "DBHABBACAIAIC";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string archive = "00000000000000000000000000000000000000000000000000";
    vector<string> dictionary = {"00000000000000000000000000000000000000000000000000", "11111111111111111111111111111111111111111111111111"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string archive = "00000000000000000000000000000000000000000000000000";
    vector<string> dictionary = {"0", "11111111111111111111111111111111111111111111111111"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string archive = "00000000000000000000000000000000000000000000000000";
    vector<string> dictionary = {"0"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string archive = "11111111111111111111111111111111111111111111111111";
    vector<string> dictionary = {"1"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string archive = "10101010101010101010101010101010101010101010101010";
    vector<string> dictionary = {"1", "0"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "ABABABABABABABABABABABABABABABABABABABABABABABABAB";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string archive = "0011101011111011001011001111001000111101011111111";
    vector<string> dictionary = {"010", "1110", "1101", "000", "0111", "1111", "0110", "001", "1100", "10"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "HCECJAIFHDFAFF";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string archive = "010011010010001010001001000100100100110110101000";
    vector<string> dictionary = {"1", "000", "010", "011", "001"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "CDCCECEEBAEEEADCAB";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string archive = "0110000011111100010110011110110011110111011101101";
    vector<string> dictionary = {"100", "111", "110", "01", "00", "101"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "DAEDBCEFABFABFCBDF";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string archive = "0100110000111000010000000100000101010101000001001";
    vector<string> dictionary = {"0001", "0101", "11", "011", "10", "0000", "0100", "001"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "GCFCEAFAFBBGAH";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string archive = "1110101100010011001100000111110011010110110001010";
    vector<string> dictionary = {"1101", "00", "011", "1100", "10", "111", "010"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "FGDGCBDBCFBACCBGE";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string archive = "100010011110000100111110010101000110100";
    vector<string> dictionary = {"101", "100", "11", "0"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "BDBCCDDDDBCCBADBDCDB";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string archive = "000110001110110100110001101001001110110100101110";
    vector<string> dictionary = {"0111", "01100", "10", "1110", "010", "110", "011010", "1111", "00", "011011"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "IBAGBGEAGED";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string archive = "101001110100000110001111111011111100110011001000";
    vector<string> dictionary = {"1010", "1110", "01", "000", "1000", "110", "1011", "1111", "1001", "001"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "ACFEJEHBHFCIID";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string archive = "1001101001110001000101101010001011000100111001000";
    vector<string> dictionary = {"1001", "11", "1000", "011", "10110", "00", "1010", "010", "10111"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "AGDCCEGFEFABFC";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string archive = "0110011101100111011001100110011001100110010011111";
    vector<string> dictionary = {"0111", "1", "00", "0110", "010"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "DADADDDDDDEABB";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string archive = "00001010100101001011";
    vector<string> dictionary = {"0", "1"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAABABABAABABAABABB";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string archive = "0001001011001000000110011010100011010100100001001";
    vector<string> dictionary = {"110", "0000", "100", "0110", "0001", "101", "0111", "001", "010", "111"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "EHDIBDDFEFIIEH";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string archive = "1010110101110010111010110001111110001010110110";
    vector<string> dictionary = {"00", "111", "01", "110", "10"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "EEDEBAEBCCEABBACCCED";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string archive = "0011010011100000001000010010010111110010011011100";
    vector<string> dictionary = {"101", "0000", "1101", "100", "0001", "111", "01", "001", "1100"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "HAHIBGBDDAFDDCI";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string archive = "110110011101110011101100001011110110011110001010";
    vector<string> dictionary = {"110", "011", "00", "111", "01010", "01011", "0100", "100", "101"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "AABIABIHCIDBCDHE";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string archive = "110011100111011101110011100101100110011011111000";
    vector<string> dictionary = {"0", "11000", "1101", "111", "101", "100", "11001"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "GGCCGGAGFCDFA";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string archive = "111111101011010101011110101101001011";
    vector<string> dictionary = {"0", "11", "10"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBCCBACCCBBACBACACB";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string archive = "000010001111000000110001000110101";
    vector<string> dictionary = {"1", "00", "01"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "BBABCAAABBBAABCBCACC";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string archive = "1110010110111101011000111101011110111101010111100";
    vector<string> dictionary = {"00", "010", "1100", "1110", "011", "1111", "10", "11011", "11010"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "DBHICEIFEIGFA";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string archive = "0011001100110100001100100110101000001000110010011";
    vector<string> dictionary = {"0101", "011", "0000", "0100", "0001", "1", "0010", "0011"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "HHHDHGBACDBGB";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string archive = "0011101111010010110011010100110000011010110101100";
    vector<string> dictionary = {"11010110101", "111", "110100", "110000100", "0000", "100", "1100011", "110011", "1101011011", "1100000", "1100010", "11010111", "11010100", "110101011", "001", "110101010", "11011", "110101100", "0001", "01", "101", "110010", "11010110100", "11000011", "110000101"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "OQCUFMJAF";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string archive = "0011101100010110111100100100101011011100101100110";
    vector<string> dictionary = {"01011", "001001", "0010100", "00110", "001000", "111", "001010100", "00101100", "00111", "01010", "0010111", "10", "00101101", "0110", "01001", "00101011", "000", "001010101", "110", "0111", "01000"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "INMFBPTHS";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string archive = "101101001010001000111011100101011100010111000010";
    vector<string> dictionary = {"101110011", "010", "11", "100110", "100001", "10110", "001", "011", "101110010", "1000000", "10111000", "000", "101111", "1000101", "10010", "100011", "100111", "1000100", "10111011", "1000001", "10111010", "1010"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "FORHIKKB";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string archive = "0101111101010111001010001000110100100001010101111";
    vector<string> dictionary = {"0011001", "0110", "11", "0010", "0011000", "01010", "01011001", "0111", "001101", "01000", "001110", "01011000", "100", "0101101", "0101111", "000", "101", "001111", "0101110", "01001"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "OQSFDIDPQO";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string archive = "110010100110010110010011110111000101010010101001";
    vector<string> dictionary = {"101000", "101001", "1100", "1000", "1111", "0011", "0001", "0000101", "1110", "010", "0010", "1101", "10010", "101010", "01100", "100111", "100110", "00000", "1011", "01101", "0000100", "000011", "0111", "101011"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "CBMCPSDNJB";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string archive = "1101000011100001100100011001111011101110111011011";
    vector<string> dictionary = {"001", "10101", "110101", "10100", "10110", "01", "1000", "000", "10111101", "1101000", "10011", "10111100", "110001", "1100101", "1111", "10010", "101110", "110000", "10111110", "1101001", "11011", "1100100", "1110", "110011", "10111111"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "JFRVFKUQWU";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string archive = "1111001000011100001011000101000010111111010011011";
    vector<string> dictionary = {"1000011", "1011", "111010", "100010", "1110110", "100000", "00", "10000101", "111100", "111111", "1010", "111110", "111101", "1110111", "111001", "111000", "110", "01", "1001", "10000100", "100011"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "IAHDHLSB";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string archive = "1010100111101111011000110110101101100011011111100";
    vector<string> dictionary = {"101101", "11101", "10001100", "10111", "1000110110", "10001110", "111101", "111100", "10011011", "10011010", "11111", "100011010", "101100", "1001111", "10001111", "1000110111", "10010", "1010", "10000", "1001110", "0", "110", "1001100", "100010", "11100"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "RNUGEAPY";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string archive = "111111111101011111111110001100110110110001000111";
    vector<string> dictionary = {"0111", "1011", "1110", "0100", "11010", "1001", "00", "111100", "1111010", "0101", "011010", "110111", "1100", "1000", "111110", "01100", "011011", "1010", "1111011", "111111", "110110"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "TITHPUMDA";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string archive = "0100010101110001010100000101010000111000101010101";
    vector<string> dictionary = {"0010101111", "00100", "00000", "0111", "0011", "0110", "0001", "00001110", "000010", "0010101110", "001011", "001010110", "000011111", "100", "0010100", "0000110", "010", "00101010", "11", "101", "000011110"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "QJRITHRT";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string archive = "10111101100110001100111011011100011100001101001";
    vector<string> dictionary = {"1101111", "011", "111010", "1011", "0011", "1101001", "1111", "000", "110001", "110010", "1101100", "1001", "11100", "1101000", "0010", "10001", "1010", "110011", "10000", "1101101", "010", "111011", "110000", "1101110", "110101"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "DKILTIWF";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string archive = "0000100000100100000100110000010010000101000110111";
    vector<string> dictionary = {"0001001000", "0001001001", "0000011", "0100", "0101", "00011", "0000010", "000000", "0011", "0001001100", "000100111", "0001001101", "1101", "1100", "000010", "0001000", "0001001011", "0001001010", "0000111", "0111", "111", "0000110", "10", "000101", "0010", "0110"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "OODJAEFT";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string archive = "001110000011000011100100111000001010111010001001";
    vector<string> dictionary = {"110", "11101", "11110", "00010", "00111000", "00100", "001111", "00011", "00111001", "001100", "0011101", "00001", "001010", "11111", "00000", "001101", "01", "10", "001011", "11100"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "EJIEMBDQ";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string archive = "0000001110011111110010000110010000101001110101101";
    vector<string> dictionary = {"000000110", "101", "100", "0010110", "001010", "0111", "000001", "0001", "0110", "00100", "0101", "0000000", "0100", "00110", "00000010", "000011", "0010111", "000000111", "000010", "00111", "11"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "RTUUJNMEFKB";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string archive = "1011010001111100101101110001011001011000110001100";
    vector<string> dictionary = {"1110", "0", "110100", "110101", "110010", "1111", "100000", "1000111", "110001", "1000010", "1000110", "100010", "10110", "110011", "11011", "1000011", "1001", "1010", "110000", "10111"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "MHEOLEIKB";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string archive = "1011100100011101101110100011111011101101100010101";
    vector<string> dictionary = {"1010001", "101110000", "101110001", "1011000", "000", "10101", "011", "110", "1011111", "1011001", "101001", "111", "1000", "1011101", "010", "1011011", "1011100101", "1011010", "1010000", "1001", "1011100100", "1011110", "101110011", "001"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "UGPALNDF";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string archive = "011100000110100000110101100101110000111101000111";
    vector<string> dictionary = {"0001001", "0001000", "1000010", "1010", "0000111", "001", "00001100", "1000011", "10011", "000110", "1011", "000010", "000101", "000111", "011", "10001", "010", "1101", "10010", "000000", "000001", "1100", "00001101", "100000", "111"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "OXRUDVKHRN";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string archive = "1001101100001010101000011111101110100000100001000";
    vector<string> dictionary = {"110", "1000111", "100000", "10111", "100111", "10000110", "101101", "1011001", "1000101", "1001101", "10010", "1111", "1110", "1000110", "1011000", "1000100", "0", "1010", "1000010", "10000111", "1001100"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "JSRTMMCSQQ";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string archive = "110001110011110100011111110110011000110011001100";
    vector<string> dictionary = {"1111011", "00011", "0010", "0100", "1111000", "0000", "011000", "001110", "0011111", "1111001", "0011110", "101", "110", "11100", "1111010", "01111", "0101", "01101", "011001", "01110", "111010", "11111", "00010", "100", "00110", "111011"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "MHPDPZYYSX";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string archive = "01001111010010010011001000001010001101001000010";
    vector<string> dictionary = {"01101", "01110", "01001110", "0100110", "00010", "01000", "0101", "0000", "001001", "111", "010011111", "1010", "100", "0100111101", "00101", "01100", "00011", "010010", "1011", "0011", "1101", "0100111100", "01111", "001000", "1100"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "NITXOQRE";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string archive = "11111111111111111111111111111111111111111111111111";
    vector<string> dictionary = {"0", "1"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string archive = "0001001100100111001";
    vector<string> dictionary = {"1", "0"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBABBAABBABBAAABBA";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string archive = "0000100111001001111001";
    vector<string> dictionary = {"1", "0"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBABBAAABBABBAAAABBA";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string archive = "001101100101100110111101011001011001010";
    vector<string> dictionary = {"110", "011", "10", "0011", "00011", "111", "00010", "0010", "010", "0000"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "DBHABBACAIAIC";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string archive = "000100110010011";
    vector<string> dictionary = {"1", "0"};
    HuffmanDecoding* pObj = new HuffmanDecoding();
    clock_t start = clock();
    string result = pObj->decode(archive, dictionary);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBABBAABBABBAA";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7340263&rd=9988&pm=6477
********************************************************************************
#include<iostream> 
#include<sstream> 
#include<cstdlib> 
#include<cmath> 
#include<vector> 
#include<string> 
#include<algorithm> 
using namespace std; 
typedef vector<int>VI;typedef vector<VI>VVI; 
typedef vector<string>VS; 
typedef pair<int,int>PII; 
#define FOR(i,n) for((i)=0;(i)<(n);(i)++) 
#define BE(a) ((a).begin()),((a).end()) 
#define SI(a) ((a).size()) 
#define PB push_back 
#define MP make_pair 
#define FORIT(i,a) for((i)=(a).begin();(i)!=(a).end();(i)++) 
#define CLR(a,v) memset((a),(v),sizeof(a)) 
 
class HuffmanDecoding { 
  public: 
  string decode(string o, VS dict) { 
    string ret, s; 
    int n, i, j; 
    ret = ""; 
    n = SI(dict); 
    s = ""; 
    FOR (i,SI(o)) { 
      s += o[i]; 
      FOR (j,n) if (dict[j] == s) break; 
      if (j == n) continue; 
      ret += (char)('A' + j); 
      s = ""; 
    } 
    return ret; 
  } 
 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.2 [15-Oct-2005 modified by Revenger]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/