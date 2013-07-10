/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9790
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

class TransformMatrix {
public:
    int transform(vector<string> A, vector<string> B, vector<string> count);
};

int TransformMatrix::transform(vector<string> A, vector<string> B, vector<string> count) {
    int ret;
    return ret;
}


int test0() {
    vector<string> A = {"110", "000", "001"};
    vector<string> B = {"000", "110", "100"};
    vector<string> count = {"222", "222", "222"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"10"};
    vector<string> B = {"01"};
    vector<string> count = {"11"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> A = {"111", "000", "111"};
    vector<string> B = {"111", "000", "111"};
    vector<string> count = {"013", "537", "136"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"001", "110"};
    vector<string> B = {"000", "111"};
    vector<string> count = {"000", "111"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"100", "000"};
    vector<string> B = {"000", "000"};
    vector<string> count = {"999", "999"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"011101", "110000", "000011", "000000", "100000"};
    vector<string> B = {"110100", "000011", "000000", "110001", "000010"};
    vector<string> count = {"305713", "537211", "352421", "242212", "333313"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> A = {"0"};
    vector<string> B = {"0"};
    vector<string> count = {"0"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> A = {"1"};
    vector<string> B = {"0"};
    vector<string> count = {"9"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> A = {"10"};
    vector<string> B = {"10"};
    vector<string> count = {"99"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> A = {"11"};
    vector<string> B = {"10"};
    vector<string> count = {"99"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> A = {"10"};
    vector<string> B = {"01"};
    vector<string> count = {"01"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"000", "101", "001"};
    vector<string> B = {"010", "010", "100"};
    vector<string> count = {"020", "855", "348"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> A = {"001", "101", "000"};
    vector<string> B = {"100", "010", "010"};
    vector<string> count = {"348", "855", "020"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> A = {"000", "101", "100"};
    vector<string> B = {"010", "010", "001"};
    vector<string> count = {"020", "558", "843"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"100", "101", "000"};
    vector<string> B = {"001", "010", "010"};
    vector<string> count = {"843", "558", "020"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> A = {"011", "000", "010"};
    vector<string> B = {"000", "110", "001"};
    vector<string> count = {"058", "254", "083"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> A = {"010", "000", "110"};
    vector<string> B = {"100", "011", "000"};
    vector<string> count = {"380", "452", "850"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"010", "000", "011"};
    vector<string> B = {"001", "110", "000"};
    vector<string> count = {"083", "254", "058"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> A = {"110", "000", "010"};
    vector<string> B = {"000", "011", "100"};
    vector<string> count = {"850", "452", "380"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"100000", "000000", "000011", "110000", "011101"};
    vector<string> B = {"000010", "110001", "000000", "000011", "110100"};
    vector<string> count = {"333313", "242212", "352421", "537211", "305713"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"101110", "000011", "110000", "000000", "000001"};
    vector<string> B = {"001011", "110000", "000000", "100011", "010000"};
    vector<string> count = {"317503", "112735", "124253", "212242", "313333"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> A = {"000001", "000000", "110000", "000011", "101110"};
    vector<string> B = {"010000", "100011", "000000", "110000", "001011"};
    vector<string> count = {"313333", "212242", "124253", "112735", "317503"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> A = {"10100", "00100", "10000", "10000", "11000", "01001"};
    vector<string> B = {"01010", "01001", "10000", "00000", "10010", "10010"};
    vector<string> count = {"31123", "11211", "72423", "57223", "03543", "35323"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> A = {"10010", "00011", "00001", "00001", "00100", "00101"};
    vector<string> B = {"01001", "01001", "00000", "00001", "10010", "01010"};
    vector<string> count = {"32353", "34530", "32275", "32427", "11211", "32113"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> A = {"01001", "11000", "10000", "10000", "00100", "10100"};
    vector<string> B = {"10010", "10010", "00000", "10000", "01001", "01010"};
    vector<string> count = {"35323", "03543", "57223", "72423", "11211", "31123"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> A = {"00101", "00100", "00001", "00001", "00011", "10010"};
    vector<string> B = {"01010", "10010", "00001", "00000", "01001", "01001"};
    vector<string> count = {"32113", "11211", "32427", "32275", "34530", "32353"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> A = {"0000000000", "0000000000", "0000000000", "0000001000", "0000000000", "0000001000", "0000000000", "0000000000", "0000000000", "0000000000"};
    vector<string> B = {"1000000000", "0000000000", "0000000000", "1000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000"};
    vector<string> count = {"1222220000", "0000002000", "0000000222", "1222221002", "0000002002", "0000001222", "0000000000", "0000000000", "0000000000", "0000000000"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> A = {"0000000000", "0000000000", "0000000000", "0000000000", "0000001000", "0000000000", "0000001000", "0000000000", "0000000000", "0000000000"};
    vector<string> B = {"0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "1000000000", "0000000000", "0000000000", "1000000000"};
    vector<string> count = {"0000000000", "0000000000", "0000000000", "0000000000", "0000001222", "0000002002", "1222221002", "0000000222", "0000002000", "1222220000"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> A = {"0000000000", "0000000000", "0000000000", "0001000000", "0000000000", "0001000000", "0000000000", "0000000000", "0000000000", "0000000000"};
    vector<string> B = {"0000000001", "0000000000", "0000000000", "0000000001", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000"};
    vector<string> count = {"0000222221", "0002000000", "2220000000", "2001222221", "2002000000", "2221000000", "0000000000", "0000000000", "0000000000", "0000000000"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> A = {"0000000000", "0000000000", "0000000000", "0000000000", "0001000000", "0000000000", "0001000000", "0000000000", "0000000000", "0000000000"};
    vector<string> B = {"0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000001", "0000000000", "0000000000", "0000000001"};
    vector<string> count = {"0000000000", "0000000000", "0000000000", "0000000000", "2221000000", "2002000000", "2001222221", "2220000000", "0002000000", "0000222221"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> A = {"0000000000", "0000000000", "0000000000", "0001010000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000"};
    vector<string> B = {"0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "1001000000"};
    vector<string> count = {"0022220000", "0020020000", "0020020000", "0201210000", "2002000000", "2002000000", "2002000000", "2002000000", "2002000000", "1001000000"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> A = {"0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000101000", "0000000000", "0000000000", "0000000000"};
    vector<string> B = {"0000001001", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000"};
    vector<string> count = {"0000001001", "0000002002", "0000002002", "0000002002", "0000002002", "0000002002", "0000121020", "0000200200", "0000200200", "0000222200"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> A = {"0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0001010000", "0000000000", "0000000000", "0000000000"};
    vector<string> B = {"1001000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000"};
    vector<string> count = {"1001000000", "2002000000", "2002000000", "2002000000", "2002000000", "2002000000", "0201210000", "0020020000", "0020020000", "0022220000"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> A = {"0000000000", "0000000000", "0000000000", "0000101000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000"};
    vector<string> B = {"0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000001001"};
    vector<string> count = {"0000222200", "0000200200", "0000200200", "0000121020", "0000002002", "0000002002", "0000002002", "0000002002", "0000002002", "0000001001"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> A = {"00000000000000000001", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000"};
    vector<string> B = {"00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "10000000000000000000"};
    vector<string> count = {"22222222222222222222", "21111112111111111112", "21111112222211122212", "21122211111211121222", "21121222222211121111", "21122212111211122222", "21111212221211111212", "21111212121222222212", "22221212121111111112", "11121212122222222222", "22221212121112111121", "21111222121112111121", "22221212121112122221", "11121212222222221121", "22221211121112111121", "21111222222222222221", "21111211111111111111", "22221222222222222222", "11121111112222222222", "22222222222222222222"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> A = {"11111111111111111110", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111"};
    vector<string> B = {"11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "01111111111111111111"};
    vector<string> count = {"22222222222222222222", "21111112111111111112", "21111112222211122212", "21122211111211121222", "21121222222211121111", "21122212111211122222", "21111212221211111212", "21111212121222222212", "22221212121111111112", "11121212122222222222", "22221212121112111121", "21111222121112111121", "22221212121112122221", "11121212222222221121", "22221211121112111121", "21111222222222222221", "21111211111111111111", "22221222222222222222", "11121111112222222222", "22222222222222222222"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> A = {"11111000011011001001", "00010111010111101000", "11110111110010101110", "11110101010111000100", "01000101100000101101", "00111000111011010101", "10000001000011001001", "10000000100000111010", "10010010100100000111", "11010111010100010000", "10010111111100101111", "00111001100100110010", "10011110000011001001", "11101100010001001110", "10100100000000110000", "10011000011001011000", "01111110000110001010", "00011001011000101011", "11010110000010001110", "01011100110111100001"};
    vector<string> B = {"10000101010110001111", "01000111000101100010", "10011001110111100100", "00100101010010011010", "00101000011010010011", "01100100100010000000", "01001100000111001010", "01111000000001000110", "01110101111111101111", "11010011101100100111", "01000111101010110011", "10101001110000000000", "00101100100101100101", "11001100100110000111", "10011101011111010010", "10111000101010010101", "10000110100101001111", "01000010000010110010", "00001110101110111110", "01000100010110101011"};
    vector<string> count = {"95526552299315358366", "62331897628521784248", "89384758977537816327", "58248422736454864756", "41796742831714711725", "86488796291876616436", "25291634239526792347", "21668345546141849631", "74952484479144443379", "99688119134256467471", "46656238248239648758", "79578233533362661999", "58993433126724545547", "52769486799849371438", "23351324396771215637", "69755619978992122987", "44163548613936758515", "66824827545113161357", "34294332312332337581", "23798726434989734165"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 214;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> A = {"00000111100100110110", "11101000101000010111", "00001000001101010001", "00001010101000111011", "10111010011111010010", "11000111000100101010", "01111110111100110110", "01111111011111000101", "01101101011011111000", "00101000101011101111", "01101000000011010000", "11000110011011001101", "01100001111100110110", "00010011101110110001", "01011011111111001111", "01100111100110100111", "10000001111001110101", "11100110100111010100", "00101001111101110001", "10100011001000011110"};
    vector<string> B = {"01111010101001110000", "10111000111010011101", "01100110001000011011", "11011010101101100101", "11010111100101101100", "10011011011101111111", "10110011111000110101", "10000111111110111001", "10001010000000010000", "00101100010011011000", "10111000010101001100", "01010110001111111111", "11010011011010011010", "00110011011001111000", "01100010100000101101", "01000111010101101010", "01111001011010110000", "10111101111101001101", "11110001010001000001", "10111011101001010100"};
    vector<string> count = {"95526552299315358366", "62331897628521784248", "89384758977537816327", "58248422736454864756", "41796742831714711725", "86488796291876616436", "25291634239526792347", "21668345546141849631", "74952484479144443379", "99688119134256467471", "46656238248239648758", "79578233533362661999", "58993433126724545547", "52769486799849371438", "23351324396771215637", "69755619978992122987", "44163548613936758515", "66824827545113161357", "34294332312332337581", "23798726434989734165"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 214;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> A = {"10110000000100011100", "01011000000101101100", "01100000100111101001", "11100101010110001101", "00000111110100111000", "10000001000011010010", "10000111100011000000", "01101000110100101011", "11111011000110010010", "01000000110010101100", "11010010001100000000", "00110010000001100010", "10000110010010001100", "01001101011100001000", "00101001011001100011", "11010011101100011100", "11000100010000100010", "00110100000101001011", "00100010000000010010", "00001000111010001111"};
    vector<string> B = {"00101011101010111000", "11000001100001101000", "01111001000000111010", "01100010000100010100", "00010010111000001110", "00110000111100011110", "10110010100100001101", "00111100000110001000", "01010010011011000111", "01110100100000010010", "11110001000001111100", "10011110000010101000", "00000101100010111000", "10000000001111111101", "00010000110110000100", "00111000001100110100", "01000110000100001110", "00101000100101100000", "01000001100010101100", "11100100010100001000"};
    vector<string> count = {"46516235291178665939", "99786127157595242538", "88812112978318317755", "72567125377364973937", "54689567875237462125", "55373862546355618939", "32347612767774755738", "42661727783461428661", "52244718885219391657", "71314414225534621326", "76185142882177847192", "62562811983395795934", "89173864279876462344", "15669367374111954469", "28381284846977541124", "91474766177191887973", "88949581949517223655", "69662212654182562291", "95554486586895978726", "23168265891832591289"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> A = {"01001111111011100011", "10100111111010010011", "10011111011000010110", "00011010101001110010", "11111000001011000111", "01111110111100101101", "01111000011100111111", "10010111001011010100", "00000100111001101101", "10111111001101010011", "00101101110011111111", "11001101111110011101", "01111001101101110011", "10110010100011110111", "11010110100110011100", "00101100010011100011", "00111011101111011101", "11001011111010110100", "11011101111111101101", "11110111000101110000"};
    vector<string> B = {"11010100010101000111", "00111110011110010111", "10000110111111000101", "10011101111011101011", "11101101000111110001", "11001111000011100001", "01001101011011110010", "11000011111001110111", "10101101100100111000", "10001011011111101101", "00001110111110000011", "01100001111101010111", "11111010011101000111", "01111111110000000010", "11101111001001111011", "11000111110011001011", "10111001111011110001", "11010111011010011111", "10111110011101010011", "00011011101011110111"};
    vector<string> count = {"46516235291178665939", "99786127157595242538", "88812112978318317755", "72567125377364973937", "54689567875237462125", "55373862546355618939", "32347612767774755738", "42661727783461428661", "52244718885219391657", "71314414225534621326", "76185142882177847192", "62562811983395795934", "89173864279876462344", "15669367374111954469", "28381284846977541124", "91474766177191887973", "88949581949517223655", "69662212654182562291", "95554486586895978726", "23168265891832591289"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> A = {"01111110110111101111", "11111111111111111110", "11111100110110110111", "11111111111111111111", "11101111111111101111", "11010011111010111111", "01101111111111111111", "11111011111111011101", "10111110011111111111", "11011111111111111011", "10101101111101011111", "11111111111111111011", "10111110101111111111", "11011101101111011010", "11111111111101111111", "10011111111111111111", "11011101011111111111", "11111110111111110111", "11111111111111111010", "11111111111111111111"};
    vector<string> B = {"01111111101111010111", "01111111111111111110", "11101111111111111011", "01111111111111011111", "11111111111110111011", "11011011111111011101", "11111111011111111111", "11111101111100111111", "11111011111111111011", "11101111110111111110", "11110011111111111011", "11110111111111111111", "11111101011011111011", "11110011111111111111", "11100111111111101111", "11111111101111110011", "11110111111011111111", "01111011101011111111", "01111111111011111111", "11110111011111111011"};
    vector<string> count = {"13404046761554518960", "88313140358186124289", "52607678407864985869", "75623945093996193932", "14373366064246158888", "90748314998308940970", "35849673633104322273", "93686252607818292066", "03707998725812112514", "20878662783461670767", "35471186561534232713", "00376481831115399309", "35029414047118772910", "20209248946760632753", "43463796180555670809", "57504073417987689634", "11629680722143943505", "55739840234504182042", "30813494781312986280", "84552161206731923940"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"10000001001000010000", "00000000000000000001", "00000011001001001000", "00000000000000000000", "00010000000000010000", "00101100000101000000", "10010000000000000000", "00000100000000100010", "01000001100000000000", "00100000000000000100", "01010010000010100000", "00000000000000000100", "01000001010000000000", "00100010010000100101", "00000000000010000000", "01100000000000000000", "00100010100000000000", "00000001000000001000", "00000000000000000101", "00000000000000000000"};
    vector<string> B = {"10000000010000101000", "10000000000000000001", "00010000000000000100", "10000000000000100000", "00000000000001000100", "00100100000000100010", "00000000100000000000", "00000010000011000000", "00000100000000000100", "00010000001000000001", "00001100000000000100", "00001000000000000000", "00000010100100000100", "00001100000000000000", "00011000000000010000", "00000000010000001100", "00001000000100000000", "10000100010100000000", "10000000000100000000", "00001000100000000100"};
    vector<string> count = {"13404046761554518960", "88313140358186124289", "52607678407864985869", "75623945093996193932", "14373366064246158888", "90748314998308940970", "35849673633104322273", "93686252607818292066", "03707998725812112514", "20878662783461670767", "35471186561534232713", "00376481831115399309", "35029414047118772910", "20209248946760632753", "43463796180555670809", "57504073417987689634", "11629680722143943505", "55739840234504182042", "30813494781312986280", "84552161206731923940"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"11111110111111011111", "11111111111111110111", "11111110101111011110", "11111110111001111111", "11011111011110010111", "10011111111110101101", "01101101111111001011", "11011111111011111111", "11111110111010011101", "11111111111110111101", "11010111011111010111", "11011111001111111010", "11101111010110011111", "11110111111111101111", "11011011111111111111", "11101111011001111111", "11110110001111111111", "11111111101111000111", "11111011101111100111", "11010111111111101110"};
    vector<string> B = {"11011010011111111011", "01011111111011101111", "11011100011011111111", "11101111111111111110", "10111111111111111111", "11111011111111101101", "11101111110011111011", "10101001111111101111", "11011110111101101111", "10111010111101111101", "11111111101011011010", "10111011111111110111", "11111011100111110111", "11111111111110111111", "11101110111011111111", "11111110101111101111", "01111111110110111101", "10111011011111101001", "01111110111101111101", "10011111011111111111"};
    vector<string> count = {"34389588483785819222", "85297425756368923118", "47395954685896284265", "45879426125181126662", "78737881351979286682", "65568678911728991192", "85585862789326976329", "13951667777587385755", "69684262691155565581", "41572712112417521224", "14241713218987716837", "97675822925517595847", "49273513525658623791", "77444688957543661294", "49115516354938581242", "13129671823961562383", "97517499219962234164", "58121578225478887995", "53733974124886776633", "84925461773253633322"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 141;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> A = {"00000001000000100000", "00000000000000001000", "00000001010000100001", "00000001000110000000", "00100000100001101000", "01100000000001010010", "10010010000000110100", "00100000000100000000", "00000001000101100010", "00000000000001000010", "00101000100000101000", "00100000110000000101", "00010000101001100000", "00001000000000010000", "00100100000000000000", "00010000100110000000", "00001001110000000000", "00000000010000111000", "00000100010000011000", "00101000000000010001"};
    vector<string> B = {"00100101100000000100", "10100000000100010000", "00100011100100000000", "00010000000000000001", "01000000000000000000", "00000100000000010010", "00010000001100000100", "01010110000000010000", "00100001000010010000", "01000101000010000010", "00000000010100100101", "01000100000000001000", "00000100011000001000", "00000000000001000000", "00010001000100000000", "00000001010000010000", "10000000001001000010", "01000100100000010110", "10000001000010000010", "01100000100000000000"};
    vector<string> count = {"34389588483785819222", "85297425756368923118", "47395954685896284265", "45879426125181126662", "78737881351979286682", "65568678911728991192", "85585862789326976329", "13951667777587385755", "69684262691155565581", "41572712112417521224", "14241713218987716837", "97675822925517595847", "49273513525658623791", "77444688957543661294", "49115516354938581242", "13129671823961562383", "97517499219962234164", "58121578225478887995", "53733974124886776633", "84925461773253633322"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 141;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> A = {"11111111111111100111", "11111111011111011111", "11111111111100111110", "01111101111111111110", "11111111111010101111", "11101111111111011111", "11111101111111111011", "11111111111111111101", "01111111111111111111", "11110111111010111111", "11111111111111011110", "11101111111110011110", "11111101111111111011", "11110101111011111101", "11111111001111111111", "11110110111001111111", "11111101101100101110", "01111111111111011111", "11111011010111011111", "11111101111111111111"};
    vector<string> B = {"11111111111111111111", "11111111111101101111", "11111011111111101011", "11111111110100111111", "01101111111110101110", "11111111111111111000", "01111111101111111111", "01111111111111111011", "11111101110111111011", "11101101111111111111", "11111101111111111011", "11111101111110011111", "11001011111111111000", "11100111111111111111", "11011011111111111110", "01111110011111111110", "11011011111111111111", "11110111101111111111", "11101111011011111011", "11111111111111111111"};
    vector<string> count = {"91132389191246835172", "26456558987524543828", "66718849562346647853", "83843141136443962819", "71485566116784239771", "43156524398815758914", "36262384519716826386", "18184813978752684229", "82654319166912467695", "96364683981482897733", "95922975184923279756", "87168342895256824835", "36382676231575114932", "16317935187274529776", "96713717218771132116", "52463613425632881982", "84143765519456427668", "73223385526776874189", "99516129728692535234", "39179831455733446155"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> A = {"00000000000000011000", "00000000100000100000", "00000000000011000001", "10000010000000000001", "00000000000101010000", "00010000000000100000", "00000010000000000100", "00000000000000000010", "10000000000000000000", "00001000000101000000", "00000000000000100001", "00010000000001100001", "00000010000000000100", "00001010000100000010", "00000000110000000000", "00001001000110000000", "00000010010011010001", "10000000000000100000", "00000100101000100000", "00000010000000000000"};
    vector<string> B = {"00000000000000000000", "00000000000010010000", "00000100000000010100", "00000000001011000000", "10010000000001010001", "00000000000000000111", "10000000010000000000", "10000000000000000100", "00000010001000000100", "00010010000000000000", "00000010000000000100", "00000010000001100000", "00110100000000000111", "00011000000000000000", "00100100000000000001", "10000001100000000001", "00100100000000000000", "00001000010000000000", "00010000100100000100", "00000000000000000000"};
    vector<string> count = {"91132389191246835172", "26456558987524543828", "66718849562346647853", "83843141136443962819", "71485566116784239771", "43156524398815758914", "36262384519716826386", "18184813978752684229", "82654319166912467695", "96364683981482897733", "95922975184923279756", "87168342895256824835", "36382676231575114932", "16317935187274529776", "96713717218771132116", "52463613425632881982", "84143765519456427668", "73223385526776874189", "99516129728692535234", "39179831455733446155"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> A = {"11001111111000101010", "00111111111111111011", "01110011011110111111", "11110010110110011101", "10110001111111011111", "10011111111111100110", "11111111011111101011", "01101110011111111111", "11110111101111010011", "01111111111110111101", "10011110011011011110", "01111110111001111011", "11111111111110111101", "10111111011111011111", "01111111011111111111", "01110110011111100011", "11111111001010110110", "00111111111101010111", "11110110111101111111", "11110111010111110011"};
    vector<string> B = {"01011111111100111111", "01101011111111111111", "00100011011111111111", "01110100111111111111", "11110100010111111011", "00100110011111011111", "11110111111111011110", "10101100100110111111", "10111101111111010011", "10101111110010101111", "11111011111100101111", "10111111111101011001", "00011110111110111101", "01111111011011111011", "11010111001110101111", "11010100111110101110", "11111111111111111111", "11011111111111101100", "11011111101111111100", "11111010111111111111"};
    vector<string> count = {"63173976585745181872", "36623316184516553133", "86824883247267941413", "65255337851813755175", "41157581413971554839", "85899879681743684361", "34111666641114256376", "51956398419731527179", "59422394246156297231", "89748964283235442647", "45686672695587192221", "54847254291396549213", "26679525835186256678", "92592859291647965647", "96825366321778945188", "68756158788576914261", "93921396183154736567", "28643522656521795649", "37935848514575855577", "34445458457862681167"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 172;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> A = {"00110000000111010101", "11000000000000000100", "10001100100001000000", "00001101001001100010", "01001110000000100000", "01100000000000011001", "00000000100000010100", "10010001100000000000", "00001000010000101100", "10000000000001000010", "01100001100100100001", "10000001000110000100", "00000000000001000010", "01000000100000100000", "10000000100000000000", "10001001100000011100", "00000000110101001001", "11000000000010101000", "00001001000010000000", "00001000101000001100"};
    vector<string> B = {"10100000000011000000", "10010100000000000000", "11011100100000000000", "10001011000000000000", "00001011101000000100", "11011001100000100000", "00001000000000100001", "01010011011001000000", "01000010000000101100", "01010000001101010000", "00000100000011010000", "01000000000010100110", "11100001000001000010", "10000000100100000100", "00101000110001010000", "00101011000001010001", "00000000000000000000", "00100000000000010011", "00100000010000000011", "00000101000000000000"};
    vector<string> count = {"63173976585745181872", "36623316184516553133", "86824883247267941413", "65255337851813755175", "41157581413971554839", "85899879681743684361", "34111666641114256376", "51956398419731527179", "59422394246156297231", "89748964283235442647", "45686672695587192221", "54847254291396549213", "26679525835186256678", "92592859291647965647", "96825366321778945188", "68756158788576914261", "93921396183154736567", "28643522656521795649", "37935848514575855577", "34445458457862681167"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 172;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> A = {"00010000101010000010", "10000100011000011011", "01001000101110011001", "00011000001100001010", "10011100001010100010", "11011000001010100000", "10101100110101001001", "10011000010010000001", "00010101100110001000", "10000000010101010110", "01110101000111110100", "10100000111100101001", "10001110011101001011", "00010000000100000100", "10010100101000101100", "01011001001010000110", "01001100111000000000", "00100011010000110011", "10011110100011010100", "10001011010111000001"};
    vector<string> B = {"00011001000010100000", "10000101001001101001", "11100011010101011001", "01010010010101010011", "00000001110000100000", "10000001001001000000", "11111101000100101001", "10111111001001010100", "01100000010011100110", "10001010000000000001", "00101101100100100000", "00011010101010001010", "01100000110111010101", "11001000011000000000", "11111011110000100101", "01011000000000001000", "10011100000000010010", "10001000010010111010", "10101111100001111010", "01011001010010110001"};
    vector<string> count = {"48385455644279187434", "55354414861266836233", "61976966239412444987", "22659991462252718893", "83787487265127591789", "98136188422593765831", "11226581374439238627", "55319243588155231772", "59436142642848727175", "92961218466631235187", "12657749633988577834", "12421438421221742546", "64864845613599212628", "12516812398124311424", "67332565116432412956", "79254683979775286668", "14778248477165136933", "16398599816737117797", "89696553266427344598", "59762727323778674861"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> A = {"11101111010101111101", "01111011100111100100", "10110111010001100110", "11100111110011110101", "01100011110101011101", "00100111110101011111", "01010011001010110110", "01100111101101111110", "11101010011001110111", "01111111101010101001", "10001010111000001011", "01011111000011010110", "01110001100010110100", "11101111111011111011", "01101011010111010011", "10100110110101111001", "10110011000111111111", "11011100101111001100", "01100001011100101011", "01110100101000111110"};
    vector<string> B = {"11100110111101011111", "01111010110110010110", "00011100101010100110", "10101101101010101100", "11111110001111011111", "01111110110110111111", "00000010111011010110", "01000000110110101011", "10011111101100011001", "01110101111111111110", "11010010011011011111", "11100101010101110101", "10011111001000101010", "00110111100111111111", "00000100001111011010", "10100111111111110111", "01100011111111101101", "01110111101101000101", "01010000011110000101", "10100110101101001110"};
    vector<string> count = {"48385455644279187434", "55354414861266836233", "61976966239412444987", "22659991462252718893", "83787487265127591789", "98136188422593765831", "11226581374439238627", "55319243588155231772", "59436142642848727175", "92961218466631235187", "12657749633988577834", "12421438421221742546", "64864845613599212628", "12516812398124311424", "67332565116432412956", "79254683979775286668", "14778248477165136933", "16398599816737117797", "89696553266427344598", "59762727323778674861"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> A = {"11111011011111111011", "11111111111111111011", "11011111101010111111", "11111111111111111111", "11111111111111111111", "11111111110111111111", "11111111111111110011", "01101111111111111111", "11111001011111111111", "11111101111111111111", "11111111111111011111", "10110111101111111111", "11111111011111111111", "10101111111111011111", "11111111111111111111", "11111011111111011101", "10111111111111111111", "11101111111111111111", "11101111111111111111", "11111111111111011111"};
    vector<string> B = {"01111111111111111101", "11111111111011101110", "11101111111111111111", "11111101011111111111", "11111110111111011111", "11110111111110110111", "11111011111111111111", "10101111111111111111", "11101111110111010111", "11111111111111111111", "10111101111111111101", "11111111111111111111", "11111111111111111111", "11111111111111111111", "10111111111111111111", "11111101111111011111", "11111011111011111111", "01110111111111111111", "11111111111111010111", "11111111111111111111"};
    vector<string> count = {"56166707467548730705", "55809918881855409490", "07079959343769467779", "13338084200663014005", "59392859687311629088", "18862920094249844711", "72230021606552926711", "01269307308047498937", "47581593867991658158", "21205840338357299014", "58380826319975746313", "40085497820230711545", "73610433663980984224", "72239878830606720880", "98873238520320946838", "40314823822722833407", "39615858580051068623", "30069702215734737434", "04669691992483520450", "45107968749271309205"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"00000100100000000100", "00000000000000000100", "00100000010101000000", "00000000000000000000", "00000000000000000000", "00000000001000000000", "00000000000000001100", "10010000000000000000", "00000110100000000000", "00000010000000000000", "00000000000000100000", "01001000010000000000", "00000000100000000000", "01010000000000100000", "00000000000000000000", "00000100000000100010", "01000000000000000000", "00010000000000000000", "00010000000000000000", "00000000000000100000"};
    vector<string> B = {"10000000000000000010", "00000000000100010001", "00010000000000000000", "00000010100000000000", "00000001000000100000", "00001000000001001000", "00000100000000000000", "01010000000000000000", "00010000001000101000", "00000000000000000000", "01000010000000000010", "00000000000000000000", "00000000000000000000", "00000000000000000000", "01000000000000000000", "00000010000000100000", "00000100000100000000", "10001000000000000000", "00000000000000101000", "00000000000000000000"};
    vector<string> count = {"56166707467548730705", "55809918881855409490", "07079959343769467779", "13338084200663014005", "59392859687311629088", "18862920094249844711", "72230021606552926711", "01269307308047498937", "47581593867991658158", "21205840338357299014", "58380826319975746313", "40085497820230711545", "73610433663980984224", "72239878830606720880", "98873238520320946838", "40314823822722833407", "39615858580051068623", "30069702215734737434", "04669691992483520450", "45107968749271309205"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"11111101011111111011", "11101111011111011111", "01111110111111111111", "11111111111111111111", "11111011111110111101", "11111111111111111111", "11111111011111010111", "11111101111011111111", "10111111111111111111", "11011110111111111111", "11111111111011111111", "11101111111111111111", "11111111110111111011", "11111111111111111111", "11111011111111111111", "11111111111110111111", "10111111111110111111", "00111111011010111111", "11111111111111111111", "11111111111011111111"};
    vector<string> B = {"11111011111111111011", "11111111111111111111", "11111111111111111111", "11111101111111111110", "11111101111111111011", "10110011110111111111", "11111111011111111111", "00110111111111111011", "11110111111111110111", "10101111111111111111", "11110111111111011111", "11111111111111111011", "10111111110111111111", "11111111111111111111", "11111110111111011111", "11111111111111111111", "11111111111110011111", "11110011110111111111", "11111101111111111111", "11111111111111111011"};
    vector<string> count = {"67157946524517599571", "21563307097436955327", "39088171149384131137", "95673807444582044725", "33247449228938255292", "10313531304484988375", "72624474298163290708", "38390327788062676928", "95104717606173546841", "13652882417658788620", "10633832174667996198", "86196649806542659416", "36888685212541649252", "00696216675229872627", "33952462583611074742", "41261100221461079416", "88043186631348819404", "12291201578772336860", "73221008968976824744", "93883213473670445869"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"00000010100000000100", "00010000100000100000", "10000001000000000000", "00000000000000000000", "00000100000001000010", "00000000000000000000", "00000000100000101000", "00000010000100000000", "01000000000000000000", "00100001000000000000", "00000000000100000000", "00010000000000000000", "00000000001000000100", "00000000000000000000", "00000100000000000000", "00000000000001000000", "01000000000001000000", "11000000100101000000", "00000000000000000000", "00000000000100000000"};
    vector<string> B = {"00000100000000000100", "00000000000000000000", "00000000000000000000", "00000010000000000001", "00000010000000000100", "01001100001000000000", "00000000100000000000", "11001000000000000100", "00001000000000001000", "01010000000000000000", "00001000000000100000", "00000000000000000100", "01000000001000000000", "00000000000000000000", "00000001000000100000", "00000000000000000000", "00000000000001100000", "00001100001000000000", "00000010000000000000", "00000000000000000100"};
    vector<string> count = {"67157946524517599571", "21563307097436955327", "39088171149384131137", "95673807444582044725", "33247449228938255292", "10313531304484988375", "72624474298163290708", "38390327788062676928", "95104717606173546841", "13652882417658788620", "10633832174667996198", "86196649806542659416", "36888685212541649252", "00696216675229872627", "33952462583611074742", "41261100221461079416", "88043186631348819404", "12291201578772336860", "73221008968976824744", "93883213473670445869"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"11011111101111111111", "11110111111111111111", "11110110101111011111", "11101111111111111111", "11111111111111111111", "11111011111111011111", "11111111111111111111", "11111010111111111111", "11111101111111111111", "11101111101111101111", "11111111111111111111", "11111111101111111111", "11111110111111101101", "11111111110111111001", "11111111111111110111", "11111111111111111111", "11111110111011111101", "11111111111111111111", "10101111111111111101", "11111111110111111111"};
    vector<string> B = {"11111011111111011111", "11111111011111101111", "10111111011101111111", "11111111111110111111", "11111100111111111111", "10111111101111111111", "11111101111011111111", "11111111011111110111", "11111111111111101111", "11111111110110111111", "11111111111111111111", "11111111111111110111", "11101011111111111111", "11110110111111111111", "11111111111111111101", "11111111111111111111", "01101011111111111111", "11111111111110001111", "11111111111111111111", "11111111111111111111"};
    vector<string> count = {"94682834369241014864", "58410467969010071570", "61653720562608152751", "73487488636093573341", "20053469692607499132", "05748125206131939648", "17838679491770694662", "81825365655214400597", "67348290713004964309", "46456329447209757046", "01935491659690020132", "73676111909977393844", "02874858532873981264", "08116546627695107714", "60115193379756182479", "47710705593196644203", "48800191979333053765", "41697883168291572114", "86969843292755626305", "88603426237361220985"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> A = {"00100000010000000000", "00001000000000000000", "00001001010000100000", "00010000000000000000", "00000000000000000000", "00000100000000100000", "00000000000000000000", "00000101000000000000", "00000010000000000000", "00010000010000010000", "00000000000000000000", "00000000010000000000", "00000001000000010010", "00000000001000000110", "00000000000000001000", "00000000000000000000", "00000001000100000010", "00000000000000000000", "01010000000000000010", "00000000001000000000"};
    vector<string> B = {"00000100000000100000", "00000000100000010000", "01000000100010000000", "00000000000001000000", "00000011000000000000", "01000000010000000000", "00000010000100000000", "00000000100000001000", "00000000000000010000", "00000000001001000000", "00000000000000000000", "00000000000000001000", "00010100000000000000", "00001001000000000000", "00000000000000000010", "00000000000000000000", "10010100000000000000", "00000000000001110000", "00000000000000000000", "00000000000000000000"};
    vector<string> count = {"94682834369241014864", "58410467969010071570", "61653720562608152751", "73487488636093573341", "20053469692607499132", "05748125206131939648", "17838679491770694662", "81825365655214400597", "67348290713004964309", "46456329447209757046", "01935491659690020132", "73676111909977393844", "02874858532873981264", "08116546627695107714", "60115193379756182479", "47710705593196644203", "48800191979333053765", "41697883168291572114", "86969843292755626305", "88603426237361220985"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"11110011110101111011", "11101111011111111010", "01111111111110110110", "11100101010111110101", "00111110111101111100", "11111001111111011101", "01111101111010110111", "11110110111111110101", "10110111111111110111", "11111110011110111111", "11010110011100101111", "10111111111111110101", "01111010011111011111", "01100111111011111011", "10110110011111111111", "00011010111111111111", "11111111011111111111", "01111111011011111101", "11010111111111011011", "11001011101011110101"};
    vector<string> B = {"11111101011110111111", "11011111010101001111", "11111101011101101111", "11101011111101111001", "00111101000011111111", "11101110111010100110", "01101011101011111100", "11111111100011011111", "11110011111111101011", "01101101111111111011", "11111110111011111011", "11011011110111111001", "11101111110110111111", "11100111010110111101", "11001110111111101111", "11111111111111111111", "11111011100011101111", "11111010111011111101", "01111011101111101100", "11111111111001011111"};
    vector<string> count = {"36343119594319967229", "26814564981726757239", "25718663754646476237", "23146133981931642173", "14939389664476517835", "72764896234851927629", "31219326532362958346", "17194892762853496911", "92656353336821821356", "26446326697492765718", "74873446349857143761", "12582388557141416612", "55391539662676261266", "41137834227591588542", "28424696588794396824", "32531837553425234657", "15111383729363282699", "56182282854826746338", "94965941181137667376", "33385899983451431761"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> A = {"00001100001010000100", "00010000100000000101", "10000000000001001001", "00011010101000001010", "11000001000010000011", "00000110000000100010", "10000010000101001000", "00001001000000001010", "01001000000000001000", "00000001100001000000", "00101001100011010000", "01000000000000001010", "10000101100000100000", "10011000000100000100", "01001001100000000000", "11100101000000000000", "00000000100000000000", "10000000100100000010", "00101000000000100100", "00110100010100001010"};
    vector<string> B = {"00000010100001000000", "00100000101010110000", "00000010100010010000", "00010100000010000110", "11000010111100000000", "00010001000101011001", "10010100010100000011", "00000000011100100000", "00001100000000010100", "10010010000000000100", "00000001000100000100", "00100100001000000110", "00010000001001000000", "00011000101001000010", "00110001000000010000", "00000000000000000000", "00000100011100010000", "00000101000100000010", "10000100010000010011", "00000000000110100000"};
    vector<string> count = {"36343119594319967229", "26814564981726757239", "25718663754646476237", "23146133981931642173", "14939389664476517835", "72764896234851927629", "31219326532362958346", "17194892762853496911", "92656353336821821356", "26446326697492765718", "74873446349857143761", "12582388557141416612", "55391539662676261266", "41137834227591588542", "28424696588794396824", "32531837553425234657", "15111383729363282699", "56182282854826746338", "94965941181137667376", "33385899983451431761"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> A = {"11111110111110111111", "11101111111001110101", "11111011111111111100", "01111111111101111110", "11111111110111111111", "11111101111110011111", "01110111110111111111", "11111111110111101111", "01111111111011110111", "11111011111111111111", "11111111001111110011", "11111111111111111111", "11111101111111111111", "11101111111111111011", "11101111100111101110", "11111011011111110111", "01111110011111111111", "01111011111111111111", "11110111110111111111", "11101111111011100001"};
    vector<string> B = {"10111111111110111111", "11111111111110111111", "11110101111111111111", "01111101001111111111", "11111111111101111101", "11011111111111110111", "10111101111111111110", "10111111111111111101", "11111111100001111111", "11110111111101111111", "11111011111111011101", "11110111110000111011", "11101111111111111110", "11111111011111111111", "10111111111111111001", "11111011110001110111", "11010111110111101111", "11111111101011111111", "10101111111111101111", "11111111111101111111"};
    vector<string> count = {"98432194231632633456", "75233866262875616487", "13529218152259441113", "85776991657773893914", "83194458117363278967", "25275529134379191413", "78556989165637165943", "34179434561256459119", "34677124495142192277", "99895777844438439974", "68786758353378522427", "56645496784834358347", "63943227459647117161", "98823449423436385623", "22373638768582478188", "98856162789257193173", "59578124665773861789", "73481659119221257382", "94325884969665557782", "11398149415936759692"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> A = {"00000001000001000000", "00010000000110001010", "00000100000000000011", "10000000000010000001", "00000000001000000000", "00000010000001100000", "10001000001000000000", "00000000001000010000", "10000000000100001000", "00000100000000000000", "00000000110000001100", "00000000000000000000", "00000010000000000000", "00010000000000000100", "00010000011000010001", "00000100100000001000", "10000001100000000000", "10000100000000000000", "00001000001000000000", "00010000000100011110"};
    vector<string> B = {"01000000000001000000", "00000000000001000000", "00001010000000000000", "10000010110000000000", "00000000000010000010", "00100000000000001000", "01000010000000000001", "01000000000000000010", "00000000011110000000", "00001000000010000000", "00000100000000100010", "00001000001111000100", "00010000000000000001", "00000000100000000000", "01000000000000000110", "00000100001110001000", "00101000001000010000", "00000000010100000000", "01010000000000010000", "00000000000010000000"};
    vector<string> count = {"98432194231632633456", "75233866262875616487", "13529218152259441113", "85776991657773893914", "83194458117363278967", "25275529134379191413", "78556989165637165943", "34179434561256459119", "34677124495142192277", "99895777844438439974", "68786758353378522427", "56645496784834358347", "63943227459647117161", "98823449423436385623", "22373638768582478188", "98856162789257193173", "59578124665773861789", "73481659119221257382", "94325884969665557782", "11398149415936759692"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> A = {"11111111111111111111", "10111111111111111111", "11011111111111111111", "10110111111111111110", "11111010101111111111", "11111111111111111111", "11111111011110111111", "11111111001111111111", "11111111111111110111", "11111111111010110111", "11111111111111111111", "01111111110110101111", "11011011111111011111", "11111100111011111111", "11100111011111111101", "11111101111010101111", "11111111011101111111", "11010110111111111101", "11110111111111111111", "11111111111101101111"};
    vector<string> B = {"11111111100101101111", "11011110111001011111", "11110111111111111111", "11111111111111111110", "01111111110111101110", "11111011111111111111", "10111111110111011111", "11111111111111111111", "11111111111111111111", "11111111011111111111", "11111111111111111111", "11111111111011110111", "11111101111110110111", "00111111111111111111", "10111111101111111011", "11111101111111111111", "10011101111101111111", "11101111111111111001", "11111010101111111011", "11101111111111111111"};
    vector<string> count = {"17263484168964656841", "55791758672972211141", "58771534225372312491", "61756241619832478123", "68424358795722725612", "42678352348221788843", "55255211536264816522", "82518923472155145199", "56168217989694376142", "55914574759265968126", "46812871341574159718", "79557848877718847157", "57128999366375884254", "74843248246399429653", "29297366154472169566", "48642513811833618294", "13996127784689674629", "98194161357133651956", "72121795533186197425", "71124576853156944865"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> A = {"00000000000000000000", "01000000000000000000", "00100000000000000000", "01001000000000000001", "00000101010000000000", "00000000000000000000", "00000000100001000000", "00000000110000000000", "00000000000000001000", "00000000000101001000", "00000000000000000000", "10000000001001010000", "00100100000000100000", "00000011000100000000", "00011000100000000010", "00000010000101010000", "00000000100010000000", "00101001000000000010", "00001000000000000000", "00000000000010010000"};
    vector<string> B = {"00000000011010010000", "00100001000110100000", "00001000000000000000", "00000000000000000001", "10000000001000010001", "00000100000000000000", "01000000001000100000", "00000000000000000000", "00000000000000000000", "00000000100000000000", "00000000000000000000", "00000000000100001000", "00000010000001001000", "11000000000000000000", "01000000010000000100", "00000010000000000000", "01100010000010000000", "00010000000000000110", "00000101010000000100", "00010000000000000000"};
    vector<string> count = {"17263484168964656841", "55791758672972211141", "58771534225372312491", "61756241619832478123", "68424358795722725612", "42678352348221788843", "55255211536264816522", "82518923472155145199", "56168217989694376142", "55914574759265968126", "46812871341574159718", "79557848877718847157", "57128999366375884254", "74843248246399429653", "29297366154472169566", "48642513811833618294", "13996127784689674629", "98194161357133651956", "72121795533186197425", "71124576853156944865"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> A = {"11000000010000100000", "00011000110001101110", "00101011000000110001", "10110111111101111101", "00000010010001100000", "00001101101000101011", "01101000110010011000", "00101110010111011110", "01000000000110111000", "11101011011001110101", "10100001011000101000", "01110000100010110101", "11111110000011001000", "01000110101011100000", "00001001100001000010", "01011010110000001100", "00001010100110011100", "11001001100111000010", "00001010010000100111", "01100100101011101110"};
    vector<string> B = {"01100000110001100100", "10101001001100100110", "01111011011110000100", "10101001100100100010", "01010111001111101101", "11010000101111100010", "10001000110111000011", "11010011110100000010", "01110101100000000011", "10011110101010110101", "10001110000000101100", "00000010001110110001", "01000010100010101100", "11100011000000111000", "00011100000010001000", "10100001001101001100", "11000011000110010011", "00101001101001010100", "01100100100100000010", "00010110010010111010"};
    vector<string> count = {"45473177449889259984", "85210879975428359998", "08459324904400638237", "79055653303298221421", "73835978809490954798", "95019164209581645272", "14077730351101123695", "44259685718850976533", "40034688846636533755", "78075763023956584255", "50780198586528148656", "51404216232116943332", "70609772917717697986", "08794390377667575851", "89439368404150530042", "20531409569277195527", "60006490768314588726", "17327906043491396253", "35996387934384998290", "64224902999515356130"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"00111111101111011111", "11100111001110010001", "11010100111111001110", "01001000000010000010", "11111101101110011111", "11110010010111010100", "10010111001101100111", "11010001101000100001", "10111111111001000111", "00010100100110001010", "01011110100111010111", "10001111011101001010", "00000001111100110111", "10111001010100011111", "11110110011110111101", "10100101001111110011", "11110101011001100011", "00110110011000111101", "11110101101111011000", "10011011010100010001"};
    vector<string> B = {"10011111001110011011", "01010110110011011001", "10000100100001111011", "01010110011011011101", "10101000110000010010", "00101111010000011101", "01110111001000111100", "00101100001011111101", "10001010011111111100", "01100001010101001010", "01110001111111010011", "11111101110001001110", "10111101011101010011", "00011100111111000111", "11100011111101110111", "01011110110010110011", "00111100111001101100", "11010110010110101011", "10011011011011111101", "11101001101101000101"};
    vector<string> count = {"45473177449889259984", "85210879975428359998", "08459324904400638237", "79055653303298221421", "73835978809490954798", "95019164209581645272", "14077730351101123695", "44259685718850976533", "40034688846636533755", "78075763023956584255", "50780198586528148656", "51404216232116943332", "70609772917717697986", "08794390377667575851", "89439368404150530042", "20531409569277195527", "60006490768314588726", "17327906043491396253", "35996387934384998290", "64224902999515356130"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"11111110111011101111", "11011111110101111110", "11001111111001110111", "11111111110011111111", "11110100110111010101", "11111111111111010110", "11111111111101111110", "11110111100111111011", "11111111111110011101", "11110101110001111101", "01111111101101111111", "10111101011111111101", "11001111111101111110", "11111111111111111111", "11101100101101111011", "11111111011111110111", "11110011110111110111", "10101111111011011111", "11111111111111011111", "01011101111011110111"};
    vector<string> B = {"10111110111111111011", "11011110111111110110", "11101111111011111001", "01101101111010111101", "11111111111101111010", "11011111101111111111", "11111111011111011011", "10111111111001111001", "11110110111101111101", "11111111111111111100", "11101111101101110111", "11111111110111101110", "11111101110011111111", "10101001111111111111", "11011101111111111101", "11111111110010011100", "11011111111111110001", "10111111111101111101", "01111111101011111111", "01111111111111111100"};
    vector<string> count = {"17744124487404852184", "09099747010721631687", "44422592875178611149", "26967165144848435117", "95820807840769223172", "40826360594827592026", "03915716501633533402", "48844432475015732796", "92714892176795989302", "15506696474396584052", "56294637070604342288", "68500006670597804635", "57154358463838408078", "25863915457886634809", "36058157273735821816", "73691092163294760850", "18616530422574721967", "00861126376495007656", "95928856824640511413", "49816637164397920387"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> A = {"00000001000100010000", "00100000001010000001", "00110000000110001000", "00000000001100000000", "00001011001000101010", "00000000000000101001", "00000000000010000001", "00001000011000000100", "00000000000001100010", "00001010001110000010", "10000000010010000000", "01000010100000000010", "00110000000010000001", "00000000000000000000", "00010011010010000100", "00000000100000001000", "00001100001000001000", "01010000000100100000", "00000000000000100000", "10100010000100001000"};
    vector<string> B = {"01000001000000000100", "00100001000000001001", "00010000000100000110", "10010010000101000010", "00000000000010000101", "00100000010000000000", "00000000100000100100", "01000000000110000110", "00001001000010000010", "00000000000000000011", "00010000010010001000", "00000000001000010001", "00000010001100000000", "01010110000000000000", "00100010000000000010", "00000000001101100011", "00100000000000001110", "01000000000010000010", "10000000010100000000", "10000000000000000011"};
    vector<string> count = {"17744124487404852184", "09099747010721631687", "44422592875178611149", "26967165144848435117", "95820807840769223172", "40826360594827592026", "03915716501633533402", "48844432475015732796", "92714892176795989302", "15506696474396584052", "56294637070604342288", "68500006670597804635", "57154358463838408078", "25863915457886634809", "36058157273735821816", "73691092163294760850", "18616530422574721967", "00861126376495007656", "95928856824640511413", "49816637164397920387"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"10101000110111100100", "01010011000001101101", "01010001110011100111", "10110001101010101001", "10000111110011011000", "01000111011100011000", "11100101011011110101", "10000101110111110111", "01011101101000110010", "11011000101011110000"};
    vector<string> B = {"11101001101010010110", "10110011001001101111", "10100101000011011011", "11100010011011110011", "01001010111111011100", "01110110011111000100", "01110010000100100011", "00100101010110000110", "01001100111010100111", "01001001010110010111"};
    vector<string> count = {"94785471376536998385", "98536772214648478345", "19489929534416841364", "78626223513263427666", "66352969199522249871", "15865184277766571168", "27574118596551831743", "55675675968125643986", "99961582973711254786", "43997714317454614985"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> A = {"00000101000001000", "00100111011000000", "00000010000001001", "00100000000000001", "00000001100010001", "00001001010000100", "01000100100000010", "01000101001000001", "00001000000101100", "00000110100010010", "00001010000000011", "10011000111000100", "11100001110011000"};
    vector<string> B = {"00000010000001100", "01000000110000001", "01010011010110101", "00111010110000100", "10000111000000100", "10000001001100000", "00010111000001000", "01000100000010100", "01000100000001110", "00001000000101100", "10000100001000010", "00001000100000000", "10000000000100010"};
    vector<string> count = {"25456766897916718", "14234539382498977", "32233284798137335", "39192215938115522", "87177635986929341", "17853155524689273", "66797235483879815", "63687749152228544", "28887763333255925", "75894383328219332", "61577941725985891", "34144829175683721", "73182376693339892"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> A = {"0000", "1010", "0000", "0001"};
    vector<string> B = {"1000", "0100", "0001", "0000"};
    vector<string> count = {"8771", "9533", "0302", "7065"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"00111000100101111", "11011000100111100", "00011111111111011", "11011001001111101", "10000110011011001", "01101000101110000", "10001111111001010", "01011000100110111"};
    vector<string> B = {"11011011110101110", "01101110111011001", "10000111110001110", "01110110001100100", "00110110011010110", "10111001101001100", "11010101100011011", "01001011000001111"};
    vector<string> count = {"69553984559093977", "64603094954354628", "19126559617372604", "29073414776991720", "44806408372525216", "67197427696347782", "08911045274988873", "14655369614969907"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"1101", "0100", "1000"};
    vector<string> B = {"1010", "0110", "1000"};
    vector<string> count = {"6529", "8956", "8263"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> A = {"10011011000110010", "00010000000001100", "00010001001111111", "10000100010010001", "01100011100000000", "00000100011010001"};
    vector<string> B = {"11110000001010101", "00000110001100101", "00000000010000110", "00110000100000101", "11011001000110000", "11010010000011000"};
    vector<string> count = {"66573691264864339", "39722117545583955", "99774638654694181", "77473111834479773", "15957227132873738", "55718157158143526"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> A = {"1011", "1111", "1111", "1111", "1110", "1111", "1111", "1111", "1111", "0111", "0111", "1111", "1111", "0111", "1111", "1111", "1111"};
    vector<string> B = {"1111", "1111", "1011", "1110", "1011", "1111", "0101", "1111", "1111", "1111", "1111", "1111", "1111", "1111", "1111", "1111", "1111"};
    vector<string> count = {"5688", "0141", "2606", "4212", "1871", "5078", "4163", "9692", "3565", "0501", "7000", "4996", "6419", "0379", "3894", "0588", "8867"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> A = {"000", "000", "100", "000", "000", "000", "000", "000", "000", "000", "100", "000"};
    vector<string> B = {"000", "010", "000", "000", "001", "000", "000", "000", "000", "000", "000", "000"};
    vector<string> count = {"132", "447", "762", "705", "214", "072", "213", "509", "697", "874", "044", "620"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> A = {"0100000010", "0000000000", "0000000000", "0000000000", "0000000000", "0000000100", "0000000000", "0000000000", "0000000001", "0000000000", "0000000100", "0000000000", "0000000000", "0000000000", "0000000000"};
    vector<string> B = {"0010000000", "0000000000", "0000001000", "0000000000", "0000000000", "0000000010", "0010000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000000", "0000000010", "0000000000", "0000000000"};
    vector<string> count = {"2289993494", "1388373186", "7335667478", "6615316722", "3239428648", "3258149357", "9953215689", "2633781676", "1659583818", "9853758718", "3345355877", "3341543114", "7938355963", "7974945183", "6378594553"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> A = {"11111011011111011", "11111111111111111", "11110111111111111", "11101000111111111", "11011110000001111", "11101101011010111", "11110111111101110", "11111111111111111", "11011111110110111", "11101111011001111", "11111110110111111"};
    vector<string> B = {"10111111110111111", "11111111111011110", "11011111011101111", "11001011011011111", "11111111111101100", "11011011111101110", "11101111111111011", "11100111111101111", "01111011111111111", "10111111111110001", "11111110110111111"};
    vector<string> count = {"37174122166244514", "27371544971851418", "65981151394758465", "75557462179436646", "26362163239587836", "76319418763122146", "81754259783597216", "96118299126775536", "31669575315725793", "12663554654368711", "74358122518323812"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> A = {"101", "000", "000", "011", "010", "100"};
    vector<string> B = {"000", "100", "001", "001", "101", "010"};
    vector<string> count = {"836", "222", "925", "935", "779", "175"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> A = {"11111101", "11111111", "11111111", "11111111", "11111111"};
    vector<string> B = {"11111111", "11111111", "11111111", "11111111", "01111111"};
    vector<string> count = {"10524689", "52520299", "71868344", "17031040", "31359342"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> A = {"111", "110", "111", "101", "110", "110", "111", "111", "001", "110", "100", "011", "110", "000", "110", "111", "111", "111", "111", "101"};
    vector<string> B = {"100", "111", "101", "011", "110", "101", "000", "111", "010", "111", "011", "111", "011", "101", "111", "111", "111", "101", "101", "111"};
    vector<string> count = {"536", "556", "286", "228", "010", "033", "490", "240", "996", "617", "500", "754", "674", "598", "022", "446", "534", "334", "366", "183"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> A = {"0100111010", "0000001111", "0000000101", "0100001100", "1111110100", "0001100000", "0100000011", "0110001010", "1100101000", "1011100110", "0000110101", "1010010010", "0100111100", "0000000000", "1000010110"};
    vector<string> B = {"0000000000", "0010111110", "0010011101", "1000010010", "0010000011", "1001101001", "1000000001", "0100001001", "0101111100", "0111101100", "0100000000", "0010000000", "0111100001", "0001110111", "0100101101"};
    vector<string> count = {"4916142831", "0032194112", "4189841543", "2574625335", "8967189790", "2199198434", "7492164067", "9073471475", "2265738787", "2788905899", "7244101104", "9666592790", "5950411263", "2088566918", "7493503704"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> A = {"01000010000001101", "00101100011001100", "10101101011000010", "00110001101101101", "10111100000100100", "10000000011010001", "10001111101111011", "00100011010000000", "10100101000011101", "10100001100010100", "11000100000110000", "00000000100100100", "01101100000001011", "10000100000000001", "00001001001000011", "00100011001110100", "00011000010110001", "00000000001000000", "00000001000000100"};
    vector<string> B = {"10000000000000001", "00001000110100000", "00101010001111100", "10001100010001101", "00000110100100011", "10110110010001010", "01100101100000000", "00100001001000111", "00000001001100001", "01001011000010001", "00001011110000011", "00100010100000000", "01110111001010010", "00001100010011111", "00110001110011001", "01001011001110000", "00000110000111100", "10000010000000011", "00000001000010000"};
    vector<string> count = {"31937070516510154", "62279261902372150", "24299670796002013", "70264725155391920", "81532829104851746", "89346479928206844", "05011554670295082", "22459687404407777", "24177223179313888", "21071111190289937", "53347126383006660", "66062684796320280", "51095196169214957", "37499954270367368", "39293940722157128", "58132105836617176", "38611464399139293", "94165334265367520", "94203444096219639"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"0111111101100101", "1111100111111011", "1011110111001100", "1101001110110111", "0100111110111111", "1110010111111110", "1011111110111111", "1110010111011111", "1110111111111001", "1010111111111101", "0111101111111111", "1111111111111011", "1011111111111011", "1111011110111011"};
    vector<string> B = {"0111100110100011", "0111111101001111", "1111111111111101", "1101110011111111", "1111110111011111", "1111100111100111", "1111111111111001", "1001101011111111", "0011111111011101", "1101011111111101", "1011111111001111", "0111101111111011", "0110101111111011", "1011110101111111"};
    vector<string> count = {"4271137099934324", "7682116497388857", "0372144273579740", "3379845914975060", "8137746639026458", "7518950655714717", "2961475735522540", "4165596181065294", "1546236607100528", "3690980653781656", "3031480087077694", "1908477305113094", "7279340645977157", "7721992117931806"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> A = {"010000000000000000", "000000000000000100", "000000000000000000", "000000000000000000", "000001000000000000"};
    vector<string> B = {"000010000000000000", "010000000000000001", "000000000000000000", "000000000000000000", "000000000000000000"};
    vector<string> count = {"845238121966827367", "473692977719112245", "744658167749491913", "946494642594513665", "267495547998873877"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> A = {"0000000000000001", "0000001100000000", "0000110000000100", "1000101000000000", "0010000000000000", "0010000001101000", "0000000000000100", "0010000000000000"};
    vector<string> B = {"0000000000000000", "0001111000000000", "0000000000001010", "0010000010000000", "0001000000000011", "0000000000000000", "0000000010010000", "0000011000000001"};
    vector<string> count = {"1561973968257467", "0944155116329792", "5764885483519007", "7435636589117935", "1120242434893637", "4376343205592778", "6184226825809386", "3703287405201518"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> A = {"010"};
    vector<string> B = {"100"};
    vector<string> count = {"959"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> A = {"000110111101101010", "111011111000000000", "110110001101111000", "000010111110110010", "101011100100010001", "000100110110001110", "010110000101101010", "010001110000100011", "001011001001000010", "001001101011001110", "011110111000011100", "010100011101010011", "100000010001011110", "001001110001100010", "000110010011101100", "001010111111100001"};
    vector<string> B = {"111110000010111111", "000010011110000110", "100110011010110110", "100101000011000110", "100100001011101100", "011001101011101110", "101011111000000001", "111100011110001101", "111010011011010100", "000000001100111110", "010111001000001001", "000000110101100110", "011100101001000111", "010010010100000011", "000111100100001100", "000101010001001011"};
    vector<string> count = {"313962134889006169", "957348150085724309", "908449098901829585", "843830291222386943", "582832979925536384", "224145270542935004", "154843228517086290", "336699860778832554", "633437925368494012", "450322718215558693", "543140042126701402", "573952356140962462", "864706877334581921", "570984321033218656", "692024236553377841", "884866272191029653"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> A = {"0110011000011101", "1110100010010110", "0000111011110100", "0010010010110011", "0101011110110111", "0011011000010001", "1001001010001001", "1010101001101001", "0000111011101010", "0011000010001110", "1000111110010111", "1101001000010100", "1010010110111111", "0101010000111011", "1010100111001100", "1010110000100100", "0100100100101100"};
    vector<string> B = {"1001111011000101", "0011000010110001", "1110001000101001", "1011110000100110", "1111000001011100", "0000010001011110", "1000111110101110", "0101010100110010", "1011010001000000", "0101110110000001", "0100010001111100", "1000100110110011", "0111100100100110", "1110010000010010", "1011110010101100", "0001111001001110", "0110111011111011"};
    vector<string> count = {"5598572339543258", "2122846121983823", "7611795296625271", "4778324999634283", "9819126257123288", "8757658163236485", "6721741669261222", "7656258625947613", "8723314148623983", "3824549495642772", "6797535664778514", "4531184265714455", "5871313156789842", "5695768681315149", "6954753579599154", "2427436899163644", "6738774697269385"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> A = {"0", "0", "1", "1", "0", "1", "0", "1"};
    vector<string> B = {"0", "0", "1", "0", "0", "1", "1", "1"};
    vector<string> count = {"8", "2", "1", "9", "8", "5", "9", "4"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> A = {"10010101", "01010111", "01110001", "01101000", "10001000", "11000001", "11001011", "01110010"};
    vector<string> B = {"11111001", "11011010", "00000000", "01010101", "11000010", "10000010", "00110111", "11100110"};
    vector<string> count = {"21897256", "82946435", "31365867", "54186841", "72284464", "21921248", "67598512", "73638325"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> A = {"11111100110101", "11011111111011", "11011101110001"};
    vector<string> B = {"10110100100100", "11111111110111", "11111111001111"};
    vector<string> count = {"73065591690715", "86656825744425", "17515259320089"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"01", "10", "00", "00", "00", "00"};
    vector<string> B = {"00", "01", "00", "01", "00", "00"};
    vector<string> count = {"06", "11", "49", "83", "12", "40"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> A = {"00100011", "11110000"};
    vector<string> B = {"01001010", "10101001"};
    vector<string> count = {"78431413", "82812448"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> A = {"00", "00", "01", "00", "00", "10", "00", "00", "10", "00", "00", "00", "11", "10", "00", "00", "00", "10", "00", "01"};
    vector<string> B = {"01", "01", "00", "00", "00", "00", "01", "00", "00", "00", "00", "10", "00", "00", "00", "10", "01", "10", "00", "10"};
    vector<string> count = {"85", "23", "69", "44", "33", "71", "58", "23", "26", "76", "00", "51", "19", "01", "25", "35", "67", "16", "88", "84"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> A = {"111111111", "111011111", "111100111", "111111111", "111111111", "111111111", "111111011", "111111111", "111111110", "111111111", "111111111", "111111111", "111011111", "111111111", "111110111", "111111111"};
    vector<string> B = {"111110111", "111110111", "111111111", "111111111", "111111111", "111110110", "111111111", "110111111", "111111111", "111111111", "111111111", "111111111", "111101111", "111111111", "111111110", "111111111"};
    vector<string> count = {"823783568", "368663443", "326952624", "788223856", "659864476", "423313271", "888439448", "151414934", "843341163", "351491553", "844653899", "497468131", "976211434", "532882923", "576169377", "774116988"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> A = {"0010", "1001", "0000", "0000", "1100", "0000", "1100", "0000", "1111", "0110", "0001"};
    vector<string> B = {"0001", "0100", "0101", "1000", "0100", "0100", "0000", "1000", "1100", "0011", "1010"};
    vector<string> count = {"7178", "7483", "3678", "5969", "6326", "9591", "9736", "3921", "6162", "7743", "7312"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> A = {"00000000000000", "00010000000000", "00000000000000", "00000000000010", "00000000000000", "00000100000000"};
    vector<string> B = {"00000000000000", "00000000000000", "00000000000000", "00000000100001", "00000000000000", "10000000000000"};
    vector<string> count = {"97851318587671", "26544222888883", "74144343958334", "36614219556717", "53272877359437", "85873219762163"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> A = {"0", "1", "1", "0", "0", "1", "0", "1", "1", "1"};
    vector<string> B = {"1", "0", "0", "0", "1", "1", "0", "1", "1", "1"};
    vector<string> count = {"9", "5", "1", "4", "4", "4", "1", "7", "9", "3"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> A = {"10000000000000", "00000000100000", "01000000000100", "10000000110000", "00001000000000", "00000000000000", "00000001000000", "00000000001000", "00001000010000", "00000000000000", "00000100000000", "00000000000000", "00000000000000", "00000000000000", "00000000000000", "00000000000000", "00000000000000", "00000000000000", "00000000000000", "00000000000000"};
    vector<string> B = {"00101000001000", "10000000000000", "00000000000000", "00100000000100", "00000000010000", "00000000000000", "00000000000000", "00000000000000", "00000000000000", "00000000000000", "00000000000000", "00010011000000", "00000000000000", "00000000000000", "00000001000010", "00000000000000", "00000000000000", "00000100000000", "00000000000000", "00000000000000"};
    vector<string> count = {"49659028670977", "01324703445798", "75269855734065", "58073791132432", "01518449329887", "80918591161558", "84005369485706", "87796420189533", "22219537135618", "01682421213188", "90437651271508", "68774289279394", "85392345464436", "19345053063522", "59709102944554", "83381886119422", "76519904199497", "61204642352137", "17041660786393", "81627393052836"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> A = {"0", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "0", "0", "1", "1", "1"};
    vector<string> B = {"1", "1", "1", "0", "1", "1", "1", "0", "0", "1", "1", "1", "1", "1", "1", "1"};
    vector<string> count = {"5", "6", "1", "2", "0", "9", "1", "9", "4", "8", "9", "3", "9", "7", "2", "0"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"11101001", "01111100", "00010011", "11000001", "10001110", "01011000", "01000001", "10111111", "11011101", "11101110", "00101011", "11101110", "10111110", "01111010", "10001101", "01010100", "01011111", "11001100", "01101010"};
    vector<string> B = {"11101101", "10111110", "11000100", "01110010", "00101101", "11011101", "00110001", "01001111", "01111001", "10000100", "11110101", "10011010", "01010110", "10101110", "11111001", "01111101", "01100000", "00101111", "00010111"};
    vector<string> count = {"98669046", "99280414", "78144548", "31356900", "54078811", "11702478", "51922659", "30675510", "17166808", "07850189", "85262675", "99363719", "78431615", "21103909", "67387614", "87011258", "66212389", "73735464", "44956693"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"11101101010111", "11111101101111", "11101011100011", "11111111111011", "11111111111110", "11101110111111", "11110101111011", "11100111011111", "11010111111111", "11111011111001", "11010111111101", "11111111111111", "01111111110111", "01101111111111"};
    vector<string> B = {"11011111111011", "11111111110111", "11111111111110", "11111110011111", "01111110101111", "11000010111111", "01111111011101", "01111111111111", "11111111111111", "11011111111011", "11101101111101", "10001101111111", "11101111111011", "11011111100101"};
    vector<string> count = {"49215886331687", "32732291253651", "44199943183247", "67883351568795", "14862584197423", "12395985479767", "27531157196225", "85766656184858", "91586351928875", "98652484946732", "45869354872311", "74193659936362", "47216817496331", "65348991893263"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> A = {"01000100000110", "01000000101001", "01000000100100", "00010000000000", "00000111010000", "01010000000000", "00000010000000", "10000000001100", "01000101001011", "10000010010100"};
    vector<string> B = {"00000000000001", "10000000001000", "00010000001000", "00010001101110", "10110010110000", "10110000010010", "00000000010000", "00000110010010", "00100000100100", "10000000100000"};
    vector<string> count = {"38933942642477", "08675711507385", "45470906512480", "79606164593093", "97149483860780", "66750173162927", "18353190893925", "38061090593290", "28406736821012", "45313563807327"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> A = {"1011101", "1111110", "0010001", "0101001", "1111111", "0101000", "1000110", "1011011"};
    vector<string> B = {"1000110", "1110111", "1010111", "0010100", "1010111", "1101110", "0001101", "1001011"};
    vector<string> count = {"9471895", "4825339", "2584464", "5494668", "2765621", "3767571", "4483722", "4448526"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> A = {"01000", "01111", "01000", "01100", "01001", "00000", "00100", "00000", "10000", "11001"};
    vector<string> B = {"10100", "10100", "00011", "01100", "00000", "10000", "00010", "00100", "00100", "01011"};
    vector<string> count = {"90965", "70686", "55544", "53312", "59232", "16203", "24022", "73711", "03432", "53756"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"11111111111110111100", "10111111111111111101", "10111001101100111111", "11111111101110111111", "11101111111101111111", "11111101111011010110", "11101111111111111111", "01101111111101111101", "11110011110111010111", "01111111111111111011", "11110111011101111110", "11111110011100011111", "11111111101111011001", "11011111111111111111", "11111111111111101101", "11111001111111110111"};
    vector<string> B = {"11001111111111101011", "11011011101111110111", "11111111111111111101", "01111111000011011010", "11001101111011111111", "11111111110111111101", "11110110111111111111", "11011111111111011111", "10111111111110111111", "01101111101110111111", "11111111111111111100", "00111111111111111011", "01111110111110111111", "00111111110111110011", "11111111101111101111", "01001111111111111111"};
    vector<string> count = {"72533656366765566926", "38143494749614298442", "92828211898216168292", "52792377334832271537", "81795748228444936613", "27935413723753488932", "27996368592341239218", "96655413835667112565", "66865637415314363621", "83626717375578586719", "41314826688578462532", "77963852698997747845", "59369232567237984981", "75826838268865712668", "94487243779696198212", "67731483482261179254"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> A = {"00", "00", "00", "00", "00", "00", "00", "10", "10", "10", "10", "00", "00"};
    vector<string> B = {"00", "00", "00", "10", "01", "01", "00", "00", "00", "10", "00", "00", "00"};
    vector<string> count = {"48", "93", "23", "12", "78", "45", "48", "95", "89", "56", "59", "84", "15"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> A = {"0011001000001101"};
    vector<string> B = {"0010101010110000"};
    vector<string> count = {"8882973718542245"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"0100100", "0100000", "1000001", "0000000", "1011000", "0010000", "0000111", "0100000", "0000000", "0000101", "0000001", "0000010", "0000000", "1000001"};
    vector<string> B = {"0110001", "0001000", "0011100", "1001100", "0000000", "1000100", "1000000", "0000001", "0000000", "1000000", "0001001", "0001000", "0000000", "0100000"};
    vector<string> count = {"5929912", "8392193", "1445149", "6658711", "5621272", "3565773", "5943756", "9568877", "1433556", "4255817", "9745861", "1141683", "4423863", "1544937"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> A = {"000000000000000", "000000000100000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000"};
    vector<string> B = {"001000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000", "000000000000000"};
    vector<string> count = {"792732640299473", "631111285504420", "973895631526810", "261750099785523", "409440674547061", "749057669436742", "803636272411896", "263601596396987", "752758266427030", "218705335248283", "164752125419552"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> A = {"101001011011", "111101101001", "011111111111", "100111000101", "011111101101", "001110111011", "111101111101"};
    vector<string> B = {"111110011110", "111111010101", "101100011100", "101010101111", "101011111011", "101110110110", "111010111111"};
    vector<string> count = {"391653482244", "125279887148", "170577478846", "599246894390", "053589855921", "967617740562", "759356554334"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> A = {"0000001100000000000", "0100000000011000000"};
    vector<string> B = {"0000000000000001000", "0000100001000010010"};
    vector<string> count = {"2354355985623652468", "5623741989971467561"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> A = {"111110", "011111", "111101", "111111", "100111", "111111", "111111", "110111", "111001", "111111", "011011", "110001", "111111", "110110", "111110", "111101", "001001"};
    vector<string> B = {"111111", "001111", "111111", "011111", "101101", "111110", "110111", "101001", "111111", "010111", "101110", "001011", "011111", "001111", "111111", "111111", "111101"};
    vector<string> count = {"023456", "033385", "873768", "611236", "254008", "288849", "780705", "949397", "236277", "070415", "673910", "236856", "327089", "877016", "941291", "065992", "847422"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> A = {"1", "0", "1", "1", "1", "0", "1", "0", "1", "1", "0", "1", "0", "1", "0", "1"};
    vector<string> B = {"1", "0", "0", "1", "0", "1", "1", "0", "0", "1", "0", "1", "1", "1", "1", "1"};
    vector<string> count = {"6", "8", "6", "7", "8", "6", "5", "8", "6", "9", "4", "7", "9", "6", "8", "1"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> A = {"111111", "101111", "111110", "111111", "111111", "101111", "111111", "111110", "111110", "110011", "011111"};
    vector<string> B = {"110111", "111111", "001101", "111101", "111111", "111111", "111111", "110111", "111111", "111111", "110101"};
    vector<string> count = {"106165", "869371", "221417", "633449", "525867", "084542", "995079", "670223", "507629", "665058", "300433"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> A = {"1001111111101", "1111111001111", "1010111101111", "0011111101111", "1101101010111", "1111011111111", "1101111111110"};
    vector<string> B = {"1111111110111", "1011111101101", "1011011111111", "0011010111111", "1100111101101", "0111111011111", "0111111101111"};
    vector<string> count = {"7638625317547", "8181424751375", "3793476864242", "2687494628234", "2519485164551", "1819117284355", "1492163926572"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> A = {"11111111", "11111111", "10111111", "11111111", "11111101", "11111111", "01111111", "10111111", "11111111", "11111111"};
    vector<string> B = {"11111111", "11110111", "11111101", "10111111", "11111111", "11111111", "11111111", "11111111", "11111110", "11111111"};
    vector<string> count = {"62817890", "86746147", "95363997", "29206136", "22647017", "26466193", "13451301", "85022763", "17747339", "31156032"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> A = {"000000000000110001", "000010010001100110", "000000000001001010", "001010010000011000", "100010000000000000"};
    vector<string> B = {"011000000000111110", "000011000001000100", "001000000001001000", "110000000000000000", "000100100000000001"};
    vector<string> count = {"593903209700427882", "916394336672325639", "605911406924747301", "689233836048245265", "870124244569991949"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> A = {"101001", "011110", "011111", "111101", "010110", "111111", "010110", "011011", "101011", "010110", "101111", "001111", "101100", "111110", "110001", "111110"};
    vector<string> B = {"001011", "111111", "111011", "110011", "111101", "111101", "011110", "101111", "111000", "010101", "010011", "011111", "011000", "111111", "000111", "001011"};
    vector<string> count = {"797685", "871788", "934921", "378177", "341183", "498913", "397797", "296718", "461485", "176113", "544817", "547259", "743866", "177857", "874871", "125581"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> A = {"001111110111011111", "011001100100011111", "000110011100111111", "111100011101011011", "010111100111110111", "111111010100111011", "101010110111101101", "110101111110010110", "111000111011101110", "101100111001111110", "111110100101011001", "010101101111000101", "100111010101100111", "110011011111000011", "001001111011101101", "111100011111101110", "010111111101011111", "101110110111111101", "011111011110011100"};
    vector<string> B = {"011101101110111011", "010101111011111110", "111111111010101011", "001110111100111111", "110111101111101101", "111111011000001110", "011001111110001000", "101001011001111111", "000010111001110111", "111110001000111111", "010010011110111111", "011110001010111101", "111110111001100111", "110110111001111110", "110110000111100111", "001011101000011101", "111111111110111101", "101101110111110001", "111010010110110010"};
    vector<string> count = {"837034521592867158", "124798096886530319", "559259995238644885", "481610988001101664", "216686162313614459", "274953936016604174", "133231887554357232", "952485206912563485", "913830069020493071", "090022759381618536", "298460803724436243", "451659898580810100", "048186807912421704", "818153042585556825", "955595113749421921", "192965260297766866", "726876958814290169", "095506116613891005", "629202216047245633"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"01001", "11000", "00000", "00000", "00000", "00000", "00000", "10110", "00000", "00100", "00000", "01000", "00000", "10000"};
    vector<string> B = {"00000", "00100", "00000", "00100", "00010", "01101", "10000", "00000", "00000", "01000", "00000", "01000", "00010", "00000"};
    vector<string> count = {"73552", "69935", "71477", "46886", "31731", "13271", "62573", "74596", "62292", "25313", "83749", "45159", "85142", "85254"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> A = {"11111110110", "11111100111", "01110111110", "01111111101", "11111111111", "01101111111", "01111111111", "11110111101", "11011111011", "11110110111"};
    vector<string> B = {"01111111111", "11111011101", "01011110111", "01111111111", "11111101101", "11111111111", "10110101111", "11111110111", "11110110111", "01101110111"};
    vector<string> count = {"63476396882", "36977941344", "59945848463", "13462546754", "42463452177", "62433924548", "39937282423", "55344558238", "97181318376", "39198876917"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> A = {"0110111110111111100", "0101110010001011100", "1011111110001110100", "1011010001011111101", "0011101011101101111", "1010111111000011110", "1101111001000011111", "1010101110011101111", "1001011111111111110", "1011011010111111101", "1100111111111111011", "1110110101111011011", "1011111011111110111"};
    vector<string> B = {"1111111001111101110", "0111100101110111111", "0101101001101101110", "1111111011101100101", "1101111011000111001", "1001111110110111111", "0100100101101011010", "1111010111111110110", "1111011111111010111", "1110100011111111000", "0110111101111001011", "1111111000111110100", "0111101111101101001"};
    vector<string> count = {"7737744894165281898", "9296283415641355355", "2881676828824293589", "5295231914269415653", "2974481758224696546", "7698229322661792123", "1921923456976168917", "4129273988858187418", "9978129153363466323", "6314235285163356779", "7541184638542734294", "4855943982684314181", "4915795865192547535"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> A = {"000000010000", "000000000100", "000000000000", "000000000000", "001000000000", "000000000000", "000000000000", "001000100010", "000000100000", "000000000000", "000000000000", "000000000010", "000000100000", "001000010000", "000000000000", "000100000000", "000000000000", "000000001010", "000000000000", "000000000100"};
    vector<string> B = {"000000010001", "000000000100", "000000000001", "000000000000", "000000000000", "000001000000", "000000000000", "000000000000", "000000000000", "100000000100", "001000000000", "000010000000", "000000000000", "000010000000", "000000000000", "000100000000", "010000000000", "000000000010", "000000000001", "000001000000"};
    vector<string> count = {"606087023437", "525927909642", "572519685191", "001760411813", "476269321961", "985538097910", "564420755832", "224406156847", "020747290054", "203602984060", "140632360258", "744328368214", "641800142280", "656312995170", "629892889356", "785582730451", "204324982860", "177610354505", "920992163119", "995391686581"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"1111111", "1111101", "1100110", "1111011", "1101101", "1100011"};
    vector<string> B = {"1011110", "1100111", "1111111", "1101110", "1011111", "1101001"};
    vector<string> count = {"2956761", "2524728", "4165259", "8467993", "1821782", "6735613"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> A = {"000000000000000000", "000000000000000000", "000000000000010000", "000000000100000000", "000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000", "010000000010000000"};
    vector<string> B = {"000000000000000000", "010000000000000000", "000000000000000000", "000000100000000000", "000000000000000000", "000000100000000000", "000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000", "000000100000000000"};
    vector<string> count = {"682518474386926874", "972353162257525295", "113482545245576118", "889634536333221834", "142118683669976731", "224161137776155169", "361541984874257631", "526261947257429375", "855177716823939939", "123191162926749962", "286441112951938975", "867212746185476244"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> A = {"1111", "1111", "1111", "1111", "1111", "1111", "1111", "1101", "1011", "1111", "1111", "1111", "1111", "1101", "1111"};
    vector<string> B = {"1111", "1111", "1111", "1111", "1111", "1111", "0111", "1111", "1111", "1111", "1011", "1111", "1111", "0111", "1111"};
    vector<string> count = {"8525", "8848", "2842", "8475", "2675", "6885", "1394", "8634", "6466", "8219", "8319", "7341", "4185", "7788", "6998"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> A = {"11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111"};
    vector<string> B = {"00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000"};
    vector<string> count = {"99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> A = {"00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000"};
    vector<string> B = {"11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111"};
    vector<string> count = {"99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> A = {"11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111"};
    vector<string> B = {"11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111"};
    vector<string> count = {"99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000"};
    vector<string> B = {"00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000"};
    vector<string> count = {"99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> A = {"01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010"};
    vector<string> B = {"11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000"};
    vector<string> count = {"10101010101010101010", "21212121212121212121", "32323232323232323232", "43434343434343434343", "54545454545454545454", "65656565656565656565", "76767676767676767676", "87878787878787878787", "98989898989898989898", "98989898989898989898", "87878787878787878787", "76767676767676767676", "65656565656565656565", "54545454545454545454", "43434343434343434343", "32323232323232323232", "21212121212121212121", "10101010101010101010"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 810;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> A = {"10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101"};
    vector<string> B = {"01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010", "01010101010101010101", "10101010101010101010"};
    vector<string> count = {"99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> A = {"00000000000000000001", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000"};
    vector<string> B = {"00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000001"};
    vector<string> count = {"22222222222222222221", "20000000000000000000", "22222222222222222222", "00000000000000000002", "22222222222222222222", "20000000000000000000", "22222222222222222222", "00000000000000000002", "22222222222222222222", "20000000000000000000", "22222222222222222222", "00000000000000000002", "22222222222222222222", "20000000000000000000", "22222222222222222222", "00000000000000000002", "22222222222222222222", "20000000000000000000", "22222222222222222222", "00000000000000000001"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> A = {"11111111111111111110", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111"};
    vector<string> B = {"11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111110"};
    vector<string> count = {"22222222222222222221", "20000000000000000000", "22222222222222222222", "00000000000000000002", "22222222222222222222", "20000000000000000000", "22222222222222222222", "00000000000000000002", "22222222222222222222", "20000000000000000000", "22222222222222222222", "00000000000000000002", "22222222222222222222", "20000000000000000000", "22222222222222222222", "00000000000000000002", "22222222222222222222", "20000000000000000000", "22222222222222222222", "00000000000000000001"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> A = {"00000000000000000001", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000"};
    vector<string> B = {"00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000001"};
    vector<string> count = {"99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> A = {"11111111111111111110", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111"};
    vector<string> B = {"11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111110"};
    vector<string> count = {"99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> A = {"10", "00"};
    vector<string> B = {"00", "01"};
    vector<string> count = {"11", "11"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> A = {"110"};
    vector<string> B = {"011"};
    vector<string> count = {"111"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> A = {"11011111111111111111", "11111011001111011111", "11111011111111111111", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000"};
    vector<string> B = {"00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "11110111111011111111", "11111111111111110011", "11111111001111111111"};
    vector<string> count = {"99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 918;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> A = {"10011001100110011001", "10011001100110011001", "10011001100110011001", "10011001100110011001", "10011001100110011001", "10011001100110011001", "10011001100110011001", "10011001100110011001", "10011001100110011001", "10011001100110011001", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000"};
    vector<string> B = {"00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "10011001100110011001", "10011001100110011001", "10011001100110011001", "10011001100110011001", "10011001100110011001", "10011001100110011001", "10011001100110011001", "10011001100110011001", "10011001100110011001", "10011001100110011001"};
    vector<string> count = {"99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"10000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000"};
    vector<string> B = {"00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000001"};
    vector<string> count = {"12222222222222222222", "11111111111111111112", "22222222222222222222", "21111111111111111111", "22222222222222222222", "11111111111111111112", "22222222222222222222", "21111111111111111111", "22222222222222222222", "11111111111111111111"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> A = {"01110", "10001", "10001", "00001"};
    vector<string> B = {"01110", "10001", "10001", "10000"};
    vector<string> count = {"12221", "21112", "21112", "11111"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> A = {"10101000100100101000", "10101000111111000000", "10100101000010100000", "01010010000000000000", "10101000100100101000", "10101000111111000000", "10100101000010100000", "01010010000000000000", "10101000100100101000", "10101000111111000000", "10100101000010100000", "01010010000000000000", "10101000100100101000", "10101000111111000000", "10100101000010100000", "01010010000000000000", "10101000100100101000", "10101000111111000000", "10100101000010100000", "01010010000000000000"};
    vector<string> B = {"11111100101010101001", "10101010101001010101", "10101010101001010000", "10101010101010100100", "10101010001010010101", "11111111111111111111", "00000000000000000000", "11010010101010100100", "11111100101010101001", "10101010101001010101", "10101010101001010000", "10101010101010100100", "10101010001010010101", "11111111111111111111", "00000000000000000000", "11010010101010100100", "11111100101010101001", "10101010101001010101", "10101010101001010000", "10101010101010100100"};
    vector<string> count = {"99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> A = {"11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000", "11110000000000000000"};
    vector<string> B = {"00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111", "00000000000000001111"};
    vector<string> count = {"99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 1280;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> A = {"10000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000"};
    vector<string> B = {"00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "10000000000000000000"};
    vector<string> count = {"12222222222222222222", "20000000000000000002", "20000000000000000002", "20000000000000000002", "20000000000000000002", "20000000000000000002", "20000000020000000002", "20000002202000000002", "20000220002000000002", "22222000002000000002", "00000000000200000002", "00000000000200000002", "00000000000200000002", "00000000000200000002", "00000000000090000002", "00000000999900000002", "00000000000000000002", "00000000000000000002", "00000000000000000002", "12222222222222222222"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> A = {"00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111", "00000111110000011111"};
    vector<string> B = {"11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000", "11111000001111100000"};
    vector<string> count = {"99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999", "99999999999999999999"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> A = {"000", "000", "100", "100", "100"};
    vector<string> B = {"000", "000", "001", "001", "001"};
    vector<string> count = {"999", "909", "909", "929", "909"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> A = {"100", "000", "000"};
    vector<string> B = {"001", "000", "000"};
    vector<string> count = {"101", "101", "111"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> A = {"10101001000101110101", "10000010101111010010", "10100101101001010100", "11101000111010111011", "10100101000101001010", "10010010001001010100", "10101001010000011111", "01010100010001001110", "10100101010101000010", "10100101010010101011", "10100110010101001010", "00100010010100101011", "00101001010100100111", "01010010101001001111", "01001010010101010010", "10100101001001010001", "10100101010001011110", "10010101010001111010", "10100101010101010011", "10101001001010100101"};
    vector<string> B = {"10100110010101001010", "00100010010100101011", "00101001010100100111", "01010010101001001111", "01001010010101010010", "10100101001001010001", "10100101010001011110", "10010101010001111010", "10100101010101010011", "10101001001010100101", "10101001000101110101", "10000010101111010010", "10100101101001010100", "11101000111010111011", "10100101000101001010", "10010010001001010100", "10101001010000011111", "01010100010001001110", "10100101010101000010", "10100101010010101011"};
    vector<string> count = {"67896897687967967987", "67896789678767896578", "67895786985788967897", "68678968567879678967", "68967867587967859678", "57859789689678969696", "67896786967968966689", "67895786876967976987", "67897689677896986966", "67895686767967967678", "67898567879679769798", "67897079698769769867", "67897696796789679676", "67896965868796967896", "67969686798696969679", "67969767896798698676", "67896798987987797899", "98979687698796896799", "67896798786879678969", "67896796978989769977"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> A = {"11111111111111111111", "11111111111111111111", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000"};
    vector<string> B = {"00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "11111111111111111111", "11111111111111111111"};
    vector<string> count = {"55555555555555555555", "55555555555555555555", "55555555555555555555", "66666666666666666666", "66666666666666666666", "66666666666666666666", "55556665555333555555", "55556665555333555555", "55556665555555555555", "55556665555333555555", "55556665555333555555", "55556665555555555555", "55555555555555555555", "55555555555555555555", "55555555555555555555", "55555555555555555555", "55555555555555555555", "55555555555555555555", "55555555555555555555", "55555555555555555555"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 720;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> A = {"111", "000", "000"};
    vector<string> B = {"000", "000", "111"};
    vector<string> count = {"111", "050", "111"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
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
    vector<string> A = {"11001000001111111010", "10010010011010101110", "11011011101001111110", "01000000000101000110", "11000000100101100011", "11100010101100011110", "00101110100010001111", "11111110100000100101", "01010111001000010100", "10110000110101110110", "10110110010001101111", "11010000000110110000", "01010110010001000011", "10001001111001100011", "10111101010011001011", "01001101101001111011", "11011110010010010101", "11110001101000100011", "10100101100011010000", "11010110000001101101"};
    vector<string> B = {"11010110000001101101", "10100101100011010000", "11110001101000100011", "11011110010010010101", "01001101101001111011", "10111101010011001011", "10001001111001100011", "01010110010001000011", "11010000000110110000", "10110110010001101111", "10110000110101110110", "01010111001000010100", "11111110100000100101", "00101110100010001111", "11100010101100011110", "11000000100101100011", "01000000000101000110", "11011011101001111110", "10010010011010101110", "11001000001111111010"};
    vector<string> count = {"34522342354553525233", "52333524442252344453", "52253424525324445443", "52425225244345255423", "44353435325244523353", "22424455553242252543", "23443532455232323534", "22323252522453224343", "35332432323353335225", "34244233255555525454", "45355334443544533434", "23234232335544532425", "23235244322535223433", "43345224552323535223", "32355332343355322325", "42525444552535454532", "24535242435554452252", "35324434533232324435", "22254535552353255253", "35332422344244354225"};
    TransformMatrix* pObj = new TransformMatrix();
    clock_t start = clock();
    int result = pObj->transform(A, B, count);
    clock_t end = clock();
    delete pObj;
    int expected = 175;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653044&rd=12179&pm=9790
********************************************************************************
#include "assert.h" 
#include "ctype.h" 
#include "float.h" 
#include "math.h" 
#include "stdio.h" 
#include "string.h" 
#include "stdlib.h" 
#include "stdarg.h" 
#include "time.h" 
#include "algorithm" 
#include "numeric" 
#include "functional" 
#include "utility" 
#include "bitset" 
#include "vector" 
#include "list" 
#include "set" 
#include "map" 
#include "queue" 
#include "stack" 
#include "string" 
#include "sstream" 
#include "iostream" 
using namespace std; 
 
#define all(v) (v).begin(), (v).end() 
typedef long long i64; 
template <class T> void make_unique(T& v) {sort(all(v)); v.resize(unique(all(v)) - v.begin());} 
 
const int INFINITE = 100000; 
struct edge_t { 
  edge_t(int src_, int dest_, int rev_, int capacity_, int cost_) : 
    src(src_), dest(dest_), rev(rev_), capacity(capacity_), cost(cost_), flow(0) {} 
  int src, dest, rev, capacity, cost, flow; 
}; 
typedef vector<edge_t> node_t; 
struct graph_t { 
  static const int MAX_N = 1300; 
  node_t V[MAX_N]; int N; 
}; 
struct path_t { 
  vector<edge_t*> edges; 
  int flow, cost; 
}; 
 
void AddDirectedEdge(graph_t& graph, int src, int dest, int capacity, int cost) { 
  const edge_t edge1(src, dest, (int)graph.V[dest].size(), capacity, cost); 
  const edge_t edge2(dest, src, (int)graph.V[src].size(), 0, -cost); 
  graph.V[src].push_back(edge1); graph.V[dest].push_back(edge2); 
} 
 
void BellmannFord(graph_t& graph, vector<edge_t*>& tree, vector<int>& distance, int src) { 
  queue<int> active; active.push(src); active.push(graph.N); 
  vector<bool> mark(graph.N, false); mark[src] = true; 
  tree[src] = NULL; distance[src] = 0; 
  for (int pass = 0; pass < graph.N && !active.empty();) { 
    const int node = active.front(); active.pop(); 
    if (node == graph.N && ++pass < graph.N) { 
      active.push(graph.N); 
    } else if (node < graph.N) { 
      mark[node] = false; 
      for (int j = 0, N = (int)graph.V[node].size(); j < N; ++j) { 
        edge_t* const edge = &graph.V[node][j]; if (edge->capacity <= 0) continue; 
        const int newDistance = distance[node] + edge->cost; 
        if (newDistance < distance[edge->dest]) { 
          tree[edge->dest] = edge, distance[edge->dest] = newDistance; 
          if (!mark[edge->dest]) active.push(edge->dest), mark[edge->dest] = true; 
        } 
      } 
    } 
  } 
} 
 
void Disjktra(graph_t& graph, vector<edge_t*>& tree, vector<int>& distance, 
              const vector<int>& potential, int src) { 
  typedef pair<int, pair<int, edge_t*> > state_t;  // (distance, (node, parent)) 
  priority_queue<state_t, vector<state_t>, greater<state_t> > pqueue; 
  pqueue.push(state_t(0, make_pair(src, (edge_t*)NULL))); 
  while (!pqueue.empty()) { 
    const int nextDistance = pqueue.top().first, node = pqueue.top().second.first; 
    edge_t* const pred = pqueue.top().second.second; pqueue.pop(); 
    if (nextDistance >= distance[node]) continue; 
    distance[node] = nextDistance, tree[node] = pred; 
    for (int k = 0, N = (int)graph.V[node].size(); k < N; ++k) { 
      edge_t* const edge = &graph.V[node][k]; if (edge->capacity <= 0) continue; 
      const int newDistance = nextDistance + edge->cost + potential[edge->dest] - potential[node]; 
      if (newDistance < distance[edge->dest]) 
        pqueue.push(state_t(newDistance, make_pair(edge->dest, edge))); 
    } 
  } 
} 
 
bool GetPath(const vector<edge_t*>& parent, path_t& path, int src, int dest) { 
  path.edges.clear(); path.flow = INFINITE, path.cost = 0; 
  while (src != dest) { 
    if (parent[dest] == NULL) return false; 
    path.edges.push_back(parent[dest]); 
    path.flow = min(path.flow, parent[dest]->capacity); 
    path.cost += parent[dest]->cost; 
    dest = parent[dest]->src; 
  } 
  return true; 
} 
 
void AddFlow(edge_t& edge, int flow) { 
  edge.capacity -= flow; 
  edge.flow += flow; 
} 
 
void Augment(graph_t& graph, path_t& path) { 
  for (int k = 0, N = (int)path.edges.size(); k < N; k++) { 
    edge_t& edge = *path.edges[k]; AddFlow(edge, +path.flow); 
    AddFlow(graph.V[edge.dest][edge.rev], -path.flow); 
  } 
} 
 
pair<int, int> MinCostMaxFlow(graph_t& graph, int src, int dest) { 
  vector<edge_t*> tree(graph.N, (edge_t*)NULL); 
  vector<int> potential(graph.N, 0), distance(graph.N, INFINITE); 
  BellmannFord(graph, tree, distance, src); 
  for (int k = 0; k < graph.N; ++k) potential[k] = -distance[k]; 
  int networkFlow = 0, flowCost = 0; 
  for (path_t path; GetPath(tree, path, src, dest);) { 
    networkFlow += path.flow, flowCost += path.cost * path.flow; Augment(graph, path); 
    for (int k = 0; k < graph.N; ++k) tree[k] = NULL, distance[k] = INFINITE; 
    Disjktra(graph, tree, distance, potential, src); 
    for (int k = 0; k < graph.N; ++k) potential[k] -= distance[k]; 
  } 
  return make_pair(networkFlow, flowCost); 
} 
 
struct TransformMatrix { 
  enum {IN = 0, MID = 1, OUT = 2}; 
  int m, n; 
 
  int node(int i, int j, int type) { 
    return (i * n + j) * 3 + type; 
  } 
 
  int ones(const vector<string>& A) { 
    int cnt = 0; 
    for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) 
      if (A[i][j] == '1') ++cnt; 
    return cnt; 
  } 
 
  int transform(vector<string> A, vector<string> B, vector<string> count) { 
    m = (int)A.size(), n = (int)A[0].size(); 
    const int o1 = ones(A), o2 = ones(B); 
    if (o1 != o2) return -1; 
    graph_t graph; graph.N = m * n * 3 + 2; 
    const int src = m * n * 3, sink = src + 1; 
    for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) { 
      const int cnt = count[i][j] - '0'; 
      const int outRem = A[i][j] == '1' ? cnt % 2 : 0; 
      const int inRem = outRem == 0 && B[i][j] == '1' ? cnt % 2 : 0; 
      AddDirectedEdge(graph, node(i, j, IN), node(i, j, MID), cnt / 2 + inRem, 1); 
      AddDirectedEdge(graph, node(i, j, MID), node(i, j, OUT), cnt / 2 + outRem, 1); 
      const int di[] = {-1, -1, -1, 0, 0, +1, +1, +1}; 
      const int dj[] = {-1, 0, +1, -1, +1, -1, 0, +1}; 
      for (int k = 0; k < 8; ++k) { 
        const int ni = i + di[k], nj = j + dj[k]; 
        if (ni >= 0 && ni < m && nj >= 0 && nj < n) 
          AddDirectedEdge(graph, node(i, j, OUT), node(ni, nj, IN), INFINITE, 0); 
      } 
      if (A[i][j] == '1') AddDirectedEdge(graph, src, node(i, j, MID), 1, 0); 
      if (B[i][j] == '1') AddDirectedEdge(graph, node(i, j, MID), sink, 1, 0); 
    } 
    const pair<int, int> flow = MinCostMaxFlow(graph, src, sink); 
    if (flow.first != o1) return -1; 
    return flow.second / 2; 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/