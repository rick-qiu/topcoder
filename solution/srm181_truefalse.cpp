/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2253
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

class TrueFalse {
public:
    string answerKey(vector<string> graded);
};

string TrueFalse::answerKey(vector<string> graded) {
    string ret;
    return ret;
}


int test0() {
    vector<string> graded = {"2 TTF", "1 FTF", "2 FTT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "TTT";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> graded = {"7 TTFFTFT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "TTFFTFT";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> graded = {"9 TTTFFFFTTFFTTFT", "7 FFFFFFFFFFFFFFF"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "inconsistent";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> graded = {"9 TTTFFFFTTFFTTFT", "7 FFFFFFFFFFFFFFF", "8 TTTTTTTTTTTTTTT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFFFFFTTTTTTTT";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> graded = {"10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "10 TTTTTTTTTTTTTTT", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF", "5 FFFFFFFFFFFFFFF"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFFFTTTTTTTTTT";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> graded = {"6 FFTTFTTFTFFTT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "inconsistent";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> graded = {"2 TFFTF", "4 FFTFT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFFT";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> graded = {"5 FFTFTT", "5 TTTFTT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "FTTFTT";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> graded = {"9 TTTFTFTTFFTFFF", "6 TFTTFTTFTFFFTT", "7 FFTFTFFFFFFTTT", "4 TFFFTFFFTTFTTF"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFFFFTTFFTFFT";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> graded = {"2 TFT", "1 FTF", "1 FFT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "TFF";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> graded = {"1 FT", "2 FF", "0 TT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "FF";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> graded = {"1 T", "0 F", "1 T", "0 F"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "T";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> graded = {"4 TFFFF", "4 TTFFT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "TFFFT";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> graded = {"1 FT", "1 TF", "2 FF"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "FF";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> graded = {"13 FFTTTFTFFTFTFF", "4 TTFFFTTTTFFFFT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFTTFTFFTFTFF";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> graded = {"5 FFTFFFTFFFFTTFTF", "9 FFFFFFTTTTFTFTTF", "5 FFTTFTTFFFFFTTFT", "8 FTFTFTTFFTFFTTFT", "6 TTTTTTTFTFTTTTFF"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "FTFFTFTTTTTFFFFT";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> graded = {"5 FTTFFTTTFF", "5 TFFTTFFFTT", "7 FFFTTTFFFF", "4 FFTTTFFFFT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFFFTFFTF";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> graded = {"5 TTTTTT", "6 TTTTTT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "inconsistent";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> graded = {"7 FFFFFTTTTTFFFFFT", "9 TTTTTFFFFFTTTTTF"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFFFFFFFFFFTTTF";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> graded = {"9 TTTFFFFTTFFTTFT", "7 FFFFFFFFFFFFFFF", "8 TTTTTTTTTTTTTTT", "8 TTTTTTTTTTTTTTT", "7 FFFFFFFFFFFFFFF", "9 TTTFFFFTTFFTTFT", "8 TTTTTTTTTTTTTTT", "7 FFFFFFFFFFFFFFF", "9 TTTFFFFTTFFTTFT", "8 TTTTTTTTTTTTTTT", "7 FFFFFFFFFFFFFFF", "9 TTTFFFFTTFFTTFT", "8 TTTTTTTTTTTTTTT", "7 FFFFFFFFFFFFFFF", "9 TTTFFFFTTFFTTFT", "8 TTTTTTTTTTTTTTT", "7 FFFFFFFFFFFFFFF", "9 TTTFFFFTTFFTTFT", "8 TTTTTTTTTTTTTTT", "7 FFFFFFFFFFFFFFF", "9 TTTFFFFTTFFTTFT", "8 TTTTTTTTTTTTTTT", "7 FFFFFFFFFFFFFFF", "9 TTTFFFFTTFFTTFT", "8 TTTTTTTTTTTTTTT", "7 FFFFFFFFFFFFFFF", "9 TTTFFFFTTFFTTFT", "8 TTTTTTTTTTTTTTT", "7 FFFFFFFFFFFFFFF", "9 TTTFFFFTTFFTTFT", "8 TTTTTTTTTTTTTTT", "7 FFFFFFFFFFFFFFF", "9 TTTFFFFTTFFTTFT", "8 TTTTTTTTTTTTTTT", "7 FFFFFFFFFFFFFFF", "9 TTTFFFFTTFFTTFT", "8 TTTTTTTTTTTTTTT", "7 FFFFFFFFFFFFFFF", "9 TTTFFFFTTFFTTFT", "8 TTTTTTTTTTTTTTT", "7 FFFFFFFFFFFFFFF", "9 TTTFFFFTTFFTTFT", "8 TTTTTTTTTTTTTTT", "7 FFFFFFFFFFFFFFF", "9 TTTFFFFTTFFTTFT", "8 TTTTTTTTTTTTTTT", "7 FFFFFFFFFFFFFFF", "9 TTTFFFFTTFFTTFT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFFFFFTTTTTTTT";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> graded = {"1 FF"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "inconsistent";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> graded = {"14 TTTTTTTTTTTTTT", "13 TTTTTTTTTTTTTF"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "TTTTTTTTTTTTTT";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> graded = {"9 TTTFFFFTTFFTTFT", "7 FFFFFFFFFFFFFFF"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "inconsistent";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> graded = {"12 TTTFFFTFTFTF"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "TTTFFFTFTFTF";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> graded = {"9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "inconsistent";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> graded = {"2 TTF", "1 FTF", "2 FTT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "TTT";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> graded = {"1 TT", "1 TT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "inconsistent";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> graded = {"10 TTTTTTTTTT", "0 FFFFFFFFFF"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "TTTTTTTTTT";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> graded = {"9 TTTTTTTTTFFFFFF", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT", "9 FFFFFFTTTTTTTTT"};
    TrueFalse* pObj = new TrueFalse();
    clock_t start = clock();
    string result = pObj->answerKey(graded);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFFFFTTTFFFFFF";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=4725&pm=2253
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define FORD(i,a,b) for(int i=(a);i>=(b);--i)
#define FOREACH(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();++i)
typedef long long LL;
const int INF = 1000000000;
typedef vector<int> VI;
template<class T> inline int size(const T&c) { return c.size(); }
 
char buf1[1000];
 
string i2s(int x) {
  sprintf(buf1,"%d",x);
  return buf1;
}
 
int bits(int x) {
  if(x==0) return 0; else return (x&1)+bits(x>>1);
}
 
struct TrueFalse {
  // MAIN
  string answerKey(vector <string> graded) {
    vector<int> ile;
    vector<int> ans;
    int n;
    FOREACH(it,graded) {
      istringstream is(*it);
      int x; string s;
      is >> x >> s;
      n = size(s);
      ile.push_back(x);
      int y = 0;
      REP(i,n) if(s[i]=='T') y+= 1<<(n-1-i);
      ans.push_back(y);
    }
    int m = size(ile);
    int aa;
    for(aa=0;aa<1<<n;++aa) {
      REP(i,n) {
        int cor = 0;
        REP(j,m) {
          if((ans[j]&(1<<i))==((aa&(1<<i)))) ++cor;
        }
        if(cor==0) goto yyy;
      }
      REP(i,m) {
        if(bits(ans[i] ^ aa) != n-ile[i]) goto yyy;
      }
      goto xxx;
yyy:;
    }
    return "inconsistent";
xxx:;
    string res;
    REP(i,n) if(aa&(1<<(n-1-i))) res+='T'; else res+='F';
    return res;
  }
  
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/