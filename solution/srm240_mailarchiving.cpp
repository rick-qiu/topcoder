/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4457
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

class MailArchiving {
public:
    int minSelections(vector<string> destFolders);
};

int MailArchiving::minSelections(vector<string> destFolders) {
    int ret;
    return ret;
}


int test0() {
    vector<string> destFolders = {"Deleted messages", "Saved messages", "Deleted messages"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> destFolders = {"Folder A", "Folder B", "Folder C", "Folder D", "Folder E", "Folder F"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> destFolders = {"FOLDER", "folder"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> destFolders = {"a", "b", "a", "c", "a", "a", "b", "a", "c", "d", "a"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> destFolders = {"a", "b", "c", "d", "a", "b", "c", "d"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> destFolders = {" "};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> destFolders = {"a", "b", "c", "a", "c", "b"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> destFolders = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "j", "i", "h", "g", "f", "e", "d", "c", "b", "a"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> destFolders = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> destFolders = {"a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> destFolders = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> destFolders = {"ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxKP", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxLg", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxKP", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxLg", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxCy", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxLg", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxCy", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxCy", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxCy", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxcx", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxCy", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxcx", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxKP", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxLg", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxLg", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxCy", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxKP", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxCy", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxLg", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxcx", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxLg", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxCy", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxcx", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxCy", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxcx", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxCy", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxKP", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxcx", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxLg", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxKP", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxCy", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxcx", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxcx", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxcx", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxLg", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxLg", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxLg", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxKP", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxKP", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxKP", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxKP", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxLg", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxCy", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxLg", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxCy", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxKP", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxKP", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxcx", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxLg", "ZDmllUxaToagsYDfqMaAPiVoWOppmEVqoGaDGCdZqjFNGosxcx"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> destFolders = {"jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN rg", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN Hb", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN ky", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN St", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN Hb", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN ky", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN eJ", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN eJ", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN ky", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN eJ", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN FO", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN FO", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN rg", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN pJ", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN oe", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN eJ", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN FO", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN Tm", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN Hb", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN ea", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN PA", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN ea", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN sN", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN Mu", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN rg", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN sN", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN sl", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN ky", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN sl", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN Tm", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN xm", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN sU", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN sl", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN Hb", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN ea", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN pJ", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN St", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN sl", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN F", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN sU", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN St", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN FO", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN ky", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN pJ", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN rg", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN xp", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN oe", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN sN", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN sN", "jwxChZwxyWDNoJEqwYmJZdvfudfdsxkaYhIEFjhCFPPYDzN Hb"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> destFolders = {"PbIIyS", "amn", "Gr", "Gr", "YUx", "ul", "bMc", "UwVm", "bMc", "amn", "bMc", "YqRrGi", "Wfq", "amn", "M", "UwVm", "Gr", "Wfq", "YUx", "amn", "PbIIyS", "ul", "UwVm", "M", "YUx", "UD E", "Gr", "YqRrGi", "UD E", "ul", "PbIIyS", "ul", "bMc", "YUx", "YqRrGi", "bMc", "Wfq", "ul", "PbIIyS", "UwVm"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> destFolders = {"zKZpccZZO q", "osx xcPK", "ka", "YDzN BeobHOFg", "YmJZdvfudfds", "jFN", "YDzN BeobHOFg", "ZDmllUxaToagsY", "oGaDGCdZ", "Ye gOjVoF", "kncjwxCh", "jFN", "Ye gOjVoF", "RnZoTcFkqasg", "ePLDdqtptBoYQ", "BD", "IxhrRYFSG", "YmJZdvfudfds", "YDzN BeobHOFg", "qlHfBy", "HuUeVUG", "ThTXBDnljpIrp", "RnZoTcFkqasg", "HuUeVUG", "CgLWAc", "osx xcPK", "YmJZdvfudfds", "qlHfBy", "zKZpccZZO q", "fqMaAP", "osx xcPK", "VoWOppmEV", "YDzN BeobHOFg", "qlHfBy", "BD", "VoWOppmEV", "zVel KO", "osx xcPK", "wxyWDNoJEq", "Ye gOjVoF", "YmJZdvfudfds", "CgLWAc", "ZDmllUxaToagsY", "OQZwbk"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> destFolders = {"snxKCoPgv", "snxKCoPgv", "snxKCoPgv", "wDL", "snxKCoPgv", "snxKCoPgv", "wDL", "snxKCoPgv", "wDL", "snxKCoPgv", "wDL", "snxKCoPgv", "wDL", "snxKCoPgv", "snxKCoPgv", "snxKCoPgv", "wDL", "wDL", "wDL", "snxKCoPgv", "wDL", "wDL", "snxKCoPgv", "snxKCoPgv", "snxKCoPgv", "wDL", "wDL", "snxKCoPgv", "snxKCoPgv", "snxKCoPgv", "wDL", "wDL"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> destFolders = {"TnDTgnyVaSepELjtfLRdH", "kdlevajEikYsDmMRAMynO", "J", "J", "kdlevajEikYsDmMRAMynO", "TnDTgnyVaSepELjtfLRdH", "sYLkP", "J", "eRPitoTYE x", "rUwGOfiRkaATTTi", "CCnUkUnIyaHrsSHJaskIr", "rUwGOfiRkaATTTi", "GuVpR ANcnA", "yYWfHZBqLNGrFDIzNi", "avgBBASPnhtXq", "cClZcXw", "tPZZMUrtst", "lg XEgsvuyQehZcum RAZ", "cClZcXw", "gWSpShWr VOD Ko", "vQPCaHzBsxUvP MsVnq", "eRPitoTYE x", "vvDHCVI", "GuVpR ANcnA", "TnDTgnyVaSepELjtfLRdH", "TnDTgnyVaSepELjtfLRdH", "GuVpR ANcnA", "rUwGOfiRkaATTTi", "dftRx", "Fbjzw", "cClZcXw", "tPZZMUrtst", "TnDTgnyVaSepELjtfLRdH"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> destFolders = {"ZcYecxYtNbEckmmybn", "ZcYecxYtNbEckmmybn", "ZcYecxYtNbEckmmybn", "wcfHV", "wcfHV", "wcfHV", "ZcYecxYtNbEckmmybn", "ZcYecxYtNbEckmmybn", "wcfHV", "wcfHV", "wcfHV", "wcfHV", "ZcYecxYtNbEckmmybn", "wcfHV", "wcfHV", "ZcYecxYtNbEckmmybn", "ZcYecxYtNbEckmmybn", "ZcYecxYtNbEckmmybn", "ZcYecxYtNbEckmmybn", "ZcYecxYtNbEckmmybn", "wcfHV", "wcfHV", "wcfHV", "wcfHV", "wcfHV", "ZcYecxYtNbEckmmybn", "ZcYecxYtNbEckmmybn", "ZcYecxYtNbEckmmybn", "ZcYecxYtNbEckmmybn", "ZcYecxYtNbEckmmybn", "ZcYecxYtNbEckmmybn"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> destFolders = {"nWbAdApxghtGZgCiOrwRd", "nWbAdApxghtGZgCiOrwRd", "ijxaEcaZHeWKLFJQB", "xyuEyNAduYPSjRgxnbu", "HzEdGKWeKn", "VCHbbs", "VCHbbs", "VCHbbs", "xyuEyNAduYPSjRgxnbu", "EzRcstZlcCeHfXfuVuqAV", "ijxaEcaZHeWKLFJQB", "WpZbZ", "nWbAdApxghtGZgCiOrwRd", "ijxaEcaZHeWKLFJQB", "zO", "GOY", "mMdICMGTodrtuSa", "NnQJDpiDnuil", "zO", "nWbAdApxghtGZgCiOrwRd", "NnQJDpiDnuil", "ZdbV", "ZdbV", "WpZbZ", "xyuEyNAduYPSjRgxnbu", "HzEdGKWeKn", "KRQuZVSgzTrpDfFlLhy", "ZdbV", "GOY", "NnQJDpiDnuil", "mMdICMGTodrtuSa"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> destFolders = {"kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ", "kmPhbFCJ"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
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
    vector<string> destFolders = {" jqBjFihZJCLzH", "uM", " jqBjFihZJCLzH", " jqBjFihZJCLzH", "cLavSPvt", "smQcqctcrkg", "smQcqctcrkg", "smQcqctcrkg", "L", "CAl", "D", "CAl", "COtI", "WsgJJVym", "uM", "WsgJJVym", "KUbVFK", "smQcqctcrkg", "R", "T", "T", "aybbERgfPbZHrD", "COtI", "MD", "KUbVFK", "aybbERgfPbZHrD", "aybbERgfPbZHrD", "COtI", "RUze", "T", "RUze", "WsgJJVym", "smQcqctcrkg", "CWUz", "MD", "MD", "MD", " jqBjFihZJCLzH", "COtI", "MD", "RUze", "KUbVFK", "CWUz", "R", "RUze", "hJyN", "T", "COtI"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> destFolders = {"F", "AiM", "ebCwH", "AiM", "uTO", "Vp", "F", "b", "OTy", "KGxTh", "OTy", "KGxTh", "HpjpP", "BFN", "b", "ebCwH", "cFM", "F", "cF", "jGnhj", "iBQhi", "mqfT", "blwO", "wX", "EHo", "AiM", "QO", "ebCwH", "cF", "BFN", "EHo", "uTO", "mqfT", "s kX", "HpjpP", "s kX", "b", "ebCwH", "BFN", "F", "blwO", "ebCwH", "AiM"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> destFolders = {"xr", "m", "xr", "Qo", "TX", "OV", "W", "Qo", "W", "fw", "cg", "TX", "m", "OV", "fw", "OV", "cg", "W", "OV", "m", "cg", "cg", "g", "Qo", "TX", "W", "fw", "TX", "g", "xr", "g"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> destFolders = {"v", "SJnCDtRiYzec", "v", "pIlLVCZh", "pIlLVCZh", "t", "NiLBFXAfheVXuMjKF", "pIlLVCZh", "yoQo vvZeZPearLfotLwgEvSRtw", "yoQo vvZeZPearLfotLwgEvSRtw", "yoQo vvZeZPearLfotLwgEvSRtw", "hPnsnjz", " vfyrKQLhmuqIIRWHrNXclUl", "qXWDerObj vskFsS", "hPnsnjz", "v", " vfyrKQLhmuqIIRWHrNXclUl", "oreEIhPFcYvyIMSTpx", "EOyspX", "CAIHO HiSeGjJ", "hPnsnjz", "NiLBFXAfheVXuMjKF", "xGeozEINhLtxcX", "IIvvUgYpzwA", "qXWDerObj vskFsS", "yoQo vvZeZPearLfotLwgEvSRtw", "hPnsnjz", "v", "GlOjDJWCDQcNVWrvshEfEvGP gh", "GlOjDJWCDQcNVWrvshEfEvGP gh", "NwVPdYfkl lGZ", "K uKqGMICCrTmGaWHjmSY", "EOyspX", "bRtEYllWGCFBVwfFjsUTT", "K uKqGMICCrTmGaWHjmSY", "NcJglwNTTeBrHfSNGDWuC", "hPnsnjz", "CAIHO HiSeGjJ", "NcJglwNTTeBrHfSNGDWuC", "NiLBFXAfheVXuMjKF", "NcJglwNTTeBrHfSNGDWuC", "NiLBFXAfheVXuMjKF", "EOyspX"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> destFolders = {"JNZnajyRruTKo", "mrXahBmgrLfBQRtHBvMEJqtBGsHJA", "ILfM JvUgaHsMkCaYOdJNR GDeM", "DPFY", "KgMcwCpvrlsK fT MEpTJgfpY", "JbtPiqYwEnTjeNdZPMJqKnXvf", "DPFY", "KgMcwCpvrlsK fT MEpTJgfpY", "JHXnKRvDbrawaWPaE N", "ILfM JvUgaHsMkCaYOdJNR GDeM", "YezsRRP", "TpeGeMvifnlLMTJRyUPId iGKcashgMfVqlz", "jk", "ylwmmutDNBvtLCDsVYYDqy", "VQ", "ILfM JvUgaHsMkCaYOdJNR GDeM", "cnUeMAKdLATVBjmaqSUCWIsO", "pfjVrAohnyKNoMYmToLOnf", "DPFY", "dkMVOA", "UeBBjoxtdjfBMSTrHezwrCLSHQavzpNTyuUghw", "AGLpfUvXjcMmXwEqeNCGmxyamnNIiXNidY", "JHXnKRvDbrawaWPaE N", "JNZnajyRruTKo", "zKnapnnxHjQohGqGgVIExmGgzYPItKRsVjxpAjlHS", "YezsRRP", "ylwmmutDNBvtLCDsVYYDqy", "yxzxdzdDkARkB zPebeUidVRUByLCavfWZceXEimk", "yxzxdzdDkARkB zPebeUidVRUByLCavfWZceXEimk", "zKnapnnxHjQohGqGgVIExmGgzYPItKRsVjxpAjlHS", "ILfM JvUgaHsMkCaYOdJNR GDeM", "VQ", "ylwmmutDNBvtLCDsVYYDqy", "yxzxdzdDkARkB zPebeUidVRUByLCavfWZceXEimk", "dkMVOA", "ylwmmutDNBvtLCDsVYYDqy", "ld ", "jk", "yxzxdzdDkARkB zPebeUidVRUByLCavfWZceXEimk"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> destFolders = {"D", "OG CScgUGvePDaoDExqLqGmKIsgbQkCfVihS", "EprXGc PG", "bXZsVhSMzqYi", "RzxSUkCpNvRARUdOZpzsQlOOJyYNWKISoFPHU", "nJTSwBWfaQCkwlWzKuS", "iXRaUBvwLVOuFgut", "sRvRwpVAHDEDZvYfgjnYutodaydHKvwBMV", " PwmZqiGhCEzsCQnDRRJhUtIk", "D", "wiXtNoMVBQKAnFQATZdWRegac KrGeoirKaDdRZe", "EprXGc PG", "e mcyqluTshuILt oCNXVOT", "EprXGc PG", "StMYPQP", "wiXtNoMVBQKAnFQATZdWRegac KrGeoirKaDdRZe", "OG CScgUGvePDaoDExqLqGmKIsgbQkCfVihS", "StMYPQP", "muTDMSTnE", "xhHbB", "IKWYWduARJGxZEUvjRSvqiKEdmRkMSP", "HRdpTMSqOjdy ZGMYe oYlMspYpnKtJy", "iXRaUBvwLVOuFgut", "nJTSwBWfaQCkwlWzKuS", "StMYPQP", "StMYPQP", "OG CScgUGvePDaoDExqLqGmKIsgbQkCfVihS", "muTDMSTnE", "EprXGc PG", "HRdpTMSqOjdy ZGMYe oYlMspYpnKtJy", "nmIzjytxFqcKboiEnVICifrlTdbsnYgEp", " PwmZqiGhCEzsCQnDRRJhUtIk"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> destFolders = {"xvpUBsceldhB", "wYDDdqEHFsgUReUNTLIFozXNYcDdd", "BDTMKCnRQayckvDW bKGKCISuhOMcjv", "dkPSpKjze CLBESDSDJeFMEU", "AYRkGZZKgeiLyzVSLoITY", "RuUbwmXrrUybvAcZ", "AjkajBjYxcZbpRJQdVYZTlV NvzMRkHx", "wYDDdqEHFsgUReUNTLIFozXNYcDdd", "dkPSpKjze CLBESDSDJeFMEU", "BDTMKCnRQayckvDW bKGKCISuhOMcjv", "JnDSmldSUaAndKwOBfNNDcMMdRyNQBxaU sl", "AjkajBjYxcZbpRJQdVYZTlV NvzMRkHx", "SalImvqcXTxpJkdHHEkitjjPLtAoEhfXHv", "JnDSmldSUaAndKwOBfNNDcMMdRyNQBxaU sl", "RuUbwmXrrUybvAcZ", "ng", "ng", "AYRkGZZKgeiLyzVSLoITY", "AYRkGZZKgeiLyzVSLoITY", "JnDSmldSUaAndKwOBfNNDcMMdRyNQBxaU sl", "RuUbwmXrrUybvAcZ", "ng", "tUfUsyxLGLotTXcgvLuKWRqpWW", "AYRkGZZKgeiLyzVSLoITY", "tUfUsyxLGLotTXcgvLuKWRqpWW", "AYRkGZZKgeiLyzVSLoITY", "ZjUeBFGl E", "xvpUBsceldhB", "dkPSpKjze CLBESDSDJeFMEU", "ZjUeBFGl E", "XCgYQEA", "XCgYQEA", "AjkajBjYxcZbpRJQdVYZTlV NvzMRkHx", "AjkajBjYxcZbpRJQdVYZTlV NvzMRkHx", "XCgYQEA", "tUfUsyxLGLotTXcgvLuKWRqpWW", "wYDDdqEHFsgUReUNTLIFozXNYcDdd", "RuUbwmXrrUybvAcZ", "ZjUeBFGl E", "JnDSmldSUaAndKwOBfNNDcMMdRyNQBxaU sl", "dbralnilKHjbcjoBMfybnaYpHEMXIMZQTPV", "AjkajBjYxcZbpRJQdVYZTlV NvzMRkHx", "dbralnilKHjbcjoBMfybnaYpHEMXIMZQTPV", "AYRkGZZKgeiLyzVSLoITY", "dbralnilKHjbcjoBMfybnaYpHEMXIMZQTPV", "dbralnilKHjbcjoBMfybnaYpHEMXIMZQTPV", "AYRkGZZKgeiLyzVSLoITY", "BDTMKCnRQayckvDW bKGKCISuhOMcjv", "ng"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> destFolders = {"nTkIWDshRzsfgWhjMZXtMeuwXtAcIs", "cevSyiFfuMTNCFAhTBqcjiK", " pgplNLl", "GvjXEZOrQRPgUokgphNJhp", "cevSyiFfuMTNCFAhTBqcjiK", "EbSVhSaUUIeeuBTYkUlnbDOVPogsHRJrsHLDZQXtD", "qoLTnHCMHopLnofjBedCtDXSVBZHp", "EbSVhSaUUIeeuBTYkUlnbDOVPogsHRJrsHLDZQXtD", "azzjJJAArNIWYkiDjSZb SNRXaC", "TdGrrpOlauYSYpoUgnEhbFGbVzURBXfAglrBEkmedqc", "TpwO vBjaqvSfGHHD", "hAYRUWrVHCegZAxUSZkqsx ZbLbPmhDyMGOgckAOmKur", "WKnauIRVHqxywLPI", "fmVRrUlBpAv lsOxYY", "SBiZh myCsgnjlKKIhp ", "uTDkkgbpIZGbIGKeLLRLCNdfgchfUkrtCuHSaNmiRs", "qoLTnHCMHopLnofjBedCtDXSVBZHp", "AKHZywAZFaXCncMgTfZAQZhjGWqpE vkKiIHdoL", "EbSVhSaUUIeeuBTYkUlnbDOVPogsHRJrsHLDZQXtD", "SBiZh myCsgnjlKKIhp ", "WyiVVxUlOvpIwD", "GvjXEZOrQRPgUokgphNJhp", "qoLTnHCMHopLnofjBedCtDXSVBZHp", "saYxYW", "hAYRUWrVHCegZAxUSZkqsx ZbLbPmhDyMGOgckAOmKur", "azzjJJAArNIWYkiDjSZb SNRXaC", "uTDkkgbpIZGbIGKeLLRLCNdfgchfUkrtCuHSaNmiRs", "TpwO vBjaqvSfGHHD", "GvjXEZOrQRPgUokgphNJhp", "AKHZywAZFaXCncMgTfZAQZhjGWqpE vkKiIHdoL", "nTkIWDshRzsfgWhjMZXtMeuwXtAcIs", " pgplNLl", "fOifWCLtJgoGWEu aaPM", "NrRdsZyTnSEVEWFAIVMwRdTUCUsY"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> destFolders = {"zYTQHRrFUfhABiKBvWElBktQbFeIUSTyqmNcCjhCN", "FIxkFOLzKEsEbmNUIEulpstzb", "eYAqMp", "DpxgXBfVNgCKggIPMiNBkJ", "MVlQIWXDEwzsyQxFqKZ Vq", "ivaXwVtflvudKVNTIMlbJGMBiukvwcndWNgyiYcSSWad", "DpxgXBfVNgCKggIPMiNBkJ", "ivaXwVtflvudKVNTIMlbJGMBiukvwcndWNgyiYcSSWad", "OoTQK HlAHMiYhKqgzlfHzvtpOuIZJXsHShHxo", "vSLNMkPwTWKWRxDdVuvKOyHYhHgThTMclCUxmOXEP", "FIxkFOLzKEsEbmNUIEulpstzb", "SbeeMESSwzfpiZQpMYLZDomcPDuQIBRFdvO", "GKNYKSgmClAtPqxGuCXnWgrvwfRTIXiOhvmWMyHuNnmccijBP", "ivaXwVtflvudKVNTIMlbJGMBiukvwcndWNgyiYcSSWad", "jkcQdySpNUzDULekEO", "uugamETVcJRcMx RnbuwOuvXuJusLacFTIKEsdEzR", "elc FQJRIKBYyXvAGq ySv", "bhIJpeCjTxLbUtNfradCBNEAprOs", "BjS", "VstooDunbnSSMv toEYHamz", "OoTQK HlAHMiYhKqgzlfHzvtpOuIZJXsHShHxo", "oUOtengmSduX", "yCa TMWiyVySDhazKXQekkISjTw", "olwJKrTGJbdrUJQmKIjSBwkoDMARNQBggyUWoScdYFzsuvdEC", "OoTQK HlAHMiYhKqgzlfHzvtpOuIZJXsHShHxo", "uugamETVcJRcMx RnbuwOuvXuJusLacFTIKEsdEzR", "jkcQdySpNUzDULekEO", "jkcQdySpNUzDULekEO", "XIcLKUzIAlEUHhOqXMlXfrANblOluOpxBQHskl Q", "OoTQK HlAHMiYhKqgzlfHzvtpOuIZJXsHShHxo", "jkcQdySpNUzDULekEO", "oUOtengmSduX", "BVxCRpyS IPzJjQmroWpL"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> destFolders = {"JoFti", " HT", "JoFti", "OwjP", "QovU", " ySvx", "URcuMw", "gU", "LRJ", " HT", "LRJ", "LRJ", "gU", "Ov", " ySvx", "URcuMw", "URcuMw", " HT", "gU", " ySvx", "LRJ", "JoFti", "gU", "v", "QovU", "v", "gU", "QovU", " HT", "QovU", "OwjP", " ySvx", "X"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> destFolders = {" yomfFBzGAqS", "QDvhbqvnvQYLqxHpftv", "o tBZqkYEow", "g", " yomfFBzGAqS", "kLbsEmuBgENVdrIcVuXs", "WGtVmYQNgZrmRvuxzjGbxBGddEGtY", "HGGzHZYYKubaqtjjyMdgARC", "HGGzHZYYKubaqtjjyMdgARC", "VtrFlvZBATdLfemuqCloRnebP", "kWLKdPqsRa", "kjIBRywxRd", "RHqWzKv", "VtrFlvZBATdLfemuqCloRnebP", "wKPULPSUbcysATZmGrYlxSJtEzPD", "JRTfdFsWTyyfHHmItfvap", "EmdaBTxNJmMkkxXhTKyG", "EmdaBTxNJmMkkxXhTKyG", "JRTfdFsWTyyfHHmItfvap", "wxIJdbMZHgEKKyjw gbzelTY", " SczEXWhGiNjGcMKKHVmtHiKNLh", "EmdaBTxNJmMkkxXhTKyG", "kZXhQrMrkLsMqp bTFIxrI", "wxIJdbMZHgEKKyjw gbzelTY", "rIuLXRvKMKuenzfGwsPhjewghHzW", "jzmiJh ", "wxIJdbMZHgEKKyjw gbzelTY", "o tBZqkYEow", "o tBZqkYEow", "jzmiJh ", "o tBZqkYEow", "QDvhbqvnvQYLqxHpftv", "kLbsEmuBgENVdrIcVuXs", "VtrFlvZBATdLfemuqCloRnebP", "UAaO W", "VtrFlvZBATdLfemuqCloRnebP", "WgjXHeNORgJW", " yomfFBzGAqS", "QABxw", "HjZxi", "kLbsEmuBgENVdrIcVuXs", "wxIJdbMZHgEKKyjw gbzelTY", "UAaO W"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> destFolders = {"a", "b", "b", "c", "d", "e", "d", "e", "d", "e", "c", "c", "a", "a", "a", "f", "g", "g", "f", "a", "h", "h", "i", "j", "i", "j", "a", "a", "k", "k", "l", "m", "k", "l", "m", "a", "o", "o", "p", "a"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> destFolders = {"a", "b", "a", "c", "a", "a", "b", "a", "c", "d", "a"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> destFolders = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "L", "h", "i", "j", "l", "m", "b", "a", "c", "n", "o", "p", "a", "q", "r", "s", "m", "t", "n", "s", "u", "v", "w", "d", "e", "f", "g", "w", "L", "l", "v", "u", "t", "r", "p", "q", "a", "o", "k"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> destFolders = {"a", "b", "b", "c", "d", "e", "d", "e", "d", "e", "c", "c", "a", "a", "a", "f", "g", "g", "f", "a", "h", "h", "i", "j", "i", "j", "a", "a", "k", "k", "l", "m", "k", "l", "m", "a", "o", "o", "p", "a"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> destFolders = {"ar", "bt", "b", "c", "d", "e", "d", "e", "d", "e", "c", "c", "a", "a", "a", "f", "g", "g", "f", "a", "h", "h", "i", "j", "i", "j", "a", "a", "k", "k", "l", "m", "k", "l", "m", "a", "o", "o", "p", "arrrr", "r", "r", "r", "t", "y", "r", "y", "r", "r", "y"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> destFolders = {"a", "b", "a", "b", "b", "b", "c", "a", "a", "a", "a", "b", "b", "c", "c", "c", "c", "cc", "b", "b", "b", "b", "c", "c", "c", "b", "b", "c", "c", "c", "a", "a", "a", "a", "a", "a", "a", "c", "b", "a", "b", "b", "b", "c", "c", "a", "a", "a", "a", "a"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> destFolders = {"a", "b", "b", "c", "a", "b", "b", "b", "a", "a", "a", "c", "b", "a", "b", "c", "c", "a", "b", "c", "c", "c", "c", "a", "a", "a", "b", "c", "b", "b", "a", "c", "c", "b", "a", "c", "c", "a", "b", "c", "a", "d", "s", "f", "j", "k", "a", "b", "c", "c"};
    MailArchiving* pObj = new MailArchiving();
    clock_t start = clock();
    int result = pObj->minSelections(destFolders);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=8394868&rd=6539&pm=4457
********************************************************************************
#include <vector>
#include <string>
 
using namespace std;
 
#define FOR(i,a,b) for(i=a; i<=b; i++)
#define REP(i,n) for(i=0; i<n; i++)
#define FIL(a) memset(&a,0,sizeof(a))
#define VI vector<int>
#define VS vector<string>
 
struct MailArchiving
{
  int n;
  bool eq[50][50];
  int dp[50][50];
  
  int minSelections(VS dest)
  {
    int i,j,k,p,t;
    n=dest.size();
    REP(i,n) REP(j,n) eq[i][j]=dest[i]==dest[j];
    REP(i,n) dp[i][i]=1;
    FOR(k,2,n)
    {
      i=0; j=k-1;
      while(j<n)
      {
        dp[i][j]=1+dp[i+1][j];
        FOR(p,i+1,j) if(eq[i][p])
        {
          t=dp[p][j];
          if(p-1>=i+1) t+=dp[i+1][p-1];
          dp[i][j]<?=t;
        }
        ++i; ++j;
      }
    }
    return dp[0][n-1];
  }
};

********************************************************************************
*******************************************************************************/