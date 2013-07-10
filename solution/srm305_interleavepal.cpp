/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6435
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

class InterleavePal {
public:
    int longestPal(string s, string t);
};

int InterleavePal::longestPal(string s, string t) {
    int ret;
    return ret;
}


int test0() {
    string s = "AA";
    string t = "BB";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string s = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    string t = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string s = "";
    string t = "JAVA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string s = "";
    string t = "";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string s = "ONCEUPONATIMETHEREWASAYOUNGPROGRAMMERWHOLEARNED";
    string t = "TOPROGRAMJOINEDTOPCODERANDEVENTUALLYBECAMERED";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string s = "BB";
    string t = "ABAB";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string s = "TOMMY";
    string t = "";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string s = "RACECAR";
    string t = "MOM";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
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
    string s = "RACECAR";
    string t = "TOOT";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string s = "TOPCODER";
    string t = "REDOCPOT";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string s = "DCCBCDBACADC";
    string t = "BABDDD";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string s = "BAABDCCCCDADBAC";
    string t = "ACABAABAAACCADAACADA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string s = "CDACBAAD";
    string t = "BDBDCBADBBCAA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string s = "DAAACDDADDCAA";
    string t = "DABADDDCC";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string s = "CBDDBAAC";
    string t = "CBCDCD";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string s = "ADACDA";
    string t = "ACDBACCBBAAACDCAC";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string s = "ABDAACBDCCABCCABABCD";
    string t = "DDCACABAADCBDDBBABAC";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string s = "BBBCCDADCAA";
    string t = "CADDCB";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string s = "ACCADDBDABCBDBABAD";
    string t = "BCBCCCACBDBACCD";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
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
    string s = "CCDCBCCBBD";
    string t = "BADDDBC";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string s = "BAABBBBBABAABBAAABBABBABBAAABBBABBBAABAAB";
    string t = "ABBBBABAABABBAAABBABBABBBAAABABAAABBBBBAABBBB";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string s = "AAAABBABBBBAABBBBBABAABAABBBBAAAB";
    string t = "BABABAAABAAAABBBBBAABBBABAABBABABAAABAAAAAAABBABA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string s = "BBBAABBBBABAAAAABAABABBBAABAABAABAB";
    string t = "ABBABBABABABAABBAAABAABAAABAABAABBBAABAAB";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string s = "AABABABBBAABABAABAABAABBAABBABABBAAAABA";
    string t = "BBABBBABAABABAABABBBBBBAAABAAB";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string s = "AAABAABBABBBABAAABAABABBAAABBABBAABBBAABBABBB";
    string t = "ABAAAABBBBAAABBBABAABAABABBABBBABBAB";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string s = "CXIIDTUCFHZTS";
    string t = "YCZRFNEXZIFJURD";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string s = "IFEZUBCOAKFTHRPK";
    string t = "F";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string s = "YZDKNMWFE";
    string t = "CPUECCDOX";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string s = "CSFFARUKGJYVAGLN";
    string t = "O";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string s = "E";
    string t = "VRL";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string s = "ACEEAAADEA";
    string t = "DCCDADABBDAEAEDABBBACCD";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string s = "DEAEDBB";
    string t = "EECEEEEDDCCABBBCCCCDDBAAECCEBDDCEED";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string s = "ECBCABDBBCCAAEADCAB";
    string t = "BB";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
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
    string s = "DACCDBAD";
    string t = "ACCDE";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string s = "ECBDADA";
    string t = "ABDCDDAD";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string s = "CBDCEBAEDAA";
    string t = "CECAEDEBACCACAEBCADCBECAAE";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string s = "BBCBDECDDCBEEDCEABDCCCB";
    string t = "CCEDEECCDCADBEBECBE";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string s = "DBEECCBDBEBAEEDBBBAADCACECBB";
    string t = "CAADBACEADAAEDB";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string s = "CCACCDCECCAEDAECECDEADECEDCEAADCECBCBEEBCB";
    string t = "EEAEBEAEA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string s = "CAEABACBADAABCCABDBCECADBCBBDEDBBA";
    string t = "AABCBABEBCDDCCBACDC";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string s = "QAAXTRQRRTTATXATQARQRAQTTQRAXQTARTRAARXTARQQQARQXT";
    string t = "RAXQAXTRATQRRRTQXARTATTXXQTAAQXARRXAQQRQQATRQAXAAX";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string s = "TQTRTXAXTXQRRXRRXXXRAXQXTQRXTTXAQQXTRRTQTQAQRXXXAR";
    string t = "TQXXQQQRRRTAQRAATARQRTQAXTRAXAXQRTAXATAAAQTRTXRTQA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string s = "XQRTXTQAARXQTTQXQTQRRQXTQAXXTTTATRXXAXXAQQXQARAARA";
    string t = "AXRXQAAXTTXTTQRRXXAQXRTARAQXAXTQXARAXTRXRTXRTXTQQX";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string s = "RTXXAXRXRXXQXQTQTXRTXTTAQQRXRXAQXAQTRXTQRQRQRXRXQR";
    string t = "RQXRTQTQQAXTAAQRRTRTATXRTAQQATRRAAXATTRAQATTQQQQXA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string s = "RQXQXRTTQTTTAAQRQXRTQRXAXATRRXAQRTQXQQXTATRRARQRAX";
    string t = "TARATXRTXXTRXAAXTQRQRTQQRTQQTQTRAATRRTQRATTRATRRAR";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string s = "AXQQRRXARTRATRQTAAAARXAQRRXRAAQXTAQXAQATTTTXQXQRRQ";
    string t = "AQAQXQTQTTXRAQTQTTAXXXTAATRARQXTAXXAXARTXQQQXXQAAR";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string s = "XAAQQXRQAATTAQQQXATQQQQTAXRTRXQRRTQRAQTTQRQXTQQQQT";
    string t = "QTRTXQQXQQXXRTQXXRXQXTQTXAAQQQTXAARQAQQRTXARXQXTAT";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string s = "QXTARRTQQTRAXRRRXQRQTATQRARAXXRTATQTRXAAATRATAXRQA";
    string t = "XQXAAQXQQTXRTTXRXARATQQTAAAXRARXAAAQXQATRQRXXXRARX";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string s = "QQARXRTXXAQAXRAARAQRTRQTXATARRAXRTAATXRXXRRRTAQQTT";
    string t = "QTRTRXARAXRQTAQARARXARTQRQRRTTXXAQATXQTRXRXARARAXX";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string s = "TXRQXXQXATRQQXAARTTRQXAAXRTXQTRQARRAQRTTXXQQXAAXQQ";
    string t = "XAQTXXAQXXQQAQARQRATXXRRTRTXRQTTTARTXXQAXXQXQQRAQT";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string s = "MTIZTUINPGVXDRNGSFYHVBEARGBTHZCZSGNWDEFLPKMFIUTFTM";
    string t = "FAPBFMKZLZFIEBUEVWWZCZHTGRAEHVYWFVREUBXIVZZGNBPAZI";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string s = "DEOKQICFALOVIJPXVXCMBXHPBPHRIMXPDIVOLCNHIOSKYTKEDM";
    string t = "MKTYYIKSFOHIOHNLBNGDWZHIRBXBHCXVZWJGNBAFLIOHQFKOIY";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string s = "DEBTOHGHHJSZIWGAVWJUXXNTXCWQPQZWCTGNXUWDTVFPUGIWJH";
    string t = "TKNYJEIUYPFTZDAGVRZAPCCAXRVXJAZAYIZSEJHYGHOTNBEDKT";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string s = "FYTEBFXEBPZBDNHZETOZYDYCHYMWYTHCFEYKQDYOTEZHWDQDBJ";
    string t = "JKKQMCJLDBQWKDIQKEFRTWMNNRIDKZNBBZPLCEXMQKFKBETJYF";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string s = "RAYLEKZPWPEXIJLJQBSDMWTNNTRBAJNLIUTTKEPGKPZASYOKAR";
    string t = "KOSAKKGSEKRDMTTUWNADXGRIPQWQMPIGDSXDQJWXMDRESWKEKL";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string s = "ZJDBGYNNGWQHXVFXEBXTGBUSNHLXFSDFAQVQZHYGNJWKVHSFBZ";
    string t = "SNHREKISEFRGXHGYLBIFIHFYCXYJYRTKDDOXSSJANHLOHPGFDC";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string s = "BZQYROROFEZDHZIBAGMRUEFUIGSCLVDSVIBUKVSYCFKFAYHYMU";
    string t = "PTTJCBFAEYUVIHIIOKXBEEUEXXSDIONJZKYDADHBMMJRIRQPZB";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string s = "BMSZUIKLUCPXGWPXJFVFFJEKOPSVEWWTLWFXAGFIHGDSOBYEYB";
    string t = "EFELSDBEILFGUBWWQNYBXGHLNHHUAWEQCLWHJRIWRWIJLZEUII";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string s = "CYKHBAFTAQMJDABONGSBDTTZBHWUPCEOBVEYBDINKWJZKTSRTH";
    string t = "LRUUCDMHCQEONTPSWOOQOTQCTOGBSSOJTHABQLJWEWVYCUCXRO";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string s = "VZXFCWQGSOHXJTXREPWEOZMRYAXLGTZJACDZXBAOBZGRERIQXL";
    string t = "RWWPBVEBXELXVGZZCVUBNNXXEURNAWFVQTZYEBWHBCUFWXUNVO";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string s = "ABXKL";
    string t = "LKZYYZBA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string s = "AABBCCADWEEZXSAWEEREWDSDSACZXDSWERWEDSDASDASDASDSS";
    string t = "ABCDAADBDEWDXDRRETDFDSFTEWRFDSXCZXSAEWWQESADCZXXSS";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string s = "ONCEUPONATIMETHEREWASAYOUNGPROGRAMMERWHOLEARNED";
    string t = "TOPROGRAMJOINEDTOPCODERANDEVENTUALLYBECAMERED";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string s = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    string t = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string s = "A";
    string t = "B";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
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
    string s = "ONCEUPONATIMETHEREWASAYOUNGPROGRAMMERWHOLEARNED";
    string t = "TOPROGRAMJOINEDTOPCODERANDEVENTUALLYAMERED";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string s = "CCBBCBAABCCCBABCBCAAAACABBACCCCACAABCBBACACAACABCB";
    string t = "CCBAABCABBBCCAABBCBBCACABCAAACACABACBCCBAACBCBCAAC";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string s = "AAAAAAAAAAAABCDEFGHIAAAAAAAAAAAAAA";
    string t = "AAAAAAAAAAAABCDEFGHIAAAAAAAAAAAAAA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string s = "";
    string t = "PALINDROMESAREINHERE";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string s = "";
    string t = "A";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string s = "AZXA";
    string t = "YXYZA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string s = "BWLAKMINHWLFOSUBZCYGQHIENLIAOJXAVEBWAALGXLLZTQOLN";
    string t = "";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string s = "ABXKL";
    string t = "LKZYYZBA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string s = "AABBCCADWEEZXSAWEEREWDSDSACZXDSWERWEDSDASDASDASDSS";
    string t = "ABCDAADBDEWDXDRRETDFDSFTEWRFDSXCZXSAEWWQESADCZXXSS";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string s = "ONCEUPONATIMETHEREWASAYOUNGPROGRAMMERWHOLEARNED";
    string t = "TOPROGRAMJOINEDTOPCODERANDEVENTUALLYBECAMERED";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string s = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    string t = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string s = "A";
    string t = "B";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string s = "ONCEUPONATIMETHEREWASAYOUNGPROGRAMMERWHOLEARNED";
    string t = "TOPROGRAMJOINEDTOPCODERANDEVENTUALLYAMERED";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string s = "CCBBCBAABCCCBABCBCAAAACABBACCCCACAABCBBACACAACABCB";
    string t = "CCBAABCABBBCCAABBCBBCACABCAAACACABACBCCBAACBCBCAAC";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string s = "AAAAAAAAAAAABCDEFGHIAAAAAAAAAAAAAA";
    string t = "AAAAAAAAAAAABCDEFGHIAAAAAAAAAAAAAA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string s = "";
    string t = "PALINDROMESAREINHERE";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string s = "";
    string t = "A";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string s = "AZXA";
    string t = "YXYZA";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string s = "BWLAKMINHWLFOSUBZCYGQHIENLIAOJXAVEBWAALGXLLZTQOLN";
    string t = "";
    InterleavePal* pObj = new InterleavePal();
    clock_t start = clock();
    int result = pObj->longestPal(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10157606&rd=9826&pm=6435
********************************************************************************
#include <vector> 
#include <string> 
#include <cstdio> 
#include <cmath> 
#include <cstring> 
#include <cstdlib> 
#include <iostream> 
#include <sstream> 
#include <algorithm> 
#include <utility> 
#include <queue> 
#include <map> 
 
using namespace std; 
 
char a[51][51][51][51]; 
 
class InterleavePal{ 
public: 
  int n,m; 
  string s,t; 
 
  char dp(int a1,int b1,int a2,int b2) 
  { 
    char &ret=a[a1][b1][a2][b2]; 
    if (ret>=0) return ret; 
    ret=0; 
    int l1=b1-a1,l2=b2-a2; 
    if (l1==0){ 
      if (l2<=1){ 
        return ret=1; 
      }else{ 
        if (t[a2]==t[b2-1]){ 
          ret=dp(a1,b1,a2+1,b2-1); 
        } 
      } 
      return ret; 
    } 
    if (l2==0){ 
      if (l1<=1){ 
        return ret=1; 
      }else{ 
        if (s[a1]==s[b1-1]){ 
          ret=dp(a1+1,b1-1,a2,b2); 
        } 
      } 
      return ret; 
    } 
    if (l1>=2 && s[a1]==s[b1-1]){ 
      if (dp(a1+1,b1-1,a2,b2)) return ret=1; 
    } 
    if (l2>=2 && t[a2]==t[b2-1]){ 
      if (dp(a1,b1,a2+1,b2-1)) return ret=1; 
    } 
    if (s[a1]==t[b2-1]){ 
      if (dp(a1+1,b1,a2,b2-1)) return ret=1; 
    } 
    if (t[a2]==s[b1-1]){ 
      if (dp(a1,b1-1,a2+1,b2)) return ret=1; 
    } 
    return ret; 
  } 
 
  int longestPal(string S, string T){ 
    s=S; 
    t=T; 
    n=s.size(); 
    m=t.size(); 
    memset(a,0xff,sizeof(a)); 
    int i,j,k,r,p,q; 
    q=0; 
    for(i=0;i<=n;i++){ 
      for(j=i;j<=n;j++){ 
        for(k=0;k<=m;k++){ 
          for(r=k;r<=m;r++) if (dp(i,j,k,r)){ 
            p=j-i+r-k; 
            if (p>q) q=p; 
          } 
        } 
      } 
    } 
    return q; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/