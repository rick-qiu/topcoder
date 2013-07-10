/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=961
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

class LetterStrings {
public:
    int sum(vector<string> s);
};

int LetterStrings::sum(vector<string> s) {
    int ret;
    return ret;
}


int test0() {
    vector<string> s = {"akahsdfkjhadfkhsak", "aaaaaaaaaabbbbbbbbbbccccccccccddddddddddeeeeeeeeee", "DFG-DSF-G-WAT-WE-GF-G-B-SG-FDG-A-G-AV-AV-AS-VF-ASF", "-ASDF-SADF-SA-F-GB-VB-X-BX-VB--CV-X-F-RET--WTWR-E-", "--------------------------------------------------", "-AF-ASDF-ASDF--GE-T-G-BY-UYUIY-JH-M-HM-YJ-KY-K-UYK", "-"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> s = {"-"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
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
    vector<string> s = {"A"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> s = {"aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdkaaEwrTuCdka"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> s = {"aEwrTuCd---E-wrTuCdka-wrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdk-aEwrTuCdka-EwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdkaaE-rTuCdkaaw-rTuCdka", "aEwrT-CdkaaEwrTu-dkaaEwrT---kaaEwrTu--kaaEwrTuCdka", "aEwrTuCdk---wrTuCdk--EwrTuCdkaaEwrTuCdka---rTuCdk-", "aEwrTuCd---E-wrTuCdka-wrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdk-aEwrTuCdka-EwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdkaaE-rTuCdkaaw-rTuCdka", "aEwrT-CdkaaEwrTu-dkaaEwrT---kaaEwrTu--kaaEwrTuCdka", "aEwrTuCdk---wrTuCdk--EwrTuCdkaaEwrTuCdka---rTuCdk-", "aEwrTuCd---E-wrTuCdka-wrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdk-aEwrTuCdka-EwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdkaaE-rTuCdkaaw-rTuCdka", "aEwrT-CdkaaEwrTu-dkaaEwrT---kaaEwrTu--kaaEwrTuCdka", "aEwrTuCdk---wrTuCdk--EwrTuCdkaaEwrTuCdka---rTuCdk-", "aEwrTuCd---E-wrTuCdka-wrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdk-aEwrTuCdka-EwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdkaaE-rTuCdkaaw-rTuCdka", "aEwrT-CdkaaEwrTu-dkaaEwrT---kaaEwrTu--kaaEwrTuCdka", "aEwrTuCdk---wrTuCdk--EwrTuCdkaaEwrTuCdka---rTuCdk-", "aEwrTuCd---E-wrTuCdka-wrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdk-aEwrTuCdka-EwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdkaaE-rTuCdkaaw-rTuCdka", "aEwrT-CdkaaEwrTu-dkaaEwrT---kaaEwrTu--kaaEwrTuCdka", "aEwrTuCdk---wrTuCdk--EwrTuCdkaaEwrTuCdka---rTuCdk-", "aEwrTuCd---E-wrTuCdka-wrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdk-aEwrTuCdka-EwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdkaaE-rTuCdkaaw-rTuCdka", "aEwrT-CdkaaEwrTu-dkaaEwrT---kaaEwrTu--kaaEwrTuCdka", "aEwrTuCdk---wrTuCdk--EwrTuCdkaaEwrTuCdka---rTuCdk-", "aEwrTuCd---E-wrTuCdka-wrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdk-aEwrTuCdka-EwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdkaaE-rTuCdkaaw-rTuCdka", "aEwrT-CdkaaEwrTu-dkaaEwrT---kaaEwrTu--kaaEwrTuCdka", "aEwrTuCdk---wrTuCdk--EwrTuCdkaaEwrTuCdka---rTuCdk-", "aEwrTuCd---E-wrTuCdka-wrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdk-aEwrTuCdka-EwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdkaaE-rTuCdkaaw-rTuCdka", "aEwrT-CdkaaEwrTu-dkaaEwrT---kaaEwrTu--kaaEwrTuCdka", "aEwrTuCdk---wrTuCdk--EwrTuCdkaaEwrTuCdka---rTuCdk-", "aEwrTuCd---E-wrTuCdka-wrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdk-aEwrTuCdka-EwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdkaaE-rTuCdkaaw-rTuCdka", "aEwrT-CdkaaEwrTu-dkaaEwrT---kaaEwrTu--kaaEwrTuCdka", "aEwrTuCdk---wrTuCdk--EwrTuCdkaaEwrTuCdka---rTuCdk-", "aEwrTuCd---E-wrTuCdka-wrTuCdkaaEwrTuCdkaaEwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdk-aEwrTuCdka-EwrTuCdka", "aEwrTu-dkaaEwrT-CdkaaEwrTuCdkaaE-rTuCdkaaw-rTuCdka", "aEwrT-CdkaaEwrTu-dkaaEwrT---kaaEwrTu--kaaEwrTuCdka", "aEwrTuCdk---wrTuCdk--EwrTuCdkaaEwrTuCdka---rTuCdk-"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 2210;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> s = {"--------------------", "--------------------", "-------------------------", "-------------------------------", "-------------------------", "---------------------"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
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
    vector<string> s = {"-----Abc"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
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
    vector<string> s = {"-A-B-C-D", "--------EFGHI", "JKLMNOPQR", "---STU-VW-XYZ"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> s = {"This-is-a-problem-for", "-TopCoder-to-be-used-in-division-two", "-as-the-easy-problem----"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> s = {"------------------", "----------------------", "--------------------------", "---------------------", "---------------a"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> s = {"--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "-------------------------------------------------a"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> s = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> s = {"gotta-love-test-cases", "gotta-love-test-cases", "gotta-love-test-cases", "gotta-love-test-cases", "gotta-love-test-cases"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> s = {"lksfj-a-fd-sdafk-adkfsdk-f", "-askf-askf-askf-sakf-", "sd-afk-sadkf-sadfk-sadkf-akg-gke-fkg-k", "-k", "ewrke", "rwwe-rkf-skc-kqw-ekw-fkwefr", "we", "fwk-fs", "dfs", "dfks-", "fw-kf-we", "fkwe-f"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> s = {"-", "-"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> s = {"a", "-", "a", "-", "a", "-"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> s = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "Z", "Y", "X", "W", "V", "U", "T", "S", "R", "Q", "P", "O", "N", "M", "L", "K", "J", "I", "H", "G", "F", "E"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> s = {"JKFSDJ", "KJSdjfsdfjsdlfj", "sdFkjsdFS", "dsflksdjfl", "sdFSDFKJSDFKjalkrjwi", "Werwrewerwe", "-wer", "wer-we-rwe-r-we-rwe-r", "ASF", "SADF", "s-adf", "-sadf", "-sadf", "sd-f", "sa-df", "a", "fW-wer-wrWERWER-"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 129;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> s = {"--asd", "-asdo-", "abcd"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> s = {"--ABAD-FASDB--", "-----------sfdgsdf-", "asdfasfd--------", "-------sfdgsdfg----", "adfgsdfgsdfgsdfgsdfgsdfgsdfgsdfg", "------------------------------------------"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> s = {"charumathi", "krishnan"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> s = {"-A-B-C-D", "--------EFGHI", "JKLMNOPQR", "---STU-VW-XYZ"};
    LetterStrings* pObj = new LetterStrings();
    clock_t start = clock();
    int result = pObj->sum(s);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8369955&rd=5848&pm=961
********************************************************************************
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <cmath>
#include <cctype>
#include <cstdio>
#include <utility>
using namespace std;
 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define VI vector<int>
#define VVI vector<vector<int> >
#define VS vector<string>
#define si size()
#define len length()
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
class LetterStrings
{
  public:
  int sum(vector <string> s)
  {
    int ret=0;
    for(int c=0;c<s.si;c++)
      for(int d=0;d<s[c].len;d++)
        if(isalpha(s[c][d]))
          ret++;
    return ret;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/