/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8144
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

class MyFriends {
public:
    string calcFriends(vector<int> sumFriends, int k);
};

string MyFriends::calcFriends(vector<int> sumFriends, int k) {
    string ret;
    return ret;
}


int test0() {
    vector<int> sumFriends = {8, 6, 4, 7, 5};
    int k = 2;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> sumFriends = {8, 9, 8, 8, 9};
    int k = 2;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> sumFriends = {7, 6, 5, 4, 4};
    int k = 2;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> sumFriends = {5, 6, 5, 4, 4};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> sumFriends = {11, 10, 12, 10, 11};
    int k = 2;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> sumFriends = {12, 12, 12, 12, 12};
    int k = 4;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> sumFriends = {8, 9, 8, 9, 8, 9, 9};
    int k = 5;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> sumFriends = {41, 49, 46, 45, 41, 49, 49, 43, 46, 46, 49};
    int k = 4;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> sumFriends = {204, 201, 194, 201, 203, 203, 203, 195, 200, 201, 199, 204, 196, 203, 202, 202, 201, 200, 199, 202, 205};
    int k = 5;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> sumFriends = {1095, 1091, 1085, 1096, 1096, 1095, 1094, 1091, 1099, 1094, 1093, 1097, 1089, 1094, 1095, 1085, 1101, 1093, 1097, 1095, 1093, 1091, 1093, 1095, 1101, 1096, 1099, 1095, 1096, 1083, 1097, 1104, 1095, 1102, 1106, 1097, 1100, 1091, 1096, 1097, 1090, 1096, 1099, 1099, 1103, 1098, 1093};
    int k = 39;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> sumFriends = {1122, 1118, 1122, 1118, 1124, 1119, 1121, 1123, 1117, 1116, 1118, 1119, 1118, 1122, 1120, 1116, 1127, 1123, 1122, 1119, 1117, 1124, 1129, 1129, 1119, 1122, 1116, 1118, 1123, 1120, 1119, 1121, 1122, 1122, 1117, 1119, 1115, 1127, 1123, 1120, 1116, 1122, 1117, 1118, 1122, 1115, 1121, 1125, 1114};
    int k = 16;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> sumFriends = {425, 427, 428, 429, 430, 424, 437, 432, 429, 430, 423, 429, 430, 427, 427, 428, 429, 434, 430, 425, 429, 432, 433, 435, 429, 423, 429, 426, 430, 425, 418};
    int k = 11;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> sumFriends = {8, 8, 8, 8, 10, 9, 9};
    int k = 5;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> sumFriends = {16, 16, 18, 20, 23, 20, 16, 19, 20};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> sumFriends = {434, 437, 444, 438, 434, 448, 441, 435, 440, 440, 440, 437, 436, 441, 439, 440, 438, 439, 445, 441, 441, 443, 433, 442, 440, 431, 436, 440, 436, 433, 444, 430, 439, 442, 437, 439, 438, 442, 436, 439, 435, 438, 439};
    int k = 3;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> sumFriends = {186, 187, 180, 190, 182, 187, 184, 186, 190, 186, 186, 185, 193, 183, 187, 182, 189, 186, 186, 185, 186, 192, 181, 188, 184, 189, 187, 186, 187};
    int k = 20;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> sumFriends = {578, 572, 569, 564, 560, 572, 570, 574, 580, 566, 567, 573, 573, 571, 567, 570, 575, 570, 570, 569, 565, 569, 573, 571, 567, 565, 568, 573, 570, 568, 573, 557, 568, 570, 574, 576, 566, 571, 572, 573, 571, 570, 564, 572, 570, 565, 567, 570, 570};
    int k = 22;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> sumFriends = {188, 193, 184, 190, 190, 190, 185, 190, 185, 186, 187, 187, 192, 189, 191, 192, 188, 193, 189, 186, 184, 190, 194, 187, 188, 191, 190, 187, 193, 186, 185, 190, 185, 188, 187};
    int k = 14;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> sumFriends = {67, 69, 68, 68, 71, 71, 72, 69, 70, 73, 72, 69, 71, 71, 73, 74, 66, 69, 70, 72, 70, 66, 67, 69, 71};
    int k = 20;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> sumFriends = {177, 182, 178, 181, 176, 179, 183, 182, 177, 177, 180, 178, 175, 179, 178, 181, 176, 175, 183, 178, 172, 180, 173, 181, 177, 176, 186, 176, 178, 178, 176, 181, 181};
    int k = 8;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> sumFriends = {173, 174, 174, 172, 173, 171, 170, 170, 174, 169, 176, 169, 171, 174, 173, 170, 174, 166, 167, 173, 176, 169, 168, 172, 171, 171, 177, 171, 168, 174, 175, 169, 170, 173, 169};
    int k = 25;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> sumFriends = {197, 191, 193, 192, 194, 192, 190, 196, 188, 197, 195, 196, 196, 192, 196, 194, 195, 198, 197, 193, 197, 196, 195, 192, 196, 194, 191, 195, 192, 188, 193, 191, 194, 196, 193, 193, 189, 191, 190};
    int k = 32;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> sumFriends = {38, 33, 36, 39, 37, 39, 38, 39, 35, 38, 34, 34, 35, 32, 38, 32, 35, 36, 32};
    int k = 3;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> sumFriends = {135, 139, 137, 138, 134, 138, 135, 136, 135, 138, 135, 137, 136, 140, 138, 133, 140, 140, 138, 131, 140, 138, 135, 138, 137, 132, 133, 135, 137, 135, 136, 133, 137, 140, 139, 137, 137, 137, 139};
    int k = 4;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> sumFriends = {13, 15, 14, 14, 14, 13, 12, 12, 13, 13, 11};
    int k = 10;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> sumFriends = {223, 228, 225, 235, 226, 227, 234, 227, 227, 228, 230, 222, 227, 225, 223, 219, 232, 224, 228, 231, 226, 228, 226, 233, 228, 232, 230, 224, 219, 230, 226, 227, 227, 227, 230, 231, 232, 232, 233, 228, 226, 223, 228, 224, 223};
    int k = 13;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> sumFriends = {4, 2, 4, 2, 4, 3, 3, 4, 2};
    int k = 7;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> sumFriends = {1, 1, 1};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> sumFriends = {625, 622, 622, 625, 621, 615, 619, 620, 616, 621, 620, 618, 623, 625, 624, 624, 626, 625, 624, 622, 612, 611, 621, 630, 630, 622, 626, 632, 628, 624, 624, 622, 623, 622, 620, 623, 630, 630, 625, 632, 626, 618, 621, 622, 625};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> sumFriends = {659, 658, 666, 661, 664, 676, 667, 670, 674, 671, 673, 671, 677, 676, 668, 681, 677, 666, 670, 680, 673, 665, 680, 675, 673, 671, 676, 673, 669, 674, 675, 666, 676, 676, 668, 678, 674, 671, 676, 668, 669, 671, 662, 662, 660};
    int k = 3;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> sumFriends = {699, 697, 696, 696, 697, 701, 692, 695, 697, 693, 701, 693, 704, 705, 693, 695, 699, 709, 700, 693, 691, 698, 702, 694, 697, 700, 694, 701, 698, 701, 697, 698, 703, 702, 703, 695, 699, 695, 690, 701, 697, 696, 695, 688, 700};
    int k = 5;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> sumFriends = {538, 537, 524, 537, 536, 554, 533, 540, 543, 535, 546, 541, 541, 530, 539, 535, 540, 533, 528, 540, 553, 537, 535, 539, 536, 554, 539, 542, 536, 542, 539, 541, 529, 535, 542, 555, 534, 541, 542, 533, 548, 538, 535, 536, 541};
    int k = 15;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> sumFriends = {596, 603, 601, 603, 597, 597, 596, 598, 596, 603, 599, 606, 603, 595, 593, 598, 599, 596, 603, 592, 598, 599, 600, 600, 593, 597, 604, 598, 592, 600, 598, 602, 599, 598, 595, 591, 601, 598, 590, 602, 598, 608, 595, 595, 593};
    int k = 30;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> sumFriends = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int k = 48;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> sumFriends = {381, 369, 372, 373, 376, 371, 369, 371, 374, 373, 374, 377, 384, 371, 373, 375, 375, 368, 370, 376, 380, 379, 371, 376, 380, 372, 375, 375, 375, 371, 371, 379, 376, 381, 373, 371, 375, 373, 373, 376, 371, 377, 369, 377, 368, 378, 371, 372, 373};
    int k = 12;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> sumFriends = {27, 28, 28, 28, 28, 28, 27, 29, 26, 27, 27, 27, 25, 26, 29, 27, 26, 26, 27, 28, 26};
    int k = 18;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> sumFriends = {63, 65, 62, 68, 64, 65, 65, 64, 66, 64, 67, 59, 64, 64, 65, 64, 63, 63, 63, 68, 67, 62, 64, 64, 67};
    int k = 4;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> sumFriends = {22, 19, 20, 19, 22, 19, 20, 22, 21, 23, 21, 21, 23, 22, 22, 21, 23};
    int k = 3;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> sumFriends = {2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256, 2256};
    int k = 7;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> sumFriends = {1869, 1868, 1869, 1871, 1868, 1865, 1869, 1867, 1871, 1870, 1875, 1871, 1859, 1866, 1874, 1872, 1868, 1873, 1868, 1864, 1860, 1877, 1875, 1864, 1870, 1869, 1869, 1868, 1870, 1870, 1864, 1867, 1869, 1871, 1874, 1868, 1869, 1861, 1864, 1871, 1872, 1869, 1869, 1867, 1862, 1864, 1872, 1872, 1862};
    int k = 7;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> sumFriends = {354, 356, 356, 354, 354, 353, 356, 353, 355, 353, 358, 354, 354, 354, 357, 356, 353, 353, 353, 356, 356};
    int k = 9;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> sumFriends = {492, 489, 490, 490, 496, 488, 493, 493, 495, 490, 489, 489, 490, 495, 488, 491, 494, 492, 490, 490, 493, 490, 494, 489, 492};
    int k = 9;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> sumFriends = {232, 233, 233, 234, 232, 232, 234, 233, 233, 232, 233, 234, 233, 232, 233, 233, 234};
    int k = 4;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> sumFriends = {1097, 1095, 1102, 1096, 1085, 1102, 1090, 1084, 1094, 1090, 1094, 1090, 1095, 1098, 1087, 1094, 1091, 1088, 1088, 1093, 1093, 1090, 1100, 1095, 1086, 1102, 1095, 1085, 1100, 1094, 1094, 1098, 1095, 1102, 1096, 1096, 1097, 1096, 1093, 1096, 1096, 1089, 1095, 1090, 1087, 1090, 1088, 1094, 1095};
    int k = 3;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> sumFriends = {324, 327, 326, 326, 326, 328, 328, 327, 329, 330, 330, 321, 322, 321, 324, 325, 326, 328, 327, 327, 324, 329, 330, 320, 326, 322, 327, 322, 326, 329, 323, 324, 324, 328, 329, 327, 324, 328, 328, 326, 323, 332, 323, 324, 327, 330, 329, 329, 325};
    int k = 12;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> sumFriends = {424, 420, 416, 412, 421, 420, 416, 414, 413, 408, 416, 419, 413, 420, 411, 419, 418, 411, 413, 415, 421, 420, 421, 421, 413, 414, 420, 419, 419, 416, 414, 416, 420, 412, 418, 413, 415, 415, 412, 415, 412, 421, 415, 418, 420, 414, 410, 416, 419};
    int k = 21;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> sumFriends = {125, 126, 124, 121, 127, 123, 126, 127, 125, 126, 125, 124, 128, 125, 126, 127, 122, 127, 126, 124, 123, 122, 125, 125, 122, 123, 125, 124, 126, 123, 123, 128, 123, 127, 122, 121, 123, 126, 120, 124, 124, 125, 127, 123, 126, 127, 125, 127, 127};
    int k = 35;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> sumFriends = {82, 82, 82, 84, 83, 82, 81, 83, 84, 80, 84, 81, 84, 84, 83, 84, 81, 83, 81, 81, 83, 79, 83, 85, 82, 85, 83, 84, 83, 81, 83, 82, 81, 79, 81, 83, 80, 83, 86, 83, 85, 84, 83, 81, 82, 82, 83, 82, 82};
    int k = 15;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> sumFriends = {2634, 6063, 7989, 5509, 5787, 1844, 4858, 3077, 7181, 7176, 3202, 1926, 8307, 257, 182, 6762, 3298, 4144, 485, 9866, 8229, 9332, 2851, 6434, 6402, 1771, 7171, 4237, 7948, 3915, 1160, 8083, 6506, 5792, 6137, 5728, 1305, 4150, 3076, 6183, 173, 9610, 5412, 6422, 4590};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> sumFriends = {6924, 37, 9324, 6112, 2760, 3591, 1433, 2723, 101, 577, 4005, 861, 8604, 1481, 9316, 5684, 9389, 1249, 599, 5345, 9296, 1860, 4214, 5649, 9080, 5041, 5966, 5981, 2284, 390, 5541, 1613, 4328, 2193, 7606, 1129, 7313, 804, 4921, 9184, 9016, 1271, 5537, 3148, 8353};
    int k = 3;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> sumFriends = {162, 6381, 8933, 4533, 3707, 1879, 9653, 7717, 1613, 7025, 6077, 8591, 5834, 4306, 6086, 7254, 8465, 6491, 2554, 1133, 6083, 3198, 6227, 3428, 1747, 3041, 7668, 5174, 6909, 7759, 8503, 98, 1401, 144, 7287, 8761, 8479, 9211, 9152, 7320, 3724, 3529, 2675, 614, 7094};
    int k = 5;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> sumFriends = {1083, 1182, 6159, 141, 8718, 6187, 275, 4931, 2926, 5736, 777, 1757, 1817, 8295, 872, 490, 4326, 311, 8039, 5252, 5862, 402, 226, 9300, 7881, 8, 5024, 2235, 6404, 2829, 4580, 3182, 9266, 2878, 5761, 7793, 520, 8586, 7889, 2984, 2238, 430, 5223, 2506, 5050};
    int k = 15;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> sumFriends = {6785, 2676, 1575, 4127, 6706, 7031, 6411, 2102, 1839, 8584, 8163, 4571, 375, 7335, 7520, 8876, 593, 1424, 5017, 9822, 303, 7938, 1206, 737, 6958, 8848, 2747, 6276, 5839, 9448, 8609, 8155, 6155, 354, 2443, 7440, 2273, 8747, 2519, 2441, 4148, 9459, 852, 121, 7620, 5875, 2899, 4712, 9017};
    int k = 28;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> sumFriends = {5841, 7268, 1507, 1708, 4365, 5431, 6755, 4546, 9504, 3027, 4723, 699, 7930, 4230, 8388, 6023, 717, 8158, 8705, 3139, 7774, 5191, 1028, 3329, 5597, 2913, 5628, 9253, 7880, 2213, 7102, 6178, 3405, 5385, 7162, 8501, 9247, 2483, 9440, 6943, 7371};
    int k = 30;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> sumFriends = {2137, 7740, 4147, 8684, 9955, 5563, 2971, 8017, 9869, 107, 1488, 6264, 7210, 6068, 5909, 87, 4002, 1102, 9093, 8302, 4791, 2656, 119, 9623, 1514, 1082, 8611, 1244, 5070};
    int k = 12;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> sumFriends = {3178, 9166, 8552, 6656, 9493, 4715, 2518, 4468, 3341, 3768, 9797, 818, 3695, 1689, 8729, 7615, 4718, 8249, 4082};
    int k = 2;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> sumFriends = {1452, 3908, 1494, 4243, 1812, 8709, 3794, 9360, 5544, 7623, 3130, 8115, 4193, 4102, 7043, 376, 1511, 1684, 7762, 5834, 2316, 8132, 9206, 6209, 759, 5331, 1592, 8105, 4436, 2157, 1207, 6294, 2825, 2591, 1405, 5220, 7756, 4169, 4565, 5139, 4195, 2887, 8273};
    int k = 16;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> sumFriends = {4096, 1623, 6124, 767, 6590, 9836, 7202, 289, 3439, 5396, 9159, 9322, 6587, 504, 6609, 3369, 9400, 9065, 1597, 4790, 6490, 4692, 7300, 3304, 1006, 5719, 2398, 537, 393, 307, 7300, 2038, 2509, 4962, 154};
    int k = 25;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> sumFriends = {64, 207, 340, 147, 172, 218, 41, 277, 434, 144, 255, 204, 209, 88, 124, 332, 347, 324, 182, 265, 373, 91, 362, 80, 5, 196, 458, 0, 125, 216, 29, 297, 482, 112, 175, 430, 317, 289, 97, 357, 233};
    int k = 28;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> sumFriends = {131, 217, 227, 213, 255, 275, 100, 240, 247, 229, 428, 325, 361, 158, 244, 242, 424, 305, 181, 119, 208, 110, 469, 342, 45, 357, 54, 302, 2, 263, 220, 466, 289, 398, 381, 342, 238, 120, 300, 426, 126, 303, 154, 62, 201, 243, 185, 404, 230};
    int k = 17;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> sumFriends = {108, 497, 479, 410, 209, 205, 116, 303, 240, 261, 1, 308, 486, 257, 311};
    int k = 5;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> sumFriends = {141, 263, 244, 239, 201, 156, 477, 139, 157, 236, 357, 92, 399, 185, 249, 307, 119, 281, 479, 67, 298, 424, 430, 391, 474, 350, 305, 312, 184, 365, 486, 31, 347, 475, 5, 265, 145};
    int k = 2;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> sumFriends = {289, 352, 235, 78, 110, 318, 166, 92, 34, 388, 441, 437, 62, 83, 195, 157, 310, 4, 410, 105, 119, 430, 242, 9, 456, 497, 28, 297, 438, 37, 31, 15, 52, 159, 74, 386, 41, 248, 303, 366, 71, 304, 238, 258, 456, 193, 152};
    int k = 22;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> sumFriends = {39, 12, 44, 42, 10, 13, 38};
    int k = 5;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> sumFriends = {36, 39, 25};
    int k = 2;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> sumFriends = {46, 6, 32, 34, 3, 9, 28, 32, 21};
    int k = 2;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> sumFriends = {47, 41, 16, 6, 11, 43, 39, 43, 22, 10, 47, 36, 36, 20, 33, 11, 49, 24, 12, 31, 10, 4, 0, 23, 39, 23, 27, 47, 41, 16, 7, 19, 20, 1, 9, 24, 47, 16, 28, 30, 17, 39, 30, 10, 44, 20, 5};
    int k = 24;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> sumFriends = {4, 15, 33, 18, 32, 29, 33, 31, 40, 33, 9};
    int k = 5;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> sumFriends = {4, 4, 4, 3, 2};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> sumFriends = {6, 0, 0, 0, 0};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> sumFriends = {4, 4, 0};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> sumFriends = {6, 6, 6, 6, 6};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> sumFriends = {15, 15, 15, 15, 15};
    int k = 3;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> sumFriends = {2, 1, 2};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> sumFriends = {16, 17, 15, 15, 18, 17, 10, 16, 17};
    int k = 6;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> sumFriends = {16, 15, 15, 12, 16, 17, 10, 16, 16};
    int k = 6;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> sumFriends = {12, 11, 11, 11, 12, 14, 10, 13, 11};
    int k = 6;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> sumFriends = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    int k = 35;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> sumFriends = {1, 2, 3};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> sumFriends = {6, 7, 7, 7, 6};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> sumFriends = {12, 12, 12, 12, 9, 5, 8};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> sumFriends = {4, 4, 4, 4, 4, 4, 4};
    int k = 2;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> sumFriends = {4, 4, 8, 4, 4};
    int k = 2;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> sumFriends = {0, 2, 4, 4, 4, 4, 4, 4, 2};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> sumFriends = {1, 2, 3};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> sumFriends = {64, 64, 64, 64, 64, 64, 68, 72, 72, 73, 69};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> sumFriends = {2, 0, 0};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> sumFriends = {2, 0, 2};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> sumFriends = {1, 1, 1};
    int k = 2;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> sumFriends = {6, 5, 5, 4, 4};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> sumFriends = {0, 0, 2};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> sumFriends = {5, 6, 7, 8, 7};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> sumFriends = {0, 2, 0};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> sumFriends = {0, 0, 0, 0, 0, 0, 1};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> sumFriends = {6, 7, 9, 7, 7};
    int k = 2;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> sumFriends = {6, 6, 6, 6, 3, 0, 3};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> sumFriends = {4, 7, 10, 9, 6};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> sumFriends = {8, 9, 8, 8, 9};
    int k = 2;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> sumFriends = {2, 2, 0, 3, 2};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> sumFriends = {0, 0, 0, 0, 0};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> sumFriends = {0, 0, 1};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> sumFriends = {2, 5, 5, 6, 3};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> sumFriends = {0, 0, 0};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> sumFriends = {6, 6, 9, 12, 9};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> sumFriends = {14, 14, 14, 14, 13};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> sumFriends = {0, 4, 8, 8, 4};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> sumFriends = {2, 4, 6, 7, 5};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> sumFriends = {11, 9, 7, 6, 9};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> sumFriends = {10, 9, 6, 4, 7};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> sumFriends = {3, 3, 3, 3, 3};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> sumFriends = {0, 2, 2};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> sumFriends = {7, 10, 10, 10, 10, 10, 10, 10, 7};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> sumFriends = {7, 7, 7, 7, 7, 7, 7, 7, 7};
    int k = 3;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> sumFriends = {6, 7, 6, 5, 5};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> sumFriends = {30, 0, 0, 0, 0, 0, 0};
    int k = 1;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> sumFriends = {642, 646, 638, 641, 639, 640, 641, 643, 639, 647, 644, 637, 653, 641, 637, 645, 647, 643, 635, 649, 647, 646, 646, 645, 649, 642, 642, 639, 646, 645, 644, 652, 641, 647, 653, 638, 650, 653, 640, 648, 649, 644, 642, 645, 652, 650, 644, 652, 646};
    int k = 3;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> sumFriends = {56, 56, 56, 56, 56, 56, 56, 56, 56};
    int k = 3;
    MyFriends* pObj = new MyFriends();
    clock_t start = clock();
    string result = pObj->calcFriends(sumFriends, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8580975&rd=12170&pm=8144
********************************************************************************
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cstdlib>
#include <sstream>
#include <cstdio>
#include <set>
#include <queue>
#include <numeric>
#include <complex>
#include <climits>
 
using namespace std;
 
template<class T> inline bool fixmin(T &a, T b) {if (a<=b) return false; a=b; return true;}
template<class T> inline bool fixmax(T &a, T b) {if (a>=b) return false; a=b; return true;}
 
string yes="POSSIBLE";
string no="IMPOSSIBLE";
 
struct MyFriends {
string calcFriends(vector <int> sumFriends, int k) {
  int n = sumFriends.size();
  int tot=accumulate(sumFriends.begin(), sumFriends.end(), 0);
  if (tot % (n-2) != 0) return no;
  tot /= (n-2);
  for (int i=0; i<n; i++) sumFriends[i] = tot-sumFriends[i];
  vector<int> ff(n);
  for (int i=0; i<n; i++) {
    int cur=sumFriends[i];
    int next=(i+k) % n;
    int mul = -1;
    while (next!=i) {
      cur += mul*sumFriends[next];
      next = (next+k)%n;
      mul *=-1;
    }
    if (cur < 0) return no;
    if (cur%2) return no;
    ff[i] = cur/2;
  }
  for (int i=0; i<n; i++) cout << ff[i] << ' ' ; cout << endl;
  for (int i=n-1; i>=0; i--) {
    sort (ff.begin(), ff.end());
    for (int j=0; j<n; j++) cout << ff[j] << ' ' ; cout << endl;
    if (ff[i] > i) return no;
    if (ff[i] < 0) return no;
    for (int j=0; j<ff[i]; j++) ff[i-j-1]--;
  }
  return yes;
}
};

********************************************************************************
*******************************************************************************/