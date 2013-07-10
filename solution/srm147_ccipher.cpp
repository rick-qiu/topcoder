/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1667
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

class CCipher {
public:
    string decode(string cipherText, int shift);
};

string CCipher::decode(string cipherText, int shift) {
    string ret;
    return ret;
}


int test0() {
    string cipherText = "VQREQFGT";
    int shift = 2;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "TOPCODER";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string cipherText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int shift = 10;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "QRSTUVWXYZABCDEFGHIJKLMNOP";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string cipherText = "TOPCODER";
    int shift = 0;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "TOPCODER";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string cipherText = "ZWBGLZ";
    int shift = 25;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "AXCHMA";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string cipherText = "DBNPCBQ";
    int shift = 1;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "CAMOBAP";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string cipherText = "AAAAABBBBBCCCCCDDDDDEEEEEFFFFFGGGGGHHHHHIIIIIJJJJJ";
    int shift = 14;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "MMMMMNNNNNOOOOOPPPPPQQQQQRRRRRSSSSSTTTTTUUUUUVVVVV";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string cipherText = "AAAAABBBBBCCCCCDDDDDEEEEEFFFFFGGGGGHHHHHIIIIIJJJJJ";
    int shift = 23;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "DDDDDEEEEEFFFFFGGGGGHHHHHIIIIIJJJJJKKKKKLLLLLMMMMM";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string cipherText = "AAAAABBBBBCCCCCDDDDDEEEEEFFFFFGGGGGHHHHHIIIIIJJJJJ";
    int shift = 17;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "JJJJJKKKKKLLLLLMMMMMNNNNNOOOOOPPPPPQQQQQRRRRRSSSSS";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string cipherText = "AAAAABBBBBCCCCCDDDDDEEEEEFFFFFGGGGGHHHHHIIIIIJJJJJ";
    int shift = 4;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWXXXXXYYYYYZZZZZAAAAABBBBBCCCCCDDDDDEEEEEFFFFF";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string cipherText = "ASJKFURJNFNI";
    int shift = 15;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "LDUVQFCUYQYT";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string cipherText = "GZBLNOJ";
    int shift = 25;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "HACMOPK";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string cipherText = "LIPPSASVPH";
    int shift = 4;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "HELLOWORLD";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string cipherText = "LIPPSASVPHMEQLETTC";
    int shift = 4;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "HELLOWORLDIAMHAPPY";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string cipherText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int shift = 3;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "XYZABCDEFGHIJKLMNOPQRSTUVW";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string cipherText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int shift = 5;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "VWXYZABCDEFGHIJKLMNOPQRSTU";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string cipherText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int shift = 6;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "UVWXYZABCDEFGHIJKLMNOPQRST";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string cipherText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int shift = 7;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "TUVWXYZABCDEFGHIJKLMNOPQRS";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string cipherText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int shift = 24;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "CDEFGHIJKLMNOPQRSTUVWXYZAB";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string cipherText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int shift = 23;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "DEFGHIJKLMNOPQRSTUVWXYZABC";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string cipherText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int shift = 22;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "EFGHIJKLMNOPQRSTUVWXYZABCD";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string cipherText = "AA";
    int shift = 3;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "XX";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string cipherText = "THISISATEST";
    int shift = 7;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "MABLBLTMXLM";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string cipherText = "ABC";
    int shift = 25;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "BCD";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string cipherText = "AMBZB";
    int shift = 20;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "GSHFH";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string cipherText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int shift = 18;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "IJKLMNOPQRSTUVWXYZABCDEFGH";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string cipherText = "A";
    int shift = 3;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "X";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string cipherText = "ZWBGLZ";
    int shift = 25;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "AXCHMA";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string cipherText = "ABCDUXYZ";
    int shift = 10;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "QRSTKNOP";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string cipherText = "LIPPSASVPH";
    int shift = 4;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "HELLOWORLD";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string cipherText = "HALEIEBQP";
    int shift = 17;
    CCipher* pObj = new CCipher();
    clock_t start = clock();
    string result = pObj->decode(cipherText, shift);
    clock_t end = clock();
    delete pObj;
    string expected = "QJUNRNKZY";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=308453&rd=4540&pm=1667
********************************************************************************
#line 5 "CCipher.cc" 
 
#include <iostream> 
#include <queue> 
#include <stack> 
#include <functional> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <list> 
#include <deque> 
#include <algorithm> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <cctype> 
 
using namespace std; 
 
class CCipher { 
  public: 
  string decode(string c, int shift) { 
    for (int i = 0; i < c.length(); i++) 
      if ((c[i] -= shift) < 'A') 
        c[i] += 26; 
    return c; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/