/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6090
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

class VowelLatin {
public:
    string translate(string word);
};

string VowelLatin::translate(string word) {
    string ret;
    return ret;
}


int test0() {
    string word = "XYz";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "XYz";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string word = "application";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "pplctnaiaio";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string word = "qwcvb";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "qwcvb";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string word = "aeioOa";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "aeioOa";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string word = "i";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "i";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string word = "Y";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "Y";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string word = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWX";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXaeiouAEIOU";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string word = "aAaAaAaAaAaAaAaAaAaAaAaAavAvaAaAaAaAaAaAaAaAaAaAaA";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "vvaAaAaAaAaAaAaAaAaAaAaAaAaAaAaAaAaAaAaAaAaAaAaAaA";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string word = "Introduction";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "ntrdctnIouio";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string word = "igPayatinLay";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "gPytnLyiaaia";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string word = "aeIoubcdfghjklmn";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "bcdfghjklmnaeIou";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string word = "aX";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "Xa";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string word = "xraY";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "xrYa";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string word = "internationalization";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "ntrntnlztnieaioaiaio";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string word = "secRET";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "scRTeE";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string word = "ybb";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "ybb";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string word = "ac";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "ca";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string word = "Ab";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "bA";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string word = "asiasuuusds";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "sssdsaiauuu";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string word = "nunaUUkuumkn";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "nnkmknuaUUuu";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string word = "HOLA";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "HLOA";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string word = "aeiouaeioaeioauaeuoiiiii";
    VowelLatin* pObj = new VowelLatin();
    clock_t start = clock();
    string result = pObj->translate(word);
    clock_t end = clock();
    delete pObj;
    string expected = "aeiouaeioaeioauaeuoiiiii";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=14927099&rd=10660&pm=6090
********************************************************************************
#include <algorithm> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <cassert> 
#include <cctype> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <stack> 
#include <vector> 
#include <set> 
#include <queue> 
#include <map> 
#include <bitset> 
using namespace std; 
 
#define FORE(it,c)    for(__typeof((c).begin()) it=(c).begin();it!=(c).end();++it) 
inline bool IS_VOWEL( char ch) { 
  ch = tolower( ch); 
  return ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'); 
} 
 
class VowelLatin 
{ 
public:   
  string translate(string word) { 
    string ret, ret2; 
    FORE( i, word) if( IS_VOWEL( *i))  ret2 += *i; else ret += *i; 
    return ret + ret2; 
  } 
   
 
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/