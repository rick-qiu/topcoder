/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11331
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

class PalindromeGame {
public:
    int getMaximum(vector<string> front, vector<int> back);
};

int PalindromeGame::getMaximum(vector<string> front, vector<int> back) {
    int ret;
    return ret;
}


int test0() {
    vector<string> front = {"topcoder", "redcoder", "redocpot"};
    vector<int> back = {7, 5, 3};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> front = {"rabbit"};
    vector<int> back = {1000000};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
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
    vector<string> front = {"abc", "abc", "def", "cba", "fed"};
    vector<int> back = {24, 7, 63, 222, 190};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> front = {"abc", "cba", "def", "abc", "fed"};
    vector<int> back = {24, 7, 63, 222, 190};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 482;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> front = {"a"};
    vector<int> back = {1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> front = {"xyx", "xyx", "xyx", "zzz", "zzz", "zzz"};
    vector<int> back = {5, 7, 2, 1, 6, 4};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> front = {"aaaaaaaaaaaa", "nopalindrome", "steponnopets", "emordnilapon", "aaaaaaaaaaaa", "steponnopets", "nopalindrome", "steponnopets", "nopalindrome", "bbbbbbbbbbbb", "cannotbeused", "cannotbeused", "steponnopets", "aaaaaaaaaaaa", "nopalindrome", "aaaaaaaaaaaa", "nopalindrome", "emordnilapon", "steponnopets", "nopalindrome"};
    vector<int> back = {4096, 131072, 64, 262144, 512, 1024, 65536, 2048, 32768, 1, 524288, 16384, 32, 4, 16, 2, 8, 128, 8192, 256};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 474854;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> front = {"thequickbrownfoxjumpsoverthelazydog"};
    vector<int> back = {1000000};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> front = {"thequickbrownfoxjumpsoverthelazydog", "godyzalehtrevospmujxofnworbkciuqeht"};
    vector<int> back = {19, 76};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> front = {"fhequickbrownfoxjumpsoverthelazydog", "godyzalehtrevospmujxofnworbkciuqeht"};
    vector<int> back = {19, 76};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> front = {"thequickbrownfoxjumpsoverthelazydoq", "godyzalehtrevospmujxofnworbkciuqeht"};
    vector<int> back = {19, 76};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> front = {"thequickbrownfoxjumpsoverthelazydog", "qodyzalehtrevospmujxofnworbkciuqeht"};
    vector<int> back = {19, 76};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> front = {"thequickbrownfoxjumpsoverthelazydog", "godyzalehtrevospmujxofnworbkciuqehf"};
    vector<int> back = {19, 76};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> front = {"thiswillbealongpalindromemordnilapgnolaeblliwsiht"};
    vector<int> back = {499};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> front = {"dhiswillbealongpalindromemordnilapgnolaeblliwsiht"};
    vector<int> back = {499};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
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
    vector<string> front = {"thiswillbealongpalindronemordnilapgnolaeblliwsiht"};
    vector<int> back = {499};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> front = {"thiswillbealongpalindromenordnilapgnolaeblliwsiht"};
    vector<int> back = {499};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> front = {"thiswillbealongpalindromemordnilapgnolaeblliwsihd"};
    vector<int> back = {499};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> front = {"thiswillbealongpalindromeemordnilapgnolaeblliwsiht"};
    vector<int> back = {499};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> front = {"phiswillbealongpalindromeemordnilapgnolaeblliwsiht"};
    vector<int> back = {499};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> front = {"thiswillbealongpalindromoemordnilapgnolaeblliwsiht"};
    vector<int> back = {499};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
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
    vector<string> front = {"thiswillbealongpalindromeomordnilapgnolaeblliwsiht"};
    vector<int> back = {499};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> front = {"thiswillbealongpalindromeemordnilapgnolaeblliwsihp"};
    vector<int> back = {499};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
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
    vector<string> front = {"hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "lfctktrygedlpmbooatphlicywlfybdiuaxxogkpeujgeiasft", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "ixzlnswijawcksnthxwggjsjdznfgrqetphgxmcjofuhyaqobg", "gboqayhufojcmxghpteqrgfnzdjsjggwxhtnskcwajiwsnlzxi", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "ixzlnswijawcksnthxwggjsjdznfgrqetphgxmcjofuhyaqobg", "hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "ixzlnswijawcksnthxwggjsjdznfgrqetphgxmcjofuhyaqobg", "gboqayhufojcmxghpteqrgfnzdjsjggwxhtnskcwajiwsnlzxi", "lastcjhxwdxxilxdbxawfaxtkjyfeucaticrrevixwthwwkute", "hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "ixzlnswijawcksnthxwggjsjdznfgrqetphgxmcjofuhyaqobg", "hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "etukwwhtwxiverrcitacuefyjktxafwaxbdxlixxdwxhjctsal", "hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "ixzlnswijawcksnthxwggjsjdznfgrqetphgxmcjofuhyaqobg", "ixzlnswijawcksnthxwggjsjdznfgrqetphgxmcjofuhyaqobg", "ziiavkadexabdiwxhqjbhgyzddzyghbjqhxwidbaxedakvaiiz", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "gboqayhufojcmxghpteqrgfnzdjsjggwxhtnskcwajiwsnlzxi", "hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "hjmyuwwkrxnfmqgeebeoapezsdzspmqcxjtgdyxkrpvmwmmpmp", "tfsaiegjuepkgoxxauidbyflwycilhptaoobmpldegyrtktcfl", "gboqayhufojcmxghpteqrgfnzdjsjggwxhtnskcwajiwsnlzxi", "gboqayhufojcmxghpteqrgfnzdjsjggwxhtnskcwajiwsnlzxi", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "pmpmmwmvprkxydgtjxcqmpszdszepaoebeegqmfnxrkwwuymjh", "ziiavkadexabdiwxhqjbhgyzddzyghbjqhxwidbaxedakvaiiz", "gboqayhufojcmxghpteqrgfnzdjsjggwxhtnskcwajiwsnlzxi"};
    vector<int> back = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 50000000;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> front = {"bptjtizbjdfmukyxxbmileaksskaelimbxxykumfdjbzitjtpb", "rbjavldthitldfowirhhruatggtaurhhriwofdltihtdlvajbr", "shxbxtidyjofgpqrnabgdknittinkdgbanrqpgfojyditxbxhs", "cmfllyppaymgdgfwvvvpjncqhhqcnjpvvvwfgdgmyappyllfmc", "xuaukuhwruwvtdajqopxhacjxxjcahxpoqjadtvwurwhukuaux", "vqohkuovpmxoxeveypmwbwfziizfwbwmpyevexoxmpvoukhoqv", "zedvmxsfhhoslqlukxgoavchvvhcvaogxkulqlsohhfsxmvdez", "dvgyloealfpunupqkwlqctlullultcqlwkqpunupflaeolygvd", "pliywrbgdwbxvtdlgtxlhahcnnchahlxtgldtvxbwdgbrwyilp", "ppkbyxahzbgizpsprwjwiymmxxmmyiwjwrpspzigbzhaxybkpp", "iznckjdrhiujhpemagerzwhavvahwzregamephjuihrdjkcnzi", "dbqxptyyvxfvicehzhqchghqaaqhghcqhzhecivfxvyytpxqbd", "aaigsxhhuvarwdfkpistrdevhhvedrtsipkfdwravuhhxsgiaa", "kgomneqlahxgkgcxlhvykmkfllfkmkyvhlxcgkgxhalqenmogk", "xyhqrpletzpmpmebilnlhavokkovahlnlibempmpztelprqhyx", "alutlssyaxalnmmtxmeeyrubmmburyeemxtmmnlaxayssltula", "fjwtavbkqcnaaanhzafpwcsrhhrscwpfazhnaaancqkbvatwjf", "jasdhqycfutuswyzyodvpbsxyyxsbpvdoyzywsutufcyqhdsaj", "qhuueksvynyimboqjlhdjfhdnndhfjdhljqobmiynyvskeuuhq", "wbruxzbvoualqdqlrqdjweupllpuewjdqrlqdqlauovbzxurbw", "ityexmrfylrjshcpctlmkswassawskmltcpchsjrlyfrmxeyti", "werngnsyixujjtygzizhhycfjjfcyhhzizgytjjuxiysngnrew", "kolhcsckjzypplxyblitgphvkkvhpgtilbyxlppyzjkcschlok", "jlgpfexzsfhttjklvlbxpacessecapxblvlkjtthfszxefpglj", "klbamhvcwhqchtaymjmklckgkkgkclkmjmyathcqhwcvhmablk", "lfhpellbxhhukpnktlvuhmmzhhzmmhuvltknpkuhhxbllephfl", "rxyqsxuepfcymcegbjsukzzovvozzkusjbgecmycfpeuxsqyxr", "lmdvlfxyqrshiswkwozybijujjujibyzowkwsihsrqyxflvdml", "pbehptugjdabeyqhxktqyesgzzgseyqtkxhqyebadjgutphebp", "lbymvxgkabtqmoktunltddyilliyddtlnutkomqtbakgxvmybl", "kcunlniqeissjsfpnmxwcdznaanzdcwxmnpfsjssieqinlnuck", "ebufnclmvzqwzwhyxgsgcvmaeeamvcgsgxyhwzwqzvmlcnfube", "yeofsydykuvviihkihkvtuzmttmzutvkhikhiivvukydysfoey", "jmgmmopcwybediwosomgrnrryyrrnrgmosowidebywcpommgmj", "qjbbdsgmomenpbidlntcbwevxxvewbctnldibpnemomgsdbbjq", "ujqcthnokczyugjkwgrtmsywbbwysmtrgwkjguyzckonhtcqju", "nbocykjrjysvxpxvhbqhtaryggyrathqbhvxpxvsyjrjkycobn", "lwvhylvxpxjjtxdatfcrgmtauuatmgrcftadxtjjxpxvlyhvwl", "jpnkoqvdcmlbuzyfiyeukznrggrnzkueyifyzublmcdvqoknpj", "dbgcnntfjdyfjzvwuaycisxhjjhxsicyauwvzjfydjftnncgbd", "xcylfwhgwqhxefrgbnozadmsiismdazonbgrfexhqwghwflycx", "grqwyonfygheejgbtfoljycwwwwcyjloftbgjeehgyfnoywqrg", "ygckjbbrpxizzpyjifokscekzzkecskofijypzzixprbbjkcgy", "skyeyftvldfdgvqvxcbietaxffxateibcxvqvgdfdlvtfyeyks", "ovzvklydseowcevrstbbeyhgjjghyebbtsrvecwoesdylkvzvo", "eattvzichqilhfydzpfkqyquaauqyqkfpzdyfhliqhcizvttae", "vhsfkwdopjawpuosgtgtbxpfhhfpxbtgtgsoupwajpodwkfshv", "nfnizinzdduumtnkwiybfvugllguvfbyiwkntmuuddznizinfn", "uzfbzudusdawgvftkgkszmupccpumzskgktfvgwadsuduzbfzu", "zivihsufyoxsdvbeqojhugerhhreguhjoqebvdsxoyfushiviz"};
    vector<int> back = {3530, 4030, 1276, 4088, 3075, 3861, 1366, 2181, 3283, 3353, 4611, 4688, 5093, 2999, 1579, 5323, 4052, 4931, 616, 1822, 5209, 5200, 5949, 1531, 3436, 3357, 2676, 1999, 2938, 3105, 863, 1705, 177, 5458, 1276, 3137, 5779, 3530, 479, 4236, 5909, 180, 3780, 174, 5410, 4598, 1390, 3192, 2276, 437};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 5949;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> front = {"vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv", "vtampzmroiijokmzbxsqpclkmmklcpqsxbzmkojiiormzpmatv"};
    vector<int> back = {427, 756, 992, 241, 370, 692, 621, 723, 989, 587, 994, 284, 660, 531, 1022, 707, 597, 840, 308, 597, 840, 681, 242, 992, 421, 1021, 943, 681, 621, 810, 640, 1022, 840, 958, 692, 663, 588, 835, 876, 663, 810, 513, 707, 979, 694, 958, 274, 421, 733, 900};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 34956;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> front = {"efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx", "efiezjynivqjmbgcmmmylpdqvkfdbqiybegqcbieyyphjoasqx"};
    vector<int> back = {76229, 227374, 133120, 84094, 230319, 154315, 223494, 251667, 166774, 245312, 172504, 67485, 75771, 139727, 230319, 154315, 230351, 253235, 288866, 184067, 302578, 193146, 139727, 144578, 231766, 308253, 262335, 230228, 144578, 153813, 227374, 184067, 210948, 227930, 186982, 363168, 302578, 288866, 338220, 193146, 317461, 212743, 313755, 318635, 200688, 26395, 270839, 251667, 105055, 266022};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
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
    vector<string> front = {"vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "tpekppxqtpigriasudscmlwxbbaaeoxxcnyepmsmrylafawlsv", "tpekppxqtpigriasudscmlwxbbaaeoxxcnyepmsmrylafawlsv", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "tpekppxqtpigriasudscmlwxbbaaeoxxcnyepmsmrylafawlsv", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "tpekppxqtpigriasudscmlwxbbaaeoxxcnyepmsmrylafawlsv", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "tpekppxqtpigriasudscmlwxbbaaeoxxcnyepmsmrylafawlsv", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "tpekppxqtpigriasudscmlwxbbaaeoxxcnyepmsmrylafawlsv", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "tpekppxqtpigriasudscmlwxbbaaeoxxcnyepmsmrylafawlsv", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "tpekppxqtpigriasudscmlwxbbaaeoxxcnyepmsmrylafawlsv", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "tpekppxqtpigriasudscmlwxbbaaeoxxcnyepmsmrylafawlsv", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "tpekppxqtpigriasudscmlwxbbaaeoxxcnyepmsmrylafawlsv", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "tpekppxqtpigriasudscmlwxbbaaeoxxcnyepmsmrylafawlsv", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "tpekppxqtpigriasudscmlwxbbaaeoxxcnyepmsmrylafawlsv", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept", "vslwafalyrmsmpeyncxxoeaabbxwlmcsdusairgiptqxppkept"};
    vector<int> back = {1, 5, 8, 10, 42, 38, 36, 33, 48, 28, 26, 36, 25, 43, 50, 16, 31, 5, 36, 24, 20, 36, 39, 39, 34, 26, 31, 6, 34, 15, 21, 20, 32, 31, 11, 8, 41, 16, 29, 30, 47, 12, 47, 37, 38, 31, 17, 32, 4, 32};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 902;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> front = {"dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "lhfmufqdtawfkilsewisiheqvqsfgjdyqxskqnfmbsritrskkd", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl", "dkksrtirsbmfnqksxqydjgfsqvqehisiweslikfwatdqfumfhl"};
    vector<int> back = {1861, 2376, 1125, 86, 797, 2613, 2140, 1679, 1421, 2034, 92, 2111, 412, 2445, 772, 628, 23, 249, 1733, 847, 2649, 1239, 2347, 211, 2218, 1111, 1401, 1688, 2406, 397, 2693, 1025, 842, 197, 2670, 2068, 1143, 1769, 2226, 973, 2673, 1767, 738, 750, 920, 213, 1998, 2667, 936, 1707};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 71086;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> front = {"mcjqdteeuimiqltjsmjvegkfidgdqpqxjvifarrdmcfayypjcg", "ubzirkuiexmubaqytnulztupdawsxrkrfjbzmrehsesssydfls", "lkgbuvmsvwwrphxfvnfusvdoonumpwgvubcnwnawhyuntiiivt", "cuvbpkbdqxspgwtioefmlvtwwfgpxqgplwhmsobmcahfusqtho", "lkgbuvmsvwwrphxfvnfusvdoonumpwgvubcnwnawhyuntiiivt", "cuvbpkbdqxspgwtioefmlvtwwfgpxqgplwhmsobmcahfusqtho", "lkgbuvmsvwwrphxfvnfusvdoonumpwgvubcnwnawhyuntiiivt", "mcjqdteeuimiqltjsmjvegkfidgdqpqxjvifarrdmcfayypjcg", "rssovkmhdaskeufcraevaftjzsijkdbczhvcwkzwdbjazpdmxz", "wcuzmjojsvalacrvimunavxtmbcmqfjxjnkjebfsvpjryfvtif", "najkhodrphvlyrbhfslncfxmpkfnzjmtpdbegxsbhubvwwbskk", "gcjpyyafcmdrrafivjxqpqdgdifkgevjmsjtlqimiueetdqjcm", "wcgwyvvbmnaozccdcffdqbaqlprtpngyesrlwmjevlnhvvnjhl", "tviiitnuyhwanwncbuvgwpmunoodvsufnvfxhprwwvsmvubgkl", "hfndgkhltykeqkkdoikiplsoysgvdnrajnlpqavjadehtfpzxz", "lhjnvvhnlvejmwlrseygnptrplqabqdffcdcczoanmbvvywgcw", "fitvfyrjpvsfbejknjxjfqmcbmtxvanumivrcalavsjojmzucw", "slfdyssseshermzbjfrkrxswadputzluntyqabumxeiukrizbu", "lkgbuvmsvwwrphxfvnfusvdoonumpwgvubcnwnawhyuntiiivt", "ubzirkuiexmubaqytnulztupdawsxrkrfjbzmrehsesssydfls", "fitvfyrjpvsfbejknjxjfqmcbmtxvanumivrcalavsjojmzucw", "kksbwwvbuhbsxgebdptmjznfkpmxfcnlsfhbrylvhprdohkjan", "rssovkmhdaskeufcraevaftjzsijkdbczhvcwkzwdbjazpdmxz", "najkhodrphvlyrbhfslncfxmpkfnzjmtpdbegxsbhubvwwbskk", "hfndgkhltykeqkkdoikiplsoysgvdnrajnlpqavjadehtfpzxz", "ubzirkuiexmubaqytnulztupdawsxrkrfjbzmrehsesssydfls", "ubzirkuiexmubaqytnulztupdawsxrkrfjbzmrehsesssydfls", "cuvbpkbdqxspgwtioefmlvtwwfgpxqgplwhmsobmcahfusqtho", "rssovkmhdaskeufcraevaftjzsijkdbczhvcwkzwdbjazpdmxz", "ohtqsufhacmbosmhwlpgqxpgfwwtvlmfeoitwgpsxqdbkpbvuc", "wcgwyvvbmnaozccdcffdqbaqlprtpngyesrlwmjevlnhvvnjhl", "nfrizjawupejbwtvlhuncilmruhssifycgkmpxqobbxvffnhfv", "nfrizjawupejbwtvlhuncilmruhssifycgkmpxqobbxvffnhfv", "wcgwyvvbmnaozccdcffdqbaqlprtpngyesrlwmjevlnhvvnjhl", "zxzpfthedajvaqplnjarndvgsyoslpikiodkkqekytlhkgdnfh", "hfndgkhltykeqkkdoikiplsoysgvdnrajnlpqavjadehtfpzxz", "najkhodrphvlyrbhfslncfxmpkfnzjmtpdbegxsbhubvwwbskk", "fitvfyrjpvsfbejknjxjfqmcbmtxvanumivrcalavsjojmzucw", "hfndgkhltykeqkkdoikiplsoysgvdnrajnlpqavjadehtfpzxz", "nfrizjawupejbwtvlhuncilmruhssifycgkmpxqobbxvffnhfv", "cuvbpkbdqxspgwtioefmlvtwwfgpxqgplwhmsobmcahfusqtho", "fitvfyrjpvsfbejknjxjfqmcbmtxvanumivrcalavsjojmzucw", "mcjqdteeuimiqltjsmjvegkfidgdqpqxjvifarrdmcfayypjcg", "najkhodrphvlyrbhfslncfxmpkfnzjmtpdbegxsbhubvwwbskk", "zxmdpzajbdwzkwcvhzcbdkjiszjtfavearcfueksadhmkvossr", "vfhnffvxbboqxpmkgcyfisshurmlicnuhlvtwbjepuwajzirfn", "wcgwyvvbmnaozccdcffdqbaqlprtpngyesrlwmjevlnhvvnjhl", "rssovkmhdaskeufcraevaftjzsijkdbczhvcwkzwdbjazpdmxz", "mcjqdteeuimiqltjsmjvegkfidgdqpqxjvifarrdmcfayypjcg", "nfrizjawupejbwtvlhuncilmruhssifycgkmpxqobbxvffnhfv"};
    vector<int> back = {35479, 12818, 21951, 7816, 9694, 320, 29268, 21147, 28796, 22306, 21846, 42032, 27962, 39742, 37303, 25620, 23571, 33623, 10552, 29268, 22484, 15191, 18531, 26313, 29336, 15582, 25376, 26489, 26928, 24365, 10905, 10998, 21901, 27943, 24104, 35586, 33310, 24104, 40601, 27062, 29434, 2121, 26928, 21846, 20830, 21951, 8372, 19310, 6194, 21901};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 575048;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> front = {"jjnneixpabakgnuvvancfggfcnavvungkabapxiennjj"};
    vector<int> back = {3565};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 3565;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> front = {"nzmnxzanbwypdtkamqeemwsbakpcxjcfkdlk"};
    vector<int> back = {6626};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
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
    vector<string> front = {"apwcwpa", "apwcwpa"};
    vector<int> back = {19542, 40862};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 60404;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> front = {"kpguhwkvwzrvjrvgppgvrjvrzwvkwhugpk", "epkemelzgbcdhqpwxxwpqhdcbgzlemekpe"};
    vector<int> back = {589, 1038};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1038;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> front = {"prffwfiphkrsaoacuucaoasrkhpifwffrp", "qbvvxewxxzwprwxwzdsyvxibsabldfzmgt"};
    vector<int> back = {8867, 49314};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 8867;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> front = {"zkxzpofixooclx", "zkxzpofixooclx"};
    vector<int> back = {13480, 13818};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
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
    vector<string> front = {"vtplaawtsxovadnvzcgmsnqweamkiaastxbkse", "eskbxtsaaikmaewqnsmgczvndavoxstwaalptv"};
    vector<int> back = {206564, 12813};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 219377;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> front = {"xvvenxcbirkjuxr", "nzojtskdkstjozn"};
    vector<int> back = {10894, 63723};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 63723;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> front = {"lbnqtifwxbgwdtwyrlulgbbictvwpn", "dysykadagjmyxsmialibycsdynkual"};
    vector<int> back = {742, 1843};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> front = {"gxsyzyhiqnvzuftfuzvnqihyzysxg", "gxsyzyhiqnvzuftfuzvnqihyzysxg", "gxsyzyhiqnvzuftfuzvnqihyzysxg"};
    vector<int> back = {238851, 755008, 363549};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1357408;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> front = {"lgzfuzuppsbswenvkkvnewsbsppuzufzgl", "lgzfuzuppsbswenvkkvnewsbsppuzufzgl", "deqtbzyoctxfodyappaydofxtcoyzbtqed"};
    vector<int> back = {57108, 25434, 12868};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 95410;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> front = {"wzsugerxatesnnsetaxreguszw", "wzsugerxatesnnsetaxreguszw", "djnboriqnhlnmvemxrlqtmxcls"};
    vector<int> back = {37791, 50026, 56212};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 87817;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> front = {"shhsgdtfadwiubadjeimuycggcyumiejdabuiwdaftdgshhs", "nungkwsoivpworqqgynxqssqqssqxnygqqrowpvioswkgnun", "shhsgdtfadwiubadjeimuycggcyumiejdabuiwdaftdgshhs"};
    vector<int> back = {12674, 3574, 10965};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 27213;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> front = {"bznvskvwplrezvgiqigvzerlpwvksvnzb", "mkkhyjvpizfjeegxhxgeejfzipvjyhkkm", "mkkhyjvpizfjeegxhxgeejfzipvjyhkkm"};
    vector<int> back = {82542, 195879, 38694};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 317115;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> front = {"hpcivkfpkwpbijrzukbxgcjjcgxbkuzrjibpwkpfkvicph", "zwfcmuqjwjvztvhkdjdreqvvqerdjdkhvtzvjwjqumcfwz", "hlcplrstcnkbrshsbyzezjbbjzezybshsrbknctsrlpclh"};
    vector<int> back = {100511, 69338, 121368};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 121368;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> front = {"dieosmjjgsaasgjjmsoeid", "qdhpxukhokffkohkuxphdq", "ezshxtzieiphpecrwyerbu"};
    vector<int> back = {378287, 277267, 70267};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 378287;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> front = {"zjbcflhwdshsaashsdwhlfcbjz", "rztretkxcusbhmckzsgmfzrcff", "zjbcflhwdshsaashsdwhlfcbjz"};
    vector<int> back = {2448, 1503, 210};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 2658;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> front = {"zvtgdwxxwdgtvz", "jdqfusznfflnha", "jdqfusznfflnha"};
    vector<int> back = {6236, 3738, 15029};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 6236;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> front = {"bdjuqwihyqnggnqyhiwqujdb", "rytwphmyvtkcrdihmmcpvozx", "xzovpcmmhidrcktvymhpwtyr"};
    vector<int> back = {4948, 8311, 3475};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 16734;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> front = {"bmtlupfeoliknonkiloefpultmb", "atxwfacwivkztissdirjnxmpusk", "pimhenglknuavovaunklgnehmip"};
    vector<int> back = {3837, 5841, 33416};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 33416;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> front = {"sybwstztswbys", "nagydkhftghcy", "cnwcgnvhdcanb"};
    vector<int> back = {3059, 16854, 22962};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 3059;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> front = {"ndozzquvvyjzblzsuynvczkcusvpilineecs", "ndozzquvvyjzblzsuynvczkcusvpilineecs", "ndozzquvvyjzblzsuynvczkcusvpilineecs"};
    vector<int> back = {4604, 18894, 26435};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
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

int test52() {
    vector<string> front = {"kbfgojlmzccjlhsaydbomssrwpnuosrkmidvpowe", "kbfgojlmzccjlhsaydbomssrwpnuosrkmidvpowe", "ewopvdimkrsounpwrssmobdyashljcczmljogfbk"};
    vector<int> back = {3934, 1188, 5014};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 8948;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> front = {"tjjtcjqwht", "tjjtcjqwht", "ykqussuqky"};
    vector<int> back = {4600, 3451, 7397};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 7397;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> front = {"gtlsyunntlceu", "gtlsyunntlceu", "zevijutpvtvnj"};
    vector<int> back = {22572, 7437, 36102};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> front = {"zmtrifcoqswcbkaolqkslzkozoprjkzffwokasgigo", "ogigsakowffzkjrpozokzlskqloakbcwsqocfirtmz", "zmtrifcoqswcbkaolqkslzkozoprjkzffwokasgigo"};
    vector<int> back = {4454, 5121, 5025};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 10146;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> front = {"lpzwoocquwta", "atwuqcoowzpl", "atwuqcoowzpl"};
    vector<int> back = {37988, 26565, 72548};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 110536;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> front = {"askmj", "jmksa", "wipiw"};
    vector<int> back = {98889, 84196, 95265};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 278350;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> front = {"mbdfucznlwqrllurlttietigwxufkuqtfihjwjgwpfrrfia", "aifrrfpwgjwjhiftqukfuxwgiteittlrullrqwlnzcufdbm", "obphcqwxkrfboyzyyqkueglyynkzycgzngfbauepwcfqifj"};
    vector<int> back = {408535, 228487, 174836};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 637022;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> front = {"fjxmkgvtfntbcrrhwxe", "dyxsuhiususuihusxyd", "fjxmkgvtfntbcrrhwxe"};
    vector<int> back = {10581, 48080, 31717};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 48080;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> front = {"rvptkrqbhmrcvqrnlovdbwjwqrqymyfauoblrwdpxfprak", "mwhzgkimzgeibdynxhzqcthhtcqzhxnydbiegzmikgzhwm", "karpfxpdwrlbouafymyqrqwjwbdvolnrqvcrmhbqrktpvr"};
    vector<int> back = {65, 13375, 10690};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 24130;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> front = {"blpztdsptxarfdel", "incgvsjffjsvgcni", "incgvsjffjsvgcni"};
    vector<int> back = {41441, 10543, 47353};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 57896;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> front = {"yotblftphklamyyfdm", "ifcvfsmjjjjmsfvcfi", "mcwpflywvvwylfpwcm"};
    vector<int> back = {105843, 1074, 14116};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 14116;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> front = {"rhthtqlcwfvrvxzcopunixtdgpybbisdpulwjursjaazwkadhx", "wuickozwtnffredorvunzzbfssfbzznuvroderffntwzokciuw", "uzlxobsnjwaieyzffyvnujhdvmnuxdeatspcumxmkkeahlwiaq"};
    vector<int> back = {23837, 19160, 22751};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 19160;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> front = {"rheivwppdwxvvnq", "lnbzctxqawqngvn", "rheivwppdwxvvnq"};
    vector<int> back = {2065, 2103, 580};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> front = {"jopdcsufcezogczpqpbjxlhoqgcaldoxqmjyegijidqgtuq", "cbvyphypajtcgohyvyikxfnnbluneumtxofafzbtanurdhp", "qutgqdijigeyjmqxodlacgqohlxjbpqpzcgozecfuscdpoj"};
    vector<int> back = {1157, 1983, 3236};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 4393;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> front = {"rlemxgusgucogotjeihsfx", "yingnnxuafffmcbiavlbjm", "yingnnxuafffmcbiavlbjm"};
    vector<int> back = {19297, 77245, 55762};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> front = {"rvlo", "ckek", "kekc"};
    vector<int> back = {26379, 30373, 18854};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 49227;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> front = {"sfnztgydadkcxsszydmvjemqbbweedjnqpdsspc", "whmgccuxymeyoxfjoifcbgrtdgsrbeesshrtpvp", "laazzutbyzrgeojizgvrvgzijoegrzybtuzzaal"};
    vector<int> back = {5377, 7809, 1596};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1596;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> front = {"pfmoxenvxhhcawabitabsmlkqsschmqsw", "ybrdmybmxwmedkdngguzthgtcrffkrbbv", "xbcqzpwazbhiovhisovlgackkqulfsacx"};
    vector<int> back = {60487, 54222, 88005};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> front = {"wnteftexemkrrjxzj", "wnteftexemkrrjxzj", "dyfvdlrancofegpiz", "uvfbsitwewtisbfvu", "nsyrjtwpjikskybyh", "lvuhskvdojqmcrrny", "yepsnwwjzrqyznkjf", "qdgdzymwhbzpmvmri", "nqrxagfpbvclcalam", "wnteftexemkrrjxzj", "dyfvdlrancofegpiz", "uvfbsitwewtisbfvu", "noepfvsjeuilfgues", "nsyrjtwpjikskybyh", "hldzgqapnpaqgzdlh", "noepfvsjeuilfgues", "ynrrcmqjodvkshuvl", "hldzgqapnpaqgzdlh", "uvfbsitwewtisbfvu", "uvfbsitwewtisbfvu", "ebfgktggoucjoping", "rrcribarwrabircrr", "ebfgktggoucjoping", "qdgdzymwhbzpmvmri", "noepfvsjeuilfgues", "uvfbsitwewtisbfvu", "nsyrjtwpjikskybyh", "rrcribarwrabircrr", "rrcribarwrabircrr", "lvuhskvdojqmcrrny", "dyfvdlrancofegpiz", "rrcribarwrabircrr", "nqrxagfpbvclcalam", "lvuhskvdojqmcrrny", "uvfbsitwewtisbfvu", "rrcribarwrabircrr", "nqrxagfpbvclcalam", "yepsnwwjzrqyznkjf", "hiqdwkmvkbefxmsen", "hiqdwkmvkbefxmsen", "yepsnwwjzrqyznkjf", "wnteftexemkrrjxzj", "hldzgqapnpaqgzdlh", "hldzgqapnpaqgzdlh", "rrcribarwrabircrr", "hiqdwkmvkbefxmsen", "gkjgyvtkqlamdbnrf", "dyfvdlrancofegpiz", "noepfvsjeuilfgues", "rrcribarwrabircrr"};
    vector<int> back = {95590, 90328, 21769, 25048, 29486, 97060, 108874, 99847, 47341, 108055, 36140, 50195, 78855, 31181, 104654, 60673, 41362, 37118, 109227, 104059, 101993, 84665, 59520, 23106, 82062, 54236, 8923, 103851, 69384, 82972, 71920, 95356, 35312, 43247, 106662, 59956, 64851, 16140, 56913, 34866, 105514, 27253, 78742, 68776, 49788, 37132, 12637, 55634, 9549, 3842};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1343981;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> front = {"jlouxawxfaumdipkgejxelpvmnecubgzywknbjhdhtbnse", "oglwoxvkgqvogymmtejdcztkfowqohxqrocutxkmqpztds", "xesmlclsuphyoewtvpaknrwwrnkapvtweoyhpuslclmsex", "dhhxjjssmylgwqhrffzczejhvpyzlamkxsndhdmqavocjm", "xesmlclsuphyoewtvpaknrwwrnkapvtweoyhpuslclmsex", "jlouxawxfaumdipkgejxelpvmnecubgzywknbjhdhtbnse", "negfotpmqovnddaofenmcxcehnezdccfkmpxplchdnlvth", "dhhxjjssmylgwqhrffzczejhvpyzlamkxsndhdmqavocjm", "liocyuhguizvwxugdizckollokczidguxwvziughuycoil", "mjcovaqmdhdnsxkmalzypvhjezczffrhqwglymssjjxhhd"};
    vector<int> back = {145092, 152341, 180204, 143143, 152341, 138284, 146548, 198511, 146548, 143143};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 820747;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> front = {"gfkdwurtcbitxxtibctruwdkfg", "eigqalzpsqdzmmzdqspzlaqgie", "tuhamotccvxhbbhxvcctomahut", "zrsierjkdidqyyqdidkjreisrz", "ovylherqshxzppzxhsqrehlyvo", "etxmjvaifgolyylogfiavjmxte", "vnrtzrakqfobxxbofqkarztrnv", "ieyfnjpfbclddbfhqhqkjtxbrv", "xvnkhhzlhwsdvvdswhlzhhknvx", "gnpybizztuvnoonvutzzibypng", "aemikttbbzfmeemfzbbttkimea", "bcobjejewijbaabjiwejejbocb", "suslhrgqenilrygvupxaqfudmh", "cmeekoagehvlwibenkcczuyywx", "tuhamotccvxhbbhxvcctomahut", "ruimegefdtguoougtdfegemiur", "vosicbqqtqefggfeqtqqbcisov", "rqgwhznkoxceddecxoknzhwgqr", "ekbgcbajmwndkkdnwmjabcgbke", "xvnkhhzlhwsdvvdswhlzhhknvx", "vrbxtjkqhqhfbddlcbfpjnfyei", "sqxnmilbnaezttzeanblimnxqs", "vholqbmgcdcloolcdcgmbqlohv", "rqgwhznkoxceddecxoknzhwgqr", "vnrtzrakqfobxxbofqkarztrnv"};
    vector<int> back = {8558, 3523, 3227, 709, 6739, 7601, 3815, 6109, 4641, 6073, 7479, 5004, 6682, 7585, 5287, 4905, 4055, 2763, 859, 1968, 8799, 6218, 2974, 3147, 7706};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 56020;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> front = {"zpdifnukixi", "zpdifnukixi", "wtmqcvcqmtw", "wtmqcvcqmtw", "wtmqcvcqmtw", "wtmqcvcqmtw", "wtmqcvcqmtw", "sjmunhwlmpv", "sjmunhwlmpv", "sjmunhwlmpv", "sdlkriyxqcs", "sdlkriyxqcs", "scqxyirklds", "scqxyirklds", "scqxyirklds", "omucwtwcumo", "omucwtwcumo", "omucwtwcumo", "omucwtwcumo", "omucwtwcumo", "omucwtwcumo", "mvuhgpghuvm", "mvuhgpghuvm", "mvuhgpghuvm", "mvuhgpghuvm", "mvuhgpghuvm", "mvuhgpghuvm", "mgbhjkegzef", "mgbhjkegzef", "mgbhjkegzef", "mgbhjkegzef", "mgbhjkegzef", "mgbhjkegzef", "lpgelklegpl", "lpgelklegpl", "lpgelklegpl", "ixikunfidpz", "ixikunfidpz", "ixikunfidpz", "ixikunfidpz", "ixikunfidpz", "fezgekjhbgm", "fezgekjhbgm", "fezgekjhbgm", "fezgekjhbgm", "fezgekjhbgm"};
    vector<int> back = {2837, 2087, 4551, 1455, 313, 4408, 210, 1369, 4089, 4265, 4553, 2934, 539, 1548, 885, 3196, 452, 2559, 453, 2182, 403, 3952, 3287, 1542, 237, 1093, 473, 533, 518, 968, 159, 3854, 931, 1005, 2545, 1196, 1907, 2521, 1539, 3589, 1359, 1741, 3132, 1055, 611, 3512};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 73111;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> front = {"twtteevjzoumciixdnfcksbnethnfub", "dbjtbkcdsiaxsfnwnfsxaisdckbtjbd", "fwtqfwsnyojlasmnguwrtdjwzbosbpi", "fwtqfwsnyojlasmnguwrtdjwzbosbpi", "dbjtbkcdsiaxsfnwnfsxaisdckbtjbd", "twtteevjzoumciixdnfcksbnethnfub", "fwtqfwsnyojlasmnguwrtdjwzbosbpi", "twtteevjzoumciixdnfcksbnethnfub", "ipbsobzwjdtrwugnmsaljoynswfqtwf", "dbjtbkcdsiaxsfnwnfsxaisdckbtjbd", "bufnhtenbskcfndxiicmuozjveettwt", "fwtqfwsnyojlasmnguwrtdjwzbosbpi", "dbjtbkcdsiaxsfnwnfsxaisdckbtjbd", "ipbsobzwjdtrwugnmsaljoynswfqtwf", "fwtqfwsnyojlasmnguwrtdjwzbosbpi", "fwtqfwsnyojlasmnguwrtdjwzbosbpi", "cojwmxcttecsyjxrxjyscettcxmwjoc", "bufnhtenbskcfndxiicmuozjveettwt", "bufnhtenbskcfndxiicmuozjveettwt", "cojwmxcttecsyjxrxjyscettcxmwjoc", "fwtqfwsnyojlasmnguwrtdjwzbosbpi", "twtteevjzoumciixdnfcksbnethnfub", "bufnhtenbskcfndxiicmuozjveettwt", "ipbsobzwjdtrwugnmsaljoynswfqtwf", "cojwmxcttecsyjxrxjyscettcxmwjoc", "ipbsobzwjdtrwugnmsaljoynswfqtwf", "ipbsobzwjdtrwugnmsaljoynswfqtwf", "bufnhtenbskcfndxiicmuozjveettwt", "bufnhtenbskcfndxiicmuozjveettwt", "fwtqfwsnyojlasmnguwrtdjwzbosbpi", "ipbsobzwjdtrwugnmsaljoynswfqtwf", "bufnhtenbskcfndxiicmuozjveettwt", "bufnhtenbskcfndxiicmuozjveettwt", "twtteevjzoumciixdnfcksbnethnfub", "twtteevjzoumciixdnfcksbnethnfub", "twtteevjzoumciixdnfcksbnethnfub", "twtteevjzoumciixdnfcksbnethnfub", "twtteevjzoumciixdnfcksbnethnfub", "dbjtbkcdsiaxsfnwnfsxaisdckbtjbd", "bufnhtenbskcfndxiicmuozjveettwt", "twtteevjzoumciixdnfcksbnethnfub", "cojwmxcttecsyjxrxjyscettcxmwjoc", "twtteevjzoumciixdnfcksbnethnfub", "ipbsobzwjdtrwugnmsaljoynswfqtwf", "fwtqfwsnyojlasmnguwrtdjwzbosbpi", "dbjtbkcdsiaxsfnwnfsxaisdckbtjbd", "ipbsobzwjdtrwugnmsaljoynswfqtwf", "ipbsobzwjdtrwugnmsaljoynswfqtwf", "twtteevjzoumciixdnfcksbnethnfub", "twtteevjzoumciixdnfcksbnethnfub"};
    vector<int> back = {973668, 914559, 140599, 300625, 824221, 230480, 389527, 66722, 177642, 563778, 50591, 344152, 952389, 681607, 709703, 637522, 526735, 12274, 948668, 930438, 872964, 536625, 351472, 345157, 815463, 841718, 727927, 314638, 569295, 172013, 142069, 213481, 174480, 482335, 503419, 592771, 535587, 413773, 4333, 855242, 674163, 504927, 398529, 99888, 696670, 692392, 468622, 55432, 369067, 517274};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 23252828;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> front = {"kibcqdpmlweccpjmfcwiojgzcwzgvaienxnidxjlamsqvv", "emcumbcvoabqhnxympctkiggiktcpmyxnhqbaovcbmucme", "rtynrqfkqiehmhyurjankqtumzfjwysiqgiuqjmsttjlpe", "tesnathynatyaygkxjsyijkmkwkxaupkwkxrbyeyhhxhec", "gpoupunryfalskhiuniifmxghmvofchbshykvftqogcqhg", "xirytgajpgrnpyizfovkdxivsvdfwzisjazrcnuakuvrzz", "rtynrqfkqiehmhyurjankqtumzfjwysiqgiuqjmsttjlpe", "sogqfykcvppdikillubxngfmnqdmskjtkiuftqoryxwegj", "oimnyofaexstemceqepgzyhpkqsvbbnkylofjkkxjacgyr", "sxudmqletsicytaeuaanedjrqncmocljnpfyoiynjbgwxz", "kqmjfktfxtwgsachykanvfcbcpsttniujbgznawznkapzq", "ejpetvhqsdhljmlwhwdpsriyoaorhuehtdkdznmsjvhwfn", "jbrrcrnnwbkgmppbtxgjcgnubawkrowpkznefzppuwwkle", "zgdarnqhvxlruhdkeryqdprjrnuzzgvfiuuubwyzbrowfo", "ghqcgoqtfvkyhsbhcfovmhgxmfiinuihkslafyrnupuopg", "tesnathynatyaygkxjsyijkmkwkxaupkwkxrbyeyhhxhec", "pllytrxnezkhwjvrspgogewtdtslmefzblirgqzdqsznob", "pllytrxnezkhwjvrspgogewtdtslmefzblirgqzdqsznob", "eicjejjwgejipspvwcxantiitnaxcwvpspijegwjjejcie", "fqtxstqwwgkjdopoxpsambjilssfpkfudrlgsfkwelawaw", "jelwfympzrvtjfjcecuoerppndszffsnwoeotyonycyigc", "oimnyofaexstemceqepgzyhpkqsvbbnkylofjkkxjacgyr", "ejpetvhqsdhljmlwhwdpsriyoaorhuehtdkdznmsjvhwfn", "sxudmqletsicytaeuaanedjrqncmocljnpfyoiynjbgwxz", "recbvgajoywpxiqivthntydpxcodclnknilquwtvnprjzp", "ghqcgoqtfvkyhsbhcfovmhgxmfiinuihkslafyrnupuopg", "eicjejjwgejipspvwcxantiitnaxcwvpspijegwjjejcie", "fqtxstqwwgkjdopoxpsambjilssfpkfudrlgsfkwelawaw", "fqtxstqwwgkjdopoxpsambjilssfpkfudrlgsfkwelawaw", "kibcqdpmlweccpjmfcwiojgzcwzgvaienxnidxjlamsqvv"};
    vector<int> back = {9956, 10376, 4683, 3306, 9880, 6789, 8832, 3564, 12548, 5517, 9893, 5155, 2486, 6726, 4672, 10028, 6577, 5227, 9612, 4929, 7411, 1938, 3196, 7172, 13347, 3597, 771, 11692, 3471, 2335};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 35311;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> front = {"trcnfrnorsrosocnjzubazgzdfbfrhdrur", "trcnfrnorsrosocnjzubazgzdfbfrhdrur", "trcnfrnorsrosocnjzubazgzdfbfrhdrur", "trcnfrnorsrosocnjzubazgzdfbfrhdrur", "trcnfrnorsrosocnjzubazgzdfbfrhdrur", "trcnfrnorsrosocnjzubazgzdfbfrhdrur", "trcnfrnorsrosocnjzubazgzdfbfrhdrur", "trcnfrnorsrosocnjzubazgzdfbfrhdrur", "trcnfrnorsrosocnjzubazgzdfbfrhdrur", "tpremyjgqzgvhxopllpoxhvgzqgjymerpt", "tpremyjgqzgvhxopllpoxhvgzqgjymerpt", "tpremyjgqzgvhxopllpoxhvgzqgjymerpt", "rurdhrfbfdzgzabuzjncosorsronrfncrt", "rurdhrfbfdzgzabuzjncosorsronrfncrt", "rurdhrfbfdzgzabuzjncosorsronrfncrt", "rurdhrfbfdzgzabuzjncosorsronrfncrt", "rurdhrfbfdzgzabuzjncosorsronrfncrt", "rurdhrfbfdzgzabuzjncosorsronrfncrt", "rurdhrfbfdzgzabuzjncosorsronrfncrt", "rurdhrfbfdzgzabuzjncosorsronrfncrt", "pxuevgoymjtpgrwyaaywrgptjmyogveuxp", "pxuevgoymjtpgrwyaaywrgptjmyogveuxp", "pxuevgoymjtpgrwyaaywrgptjmyogveuxp", "pxuevgoymjtpgrwyaaywrgptjmyogveuxp", "pxuevgoymjtpgrwyaaywrgptjmyogveuxp", "pxuevgoymjtpgrwyaaywrgptjmyogveuxp", "pxuevgoymjtpgrwyaaywrgptjmyogveuxp", "pxuevgoymjtpgrwyaaywrgptjmyogveuxp", "pxuevgoymjtpgrwyaaywrgptjmyogveuxp", "pxuevgoymjtpgrwyaaywrgptjmyogveuxp", "pxuevgoymjtpgrwyaaywrgptjmyogveuxp", "cwkmfjerzqbirweyelwsnjagwryulicwfc", "cwkmfjerzqbirweyelwsnjagwryulicwfc", "cwkmfjerzqbirweyelwsnjagwryulicwfc", "cwkmfjerzqbirweyelwsnjagwryulicwfc", "cwkmfjerzqbirweyelwsnjagwryulicwfc", "cwkmfjerzqbirweyelwsnjagwryulicwfc", "cwkmfjerzqbirweyelwsnjagwryulicwfc", "cwkmfjerzqbirweyelwsnjagwryulicwfc", "cfwciluyrwgajnswleyewribqzrejfmkwc", "cfwciluyrwgajnswleyewribqzrejfmkwc", "cfwciluyrwgajnswleyewribqzrejfmkwc", "cfwciluyrwgajnswleyewribqzrejfmkwc", "cfwciluyrwgajnswleyewribqzrejfmkwc", "cfwciluyrwgajnswleyewribqzrejfmkwc", "cfwciluyrwgajnswleyewribqzrejfmkwc", "cfwciluyrwgajnswleyewribqzrejfmkwc", "cfwciluyrwgajnswleyewribqzrejfmkwc", "cfwciluyrwgajnswleyewribqzrejfmkwc", "cfwciluyrwgajnswleyewribqzrejfmkwc"};
    vector<int> back = {592, 770, 855, 987, 629, 1299, 819, 218, 770, 702, 1204, 855, 1565, 479, 643, 846, 980, 727, 1307, 477, 702, 1112, 984, 500, 829, 471, 1400, 1220, 1112, 980, 562, 1242, 683, 846, 1242, 611, 1025, 1039, 477, 506, 1186, 819, 302, 1053, 921, 1557, 1046, 1420, 1333, 786};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 42407;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> front = {"pobsyhohxupuxhohysbop", "mjxzwtqyltfcjgultqdiu", "mjxzwtqyltfcjgultqdiu", "pobsyhohxupuxhohysbop", "uidqtlugjcftlyqtwzxjm", "mjxzwtqyltfcjgultqdiu", "mwdpkssbzcqmdupryzzsf", "mjxzwtqyltfcjgultqdiu", "mwdpkssbzcqmdupryzzsf", "uidqtlugjcftlyqtwzxjm", "uidqtlugjcftlyqtwzxjm", "kewjmsztyujuytzsmjwek", "uidqtlugjcftlyqtwzxjm", "kewjmsztyujuytzsmjwek", "fszzyrpudmqczbsskpdwm", "pobsyhohxupuxhohysbop", "mjxzwtqyltfcjgultqdiu", "mjxzwtqyltfcjgultqdiu", "uidqtlugjcftlyqtwzxjm", "mjxzwtqyltfcjgultqdiu", "uidqtlugjcftlyqtwzxjm", "mjxzwtqyltfcjgultqdiu", "mwdpkssbzcqmdupryzzsf", "fszzyrpudmqczbsskpdwm", "mjxzwtqyltfcjgultqdiu", "kewjmsztyujuytzsmjwek", "uidqtlugjcftlyqtwzxjm", "mwdpkssbzcqmdupryzzsf", "mjxzwtqyltfcjgultqdiu", "uidqtlugjcftlyqtwzxjm", "fszzyrpudmqczbsskpdwm", "uidqtlugjcftlyqtwzxjm", "mjxzwtqyltfcjgultqdiu", "uidqtlugjcftlyqtwzxjm", "fszzyrpudmqczbsskpdwm", "uidqtlugjcftlyqtwzxjm", "kewjmsztyujuytzsmjwek", "kewjmsztyujuytzsmjwek", "mwdpkssbzcqmdupryzzsf", "kewjmsztyujuytzsmjwek", "mwdpkssbzcqmdupryzzsf", "mjxzwtqyltfcjgultqdiu", "fszzyrpudmqczbsskpdwm", "mwdpkssbzcqmdupryzzsf", "mwdpkssbzcqmdupryzzsf", "mwdpkssbzcqmdupryzzsf", "mwdpkssbzcqmdupryzzsf", "fszzyrpudmqczbsskpdwm", "mjxzwtqyltfcjgultqdiu", "pobsyhohxupuxhohysbop"};
    vector<int> back = {390281, 312240, 270429, 303257, 210175, 594465, 332025, 360307, 625927, 599978, 211672, 570374, 635361, 247817, 345107, 385285, 621545, 420631, 390381, 242304, 292295, 163222, 44112, 46604, 589644, 133538, 605457, 39962, 644497, 368355, 543119, 462574, 548031, 22471, 31851, 318115, 392193, 60788, 585525, 195274, 631467, 202852, 454688, 10393, 282224, 601320, 83485, 652567, 175372, 603687};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 17338697;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> front = {"ucaadvpcfwri", "mvuduttuduvm", "sjeqyddyqejs", "xogngjjgngox", "sccnygcvowbw", "fiixevvexiif", "ooeunmmnueoo", "bhiihpphiihb", "gicfyffyfcig", "ucaadvpcfwri", "oluktcctkulo", "ztfqdgulbdaf", "xogngjjgngox", "gvzmkkkkmzvg", "xgxfdioqxxne", "twzdvxxvdzwt", "ggsrjzzjrsgg", "lcrsqrrqsrcl", "drhkpddpkhrd", "tuexzxrayxrg", "lmxilgmmblgm", "ovdehtthedvo", "nmszoyyozsmn", "udorvuuvrodu", "muyfvcmexhgq", "sfuugaaguufs", "hgtgfyyfgtgh", "nozholdswkyv", "vpykjcqwzjye", "svekzrrzkevs", "naakdhhdkaan", "ooeunmmnueoo", "kbzoqffqozbk", "lfiayrohclxo", "dmnudiidunmd", "gaqgiffigqag", "qnhcossochnq", "ubhbqzzqbhbu", "ujjzzcczzjju", "vpykjcqwzjye", "epmpcjjcpmpe", "cxdasccsadxc", "gggzautkciev", "vcuwttttwucv", "prlxqeeqxlrp", "gsnjhcchjnsg"};
    vector<int> back = {557394, 346623, 334763, 330961, 623522, 287120, 612231, 466003, 108951, 325922, 457228, 297309, 134821, 495627, 352930, 590817, 144763, 4857, 421751, 278947, 402401, 454570, 291555, 81988, 579098, 245385, 588440, 34703, 400799, 21196, 147823, 509416, 157271, 279843, 134458, 334258, 324528, 307907, 100365, 575037, 414250, 357632, 536179, 89445, 143634, 637752};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 2225181;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> front = {"xmsthissssihtsmx", "jneqjxwqqwxjqenj", "hhzlnfdiidfnlzhh", "skselrjppjrlesks", "ykpqiwlrrlwiqpky", "nfoyoiazzaioyofn", "ykpqiwlrrlwiqpky", "hucchjmttoaiakrs", "kjltofprrpfotljk", "hhzlnfdiidfnlzhh", "skselrjppjrlesks", "ppfhvyuqquyvhfpp", "xmsthissssihtsmx", "mjhrznguzdwjspns", "hucchjmttoaiakrs", "ebynqfednnmihqws", "mqjnzeyzzyeznjqm", "swqhimnndefqnybe", "drnnotfzzftonnrd", "tyvuqbmhhmbquvyt", "kqlmbzjkkjzbmlqk", "nujkjafoofajkjun", "kjltofprrpfotljk", "drnnotfzzftonnrd", "jneqjxwqqwxjqenj", "nujkjafoofajkjun", "swqhimnndefqnybe", "tyvuqbmhhmbquvyt", "kqlmbzjkkjzbmlqk", "jneqjxwqqwxjqenj", "xpzgwxxggxxwgzpx", "vwkfhdlufeetbvzs", "wyoilvawwavlioyw", "szvbteefuldhfkwv", "okjwdxmjjmxdwjko", "okjwdxmjjmxdwjko", "xmsthissssihtsmx", "hhzlnfdiidfnlzhh", "hgjjqrkstcpdgzwn", "nwzgdpctskrqjjgh", "ptdoljqbbqjlodtp", "ppfhvyuqquyvhfpp", "skselrjppjrlesks", "swqhimnndefqnybe"};
    vector<int> back = {116218, 543416, 516519, 306926, 360922, 327080, 400802, 190507, 341548, 206553, 129776, 624598, 680579, 396840, 94419, 12898, 262421, 81924, 409250, 528435, 542795, 228145, 317353, 92653, 455496, 383432, 195452, 34344, 564691, 322107, 237401, 540513, 444995, 51093, 72889, 394922, 273479, 444288, 382931, 386818, 334063, 529793, 403086, 434911};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 11704520;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> front = {"yljetsktoxqksxuujfjuuxskqxotkstejly", "wumaunvtfyigpdjcrpztheqytovrmoqctxr", "wumaunvtfyigpdjcrpztheqytovrmoqctxr", "vvjfzlobvhpckxefnggcbznipfkbpftnbpe", "vsknpebkkucxnohvjbjvhonxcukkbepnksv", "vopqrqfnmouaeejclqlcjeeauomnfqrqpov", "vnwyusubxakvmfyhqtpwjchofxxourpoqsr", "vdpdgqtwbisfwxuvhdpvdqcxmcbuhtsnvzm", "vdpdgqtwbisfwxuvhdpvdqcxmcbuhtsnvzm", "uteenvglamvmtqbzaaazbqtmvmalgvneetu", "ruetqyorvwbneooxmqsuqkcumeweohlmkpl", "rkbarjwbifqducftkemtxxdsqmrehdeeskn", "rkbarjwbifqducftkemtxxdsqmrehdeeskn", "qyjjydqohzxjmmplstslpmmjxzhoqdyjjyq", "pqzkrkfjfhigtbuxgagxubtgihfjfkrkzqp", "npdnsfrbnzymcuwyqcqywucmyznbrfsndpn", "nkseedhermqsdxxtmektfcudqfibwjrabkr", "kwiclzwqapgwedjzgdgzjdewgpaqwzlciwk", "kwiclzwqapgwedjzgdgzjdewgpaqwzlciwk", "jvicdvmnqicwmfuqwgwqufmwciqnmvdcivj", "jvicdvmnqicwmfuqwgwqufmwciqnmvdcivj", "janzgyxtlbftcuuqctsbuipzsqgggozzroy", "janzgyxtlbftcuuqctsbuipzsqgggozzroy", "isrbnxmgiejgrpnrefernprgjeigmxnbrsi", "isrbnxmgiejgrpnrefernprgjeigmxnbrsi", "iosvzwsxgdwheztzaaztvznjnifejtdcrhu", "iosvzwsxgdwheztzaaztvznjnifejtdcrhu", "iosvzwsxgdwheztzaaztvznjnifejtdcrhu", "hzygigdtsacyqsrgsasgrsqycastdgigyzh", "hzygigdtsacyqsrgsasgrsqycastdgigyzh", "epbntfpbkfpinzbcggnfexkcphvbolzfjvv", "djdudasnssdstbenypynebtsdssnsadudjd", "djdudasnssdstbenypynebtsdssnsadudjd", "anhntnpmilatzqigqbqgiqztalimpntnhna", "anhntnpmilatzqigqbqgiqztalimpntnhna", "anhntnpmilatzqigqbqgiqztalimpntnhna"};
    vector<int> back = {17138, 36372, 27852, 27852, 45337, 18607, 23170, 28919, 45494, 26089, 40852, 10952, 37117, 28242, 28919, 7590, 28242, 27859, 24998, 21988, 41836, 22951, 19403, 28786, 16815, 30972, 21316, 38542, 36838, 37878, 27859, 4845, 21847, 14618, 14618, 24998};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 469713;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> front = {"blmdsltipfw", "blmdsltipfw", "kbnfyvyobyr", "afphpobziix", "afphpobziix", "uogfjtjfgou", "afphpobziix", "afphpobziix", "tovxbjdmqrf", "afphpobziix", "blmdsltipfw", "fbqhyyjooiq", "wfpitlsdmlb", "kbnfyvyobyr", "uogfjtjfgou", "frqmdjbxvot", "qioojyyhqbf", "fbqhyyjooiq", "frqmdjbxvot", "kbnfyvyobyr", "uogfjtjfgou", "tovxbjdmqrf"};
    vector<int> back = {7312, 17059, 51411, 69598, 68944, 23078, 53983, 91104, 85673, 40468, 69196, 74185, 89251, 83564, 72477, 14741, 58602, 48925, 30190, 87137, 58804, 50468};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 626665;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> front = {"femnjowaaeae", "drywdwwdwyrd", "rdkgzoozgkdr", "drywdwwdwyrd", "rnzshtacblvc", "fhfzyrryzfhf", "rnzshtacblvc", "rdkgzoozgkdr", "rdkgzoozgkdr", "pvvxbllbxvvp", "femnjowaaeae", "ckwpbbbbpwkc", "cvlbcathsznr", "lkxslsslsxkl", "fhfzyrryzfhf", "xmyohddhoymx", "guzoetqtmdij", "myoumrrmuoym", "ajpjnccnjpja", "pvvxbllbxvvp", "ckwpbbbbpwkc", "guzoetqtmdij", "ndnzussuzndn", "tnyzxhhxzynt", "yqxubttbuxqy", "dzkiyeeyikzd", "ndnzussuzndn", "ndnzussuzndn", "myoumrrmuoym", "qtibgllgbitq", "ajpjnccnjpja", "pjxgqbbqgxjp", "jidmtqteozug", "lkxslsslsxkl", "myoumrrmuoym", "rnzshtacblvc", "gakkooookkag", "yqxubttbuxqy", "pjxgqbbqgxjp", "gakkooookkag", "lkxslsslsxkl", "fhfzyrryzfhf", "tnyzxhhxzynt"};
    vector<int> back = {1364, 2817, 1291, 758, 3255, 1559, 2014, 292, 885, 3295, 2989, 2560, 3107, 2919, 2372, 3371, 1721, 3275, 1780, 1915, 2827, 810, 592, 212, 1559, 1383, 1119, 898, 2626, 2940, 2306, 911, 2405, 1022, 1511, 2710, 204, 2338, 2074, 1303, 3252, 2667, 567};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 62589;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> front = {"lbqrjiznoitwbqnqvuvsmolwqprca", "ivrdccxqsrbdciaicdbrsqxccdrvi", "lbqrjiznoitwbqnqvuvsmolwqprca", "lbqrjiznoitwbqnqvuvsmolwqprca", "acrpqwlomsvuvqnqbwtionzijrqbl", "yiiplbcmrsfjfpgsimlrkawrqzjhb", "darpflzfnlcnqvasljnzjnodpulom", "yiiplbcmrsfjfpgsimlrkawrqzjhb", "ivrdccxqsrbdciaicdbrsqxccdrvi", "lbqrjiznoitwbqnqvuvsmolwqprca", "bhjzqrwakrlmisgpfjfsrmcblpiiy", "yiiplbcmrsfjfpgsimlrkawrqzjhb", "ivrdccxqsrbdciaicdbrsqxccdrvi", "bhjzqrwakrlmisgpfjfsrmcblpiiy", "yiiplbcmrsfjfpgsimlrkawrqzjhb", "acrpqwlomsvuvqnqbwtionzijrqbl", "ivrdccxqsrbdciaicdbrsqxccdrvi", "darpflzfnlcnqvasljnzjnodpulom", "bhjzqrwakrlmisgpfjfsrmcblpiiy", "lbqrjiznoitwbqnqvuvsmolwqprca", "ivrdccxqsrbdciaicdbrsqxccdrvi", "ivrdccxqsrbdciaicdbrsqxccdrvi", "yiiplbcmrsfjfpgsimlrkawrqzjhb", "yiiplbcmrsfjfpgsimlrkawrqzjhb", "yiiplbcmrsfjfpgsimlrkawrqzjhb", "bhjzqrwakrlmisgpfjfsrmcblpiiy", "lbqrjiznoitwbqnqvuvsmolwqprca", "yiiplbcmrsfjfpgsimlrkawrqzjhb", "acrpqwlomsvuvqnqbwtionzijrqbl", "acrpqwlomsvuvqnqbwtionzijrqbl", "acrpqwlomsvuvqnqbwtionzijrqbl", "bhjzqrwakrlmisgpfjfsrmcblpiiy"};
    vector<int> back = {2979, 2770, 1745, 831, 125, 1960, 1630, 574, 1615, 461, 1740, 2575, 2855, 1461, 2495, 14, 2888, 3644, 3432, 2568, 1997, 581, 581, 3511, 333, 2393, 1942, 1427, 893, 1442, 3466, 608};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 50313;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> front = {"ogfb", "ceec", "aytd", "epxk", "szmx", "dtya", "tonc", "adda", "ceec", "dfmi", "riir", "icci", "anwq", "nzrr", "gntj", "adda", "oxve", "riir", "pwwp", "mttm", "cnot", "oiio", "mttm", "diid", "ywrf", "frwy", "kuuk", "imfd", "jtcv", "atqc", "kuuk", "anwq", "jtcv", "duud", "jynn", "gevx", "dvlq", "oiio", "cnot", "kuuk", "nzrr", "mppm", "kxpe", "arra", "qjlz", "dztx", "qwna"};
    vector<int> back = {8465, 6903, 7900, 7597, 7898, 426, 3358, 1261, 4471, 3608, 5527, 1610, 1546, 9321, 1209, 5090, 5527, 8725, 8574, 9612, 4421, 3507, 5774, 8850, 589, 8686, 3824, 237, 5537, 2150, 5894, 8083, 670, 2929, 5525, 4503, 5100, 7940, 6079, 8662, 1651, 6879, 1425, 4276, 2083, 1333, 6672};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 136876;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> front = {"heekgkeeh", "heekgkeeh", "heekgkeeh", "heekgkeeh", "heekgkeeh", "heekgkeeh", "heekgkeeh", "heekgkeeh", "heekgkeeh", "heekgkeeh", "heekgkeeh", "heekgkeeh", "heekgkeeh", "kfloccjxw", "kfloccjxw", "sriwijxrx", "sriwijxrx", "sriwijxrx", "sriwijxrx", "sriwijxrx", "sriwijxrx", "sriwijxrx", "sriwijxrx", "sriwijxrx", "wwnpppnww", "wwnpppnww", "wwnpppnww", "wwnpppnww", "wwnpppnww", "wwnpppnww", "wwnpppnww", "wwnpppnww", "wxjccolfk", "wxjccolfk", "wxjccolfk", "wxjccolfk", "wxjccolfk", "wxjccolfk", "wxjccolfk", "wxjccolfk", "wxjccolfk", "xrxjiwirs", "xrxjiwirs", "xrxjiwirs", "xrxjiwirs", "xrxjiwirs", "xrxjiwirs", "xrxjiwirs", "xrxjiwirs", "xrxjiwirs"};
    vector<int> back = {291588, 88674, 186593, 345840, 343186, 195482, 287926, 323387, 370054, 521861, 260649, 370542, 438425, 255232, 130545, 355120, 322060, 322060, 79525, 108357, 370054, 281733, 109072, 323387, 389235, 344385, 343186, 44636, 75598, 102926, 222961, 389235, 186219, 516416, 186219, 64975, 545366, 10930, 318182, 13873, 222961, 10930, 264829, 344385, 68727, 418499, 263223, 358667, 79525, 430346};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 11894427;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> front = {"cmzwyjyxlnsfgkwrbhlprflcmqpxiuyj", "cmzwyjyxlnsfgkwrbhlprflcmqpxiuyj", "djkzgyfopotaemgodwuctaprrpqnntoi", "dyralguuxdgakqwmmwqkagdxuuglaryd", "dyralguuxdgakqwmmwqkagdxuuglaryd", "fnohkqwgbabqyiipvxxekjqygrwbkdnp", "hluflnqdgfpvzadcgaihfacbrnzyyfqx", "hwwcbopfzpwrywyvwcyajernopiexohg", "iotnnqprrpatcuwdogmeatopofygzkjd", "jyuixpqmclfrplhbrwkgfsnlxyjywzmc", "lauvvxlwowszjofmmfojzswowlxvvual", "mslcwsheidjrnaewcxnhydtxdqrrfnlu", "oemrtlibirzckkoxkphcybjwhhgxawvl", "pndkbwrgyqjkexxvpiiyqbabgwqkhonf", "smcdtnyjzfdsidzddzdisdfzjyntdcms", "smcdtnyjzfdsidzddzdisdfzjyntdcms", "viquqzrblirtbkcwwckbtrilbrzquqiv", "viquqzrblirtbkcwwckbtrilbrzquqiv"};
    vector<int> back = {190268, 109231, 158715, 180967, 143667, 65850, 78186, 142888, 150816, 7550, 142387, 220028, 2856, 10889, 200326, 18329, 33399, 219458};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1522621;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> front = {"zsnbmrmplplpmrmbnsz", "yznrijxgkjmdnoxwvim", "yvubnsqtadzgnwzxete", "yljzmxkofimhtebjoze", "yfrpussjgbvypnhjvop", "xrvaavzjlltdyhzdcix", "xcfoqkhxpapxhkqofcx", "wxlswakuixealioqkms", "vvggjwomghmzahsdzfv", "vlctnuiqlbdrpepxrbi", "shsbdjlzcwczljdbshs", "rtllbcfakxeqhybbiig", "reygnbnwkuntluxhakz", "ppjzfgsiztzisgfzjpp", "onfddtzceqgqmwggflq", "occdjthynqgqxiugevg", "nrmabbpxiptifxjzvuf", "nfcrmvijfmfjivmrcfn", "kzrsmqmkdjiobbhkqef", "khplhlckhbcailbdguc", "jwbasqklruqufumwdnk", "jqyieymkutvehxscgrg", "irlrrvfwxyoufpiqecy", "irfdcjktodkejyagpll", "imqvvjnunzakridvrgm", "ijmagrxbjbqltpertln", "grgcsxhevtukmyeiyqj", "ebsbquqwapbtgcjzmyv", "eaemnohdduddhonmeae", "dfzirqcmnkjsnyglrlx", "dewjotroiegexqrrxha", "dekfiyyokakoyyifked", "cpkpstzlfnflztspkpc", "aybejfkeoagozyobpog", "avvymvdsntfylpmpobm", "amlbianyciuvjattvhl"};
    vector<int> back = {44597, 44863, 98628, 215813, 82394, 180514, 144563, 96161, 4932, 82707, 243511, 53869, 223450, 268414, 165252, 130637, 29569, 280986, 136911, 2330, 42303, 116948, 256209, 157799, 269801, 207606, 209146, 235683, 204049, 262055, 218947, 58113, 3001, 66931, 112577, 97114};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 607080;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> front = {"obviwimtyqgptlydmzroa", "socdvghvhrlxpvnkmrdev", "dovgyjqfddhcteixcrfiy", "hxtsillmmxitisirwvwlj", "nvlyjyklvypyvlkyjylvn", "xhpdbwmdhsqshdmwbdphx", "hxtsillmmxitisirwvwlj", "jlwvwrisitixmmllistxh", "uehtutisyvmgkxlbomcbv", "snrjwjevnrsdnyljnbksz", "zyekxeefiztzifeexkeyz", "zyekxeefiztzifeexkeyz", "sxoapnliqnvnqilnpaoxs", "uehtutisyvmgkxlbomcbv", "jlwvwrisitixmmllistxh", "socdvghvhrlxpvnkmrdev", "xsztxcwxggjvkxuplxzqy", "hxtsillmmxitisirwvwlj", "mploknwelhfslqmxoxvis", "dovgyjqfddhcteixcrfiy"};
    vector<int> back = {77729, 99477, 66238, 49028, 66238, 54747, 107287, 36484, 55720, 38183, 38451, 55720, 41679, 99277, 96351, 41679, 54834, 59205, 75314, 44906};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 459736;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> front = {"rzppjimqangxrsmtkxrprle", "hzsxtmjulckgkclujmtxszh", "quhcbaagsvxriekposknpft", "rozhsqkdzcdavqhgybcnfoa", "ozlxvrqzjkssskjzqrvxlzo", "hzbsqdiywxwdtwvkfstyrev", "icdwpezugigvetnkvpemdwj", "uwhhjeqltgjkraeuhlpdftz", "cilikkssohcjyconfdalrmj", "jwdmepvkntevgiguzepwdci", "eipshyeertzaztreeyhspie"};
    vector<int> back = {3974, 3571, 1447, 1149, 12077, 6467, 21022, 22121, 23934, 28268, 19607};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 68897;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> front = {"yuqewzbelrrumvmcsdrpikzdnekqcitthgbnimgkcaqrkueqo", "sjxnnyplhofzwgkeotbbiuwxftmhgafininmwihyojgvbwtwd", "yuqewzbelrrumvmcsdrpikzdnekqcitthgbnimgkcaqrkueqo", "yuqewzbelrrumvmcsdrpikzdnekqcitthgbnimgkcaqrkueqo", "ruyohhlbmpwtipeuogyjgdjutujdgjygouepitwpmblhhoyur", "dnorjjryjqwywozwsqzfdfztxopeudrrdrdmjvsjdffbrxyfj", "dnorjjryjqwywozwsqzfdfztxopeudrrdrdmjvsjdffbrxyfj", "jfyxrbffdjsvjmdrdrrduepoxtzfdfzqswzowywqjyrjjrond", "jfyxrbffdjsvjmdrdrrduepoxtzfdfzqswzowywqjyrjjrond", "vqsejyhtrhloerpsozupyzxtfoddsopzsuvblfxwzpouabmqf", "ruyohhlbmpwtipeuogyjgdjutujdgjygouepitwpmblhhoyur", "jfyxrbffdjsvjmdrdrrduepoxtzfdfzqswzowywqjyrjjrond", "jfyxrbffdjsvjmdrdrrduepoxtzfdfzqswzowywqjyrjjrond", "dnorjjryjqwywozwsqzfdfztxopeudrrdrdmjvsjdffbrxyfj", "dnorjjryjqwywozwsqzfdfztxopeudrrdrdmjvsjdffbrxyfj", "vqsejyhtrhloerpsozupyzxtfoddsopzsuvblfxwzpouabmqf"};
    vector<int> back = {464972, 445821, 496340, 343981, 478941, 480323, 619306, 153655, 91508, 89100, 300720, 524909, 367976, 259538, 448956, 612620};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 3725832;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> front = {"wgojhrzwvxa", "qlifppldqta", "qnemcpsouha", "zirmlrniyac", "hksyixoshvd", "mqpcygrgvoy", "grbrwublqbk", "dknbuwubnkd", "mygzlwsaryk", "wmfnusuxkly", "kjxtppptxjk", "wgojhrzwvxa", "rswtwjycqxx", "ybhwzzunbhd", "euwoirhetjw", "yvvctujpxxm", "gwferdrefwg", "kyoflxlfoyk", "dhbnuzzwhby", "lvlgwgmnlbw", "plvmlrfhuvy", "pigbefniuxs", "zmybbbbbymz", "matcdfqdxho", "imldklqldgw", "jalbeqojwsk", "rswtwjycqxx", "gahiydlufsn", "opdaeneadpo", "iwbzoeghocn", "euwoirhetjw", "pgpqaxaqpgp", "benkwywkneb", "zmybbbbbymz", "axvwzrhjogw", "yvuhfrlmvlp", "wbswnznwsbw", "bjllfuflljb", "cpzdgvojkgt", "bydqzqzqdyb", "hzrwfsfwrzh", "tgjipmnmuzz", "mzqqruszudm", "tgjipmnmuzz", "dvhsoxiyskh", "zzumnmpijgt", "plvmlrfhuvy", "hksyixoshvd", "rmfionfpujv", "premvzwjtsf"};
    vector<int> back = {921, 98, 143, 130, 736, 677, 863, 854, 637, 466, 458, 621, 1033, 248, 150, 394, 789, 1022, 555, 764, 664, 831, 357, 380, 998, 694, 15, 870, 848, 293, 103, 221, 308, 599, 842, 289, 656, 745, 724, 526, 1015, 991, 603, 41, 169, 931, 994, 664, 116, 19};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 8654;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> front = {"baxbfmatowvkzursiflar", "njrpmmbshhdwjhisyttrj", "yymqubrlpeyrbbmhgurdc", "njrpmmbshhdwjhisyttrj", "baxbfmatowvkzursiflar", "njrpmmbshhdwjhisyttrj", "ekkjzzugowrwoguzzjkke", "yymqubrlpeyrbbmhgurdc", "ekkjzzugowrwoguzzjkke", "baxbfmatowvkzursiflar"};
    vector<int> back = {102, 243, 30, 418, 283, 507, 1056, 1429, 804, 98};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1860;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> front = {"abc", "abc", "def", "cba", "fed"};
    vector<int> back = {24, 7, 63, 222, 190};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> front = {"a"};
    vector<int> back = {1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
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
    vector<string> front = {"topcoder", "redcoder", "redocpot"};
    vector<int> back = {7, 5, 3};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> front = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y"};
    vector<int> back = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 50000000;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> front = {"bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb", "bdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdbbdcaffacdb"};
    vector<int> back = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> front = {"aba"};
    vector<int> back = {11};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> front = {"a"};
    vector<int> back = {10};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> front = {"cac", "bab"};
    vector<int> back = {7, 6};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> front = {"a", "b", "a", "a"};
    vector<int> back = {1, 2, 3, 4};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> front = {"a", "b", "b", "c", "d"};
    vector<int> back = {1, 12, 14, 8, 5};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> front = {"aba"};
    vector<int> back = {1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> front = {"aaa", "aba"};
    vector<int> back = {50, 12};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> front = {"a"};
    vector<int> back = {1000};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> front = {"aaa"};
    vector<int> back = {11};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> front = {"topcoderaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "abaabaabaabaabaabaabaabaabaabaabaaba", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaredocpot"};
    vector<int> back = {1000, 1000, 1000};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 3000;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> front = {"aaaa", "cbbc", "aaaa", "aaaa", "dawg"};
    vector<int> back = {1, 2, 4, 3, 100};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> front = {"ab", "ab", "ab", "ba", "ba", "ba", "ba"};
    vector<int> back = {1, 2, 3, 4, 1000, 6, 10000};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 11012;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> front = {"aba", "fef", "aba", "aba"};
    vector<int> back = {1, 4, 2, 3};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> front = {"aba"};
    vector<int> back = {10};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> front = {"aaa", "aaa", "aaa"};
    vector<int> back = {100, 10, 1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> front = {"ab", "aa", "ba"};
    vector<int> back = {2, 2, 2};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> front = {"abc", "abc", "def", "cba", "fed", "cba"};
    vector<int> back = {7, 24, 63, 222, 190, 212};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 718;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> front = {"aaa"};
    vector<int> back = {10};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> front = {"ab", "ba", "ab"};
    vector<int> back = {5, 6, 6};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> front = {"aba", "bbc", "cbb"};
    vector<int> back = {1, 2, 2};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> front = {"abc", "sss", "cba"};
    vector<int> back = {3, 433, 5};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 441;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> front = {"aba", "ccc", "mmm"};
    vector<int> back = {5, 7, 3};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> front = {"aba", "cdc", "cdc", "cdc"};
    vector<int> back = {5, 3, 7, 4};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> front = {"abcba"};
    vector<int> back = {1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> front = {"a", "a", "a", "b", "b", "b"};
    vector<int> back = {10, 10, 5, 10, 10, 3};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> front = {"abcd", "dcba", "abcd", "dcba"};
    vector<int> back = {1, 2, 3, 4};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> front = {"abc", "abc", "def", "cba", "fed", "aba", "aba", "aba"};
    vector<int> back = {24, 7, 63, 222, 190, 20, 10, 30};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 559;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> front = {"abc", "aba", "cba"};
    vector<int> back = {23, 24, 25};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> front = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u"};
    vector<int> back = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 87, 9, 1, 2, 1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> front = {"aba"};
    vector<int> back = {12};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> front = {"abc", "eec", "cba", "cee", "abc", "ced", "cce"};
    vector<int> back = {7, 8, 9, 11, 9, 7, 8};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> front = {"a", "b", "a"};
    vector<int> back = {1, 2, 1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> front = {"ab", "ba", "cc", "dd"};
    vector<int> back = {1, 1, 500, 1000};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1002;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> front = {"aa", "ab", "ab", "ba", "cd", "dc", "dc"};
    vector<int> back = {1, 1, 2, 3, 1, 2, 3};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> front = {"abc", "abc", "cba"};
    vector<int> back = {1, 10, 100};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> front = {"abc", "def", "ghi", "jkl", "mno", "onm", "lkj", "fed", "cba", "ihg", "pep", "mir", "rim"};
    vector<int> back = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> front = {"abc", "cba", "ccc"};
    vector<int> back = {1, 2, 3};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> front = {"aba", "ddd"};
    vector<int> back = {5, 10};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> front = {"aaa", "aaa", "aaa", "aaa", "aaa"};
    vector<int> back = {5, 3, 4, 5, 4};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> front = {"aba", "aca"};
    vector<int> back = {10, 20};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> front = {"aaa"};
    vector<int> back = {1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> front = {"aba", "cbc"};
    vector<int> back = {20, 30};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> front = {"aabbb", "aabaa", "aabaa", "aabaa", "bbbaa", "abbba"};
    vector<int> back = {2, 1, 2, 1, 2, 5};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> front = {"aba", "aka"};
    vector<int> back = {5, 10};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> front = {"aaa", "bbb", "aaa", "aba", "bba", "abb", "bab", "bba", "aba", "aab", "bab", "abb", "bba", "aba", "bba", "ada"};
    vector<int> back = {1, 3, 2, 1, 1, 2, 1, 3, 2, 1, 1, 2, 3, 1, 1, 3};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> front = {"aaab", "baaa", "baaa"};
    vector<int> back = {1, 2, 3};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> front = {"abc", "cba", "aaa", "aaa", "bbb", "bbb", "ccc", "ddd", "eee"};
    vector<int> back = {13, 13, 12, 11, 19, 17, 2, 7, 5};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> front = {"aea"};
    vector<int> back = {1000};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> front = {"abc", "abc", "def", "cba", "fed"};
    vector<int> back = {24, 77, 63, 222, 190};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 552;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> front = {"xxx", "xex", "xxx"};
    vector<int> back = {1, 1, 1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> front = {"abc", "cba", "cba"};
    vector<int> back = {3, 2, 5};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> front = {"aa", "aa", "aa", "bb", "bb", "bb", "cc", "cc", "cc", "dd", "dd", "ab", "ba"};
    vector<int> back = {5, 6, 6, 10, 7, 10, 20, 6, 20, 30, 30, 10, 10};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> front = {"a"};
    vector<int> back = {99};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> front = {"topot", "reder", "redoc"};
    vector<int> back = {7, 5, 3};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> front = {"aaa", "bbb"};
    vector<int> back = {4, 10};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> front = {"a", "b", "c"};
    vector<int> back = {3, 33, 333};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 333;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> front = {"aaa"};
    vector<int> back = {5};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> front = {"absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd", "absdfdasfasd"};
    vector<int> back = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> front = {"abc", "abc", "def", "cba", "fed", "aba", "xyx"};
    vector<int> back = {24, 7, 63, 222, 190, 1000, 2000};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 2499;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> front = {"aba", "aba"};
    vector<int> back = {1, 10};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> front = {"cac", "bab", "dad", "aaa", "bbb", "ccc", "aaa", "bbb"};
    vector<int> back = {1, 2, 3, 4, 5, 6, 7, 8};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> front = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<int> back = {1000000, 999999, 999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 999990, 999989, 999988, 999987, 999986, 999985, 999984, 999983, 999982, 999981, 999980, 999979, 999978, 999977, 999976, 999975, 999974, 999973, 999972, 999971, 999970, 999969, 999968, 999967, 999966, 999965, 999964, 999963, 999962, 999961, 999960, 999959, 999958, 999957, 999956, 999955, 999954, 999953, 999952, 999951};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 49998775;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> front = {"ana"};
    vector<int> back = {50};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> front = {"a", "b", "a"};
    vector<int> back = {5, 1, 2};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> front = {"abbasabba", "laxmannnn"};
    vector<int> back = {10, 1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> front = {"abc", "abc", "def", "cba", "fed", "abc"};
    vector<int> back = {24, 7, 63, 222, 190, 30};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 505;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> front = {"bb", "bb"};
    vector<int> back = {7, 7};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> front = {"top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "top", "pot", "tot", "tot", "tot", "tot", "tot", "tot", "tot", "tot", "tot", "tot"};
    vector<int> back = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 285;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> front = {"aaa", "aba", "aaa"};
    vector<int> back = {1, 2, 3};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> front = {"abccba", "deffed", "abcdef", "fedcba"};
    vector<int> back = {1, 2, 3, 4};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> front = {"anuj", "adda", "baab", "baab", "baab", "juna"};
    vector<int> back = {5, 70, 5, 5, 5, 5};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> front = {"ab", "ab", "cc", "ba"};
    vector<int> back = {1, 30, 400, 1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 431;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> front = {"xyz", "xyz", "xyz", "aba"};
    vector<int> back = {1, 5, 6, 20};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> front = {"a", "b"};
    vector<int> back = {10, 10};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> front = {"a", "b", "a"};
    vector<int> back = {7, 5, 3};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> front = {"a", "b", "c", "c"};
    vector<int> back = {1000, 10, 100, 100};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1200;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> front = {"aa", "bb"};
    vector<int> back = {4, 4};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> front = {"a", "a", "a"};
    vector<int> back = {1, 1, 1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> front = {"noon"};
    vector<int> back = {1000000};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> front = {"abc", "abc", "def", "cba", "fed", "cba", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa", "aaa"};
    vector<int> back = {7, 24, 63, 222, 190, 212, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1090;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> front = {"top", "red", "red", "aba", "bab"};
    vector<int> back = {7, 5, 3, 2, 4};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> front = {"aaa", "bbb", "aaa", "aaa"};
    vector<int> back = {50, 60, 100, 150};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 310;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> front = {"abc", "abc", "def", "cba", "fed"};
    vector<int> back = {7, 24, 63, 222, 190};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> front = {"abc", "abc", "def", "cba", "fed"};
    vector<int> back = {24, 78, 63, 222, 190};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 553;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> front = {"abcba"};
    vector<int> back = {2};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> front = {"a", "b", "a", "a"};
    vector<int> back = {1, 2, 1, 3};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> front = {"aa", "ab", "ab", "ba", "cd", "dc", "dc", "as", "sa", "sa", "ew", "ew", "we"};
    vector<int> back = {1, 1, 2, 3, 1, 2, 3, 1, 3, 2, 3, 2, 1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> front = {"abc", "abc", "cba"};
    vector<int> back = {1, 5, 10};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> front = {"aaa", "bbb"};
    vector<int> back = {1, 2};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> front = {"qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh", "qqqqqqqqqqqqqqqqqqqqqqqqqqqrrrgggggghhhh"};
    vector<int> back = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 100000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 100000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 4353, 45, 345, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 4567, 1000000, 1000000, 1000000};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> front = {"asdsa", "werew", "qwert", "trewq", "zxcvb", "bvcxz", "qwert", "tgyht"};
    vector<int> back = {1, 2, 3, 4, 5, 6, 7, 8};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> front = {"aaa", "aba", "ccc", "top", "pot"};
    vector<int> back = {1, 1, 1, 1, 1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> front = {"abc", "cba", "cba"};
    vector<int> back = {10, 20, 30};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> front = {"a", "b", "c"};
    vector<int> back = {5, 5, 5};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> front = {"aba", "aba", "xyx", "zyz", "abc", "cba", "cba", "def", "fed", "def"};
    vector<int> back = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 859;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<string> front = {"aa", "bb", "cc", "dd", "ee", "aa", "bb", "cc", "dd", "ff", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "zz"};
    vector<int> back = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 1244;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<string> front = {"abc", "abc", "cba"};
    vector<int> back = {1, 100, 2};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<string> front = {"oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo", "oooooooooooooooooooooooooooooooooooooooooooooooooo"};
    vector<int> back = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 2300000;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<string> front = {"fef"};
    vector<int> back = {800};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 800;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<string> front = {"abcdefghijklmnopqrstuvwxyz", "zyxwvutsrqponmlkjihgfedcba", "zyxwvutsrqponmlkjihgfedcba", "zyxwvutsrqponmlkjihgfedcba", "ayxwvutsrqponmlkjihgfedcbz", "zbcdefghijklmnopqrstuvwxya", "abcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxzy", "yzxwvutsrqponmlkjihgfedcba", "zyxwvutsrqponmlkjihgfedcba", "ayxwvutsrqponmlkjihgfedcbz", "zbcdefghijklmnopqrstuvwxya", "abcdfeghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxzy", "yzxwvutsrqponmlkjihgfedcba", "zyxwvutsrpqonmlkjihgfedcba", "ayxwvutsrqponmlkjihgfedcbz", "zbcdefghijklmnopqrstuvwxya", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "abcdefghijklmnopqrstuvwxzy", "yzxwvutsrqponmlkjihgfedcba", "zyxwvutsrpqonmlkjihgfedcba", "ayxwvutsrqponmlkjihgfedcbz", "zbcdefghijklmnopqrstuvwxya", "abcdfeghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxzy", "yzxwvutsrqponmlkjihgfedcba", "zyxwvutsrpqonmlkjihgfedcba", "ayxwvutsrqponmlkjihgfedcbz", "zbcdefghijklmnopqrstuvwxya", "abcdfeghijklmnopqrstuvwxyz", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "yzxwvutsrqponmlkjihgfedcba", "zyxwvutsrpqonmlkjihgfedcba", "ayxwvutsrqponmlkjhigfedcbz", "zbcdefghijklmnopqrstuvwxya", "abcdfeghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxzy", "yzxwvutsrqponmlkjihgfedcba", "zyxwvutsrpqonmlkjihgfedcba", "ayxwvutsrqponmlkjihgfedcbz", "zbcdefghijklmnopqrstuvwxya", "abcdfeghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxzy", "yzxwvutsrqponmlkjiggfedcba", "bbbbbbbbbbbbbbbbbbbbbbbbbb", "ayxwvutsrqponmljkihgfedcbz", "zbcdefghijklmnopqrstuvwxya", "zzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzz"};
    vector<int> back = {99, 8, 888, 1, 100000, 2, 8, 10000, 999999, 234244, 987898, 1000000, 1000000, 99, 8, 888, 1, 100000, 2, 8, 10000, 999999, 234244, 987898, 1000000, 1000000, 99, 8, 888, 1989, 100000, 2, 8, 10000, 999999, 234244, 987898, 1000000, 1000000, 99, 8, 808, 1908, 100000, 10000, 999999, 234244, 987898, 100000, 1000000};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 11090531;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<string> front = {"aaa", "aaa", "aaa"};
    vector<int> back = {5, 6, 7};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<string> front = {"aaa"};
    vector<int> back = {23};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<string> front = {"abba", "deed"};
    vector<int> back = {123, 321};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 321;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<string> front = {"abc", "aba", "cba"};
    vector<int> back = {1, 100, 1};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<string> front = {"ab", "ab", "ab", "ab", "ba", "ba", "ba", "ba"};
    vector<int> back = {10, 11, 12, 13, 14, 14, 14, 15};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<string> front = {"aba", "aba"};
    vector<int> back = {4, 7};
    PalindromeGame* pObj = new PalindromeGame();
    clock_t start = clock();
    int result = pObj->getMaximum(front, back);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22925387&rd=14428&pm=11331
********************************************************************************
// g/x/x/l/o/v/e/g/x/x // 
 
#include <sstream> 
#include <functional> 
#include <iostream> 
#include <algorithm> 
#include <cstring> 
#include <cctype> 
#include <queue> 
#include <cmath> 
#include <set> 
#include <string> 
#include <vector> 
#include <cstdio> 
#include <cstdlib> 
#include <map> 
using namespace std; 
#define sz(a) int((a).size()) 
#define all(a) (a).begin(), (a).end()  
typedef long long ll; 
 
class PalindromeGame 
{ 
public: 
  int getMaximum(vector <string> front, vector <int> back); 
}; 
 
const int MAXN = 50; 
 
bool isok[MAXN][MAXN]; 
 
bool checkit(string a, string b) 
{ 
  reverse(all(a)); 
  return a == b; 
} 
 
bool done[MAXN]; 
 
int PalindromeGame::getMaximum(vector <string> front, vector <int> back) 
{ 
  int n = sz(front); 
  for (int i = 0; i < n; ++i) { 
    for (int j = 0; j < n; ++j) { 
      isok[i][j] = checkit(front[i], front[j]); 
    } 
  } 
  int res = 0; 
  for (int notuse = -1; notuse < n; ++notuse) { 
    memset(done, false, sizeof(done)); 
    int sum = 0; 
    if (notuse >= 0) { 
      done[notuse] = true; 
      if (isok[notuse][notuse]) sum += back[notuse]; 
    } 
     
    bool found = true; 
    while (found) { 
      found = false; 
      int best = -1; 
      int a, b; 
      for (int i = 0; i < n; ++i) { 
        if (!done[i]) { 
          for (int j = 0; j < n; ++j) { 
            if (j != i && !done[j]) { 
              if (isok[i][j]) { 
                found = true; 
                if (back[i] + back[j] > best) { 
                  best = back[i] + back[j]; 
                  a = i; 
                  b = j; 
                } 
              } 
            } 
          } 
        } 
      } 
      if (best != -1) { 
        sum += best; 
        done[a] = done[b] = true; 
      } 
    } 
    res = max(res, sum); 
  } 
  return res; 
} 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/