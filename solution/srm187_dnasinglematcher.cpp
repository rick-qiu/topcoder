/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2349
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

class DNASingleMatcher {
public:
    int longestMatch(string sequence1, string sequence2);
};

int DNASingleMatcher::longestMatch(string sequence1, string sequence2) {
    int ret;
    return ret;
}


int test0() {
    string sequence1 = "AAAAAAAAAAAAAAAAAAAAACCCGGGGGGGGGGGGG";
    string sequence2 = "AAAACCCGGGGGGGGGGGGGGGGTTTTTTTTTGGGGGGGGGGGG";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string sequence1 = "CAT";
    string sequence2 = "AT";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string sequence1 = "TCTCTCTCTCTCTCTCTCTCTCTCTCTCTCTCTCTCTCTCTCTCTCTCTC";
    string sequence2 = "GAGAGGAGAAAGAGAGAGAAGAGAGGAGGAAAGAGAGAGAAAAGAGGGAA";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string sequence1 = "ACGTACGTACGTACGTACGTACGTACGTACGTACGTACGTACGTACGTAC";
    string sequence2 = "GTACGTACGTACGTACGTACGTACGTACGTACGTACGTACGTACGTACGT";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string sequence1 = "CCCCCCCCCCCCCCCCCCCCCCCCCACCCCCCCCCCCCCCCCCCCCCCCC";
    string sequence2 = "CCCCCCCCCCCCCCCCCCCCCCCCGCCCCCCCCCCCCCCCCCCCCCCCCC";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string sequence1 = "ACTGTCATTTTTTTTTTTTTGATCGATCGTACCTTAGCTGGAA";
    string sequence2 = "GCACTATCAATTCGGACTTTTTTTTTTTTTTTGTCGCAATGGCC";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string sequence1 = "TGACACGGTACGACTGGAGGTCTGATGCTTAGGCATC";
    string sequence2 = "ATCGATTGACGGTACGACTGGAGGTCTGTAGAGACCAGC";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string sequence1 = "TC";
    string sequence2 = "CATCAT";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string sequence1 = "A";
    string sequence2 = "A";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string sequence1 = "C";
    string sequence2 = "C";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
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
    string sequence1 = "G";
    string sequence2 = "G";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
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
    string sequence1 = "T";
    string sequence2 = "T";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string sequence1 = "CGCATTAGATTCAGAG";
    string sequence2 = "CGCATGAGTAGATTC";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string sequence1 = "TCTCTCTCTCTCTCTCTCTCA";
    string sequence2 = "GGGGGGGGA";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string sequence1 = "TATATATATATATATAATAC";
    string sequence2 = "CGGGGGGGGGGGGGGG";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string sequence1 = "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT";
    string sequence2 = "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string sequence1 = "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT";
    string sequence2 = "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string sequence1 = "AT";
    string sequence2 = "A";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string sequence1 = "AT";
    string sequence2 = "T";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string sequence1 = "AT";
    string sequence2 = "C";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
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
    string sequence1 = "A";
    string sequence2 = "AT";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string sequence1 = "T";
    string sequence2 = "AT";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string sequence1 = "C";
    string sequence2 = "AT";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
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
    string sequence1 = "A";
    string sequence2 = "CAT";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string sequence1 = "CAT";
    string sequence2 = "A";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string sequence1 = "CCAATT";
    string sequence2 = "AA";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string sequence1 = "AA";
    string sequence2 = "CCAATT";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string sequence1 = "CCAATT";
    string sequence2 = "GGAA";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string sequence1 = "CCAATT";
    string sequence2 = "AAGG";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string sequence1 = "CCAATT";
    string sequence2 = "GGTT";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string sequence1 = "CCAATT";
    string sequence2 = "TTGG";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string sequence1 = "CCAATT";
    string sequence2 = "CCGG";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string sequence1 = "CCAATT";
    string sequence2 = "GGCC";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string sequence1 = "A";
    string sequence2 = "A";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string sequence1 = "TC";
    string sequence2 = "CATCAT";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string sequence1 = "GCGACCC";
    string sequence2 = "AGCGAA";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string sequence1 = "A";
    string sequence2 = "C";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string sequence1 = "A";
    string sequence2 = "CCCA";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string sequence1 = "ATC";
    string sequence2 = "ATC";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string sequence1 = "ACGT";
    string sequence2 = "AT";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string sequence1 = "AAA";
    string sequence2 = "CCC";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
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
    string sequence1 = "A";
    string sequence2 = "A";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string sequence1 = "TC";
    string sequence2 = "CATCAT";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string sequence1 = "GCGACCC";
    string sequence2 = "AGCGAA";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string sequence1 = "A";
    string sequence2 = "C";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string sequence1 = "A";
    string sequence2 = "CCCA";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string sequence1 = "ATC";
    string sequence2 = "ATC";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string sequence1 = "ACGT";
    string sequence2 = "AT";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string sequence1 = "AAA";
    string sequence2 = "CCC";
    DNASingleMatcher* pObj = new DNASingleMatcher();
    clock_t start = clock();
    int result = pObj->longestMatch(sequence1, sequence2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7462698&rd=4755&pm=2349
********************************************************************************
#include <string>
#include <vector>
 
using namespace std;
 
class DNASingleMatcher
{
public:
  int longestMatch(string s1, string s2)  
  {
    int j, k, l, count = 0;
    for(j = 0; j < s1.length(); j++)
    {
      for(k = 0; k < s2.length(); k++)
      {
        for(l = 0; l + j < s1.length() && l + k < s2.length(); l++)
        {
          if(s1[l + j] != s2[l + k])
            break;
        }
        if(count < l)
          count = l;
      }
    }
    return count;
  }
};

********************************************************************************
*******************************************************************************/