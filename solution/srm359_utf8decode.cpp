/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7862
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

class UTF8Decode {
public:
    vector<int> decodeString(vector<int> bytes);
};

vector<int> UTF8Decode::decodeString(vector<int> bytes) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> bytes = {10, 207, 168, 226, 156, 144, 240, 152, 154, 160};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1000, 10000, 100000};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> bytes = {10, 255, 207, 17, 168, 193, 226, 156, 144, 240, 143, 152, 154, 160, 240, 152, 154};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1000, 10000, 100000};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> bytes = {191, 192, 193, 245, 255, 128, 129, 130, 189, 190, 191, 1};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> bytes = {192, 170, 193, 191, 194, 128};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {128};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> bytes = {224, 159, 191, 160};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4064};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> bytes = {225, 159, 128};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6080};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> bytes = {240, 143, 160, 127, 255, 175, 175};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {134127};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> bytes = {242, 242, 128, 128, 128};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {524288};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> bytes = {244, 144, 160, 136, 191, 191};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1085439};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> bytes = {245, 242, 191, 191, 191, 194};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {786431};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> bytes = {93, 44, 118, 4, 111, 116, 98, 49, 106, 124, 87, 101, 60, 55, 47, 35, 81, 66, 34, 2, 29, 51, 3, 116, 96, 31, 36, 84, 36, 43, 11, 75, 110, 96, 103, 97, 70, 20, 95, 71, 62, 114, 1, 1, 103, 65, 12, 82, 12, 8};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {93, 44, 118, 4, 111, 116, 98, 49, 106, 124, 87, 101, 60, 55, 47, 35, 81, 66, 34, 2, 29, 51, 3, 116, 96, 31, 36, 84, 36, 43, 11, 75, 110, 96, 103, 97, 70, 20, 95, 71, 62, 114, 1, 1, 103, 65, 12, 82, 12, 8};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> bytes = {192, 243, 27, 159, 223, 109, 193, 93, 125, 126, 5, 69, 19, 114, 139, 101, 112, 38, 207, 106, 161, 9, 169, 153, 226, 216, 33, 34, 154, 207, 252, 0, 56, 163, 214, 239, 110, 244, 255, 185, 213, 83, 175, 249, 35, 32, 246, 73, 90, 85};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {914145, 9, 9891, 1465, 1391, 35, 32, 73, 90, 85};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> bytes = {76, 95, 228, 250, 1, 100, 167, 59, 165, 27, 87, 32, 49, 22, 100, 236, 1, 111, 209, 100, 155, 35, 156, 47, 135, 56, 114, 131, 32, 73, 24, 104, 92, 221, 107, 12, 222, 60, 24, 113, 130, 217, 180, 144, 106, 136, 137, 234, 24, 173};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {76, 95, 18917, 27, 87, 32, 49, 22, 100, 50908, 47, 56, 114, 32, 73, 24, 104, 92, 1858, 1652, 106};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> bytes = {109, 16, 227, 154, 196, 94, 22, 112, 200, 163, 56, 115, 85, 118, 156, 140, 2, 62, 209, 98, 251, 8, 92, 70, 96, 50, 46, 223, 73, 135, 11, 88, 200, 80, 147, 55, 139, 9, 230, 147, 154, 242, 74, 128, 147, 188, 16, 10, 41, 148};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {109, 16, 13987, 56, 115, 85, 118, 2, 62, 1095, 11, 88, 531, 55, 9, 25818, 525564, 16, 10, 41};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> bytes = {193, 20, 15, 189, 185, 110, 243, 114, 241, 7, 203, 52, 201, 150, 152, 103, 143, 232, 76, 194, 201, 228, 67, 129, 38, 214, 68, 93, 205, 239, 95, 213, 253, 213, 80, 173, 22, 53, 137, 86, 56, 236, 77, 167, 71, 80, 34, 78, 208, 33};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 15, 110, 878095, 32877, 22, 53, 86, 56};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> bytes = {155, 116, 113, 203, 167, 149, 90, 141, 113, 218, 254, 73, 177, 12, 205, 194, 187, 18, 150, 200, 226, 190, 130, 213, 156, 152, 185, 145, 253, 101, 156, 126, 40, 233, 34, 126, 148, 188, 20, 146, 26, 91, 119, 17, 78, 232, 21, 111, 101, 201};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {116, 113, 743, 90, 113, 1713, 12, 891, 18, 574, 1372, 101, 126, 40, 38204, 20, 26, 91, 119, 17, 78};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> bytes = {170, 159, 154, 248, 242, 141, 218, 197, 216, 132, 248, 138, 200, 200, 161, 253, 226, 199, 239, 136, 248, 188, 140, 204, 231, 172, 150, 203, 160, 236, 250, 128, 177, 240, 232, 234, 202, 156, 248, 216, 189, 174, 236, 201, 200, 205, 220, 138, 203, 201};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {577802, 545, 8764, 812, 736, 49201, 118638};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> bytes = {181, 181, 156, 186, 150, 154, 146, 132, 164, 178, 190, 157, 179, 186, 191, 164, 187, 141, 135, 167, 147, 149, 185, 142, 168, 173, 191, 189, 183, 150, 188, 165, 138, 151, 162, 174, 175, 179, 186, 186, 166, 176, 164, 145, 183, 129, 150, 167, 173, 144};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> bytes = {218, 195, 216, 200, 243, 232, 226, 252, 247, 218, 228, 235, 232, 238, 251, 213, 237, 219, 205, 221, 199, 198, 246, 212, 230, 232, 255, 244, 250, 223, 235, 196, 215, 192, 220, 237, 217, 238, 202, 204, 252, 240, 245, 220, 244, 203, 232, 192, 215, 193};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> bytes = {159, 182, 134, 76, 152, 190, 139, 179, 180, 74, 183, 156, 79, 92, 112, 113, 101, 117, 68, 138, 110, 132, 164, 118, 101, 74, 189, 64, 184, 158, 180, 173, 103, 114, 167, 166, 73, 158, 171, 87, 77, 154, 131, 110, 137, 115, 94, 118, 170, 187};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {76, 74, 79, 92, 112, 113, 101, 117, 68, 110, 118, 101, 74, 64, 103, 114, 73, 87, 77, 110, 115, 94, 118};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> bytes = {91, 67, 93, 149, 175, 156, 194, 91, 143, 190, 178, 131, 77, 109, 85, 96, 97, 153, 117, 187, 130, 150, 193, 116, 108, 106, 78, 70, 92, 182, 111, 110, 189, 186, 131, 125, 198, 84, 144, 83, 151, 113, 170, 183, 103, 164, 108, 72, 117, 172};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {91, 67, 93, 143, 77, 109, 85, 96, 97, 117, 116, 108, 106, 78, 70, 92, 111, 110, 125, 400, 83, 113, 103, 108, 72, 117};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> bytes = {245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> bytes = {240, 1};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> bytes = {};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> bytes = {76, 95, 228, 250, 1, 100, 167, 59, 165, 27, 87, 32, 49, 22, 100, 236, 1, 111, 209, 100, 155, 35, 156, 47, 135, 56, 114, 131, 32, 73, 24, 104, 92, 221, 107, 12, 222, 60, 24, 113, 130, 217, 180, 144, 106, 136, 137, 234, 24, 173};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {76, 95, 18917, 27, 87, 32, 49, 22, 100, 50908, 47, 56, 114, 32, 73, 24, 104, 92, 1858, 1652, 106};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> bytes = {1, 228, 250, 1, 100, 167, 59, 165, 191, 1, 10, 255, 1, 123, 207, 34, 17, 2, 168, 168, 193, 3, 168, 226, 156, 4, 191, 144, 240, 5, 143, 152, 191, 6, 154, 160, 7, 240, 191, 152, 8, 154, 69, 191, 1};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 18917, 1, 10, 1, 123, 1000, 3, 10047, 102362, 7, 259610, 69, 1};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> bytes = {10, 207, 168, 226, 156, 144, 240, 152, 154, 160};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1000, 10000, 100000};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> bytes = {33, 46, 192, 140, 188, 210, 3, 111, 228, 80, 203, 169, 45, 207, 174, 54, 165, 30, 16, 176, 224, 69, 208, 185, 50, 206, 225, 216, 234, 167, 28, 213, 72, 103, 131, 242, 206, 203, 85, 64, 18, 112, 118, 38, 49, 19, 70, 168, 120, 155};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {33, 46, 1193, 45, 1006, 54, 30, 16, 3687, 28, 1347};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> bytes = {240, 192};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> bytes = {193, 128, 224, 159, 191, 240, 143, 191, 191, 244, 144, 128, 128};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4047};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> bytes = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 255, 255, 255, 255};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> bytes = {244, 144, 143, 191, 191};
    UTF8Decode* pObj = new UTF8Decode();
    clock_t start = clock();
    vector<int> result = pObj->decodeString(bytes);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1114111};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=16063200&rd=10770&pm=7862
