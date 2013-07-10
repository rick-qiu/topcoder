/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12349
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

class RockPaperScissors {
public:
    double bestScore(vector<int> rockProb, vector<int> paperProb, vector<int> scissorsProb);
};

double RockPaperScissors::bestScore(vector<int> rockProb, vector<int> paperProb, vector<int> scissorsProb) {
    double ret;
    return ret;
}


int test0() {
    vector<int> rockProb = {100, 100, 100};
    vector<int> paperProb = {100, 100, 100};
    vector<int> scissorsProb = {100, 100, 100};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 3.999999999999999;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> rockProb = {300};
    vector<int> paperProb = {0};
    vector<int> scissorsProb = {0};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> rockProb = {300, 0, 0};
    vector<int> paperProb = {0, 300, 0};
    vector<int> scissorsProb = {0, 0, 300};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 6.333333333333332;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> rockProb = {100, 0};
    vector<int> paperProb = {200, 100};
    vector<int> scissorsProb = {0, 200};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7222222222222223;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> rockProb = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> paperProb = {150, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300};
    vector<int> scissorsProb = {150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 149.00000000000003;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> rockProb = {26};
    vector<int> paperProb = {245};
    vector<int> scissorsProb = {29};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 2.546666666666667;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> rockProb = {274, 153};
    vector<int> paperProb = {15, 6};
    vector<int> scissorsProb = {11, 141};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 4.34;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> rockProb = {137, 20, 8};
    vector<int> paperProb = {5, 147, 290};
    vector<int> scissorsProb = {158, 133, 2};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 5.644892716049383;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> rockProb = {123, 24, 1, 57};
    vector<int> paperProb = {136, 17, 9, 25};
    vector<int> scissorsProb = {41, 259, 290, 218};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 8.763333333333335;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> rockProb = {184, 28, 156, 14, 148};
    vector<int> paperProb = {19, 243, 92, 267, 76};
    vector<int> scissorsProb = {97, 29, 52, 19, 76};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 8.389548528750618;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> rockProb = {265, 156, 27, 272, 9, 77, 71, 16, 170, 66};
    vector<int> paperProb = {8, 136, 6, 9, 1, 8, 219, 149, 64, 18};
    vector<int> scissorsProb = {27, 8, 267, 19, 290, 215, 10, 135, 66, 216};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 16.69788954992637;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> rockProb = {192, 0, 14, 126, 47, 45, 50, 52, 229, 9, 52, 24, 51, 288, 54, 9, 160};
    vector<int> paperProb = {29, 271, 245, 39, 190, 81, 8, 15, 18, 285, 30, 253, 122, 1, 28, 4, 102};
    vector<int> scissorsProb = {79, 29, 41, 135, 63, 174, 242, 233, 53, 6, 218, 23, 127, 11, 218, 287, 38};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 25.719502128284653;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> rockProb = {91, 67, 6, 227, 64, 116, 187, 29, 59, 32, 74, 212, 112, 172, 66, 233, 74, 51, 188, 254, 97, 14, 59, 211};
    vector<int> paperProb = {105, 118, 254, 2, 22, 64, 26, 210, 116, 266, 192, 28, 2, 74, 11, 39, 171, 9, 69, 41, 189, 182, 136, 11};
    vector<int> scissorsProb = {104, 115, 40, 71, 214, 120, 87, 61, 125, 2, 34, 60, 186, 54, 223, 28, 55, 240, 43, 5, 14, 104, 105, 78};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 34.85231412194827;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> rockProb = {154, 25, 184, 89, 34, 270, 215, 2, 39, 89, 135, 54, 69, 121, 21, 91, 54, 107, 72, 7, 92, 131, 73, 154, 228, 6, 153, 150, 199, 130, 88};
    vector<int> paperProb = {107, 222, 45, 93, 45, 3, 3, 41, 254, 6, 101, 185, 5, 79, 46, 98, 133, 173, 158, 252, 78, 144, 8, 82, 10, 72, 98, 85, 27, 65, 87};
    vector<int> scissorsProb = {39, 53, 71, 118, 221, 27, 82, 257, 7, 205, 64, 61, 226, 100, 233, 111, 113, 20, 70, 41, 130, 25, 219, 64, 62, 222, 49, 65, 74, 105, 125};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 43.72200416323065;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> rockProb = {72, 174, 146, 45, 170, 85, 13, 271, 63, 113, 54, 55, 164, 137, 139, 97, 155, 135, 57, 8, 151, 104, 34, 69, 3, 234, 232, 59, 171, 45, 224, 24, 41, 50, 24, 2, 10, 24};
    vector<int> paperProb = {109, 42, 61, 204, 82, 101, 261, 17, 210, 3, 16, 49, 98, 142, 92, 98, 120, 92, 156, 258, 75, 20, 249, 143, 165, 56, 5, 36, 99, 144, 4, 102, 232, 201, 60, 14, 169, 214};
    vector<int> scissorsProb = {119, 84, 93, 51, 48, 114, 26, 12, 27, 184, 230, 196, 38, 21, 69, 105, 25, 73, 87, 34, 74, 176, 17, 88, 132, 10, 63, 205, 30, 111, 72, 174, 27, 49, 216, 284, 121, 62};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 54.03701821702231;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> rockProb = {82, 4, 140, 217, 139, 19, 104, 253, 46, 10, 6, 76, 178, 207, 134, 115, 116, 14, 45, 160, 11, 256, 252, 65, 181, 98, 33, 73, 112, 105, 233, 236, 91, 23, 83, 69, 0, 31, 54, 66, 41, 167, 136, 54, 17, 27, 105, 115, 173, 28};
    vector<int> paperProb = {206, 194, 22, 46, 81, 258, 81, 3, 84, 22, 277, 98, 28, 16, 158, 141, 164, 192, 18, 130, 127, 30, 42, 182, 10, 172, 185, 221, 77, 88, 9, 30, 166, 183, 16, 158, 220, 84, 181, 202, 143, 29, 156, 164, 72, 151, 101, 14, 47, 48};
    vector<int> scissorsProb = {12, 102, 138, 37, 80, 23, 115, 44, 170, 268, 17, 126, 94, 77, 8, 44, 20, 94, 237, 10, 162, 14, 6, 53, 109, 30, 82, 6, 111, 107, 58, 34, 43, 94, 201, 73, 80, 185, 65, 32, 116, 104, 8, 82, 211, 122, 94, 171, 80, 224};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 70.81045662577448;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> rockProb = {88, 59, 84, 40, 18, 71, 3, 36, 53, 205, 10, 209, 288, 242, 99, 10, 46, 263, 150, 14, 36, 130, 133, 129, 16, 214, 34, 2, 61, 247, 3, 32, 179, 33, 67, 80, 33, 11, 69, 261, 198, 129, 0, 278, 17, 51, 250, 8, 34, 27};
    vector<int> paperProb = {154, 88, 108, 220, 21, 65, 79, 250, 10, 48, 59, 2, 8, 25, 160, 247, 7, 12, 2, 6, 114, 104, 163, 59, 247, 47, 33, 19, 184, 35, 14, 5, 30, 8, 42, 199, 119, 257, 94, 32, 48, 11, 190, 14, 214, 157, 6, 287, 4, 192};
    vector<int> scissorsProb = {58, 153, 108, 40, 261, 164, 218, 14, 237, 47, 231, 89, 4, 33, 41, 43, 247, 25, 148, 280, 150, 66, 4, 112, 37, 39, 233, 279, 55, 18, 283, 263, 91, 259, 191, 21, 148, 32, 137, 7, 54, 160, 110, 8, 69, 92, 44, 5, 262, 81};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 73.50435539859244;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> rockProb = {141, 183, 3, 78, 48, 271, 193, 283, 258, 11, 234, 119, 242, 97, 23, 87, 167, 173, 222, 51, 62, 48, 121, 87, 59, 9, 33, 80, 113, 151, 262, 70, 172, 249, 57, 120, 7, 21, 76, 5, 9, 142, 23, 26, 49, 21, 112, 49, 140, 225};
    vector<int> paperProb = {92, 80, 118, 124, 78, 26, 36, 4, 32, 203, 4, 174, 33, 124, 171, 124, 27, 55, 22, 64, 187, 207, 80, 64, 53, 290, 68, 175, 29, 34, 27, 143, 63, 5, 57, 139, 290, 57, 20, 28, 212, 22, 222, 67, 241, 185, 168, 109, 94, 19};
    vector<int> scissorsProb = {67, 37, 179, 98, 174, 3, 71, 13, 10, 86, 62, 7, 25, 79, 106, 89, 106, 72, 56, 185, 51, 45, 99, 149, 188, 1, 199, 45, 158, 115, 11, 87, 65, 46, 186, 41, 3, 222, 204, 267, 79, 136, 55, 207, 10, 94, 20, 142, 66, 56};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 71.469990443232;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> rockProb = {289, 11, 175, 96, 24, 159, 133, 41, 79, 233, 69, 102, 229, 114, 61, 25, 26, 74, 285, 50, 221, 49, 125, 25, 189, 8, 3, 213, 179, 182, 238, 91, 177, 14, 227, 224, 106, 261, 68, 279, 29, 92, 210, 68, 158, 16, 127, 51, 205, 83};
    vector<int> paperProb = {10, 208, 112, 25, 215, 85, 115, 202, 186, 44, 17, 146, 46, 55, 19, 174, 270, 3, 6, 38, 78, 97, 1, 269, 87, 91, 284, 55, 28, 76, 43, 70, 23, 217, 38, 20, 180, 1, 220, 2, 96, 38, 73, 6, 9, 131, 110, 210, 4, 6};
    vector<int> scissorsProb = {1, 81, 13, 179, 61, 56, 52, 57, 35, 23, 214, 52, 25, 131, 220, 101, 4, 223, 9, 212, 1, 154, 174, 6, 24, 201, 13, 32, 93, 42, 19, 139, 100, 69, 35, 56, 14, 38, 12, 19, 175, 170, 17, 226, 133, 153, 63, 39, 91, 211};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 77.06221771234014;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> rockProb = {21, 204, 155, 18, 146, 162, 37, 137, 45, 4, 179, 10, 15, 94, 82, 57, 63, 10, 149, 20, 58, 35, 99, 44, 204, 106, 129, 140, 15, 93, 35, 34, 39, 120, 38, 14, 19, 103, 214, 169, 54, 91, 57, 89, 20, 8, 107, 12, 71, 159};
    vector<int> paperProb = {260, 7, 130, 204, 34, 5, 70, 132, 121, 207, 95, 9, 8, 136, 138, 24, 54, 14, 67, 49, 41, 60, 65, 27, 19, 174, 62, 2, 25, 176, 245, 241, 4, 111, 230, 160, 211, 37, 57, 38, 90, 26, 59, 12, 250, 234, 168, 129, 25, 59};
    vector<int> scissorsProb = {19, 89, 15, 78, 120, 133, 193, 31, 134, 89, 26, 281, 277, 70, 80, 219, 183, 276, 84, 231, 201, 205, 136, 229, 77, 20, 109, 158, 260, 31, 20, 25, 257, 69, 32, 126, 70, 160, 29, 93, 156, 183, 184, 199, 30, 58, 25, 159, 204, 82};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 75.57851085897376;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> rockProb = {43, 152, 63, 4, 38, 5, 269, 34, 34, 134, 286, 4, 70, 104, 183, 75, 11, 203, 106, 79, 53, 236, 19, 22, 188, 147, 128, 168, 32, 199, 85, 65, 86, 100, 179, 38, 242, 19, 137, 70, 35, 169, 89, 171, 79, 7, 82, 85, 42, 33};
    vector<int> paperProb = {233, 104, 133, 226, 117, 14, 26, 233, 203, 46, 9, 95, 62, 92, 13, 214, 218, 91, 69, 29, 128, 23, 79, 217, 9, 3, 127, 83, 197, 34, 177, 148, 164, 8, 75, 38, 15, 117, 148, 229, 247, 28, 195, 78, 18, 287, 27, 190, 183, 121};
    vector<int> scissorsProb = {24, 44, 104, 70, 145, 281, 5, 33, 63, 120, 5, 201, 168, 104, 104, 11, 71, 6, 125, 192, 119, 41, 202, 61, 103, 150, 45, 49, 71, 67, 38, 87, 50, 192, 46, 224, 43, 164, 15, 1, 18, 103, 16, 51, 203, 6, 191, 25, 75, 146};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 71.4761490833683;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> rockProb = {149, 6, 291, 21, 71, 259, 206, 73, 3, 108, 122, 16, 162, 41, 53, 135, 145, 172, 95, 19, 264, 41, 74, 161, 175, 275, 161, 51, 108, 42, 88, 103, 240, 53, 53, 11, 252, 198, 155, 191, 17, 120, 57, 36, 32, 5, 80, 6, 14, 41};
    vector<int> paperProb = {56, 73, 8, 175, 5, 5, 29, 43, 179, 7, 96, 248, 63, 127, 222, 81, 60, 44, 153, 227, 3, 35, 199, 127, 70, 3, 98, 82, 2, 254, 200, 37, 55, 172, 238, 241, 12, 0, 81, 72, 179, 99, 239, 212, 54, 288, 187, 161, 11, 238};
    vector<int> scissorsProb = {95, 221, 1, 104, 224, 36, 65, 184, 118, 185, 82, 36, 75, 132, 25, 84, 95, 84, 52, 54, 33, 224, 27, 12, 55, 22, 41, 167, 190, 4, 12, 160, 5, 75, 9, 48, 36, 102, 64, 37, 104, 81, 4, 52, 214, 7, 33, 133, 275, 21};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 72.03741728492147;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> rockProb = {199, 128, 68, 23, 208, 79, 253, 116, 2, 87, 47, 154, 213, 26, 93, 225, 186, 173, 92, 151, 122, 105, 154, 55, 184, 93, 8, 228, 118, 91, 115, 2, 189, 68, 110, 6, 88, 192, 64, 86, 88, 75, 155, 52, 51, 13, 7, 11, 116, 233};
    vector<int> paperProb = {48, 135, 225, 127, 9, 74, 17, 74, 108, 5, 66, 6, 35, 63, 132, 72, 88, 13, 47, 132, 60, 171, 37, 31, 71, 58, 119, 59, 82, 8, 74, 169, 7, 112, 5, 226, 37, 67, 38, 182, 7, 168, 99, 48, 10, 11, 204, 287, 183, 9};
    vector<int> scissorsProb = {53, 37, 7, 150, 83, 147, 30, 110, 190, 208, 187, 140, 52, 211, 75, 3, 26, 114, 161, 17, 118, 24, 109, 214, 45, 149, 173, 13, 100, 201, 111, 129, 104, 120, 185, 68, 175, 41, 198, 32, 205, 57, 46, 200, 239, 276, 89, 2, 1, 58};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 72.93686750710627;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> rockProb = {45, 171, 146, 161, 55, 218, 32, 219, 274, 49, 109, 156, 1, 13, 54, 13, 270, 70, 30, 10, 6, 65, 60, 10, 8, 6, 126, 42, 88, 164, 158, 290, 108, 207, 146, 75, 281, 175, 261, 131, 62, 71, 69, 206, 67, 15, 26, 76, 152, 272};
    vector<int> paperProb = {85, 33, 91, 34, 31, 55, 10, 34, 17, 100, 91, 139, 276, 32, 210, 285, 20, 121, 46, 286, 213, 10, 219, 22, 278, 289, 68, 35, 42, 32, 67, 2, 166, 19, 25, 59, 12, 125, 3, 141, 64, 195, 38, 36, 120, 35, 261, 85, 148, 11};
    vector<int> scissorsProb = {170, 96, 63, 105, 214, 27, 258, 47, 9, 151, 100, 5, 23, 255, 36, 2, 10, 109, 224, 4, 81, 225, 21, 268, 14, 5, 106, 223, 170, 104, 75, 8, 26, 74, 129, 166, 7, 0, 36, 28, 174, 34, 193, 58, 113, 250, 13, 139, 0, 17};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 71.57808978671487;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> rockProb = {217, 112, 194, 10, 50, 47, 147, 31, 160, 6, 12, 280, 28, 52, 289, 37, 164, 284, 131, 131, 133, 62, 108, 17, 180, 120, 117, 144, 7, 81, 105, 97, 127, 27, 0, 199, 224, 106, 2, 17, 66, 43, 74, 53, 86, 268, 4, 128, 76, 114};
    vector<int> paperProb = {24, 60, 69, 41, 180, 245, 128, 261, 15, 143, 207, 18, 102, 128, 2, 202, 64, 8, 139, 42, 97, 213, 101, 2, 42, 154, 143, 64, 272, 182, 12, 45, 63, 3, 30, 46, 41, 99, 211, 266, 213, 211, 5, 93, 19, 14, 15, 164, 29, 114};
    vector<int> scissorsProb = {59, 128, 37, 249, 70, 8, 25, 8, 125, 151, 81, 2, 170, 120, 9, 61, 72, 8, 30, 127, 70, 25, 91, 281, 78, 26, 40, 92, 21, 37, 183, 158, 110, 270, 270, 55, 35, 95, 87, 17, 21, 46, 221, 154, 195, 18, 281, 8, 195, 72};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 69.43364763235115;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> rockProb = {74, 0, 300, 0, 17, 231, 0, 17, 96, 82, 8};
    vector<int> paperProb = {50, 0, 0, 0, 104, 66, 300, 196, 102, 198, 36};
    vector<int> scissorsProb = {176, 300, 0, 300, 179, 3, 0, 87, 102, 20, 256};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 17.712075162052344;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> rockProb = {99, 0, 7, 300, 28, 0, 0, 18, 31, 97, 300, 22, 85, 145, 92, 0, 0, 142, 300, 3, 6};
    vector<int> paperProb = {191, 300, 104, 0, 245, 0, 300, 29, 2, 190, 0, 160, 124, 17, 110, 0, 0, 129, 0, 53, 267};
    vector<int> scissorsProb = {10, 0, 189, 0, 27, 300, 0, 253, 267, 13, 0, 118, 91, 138, 98, 300, 300, 29, 0, 244, 27};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 32.09242580083826;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> rockProb = {111, 0, 300, 300, 300, 0, 0, 13, 238, 0, 98, 66, 163, 150, 300, 0, 92, 0, 0, 0, 300, 108, 0, 0, 5, 0, 30, 101, 0, 300, 173};
    vector<int> paperProb = {41, 300, 0, 0, 0, 0, 300, 209, 52, 300, 193, 6, 97, 64, 0, 300, 141, 300, 300, 300, 0, 4, 0, 0, 265, 300, 208, 145, 300, 0, 122};
    vector<int> scissorsProb = {148, 0, 0, 0, 0, 300, 0, 78, 10, 0, 9, 228, 40, 86, 0, 0, 67, 0, 0, 0, 0, 188, 300, 300, 30, 0, 62, 54, 0, 0, 5};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 50.721752823208384;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> rockProb = {0, 0, 95, 0, 300, 204, 28, 0, 0, 0, 158, 300, 209, 239, 270, 0, 0, 19, 0, 300, 0, 300, 300, 300, 105, 0, 135, 300, 133, 0, 300, 159, 300, 118, 0, 83, 39, 0, 0, 90, 22, 74, 8, 300, 8, 0, 0, 300, 300, 144};
    vector<int> paperProb = {0, 0, 103, 300, 0, 39, 259, 0, 0, 0, 9, 0, 19, 16, 27, 300, 0, 256, 300, 0, 0, 0, 0, 0, 72, 0, 160, 0, 105, 300, 0, 137, 0, 66, 0, 159, 16, 0, 300, 176, 261, 44, 285, 0, 282, 0, 300, 0, 0, 9};
    vector<int> scissorsProb = {300, 300, 102, 0, 0, 57, 13, 300, 300, 300, 133, 0, 72, 45, 3, 0, 300, 25, 0, 0, 300, 0, 0, 0, 123, 300, 5, 0, 62, 0, 0, 4, 0, 116, 300, 58, 245, 300, 0, 34, 17, 182, 7, 0, 10, 300, 0, 0, 0, 147};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 76.14371592490173;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> rockProb = {0, 0, 0, 0, 58, 300, 0, 7, 300, 0, 0, 175, 42, 0, 0, 16, 142, 0, 26, 0, 37, 0, 69, 49, 0, 0, 290, 136, 300, 300, 0, 168, 300, 255, 0, 0, 0, 46, 111, 23, 36, 0, 49, 0, 300, 142, 0, 10, 30, 190};
    vector<int> paperProb = {300, 300, 300, 300, 113, 0, 300, 191, 0, 300, 0, 5, 205, 0, 0, 107, 78, 0, 84, 300, 74, 0, 194, 120, 300, 300, 7, 153, 0, 0, 281, 112, 0, 2, 0, 0, 0, 140, 46, 61, 60, 300, 208, 300, 0, 19, 300, 221, 144, 32};
    vector<int> scissorsProb = {0, 0, 0, 0, 129, 0, 0, 102, 0, 0, 300, 120, 53, 300, 300, 177, 80, 300, 190, 0, 189, 300, 37, 131, 0, 0, 3, 11, 0, 0, 19, 20, 0, 43, 300, 300, 300, 114, 143, 216, 204, 0, 43, 0, 0, 139, 0, 69, 126, 78};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 79.20341419287061;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> rockProb = {8, 64, 8, 2, 48, 138, 73, 121, 0, 214, 7, 37, 49, 0, 300, 300, 0, 40, 7, 207, 90, 300, 0, 300, 300, 300, 0, 128, 300, 164, 36, 0, 85, 300, 2, 0, 74, 0, 152, 33, 155, 36, 38, 0, 300, 0, 120, 34, 0, 0};
    vector<int> paperProb = {282, 28, 280, 148, 25, 33, 155, 171, 0, 61, 282, 148, 186, 0, 0, 0, 0, 183, 8, 48, 98, 0, 0, 0, 0, 0, 300, 30, 0, 71, 157, 300, 5, 0, 290, 0, 194, 0, 16, 263, 126, 263, 260, 300, 0, 0, 5, 194, 300, 300};
    vector<int> scissorsProb = {10, 208, 12, 150, 227, 129, 72, 8, 300, 25, 11, 115, 65, 300, 0, 0, 300, 77, 285, 45, 112, 0, 300, 0, 0, 0, 0, 142, 0, 65, 107, 0, 210, 0, 8, 300, 32, 300, 132, 4, 19, 1, 2, 0, 0, 300, 175, 72, 0, 0};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 73.0457450053552;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> rockProb = {0, 81, 300, 300, 1, 0, 100, 88, 0, 121, 0, 0, 0, 130, 157, 31, 0, 99, 14, 218, 100, 202, 142, 140, 0, 88, 174, 91, 300, 3, 56, 0, 300, 86, 109, 277, 89, 104, 0, 20, 0, 0, 0, 300, 142, 300, 7, 5, 300, 300};
    vector<int> paperProb = {300, 93, 0, 0, 283, 300, 17, 201, 300, 106, 300, 300, 0, 60, 30, 9, 0, 116, 61, 32, 49, 8, 80, 70, 0, 130, 13, 158, 0, 7, 112, 300, 0, 207, 140, 17, 170, 62, 0, 272, 300, 300, 300, 0, 135, 0, 12, 280, 0, 0};
    vector<int> scissorsProb = {0, 126, 0, 0, 16, 0, 183, 11, 0, 73, 0, 0, 300, 110, 113, 260, 300, 85, 225, 50, 151, 90, 78, 90, 300, 82, 113, 51, 0, 290, 132, 0, 0, 7, 51, 6, 41, 134, 300, 8, 0, 0, 0, 0, 23, 0, 281, 15, 0, 0};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 74.06288243954104;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> rockProb = {289, 111, 23, 0, 34, 247, 0, 300, 12, 127, 0, 0, 0, 0, 26, 0, 91, 54, 0, 36, 0, 72, 0, 0, 0, 300, 13, 29, 126, 234, 104, 300, 95, 30, 103, 222, 300, 170, 300, 38, 86, 229, 0, 0, 0, 0, 300, 0, 96, 0};
    vector<int> paperProb = {0, 64, 127, 300, 108, 36, 300, 0, 35, 142, 0, 0, 300, 0, 145, 0, 44, 242, 0, 71, 300, 62, 300, 0, 0, 0, 94, 3, 53, 41, 155, 0, 119, 147, 143, 59, 0, 121, 0, 61, 82, 33, 0, 300, 300, 0, 0, 0, 176, 300};
    vector<int> scissorsProb = {11, 125, 150, 0, 158, 17, 0, 0, 253, 31, 300, 300, 0, 300, 129, 300, 165, 4, 300, 193, 0, 166, 0, 300, 300, 0, 193, 268, 121, 25, 41, 0, 86, 123, 54, 19, 0, 9, 0, 201, 132, 38, 300, 0, 0, 300, 0, 300, 28, 0};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 74.03353601177298;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> rockProb = {300, 0, 0, 300, 300, 0, 0, 0, 300, 0, 6, 300, 0, 300, 0, 0, 300, 155, 0, 182, 115, 300, 300, 0, 300, 300, 0, 300, 300, 0, 0, 300, 0, 0, 0, 0, 148, 300, 0, 0, 0, 300, 0, 300, 300, 300, 0, 0, 0, 0};
    vector<int> paperProb = {0, 300, 0, 0, 0, 300, 300, 0, 0, 300, 13, 0, 0, 0, 300, 0, 0, 76, 0, 38, 167, 0, 0, 0, 0, 0, 0, 0, 0, 300, 300, 0, 300, 300, 300, 0, 71, 0, 0, 300, 300, 0, 300, 0, 0, 0, 0, 0, 300, 300};
    vector<int> scissorsProb = {0, 0, 300, 0, 0, 0, 0, 300, 0, 0, 281, 0, 300, 0, 0, 300, 0, 69, 300, 80, 18, 0, 0, 300, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 300, 81, 0, 300, 0, 0, 0, 0, 0, 0, 0, 300, 300, 0, 0};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 82.51946608773501;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> rockProb = {300, 300, 300, 0, 0, 300, 209, 0, 300, 300, 300, 11, 300, 0, 0, 0, 300, 0, 0, 0, 0, 300, 0, 0, 29, 300, 300, 0, 0, 0, 300, 300, 300, 300, 300, 0, 0, 50, 300, 233, 10, 0, 0, 0, 0, 160, 111, 0, 0, 300};
    vector<int> paperProb = {0, 0, 0, 0, 300, 0, 26, 300, 0, 0, 0, 211, 0, 300, 0, 300, 0, 300, 0, 0, 0, 0, 300, 0, 21, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 300, 300, 52, 0, 13, 266, 300, 0, 300, 0, 0, 67, 300, 0, 0};
    vector<int> scissorsProb = {0, 0, 0, 300, 0, 0, 65, 0, 0, 0, 0, 78, 0, 0, 300, 0, 0, 0, 300, 300, 300, 0, 0, 300, 250, 0, 0, 0, 300, 300, 0, 0, 0, 0, 0, 0, 0, 198, 0, 54, 24, 0, 300, 0, 300, 140, 122, 0, 300, 0};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 81.98130035718516;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> rockProb = {0, 300, 300, 0, 300, 0, 128, 126, 0, 0, 18, 0, 0, 0, 52, 0, 300, 141, 300, 0, 0, 244, 300, 300, 0, 140, 0, 300, 0, 300, 0, 0, 300, 0, 300, 0, 300, 9, 0, 0, 0, 0, 0, 0, 0, 0, 300, 300, 0, 61};
    vector<int> paperProb = {0, 0, 0, 0, 0, 0, 97, 55, 300, 0, 278, 0, 0, 300, 61, 0, 0, 112, 0, 300, 300, 18, 0, 0, 300, 35, 0, 0, 300, 0, 300, 300, 0, 300, 0, 0, 0, 151, 300, 300, 300, 0, 300, 300, 0, 0, 0, 0, 300, 16};
    vector<int> scissorsProb = {300, 0, 0, 300, 0, 300, 75, 119, 0, 300, 4, 300, 300, 0, 187, 300, 0, 47, 0, 0, 0, 38, 0, 0, 0, 125, 300, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 140, 0, 0, 0, 300, 0, 0, 300, 300, 0, 0, 0, 223};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 75.95322232626319;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> rockProb = {83, 0, 0, 64, 211, 0, 300, 0, 14, 276, 0, 203, 0, 300, 0, 300, 0, 300, 0, 0, 33, 7, 300, 0, 0, 300, 0, 0, 0, 61, 0, 0, 0, 0, 0, 300, 0, 0, 0, 225, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> paperProb = {91, 0, 0, 76, 21, 0, 0, 0, 24, 16, 0, 21, 0, 0, 0, 0, 300, 0, 300, 0, 171, 180, 0, 0, 300, 0, 0, 0, 300, 211, 0, 0, 300, 300, 0, 0, 0, 0, 0, 48, 0, 0, 0, 300, 0, 0, 0, 0, 300, 0};
    vector<int> scissorsProb = {126, 300, 300, 160, 68, 300, 0, 300, 262, 8, 300, 76, 300, 0, 300, 0, 0, 0, 0, 300, 96, 113, 0, 300, 0, 0, 300, 300, 0, 28, 300, 300, 0, 0, 300, 0, 300, 300, 300, 27, 300, 0, 300, 0, 300, 300, 300, 300, 0, 300};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 93.9862282954834;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> rockProb = {0, 0, 0, 54, 134, 300, 0, 112, 135, 0, 0, 300, 0, 0, 300, 300, 300, 0, 28, 300, 0, 0, 149, 73, 300, 0, 122, 300, 0, 300, 0, 0, 0, 0, 300, 287, 300, 0, 0, 146, 0, 300, 0, 0, 0, 0, 148, 0, 23, 0};
    vector<int> paperProb = {300, 300, 300, 114, 26, 0, 300, 73, 118, 300, 300, 0, 300, 300, 0, 0, 0, 300, 12, 0, 0, 300, 44, 127, 0, 300, 134, 0, 0, 0, 300, 300, 0, 300, 0, 3, 0, 0, 0, 100, 300, 0, 0, 300, 300, 0, 117, 300, 33, 300};
    vector<int> scissorsProb = {0, 0, 0, 132, 140, 0, 0, 115, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 300, 0, 107, 100, 0, 0, 44, 0, 300, 0, 0, 0, 300, 0, 0, 10, 0, 300, 300, 54, 0, 0, 300, 0, 0, 300, 35, 0, 244, 0};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 80.61254148764135;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> rockProb = {110, 184, 8, 2, 53, 28, 0, 0, 13, 37, 246, 38, 253, 185, 259, 33, 8, 137, 88, 51, 52, 44, 213, 300, 203, 49, 85, 0, 0, 199, 14, 70, 130, 0, 300, 300, 59, 300, 300, 284, 0, 29, 11, 269, 72, 6, 213, 192, 300, 36};
    vector<int> paperProb = {163, 20, 85, 23, 12, 1, 300, 300, 69, 14, 47, 138, 37, 107, 10, 114, 12, 9, 105, 23, 238, 103, 22, 0, 3, 181, 142, 300, 0, 3, 258, 218, 9, 0, 0, 0, 12, 0, 0, 10, 300, 133, 165, 0, 142, 31, 10, 45, 0, 136};
    vector<int> scissorsProb = {27, 96, 207, 275, 235, 271, 0, 0, 218, 249, 7, 124, 10, 8, 31, 153, 280, 154, 107, 226, 10, 153, 65, 0, 94, 70, 73, 0, 300, 98, 28, 12, 161, 300, 0, 0, 229, 0, 0, 6, 0, 138, 124, 31, 86, 263, 77, 63, 0, 128};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 73.67165525755007;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> rockProb = {3, 173, 0, 171, 174, 0, 0, 145, 52, 0, 42, 172, 146, 75, 164, 13, 18, 1, 89, 109, 71, 300, 43, 0, 273, 112, 7, 220, 300, 178, 23, 32, 300, 0, 29, 261, 80, 119, 10, 8, 104, 27, 0, 212, 208, 185, 0, 127, 0, 93};
    vector<int> paperProb = {287, 28, 0, 15, 110, 0, 300, 115, 223, 0, 151, 44, 137, 89, 70, 261, 1, 278, 92, 184, 34, 0, 123, 300, 12, 66, 276, 10, 0, 106, 44, 186, 0, 300, 250, 35, 192, 122, 230, 281, 192, 42, 0, 36, 76, 50, 300, 131, 300, 104};
    vector<int> scissorsProb = {10, 99, 300, 114, 16, 300, 0, 40, 25, 300, 107, 84, 17, 136, 66, 26, 281, 21, 119, 7, 195, 0, 134, 0, 15, 122, 17, 70, 0, 16, 233, 82, 0, 0, 21, 4, 28, 59, 60, 11, 4, 231, 300, 52, 16, 65, 0, 42, 0, 103};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 75.60592094732979;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> rockProb = {47, 300, 228, 23, 239, 300, 10, 165, 132, 210, 164, 123, 6, 34, 25, 281, 31, 42, 103, 64, 65, 89, 86, 300, 6, 244, 57, 0, 23, 182, 35, 65, 192, 34, 95, 155, 40, 0, 55, 300, 300, 23, 76, 250, 216, 300, 236, 63, 210, 300};
    vector<int> paperProb = {88, 0, 22, 93, 2, 0, 3, 124, 59, 60, 18, 15, 285, 31, 44, 18, 219, 228, 65, 228, 109, 182, 133, 0, 33, 13, 217, 0, 118, 70, 134, 162, 79, 85, 4, 7, 20, 300, 109, 0, 0, 5, 53, 46, 59, 0, 22, 194, 84, 0};
    vector<int> scissorsProb = {165, 0, 50, 184, 59, 0, 287, 11, 109, 30, 118, 162, 9, 235, 231, 1, 50, 30, 132, 8, 126, 29, 81, 0, 261, 43, 26, 300, 159, 48, 131, 73, 29, 181, 201, 138, 240, 0, 136, 0, 0, 272, 171, 4, 25, 0, 42, 43, 6, 0};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 78.23647207715135;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> rockProb = {73, 5, 68, 16, 60, 0, 300, 21, 140, 300, 1, 0, 109, 217, 67, 41, 0, 255, 44, 50, 71, 300, 9, 72, 71, 20, 83, 0, 0, 71, 10, 27, 16, 0, 0, 239, 0, 256, 133, 44, 128, 108, 0, 203, 19, 0, 183, 166, 120, 207};
    vector<int> paperProb = {190, 30, 143, 38, 137, 0, 0, 190, 12, 0, 116, 0, 115, 31, 72, 181, 0, 41, 237, 165, 73, 0, 230, 162, 51, 13, 199, 300, 300, 143, 76, 64, 24, 300, 0, 30, 0, 20, 116, 240, 138, 42, 300, 5, 9, 300, 53, 102, 164, 60};
    vector<int> scissorsProb = {37, 265, 89, 246, 103, 300, 0, 89, 148, 0, 183, 300, 76, 52, 161, 78, 300, 4, 19, 85, 156, 0, 61, 66, 178, 267, 18, 0, 0, 86, 214, 209, 260, 0, 300, 31, 300, 24, 51, 16, 34, 150, 0, 92, 272, 0, 64, 32, 16, 33};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 72.20892731273936;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> rockProb = {102, 110, 146, 184, 157, 141, 34, 30, 20, 164, 0, 47, 271, 52, 300, 55, 252, 300, 12, 55, 7, 269, 38, 300, 149, 0, 140, 0, 27, 0, 12, 7, 54, 0, 145, 14, 18, 228, 0, 98, 77, 300, 110, 300, 48, 115, 147, 90, 0, 0};
    vector<int> paperProb = {100, 13, 45, 72, 3, 157, 173, 1, 51, 21, 0, 157, 5, 211, 0, 231, 18, 0, 1, 238, 63, 14, 45, 0, 27, 0, 41, 0, 22, 300, 81, 145, 111, 0, 107, 219, 201, 18, 0, 150, 124, 0, 141, 0, 252, 9, 106, 13, 0, 300};
    vector<int> scissorsProb = {98, 177, 109, 44, 140, 2, 93, 269, 229, 115, 300, 96, 24, 37, 0, 14, 30, 0, 287, 7, 230, 17, 217, 0, 124, 300, 119, 300, 251, 0, 207, 148, 135, 300, 48, 67, 81, 54, 300, 52, 99, 0, 49, 0, 0, 176, 47, 197, 300, 0};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 76.2181218814406;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> rockProb = {0, 0, 0, 0, 300, 0, 0, 300, 0, 0, 0, 0, 0, 300, 300, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 300, 0, 300, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 300};
    vector<int> paperProb = {300, 300, 0, 0, 0, 300, 300, 0, 300, 0, 300, 300, 0, 0, 0, 0, 300, 300, 0, 0, 300, 300, 0, 0, 0, 0, 0, 0, 0, 300, 0, 300, 0, 300, 300, 300, 0, 0, 300, 0, 300, 300, 0, 0, 300, 0, 300, 0, 0, 0};
    vector<int> scissorsProb = {0, 0, 300, 300, 0, 0, 0, 0, 0, 300, 0, 0, 300, 0, 0, 300, 0, 0, 300, 300, 0, 0, 0, 300, 300, 300, 0, 300, 0, 0, 0, 0, 300, 0, 0, 0, 300, 300, 0, 300, 0, 0, 0, 300, 0, 300, 0, 300, 300, 0};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 87.64700304503981;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> rockProb = {0, 0, 0, 300, 0, 300, 300, 0, 0, 0, 0, 300, 300, 0, 0, 0, 0, 0, 0, 0, 0, 300, 300, 0, 300, 0, 300, 0, 0, 0, 0, 0, 300, 0, 0, 300, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> paperProb = {300, 0, 300, 0, 300, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 300, 0, 300, 300, 0, 0, 0, 0, 0, 300, 0, 0, 0, 300, 0, 0, 0, 300, 0, 300, 300, 0};
    vector<int> scissorsProb = {0, 300, 0, 0, 0, 0, 0, 300, 0, 300, 300, 0, 0, 300, 300, 300, 300, 0, 300, 300, 300, 0, 0, 300, 0, 0, 0, 300, 0, 300, 0, 0, 0, 300, 300, 0, 0, 0, 300, 300, 300, 0, 300, 300, 300, 0, 300, 0, 0, 300};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 88.89402014389566;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> rockProb = {0, 0, 0, 0, 0, 0, 300, 300, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 300, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 300, 300, 0, 300, 0, 0, 0, 0, 0, 0, 0, 300, 0, 300, 300, 0, 0, 0, 300, 0, 0};
    vector<int> paperProb = {300, 0, 0, 0, 300, 0, 0, 0, 0, 0, 300, 300, 300, 300, 0, 0, 0, 0, 0, 300, 300, 0, 300, 300, 300, 300, 300, 300, 0, 0, 0, 300, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 300, 300, 0, 0, 300};
    vector<int> scissorsProb = {0, 300, 300, 300, 0, 300, 0, 0, 300, 300, 0, 0, 0, 0, 300, 0, 300, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 300, 300, 300, 300, 0, 300, 300, 0, 300, 0, 0, 300, 0, 0, 0, 300, 0};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 83.82060132141658;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> rockProb = {35, 6, 1, 42, 10, 1, 13, 40, 33, 12, 12, 7, 6, 3, 8, 22, 24, 7, 39, 10, 28, 21, 10, 17, 9, 10, 44, 53, 12, 3, 12, 12, 14, 5, 9, 6, 6, 44, 5, 29, 1, 10, 41, 43, 1, 14, 28, 9, 3, 18};
    vector<int> paperProb = {4, 26, 20, 4, 27, 17, 38, 11, 4, 30, 1, 19, 27, 22, 23, 2, 14, 6, 1, 5, 3, 28, 32, 2, 29, 20, 12, 5, 33, 49, 35, 17, 14, 33, 27, 10, 9, 8, 14, 10, 23, 14, 6, 2, 22, 23, 32, 8, 12, 1};
    vector<int> scissorsProb = {261, 268, 279, 254, 263, 282, 249, 249, 263, 258, 287, 274, 267, 275, 269, 276, 262, 287, 260, 285, 269, 251, 258, 281, 262, 270, 244, 242, 255, 248, 253, 271, 272, 262, 264, 284, 285, 248, 281, 261, 276, 276, 253, 255, 277, 263, 240, 283, 285, 281};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 136.00666666666666;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> rockProb = {257, 256, 263, 261, 259, 286, 269, 282, 283, 255, 265, 286, 246, 288, 263, 286, 277, 279, 282, 269, 266, 275, 250, 279, 250, 269, 254, 276, 276, 263, 260, 288, 266, 259, 251, 252, 285, 262, 280, 288, 282, 262, 284, 285, 281, 247, 286, 278, 290, 250};
    vector<int> paperProb = {17, 8, 36, 37, 18, 12, 10, 5, 6, 12, 1, 8, 38, 6, 22, 5, 14, 6, 18, 11, 14, 13, 4, 13, 32, 14, 10, 20, 21, 15, 1, 8, 20, 11, 45, 40, 6, 36, 19, 10, 11, 1, 13, 6, 18, 27, 3, 13, 1, 27};
    vector<int> scissorsProb = {26, 36, 1, 2, 23, 2, 21, 13, 11, 33, 34, 6, 16, 6, 15, 9, 9, 15, 0, 20, 20, 12, 46, 8, 18, 17, 36, 4, 3, 22, 39, 4, 14, 30, 4, 8, 9, 2, 1, 2, 7, 37, 3, 9, 1, 26, 11, 9, 9, 23};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 137.59999999999997;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> rockProb = {35, 8, 9, 42, 39, 3, 26, 24, 15, 18, 15, 35, 21, 0, 18, 6, 8, 3, 28, 46, 11, 29, 15, 23, 39, 8, 15, 18, 9, 8, 3, 1, 3, 9, 28, 6, 24, 6, 11, 5, 9, 8, 27, 14, 42, 6, 18, 4, 13, 46};
    vector<int> paperProb = {1, 52, 23, 6, 3, 33, 18, 3, 18, 38, 11, 18, 14, 12, 38, 5, 19, 11, 6, 7, 25, 9, 15, 22, 15, 23, 19, 11, 27, 13, 54, 33, 12, 26, 17, 48, 9, 7, 3, 34, 4, 7, 7, 7, 3, 25, 14, 22, 45, 11};
    vector<int> scissorsProb = {264, 240, 268, 252, 258, 264, 256, 273, 267, 244, 274, 247, 265, 288, 244, 289, 273, 286, 266, 247, 264, 262, 270, 255, 246, 269, 266, 271, 264, 279, 243, 266, 285, 265, 255, 246, 267, 287, 286, 261, 287, 285, 266, 279, 255, 269, 268, 274, 242, 243};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 135.2566666666667;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> rockProb = {245, 259, 267, 244, 289, 245, 249, 283, 290, 244, 266, 276, 282, 283, 276, 290, 242, 246, 262, 267, 278, 255, 248, 256, 282, 281, 257, 282, 277, 278, 270, 268, 245, 268, 243, 286, 254, 241, 259, 263, 256, 288, 287, 256, 285, 242, 242, 258, 272, 266};
    vector<int> paperProb = {26, 41, 14, 14, 9, 6, 3, 12, 3, 45, 19, 12, 15, 12, 17, 5, 10, 20, 9, 30, 19, 36, 2, 33, 17, 13, 16, 10, 11, 13, 25, 15, 14, 12, 38, 6, 13, 10, 14, 19, 7, 4, 13, 32, 1, 9, 1, 30, 13, 30};
    vector<int> scissorsProb = {29, 0, 19, 42, 2, 49, 48, 5, 7, 11, 15, 12, 3, 5, 7, 5, 48, 34, 29, 3, 3, 9, 50, 11, 1, 6, 27, 8, 12, 9, 5, 17, 41, 20, 19, 8, 33, 49, 27, 18, 37, 8, 0, 12, 14, 49, 57, 12, 15, 4};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 135.14000000000007;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> rockProb = {0, 16, 14, 4, 2, 8, 5, 11, 10, 7, 9, 8, 2, 18, 38, 7, 40, 14, 9, 4, 0, 33, 8, 4, 15, 16, 21, 18, 17, 6, 17, 21, 19, 41, 2, 7, 9, 10, 11, 10, 30, 16, 15, 40, 16, 3, 6, 5, 14, 8};
    vector<int> paperProb = {31, 4, 10, 53, 54, 19, 13, 15, 27, 20, 13, 12, 39, 6, 10, 20, 17, 36, 11, 44, 44, 23, 12, 25, 6, 24, 5, 2, 22, 42, 13, 14, 15, 15, 12, 6, 15, 47, 24, 19, 30, 8, 23, 16, 23, 11, 14, 16, 35, 3};
    vector<int> scissorsProb = {269, 280, 276, 243, 244, 273, 282, 274, 263, 273, 278, 280, 259, 276, 252, 273, 243, 250, 280, 252, 256, 244, 280, 271, 279, 260, 274, 280, 261, 252, 270, 265, 266, 244, 286, 287, 276, 243, 265, 271, 240, 276, 262, 244, 261, 286, 280, 279, 251, 289};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 135.39333333333335;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> rockProb = {17, 24, 10, 30, 33, 15, 5, 25, 18, 13, 34, 23, 1, 27, 31, 43, 30, 19, 23, 7, 1, 2, 0, 16, 9, 13, 8, 3, 4, 19, 8, 3, 12, 9, 55, 15, 37, 15, 5, 39, 35, 37, 18, 1, 22, 12, 23, 15, 23, 39};
    vector<int> paperProb = {31, 22, 20, 4, 1, 20, 9, 1, 25, 4, 7, 4, 40, 21, 18, 14, 16, 38, 24, 13, 34, 42, 29, 22, 14, 2, 3, 19, 48, 23, 25, 21, 23, 34, 3, 18, 17, 41, 45, 18, 21, 11, 2, 22, 37, 20, 5, 35, 34, 4};
    vector<int> scissorsProb = {252, 254, 270, 266, 266, 265, 286, 274, 257, 283, 259, 273, 259, 252, 251, 243, 254, 243, 253, 280, 265, 256, 271, 262, 277, 285, 289, 278, 248, 258, 267, 276, 265, 257, 242, 267, 246, 244, 250, 243, 244, 252, 280, 277, 241, 268, 272, 250, 243, 257};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 133.78666666666666;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> rockProb = {38, 6, 7, 29, 1, 14, 11, 13, 2, 7};
    vector<int> paperProb = {241, 284, 287, 264, 282, 276, 289, 281, 272, 247};
    vector<int> scissorsProb = {21, 10, 6, 7, 17, 10, 0, 6, 26, 46};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 27.726666666666674;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> rockProb = {284, 251, 276, 281, 284, 269, 275, 287, 268, 241};
    vector<int> paperProb = {8, 9, 21, 3, 6, 28, 12, 2, 15, 18};
    vector<int> scissorsProb = {8, 40, 3, 16, 10, 3, 13, 11, 17, 41};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 27.566666666666666;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> rockProb = {101, 100, 100, 99, 101, 100, 100, 101, 101, 100, 101, 101, 100, 99, 99, 99, 101, 100, 101, 101, 101, 99, 99, 100, 100, 101, 101, 99, 101, 100, 100, 100, 100, 100, 101, 101, 101, 99, 99, 100, 101, 101, 101, 99, 101, 99, 101, 101, 101, 101};
    vector<int> paperProb = {99, 101, 101, 100, 99, 101, 101, 99, 99, 101, 99, 99, 101, 100, 100, 100, 99, 101, 99, 99, 99, 100, 100, 101, 101, 99, 99, 100, 99, 101, 101, 101, 101, 101, 99, 99, 99, 100, 100, 101, 99, 99, 99, 100, 99, 100, 99, 99, 99, 99};
    vector<int> scissorsProb = {100, 99, 99, 101, 100, 99, 99, 100, 100, 99, 100, 100, 99, 101, 101, 101, 100, 99, 100, 100, 100, 101, 101, 99, 99, 100, 100, 101, 100, 99, 99, 99, 99, 99, 100, 100, 100, 101, 101, 99, 100, 100, 100, 101, 100, 101, 100, 100, 100, 100};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 66.76666666666667;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> rockProb = {187, 122, 58, 241, 41, 216, 122, 43, 172, 85, 77, 55, 187, 171, 143, 258, 252, 63, 166, 235, 190, 177, 124, 74, 232, 108, 155, 135, 63, 199, 216, 33, 246, 263, 104, 166, 66, 150, 189, 60, 3, 70, 255, 164, 168, 179, 125, 66, 123, 69};
    vector<int> paperProb = {60, 92, 234, 53, 75, 15, 1, 59, 80, 61, 12, 189, 76, 80, 44, 23, 37, 64, 105, 18, 28, 45, 0, 28, 57, 9, 25, 81, 155, 76, 63, 234, 32, 21, 104, 104, 46, 107, 5, 123, 202, 211, 13, 83, 78, 33, 30, 180, 160, 186};
    vector<int> scissorsProb = {53, 86, 8, 6, 184, 69, 177, 198, 48, 154, 211, 56, 37, 49, 113, 19, 11, 173, 29, 47, 82, 78, 176, 198, 11, 183, 120, 84, 82, 25, 21, 33, 22, 16, 92, 30, 188, 43, 106, 117, 95, 19, 32, 53, 54, 88, 145, 54, 17, 45};
    RockPaperScissors* pObj = new RockPaperScissors();
    clock_t start = clock();
    double result = pObj->bestScore(rockProb, paperProb, scissorsProb);
    clock_t end = clock();
    delete pObj;
    double expected = 83.65000000000015;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=15499&pm=12349
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
#include <complex>
#include <queue>
#include <climits>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef complex<double> pnt;
typedef pair<int, int> pii;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define SZ(x) ((int) (x).size())
 
 
class RockPaperScissors
{
public:
    double bestScore(vector <int> rockProb, vector <int> paperProb, vector <int> scissorsProb);
};
 
static double dp[51][51][51], dp2[51][51][51], ex[51][51][51];
 
double RockPaperScissors::bestScore(vector <int> P1, vector <int> P2, vector <int> P3)
{
    int N = P1.size();
    memset(dp, 0, sizeof(dp));
    dp[0][0][0] = 1.0;
    for (int i = 1; i <= N; i++)
    {
        memset(dp2, 0, sizeof(dp2));
        dp2[0][0][0] = 1.0;
        for (int a = 0; a <= i; a++)
            for (int b = 0; a + b <= i; b++)
                for (int c = 0; a + b + c <= i; c++)
                {
                    int r = a + b + c;
                    if (r == 0)
                        continue;
                    dp2[a][b][c] = dp[a][b][c] * (i - r) / i;
                    double scl = r / (i * 300.0);
                    if (a > 0)
                        dp2[a][b][c] += dp[a - 1][b][c] * P1[i - 1] * scl;
                    if (b > 0)
                        dp2[a][b][c] += dp[a][b - 1][c] * P2[i - 1] * scl;
                    if (c > 0)
                        dp2[a][b][c] += dp[a][b][c - 1] * P3[i - 1] * scl;
                }
        memcpy(dp, dp2, sizeof(dp));
    }
 
    memset(ex, 0, sizeof(ex));
    for (int a = N; a >= 0; a--)
        for (int b = N - a; b >= 0; b--)
            for (int c = N - a - b; c >= 0; c--)
            {
                int r = a + b + c;
                if (r == N)
                    ex[a][b][c] = 0.0;
                else
                {
                    double v[3];
                    double f[3];
                    v[0] = dp[a + 1][b][c] * (a + 1) / (r + 1); f[0] = ex[a + 1][b][c];
                    v[1] = dp[a][b + 1][c] * (b + 1) / (r + 1); f[1] = ex[a][b + 1][c];
                    v[2] = dp[a][b][c + 1] * (c + 1) / (r + 1); f[2] = ex[a][b][c + 1];
                    double best = 0.0;
                    for (int s = 0; s < 3; s++)
                        if (v[s] == 0)
                            f[s] = 0.0; // avoid NaN trouble
                    for (int s = 0; s < 3; s++)
                    {
                        double e = v[0] * (f[0] + 1.0) + v[1] * f[1] + v[2] * (f[2] + 3.0);
                        best = max(best, e);
                        rotate(v, v + 1, v + 3);
                        rotate(f, f + 1, f + 3);
                    }
                    best /= (v[0] + v[1] + v[2]);
                    ex[a][b][c] = best;
                }
            }
    return ex[0][0][0];
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/