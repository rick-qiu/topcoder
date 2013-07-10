/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2371
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

class CounterfeitCoin {
public:
    string nextWeighing(int N, vector<string> left, vector<string> right, string result);
};

string CounterfeitCoin::nextWeighing(int N, vector<string> left, vector<string> right, string result) {
    string ret;
    return ret;
}


int test0() {
    int N = 12;
    vector<string> left = {};
    vector<string> right = {};
    string result = "";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCD-EFGH";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 12;
    vector<string> left = {"ABCD", "ABC"};
    vector<string> right = {"EFGH", "IJK"};
    string result = "EL";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "I-J";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 12;
    vector<string> left = {"ABCD", "ABC", "I"};
    vector<string> right = {"EFGH", "IJK", "J"};
    string result = "ELR";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 6;
    vector<string> left = {"AB", "EF"};
    vector<string> right = {"CD", "AC"};
    string result = "EE";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "error";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 7;
    vector<string> left = {"ACE"};
    vector<string> right = {"BDF"};
    string result = "E";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "A-G";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 20;
    vector<string> left = {"ACDJMNOQ", "CD", "G", "ABC", "R"};
    vector<string> right = {"BFIKLPST", "AK", "H", "FIK", "G"};
    string result = "LEEEE";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "JLM-NOP";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 26;
    vector<string> left = {};
    vector<string> right = {};
    string result = "";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFG-HIJKLMN";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 10;
    vector<string> left = {"EF", "HI"};
    vector<string> right = {"CD", "AB"};
    string result = "LL";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "error";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 12;
    vector<string> left = {"ABC", "ABD"};
    vector<string> right = {"DEF", "CEF"};
    string result = "RE";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "error";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 3;
    vector<string> left = {};
    vector<string> right = {};
    string result = "";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "A-B";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 26;
    vector<string> left = {"G"};
    vector<string> right = {"B"};
    string result = "E";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEF-HIJKLM";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 26;
    vector<string> left = {"CDEFHKMNPTUWZ"};
    vector<string> right = {"ABGIJLOQRSVXY"};
    string result = "R";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHI-JKLMNOPQT";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 6;
    vector<string> left = {"B"};
    vector<string> right = {"C"};
    string result = "E";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "AB-DE";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 26;
    vector<string> left = {"C", "E"};
    vector<string> right = {"D", "Q"};
    string result = "EE";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCFG-HIJKL";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 26;
    vector<string> left = {"B", "X", "X"};
    vector<string> right = {"D", "B", "D"};
    string result = "EEE";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "ACEFG-HIJKL";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 26;
    vector<string> left = {"E", "B", "B"};
    vector<string> right = {"F", "Q", "H"};
    string result = "EEE";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDG-IJKL";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 26;
    vector<string> left = {"B", "E", "F"};
    vector<string> right = {"C", "G", "I"};
    string result = "EEE";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "ABDH-JKLM";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 12;
    vector<string> left = {"AEFG"};
    vector<string> right = {"CDIK"};
    string result = "L";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "ABC-DEF";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 13;
    vector<string> left = {};
    vector<string> right = {};
    string result = "";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "A-B";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 13;
    vector<string> left = {"BCDL"};
    vector<string> right = {"EFJK"};
    string result = "E";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "A-B";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 15;
    vector<string> left = {"EFHIJ"};
    vector<string> right = {"BCKLM"};
    string result = "R";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "A-B";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 15;
    vector<string> left = {"BCDEH"};
    vector<string> right = {"IJKLM"};
    string result = "L";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "A-B";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 26;
    vector<string> left = {"HIJKLMN", "ABC"};
    vector<string> right = {"ABCDEFG", "DEF"};
    string result = "LE";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "AHI-GJK";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 26;
    vector<string> left = {"HIJKLMN", "ABC", "GHI", "A", "G"};
    vector<string> right = {"ABCDEFG", "DEF", "AJK", "K", "B"};
    string result = "LEREE";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 24;
    vector<string> left = {"ACDEF", "AEF"};
    vector<string> right = {"BHIJK", "GUV"};
    string result = "LR";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "error";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 26;
    vector<string> left = {"ABCDEFGHIJKL"};
    vector<string> right = {"MNOPQRSTUVWX"};
    string result = "E";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "A-Y";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 11;
    vector<string> left = {"BCDK", "A"};
    vector<string> right = {"EFHI", "F"};
    string result = "LE";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "BC-DE";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 20;
    vector<string> left = {"ILN", "BDEFHLO", "ACGLMNPR"};
    vector<string> right = {"BGQ", "ACKMNRT", "BDEHIKST"};
    string result = "ELR";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "AC-DM";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 26;
    vector<string> left = {"ABEFGIJMRUX"};
    vector<string> right = {"CDHLNOPQTVW"};
    string result = "R";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFG-HIJKLMN";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 14;
    vector<string> left = {"I", "C", "ABDJL"};
    vector<string> right = {"B", "J", "EFGIK"};
    string result = "EEL";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "AD-EL";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 24;
    vector<string> left = {"ABCDFGINOPW", "BDFGMORS"};
    vector<string> right = {"EHJKLQRSTUV", "JKLNQUVW"};
    string result = "RE";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "AC-EI";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 23;
    vector<string> left = {"ABFHLORT", "EPRTUV"};
    vector<string> right = {"CGIJMNQS", "GHIMOS"};
    string result = "LE";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "ABC-DFJ";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 18;
    vector<string> left = {"ACGHKQR", "DF", "BCEGHIOQ"};
    vector<string> right = {"EIJLMOP", "BQ", "AFJLMNPR"};
    string result = "RER";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "CG-HJ";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 17;
    vector<string> left = {"ABDGJKQ"};
    vector<string> right = {"CFILMOP"};
    string result = "R";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "ABC-DEF";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 11;
    vector<string> left = {"D"};
    vector<string> right = {"G"};
    string result = "E";
    CounterfeitCoin* pObj = new CounterfeitCoin();
    clock_t start = clock();
    string result = pObj->nextWeighing(N, left, right, result);
    clock_t end = clock();
    delete pObj;
    string expected = "ABC-DEF";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=270505&rd=4745&pm=2371
********************************************************************************
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cstdio>
#include <algorithm>
using namespace std;
 
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vd vector<double>
#define vll vector<ll>
#define fo(x,y) for((x)=0;(x)<(y);(x)++)
#define fi fo(i,n)
#define fj fo(j,n)
#define fk fo(k,n)
#define fl fo(l,n)
#define fir(n) fo(i,n)
#define fjr(n) fo(j,n)
#define fkr(n) fo(k,n)
#define flr(n) fo(l,n)
#define fr(x,y,z) for((x)=(y);(x)<(z);(x)++)
#define pb push_back
#define sz size()
#define cs c_str()
#define ins(x) insert(x)
#define dub (double)
#define df double
#define srt(f) sort(f.begin().f.end())
 
int opt[27][27][27];
int n;
 
int go(int h, int l, int ok, int b) {
int ret=999;
 
//if (h+l+ok+b!=n) return 0;
if (h+l==1 && b==0) { opt[h][l][ok]=0; return 0; }
if (h+l==0 && b==1) { opt[h][l][ok]=1; return 1; }
 
 
if (opt[h][l][ok]==-2) return 99999;
if (opt[h][l][ok]!=-1) return opt[h][l][ok];
opt[h][l][ok]=-2;
//printf("%d %d %d %d\n",h,l,ok,b);
 
int h1,h2,l1,l2,b1,b2,ok1,ok2;
 
for(h1=0;h1<=h;h1++) for(h2=0;h1+h2<=h;h2++)
for(l1=0;l1<=l;l1++) for(l2=0;l1+l2<=l;l2++)
for(b1=0;b1<=b;b1++) for(b2=0;b1+b2<=b;b2++) {
  int ret2=0;
 
  if (h1+h2+l1+l2+b1+b2==0) continue;
 
  ok1=h2+l2+b2-h1-l1-b1; ok1>?=0;
  ok2=h1+l1+b1-h2-l2-b2; ok2>?=0;
  if (ok1+ok2>ok) continue;
 
//  printf("%d %d %d %d   %d %d %d %d--\n",h1,l1,b1,ok1,h2,l2,b2,ok2);
 
  if (h1+l2+b1+b2) {   // left heavy
    ret2 >?=1+go(h1+b1,l2+b2,n-(h1+b1)-(l2+b2),0);
  }
  if (l1+h2+b1+b2) {   // right heavy
    ret2 >?=1+go(h2+b2,l1+b1,n-(h2+b2)-(l1+b1),0);
  }
  if ((l-l1-l2)+(h-h1-h2)+(b-b1-b2)) {
    ret2 >?=1+go(h-h1-h2,l-l1-l2,n-(h-h1-h2)-(l-l1-l2)-(b-b1-b2),b-b1-b2);
  }
//  if (ret2==0) printf("! %d %d %d %d   %d %d %d %d--\n",h1,l1,b1,ok1,h2,l2,b2,ok2);
 
  ret <?=ret2;
}
 
printf("%d %d %d = %d\n",h,l,ok,ret);
opt[h][l][ok]=ret;
return ret;
}
 
int canh[26],canl[26];
 
string best;
 
string create1(int h1,int l1,int b1,int ok1,int h2,int l2,int b2,int ok2) {
  int i;
  string ret;
  int used[26]; fi used[i]=0;
  while(h1+l1+b1+ok1) {
    fi if (!used[i]) {
      if(canl[i] && canh[i] && b1) { ret+=(char) ('A'+i); b1--; used[i]=1; } else
      if(canl[i] && !canh[i] && l1) { ret+=(char) ('A'+i); l1--; used[i]=1; } else
      if(!canl[i] && canh[i] && h1) { ret+=(char) ('A'+i); h1--; used[i]=1; } else
      if(!canl[i] && !canh[i] && ok1) { ret+=(char) ('A'+i); ok1--; used[i]=1; }
    }
  }
  ret+="-";
  while(h2+l2+b2+ok2) {
    fi if (!used[i]) {
      if(canl[i] && canh[i] && b2) { ret+=(char) ('A'+i); b2--; used[i]=1; } else
      if(canl[i] && !canh[i] && l2) { ret+=(char) ('A'+i); l2--; used[i]=1; } else
      if(!canl[i] && canh[i] && h2) { ret+=(char) ('A'+i); h2--; used[i]=1; } else
      if(!canl[i] && !canh[i] && ok2) { ret+=(char) ('A'+i); ok2--; used[i]=1; }
    }
  }
  return ret;
}
 
 
 
void go2(int h, int l, int ok, int b) {
int ret=999;
best="";
//if (h+l+ok+b!=n) return 0;
if (h+l==1 && b==0) return;
//if (h+l==0 && b==1) return 1;
 
//if (opt[h][l][ok]==-2) return 99999;
//if (opt[h][l][ok]!=-1) return opt[h][l][ok];
//opt[h][l][ok]=-2;
//printf("%d %d %d %d\n",h,l,ok,b);
 
int h1,h2,l1,l2,b1,b2,ok1,ok2;
 
for(h1=0;h1<=h;h1++) for(h2=0;h1+h2<=h;h2++)
for(l1=0;l1<=l;l1++) for(l2=0;l1+l2<=l;l2++)
for(b1=0;b1<=b;b1++) for(b2=0;b1+b2<=b;b2++) {
  int ret2=0;
 
  if (h1+h2+l1+l2+b1+b2==0) continue;
 
  ok1=h2+l2+b2-h1-l1-b1; ok1>?=0;
  ok2=h1+l1+b1-h2-l2-b2; ok2>?=0;
  if (ok1+ok2>ok) continue;
 
//  printf("%d %d %d %d   %d %d %d %d--\n",h1,l1,b1,ok1,h2,l2,b2,ok2);
 
  if (h1+l2+b1+b2) {   // left heavy
    ret2 >?=1+go(h1+b1,l2+b2,n-(h1+b1)-(l2+b2),0);
  }
  if (l1+h2+b1+b2) {   // right heavy
    ret2 >?=1+go(h2+b2,l1+b1,n-(h2+b2)-(l1+b1),0);
  }
  if ((l-l1-l2)+(h-h1-h2)+(b-b1-b2)) {
    ret2 >?=1+go(h-h1-h2,l-l1-l2,n-(h-h1-h2)-(l-l1-l2)-(b-b1-b2),b-b1-b2);
  }
 
//  printf("%d! %d %d %d %d   %d %d %d %d--\n",ret2,h1,l1,b1,ok1,h2,l2,b2,ok2);
 
  if (ret2==opt[h][l][ok]) {
 
  //   printf("opt %d %d %d %d   %d %d %d %d--\n",h1,l1,b1,ok1,h2,l2,b2,ok2);
 
 
    string temp=create1(h1,l1,b1,ok1,h2,l2,b2,ok2);
    if (best=="") best=temp;
    else if (temp.sz<best.sz) best=temp;
    else if (temp.sz==best.sz && temp<best) best=temp;
  }
}
 
//printf("%d %d %d = %d\n",h,l,ok,ret);
//opt[h][l][ok]=ret;
return;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
class CounterfeitCoin { public: string nextWeighing(int N, vs left, vs righ, string res) {
n=N;
int i,j,k;
string ret;
fir(27) fjr(27) fkr(27) opt[i][j][k]=-1;
//go(0,0,0,26);
 
fi canh[i]=canl[i]=1;
fir(left.sz) {
  if (res[i]=='E') {
    fjr(left[i].sz) canh[left[i][j]-'A']=canl[left[i][j]-'A']=0;
    fjr(righ[i].sz) canh[righ[i][j]-'A']=canl[righ[i][j]-'A']=0;
  }
  if (res[i]=='L') {
    int t[26]; fj t[j]=1; int ok=0;
    fjr(left[i].sz) canl[left[i][j]-'A']=0,t[left[i][j]-'A']=0;
    fjr(righ[i].sz) canh[righ[i][j]-'A']=0,t[righ[i][j]-'A']=0;
 
    fjr(left[i].sz) if(canh[left[i][j]-'A']) ok=1;
    fjr(righ[i].sz) if(canl[righ[i][j]-'A']) ok=1;
    if (!ok) return "error";
    fj if(t[j]) canh[j]=canl[j]=0;
  }
  if (res[i]=='R') {
    int t[26]; fj t[j]=1; int ok=0;
    fjr(left[i].sz) canh[left[i][j]-'A']=0,t[left[i][j]-'A']=0;
    fjr(righ[i].sz) canl[righ[i][j]-'A']=0,t[righ[i][j]-'A']=0;;
    fjr(left[i].sz) if(canl[left[i][j]-'A']) ok=1;
    fjr(righ[i].sz) if(canh[righ[i][j]-'A']) ok=1;
    if (!ok) return "error";
    fj if(t[j]) canh[j]=canl[j]=0;
  }
}
int l=0,h=0,b=0;
fi if(canh[i] && canl[i]) b++; else if (canh[i]) h++; else if (canl[i]) l++;
 
if (l+h+b==0) return "error";
 
j=go(h,l,n-h-l-b,b);
 
printf("%d\n",j);
go2(h,l,n-h-l-b,b);
return best;
}};

********************************************************************************
*******************************************************************************/