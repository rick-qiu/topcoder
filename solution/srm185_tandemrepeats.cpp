/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2377
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

class TandemRepeats {
public:
    int maxLength(string dna, int k);
};

int TandemRepeats::maxLength(string dna, int k) {
    int ret;
    return ret;
}


int test0() {
    string dna = "GATCATCA";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string dna = "GATCATGA";
    int k = 1;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string dna = "GATCATGA";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
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
    string dna = "AGAGAAAGAA";
    int k = 3;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string dna = "ATTAGCATTGCACACCTTGAGGACTTAGACAAACCTAGTACACAGGTGTA";
    int k = 5;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string dna = "AATAGGACCCATTTTAGGGGGACCCCCC";
    int k = 5;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
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
    string dna = "TT";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string dna = "TG";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
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
    string dna = "GC";
    int k = 1;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
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
    string dna = "GC";
    int k = 5;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
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
    string dna = "CTGCTTCCAACTTCTAAAGCCCAATGCGCTTTTATTCACCCCCAAGAACT";
    int k = 5;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string dna = "GCTGGCAGCAAACGAGGGTTGGAATCAGATCGGCGACTTTCGTGACAACG";
    int k = 2;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string dna = "CAGCTCCTTGTAGCGTGCGGCTTTCCCGTCGACAGACAGCCATGACGATT";
    int k = 4;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
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
    string dna = "CCTCGTGATCGCATTTCGGTCCGTTGCATAGGCGCGGCTGGTTAGTAGGG";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string dna = "CATGTGCATGGATTAGTGGCTGGTGAGAAAAGACCGCGAGCACATCCAGT";
    int k = 5;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string dna = "ATCCACAAAACTCTCTGCTTCTCAGACCCCTGCCTTGTGGTTAGATGTTC";
    int k = 4;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string dna = "TCCCATATAATAATGGCCGGGCCTCGTCCCTAATCGAACGAGACAGTCAG";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string dna = "AGATGCGTAGTAACGTGCGTACTACCTGACTACACGCCCTGATGCGTTTA";
    int k = 1;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string dna = "TGCCTGATTGCCACCACATGGCTAGCACTTCGGTCACGGGGCTACCTCAG";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string dna = "TGCGGACAACATACTCTGCAGCGTGTATCATTGAAGGACTAGACTCCGAC";
    int k = 3;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string dna = "GTTAGCGTGTCATGGGCATCCCTTAGTTAGCGTGTCATGGGCATCCCTTA";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string dna = "GTTAGCGTGTCATGGGCATCCCTTAGTTTGCGTGTCATGGGCATCCCTTA";
    int k = 2;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string dna = "ATCAT";
    int k = 1;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string dna = "ATCGGTACCGTCGAGCGTCTTCATAGTTAGCGTGGT";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
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
    string dna = "GCCCTACCTCTCCGAAGGGCCAACTTCTCAGTCGTTG";
    int k = 2;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string dna = "TATCCATCGAATAATCGCGGACTAACTTCGACAACGAC";
    int k = 5;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string dna = "GACATTTCACACGGATTCGTCCAGCTCCCACCCCTGCAA";
    int k = 1;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string dna = "TGCAATACCGCTAACCATCGTTAGATGACTAACAGGACTA";
    int k = 4;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string dna = "CGAGAAAATGAGATTCGTTTACTGCTCAGGAACTCGTTTTA";
    int k = 1;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
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
    string dna = "CGGAGTTGATAAGTGTTGGGTAGGCGCCGGGCTCGTCAGTGG";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
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
    string dna = "TGGGCCGAGTTGCATTTGTGAAAAGTGGGAACTGAGCCGACTT";
    int k = 5;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string dna = "GTCCACACTTGAAACTAGGGACCCATGCTGGGGCTGGTAGGAAG";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
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
    string dna = "ATGACGTGCTGTTTTTACTGAATCGCAAGTAGCCTCGGCGTCCAC";
    int k = 1;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string dna = "CTGACAGTTCACGGCCGATTAGTATTGGCGCACGATATCGCATCCC";
    int k = 5;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string dna = "GGATGACATGGAAGAGGGATTTTCTACGTTCTACCAACTTTTATATT";
    int k = 3;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string dna = "CGGCGAGTACAACTTAAATGGCTCTACGTTCCATTAGTCGCGCCAGAT";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string dna = "GGTGCTAGGTCCCATATGAGAGGGCGAACAGGTCTGTACTGATGCCTAG";
    int k = 1;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string dna = "TGCTGTGTACTGACGTTGGAGAACACCCGACGAAATCCAGCGCTGGGCCT";
    int k = 2;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string dna = "ATTAGCATTGCACACCTTGAGGACTTAGACAAACCTAGTACACAGGTGTA";
    int k = 5;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string dna = "AA";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
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
    string dna = "AAAAAA";
    int k = 1;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string dna = "CC";
    int k = 1;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
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
    string dna = "GATCAGATCGACAGGGGACGATACAGATTAGACGAGATTAAACCGGATTA";
    int k = 4;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string dna = "AA";
    int k = 5;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string dna = "GCA";
    int k = 5;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string dna = "AG";
    int k = 1;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
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
    string dna = "AGAGAAAGAA";
    int k = 3;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string dna = "AT";
    int k = 1;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
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
    string dna = "AA";
    int k = 1;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string dna = "AAA";
    int k = 5;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string dna = "GATCATCA";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string dna = "GG";
    int k = 1;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string dna = "AGTCTAGCC";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string dna = "AA";
    int k = 2;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string dna = "AGTCCTGGTCTACTA";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string dna = "GATC";
    int k = 4;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string dna = "GATCC";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string dna = "GATC";
    int k = 1;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string dna = "GG";
    int k = 0;
    TandemRepeats* pObj = new TandemRepeats();
    clock_t start = clock();
    int result = pObj->maxLength(dna, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=287979&rd=4745&pm=2377
********************************************************************************
// Oblok -- University of Utah 
 
import java.util.*; 
 
public class TandemRepeats 
{ 
    public int maxLength(String dd /*dna*/, int kk /*k*/) 
    { 
        int ddlen=dd.length(); 
        int c=0, count=0, i=0, j=0, k=0, l=0, x=0, y=0, z=0; 
        char ch; 
        String s; StringTokenizer st; Iterator it; 
        int rv = 0; 
 
        for (i = 1; i < 50; i++) 
          for (j = 0; j <= ddlen - 2 * i; j++) 
          { 
            c = 0; 
            for (k = 0; k < i; k++) 
              if (dd.charAt (j+k) != dd.charAt (j+i+k)) 
                  c++; 
            if (c <= kk) 
              rv = i; 
          } 
 
        return rv; 
    } 
 
    static public void main (String[] args) 
    { 
        /*{ 
        TandemRepeats tempObject = new TandemRepeats (); 
        String dna = ; 
        int k = ; 
        int result = tempObject.maxLength (dna, k); 
 
        System.out.println ("Expected: "); 
        System.out.print ("Received: "); 
        System.out.println ("" + result); 
        } 
        */ 
        { 
        TandemRepeats tempObject = new TandemRepeats (); 
        String dna = "GATCATCA"; 
        int k = 0; 
        int result = tempObject.maxLength (dna, k); 
 
        System.out.println ("Expected: 3"); 
        System.out.print ("Received: "); 
        System.out.println ("" + result); 
        } 
 
        { 
        TandemRepeats tempObject = new TandemRepeats (); 
        String dna = "GATCATGA"; 
        int k = 1; 
        int result = tempObject.maxLength (dna, k); 
 
        System.out.println ("Expected: 3"); 
        System.out.print ("Received: "); 
        System.out.println ("" + result); 
        } 
 
        { 
        TandemRepeats tempObject = new TandemRepeats (); 
        String dna = "GATCATGA"; 
        int k = 0; 
        int result = tempObject.maxLength (dna, k); 
 
        System.out.println ("Expected: 0"); 
        System.out.print ("Received: "); 
        System.out.println ("" + result); 
        } 
 
        { 
        TandemRepeats tempObject = new TandemRepeats (); 
        String dna = "AGAGAAAGAA"; 
        int k = 3; 
        int result = tempObject.maxLength (dna, k); 
 
        System.out.println ("Expected: 5"); 
        System.out.print ("Received: "); 
        System.out.println ("" + result); 
        } 
 
        { 
        TandemRepeats tempObject = new TandemRepeats (); 
        String dna = "ATTAGCATTGCACACCTTGAGGACTTAGACAAACCTAGTACACAGGTGTA"; 
        int k = 5; 
        int result = tempObject.maxLength (dna, k); 
 
        System.out.println ("Expected: 11"); 
        System.out.print ("Received: "); 
        System.out.println ("" + result); 
        } 
 
        /*{ 
        TandemRepeats tempObject = new TandemRepeats (); 
        String dna = ; 
        int k = ; 
        int result = tempObject.maxLength (dna, k); 
 
        System.out.println ("Expected: "); 
        System.out.print ("Received: "); 
        System.out.println ("" + result); 
        } 
        */ 
    } 
    public String[] tokenize (String s) 
    { 
        // P. Jensen's (Oblok's) library code -- Copyright 2003.  Converts 
        //   a string into an array of its delimited tokens. 
        StringTokenizer st=new StringTokenizer(s," "); 
        String[] rv=new String[st.countTokens()]; 
        for (int i=0;i<rv.length;i++)rv[i]=st.nextToken(); 
        return rv; 
    } 
 
    public String[][] tokenize (String s[]) 
    { 
        // P. Jensen's (Oblok's) library code -- Copyright 2003.  Converts 
        //   a string array into arrays of its delimited tokens. 
        String[][] rv = new String[s.length][]; 
        for (int j=0;j<s.length;j++){ 
          StringTokenizer st=new StringTokenizer(s[j]," "); 
          rv[j]=new String[st.countTokens()]; 
          for (int i=0;i<rv[j].length;i++)rv[j][i]=st.nextToken();} 
        return rv; 
    } 
 
    static public char[] charize (String s) 
    { 
        // P. Jensen's (Oblok's) library code -- Too simple to comment. 
        return s.toCharArray(); 
    } 
 
    static public char[][] charize (String[] s) 
    { 
        // P. Jensen's (Oblok's) library code -- Copyright 2003.  Converts 
        //   a string array into arrays of its characters. 
        char[][] rv = new char[s.length][]; 
        for (int i=0;i<s.length;i++) 
          rv[i]=s[i].toCharArray(); 
        return rv; 
    } 
 
    public int[] valueize (String s) 
    { 
        // P. Jensen's (Oblok's) library code -- Copyright 2003.  Converts 
        //   the string tokens to an array of integers, replacing invalid 
        //   values with MIN_VALUE. 
        String[] t=tokenize(s); 
        int[] rv=new int[t.length]; 
        for (int i=0;i<t.length;i++) 
          try{rv[i]=Integer.parseInt(t[i]);}catch(NumberFormatException e){rv[i]=Integer.MIN_VALUE;} 
        return rv; 
    } 
    public int[][] valueize (String s[]) 
    { 
        // P. Jensen's (Oblok's) library code -- Copyright 2003.  Converts 
        //   the array of string tokens to arrays of integers, replacing invalid 
        //   values with MIN_VALUE. 
        int[][] rv=new int[s.length][]; 
        for (int i=0;i<s.length;i++) 
          rv[i]=valueize(s[i]); 
        return rv; 
    } 
    public void print (String s){System.out.print(s);} 
    public void println (String s){System.out.println(s);} 
}

********************************************************************************
*******************************************************************************/