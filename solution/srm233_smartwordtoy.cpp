/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3935
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

class SmartWordToy {
public:
    int minPresses(string start, string finish, vector<string> forbid);
};

int SmartWordToy::minPresses(string start, string finish, vector<string> forbid) {
    int ret;
    return ret;
}


int test0() {
    string start = "aaaa";
    string finish = "zzzz";
    vector<string> forbid = {"a a a z", "a a z a", "a z a a", "z a a a", "a z z z", "z a z z", "z z a z", "z z z a"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string start = "aaaa";
    string finish = "bbbb";
    vector<string> forbid = {};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string start = "aaaa";
    string finish = "mmnn";
    vector<string> forbid = {};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string start = "aaaa";
    string finish = "zzzz";
    vector<string> forbid = {"bz a a a", "a bz a a", "a a bz a", "a a a bz"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string start = "aaaa";
    string finish = "zzzz";
    vector<string> forbid = {"cdefghijklmnopqrstuvwxyz a a a", "a cdefghijklmnopqrstuvwxyz a a", "a a cdefghijklmnopqrstuvwxyz a", "a a a cdefghijklmnopqrstuvwxyz"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string start = "aaaa";
    string finish = "cccc";
    vector<string> forbid = {"abcdefghijklm abcdefghijklm abcdefghijklm b", "abcdefghijklm abcdefghijklm nopqrstuvwxyz b", "abcdefghijklm nopqrstuvwxyz abcdefghijklm b", "abcdefghijklm nopqrstuvwxyz nopqrstuvwxyz b", "nopqrstuvwxyz abcdefghijklm abcdefghijklm b", "nopqrstuvwxyz abcdefghijklm nopqrstuvwxyz b", "nopqrstuvwxyz nopqrstuvwxyz abcdefghijklm b", "nopqrstuvwxyz nopqrstuvwxyz nopqrstuvwxyz b", "abcdefghijklm abcdefghijklm b abcdefghijklm", "abcdefghijklm abcdefghijklm b nopqrstuvwxyz", "abcdefghijklm nopqrstuvwxyz b abcdefghijklm", "abcdefghijklm nopqrstuvwxyz b nopqrstuvwxyz", "nopqrstuvwxyz abcdefghijklm b abcdefghijklm", "nopqrstuvwxyz abcdefghijklm b nopqrstuvwxyz", "nopqrstuvwxyz nopqrstuvwxyz b abcdefghijklm", "nopqrstuvwxyz nopqrstuvwxyz b nopqrstuvwxyz", "abcdefghijklm b abcdefghijklm abcdefghijklm", "abcdefghijklm b abcdefghijklm nopqrstuvwxyz", "abcdefghijklm b nopqrstuvwxyz abcdefghijklm", "abcdefghijklm b nopqrstuvwxyz nopqrstuvwxyz", "nopqrstuvwxyz b abcdefghijklm abcdefghijklm", "nopqrstuvwxyz b abcdefghijklm nopqrstuvwxyz", "nopqrstuvwxyz b nopqrstuvwxyz abcdefghijklm", "nopqrstuvwxyz b nopqrstuvwxyz nopqrstuvwxyz", "b abcdefghijklm abcdefghijklm abcdefghijklm", "b abcdefghijklm abcdefghijklm nopqrstuvwxyz", "b abcdefghijklm nopqrstuvwxyz abcdefghijklm", "b abcdefghijklm nopqrstuvwxyz nopqrstuvwxyz", "b nopqrstuvwxyz abcdefghijklm abcdefghijklm", "b nopqrstuvwxyz abcdefghijklm nopqrstuvwxyz", "b nopqrstuvwxyz nopqrstuvwxyz abcdefghijklm", "b nopqrstuvwxyz nopqrstuvwxyz nopqrstuvwxyz"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string start = "aaaa";
    string finish = "bbbb";
    vector<string> forbid = {"b b b b"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string start = "mmma";
    string finish = "yyyy";
    vector<string> forbid = {"qwertyuiopasdfg qwertyuiopasdfg qwertyuiopasdfg z", "qwertyuiopasdfg qwertyuiopasdfg hjklzxvcbnm z", "qwertyuiopasdfg hjklzxvcbnm qwertyuiopasdfg z", "qwertyuiopasdfg hjklzxvcbnm hjklzxvcbnm z", "hjklzxvcbnm qwertyuiopasdfg qwertyuiopasdfg z", "hjklzxvcbnm qwertyuiopasdfg hjklzxvcbnm z", "hjklzxvcbnm hjklzxvcbnm qwertyuiopasdfg z", "hjklzxvcbnm hjklzxvcbnm hjklzxvcbnm z", "qwertyuiopasdfg qwertyuiopasdfg z qwertyuiopasdfg", "qwertyuiopasdfg qwertyuiopasdfg z hjklzxvcbnm", "qwertyuiopasdfg hjklzxvcbnm z qwertyuiopasdfg", "qwertyuiopasdfg hjklzxvcbnm z hjklzxvcbnm", "hjklzxvcbnm qwertyuiopasdfg z qwertyuiopasdfg", "hjklzxvcbnm qwertyuiopasdfg z hjklzxvcbnm", "hjklzxvcbnm hjklzxvcbnm z qwertyuiopasdfg", "hjklzxvcbnm hjklzxvcbnm z hjklzxvcbnm", "qwertyuiopasdfg z qwertyuiopasdfg qwertyuiopasdfg", "qwertyuiopasdfg z qwertyuiopasdfg hjklzxvcbnm", "qwertyuiopasdfg z hjklzxvcbnm qwertyuiopasdfg", "qwertyuiopasdfg z hjklzxvcbnm hjklzxvcbnm", "hjklzxvcbnm z qwertyuiopasdfg qwertyuiopasdfg", "hjklzxvcbnm z qwertyuiopasdfg hjklzxvcbnm", "hjklzxvcbnm z hjklzxvcbnm qwertyuiopasdfg", "hjklzxvcbnm z hjklzxvcbnm hjklzxvcbnm", "z qwertyuiopasdfg qwertyuiopasdfg qwertyuiopasdfg", "z qwertyuiopasdfg qwertyuiopasdfg hjklzxvcbnm", "z qwertyuiopasdfg hjklzxvcbnm qwertyuiopasdfg", "z qwertyuiopasdfg hjklzxvcbnm hjklzxvcbnm", "z hjklzxvcbnm qwertyuiopasdfg qwertyuiopasdfg", "z hjklzxvcbnm qwertyuiopasdfg hjklzxvcbnm", "z hjklzxvcbnm hjklzxvcbnm qwertyuiopasdfg", "z hjklzxvcbnm hjklzxvcbnm hjklzxvcbnm", "n ablm ablm abcdefghijkl", "n ablm abcdefghijkl ablm", "n abcdefghijkl ablm ablm", "abcdefghijklm n abcdefghijklm abcdefghijklm", "abcdefghijklm abcdefghijklm n abcdefghijklm", "abcdefghijklm abcdefghijklm abcdefghijklm n", "bcdefghijklm bcdefghijkl ablm ablm", "abcdefghijkl ablm bcdefghijkl ablm", "ablm bcdefghijklm bcdefghijkl ablm", "abcdefghijkl ablm ablm bcdefghijkl", "ablm abcdefghijkl ablm bcdefghijkl", "ablm ablm bcdefghijklm bcdefghijkl"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 228;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string start = "xxxa";
    string finish = "zzzz";
    vector<string> forbid = {"bcdefghijklmnopqrstuvwx bx bx bx", "bx bcdefghijklmnopqrstuvwx bx bx", "bx bx bcdefghijklmnopqrstuvwx bx", "bx bx bx bcdefghijklmnopqrstuvwx", "z ay ay ay", "ay z ay ay", "ay ay z ay", "ay ay ay z", "y abwx abwx abw", "y abwx abw abwx", "y abw abwx abwx", "abwx y abwx abwx", "abwx abwx y abwx", "abwx abwx abwx y", "bwx bw abwx abwx", "abw abwx bw abwx", "abwx bwx bw abwx", "abw abwx abwx bw", "abwx abw abwx bw", "abwx abwx bwx bw"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string start = "yyya";
    string finish = "yyyy";
    vector<string> forbid = {"abwxyz abwxyz abwxyz z", "abwxyz abwxyz z abwxyz", "abwxyz z abwxyz abwxyz", "z abwxyz abwxyz abwxyz", "abcdefgh abcdefghijklm bcdefghijklm bcdefghijklm", "abcdefgh abcdefghijklm bcdefghijklm nopqrstuvwxz", "abcdefgh abcdefghijklm nopqrstuvwxz bcdefghijklm", "abcdefgh abcdefghijklm nopqrstuvwxz nopqrstuvwxz", "abcdefgh nopqrstuvwxyz bcdefghijklm bcdefghijklm", "abcdefgh nopqrstuvwxyz bcdefghijklm nopqrstuvwxz", "abcdefgh nopqrstuvwxyz nopqrstuvwxz bcdefghijklm", "abcdefgh nopqrstuvwxyz nopqrstuvwxz nopqrstuvwxz", "ijklmnopq abcdefghijklm bcdefghijklm bcdefghijklm", "ijklmnopq abcdefghijklm bcdefghijklm nopqrstuvwxz", "ijklmnopq abcdefghijklm nopqrstuvwxz bcdefghijklm", "ijklmnopq abcdefghijklm nopqrstuvwxz nopqrstuvwxz", "ijklmnopq nopqrstuvwxyz bcdefghijklm bcdefghijklm", "ijklmnopq nopqrstuvwxyz bcdefghijklm nopqrstuvwxz", "ijklmnopq nopqrstuvwxyz nopqrstuvwxz bcdefghijklm", "ijklmnopq nopqrstuvwxyz nopqrstuvwxz nopqrstuvwxz", "rstuvwxyz abcdefghijklm bcdefghijklm bcdefghijklm", "rstuvwxyz abcdefghijklm bcdefghijklm nopqrstuvwxz", "rstuvwxyz abcdefghijklm nopqrstuvwxz bcdefghijklm", "rstuvwxyz abcdefghijklm nopqrstuvwxz nopqrstuvwxz", "rstuvwxyz nopqrstuvwxyz bcdefghijklm bcdefghijklm", "rstuvwxyz nopqrstuvwxyz bcdefghijklm nopqrstuvwxz", "rstuvwxyz nopqrstuvwxyz nopqrstuvwxz bcdefghijklm", "rstuvwxyz nopqrstuvwxyz nopqrstuvwxz nopqrstuvwxz", "ayz bcdefghijklm ayz bcdefghijklmnopqrstuvwxz", "ayz nopqrstuvwxz ayz bcdefghijklmnopqrstuvwxz", "bcdefghijklmnopqrstuvwxz ayz ayz bcdefghijklm", "bcdefghijklmnopqrstuvwxz ayz ayz nopqrstuvwxz", "ayz bcdefghijklm bcdefghijklmnopqrstuvwxz ayz", "ayz nopqrstuvwxz bcdefghijklmnopqrstuvwxz ayz", "bcdefghijklmnopqrstuvwxz ayz bcdefghijklm ayz", "bcdefghijklmnopqrstuvwxz ayz nopqrstuvwxz ayz", "bcdefghijklmnopqrstuvwxz bcdefghijklm ayz ayz", "bcdefghijklmnopqrstuvwxz nopqrstuvwxz ayz ayz", "by bx abxy abxy", "abwx abxy bwx abxy", "abxy bwxy bwx abxy", "abwx abxy abxy bwx", "abxy abwx abxy bwx", "abxy abxy bwxy bwx"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string start = "zzzz";
    string finish = "aaaa";
    vector<string> forbid = {"abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string start = "abcd";
    string finish = "zzzz";
    vector<string> forbid = {};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string start = "aaaa";
    string finish = "xxxx";
    vector<string> forbid = {"xz xz xz z", "xa xa xa b"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string start = "xrym";
    string finish = "oxyu";
    vector<string> forbid = {"q qr xtmbowg xfpugcd", "fagrwco wqhcvoagfm p lyxuir", "pndlieywcs fbph yfmwi teipcwsdm", "blpjiqy cwvnha pfyl lwdpicb"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string start = "qkna";
    string finish = "hwfa";
    vector<string> forbid = {"nyvu tmi mayejhnt hsjucy", "iqgb ntq rwq kmduvspbc"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string start = "qjbk";
    string finish = "snlc";
    vector<string> forbid = {"r wk uqgd sqchfteg", "tupexrioblc wycbvn jwtq jk", "qwamsfkouj jidr lyptnore qurtw", "vxqaigb rjxo cvmjr ixoldjfw", "cybsrfigxl im qg elwda", "xsapvqybt fqkd tpafyqhw utgq", "cjfe den s wbm", "pgxij pgreu o a", "wskpftb sbmpl hajmgrnvsbq gpqemcklih", "wvnky turvbiso wtfnm idablx", "ifnvjmg a cb narquidvs"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string start = "faqo";
    string finish = "wjhf";
    vector<string> forbid = {"g ehatdfmo binjwku agovkwuhx", "udkxso ucrswnoah jd kumvic", "bndx urawcipm dyasrboc ulfc", "upwtios sdwakmp cqda rse", "yrdhefwuk mys nb jyai"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
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
    string start = "coht";
    string finish = "hlrb";
    vector<string> forbid = {"js xnpkvbud djnhscixw rcla", "jedr xhq h ldxrab", "evwybj rqkydsx nct yli", "h vwypfsql anhtgl ypma", "udsyc yilqfbd irockhwnd pidl", "wbcsnje kwu ocdutjifkp xki", "vbah p dl rel", "hoajuv yrhxsi dfvoi ejorsqwtv", "jh ntmxdsjuqp oamnx gbyphikq", "imuyhe tk rjuvel hyufckxwno", "rh jqsymcpk uestlykvo lg", "ivp xjy sbhge parhgc", "ydjtfwqpoc vsifwkcexj ugdkhnj xkoenuif", "umtxdpw k gruiqmaob wscijk", "uyemrknh njacek w vebc", "a fyljxmehpv axpc jnvgr", "bfnetdqoxs tgk vsrhke sfarhm", "sgm gja tonrp tbw", "pyx fcdvupy vurniltb xhrlf", "mgkl xpcujabdte rwj msoclekp", "odkhsqmyav eailb doixgs k", "ne owkbdmne msepj epdg", "hjngyqp s ejofygrl afiyrbkdv", "ncgibhk dlx ivupqoxt syja", "litofuwd eul rieqg nbwea", "aqswhkgy lmyuoabndt ifgnsyce slmqijyec", "ebc tbvusxp yvhieglnct syelfica", "opjb esdyxjtug qdtgsb kreov", "fauy rnjskymgpc ikh bmvg", "pygf mygxbqul xbwgh lvyqcwxf", "bwxueg lch ref jqyf", "exjuwgoai e von kncury", "kplf aitugwld jbxd kuwvdejqxc", "rshlikau pqlenti heqfavju ptwi", "nex dewvosug edp gnvmufoh", "bshfo me v ivbxwea", "nvojprt tv qshavwi vxpfiqwe", "jv xkcul uqjkdvlr labjgnioe", "iufyr dkblsg tspuaceqn b", "gfvo sgwylvkbm brxmiydhuk iyafcvo", "sjq pus uxhtprm ujaf", "thxufjlcy uwj cxefq ngtw", "olkwn rhqydseap isqkhpo xks"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string start = "vlrc";
    string finish = "xols";
    vector<string> forbid = {"bthxuewiog pmhkyogsae rpxdvjgym dly", "kl gpmnef oeinbwrj wguixrc", "ten osjktbgya noshgl deijmnu", "npibex odlkbsx pjxqbvy ktnsbq", "kyivhxnomj nohkauwbpg tvghawy qdvuwf", "nkspdmwv dbow boev gm", "vxg vuptnmg cd qmxypdbevj", "nxk nbrswgfoyl qpycmojs tdbvixrsa", "ygmb edypvsg wlvc ve", "awpcno yjlanfiuxe mheibk grcijdxqtv", "savwpqfo xek cbpofshwqt gucsmkpden", "fnpq gfvwdi fkgqnvwr hr", "dkbe ujprysv q fv", "f srjl mcxwt q", "piws wx vmwy xloeiduac", "ykgptlvqc hc ef hifupo", "svyae x owr frtebhdqk", "nakmv gufyrwh rthb fjpboqn", "ufdec ty lc be", "cu rkfycxsh cdlrn e", "fy w c x", "eqhvsprafgk g jygwpofin isl", "u lgqmot krvld tm", "rsgqncap jovqyckxhd hdj o", "mhx nqeojrix ewpxsao bv", "oymewlupsnf tlfpjkoxsw qnfhem q", "qjs xsftmcr qibtfeor tojucki", "bqs htsqnj rf kebg", "pojcab xvqknjsio xladfehjwi jknsudyc", "cpehutx vcbq kgtiqpr i", "adwt fhogd rhiecfdbas cnhtsf", "whpukoq hb twlacebsi pfjmxiysgk"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string start = "dchp";
    string finish = "fcqi";
    vector<string> forbid = {"wtaq xjnoqa ptwux mngbcyqa", "bqmpnurtkw w njupvqfeo kpu", "dpas kebvofpug argst wne", "gcunqjpr e gmouslrn fds", "xaqmko uaqwoikr dy dtjixphmv", "aeu qfelnhm kuwcafohqlj cxdntskwgy", "wjvltbeiq guewri ksjugrth qtnlkvw", "gkowpqac rqgopcxyab ji hroycufqm", "qp escxtp yekwa axdgkjhrnl", "jourlab dyns ucvidbm uxtvsfhmrp", "j yopgvjrnid yx fisx", "tvlk nehbm npwjukqfov wmdls", "dyleuf ltofhymbg xp aunosceyiv", "msgfeia kftr uj ejb", "arixfhpe ojptlva tdfkr bn", "tarcypge psufrbg nxaorwpkce syrteqxcm", "kljypgqr rnvtwdb uacbq j", "kh xgq tfk dyo", "sgbpv utoi lci cfns", "wlta gejpb r eqiyvpfns", "qgxyopkia dokqjl knfjxi pnbxrjuwhi", "nrtox xtsho ptu ht", "jiovxsyrmfd vmcd moych t", "xtowdmbksp x ucqa hul", "dpicxsbv tsne b pjysa", "c mcwrkbua odgiynmtp fwubn", "wkcjamqdp mukg wh s", "nc k uychpldwts sd", "pdrbjuag pgvqhxmai fvi kymtqf", "ltvwc bnuekfd ownhm rnsatibgo", "kfe kxnmgbjr cqkdfbhrxs maiwl", "eu rohibjct qhietnpux nhmwyrs"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string start = "mhfi";
    string finish = "dtsu";
    vector<string> forbid = {"vnfwomyad guqlcksptf fdiuhgm iaftsdl", "x tifeh vlbhxa ahbxm", "bhxaqr direhkwb imd u", "uwvt bpudn qgiofauxw c", "y k pmnfjkeh qviode", "vy bcktsm ceomipjk nmkeygalrf", "na fxsnyrbe cihdj iaklsr", "arhbi xehfwqv heg xqijumhpfl", "udbelg gcaeuxi htwgmvjo rwajtpfebd", "hmpenrix qyitoclxg ncdxif irplkhtaf", "dchw wvmb idneabyo vcqxw", "unmiyv gce vho ikh", "yna dasyue qmfjeiskl bfmjsry", "ikdb w c aqpbfweo", "mlybifd umyjcr tuevmd thbagpwr", "mwkqg kntvhrl wedxs sqnwgmxrj", "ehlr ut nbmigvoe fnvecihl", "kjustp yrl pkqxm saocqlfupd", "c rkfn s mxjf", "oxjn gehwsab vojpbudrwx oq"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string start = "upej";
    string finish = "tacr";
    vector<string> forbid = {"ohlkxciu dnihkg wcumsag dmsr"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string start = "glum";
    string finish = "cbsw";
    vector<string> forbid = {"erh inrewoypsu orqhm k", "djyha vq qs avr", "byhwtlo syjuind sk icklavbhor", "ugypdn fndk uwmirjgto f", "hwg mikcxs gquxskwo ymdhlwbg", "ospcfqvxt jwmrxbgk kapj mhgc", "dbjloyius tshn oifv ibxamrd", "okei cnpjtmax dsngkcua afntc", "aixeugjdot c waq ibrcywfo"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string start = "thgj";
    string finish = "xjlu";
    vector<string> forbid = {"wo ebsg hgai bxvqfjcu", "odwsa cu htav pj", "nr afvjpklery cpoblutj pweynbj", "cvwgbe de jdnpvkugi ygswveio", "dwofkpcxnl nmt paviqg xmqup", "ukgqto klm cxqmrfagbv xt", "rwhipyqg kgfm mjlubfw rxwcjf", "vdk jtceu tfixy pyj", "ygkb b fhbdwnav jpucnlxo", "bcxk emuryqskox ljfyh ihryuqvwom", "rbymulchfis ecxhonwimt stkcfriwv nafhpvw", "jaeqk s cexkyl gqfcryhkv", "qf wfhxor grdls whym", "gk plyfenduj kpsnhie bgfo", "tlpx vwui fgph hwaernoims", "gfa ecbqfdkx oxlqi dpir", "udpneicxrt m kriwlbjsdo kyohtefvjr", "mwjkhya tvounl xuk iapfme", "nwtaivle fes mcyjixfd r", "homs jk eradykph afve", "kityhxrsd ypomkex chxaftu hbc", "lytegcjs ocixkvmbyr nvrj tcruak", "lc qow lcsf wesiymrb", "tuxhfmwiao uekclhaf pv nrfu", "kth gfm hilknpymv ktl", "i iflpmojbras s xt", "t ps kea pohjw", "pbnifkw crgwk cdiqly uhetygrqvp", "icbwtnmd rvykc udtmjaxhb dlgcv", "egimhp thumdp ysulabexqk emcqlsy", "ug q thsxij o", "v cg j hnuksfxi", "rexokinp lekqw qm xjh", "jgvpnw kilxm vcgl qgsjvaiwl", "yxfiotp getrocb uhtnpef ld", "kruhxm hboxnt pbt wecdnsbko", "csyi nrjbkwm wlhibc vg", "xnuk fqj ihdtbmxkr g", "monsbr kxndhluybc tsdkyfm vkafwlt", "dfra sqyjtwl aiolrv whv"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string start = "fubj";
    string finish = "npbm";
    vector<string> forbid = {"vnh med kqyh vgrq", "m ghafbu qk sgabvdkq", "yvhmqaeor db ctyleaduj dhtxyc", "biy jq ciwxo m", "cegpoubjr hgutx nsdrb tpjhkcgbo", "cqtnyipj pxfbhktuy vdqxpil qmtx", "htrekya ecxwdh jywd lmsp", "ydborpig wcv imba qghr", "bx gvblhjf ceapo vtns", "cipegakr yfepi uhgr aekosblcv", "itkq ufpbnrv i emal", "iv gnrv diqtrgw xpq", "gdhnqr joytxv rwae n", "yh bqo afgrt l", "qogl d tafucjpwes gvbqlwudnp", "m sb i wqhg", "c igoc slyx paidf", "tbemq ib ai lkeiapgt", "dwqrcuihmo el fhea xqdnmsi", "qw vtmrgo ugp we", "dsgxm jdvlnkioga akclpjnfors pno", "oslrfkynj tkvie vatgxechs oqekmhrjybd", "rfysociqv xangwyr tjywsli nlgjhr", "y fnw jvfogr ylpwu", "jxndpcqt bqcnsiodrt xtuysimfrj vlyepfw", "wqlpfojryi wcm g onbx", "sfnouqw kvfoels tv vrtcfah", "bpewd f sacuejh gwvmrt"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string start = "qrce";
    string finish = "qrgp";
    vector<string> forbid = {"fn vycxpwoenf lxspayrt pkd", "vpd c fvy avk"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string start = "oelx";
    string finish = "prem";
    vector<string> forbid = {"ursxbq fe dn svifrhxdk", "sbv hvy mqpf aypb", "tqil atuikyb gnakeyiwd bxosqdftp", "iqwjnosvd j m i", "srm bmlrn n so", "krg fg bejg dgvqrm", "pfouehwcjr tk yenjwux hvrsqo", "w ralg btmjuv kp", "ugrthcsa r gpelqcfvu dctbrygmshq", "tdsxgmfnre euiyvhstgp dyp luesiwgm", "jon mwi m uesqnkfmp", "alkorfnjqi i jgoehlunt ktbaucmirs", "tnpvbdlaog svuam xunpeg capgqrxnf", "unyexgf arxfpgmodn hwjayt yof", "kvjsdwp icmpld p mj"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string start = "aaaa";
    string finish = "dddd";
    vector<string> forbid = {"jacd jbc jcd jbcd", "jd jab jbd jbc", "jcd jab jd jad", "jabc jbcd jbc jbc", "jacd ja jc jb", "jabd jab jbd j", "jacd jbd jbd jb", "jc ja j jcd", "jcd ja jc jabc", "ja jc jd jd", "jc j jacd jabd", "ja jcd jabc jab", "jd j jcd jacd", "jbc jbc jb jad", "jbc jbd ja jbcd", "jad jbc jac jbc", "jabd jabd jab jb", "j jc j jd", "jbcd ja jb jacd", "jacd jbc j jabc", "j jacd jc jbcd", "ja jb jabc jbcd", "jad jab jd jab", "jb jabcd jcd jb", "ja jabd jb jbd", "jb jb jbd jad", "jd jbd jbcd jbc", "jc jd j jc", "jbc jacd jbcd jacd", "jb jd jb jd", "jcd jc jad jad", "jc jbd jc jac", "jad jad jad jc", "jac jabcd jc jc", "jad jd jab jad", "jac jab jbc ja", "jabcd jabc j jbd", "ja jac jabcd jc", "jbcd j jbc j", "jbc jbc jab jc", "jc jad jbd jad", "jc jd jc jabcd", "jb jd ja jbd", "jcd jabc jabc jabcd", "jc jc j jabd", "jabd jb jacd j", "jab jc jbd ja", "jac jabcd jd jc", "jcd jabc jc jac", "jad jbd jac jabcd"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string start = "aaaa";
    string finish = "dddd";
    vector<string> forbid = {"jac jbc jabd jbcd", "jab j jcd jab", "jbd jabd jbc j", "jacd jb jac jb", "jabc ja jb jc", "jabd jbd jabd jac", "jb jc jab jbd", "jc jb jacd j", "jc jb ja jd", "jd jacd jcd jc", "jbc ja jc jbc", "j jabcd ja jabc", "jc ja jabcd jab", "jc jac jbcd jac", "jbd jac jbc ja", "jcd jabc jc jab", "jbc jab jad jacd", "jbc j jac jd", "jbc jcd jc jacd", "jd jbcd jb jcd", "jabc jcd jabc jbc", "jacd jacd jd jb", "jbcd jbd jd jc", "jabd jb jabc j", "jbc jc jc jabcd", "jacd jc jad jbc", "jacd jabd jabcd j", "jabc jcd jabd jad", "jab jabcd j jac", "jbd jabd jabc jab", "jbc jbd jd jbcd", "j jbcd jcd jbcd", "jc jabd jbc jabc", "jcd jabcd jb jb", "ja jc jc j", "jd jac jbd jab", "jbc jbc ja jab", "jbcd jabc jad jbd", "jacd jcd jd jbc", "jabc jabcd jc j", "jabd ja jb jac", "ja jbc jabc jab", "jabd jbd jc jabd", "jd jab jbc jabd", "jbc jab jbc jc", "ja jbd jbcd jbcd", "jac jbcd jabcd jabd", "jb jad ja jbd", "jabcd j ja jb", "jab jc jb jab"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string start = "aaaa";
    string finish = "dddd";
    vector<string> forbid = {"jd jd j jabc", "jac ja jb jab", "jbd jac jab jb", "jbd j jacd jd", "jc jbc jc jbc", "jc jbcd ja jabd", "jabc jcd jabcd jabcd", "jabd jad jc jc", "jd jacd jb jcd", "jac j j jcd", "jb j jcd jbc", "jd jad jbc j", "jab jbcd jacd jcd", "jc j jbcd jabd", "jabcd ja jcd j", "jabc jbd jb j", "jbc jbd ja jbc", "jcd jcd jb j", "jad jb jabcd jbcd", "jad jc jad jcd", "jb jbc jbd jb", "jabcd jac jabc jc", "j jc ja ja", "jc jabcd jc ja", "jacd jbcd j jd", "jabd jabc jc jd", "jab jc jbcd jcd", "jabd jcd jabcd jbc", "j jad jd jac", "jad j jab jd", "jb jabd jb jab", "jabcd jbc jc jbd", "jabd jd jab j", "jabcd jb jc jab", "jd jbd j jab", "jbd jab jabd jbd", "jc jad jc jab", "jbc jac jb jc", "jad jbd ja jd", "jd jabcd jc jad", "jc jbc j j", "jad jad jabc jbd", "j jbc jc jd", "jbcd jad jc jad", "jad jb jabc jb", "jacd jabd j jac", "jc j ja jab", "jabcd jbd jb jc", "jcd jabd jc jab", "jacd jabcd jbc jbc"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string start = "aaaa";
    string finish = "dddd";
    vector<string> forbid = {"ja jd j jc", "jbcd jbc j jacd", "jbcd jbcd jab jac", "jd ja jbd jacd", "jbcd jbc jc jd", "jacd jbcd jac jbcd", "jbd ja jabd jad", "jb jad jabcd jb", "jabd jd jd j", "j jabd jacd jad", "jbcd jc jabcd jab", "jac jab j jab", "jb jabd jb jbcd", "jacd jc jbd jac", "jcd jabcd j jbd", "jc jabc jbd j", "jbc jb jcd jbcd", "jacd jc jbcd jc", "jabd jd jab j", "jac jacd jbd j", "jc j jabd jbc", "jd jacd jad jabc", "j jabc jc jbcd", "jc ja jad jbc", "jd jabd jabc jabd", "jb jabd jacd jcd", "jabc jabc jacd jc", "jbcd jbc jabd jacd", "jbc ja jbd jcd", "j jc jbc jacd", "j ja j jacd", "jac jbd jb jac", "jac j jbcd ja", "jbd j jc j", "jbd jcd j jad", "jacd ja jbd jc", "jcd jb jcd jbc", "jabcd jd jcd jab", "jbd jbd jabd j", "jab jbd jcd jabc", "jc jcd jc jabc", "jbc jbc jacd jd", "jcd jbcd jb jbc", "jbc jb j jd", "jb jad jabcd jab", "jbc jbd jcd jabc", "jac jbcd jd jad", "j jad jac jb", "jab jacd jac j", "jad jad jabd jb"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string start = "aaaa";
    string finish = "dddd";
    vector<string> forbid = {"jbd ja j jd", "jd jbc jcd jabd", "jabd jad j jb", "jabd jb jabcd jad", "jab jd jbc jabcd", "jbcd jacd ja jbc", "jc jacd jbcd jbd", "jab ja jbd jb", "jabd jad j j", "jad ja jbc jcd", "jabc j ja jbc", "jc jbd jc ja", "jcd jbc jabd jd", "jad jbd jbcd jab", "j jad jbcd jbd", "jc jad jcd jacd", "ja jb jc jbcd", "jb j jd jc", "jbc jc jb jabcd", "jd jabc jabcd ja", "jbc jabd jcd ja", "jad ja jcd jbcd", "jbd jac jabd jbd", "jabcd jbc jcd jabcd", "jcd jc jbd jab", "jac jabd jabd j", "jabcd jbd jacd jbc", "jb jd ja jbcd", "jabcd jabc jd jbd", "jd jad j jabcd", "jabd jabcd jacd j", "jbc jc jd jd", "jab jcd jbcd jcd", "jc ja jb jad", "jbcd jab jbcd jabcd", "jac jcd ja jacd", "jabc ja jabcd j", "jabcd jcd jac jac", "jbcd jabd jad jc", "j jacd jb j", "jbd jad jac jabd", "jacd jac jbcd jbcd", "jbd jad ja jd", "jabcd jbcd jbcd jb", "jabcd jac jacd jcd", "jabc ja jacd jb", "jb jc j jd", "j ja jacd jacd", "jbd ja jd jabc", "jabd jc jd jab"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string start = "aaaa";
    string finish = "dddd";
    vector<string> forbid = {"jb jc jabcd j", "jd jbd j jb", "jabcd jcd jc ja", "jb jbc jabd jbcd", "ja jc jbd jbcd", "jbd ja jacd jacd", "jabc jad jacd jbcd", "jbcd jd jbc jcd", "jbcd jc jc jac", "jb jacd jb jacd", "ja ja jd jcd", "jd jc jacd jac", "jabc jac jab j", "jabd jacd jc jcd", "jcd j jab j", "jad ja jab jc", "jabd ja jc jc", "jad ja jc j", "jad ja jabc jc", "jc jab ja jcd", "jabd jc jcd jbc", "jad jd jb jc", "jacd jc jab jabc", "jcd jac jabc ja", "jb jabc ja jd", "j jabd jad jabc", "jabd jbcd jabcd jabc", "jbd jad jcd jc", "j jabd jacd jbc", "jac jbc jbc jad", "jd jcd jad jc", "jabc jcd jbd jacd", "jbc jabd jbcd jad", "j jc jabc jacd", "jabc jabd jcd jac", "jabcd jab jcd jabd", "jbcd jd ja jad", "jbd jad jcd jc", "jad jcd jad jab", "jabd jabc jcd jbd", "jb jab jad jcd", "jbcd jab ja jbcd", "jc j jc ja", "jcd jacd jd jac", "ja jbd jbc jcd", "jc jab jb jc", "jabcd ja j jbc", "jb jabc jacd jb", "jabc jbd ja jb", "jbc jcd jad jbc"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string start = "aaaa";
    string finish = "dddd";
    vector<string> forbid = {"jb jad jbd jacd", "jabc jacd jabd jbd", "jbcd jcd ja jabc", "jab jbc jcd j", "jd jabcd jac jbc", "j ja ja jabc", "jacd jc jac jad", "jabc jac jd jcd", "jb jcd jacd jabcd", "ja jab jd jcd", "j jad ja jc", "jad jac jacd jd", "jbcd jacd jc jabd", "jd jbd jad jc", "jcd jabc jbd jcd", "ja jbd jabc jabc", "jabd jcd j jabd", "jabd jcd j jac", "jbc jbcd jabc jcd", "jabc jbcd j jbcd", "jcd jacd jb jbd", "jc jb jbd jc", "jbd jad jacd jac", "jbcd jab jbcd jbc", "jbc jabc jd jabc", "jcd j ja jcd", "jbcd j jb jc", "jacd jabc jc jb", "jbd jc jcd jd", "jbc jabcd jab jcd", "jb jd ja j", "jab jab jabcd jcd", "jbcd jab jabcd jc", "jac jb jac jabc", "jab j ja jbd", "jb jabd jcd jac", "j jabd jabd j", "ja jad jbc jbcd", "jd jab jbcd jab", "jc jc jacd jbcd", "j jcd jc jab", "jabc j jbd j", "jad jd jab jabc", "jcd jac jbd jabc", "jd jabc j jd", "jcd jcd jabcd j", "jabcd jb jcd jc", "jabcd jb jacd jabc", "jbc jab jb jcd", "jac jabcd jacd jbd"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string start = "aaaa";
    string finish = "dddd";
    vector<string> forbid = {"jbcd jbd ja jcd", "jbcd jbc j j", "jac jb jabd jacd", "jb ja jb jd", "jd j jd jbc", "jacd jcd jbc jb", "ja jbc jb jacd", "jabcd jbc ja jbcd", "j ja jb jcd", "ja jabcd jc jbd", "jb jad jd jacd", "jabcd jc ja jabc", "j jac jb jbcd", "jab jbcd jabcd jbd", "jabc j jbc jbd", "jad jabc j jabcd", "jabd jbc jabd jcd", "jd jabc jc jbcd", "jabd jac jd jad", "jabcd jb jcd jad", "jacd jbc jbcd jab", "ja jc jabcd jacd", "jbc jbd ja jd", "jac jbc jcd jbd", "jabd jbd jac jc", "j jabc jacd jd", "jd jbd jbcd ja", "jd jac jbc jabc", "jd jab j j", "jabcd jabcd ja j", "jacd jac j jacd", "jbc jabd jab jcd", "jab jbc jcd j", "jc j jac jad", "jabd jac jabcd jcd", "jd jbc jbc jabc", "jbc jab jad jad", "jcd jacd ja jbc", "jc jad jad jabd", "jac jabc jcd jabc", "jabd ja jbd jbc", "jd jcd jbc jacd", "jbcd jab jc ja", "jbd jac jb jbc", "jad jabcd j jbd", "jacd jbc jcd jabc", "jab ja jabc jc", "jac jbc j jd", "jc jbd jab ja", "jac jcd jbd jab"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string start = "aaaa";
    string finish = "dddd";
    vector<string> forbid = {"jbcd jac jac jd", "ja jabd j jabcd", "jabcd jabcd jd jab", "jabcd jacd jabd j", "jac jabd j ja", "jabcd ja jbc jbcd", "j jac jabcd jabd", "jbd jbc jabcd jcd", "jac jc jbc jcd", "jab jabcd jbc jc", "jabcd jbc jacd j", "j jabd j jac", "jad jcd jabd j", "jabd jcd jbc ja", "jd jbc jc jabc", "jbc jbcd jac jbc", "jd jc jbc jcd", "jad jab jbc jbd", "jb jbcd jcd jab", "jac jad jbc jab", "jab jac jbc jab", "jad jbcd jcd jc", "ja jac jcd jad", "ja jb jad jc", "jad jac jb ja", "jbcd jabcd jab jbc", "j jb ja jabd", "jbcd jabc jbc jbc", "ja jabc ja jb", "jabd jad jabcd j", "jabc jcd jcd jbcd", "jacd jab jd j", "jabc jbc jb jd", "jabcd jc jbd jbd", "jbc j jc jbcd", "j jbd ja jb", "jabcd jabc jab jbc", "jabd jb jacd jabd", "jabd jab jcd jbd", "ja jbc jabd jd", "jcd jbc jbcd jd", "jd jbd jbc jb", "j j jac jad", "jcd jc jbcd jab", "jac j jabc jcd", "jb jbd jac jd", "jab j jd jab", "jbcd jb jacd jbd", "jac jabcd ja jbcd", "jab jd jcd jacd"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string start = "aaaa";
    string finish = "dddd";
    vector<string> forbid = {"jabd jab jbcd jcd", "jd jabcd jabcd jabc", "jabc jabc jbd jd", "jbcd jac jbc jad", "jabcd jabc jbd jab", "jab jb jc jbd", "jcd jabcd j jabd", "jacd j jbc jbcd", "jd jb jacd j", "jabc j jad jad", "jbd jcd jcd jbc", "jad jac jabcd jd", "jabd jabcd jacd j", "jacd ja ja jbc", "jabcd jab jbc jd", "jcd jac j jabd", "jbcd jd ja jabcd", "ja jabc jd jbc", "jabcd jb jbc jd", "jab jbcd jabc jb", "jb j jcd jcd", "jcd j jd jbd", "jabd jab jbd jab", "jcd j jb jbc", "jabd jc jab jab", "jd jd jabc j", "jbcd jc ja jbc", "jbd jbcd jc jbcd", "jbcd jabd jac j", "jac jac jab jbcd", "jbc jad jbcd jb", "jb j jabd ja", "j jb jc jad", "j jabc ja jd", "jc jcd jabd jc", "jbd j jd ja", "jabc jabcd jd jd", "ja jcd jbcd jac", "jc jb jabcd jcd", "jabd jd jab jabc", "jd jb jbcd jabd", "jcd jabcd jc jabd", "j ja jad jab", "jbc jbd jc jabcd", "j jabd jacd jabd", "j jacd jc j", "jac jad jab jc", "jabd jac jd jabc", "j jb jbc j", "jabcd jc jac jab"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string start = "zzzz";
    string finish = "aaaa";
    vector<string> forbid = {"abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkm abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkn abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijko abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkp abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkq abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijks abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkt abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijku abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkv abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkw abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkx abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijky abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijkz abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijnl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijol abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijpl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijql abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijrl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijsl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijtl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijul abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijvl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijwl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijxl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijyl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghijzl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghinkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghiokl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghipkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghiqkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghirkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghiskl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghitkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghiukl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghivkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghiwkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghixkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghiykl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghizkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghnjkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghojkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghpjkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghqjkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghrjkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghsjkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghtjkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghujkl abcdefghijkl abcdefghijkl abcdefghijk", "abcdefghvjkl abcdefghijkl abcdefghijkl abcdefghijk"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string start = "aaaa";
    string finish = "nnnn";
    vector<string> forbid = {};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string start = "aaaa";
    string finish = "aaaa";
    vector<string> forbid = {"a a a z", "a a z a", "a z a a", "z a a a", "a z z z", "z a z z", "z z a z", "z z z a"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string start = "aaaa";
    string finish = "aaaa";
    vector<string> forbid = {};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
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
    string start = "aaaa";
    string finish = "mmmm";
    vector<string> forbid = {"lmn lmn lmn lmn"};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string start = "abcd";
    string finish = "abcd";
    vector<string> forbid = {};
    SmartWordToy* pObj = new SmartWordToy();
    clock_t start = clock();
    int result = pObj->minPresses(start, finish, forbid);
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=7462740&rd=6532&pm=3935
********************************************************************************
#include <string>
#include <vector>
#include <queue>
 
using namespace std;
 
int best[26][26][26][26];
bool bad[26][26][26][26];
 
 
vector <string> parse(string s, string c)
{
  int len = c.length(), p = -len, np;
  vector <string> ans;
  
  do
    {
      np = s.find(c, p+len);
      ans.push_back(s.substr(p+len, np - p - len));
      p = np;
    }
  while (p != string::npos);
 
  return ans;
}
 
class SmartWordToy {
  public:
  int minPresses(string s, string f, vector <string> forbid) {
    
    for (int i = 0; i < 26; i++)
      for (int j = 0; j < 26; j++)
        for (int k = 0; k < 26; k++)
    for (int l = 0; l < 26; l++)
      best[i][j][k][l] = 1000000;
    best[s[0]-'a'][s[1]-'a'][s[2]-'a'][s[3]-'a'] = 0;
    queue < vector<int> > q;
    vector <int> vi(4);
    for (int i = 0; i < 4; i++)
      vi[i] = s[i]-'a';
    q.push(vi);
    for (int i = 0; i < forbid.size(); i++)
      {
        vector <string> vs = parse(forbid[i], " ");
        for (int a = 0; a < vs[0].size(); a++)
    for (int b = 0; b < vs[1].size(); b++)
      for (int c = 0; c < vs[2].size(); c++)
        for (int d = 0; d < vs[3].size(); d++)
          bad[vs[0][a]-'a']
      [vs[1][b]-'a']
      [vs[2][c]-'a']
      [vs[3][d]-'a'] = true;
      }
    while (!q.empty())
      {
        vi = q.front(); q.pop();
        int cur = best[vi[0]][vi[1]][vi[2]][vi[3]];
        for (int i = 0; i < 4; i++)
    {
      vi[i] = (vi[i] + 1) % 26;
      if (!bad[vi[0]][vi[1]][vi[2]][vi[3]] &&
          best[vi[0]][vi[1]][vi[2]][vi[3]] == 1000000)
        {
          best[vi[0]][vi[1]][vi[2]][vi[3]] = cur+1;
          q.push(vi);
        }
      vi[i] = (vi[i] + 24) % 26;
      if (!bad[vi[0]][vi[1]][vi[2]][vi[3]] &&
          best[vi[0]][vi[1]][vi[2]][vi[3]] == 1000000)
        {
          best[vi[0]][vi[1]][vi[2]][vi[3]] = cur+1;
          q.push(vi);
        }
      vi[i] = (vi[i] + 1) % 26;
    }
      }
    int ans = best[f[0]-'a'][f[1]-'a'][f[2]-'a'][f[3]-'a'];
    return ans < 1000000 ? ans : -1;
 
  }
};
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/