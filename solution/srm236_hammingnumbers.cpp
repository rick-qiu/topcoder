/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4459
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

class HammingNumbers {
public:
    int getNumber(vector<int> factors, int n);
};

int HammingNumbers::getNumber(vector<int> factors, int n) {
    int ret;
    return ret;
}


int test0() {
    vector<int> factors = {2, 3, 5};
    int n = 15;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> factors = {2, 2, 2, 4, 4, 4, 8, 8, 8};
    int n = 11;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> factors = {7, 9, 14, 6};
    int n = 52;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4802;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> factors = {4, 11, 15, 21, 29, 28};
    int n = 2841;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2146636800;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> factors = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229};
    int n = 100000;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 532287;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> factors = {127, 119, 194, 265, 281, 42, 79, 97, 220, 171, 74, 104, 99, 46, 259, 132, 179, 126, 88, 9, 156, 280, 118, 139, 166, 276, 46, 222, 266};
    int n = 34849;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 975813210;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> factors = {195, 219, 224, 228, 157, 148, 183, 49, 193, 257, 218, 16};
    int n = 53742;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {17, 285, 75, 67, 19, 50, 152, 150, 178, 121, 153, 50, 126, 104, 179, 74, 160, 47, 214, 268, 74, 194, 295, 107, 238, 38, 28, 232, 285, 253, 136, 185, 224, 174};
    int n = 26354;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 184208192;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> factors = {232, 70, 230, 136, 51, 28, 227, 236, 146, 47, 209, 184, 11, 285, 27, 102, 89, 130};
    int n = 91429;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {46, 217, 90, 90, 155, 31, 41, 295, 261, 13, 274, 111, 281, 20, 68, 93, 111, 264, 202, 88, 285, 180, 56, 258, 65, 242, 164, 141, 245, 248, 56, 215, 73};
    int n = 1418;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 436480;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> factors = {265, 19, 129, 109, 73, 185, 237, 53, 103, 135, 240, 106, 215, 266, 191, 72, 272, 182, 63, 171, 86, 296, 82, 7, 275, 227, 153, 258, 257, 76, 7, 271, 150, 274, 164, 217, 42, 27, 87, 290, 263, 238, 267, 222, 147, 3, 148, 68, 161};
    int n = 79514;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 72886485;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> factors = {21, 108, 258, 262, 211, 22, 53, 60, 103, 239, 290, 122};
    int n = 35059;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {192, 48, 203, 194, 46, 76, 31, 30, 26, 165, 188, 122, 245, 171, 153, 18, 54, 207, 84, 266, 180, 182, 262, 155, 286, 279, 248, 42, 70, 106, 220, 81, 215, 276, 101, 75, 185, 60};
    int n = 7870;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3636360;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> factors = {251, 39, 162, 13, 94, 120, 237, 208, 83, 291, 249, 226, 263, 82, 7, 231, 279, 45, 256, 54, 238, 121, 195, 45, 40, 28, 96, 275, 269, 102, 288, 109, 244, 173, 285};
    int n = 69394;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 623143521;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> factors = {271, 256, 38, 297, 293, 106, 69, 45, 100, 86, 251, 272, 34, 136, 129, 38, 239, 150, 249, 188, 229, 159, 273, 272, 156, 149, 268, 120, 165, 149, 216, 70, 173, 177, 115, 168, 143, 288, 141, 231, 132, 206, 284, 275, 169, 81, 230};
    int n = 71453;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 454989312;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> factors = {120, 23, 89, 225, 42, 188, 211, 51, 238, 154, 260, 135, 89, 143, 81, 89, 251, 259, 41, 112, 240, 231, 109, 272, 249, 4, 199, 173, 291, 119, 204, 22, 115, 41, 289, 251, 33, 104};
    int n = 70556;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 445800996;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> factors = {215, 130, 24, 222, 125, 99, 253, 240, 120, 269, 237, 50, 246, 95, 292, 14, 215, 205, 166, 8, 182, 65, 94, 64, 106, 277, 138, 128, 5, 38, 138, 85, 17, 32, 289, 192, 88, 260, 280, 227, 130, 82, 26, 157};
    int n = 79742;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 194457424;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> factors = {194, 93, 47, 206, 103, 82, 48, 287, 27, 138, 17, 233, 204, 210, 172, 125, 50, 10, 12, 126, 17, 115, 233, 252, 297, 115, 225, 283, 157, 95, 84, 288, 19, 229, 108, 111, 282, 13, 244};
    int n = 65123;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 147993318;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> factors = {60, 294, 234, 204, 92, 60, 99, 284, 236, 173, 262, 270, 213, 3, 69, 158, 109, 96, 10, 90, 281, 224, 198, 126, 235, 237, 143, 135, 160, 131};
    int n = 30336;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 382153200;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> factors = {192, 216, 16, 129, 285, 160, 261, 233, 104, 8, 20, 295, 298, 70, 288, 277, 49, 19, 221};
    int n = 66311;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {296, 138, 233, 118, 219, 169, 66, 235, 139, 171, 266, 175, 184, 206, 50, 44, 272, 34, 274, 264, 29, 124, 44, 73, 190, 112, 244, 208, 249, 22, 126, 87, 296, 236, 166, 297, 201, 142, 19, 6, 178, 74};
    int n = 40430;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 57438444;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> factors = {140, 87, 134, 106, 263, 4, 60, 18, 119, 40, 34, 177, 50, 193, 4, 46, 204, 54, 24, 256, 245, 123, 84, 223, 265, 171, 52, 227, 81, 3, 80, 92, 42, 296, 13, 177, 260, 196, 95, 270, 291, 21};
    int n = 76514;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 98585550;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> factors = {273, 251, 130, 44, 185, 188, 110, 18, 84, 83, 8, 203, 291, 244, 168, 111, 161, 270, 272, 247, 169, 201, 170};
    int n = 96227;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> factors = {268, 259, 84, 60, 221, 261, 5, 68, 30, 120, 267, 55, 195, 40, 90, 298, 100, 142, 298, 67, 264, 230, 134};
    int n = 27552;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> factors = {292, 8, 277, 182, 39, 145, 187, 237, 290, 230, 198, 231, 70, 68};
    int n = 57096;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {33, 268, 291, 136, 250, 36, 233, 148, 258, 215, 133, 109, 187, 192, 17, 159, 184, 220, 124, 130, 47, 7, 90, 186, 71, 149, 148, 145, 212, 247, 195, 99, 177, 277, 248, 90, 81, 186, 62, 238};
    int n = 24615;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 39261500;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> factors = {178, 170, 164, 65, 142, 189, 239, 5, 144, 170, 15, 285, 272, 120, 150, 89, 57, 189, 167, 294, 66, 109, 81, 101, 79, 194, 185, 202, 85, 121, 32, 189, 200, 61, 248, 124, 268};
    int n = 31992;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 86658000;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> factors = {150, 2, 43, 16, 154, 201, 280, 180, 3, 89, 180, 255, 13, 235, 181, 222, 63, 190, 236, 228, 203, 128, 54, 42, 144, 73};
    int n = 12950;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7539840;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> factors = {295, 43, 155, 189, 266, 206, 155, 19, 212, 124};
    int n = 96342;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {300, 299, 298, 297, 296, 295};
    int n = 1;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {300, 299, 298, 297, 296, 295};
    int n = 2;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 295;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> factors = {81, 280, 137, 169, 267, 215};
    int n = 3;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> factors = {191, 208, 69, 107, 192, 138, 227, 296, 37, 183};
    int n = 72083;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {139, 178, 4, 77, 93, 198, 163};
    int n = 74642;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {270, 199, 21, 122, 78, 209, 266, 276, 216};
    int n = 57864;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {88, 133, 185};
    int n = 59344;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> factors = {280, 36, 76, 207, 281, 241, 112};
    int n = 322;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2137608063;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> factors = {280, 36, 76, 207, 281, 241, 112};
    int n = 323;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {68, 224, 38, 45, 288, 241, 176, 100, 277};
    int n = 779;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2138137600;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> factors = {68, 224, 38, 45, 288, 241, 176, 100, 277};
    int n = 780;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 2, 3, 5, 7, 11, 2, 3, 5, 7, 11};
    int n = 100000;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3247398;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> factors = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int n = 100000;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7381125;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> factors = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 6, 10, 14, 22, 26, 34, 46, 58, 62, 74, 82, 86, 94, 106, 15, 21, 33, 39, 51, 57, 69, 87, 93, 111, 123, 129, 141, 159, 35, 55, 65, 85, 95, 115};
    int n = 100000;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7381125;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> factors = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229};
    int n = 100000;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 532287;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> factors = {7, 9, 14, 6};
    int n = 52;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4802;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> factors = {4, 11, 15, 21, 29, 28};
    int n = 2841;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2146636800;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> factors = {144, 100, 300};
    int n = 33;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {300};
    int n = 100000;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 231, 295, 300};
    int n = 100000;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 12112947;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> factors = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int n = 15;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74};
    int n = 30000;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
    clock_t end = clock();
    delete pObj;
    int expected = 42750240;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> factors = {154};
    int n = 6;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    vector<int> factors = {4};
    int n = 17;
    HammingNumbers* pObj = new HammingNumbers();
    clock_t start = clock();
    int result = pObj->getNumber(factors, n);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=6535&pm=4459
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define MAX(f,w) ({ int _mm=(1<<31); f _mm>?=(w); _mm; })
typedef long long LL;
template<class T> inline int size(const T&c) { return c.size(); }
 
const LL MAX = (1LL<<31)-1;
 
set<int> s;
 
struct HammingNumbers {
 
  // MAIN
  int getNumber(vector <int> factors, int n) {
    s.clear();
    s.insert(1);
    while(n>0) {
      --n;
      if(s.empty()) return -1;
      LL x = *s.begin();
      if(n==0) return int(x);
      s.erase(x);
      FOREACH(it,factors) if(x* *it <= MAX) s.insert(x * *it);
      while(size(s)>n) {
        set<int>::iterator it = s.end(); --it;
        s.erase(it);
      }
    }
    return -1;
  }
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/