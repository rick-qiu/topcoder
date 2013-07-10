/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6767
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

class PalindromeDecoding {
public:
    string decode(string code, vector<int> position, vector<int> length);
};

string PalindromeDecoding::decode(string code, vector<int> position, vector<int> length) {
    string ret;
    return ret;
}


int test0() {
    string code = "ab";
    vector<int> position = {0};
    vector<int> length = {2};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "abba";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string code = "Misip";
    vector<int> position = {2, 3, 1, 7};
    vector<int> length = {1, 1, 2, 2};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "Mississippi";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string code = "XY";
    vector<int> position = {0, 0, 0, 0};
    vector<int> length = {2, 4, 8, 16};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "XYYXXYYXXYYXXYYXXYYXXYYXXYYXXYYX";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string code = "TC206";
    vector<int> position = {1, 2, 5};
    vector<int> length = {1, 1, 1};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "TCCC2006";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string code = "nodecoding";
    vector<int> position = {};
    vector<int> length = {};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "nodecoding";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string code = "0123456789";
    vector<int> position = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> length = {10, 20, 40, 80, 160, 320, 357, 1, 1, 1};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "0000123456789987654321001234567899876543210012345678998765432100123456789987654321001234567899876543210012345678998765432100123456789987654321001234567899876543210012345678998765432100123456789987654321001234567899876543210012345678998765432100123456789987654321001234567899876543210012345678998765432100123456789987654321001234567899876543210012345678998765433456789987654321001234567899876543210012345678998765432100123456789987654321001234567899876543210012345678998765432100123456789987654321001234567899876543210012345678998765432100123456789987654321001234567899876543210012345678998765432100123456789987654321001234567899876543210012345678998765432100123456789987654321001234567899876543210012345678998765432102100123456789987654321001234567899876543210012345678998765432100123456789987654321001234567899876543210012345678998765432100123456789987654321001234567899876543210012345678998765432100123456789987654321001234567899876543210012345678998765432100123456789987654321001234567899876543210";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string code = "Xml";
    vector<int> position = {1, 1};
    vector<int> length = {2, 2};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "Xmllmlm";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string code = "4";
    vector<int> position = {0, 1, 2, 3, 2, 6, 3, 1, 15, 8};
    vector<int> length = {1, 1, 1, 1, 3, 1, 6, 14, 5, 23};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "444444444444444444444444444444444444444444444444444444444";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string code = "EdWA";
    vector<int> position = {2, 0, 5, 1, 2, 3, 19, 8, 23};
    vector<int> length = {2, 2, 1, 3, 6, 3, 1, 9, 3};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "EddEEddEEdWWddEEddEEddWWdEEdWAAAAW";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string code = "BX3U72vryn";
    vector<int> position = {8, 2, 11, 6, 15};
    vector<int> length = {2, 5, 3, 12, 2};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "BX3U72vv27U3ryyr33rnn3ryyr3U72vvny";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string code = "kT5";
    vector<int> position = {2, 0, 1, 6, 4, 3, 4, 13, 6};
    vector<int> length = {1, 1, 2, 1, 4, 1, 3, 2, 9};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "kkTTTk55kT5555555555Tk5555k";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string code = "nHo";
    vector<int> position = {0, 4, 0, 6, 1, 5, 9};
    vector<int> length = {2, 1, 3, 3, 1, 7, 4};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "nHHHHHnnoooooooooooonnHn";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string code = "r7QGlw3m";
    vector<int> position = {7, 4, 2, 0, 26, 30, 10, 53, 60};
    vector<int> length = {1, 4, 7, 16, 2, 7, 18, 4, 5};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "r7QGlw3mmmm3wlGQQGlw3mmmm3wllw3mmmm3wlGQQGlw3mlwGQ7r3wllwwllw3r7QQ7r3wGm";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string code = "d6eHD9Q";
    vector<int> position = {};
    vector<int> length = {};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "d6eHD9Q";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string code = "1MdMKdo07a";
    vector<int> position = {2, 6, 1, 19, 36, 33};
    vector<int> length = {4, 5, 11, 8, 1, 2};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "1MdMKddKMdoooodMKddKMdMdMKddKMdMdMKKM077a";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string code = "M30";
    vector<int> position = {1, 0, 6, 4, 10, 10, 4, 9, 9};
    vector<int> length = {1, 4, 1, 5, 1, 1, 1, 5, 11};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "M33000333MM333333MM33MM333333MM30";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string code = "htfA";
    vector<int> position = {1, 2, 4, 2, 0, 16, 26, 20, 50, 10};
    vector<int> length = {2, 4, 1, 9, 7, 8, 9, 7, 1, 28};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "htffttAAttffthAtfffftAAttAAAAttAAttffffffttAAttAAAAttAAtfffftAhtffftfffftfffftAA";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string code = "Toy";
    vector<int> position = {1, 3, 1, 7, 11, 9};
    vector<int> length = {2, 2, 5, 1, 1, 2};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "Toyyoooooyyyyooy";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string code = "uajlLcDSY";
    vector<int> position = {1};
    vector<int> length = {7};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "uajlLcDSSDcLljaY";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string code = "1QEjTeEpG6";
    vector<int> position = {5, 5, 9, 6, 2, 3, 47, 7};
    vector<int> length = {1, 5, 3, 7, 17, 25, 7, 18};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "1QEjTeeEpGGppppGGpEEpGGppppGGpEEpGGppppGGpEppGGppppGGpEEpGGppppGGpEeeTjGGjTeeEppEeeTjEeGGEee6";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string code = "8L1PMa1k2l";
    vector<int> position = {3, 1, 7};
    vector<int> length = {7, 7, 1};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "8L1PMa1kkk1aMP1L2ll2k1aMP";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string code = "7kfcAyDDkz";
    vector<int> position = {1, 10, 3, 10};
    vector<int> length = {5, 4, 3, 2};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "7kfcAyyAcyAccAfkDDkkDDkz";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string code = "S";
    vector<int> position = {0};
    vector<int> length = {1};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "SS";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string code = "k1Z1whlTQ";
    vector<int> position = {8, 8, 1, 17, 11};
    vector<int> length = {1, 2, 7, 2, 8};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "k1Z1whlTTlhw1Z1QQQQQQQQ1Z1wQQ";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string code = "53YdmdRk";
    vector<int> position = {4, 7, 6, 8, 5, 11, 13};
    vector<int> length = {1, 1, 2, 1, 1, 2, 3};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "53YdmmmdRRRdRRdkkdR";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string code = "w0qwyje";
    vector<int> position = {0, 7, 1, 4, 5, 18, 22, 3, 9};
    vector<int> length = {3, 2, 4, 1, 5, 1, 1, 3, 13};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "w0qq0000q0qq00qq00wwyjjyww00qq00qq0jjyee";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string code = "RdvSeNGp";
    vector<int> position = {2, 0, 0, 9, 12, 15, 10, 22, 69, 55};
    vector<int> length = {2, 2, 6, 2, 7, 4, 20, 27, 6, 22};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "RddRvSSvRddddRSveNGGNevGNevSRddRSveNGveNGGNevSRddddRSveNGGNevGNevSRddRSveNGGNNGGNevSRddRSveNGveNGGNevSRvdp";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string code = "Z";
    vector<int> position = {0, 1, 2, 1, 3, 5};
    vector<int> length = {1, 1, 1, 2, 3, 2};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZZZZZZZZZZ";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string code = "SBMZqaFOsh";
    vector<int> position = {7, 1, 8};
    vector<int> length = {2, 3, 3};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "SBMZZMBqaFOOFassOh";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string code = "mR";
    vector<int> position = {1, 0, 3, 3, 8, 10, 5};
    vector<int> length = {1, 3, 1, 4, 2, 1, 4};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "mRRRRRmmRRmmRRRRRR";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string code = "trLTXJ";
    vector<int> position = {3, 8, 6, 5, 6, 3, 10, 19};
    vector<int> length = {3, 1, 1, 3, 5, 7, 9, 15};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "trLTXJJJJJJJJJJXTJJJJTXJJJJJJJJJXTTXJJJJJJJJJXTJJT";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string code = "4";
    vector<int> position = {0, 0, 3, 3, 6, 2, 1};
    vector<int> length = {1, 2, 1, 2, 1, 1, 8};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "44444444444444444";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string code = "A0Ve8TqmTv";
    vector<int> position = {2, 1, 5, 3, 20, 25, 18, 2, 33, 66};
    vector<int> length = {6, 4, 11, 10, 3, 3, 11, 12, 11, 7};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "A0Ve88eV0TqmmmmmmqT0Ve88eVmqT0Ve88ee88qTTTTqqTTTTq88ee888ee88eVq888TqmmqTTqmmqT80Ve8eVTv";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string code = "1bWbk0i";
    vector<int> position = {1};
    vector<int> length = {1};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "1bbWbk0i";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string code = "dn";
    vector<int> position = {0, 2};
    vector<int> length = {2, 2};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "dnnddn";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string code = "S";
    vector<int> position = {0, 0, 1, 0, 4, 3, 5, 13, 3};
    vector<int> length = {1, 2, 2, 1, 3, 1, 4, 2, 8};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "SSSSSSSSSSSSSSSSSSSSSSSSS";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string code = "Misip";
    vector<int> position = {2, 3, 1, 7};
    vector<int> length = {1, 1, 2, 2};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "Mississippi";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string code = "delicious";
    vector<int> position = {2, 3, 1, 7};
    vector<int> length = {1, 1, 2, 2};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "dellellicciious";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string code = "TC206";
    vector<int> position = {1, 2, 5};
    vector<int> length = {1, 1, 1};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "TCCC2006";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string code = "abcd";
    vector<int> position = {1};
    vector<int> length = {1};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "abbcd";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string code = "AAAAAAAAAA";
    vector<int> position = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> length = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string code = "ab";
    vector<int> position = {0};
    vector<int> length = {2};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "abba";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string code = "Mssip";
    vector<int> position = {2};
    vector<int> length = {3};
    PalindromeDecoding* pObj = new PalindromeDecoding();
    clock_t start = clock();
    string result = pObj->decode(code, position, length);
    clock_t end = clock();
    delete pObj;
    string expected = "Mssippis";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310333&rd=10004&pm=6767
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
 
struct PalindromeDecoding { 
   string decode( string code, vector <int> position, vector <int> length ) { 
      int n = position.size(); 
 
      for( int i = 0; i < n; ++i ) { 
         int p = position[i]; 
         int l = length[i]; 
         string a = code.substr( 0, p ); 
         string b = code.substr( p, l ); 
         string c = code.substr( p+l ); 
         string d = b; 
         reverse( d.begin(), d.end() );  
         code = a + b + d + c; 
      } 
      return code; 
   } 
 
 
 
 
 
 
    
  
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 3.0 beta 7 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/