********************************************************************************
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>
#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<sstream>
#include<map>
using namespace std;
 
//LIB CODE
typedef vector<int> vi;
#define PB push_back
template<class T> inline int sz(const T&t){return t.size();}
 
//REAL CODE
struct Type
{
  int no;
  int v[4];
};
 
Type tmp[1114112];
 
struct UTF8Decode
{
  int getbits(int value,int firstbit,int numbits)
  {
    return (value>>firstbit)%(1<<numbits);
  }
  void convert(int ch)
  {
    if(ch<=127) tmp[ch].no=1,tmp[ch].v[0]=ch;
    else if(ch<=2047) tmp[ch].no=2,tmp[ch].v[0]=192+getbits(ch,6,5),tmp[ch].v[1]=128+getbits(ch,0,6);
    else if(ch<=65535) {
      tmp[ch].no=3;
      tmp[ch].v[0]=224+getbits(ch,12,4);
      tmp[ch].v[1]=128+getbits(ch,6,6);
      tmp[ch].v[2]=128+getbits(ch,0,6);
    }
    else if(ch<=1114111) {
      tmp[ch].no=4;
      tmp[ch].v[0]=240+getbits(ch,18,3);
      tmp[ch].v[1]=128+getbits(ch,12,6);
      tmp[ch].v[2]=128+getbits(ch,6,6);
      tmp[ch].v[3]=128+getbits(ch,0,6);
    }  
  }
  vector <int> decodeString(vector <int> bytes)
  {
    for(int i=0;i<=11141111;i++) convert(i);
    vi ret; ret.clear();
    int a[4],na=0;
    for(int i=0;i<sz(bytes);i++)
    {
      a[na++]=bytes[i];
      bool f=false;
      int start=0;
      if(na==1) start=0;
      else if(na==2) start=128;
      else if(na==3) start=2048;
      else start = 65536;
      for(int j=start;j<=1114111;j++)
      {
        bool flag=true;
        for(int k=0;k<na;k++)
          if(tmp[j].v[k]!=a[k])
          {
            flag=false;
            break;
          }
        if(flag)
        {
          f=true;
          if(tmp[j].no==na)
          {
            ret.PB(j);
            na=0;
          }
          goto end;
        }
      }
end:    
      if(!f) na--;
    }
    return ret;
  }
};
 
//Powered By [KawigiEdit] 2.0!
//Coded by Ikki

********************************************************************************
*******************************************************************************/