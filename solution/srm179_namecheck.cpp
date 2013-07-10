/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1855
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

class NameCheck {
public:
    vector<string> formatList(vector<string> namelist);
};

vector<string> NameCheck::formatList(vector<string> namelist) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> namelist = {"Doug#as good", "bArneY R.", "bArneY Rubble", " Bob Stone", "Bob B. J. Toms", "J. Lo"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Barney Rubble", "J. Lo"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> namelist = {"Doug G.", "GG WALNUT DOUG", "AB. JONES", "A. BOB J.", "Gg DouG", "GG DOUG"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Gg Walnut Doug", "Gg Doug", "Gg Doug"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> namelist = {"A BIG Mess", "A. Big Mess.Mess", "ABig", "M.MESS"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> namelist = {"A. . Bo", " C. D. Eo", "F. G.Ho", "I. J. KO"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"I. J. Ko"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> namelist = {"Abracadabra BeautifulBABE cassandra"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Abracadabra Beautifulbabe Cassandra"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> namelist = {"A BeautifulBABE cassandra", " DonPotter James"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> namelist = {"A. BeautifulBABE. cassandra", "DonPotter James"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Donpotter James"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> namelist = {"A. abcdefghijklmNopqrstuvwxyzabc Lu"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A. Abcdefghijklmnopqrstuvwxyzabc Lu"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> namelist = {"Ab. Able", "Ab Able", "AbAble", "D. J. xY"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Ab Able", "D. J. Xy"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> namelist = {"A B C D e f g h i j l m n o p q r s t u v w", "abcdefg hijkl.m nop"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> namelist = {"ABCDefg hi jl", "abcdefg .hijklm nop"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Abcdefg Hi Jl"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> namelist = {"A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", " A. Bc", "A.Bc", "A Bc", "A. Bc", "A. B c", "A. Bc ", "A. Bc", "A. Bc", " A. Bc"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc", "A. Bc"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> namelist = {"Ab. Able", "Ab Able", "AbAble", "DxY", "C. A. R. Hoare"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Ab Able"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> namelist = {"A. AbleZ", "ab Able", "Aaaa aa a.", "AAAA A."};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A. Ablez", "Ab Able"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> namelist = {"A. AbleZ", "ab Able", "Aaaa aa a.", "AAAA AaA"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A. Ablez", "Ab Able", "Aaaa Aaa"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> namelist = {"Ab Ab"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Ab Ab"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> namelist = {"A. Bc", "B. Bc", "C. Bc", "D. Bc", "E. Bc", "F. Bc", "G. Bc", "H. Bc", "IA. Bc", "J. Bc", "K. Bc", "L. Bc", "M. Bc", "N. Bc", "O. Bc", "P. Bc", "Q. Bc", "R. Bc", "S. Bc", "T. Bc", "U. Bc", "V. Bc", "W. Bc", "X. Bc", "Y. Bc", "Z. Bc", "A. Bc", "B. Bc", "C. Bc", "D. Bc", "E. Bc", "F. Bc", "G. Bc", "H. Bc", "I. Bc", "J. Bc", "K. Bc", "L. Bc", "M. Bc", "N. Bc", "O. Bc", " P. Bc", "Q.Bc", "R Bc", "S. Bc", "T. B c", "U. Bc ", "V. Bc", "W. Bc", " X. Bc"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A. Bc", "B. Bc", "C. Bc", "D. Bc", "E. Bc", "F. Bc", "G. Bc", "H. Bc", "J. Bc", "K. Bc", "L. Bc", "M. Bc", "N. Bc", "O. Bc", "P. Bc", "Q. Bc", "R. Bc", "S. Bc", "T. Bc", "U. Bc", "V. Bc", "W. Bc", "X. Bc", "Y. Bc", "Z. Bc", "A. Bc", "B. Bc", "C. Bc", "D. Bc", "E. Bc", "F. Bc", "G. Bc", "H. Bc", "I. Bc", "J. Bc", "K. Bc", "L. Bc", "M. Bc", "N. Bc", "O. Bc", "S. Bc", "V. Bc", "W. Bc"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> namelist = {"A.b aaa"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> namelist = {"hello world "};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> namelist = {"AAAA J. BBB CCC"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> namelist = {"G.g Henry"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> namelist = {"David G. Rydh"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"David G. Rydh"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> namelist = {".A aaa"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> namelist = {"bla bla "};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> namelist = {"Cg Doug "};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> namelist = {" Viktoras Jucikas"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> namelist = {"Hey Jack "};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> namelist = {".. Lo", "J. Lo"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"J. Lo"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> namelist = {"A. B. C"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> namelist = {"Robert Henry Thomas Jones"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> namelist = {"b. b. mac"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B. B. Mac"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> namelist = {"x.x soso"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> namelist = {"ALPHABET BOMB abcdefghijklmnopqrstuvwxyz", "period. Period", "P. Eriod", " space bar bomb ", "alphabet bomb ABCDEFGHIJKLMNOPQRSTUVWXYZ", "bufferoverrunlalalalalalalala", "zeeky BOOGY doog", "buffer OVERRUN lalalalalalalalalalalalalalalallal", "it's illegal", " jkhfkahf ", "BOO yah", "honkhonk HONKHONK HonKHonK", "b. ANG", "throw me the heck out", "buffer OVERRUN lalalalalalalalalalalalalalalalla ", "Zeeky H. Bomb"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Alphabet Bomb Abcdefghijklmnopqrstuvwxyz", "P. Eriod", "Alphabet Bomb Abcdefghijklmnopqrstuvwxyz", "Zeeky Boogy Doog", "Buffer Overrun Lalalalalalalalalalalalalalalallal", "Boo Yah", "Honkhonk Honkhonk Honkhonk", "B. Ang", "Zeeky H. Bomb"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> namelist = {"Hey Ja^ck"};
    NameCheck* pObj = new NameCheck();
    clock_t start = clock();
    vector<string> result = pObj->formatList(namelist);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=4715&pm=1855
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
 
bool name(string s) {
  if(size(s)<2) return false;
  FOREACH(it,s) if(!isalpha(*it)) return false;
  return true;
}
 
bool initial(string s) {
  if(size(s)!=2 || !isalpha(s[0]) || s[1]!='.') return false;
  return true;
}
 
string f(string s) {
  vector<string> parts;
  if(size(s)<3) return "";
  if(s[0]==' ' || s[size(s)-1]==' ') return "";
  s+=' ';
  string w;
  FOREACH(it,s) {
    if(*it==' ') {
      if(w!="") parts.push_back(w);
      w="";
    }
    else w+= *it;
  }
  if(size(parts)<2 || size(parts)>3) return "";
  FOREACH(it,parts) if(!name(*it) && !initial(*it)) return "";
  if(!name(parts.back())) return "";
  string res;
  FOREACH(it,parts) {
    if(it!=parts.begin()) res+=' ';
    string s=*it;
    FOREACH(jt,s) *jt = tolower(*jt);
    s[0] = toupper(s[0]);
    res += s;
  }
  return res;
}
 
struct NameCheck {
  // MAIN
  vector <string> formatList(vector <string> namelist) {
    vector<string> res;
    FOREACH(it,namelist) {
      string s = f(*it);
      if(s!="") res.push_back(s);
    }
    return res;
  }
  
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/