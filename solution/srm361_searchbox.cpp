/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8019
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

class SearchBox {
public:
    int find(string text, string search, string wholeWord, int start);
};

int SearchBox::find(string text, string search, string wholeWord, int start) {
    int ret;
    return ret;
}


int test0() {
    string text = "We dont need no education";
    string search = "ed";
    string wholeWord = "N";
    int start = 13;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string text = "We dont need no thought control";
    string search = "We";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
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
    string text = "No dark sarcasm in the classroom";
    string search = "The";
    string wholeWord = "Y";
    int start = 5;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string text = "Teachers leave them kids alone";
    string search = "kid";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
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
    string text = "All in all its just another brick in the wall";
    string search = "all";
    string wholeWord = "Y";
    int start = 9;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string text = "All in all youre just another brick in the wall";
    string search = "just";
    string wholeWord = "Y";
    int start = 17;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string text = "bAab aaBaBa Ab aa abbb ab ba aaba aab Ba aba aa a";
    string search = "Ba";
    string wholeWord = "N";
    int start = 8;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string text = "bAab aaBaBa Ab aa abbb ab ba aaba aab Ba aba aa a";
    string search = "Ba";
    string wholeWord = "N";
    int start = 6;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    string search = "AAAAAAAAAAAAAAAAAAB";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    string search = "AAAAAAAAAAAAAAAAAAB";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string text = "abcd";
    string search = "abcd";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
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
    string text = "abcd";
    string search = "abcd";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string text = "abcd";
    string search = "abcd";
    string wholeWord = "Y";
    int start = 3;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string text = "B";
    string search = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    string search = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
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
    string text = "A";
    string search = "C";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string text = "A";
    string search = "A";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
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
    string text = "A";
    string search = "A";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
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
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    string search = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string text = "B";
    string search = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string text = "A";
    string search = "A";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
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
    string text = " ";
    string search = "abc";
    string wholeWord = "Y";
    int start = 5;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string text = " abc";
    string search = "abc";
    string wholeWord = "Y";
    int start = 5;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string text = " abc";
    string search = "abc";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string text = "abc";
    string search = "abcd";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string text = "abc d";
    string search = "abcd";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string text = "aaa aaa aaa aaa aaa aaa aaa aaa aaa aaa aaa aaa aa";
    string search = "aa";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string text = "aaa aaa aaa aaa aaa aaa aaa aaa aaa aaa aaa aaa aa";
    string search = "aa";
    string wholeWord = "N";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string text = "Ho Ho Ho oh oh oh";
    string search = "ho";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string text = "xXwOU";
    string search = "xXwO";
    string wholeWord = "N";
    int start = 2;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string text = "UYwoWxwwxW";
    string search = "W";
    string wholeWord = "N";
    int start = 4;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string text = " x WuWoxWoYwOu OxWXYyoXuuXY xyOX xwouwUWUwXWWUX";
    string search = "xWuWoxWoYwOuOxWXY";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string text = "yuOy WYYOwyOOoXoXxooOY";
    string search = "OO";
    string wholeWord = "Y";
    int start = 8;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string text = " Y xwywwWOyWYWoOyWwyuXwu uUwOuuxuXO xXYw";
    string search = "uxuXOxXY";
    string wholeWord = "N";
    int start = 8;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string text = "XuuUYYwyOUOwooyyOuYuy YYoXwXWuxOy";
    string search = "y";
    string wholeWord = "Y";
    int start = 3;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string text = "WWXY uoOXoy YXUXwwoWYwyWxuxWyUuxyXxy yyOUoWWWXX";
    string search = "XX";
    string wholeWord = "N";
    int start = 33;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string text = "wXw wYwOyuyWW";
    string search = "yWW";
    string wholeWord = "Y";
    int start = 6;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string text = "yXxWYoOWXWwwOOU O oXOwwx oWwxy OuyOUYYoYwWWwY ";
    string search = "wwOOUOoXOwwxoWwx";
    string wholeWord = "N";
    int start = 6;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
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
    string text = "wWyWWwoW OwXWWOOWyWOU";
    string search = "wXW";
    string wholeWord = "N";
    int start = 3;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string text = "OuWwxyXYouoOUxuY OxXo OO X oOyW YXWuWyUWoUXUuXX";
    string search = "W";
    string wholeWord = "Y";
    int start = 24;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string text = "WOOxyOx";
    string search = "O";
    string wholeWord = "Y";
    int start = 2;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string text = "o OyoxxoYYXWuYO U oXxOxyu oOux";
    string search = "xO";
    string wholeWord = "N";
    int start = 10;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string text = "OYxxWYYywxxOOOOUyyuxYuUuXwyXwXxUoWyWyxxwy";
    string search = "OOUyyuxYuUuX";
    string wholeWord = "N";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string text = "wX xUwWxYwyOxYWWU YuxWwWxY";
    string search = "OxYWWUYuxWw";
    string wholeWord = "Y";
    int start = 10;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string text = "woWWxWxUWoYo";
    string search = "Y";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string text = "WowxYOuOUoOOXXoO WOXxxYwouuUYyXou";
    string search = "xYOuOUoOOXXoOWOXxxYwouu";
    string wholeWord = "Y";
    int start = 14;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string text = "XuXOOx Ox ywWXuu Uo";
    string search = "xOxyw";
    string wholeWord = "N";
    int start = 3;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string text = "wX wyWOwXo OyXoUxx xOYwXWWYWxx";
    string search = "WY";
    string wholeWord = "Y";
    int start = 11;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string text = " OYUWYOwwYxXyoXYXuwyOoO uOuy";
    string search = "OwwYxXyoXYXuwyOoOu";
    string wholeWord = "N";
    int start = 4;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string text = "OuuoWWyXxXoXwwWU o";
    string search = "wWU";
    string wholeWord = "Y";
    int start = 3;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string text = "oYY owxYyO O xXuyU xxY UWxYyUwoXooYuWoOXXwUY";
    string search = "WoOXX";
    string wholeWord = "Y";
    int start = 29;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string text = "yUuWoyOWyxo WXUoXXXWxWWUxOwXY yWXx";
    string search = "xWWUxOwXYyWX";
    string wholeWord = "Y";
    int start = 4;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string text = " xY YwxxXwXUxxyYww XX OwWxxYw w u";
    string search = "ww";
    string wholeWord = "Y";
    int start = 25;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string text = "yYyWuwYXUuxx XWUXoywy oUuyyOYUuxxuUw WXy";
    string search = "y";
    string wholeWord = "Y";
    int start = 5;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string text = "YuWYWxyXYyUXXwYo ooOuxUY";
    string search = "yXYyUXXwYo";
    string wholeWord = "N";
    int start = 5;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string text = "xXw UuWwyyuYUYY";
    string search = "xXwUuWwyyuYUYY";
    string wholeWord = "Y";
    int start = 6;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string text = "XuOyuXOYUxOuoWuWuwOwYXyXUyoXoOuw W";
    string search = "w";
    string wholeWord = "N";
    int start = 8;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string text = "yywWxYuYXxwox wOYXXuUwwxw xy ";
    string search = "ywWxYuYXxwo";
    string wholeWord = "N";
    int start = 28;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string text = "OxwyWUyoyo oxxxwOuu wwOwXyOY";
    string search = "OwX";
    string wholeWord = "Y";
    int start = 13;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string text = "o";
    string search = "o";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string text = "XXu uUWoUOxOXOxy wwwyuYxYxYOoU";
    string search = "wwyuYxYxYOoU";
    string wholeWord = "Y";
    int start = 17;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string text = "xoWyUYxWWo";
    string search = "x";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string text = "XXOxxYWYXUOYYxyoYOYoxOYXuuOyxxUUuXUYuxWWyXOXUxU ";
    string search = "UUuXU";
    string wholeWord = "N";
    int start = 43;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string text = "UW Xw uUoouXuxO";
    string search = "o";
    string wholeWord = "Y";
    int start = 6;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string text = "uu";
    string search = "u";
    string wholeWord = "N";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string text = "OWUuWxYyywWuWUyxwXOWoU O";
    string search = "yywWuWUyxwXOWoU";
    string wholeWord = "N";
    int start = 22;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string text = "xyxYoxXxOWwWW ";
    string search = "xXxOWwWW";
    string wholeWord = "Y";
    int start = 4;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string text = "oOYO oUyWxuUuWOwxwWy ";
    string search = "YOoUyWxuUuWOwxwWy";
    string wholeWord = "N";
    int start = 15;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string text = "yWooXWX";
    string search = "X";
    string wholeWord = "N";
    int start = 4;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string text = "bAab aaBaBa Ab aa abbb ab abb aaba aab ab aba aa a";
    string search = "Ab";
    string wholeWord = "N";
    int start = 49;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string text = "abcd";
    string search = "cda";
    string wholeWord = "N";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string text = "bAab aaBaBa Ab aa abbb ab abb aaba aab ab aba aa a";
    string search = "Ab";
    string wholeWord = "Y";
    int start = 49;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string text = "abcd abc";
    string search = "abc";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string text = "abc abc bc";
    string search = "bc";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string text = "abc e";
    string search = "e";
    string wholeWord = "Y";
    int start = 3;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string text = "ab ba ab a";
    string search = "a";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string text = "a abcd bcd";
    string search = "bcd";
    string wholeWord = "Y";
    int start = 3;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string text = "a";
    string search = "a";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string text = "nott not";
    string search = "not";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string text = "aaab aaa";
    string search = "aaa";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string text = "abcd ef";
    string search = "bcd";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string text = "aed ed";
    string search = "ed";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string text = "abc e";
    string search = "e";
    string wholeWord = "Y";
    int start = 4;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string text = "Mymymy my";
    string search = "my";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string text = "atest test";
    string search = "test";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string text = "dwed we";
    string search = "we";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string text = "h";
    string search = "h";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string text = "Teachers leave them kid";
    string search = "kid";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string text = "abc";
    string search = "abc";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string text = "abc";
    string search = "d";
    string wholeWord = "N";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string text = "aaaa bbbbbbb aaaaa";
    string search = "bbbb";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string text = "this is a Test";
    string search = "Test";
    string wholeWord = "Y";
    int start = 2;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string text = "Teachers leave them kids alone kid haha";
    string search = "kid";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string text = "raising the somehadkj adfhkajdshfjkadfasdklj the";
    string search = "the";
    string wholeWord = "Y";
    int start = 15;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string text = "yes i am fool so oo you";
    string search = "oo";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string text = "aaBaa";
    string search = "B";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string text = "xxxxabctt rabc uabc";
    string search = "abc";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string text = "a thethe the";
    string search = "the";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string text = "t";
    string search = "aaaaaaaaa";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string text = "a";
    string search = "b";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string text = "ab";
    string search = "b";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string text = "a ba ab a";
    string search = "a";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string text = " a We n";
    string search = "We";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string text = "my nameankur vijay";
    string search = "ankur";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string text = "akademi mi";
    string search = "mi";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string text = "Test";
    string search = "Test";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string text = "abctt rabc uabc";
    string search = "abc";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string text = "h";
    string search = "h";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string text = "Teachers leave them kids alone kids kid haha";
    string search = "kid";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string text = " ab a";
    string search = "a";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string text = "qwer";
    string search = "qwer";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string text = "Wen We";
    string search = "We";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string text = "gets started";
    string search = "get";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string text = "Teachers lekidave them kid alone";
    string search = "kid";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string text = "a";
    string search = "a";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string text = "thw def x";
    string search = "ef";
    string wholeWord = "Y";
    int start = 5;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string text = "kida kid";
    string search = "kid";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string text = "astrb str ";
    string search = "str";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string text = "dabc x";
    string search = "abc";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string text = "a a a a a";
    string search = "a";
    string wholeWord = "N";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string text = "ab c";
    string search = "b";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string text = "Absd";
    string search = "ab";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string text = "We";
    string search = "e";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string text = "bde ade cde";
    string search = "de";
    string wholeWord = "Y";
    int start = 4;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string text = "hoge";
    string search = "hoge";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string text = "Alls All";
    string search = "All";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string text = "aaa";
    string search = "aaa";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string text = "aab aab aa";
    string search = "aa";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string text = "en";
    string search = "en";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string text = "challenge killer";
    string search = "cha";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string text = "kid Teachers lekidave them kid alone";
    string search = "kid";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string text = "All in all youre just another brick in the wall";
    string search = "wall";
    string wholeWord = "Y";
    int start = 17;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string text = "karim";
    string search = "s";
    string wholeWord = "N";
    int start = 2;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string text = "a a a";
    string search = "a";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string text = "IamStupid x";
    string search = "Stupid";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string text = "gfgdfabc ";
    string search = "abc";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string text = "We are";
    string search = "e";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string text = "ab aabc abc";
    string search = "abc";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string text = "Hello world hello world";
    string search = "orld";
    string wholeWord = "Y";
    int start = 7;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string text = "bkid";
    string search = "kid";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string text = "text";
    string search = "text";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string text = "H Y";
    string search = "Y";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string text = "XABC ABC ABC";
    string search = "ABC";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string text = "ab ba";
    string search = "b";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string text = "baaaa";
    string search = "aa";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string text = "All in all yourejust another brick in the wall";
    string search = "just";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string text = "hi";
    string search = "hi";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string text = "abcabcd abcd";
    string search = "abcd";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string text = "Danny danny";
    string search = "danny";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string text = "abra abra ";
    string search = "abra";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string text = "abc";
    string search = "abcbddjjdjdd";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string text = "the";
    string search = "the";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string text = "AB A";
    string search = "A";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string text = "text fake";
    string search = "ake";
    string wholeWord = "Y";
    int start = 6;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string text = "abc";
    string search = "abcabcabc";
    string wholeWord = "N";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string text = "Ihavea have";
    string search = "have";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string text = "Mymymy my";
    string search = "my";
    string wholeWord = "Y";
    int start = 2;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string text = "aba a";
    string search = "a";
    string wholeWord = "Y";
    int start = 2;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string text = "kid Teachers lekidave them kid alone";
    string search = "kid";
    string wholeWord = "Y";
    int start = 1;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string text = "test not tes";
    string search = "tes";
    string wholeWord = "Y";
    int start = 0;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string text = "abcd abcd bcd";
    string search = "bcd";
    string wholeWord = "Y";
    int start = 6;
    SearchBox* pObj = new SearchBox();
    clock_t start = clock();
    int result = pObj->find(text, search, wholeWord, start);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653299&rd=10773&pm=8019
********************************************************************************
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
 
class SearchBox {
public:
  int find(string, string, string, int);
};
 
int SearchBox::find(string text, string search, string wholeWord, int start) {
  
  int i;
  for(i=start;i<text.size();i++)
  {
  
  string s=text.substr(i,search.size());
  if(s==search)
  {
  if(wholeWord=="Y")
  {
  if(i==0||text[i-1]==' ')
  if(i+search.size()>=text.size()||text[ i+search.size()]==' ')return i;
  }
  else return i;
  
  }
  
  }
return -1;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/