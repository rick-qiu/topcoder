/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6618
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

class HiddenMessage {
public:
    string getMessage(string text);
};

string HiddenMessage::getMessage(string text) {
    string ret;
    return ret;
}


int test0() {
    string text = "compete online design event rating";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "coder";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string text = " c o d e r ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "coder";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string text = "round elimination during onsite contest";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "redoc";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string text = " hello world ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "hw";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string text = "the quick brown fox jumped over the lazy dog ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "tqbfjotld";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string text = " this is the easy problem ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "titep";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string text = " ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string text = " a ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string text = "a a a a a a a a a a a a a a a a a a a a a a a a a";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string text = "a a a a a a a a a a a a a a a a a a a a a a a a a ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string text = "this solution passes";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "tsp";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string text = " aaaaaaaaaa aaaaaaaaaaaaa a";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "aaa";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string text = " return the hidden message ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "rthm";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string text = "interesting exercise for learning how to program";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ieflhtp";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string text = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string text = "y";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "y";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string text = " ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string text = " c plus plus java c sharp basic ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "cppjcsb";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string text = " dice gambling las vegas";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "dglv";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string text = " soccer basketball volleyball ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "sbv";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string text = " id wht omanly heay atuss n macon ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "iwohanm";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string text = "fun fun fun fun fun fun fun fun fun fun fun fun";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ffffffffffff";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string text = " generating random text ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "grt";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string text = " sdss dsdd sdddsssddsd dssds sdddsdsds";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "sdsds";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string text = "fjd vasdkop asbdu ksaldhr alsk fhfjkas lsdkre o";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "fvakaflo";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string text = " sdfauier sduioio ertwmn looopa fds";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "sself";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string text = " agree tonight sounds pain ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "atsp";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string text = " nobody change now";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ncn";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string text = "no on no on no on no";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "nononon";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string text = "this is the last test case";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "titltc";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string text = " ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string text = " dd";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "d";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string text = "c r";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "cr";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string text = " c o d e r ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "coder";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string text = " c";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "c";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string text = "aaa bbb";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string text = "z";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string text = " ";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string text = "aaaaaaa d";
    HiddenMessage* pObj = new HiddenMessage();
    clock_t start = clock();
    string result = pObj->getMessage(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ad";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21185246&rd=9996&pm=6618
********************************************************************************
#include <iostream> 
#include <vector> 
#include <string> 
#include <sstream> 
#include <cctype> 
#include <algorithm> 
#include <cmath> 
#include <map> 
#include <set> 
using namespace std; 
class HiddenMessage { 
 public: 
  string getMessage(string text)  
  { 
   string ans=""; 
   stringstream z(text); 
   string s; 
   while (z>>s) 
    ans+=s[0]; 
   return ans; 
  } 
};

********************************************************************************
*******************************************************************************/