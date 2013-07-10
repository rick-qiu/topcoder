/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12586
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

class TreeUnion {
public:
    double expectedCycles(vector<string> tree1, vector<string> tree2, int K);
};

double TreeUnion::expectedCycles(vector<string> tree1, vector<string> tree2, int K) {
    double ret;
    return ret;
}


int test0() {
    vector<string> tree1 = {"0"};
    vector<string> tree2 = {"0"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> tree1 = {"0 1"};
    vector<string> tree2 = {"0 1"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> tree1 = {"0 1"};
    vector<string> tree2 = {"0 1"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> tree1 = {"0 ", "1 1 1"};
    vector<string> tree2 = {"0 1 0 ", "1"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> tree1 = {"0 1 2 0 1 2 0 1 2 5 6 1", "0 11", " 4"};
    vector<string> tree2 = {"0 1 1 0 2 3 4 3 4 6 6", " 10 12 12"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 13.314285714285713;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> tree1 = {"0 1 2 0 0 2 3 4 6 7 0 3 1 5 10 0 7 13 4 0 8 0 11 2", "0 23 2 10 6 20 15 20 14 4 28 16 33 10 21 2 19 37 3", "2 24 35 38 12 36 10 46 12 19 13 31 36 46 2 16 49 5", "6 1 41 0 58 6 34 56 31 26 43 10 52 31 25 11 17 17 ", "36 72 11 38 32 26 42 60 3 77 49 65 7 3 15 0 77 6 5", "9 91 70 66 29 71 15 66 58 99 97 14 19 44 58 86 82 ", "42 33 10 35 39 74 80 10 56 108 21 37 108 5 103 75 ", "123 117 123 4 89 111 15 4 99 71 68 11 68 106 10 73", " 83 138 1 78 142 34 63 90 76 20 136 118 6 130 128 ", "17 21 80 157 79 120 108 69 125 60 149 15 76 60 159", " 115 52 45 79 6 78 87 122 69 170 144 29 99 100 68 ", "64 1 164 184 53 185 136 66 132 162 108 88 157 156 ", "34 116 31 36 197 141 174 2 67 62 17 61 152 29 115 ", "41 196 33 162 6 39 49 158 119 163 106 93 179 163 2", "05 107 93 86 112 66 81 150 28 155 73 106 219 78 76", " 188 172"};
    vector<string> tree2 = {"0 1 0 1 3 3 3 7 5 5 5 4 6 13 7 7 4 3 7 9 12 13 9 2", "2 15 18 2 23 22 6 23 18 4 29 21 35 13 13 35 27 32 ", "41 16 31 29 28 46 30 27 18 11 38 37 52 5 1 36 33 3", " 53 24 49 7 53 42 47 31 66 13 52 33 1 40 33 13 51 ", "46 75 78 47 76 67 72 72 76 15 32 28 3 20 10 32 85 ", "48 14 63 45 81 4 0 53 33 11 32 69 42 32 69 69 21 4", "3 68 67 42 39 17 49 116 4 99 119 68 120 104 40 60 ", "59 102 35 119 119 103 2 30 20 91 15 17 82 127 29 5", "5 95 84 141 143 88 130 38 120 101 92 41 151 61 19 ", "113 89 94 36 4 62 41 89 74 144 20 39 165 115 96 13", "0 137 144 117 148 132 69 160 159 8 105 83 47 51 95", " 98 54 48 167 179 26 171 193 54 137 172 197 125 13", "6 101 31 183 139 5 121 127 43 191 193 68 89 65 190", " 52 98 41 44 119 34 88 88 194 17 127 200 210 197 2", "03 197 141 220 103 51 55 233 23 70 94 77 65 134 15", "6 62 212 73 224 224"};
    int K = 3;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> tree1 = {"0 1 2 1 4 1 2 6 6 7 0 2 9 10 3 10 14 1 9 7 3 1 4 0", " 6 7 0 15 28 27 12 21 14 17 3 13 6 24 1 14 9 9 5 2", "2 28 14 17 2 18 10 36 17 22 37 4 42 36 44 45 8 32 ", "14 18 13 15 65 42 41 26 4 18 46 54 70 45 38 26 71 ", "2 41 61 74 73 48 50 22 35 50 55 6 81 51 17 23 90 7", "9 16 38 32 55 77 25 2 48 35 57 52 20 62 96 89 46 4", " 109 86 39 69 4 26 56 77 75 18 42 9 39 108 121 4 4", " 67 126 78 71 46 36 128 65 86 74 71 93 5 20 28 71"};
    vector<string> tree2 = {"0 0 1 0 3 0 6 1 0 3 9 2 6 5 3 3 16 12 4 8 20 1 17 ", "6 1 5 14 15 2 29 2 9 14 11 11 1 34 20 10 19 16 21 ", "26 40 1 19 41 24 46 37 40 18 23 22 6 51 50 38 12 3", "8 52 13 49 16 2 60 51 3 5 43 26 17 15 31 69 72 41 ", "69 27 48 69 45 38 7 5 60 17 52 4 49 44 5 48 39 1 1", "6 63 18 74 19 55 27 48 45 80 46 30 45 27 87 80 102", " 69 46 88 101 58 90 54 66 85 19 31 45 68 19 124 85", " 104 109 22 118 92 15 48 23 128 66 87 110 64 136 1", "17 117 106 44"};
    int K = 3;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> tree1 = {"0 0 1 3 1 3 2 7 3 9 8 4 6 11 9 2 12 9 9 0 0 18 0 5", " 15 25 0 7 1 13 27 11 27 19 12 2 3 36 15 33 36 29 ", "21 26 44 6 34 36 22 43 29 28 28 33 15 49 42 44 39 ", "53 15 6 45 21 40 42 53 36 35 10 56 52 23 52 61 28 ", "66 73 59 45 23 46 64 3 9 48 49 10 45 68 7 39 84 77", " 81 90 17 95 70 52 51 17 26 103 74 56 9 41 11 83 8", "4 105 48 14 48 15 1 57 13 111 54 6 88 41 50 47 65 ", "23 63 28 94 26 65 2 124 3 97 114 49 54 46 95 132 2", "5 118 76 102 64 99 37 142 90 9 35 40 150"};
    vector<string> tree2 = {"0 0 0 0 3 1 2 2 7 4 2 3 5 11 7 7 3 8 14 2 3 4 17 1", "0 6 17 2 22 26 0 25 31 18 27 19 8 18 3 6 17 16 34 ", "20 18 35 42 21 23 12 15 21 50 14 29 9 30 28 35 0 5", "6 60 9 29 60 12 24 49 59 8 69 49 46 57 40 73 5 55 ", "74 7 75 60 28 37 20 39 16 53 36 61 22 31 77 24 47 ", "87 25 59 64 25 99 39 45 80 53 16 36 35 21 17 23 83", " 104 4 97 61 23 50 7 86 70 6 97 99 63 68 56 63 37 ", "45 32 60 93 56 61 115 68 118 4 31 52 120 11 81 62 ", "3 79 110 43 39 52 46 35 39 36 63 49"};
    int K = 3;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> tree1 = {"0 0 2 3 0 4 6 6 6 2 0 1 7 11 12 9 11 12 15 17 0 19", " 22 16 20 19 7 6 13 26 9 10 8 9 11 10 3 33 23 1 38", " 19 27 35 4 18 6 32 48 2 27 4 28 3 46 30 20 36 44 ", "14 38 25 55 41 20 43 41 50 16 8 13 7 51 34 32 65 5", "1 2 53 55 78 76 32 53 17 58 67 64 76 66 27 13 68 5", "0 50 2 87 22 25 48 48 85 83 46 22 22 89 56 78 83 9", "7 40 22 46 52 59 6 60 70 5 26 21 9 123 58 50 12 94", " 45 120 37 88 45 131 71 8 82 28 71 15 28 128 43 11", "8 71 62 126 74 105 10 129 81 103 115 123 132 45 22", " 4 28 0 71 131 30 80 93 63 160 61 0 97 154 121 109"};
    vector<string> tree2 = {"0 0 0 2 2 0 0 2 7 0 3 8 1 10 12 10 0 7 6 18 18 16 ", "14 9 12 18 26 26 0 10 30 23 6 26 15 31 26 34 21 13", " 40 38 5 20 0 9 16 18 44 1 22 2 33 17 42 4 36 30 5", "5 18 28 30 39 50 19 64 34 59 22 58 0 61 15 10 45 1", "0 75 38 65 64 56 20 32 7 61 54 40 28 62 14 76 40 8", " 63 11 34 16 58 79 96 35 16 64 24 92 51 54 65 80 7", "1 86 66 2 27 47 57 106 20 71 49 93 65 112 52 106 5", "0 122 86 70 92 83 15 24 49 66 43 114 12 31 42 109 ", "69 112 61 99 102 121 94 145 33 39 144 37 39 100 12", "9 139 92 28 64 1 58 69 96 87 64 117 43 112 46 103 ", "29 150 154"};
    int K = 3;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> tree1 = {"0 1 2 1 3 5"};
    vector<string> tree2 = {"0 1 2 1 2 4"};
    int K = 3;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> tree1 = {"0 1 0 2 4 2 0 0 6 1 6 7 3 6 0 12 15 6 1 19 13 17 9", " 2 2 13 17 24 11 13 11 2 1 24 2 22 33 36 0 7 0 7 1", "9 39 23 30 32 35 45 39 10 46 24 18 32 34 19 57 8 2", "9 33 9 27 4 8 37 10 38 56 35 47 55 54 63 70 70 49 ", "50 20 31 49 52 30 27 62 3 21 42 33 34 32 35 12 59 ", "44 12 18 70 14 18 1 92 20 2 0 44 51 105 18 8 63 80", " 73 12 14 23 12 99 8 15 25 71 83 121 58 78 57 107 ", "2 64 63 56 8 31 110 68 3 75 53 105 89 44 111 68 99", " 108 53 128 53 1 140 81 73 42 65 135 83 115 2 41 9", "9 147 36 143 4 3 86 76 121 17 64 148 65 137 109 11", "4 69 46 63 92 128 82 132 117 9 140 83 56 151 157 1", "71 87 77 120 44 57 189 139 23 87 86 25 83 80 119 9", "7 1 23 165 122 30 196 102 66 104 19 211 22 13 204 ", "101 155 140 71"};
    vector<string> tree2 = {"0 0 1 1 3 2 3 1 8 0 7 9 7 9 12 8 13 2 2 8 19 17 18", " 5 14 13 5 23 23 28 14 17 4 7 20 9 20 21 3 28 28 1", "2 42 5 11 6 45 21 6 22 0 51 15 14 22 17 49 55 45 4", "6 60 10 34 2 12 36 14 64 9 55 45 44 32 58 5 16 13 ", "8 58 73 22 71 51 68 26 52 7 85 19 87 39 63 76 25 4", "2 28 87 72 80 79 25 76 23 79 91 26 66 55 33 10 35 ", "106 103 84 63 110 79 88 89 116 19 108 45 57 2 31 8", "7 40 55 50 48 111 119 9 67 9 94 26 21 122 65 74 92", " 73 68 88 91 32 145 82 132 25 96 16 80 146 99 152 ", "134 96 141 101 36 4 44 58 23 104 150 92 67 119 144", " 132 74 124 163 142 128 84 141 162 15 136 55 139 1", "84 33 133 70 118 85 27 139 17 88 180 63 134 12 47 ", "72 146 63 160 86 100 33 188 57 192 207 1 208 9 146", " 51 118 144 210 40 192 76 108"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.991111111111111;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> tree1 = {"0 0 0 1 1 2 1 0 7 0 7 10 11 4 10 0 10 14 3 10 19 1", "2 11 19 22 3 14 2 28 18 14 11 8 33 5 12 0 32 25 11", " 16 27 1 10 0 42 12 20 20 4"};
    vector<string> tree2 = {"0 0 2 0 0 4 2 7 5 9 2 4 4 4 10 6 0 14 5 18 7 14 12", " 19 11 25 8 22 2 20 22 15 1 4 0 1 18 27 1 29 33 24", " 16 33 18 40 7 15 32 4"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9607843137254903;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> tree1 = {"0 1 0 0 4 4 1 0 3 0 8 11 9 0 11 13 0 7 14 15 6 17 ", "16 15 0 2 1 17 13 23 29 11 14 24 13 32 28 24 28 37", " 16 20 22 36 41 24 32 41 42 44 11 48 6 17 27 28 46", " 32 43 43 3 25 11 33 46 59 22 5 65 67 56 48 72 66 ", "8 64 17 69 38 37 61 52 7 5 62 20 63 50 29 68 35 83", " 33 88 61 78 4 36 92 47 66 42 24 23 50 27 95 76 69", " 2 66 75 20 77 12 33 9 71 69 81 50 98 104 37 104 8", "1 58 89 65 90 112 115 1 87 70 132 114 59 75 19 9 1", "19 97 81 93 84 87 43 21 43 81 53 8 65 100 82 34 8 ", "77 0 5 67 85 19 144 156 116 37 36 129 52 169 125 1", "71 41 147 143 50 51 76 163 131 100 73 4 154 79"};
    vector<string> tree2 = {"0 0 2 0 2 3 5 0 3 8 1 8 0 10 0 10 8 12 14 9 13 19 ", "1 11 0 11 24 12 25 25 21 20 3 15 2 1 1 33 9 17 26 ", "26 27 41 8 29 31 1 41 37 16 18 38 15 37 21 7 23 35", " 37 8 58 29 36 21 63 7 63 37 49 9 24 26 34 2 4 42 ", "36 2 2 2 45 10 11 56 38 1 77 20 54 87 90 33 16 87 ", "38 70 80 58 47 65 36 86 56 65 102 50 103 52 77 25 ", "70 97 98 72 84 61 114 82 30 54 116 27 7 13 51 118 ", "101 46 63 8 44 43 86 63 21 31 19 99 26 97 87 133 1", "18 34 32 32 111 102 3 3 71 139 99 105 76 35 82 82 ", "88 105 48 13 13 145 81 154 135 44 116 34 67 41 44 ", "100 78 138 136 81 102 167 175 58 87 68 94 1"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9893617021276595;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> tree1 = {"0 1 0 2 0 2 3 3 1 6 3 2 10 6 6 2 13 14 14 4 12 7 1", "0 15 18 4 8 25 0 21 22 20 24 8 7 35 6 11 8 31 38 2", "8 17 37 2 22 33 5 11 4 49 9 14 42 34 8 55 13 57 54", " 44 38 0 23 1 36 64 53 34 45 46 60 58 19 56 9 22 4", "3 61 5 23 43 30 6 31 55 55 77 53 25 29 35 20 4 58 ", "94 91 71 37 33 34 62 13 71 98 67 56 53 69 105 24 8", "1 74 3 10 45 88 105 62 36 102 75 98 31 111 66 28 8", "5 20 60 70 54 24 78 15 3 59 57 6 4 100 104 100 60 ", "41 57 87 44 82 13 35 140 79 94 108 32 87 15 144 67", " 43 51 30 71 126 67 118 102 121 86 44 38 98 104 11", "2 22 147 154 60 9 23 132 52 172 109 154 167 98 116", " 22 170 55 91 82 95 173 39 167 109 1"};
    vector<string> tree2 = {"0 0 2 3 0 5 0 6 4 9 7 6 5 11 10 0 0 6 15 5 8 10 13", " 19 11 11 1 27 11 10 26 19 19 27 16 29 2 33 32 39 ", "2 19 4 2 26 30 10 28 46 26 34 31 40 53 42 33 35 37", " 16 44 51 57 46 49 24 6 51 34 48 22 59 32 4 64 38 ", "41 44 7 56 73 65 54 77 47 4 3 19 36 28 48 76 0 33 ", "48 75 45 9 55 30 76 86 22 85 37 41 82 3 82 44 82 1", "05 108 15 36 8 93 14 58 45 24 83 47 58 10 54 39 11", "5 109 69 79 35 34 84 115 30 77 14 120 115 130 54 8", "4 68 20 41 88 75 122 109 132 58 85 64 35 12 53 92 ", "91 54 56 143 36 64 151 143 15 36 19 62 145 56 92 1", "17 153 144 74 100 144 158 64 33 139 62 80 183 10 1", "80 35 11 104 6 163 175 139 63 82 157 170 37 14"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9900497512437811;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> tree1 = {"0 1 1 0 0 5 5 4 2 4 10 2 5 11 0 15 3 6 5 15 14 4 4", " 9 19 5 25 2 28 10 17 27 29 1 8 5 26 3 22 28 25 0 ", "41 39 32 27 44 39 10 16 48 21 11 4 52 51 38 29 14 ", "7 14 34 2 54 51 17 49 28 0 24 53 12 63 39 44 36 25", " 58 52 48 34 50 81 1 54 15 29 61 67 18 78 32 47 56", " 84 73 22 29 84 99 72 25 74 89 41 79 36 53 12 85 1", "8 31 62 9 54 59 113 41 59 112 33 10 81 27 61 49 26", " 77 124 0 90 51 88 1 96 111 76 56 87 129 101 31 12", "8 6 128 33 15 108 111 86 148 31 43 50 92 4 52 119 ", "130 147 76 109 140 87 43 45 84 139 157 15 120 38 1", "00 65 156 173 8 166 102 97 111 121 85 32 175 69 13", "6 41 142 42 113 109 148 7 13 21 11 12 39 39 132 29", " 155 144 2 62 53 207 194 112 59 67 0 82 164 121 12", " 13 108 195 62 45 2 169 95 83 209 20 136 220 81"};
    vector<string> tree2 = {"0 0 2 1 0 3 0 6 8 8 1 3 7 1 11 0 6 13 17 4 10 17 8", " 22 7 23 24 1 16 15 17 11 24 20 14 0 27 2 15 36 37", " 4 41 28 44 3 28 13 15 21 43 45 45 19 12 37 7 8 33", " 20 45 55 9 0 20 56 37 12 1 53 10 66 11 35 42 44 3", "3 42 34 8 48 22 73 10 38 12 12 23 13 31 69 62 32 7", "6 66 42 42 1 71 27 43 22 57 25 76 33 43 46 60 33 5", "4 70 88 50 41 63 96 92 37 5 17 3 82 74 11 34 4 17 ", "61 60 76 23 112 48 61 40 99 89 54 72 51 41 1 118 1", "1 142 33 28 55 140 40 67 17 57 92 77 82 32 39 57 9", "5 109 128 132 74 37 118 46 117 118 66 64 34 139 15", "4 160 136 141 123 58 64 179 77 182 152 143 118 165", " 14 164 86 144 70 58 108 4 171 165 5 79 57 96 196 ", "31 185 194 88 31 194 192 8 97 23 28 5 147 114 135 ", "131 219 78 93 153 38 136 136 171 181 121 87 222"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9913793103448276;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> tree1 = {"0 1 1 1 1 2 3 6 3 9 8 7 7 9 3 7 0 7 3 12 15 17 3 2", "0 11 0 1 15 8 18 5 22 32 14 10 31 23 13 24 13 39 3", "8 36 34 41 20 28 3 43 4 19 10 3 41 31 36 43 4 29 5", "3 14 31 56 23 11 35 30 67 68 51 1 71 61 10 36 62 5", "9 63 42 5 7 38 12 5 78 23 3 72 48 46"};
    vector<string> tree2 = {"0 0 2 0 3 1 1 3 2 0 10 8 11 6 6 9 14 6 4 8 7 2 15 ", "4 7 3 18 1 23 23 30 20 29 24 27 0 31 31 26 10 27 3", "7 16 12 33 41 7 17 7 3 23 39 17 31 42 42 39 40 15 ", "32 33 10 27 1 14 16 25 8 49 2 27 46 6 19 68 36 65 ", "5 67 31 12 22 34 38 8 24 0 69 60 41"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9780219780219779;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> tree1 = {"0 1 0 2 1 0 2 5 8 1 9 9 9 4 7 15 6 9 18 0 9 13 13 ", "21 5 7 14 24 18 20 27 23 32 28 28 28 2 1 31 7 4 37", " 34 31 44 9 17 41 29 10 26 41 28 13 1 34 44 23 29 ", "35 12 9 54 15 64 10 21 36 0 62 11 61 59 36 4 2 16 ", "51 40 31 14 22 36 49 12 60 22 84 20 84 59 10 88 75", " 37 56 14 12 76 87 61 25 95 19 103 77 35 3 71 105 ", "62 41 38 69 75 70 23 6 9 55 65 99 84 47 32 115 94 ", "9 54 34 86 10 80 110 99 121 3 9 106 101 66 48 41 8", "3 122 3 95 17 145 46 32 150 48 147 71 136 0 10 128", " 7 115 147 111 61 150 24 65 1 127 65 9 86 75 122 1", "1 173 72 24 50 44 70 57 60 162 157 40 65 72 59 3 1", "16 38 95 41 112 148 10 124 196 62 106 3 179 8 169 ", "146 117 31 92 90 154 194 98 178 64 104 89 103 169 ", "3 152 201 45 32 135 71 60 28 169 167 70 210 152 1 ", "145"};
    vector<string> tree2 = {"0 1 0 2 4 5 3 5 0 0 9 8 11 10 0 0 8 5 11 14 4 8 18", " 4 13 20 12 12 3 1 18 6 23 5 1 32 14 0 36 3 2 2 17", " 28 40 44 15 12 30 24 27 32 24 51 19 51 53 16 4 41", " 34 8 2 24 11 19 19 28 68 54 39 24 36 19 1 51 27 2", "8 50 68 12 57 27 39 10 80 68 2 70 72 10 69 56 5 48", " 3 68 90 84 18 100 65 6 91 12 22 19 18 53 100 42 1", "04 87 52 26 65 112 21 20 23 44 27 72 4 107 121 61 ", "120 81 110 62 93 26 130 10 6 0 113 78 106 112 101 ", "60 20 46 101 58 18 35 134 45 88 145 75 69 53 26 12", "8 24 106 34 44 25 39 136 68 123 113 9 62 102 26 16", "7 132 129 127 69 58 105 106 125 0 71 73 90 144 59 ", "141 122 31 44 135 57 102 173 56 138 64 113 170 143", " 151 73 20 31 204 58 171 15 15 16 40 183 157 4 177", " 87 185 109 173 16 89 209 214 48 220 174 64 164 11", "9 118 197 210 1 157"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9915254237288136;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> tree1 = {"0 1 0 0 4 2 5 6 5 4 3 0 8 9 2 12 8 2 5 7 19 4 5 13", " 12 5 7 11 7 1 13 30 18 15 28 2 17 12 33 39 3 34 2", "1 32 9 19 41 23 11 38 27 44 21 27 32 28 15 13 52 1", "1 35 44 17 25 1 3 2 4 22 3 2 27 35 72 26 36 30 26 ", "21 4 53 47 3 39 27 42 76 9 15 51 47 47 52 83 33 23", " 15 43 54 70 35 67 83 22 65 36 44 89 102 39 3 11 1", "08 80 21 102 107 11 100 67 69 120 70 49 89 19 57 8", "1 100 65 25 98 64 109 69 21 52 46 7 40 136 90 24 1", "8 75 98 95 140 21 106 39 46 122 8 151 108 95 73 64", " 15 134 83 59 148 9 8 124 72 86 82 156 124 64 75 8", "1 25 148 172 170 132 18 125 80 29 11 67 146 123 63", " 29 119 68 79 178 123 169 65 81 1 17 144 158 130 1", "93 76 45 38 123 140 208 39 133 138 206 10"};
    vector<string> tree2 = {"0 1 2 3 3 1 1 7 3 0 4 7 7 3 3 10 10 16 5 16 12 8 2", " 2 11 10 5 0 22 10 1 4 17 8 5 18 4 27 27 37 18 2 0", " 5 36 23 10 47 39 46 0 8 15 1 19 36 39 34 33 0 47 ", "31 11 31 4 57 22 48 59 56 46 60 7 37 72 41 73 56 6", "0 64 60 4 70 79 71 50 39 44 72 85 9 1 52 73 72 0 9", "4 51 36 80 46 21 98 56 40 4 21 46 6 11 53 106 21 3", "3 18 89 4 61 4 25 100 47 112 3 77 74 11 83 116 68 ", "121 89 12 37 85 40 33 22 65 63 20 14 7 36 26 96 26", " 60 61 42 58 33 55 59 44 27 61 27 40 72 70 148 47 ", "9 69 145 59 135 102 126 116 87 124 87 48 124 146 1", "16 169 12 67 86 0 15 11 118 17 178 173 130 64 142 ", "190 24 55 149 181 125 36 123 197 154 72 16 126 141", " 79 185 80 22 80 176 117 23 107"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9907407407407407;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> tree1 = {"0 1 1 2 4 3 5 5 8 9 5 3 4 5 8 11 3 5 8 17 0 3 13 1", "5 15 6 16 9 12 7 22 11 23 4 24 21 15 14 17 14 17 2", "1 32 28 12 41 29 12 18 37 20 41 40 12 51 49 17 56 ", "35 42 11 54 12 1 0 55 27 14 14 21 55 12 28 12 65 3", "2 41 61 46 76 25 32 27 77 74 22 28 85 18 41 89 75 ", "77 77 53 27 75 69 92 19 47 74 86 82 23 72 59 9 107", " 89 67 14 98 4 81 113 48 83 101 107 120 110 14 79 ", "67 40 85 55 42 56 129 76 32 54 31 47 79 57 93 79 2", "8 35 101 69 117 13 0 1 67 112 52 16 101 98 76 4 39", " 67 95 83 99 149 95 97 80 26 160 50 155 78 123 19 ", "40 117 15 157 142 134 143 34 72 13 39 65 15 72 53 ", "115 110 177 3 57 66 113 37 129 95 151 69 95 49 17 ", "108 60 109 178 119 113 144 115 7 209 127 184 105 1", "88 186 185 47 4 198 98 192 101 81 219 26 144 122 3", "2 48 85 2 89 55 92 48 17 99 61 236 11 136 132 9 21", " 33 194 89 126 163 76 167 177 43 23 77 171 49 91 2", "25 183 80 173 92 58 135 247 132 116 66 24 180 234 ", "251 84 131 9 173 218 26 185 261 185 23 47 68 132 1", "39 106 191"};
    vector<string> tree2 = {"0 1 0 0 0 3 2 7 4 5 7 4 2 2 13 5 15 12 1 14 0 5 17", " 22 8 24 23 27 26 1 8 10 30 8 27 11 6 24 6 3 33 11", " 9 7 0 31 36 4 18 1 33 34 18 32 50 4 50 42 32 33 1", "0 20 48 3 20 14 55 60 7 41 53 62 7 60 9 5 29 50 59", " 74 27 23 56 19 49 38 67 12 51 89 76 23 72 52 9 22", " 29 91 64 64 72 24 44 29 63 88 84 32 46 54 59 109 ", "93 66 101 66 39 7 64 103 9 114 1 75 102 83 92 113 ", "114 113 130 49 70 120 85 95 57 38 78 34 31 102 83 ", "94 15 125 105 131 124 39 34 62 66 47 115 120 141 7", "8 87 113 54 39 122 112 125 9 66 95 97 75 123 170 1", "71 20 110 5 139 48 61 87 18 31 55 48 43 86 40 29 7", "8 32 103 98 89 125 30 37 117 56 10 79 70 28 136 1 ", "79 58 82 70 47 17 187 29 80 77 96 59 18 174 95 65 ", "212 160 147 199 20 223 29 218 172 105 31 227 197 4", "8 101 41 35 100 141 177 40 160 241 153 194 35 150 ", "12 74 74 212 251 30 2 237 25 215 174 251 47 65 59 ", "156 233 214 64 86 11 251 85 40 104 165 218 159 154", " 75 45 91 147 231 113 42 188 114 237 240 68 36 7 6", "6"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9931506849315068;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> tree1 = {"0 1 0 0 3 3 6 2 3 6 8 8 12 3 13 6 11 4 5 16 9 3 9 ", "23 12 8 24 18 12 28 26 11 12 13 7 7 0 20 15 23 27 ", "18 21"};
    vector<string> tree2 = {"0 0 1 2 4 1 2 0 2 2 5 3 9 9 10 10 9 13 15 13 2 4 1", "1 8 6 21 24 19 12 20 27 0 16 14 33 30 18 18 12 11 ", "1 15 2"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9545454545454546;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> tree1 = {"0 1 2 2 0 3 5 6 0 0 2 11 6 10 10 8 8 6 7 11 3 1 0 ", "5 4 10 19 24 5 22 20 10 17 23 31 18 0 16 34 38 40 ", "6 25 19 7 32 0 11 7 23 39 36 1 32 42 28 39 28 20 3", "7 4 33 51 56 13 7 19 42 65 50 16 10 40 67 26 66 9 ", "49 38 76 14 8 60 68 66 11 70 43 55 59 4 87 9 43 80", " 37 13 71 49 70 22 82 44 42 13 67 20 7 43 82 66 14", " 87 24 86 32 31 33 17 91 16 4 120 3 25 62 75 108 8", "9 128 129 90 22 128 3 41 107 38 28 88 71 72 69 31 ", "112 75 9 96 89 144 102 55 110 131 48 5 64 132 36 2", "7 135 21 47 142 37 46 140 139 32 69 98 79 32 114 1", "59 112 41 98 155 25 71 99 109 149 48 121 1 142 127", " 20 78 64 164 70 81 110 62 5 131 123 154 120 109 8", "3 78 113 100 1 16 17 188 81 65 61 57 92 73 139 191", " 77 216 174 134 156 23 80 115 221 123 18 39 66 36 ", "209 139 49 110 169 44 134 43 153 34 101 204 221 58", " 199 203 101 239 103 178 229 179 148 67 253 181 70", " 9 190 31 31 237 170 253 176 187 180 18 246 158 11", "1 258 252"};
    vector<string> tree2 = {"0 0 1 2 3 4 0 2 1 0 10 1 8 4 4 0 3 11 13 18 7 11 5", " 1 23 0 6 27 28 10 5 22 9 20 10 23 33 6 23 26 22 1", "3 36 12 33 32 6 36 48 9 20 15 49 42 22 48 38 44 7 ", "11 33 30 48 33 56 51 25 4 13 43 49 20 64 17 62 29 ", "26 43 20 71 59 70 48 68 43 80 7 59 11 74 86 2 76 5", "9 56 90 69 97 63 86 5 88 48 8 53 102 68 49 42 82 8", "3 83 101 15 2 103 9 40 97 40 102 118 52 74 2 6 37 ", "88 122 82 7 102 125 3 90 64 79 75 33 30 71 111 137", " 5 46 55 15 82 112 60 143 69 52 119 126 116 91 119", " 113 12 74 105 56 34 29 136 73 149 162 163 162 21 ", "100 169 142 71 102 33 105 117 165 140 89 0 18 1 17", " 25 158 140 59 155 84 175 150 104 60 0 88 119 61 1", "29 160 144 134 186 105 69 142 178 104 47 140 202 7", "0 64 166 39 104 174 13 136 215 206 39 182 38 141 1", "50 227 42 174 92 34 25 39 10 43 90 55 227 30 69 38", " 122 3 175 40 165 96 38 202 174 120 2 12 18 55 62 ", "156 39 211 150 187 199 27 113 52 189 108 12 226 49", " 67 82 24"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9927797833935017;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> tree1 = {"0 1 1 1 1 1 1 6 8 4 10 11 7 1 13 5 4 13 10 9 8 11 ", "1 20 9 20 21 2 5 12 17 12 25 9 10 7 27 3 17 5 28 2", "2 3 21 8 7 25 41 12 12 50 14 36 49 1 52 35 16 32 5", "1 7 60 24 13 18 18 59 29 55 47 27 36 56 36 67 16 9", " 77 44 55 54 11 19 80 83 21"};
    vector<string> tree2 = {"0 1 0 1 2 1 2 7 3 7 7 0 10 10 1 6 8 11 12 10 17 6 ", "18 19 23 8 1 23 14 26 20 12 11 0 1 1 9 16 35 15 5 ", "21 35 6 41 27 30 0 23 20 20 8 48 51 12 48 29 33 50", " 42 25 56 40 22 17 64 34 29 26 57 33 3 22 3 68 30 ", "69 73 12 77 57 48 63 52 35 85"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9770114942528736;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> tree1 = {"0 0 0 3 1 5 2 7 7 8 1 6 10 2 5 3 6 15 17 9 3 4 19 ", "17 19 14 25 0 22 28 17 8 22 32 18 4 30 14 22 4 26 ", "26 23 1 31 42 28 44 28 47 33 49 44 11 40 30 47 5 2", "1 41 58 43 11 44 2 44 1 10 11 42 17 36 52 39 64 54", " 12 77 67 78 17 40 55 58 31 64 13 3 30 15 43 67 42", " 75 0 60 70 8 64 88 34 74 48 23 9 67 9 35 0 84 59 ", "58 77 71 42 38 52 82 87 17 68 62 40 103 99 28 53 1", "16 78 77 1 81 35 116 105 93 53 92 46 18 69 43 129 ", "142 38 137 101 47"};
    vector<string> tree2 = {"0 1 1 3 1 1 2 0 6 7 8 0 2 12 11 13 2 3 8 5 7 12 0 ", "15 6 14 24 25 7 5 21 21 17 14 1 12 29 22 33 20 39 ", "41 14 3 40 34 16 8 0 10 5 17 38 17 10 33 19 39 20 ", "55 23 5 36 3 8 59 52 25 23 56 6 63 59 21 63 57 53 ", "76 18 31 51 31 52 25 31 2 20 15 70 62 29 87 48 62 ", "76 5 8 26 39 31 86 43 43 31 43 13 75 92 89 86 7 10", "8 61 100 20 23 71 33 78 57 8 38 103 98 66 58 75 88", " 37 92 41 44 32 97 11 29 77 33 135 121 118 36 40 1", "03 52 96 83 48"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9865771812080535;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> tree1 = {"0 0 0 0 0 4 5 4 2 5 2 3 10 1 4 2 6 9 3 15 17 7 19 ", "23 3 24 17 11 21 25 5 14 26 19 33 10 30 35 5 10 1 ", "31 13 35 39 14 45 43 28 48 1 30 6 23 33 38 47 43 1", "4 27 50 9 40 50 8 18 51 5 2 43 38 54 72 49 3 0 68 ", "16 0 67 80 75 4 77 3 25 86 29 64 40 65 89 0 79 51 ", "69 43 35 29 44 3 11 36 28 3 88 76 46 22 24 100 74 ", "47 52 89 1 22 26 74 43 84 35 103 29 116 94 21 7 65", " 2 26 112 115 92 128 69 58 64 70 77 109 45 85 42 6", "7 48 109 52 29 114 108 80 129 140 114 12 3 136 55 ", "86 120 24 29 60 130 126 155 159 111 65 94 85 110 1", "22 103 140 84 86 108 171 16 2 45 90 108 67 22 122 ", "15 26 115 167 89 182 36 17 163 50 47 119 120 40 48", " 193 113 173 57 131 156 171 105 187 25 32 65 125 1", "85 94 145 108 16 128 132 30 21 167 210 171 157 65 ", "180 201 212 181 166 94 227 151 122 31 5 38 155 8 1", "74 54 189 208 172 57 175 225 47 153 210"};
    vector<string> tree2 = {"0 1 0 2 3 4 0 0 6 7 9 8 7 1 13 6 4 2 10 3 2 15 3 3", " 8 25 26 3 13 4 19 18 13 16 23 29 26 33 2 20 13 16", " 10 23 6 28 7 24 26 6 41 14 50 51 1 41 43 28 2 30 ", "55 47 60 6 5 30 49 61 2 15 30 8 20 66 38 35 54 73 ", "34 72 30 17 6 44 81 70 60 2 8 12 30 58 19 69 72 11", " 46 24 21 34 35 89 58 65 99 2 97 17 98 54 76 3 53 ", "52 5 54 112 54 50 31 93 63 100 6 111 89 70 53 74 1", "18 26 62 4 79 21 120 58 12 117 73 140 107 18 49 84", " 57 13 75 25 132 8 60 146 102 44 4 89 92 111 143 2", "5 153 74 84 33 45 42 163 10 149 138 126 83 120 174", " 77 90 177 138 176 84 89 38 39 11 20 95 134 163 13", " 61 135 166 71 13 152 24 105 137 88 9 146 130 108 ", "16 93 111 81 67 190 137 113 192 179 181 147 120 25", " 107 125 88 109 72 157 126 10 63 29 193 136 173 19", "5 91 224 214 176 218 71 46 68 206 214 50 171 120 1", "51 11 150 6 58 9 1 46 215 206"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9921875;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> tree1 = {"0 0 1 2 0 2 0 3 0 5 6 1 0 11 1 0 7 9 3 15 4 19 0 1", "2 11 1 16 9 4 3 19 22 18 25 14 2 14 1 30 14 20 39 ", "7 12 44 8 36 27 44"};
    vector<string> tree2 = {"0 1 2 1 2 2 5 6 2 2 9 0 9 3 7 8 5 2 0 10 4 21 14 2", " 8 13 4 26 5 4 29 24 10 13 14 21 5 1 3 31 34 10 18", " 21 29 34 37 18 35"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9600000000000002;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> tree1 = {"0 1 0 0 1 4 2 7 5 3 8 9 8 1 11 11 15 9 12 17 0 18 ", "19 17 4 24 4 1 11 10 8 29 19 6 11 6 29 27 33 34 0 ", "2 18 23 40 24 26 20 26 49 25 35 34 18 34 21 7 21 3", "7 49 2 46 7 1 3 23 40 7 20 43 59 39 7 3 73 67 15 4", "5 59 51 44 37 74 76 7 59 30 7 58 79 0 17 89 28 47 ", "29 95 19 35 80 58 19 77 45 98 0 19 101 69 55 10 99", " 21 68 110 0 19 38 84 113 0 32 9 48 9 83 23 85 72 ", "43 1 76 22 23 36 11 117 0 124 50 36 26 140 76 97 1", "23 130 65 10 82 132 91 117 91 96 122 30 64 104 16 ", "51 77 129 69 29 27 68 144 26 57 81 91 95 165 33 74", " 76 36 173 8 71 83 151 167 126 25 3 30 124 18 187 ", "112 88 83 171 72 96 114 192 175 0 108 104 4 35 121", " 179 193 127 70 182 99 89 20 185 3 144 115 7 59 37", " 81 208 40 116 71 177 20 39 206 48 26 152 163 173 ", "53 213 171 177 30 200 230 27 216 160 193 104 145 3", "6 47 232 164 226 112 85 82 53 17 3 206 30 57 203 2", "19 229 261 70 92 229 94 174 64 52 102 247 14 168 2", "25 37 103 178 276 219 195 224 232 200 131 160 37 2", "75 95 281 286 246 60 174 126 8"};
    vector<string> tree2 = {"0 1 2 0 1 3 2 0 4 8 3 1 12 7 1 0 15 3 3 1 17 6 10 ", "23 13 6 26 15 6 27 30 15 9 25 6 33 16 30 18 17 2 7", " 10 19 35 6 16 21 25 37 31 3 33 24 39 49 52 45 36 ", "45 54 17 48 38 16 12 65 16 32 6 63 14 42 29 8 10 3", "7 9 28 77 20 29 9 37 23 23 70 49 39 34 43 73 50 79", " 67 95 3 96 27 19 93 39 54 84 99 86 28 1 30 95 48 ", "27 46 73 17 53 1 36 66 91 85 88 120 99 65 33 25 56", " 54 6 44 9 74 118 89 129 42 63 133 11 124 67 56 17", " 20 73 109 131 115 122 106 58 41 74 70 7 21 88 40 ", "90 132 36 76 64 42 86 9 131 95 50 70 10 78 123 126", " 82 2 166 103 13 44 64 20 140 59 148 73 125 140 63", " 133 150 180 43 69 34 65 144 62 100 25 157 50 41 1", "83 76 3 63 175 38 101 66 45 149 61 81 106 191 205 ", "117 36 48 179 114 153 196 146 90 214 92 115 17 209", " 143 20 75 89 199 151 18 170 4 29 110 34 231 14 17", "1 4 232 169 116 88 137 0 163 101 144 196 193 211 4", "4 257 70 139 213 122 21 25 238 166 73 80 108 257 2", "10 5 243 166 92 22 93 168 177 73 79 280 56 68 288 ", "278 170 61 262 151 267 262 277 272"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9933333333333334;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> tree1 = {"0 1 2 0 2 1 2 0 3 6 6 5 5 0 6 3 0 4 17 6 18 2 15 5", " 3 10 17 11 23 20 12 3 21 13 15 6 32 23 8 36 38 20", " 36 18 12 5 46 20 17 26 4 28 25 22 6 19 47 33 13 3", "0 10 41 60 13 33 12 35 49 27 67 34 44 42 9 58 49 2", "7 71 15 38 11 12 48 5 65 20 85 71 35 37 34 31 89 3", "4 49 0 6 60 96 22 12 82 21 66 84 95 71 82 41 106 9", "5 26 50 8 48 72 67 81 79 73 104 90 65 81 115 62 10", " 91 1 47 90 95 131 70 87 133 69 66 94 2 78 76 0 10", "5 78 48 114 55 65 72 73 12 48 128 115 55 39 81 17 ", "70 10 108 5 6 103 80 138 78 59 126 77 154"};
    vector<string> tree2 = {"0 0 1 0 2 2 3 0 5 2 3 5 5 6 5 3 9 7 2 4 7 18 9 1 1", "0 9 3 9 12 27 23 1 16 29 12 0 10 9 6 29 4 31 12 18", " 4 6 42 3 9 32 33 22 15 3 12 20 40 41 20 11 59 57 ", "36 22 31 47 41 39 49 42 40 64 25 8 6 32 39 46 3 60", " 50 53 24 9 40 46 8 83 47 82 69 85 54 1 16 42 12 8", "8 70 47 51 82 59 3 64 30 2 64 25 64 6 108 27 13 13", " 112 10 87 20 54 30 19 81 41 61 83 91 25 51 124 57", " 94 39 119 53 71 17 67 109 54 106 118 58 118 58 13", "6 50 52 52 143 130 58 106 128 6 75 17 105 149 118 ", "123 135 102 129 17 62 60 25 28 116 27 49"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.91907514450867;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> tree1 = {"0 1 2 2 0 1 3 2 1 7 7 5 1 7 11 15 9 2 9 11 0 3 3 6", " 4 1 22 14 7 4 24 6 23 8 26 32 10 35 10 36 39 29 3", "2 19 38 26 38 33 6 16 37 38 51 9 43 32"};
    vector<string> tree2 = {"0 1 1 0 4 1 4 2 2 4 10 10 11 7 8 2 2 6 3 13 11 20 ", "2 11 12 22 26 10 20 19 9 22 26 33 12 5 8 5 10 3 27", " 21 4 21 8 41 40 35 1 40 19 18 47 13 17 26"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 6.947368421052632;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> tree1 = {"0 0 0 3 0 5 5 3 2 4 9 6 4 9 5 6 7 2 4 7 3 2 17"};
    vector<string> tree2 = {"0 0 0 0 0 1 2 6 8 2 4 9 5 9 1 7 12 4 0 9 4 6 6"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 6.916666666666667;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> tree1 = {"0 1 0 3 2 2 3 6 1 9 10 8 1 8 7 11 9 13 16 1 20 5 2", "2 19 8 23 25 13 10 27 3 24 14 14 34 22 23 24 10 10", " 20 6 6 31 8 28 25 25 32 38 5 21 23 4 22 52 21 52 ", "30 39 2 55 29 62 11 39 20 13 55 44 35 39 57 33 13 ", "38 63 73 44 55 15 69 79 46 42 51 19 47 80 38 12 41", " 75 62 48 86 23 54 29 0 74 46 72 31 48 62 71 83 96", " 32 94 34 104 100 89 11 74 27 60 100 104 22 112 19", " 54 49 40 62 40 93 5 17 111 47 36 16 32 136 30 129", " 99 122 121 53 136 53 112 9 81 127 54 104 48 108 1", "05 112 127 58 13 18 94 126 7 163 122 25 37 164 64 ", "29 75 160 15 120 108 8 95 155 120 143 141 28 139 1", "83 163 164 31 122 44 104 122 22 145 73 192 72 27 1", "77 64 131 52 72 59 78 140 71"};
    vector<string> tree2 = {"0 0 1 3 3 0 4 3 7 3 4 9 5 2 12 5 2 8 5 18 15 12 17", " 17 8 15 4 11 19 24 17 28 19 20 29 11 11 13 16 34 ", "2 4 35 25 30 37 16 39 5 41 43 31 36 2 41 4 31 48 2", "1 1 10 11 2 6 39 15 42 40 25 46 46 12 21 9 43 2 76", " 57 78 61 51 49 15 82 9 83 4 82 62 34 36 6 27 75 7", "9 80 51 45 70 30 0 21 97 72 38 60 83 95 85 4 87 63", " 93 59 1 34 10 45 39 69 99 82 88 43 86 37 49 106 6", "5 18 48 45 117 85 104 125 56 51 10 95 10 105 137 1", "13 90 46 42 80 66 52 140 65 112 58 63 68 112 148 6", "3 92 119 101 105 129 51 51 111 82 44 30 91 142 53 ", "45 121 68 132 126 136 82 7 89 32 34 86 72 53 165 6", "3 39 145 105 100 150 177 27 115 2 126 98 23 95 167", " 177 45 17"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.285024154589372;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> tree1 = {"0 1 1 2 4 1 4 7 1 1 1 2 7 2 8 9 10 11 6 15 16 14 1", "7 18 23 12"};
    vector<string> tree2 = {"0 1 0 0 3 2 2 2 3 7 5 10 1 3 1 13 1 13 11 14 13 13", " 18 21 13 5"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 6.962962962962963;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> tree1 = {"0 1 0 2 1 2 3 0 2 8 4 6 6 1 8 8 14 9 12 14 5 10 16", " 19 5 6 19 5 4 26 27 23 26 22 15 32 14 2 20 2 23 3", "0 14 18 2 37 41 33 44 25 11 12 48 27 32 14 9 17 50", " 4 14 18 55 7 18 27 14 17 12 32 48 10 54 0 49 41 1", "2 23 35 1 59 50 10 34 2 34 46 51 49 33 6 45 41 35 ", "43 66 39 89 75 56 59 29 30 68 20 51 36 44 94 23 10", " 5 110 4 57 49 77 5 17 71 21 99 109 108 10 11 33 3", "5 93 22 56 127 16 36 88 9 96 58 48 50 130 137 129 ", "120 23 143 64 97 144 109 26 32 31 16 139 154 52 80", " 109 110 88 153 142 138 70 8 166 8 8 149 62 112 13", "1 107 122 2 172 25 45 146 130 39 112 122 3 63 114 ", "30 73 184 87 191 61 60 90 16 170 59 131 147 195 89", " 149 158 138 17 176 40 161 93 8 72 26 204 3 187 58", " 19 115 154 174 81 121 219 58 122 216 136 113 34 1", "27 58 88 39"};
    vector<string> tree2 = {"0 0 1 2 1 3 2 0 3 0 9 7 0 1 3 6 8 10 1 15 6 19 6 5", " 9 1 5 22 23 15 24 23 29 11 21 21 17 21 1 20 28 40", " 17 0 15 44 17 11 16 25 27 10 40 17 3 33 13 54 10 ", "29 48 17 5 55 64 23 24 18 33 25 54 32 63 42 42 61 ", "37 33 13 62 48 69 43 69 35 55 46 22 75 65 48 52 16", " 41 35 7 73 67 82 20 21 86 83 14 49 3 23 7 43 42 2", "2 56 87 40 67 23 108 32 54 110 7 60 27 116 62 65 3", "6 62 25 76 16 82 82 54 54 72 23 132 66 101 121 36 ", "72 9 82 110 33 131 49 74 50 90 21 92 43 106 119 81", " 58 21 14 116 138 22 153 121 139 91 143 39 151 48 ", "62 150 14 120 85 115 126 53 77 81 98 177 168 134 3", "4 187 79 175 157 58 128 40 36 141 29 185 136 102 1", "80 30 4 179 23 137 165 136 148 161 34 162 78 65 15", "5 209 39 26 121 68 123 0 100 57 133 225 21 209 185", " 207 77 219 166 189"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.702127659574469;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> tree1 = {"0 0 0 1 0 1 2 7 8 5 8 5 8 5 2 0 11 5 6 16 3 4 9 18", " 7 25 24 20 15 15 22 28 29 7 15 0 16 0 5 17 7 33 4", "0 4 20 26 45 28 24 30 33 42 11 47 52 27 11 25 22 2", "8 21 22 49 17 32 55 22 25 56 62 48 31 54 40 72 72 ", "20 30 51 58 24 1"};
    vector<string> tree2 = {"0 0 0 3 2 2 4 2 1 9 4 5 3 7 5 2 5 0 10 3 4 16 12 1", "8 14 18 8 18 9 10 29 0 3 24 2 19 6 36 18 35 31 40 ", "15 25 12 16 41 42 8 10 28 37 35 19 32 29 25 54 52 ", "55 49 34 8 23 52 14 53 50 52 20 6 10 67 33 36 5 35", " 67 45 4 32 16"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.2048192771084345;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> tree1 = {"0 1 2 2 1 5 1 4 4 2 10 9 11 13 1 12 3 12 18 17 12 ", "12 11 22 16 19 2 20 27 10 29 11 4 6 1 3 22 35 38 2", "4 12 3 37 14 16 23 45 5 34 29 50 15 27 42 36 15 47", " 35 30 25 4 13 54 46 27 62 47 50 58 31 14 17 58 45", " 20 30 49 28 64 20 30 30 2 5 54 31 35 14 33 29 65 ", "82 51 59"};
    vector<string> tree2 = {"0 1 2 3 1 3 6 5 7 9 1 2 6 8 2 2 16 0 12 18 18 13 6", " 5 22 10 4 20 17 0 18 6 29 18 25 12 24 31 9 35 32 ", "20 15 43 24 3 28 45 29 41 41 48 14 43 26 16 2 4 7 ", "2 33 0 23 25 10 20 58 7 40 36 49 38 1 0 29 19 30 1", "3 75 20 48 77 69 74 62 82 58 63 68 20 56 88 11 54"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.052631578947368;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> tree1 = {"0 0 2 1 2 2 6 6 2 0 10 6 4 10 13 7 6 5 5 4 10 20 2", "1 5 2 12 10"};
    vector<string> tree2 = {"0 0 2 0 1 4 0 1 5 2 3 11 0 8 4 12 4 5 0 4 5 19 18 ", "10 6 2 4"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.571428571428571;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> tree1 = {"0 0 2 3 4 4 4 1 2 1 4 1 11 4 8 6 11 6 8 3 16 14 5 ", "15 1 11 11 15 15 21 30 1 19 21 29 11 8 12 15 20 12", " 25 1 2 34 34 34 37 20 3 10 18 26 19 50 5 47 54 25", " 8 31 54 17 26 40 10 3 27 44 8 34 45 13 49 2 32 76", " 60 78 19 36 67 66 56 21 8 20 20 36 51 77 38 66 12", " 44 27 78 90 5 35 38 15 78 57 90 61 61 41 61 35 68", " 55 23 106 76 58 11 90 41 84 70 67 106 61 98 64 6 ", "68 98 9 45 84 128 14 108 1 130 132 55 132 20 105 6", "7 70 79 88 43 62 16 39 51 128 143 130 20 60 2 64 3", "9 25 142 101 37 163 51 19 16 65 87 106 49 46 102 1", "26 159 48 9 169 72 84 109 87 133 102 142 36 102 10", "2 8 116 6 53 167 111 29 188 190 175 120 136 26 168", " 197 48 168 102 178 14 148 37 65 180 105 119 25 10", "5"};
    vector<string> tree2 = {"0 0 0 1 4 3 2 2 4 2 2 7 8 1 8 12 3 11 3 4 19 5 4 1", "4 19 2 15 21 0 11 4 13 32 2 17 24 35 11 29 15 16 3", "3 38 24 2 4 25 0 28 30 48 10 24 50 20 36 48 46 51 ", "33 32 26 38 57 28 59 51 62 61 41 54 14 61 23 11 12", " 62 48 54 69 18 55 20 83 12 1 19 87 34 66 18 0 74 ", "54 89 14 14 30 82 48 96 63 29 90 66 69 62 9 95 13 ", "39 12 54 43 87 98 65 101 18 46 19 102 24 6 41 76 1", "06 31 101 46 2 4 13 6 77 16 27 127 4 0 135 4 121 1", "36 31 33 145 40 54 13 64 143 34 6 127 90 5 85 34 7", "3 94 63 55 69 42 106 135 140 87 13 49 95 68 73 84 ", "112 83 66 107 9 109 50 151 131 9 1 42 112 22 88 70", " 183 15 165 191 186 142 8 165 143 75 151 32 136 21", " 185 180 49 49 110 200 119 59 200 103 117"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> tree1 = {"0 1 1 1 2 2 4 0 2 9 8 11 11 1 3 13 6 12 18 18 15 1", "1 13 13 3 25 9 6 19 29 3 8 22 4 33 5 9 31 18 21 25", " 6 17 15 6 44 43 3 22 37 32 3 11 27 38 44 45 14 53", " 9 38 50 21 11 26 32 22 55 62 47 40 44 55 26 7 64 ", "45 8 56 19 29 54 20 5 32 62 9 19 78 23 66 10 24 76", " 86 84 14 85 20 85 38 46 9 83 35 101 56 105 83 33 ", "80 93 109 45 14 67 88 116 95 101 64 10 80 114 19 2", "1 17 57 114 76 73 57 25 91 12 8 103 57 70 115 128 ", "58 33 22 127 102 123 130 89 103 24 67 113 23 61 22", " 51 74 6 53 150 117 71 122 115 94 104 7 80 64 102 ", "161 70 104 151 10 131 120 157 44 47 101 50 162 153", " 61 60 24 120 16 133 55 81 163 157 125 120 175 35 ", "99 112 160 3 114 53 171 9 198 178 112 146 175 164 ", "154 94 150 13 60 123 78 102 169 183 101 7 182 149 ", "125 181 42 69 218 111 94 202 14 231 143 173 14 7 1", "48 224 151 195 245 231 221 150 249 70 11 172 123 1", "53 190 252"};
    vector<string> tree2 = {"0 0 1 0 0 3 4 0 3 5 7 7 11 4 13 10 10 16 15 14 9 1", " 0 15 17 6 26 23 17 23 15 7 19 15 7 9 18 18 28 5 2", "3 12 25 1 24 2 3 9 12 18 11 0 8 23 24 50 46 34 38 ", "38 9 61 19 61 25 12 24 14 31 25 52 26 11 35 68 51 ", "38 8 18 40 61 43 17 79 27 36 0 12 36 88 46 50 50 3", "5 17 32 48 88 89 99 41 50 23 81 60 41 34 14 79 79 ", "37 109 19 22 67 46 58 6 85 24 86 94 82 107 40 47 1", "17 58 79 41 64 30 4 37 95 57 10 117 111 50 25 122 ", "22 68 63 57 141 3 27 136 137 23 144 108 105 127 55", " 132 114 87 55 28 11 73 14 56 147 117 111 155 89 1", "69 170 101 7 132 0 3 46 111 110 88 90 121 76 109 1", "19 8 27 70 12 100 171 8 97 123 54 181 9 190 52 145", " 18 176 191 89 184 6 115 181 105 163 162 148 123 1", "46 180 99 119 67 106 198 188 141 205 112 106 214 1", "07 120 182 58 62 171 8 209 60 43 102 205 2 210 206", " 179 179 152 53 95 226 201 223 104 67 129 187 125 ", "179"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.51937984496124;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> tree1 = {"0 1 0 3 4 2 1 1 4 0 6 9 9 2 12 9 14 10 4 11 11 6 3", " 4 12 11 17 16 24 8 15 26 6 30 28 30 26 10 21 22 1", "2 37 5 25 36 38 26 47 3 26 16 15 1 41 1 0 34 5 20 ", "2 30 13 17 21 9 14 31 17 17 19 16 66 71 59 22 57 7", "1 68 37 28 56 53 54 53 5 46 11 49 22 52 30 1 50 31", " 44 64 65 22 22 14 17 28 84 76 42 13 34 9 60 79 77", " 68 85 84 63 16 91 86 111 43 101 44 74 81 66 49 24", " 109 125 27 1 111 81 63 46 56 62 11 37"};
    vector<string> tree2 = {"0 0 0 1 3 1 2 5 1 1 0 6 8 13 7 5 3 8 2 13 17 17 10", " 4 2 9 22 5 1 0 3 8 3 6 12 23 26 34 16 34 11 4 0 3", "0 17 26 42 14 16 31 40 40 22 3 40 25 28 21 29 26 1", "4 8 28 4 3 36 17 29 10 40 38 71 34 32 67 23 73 16 ", "27 25 62 58 63 5 23 70 10 4 4 27 65 9 40 51 91 61 ", "84 37 62 40 87 68 15 48 20 37 44 87 84 78 12 34 9 ", "27 69 89 49 38 111 22 16 81 94 1 20 48 25 37 71 38", " 74 109 29 29 75 97 44 80 1"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.942857142857143;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> tree1 = {"0 1 0 1 3 0 1 2 6 5 0 8 8 11 4 11 14 1 14 16 4 21 ", "17 3 22 12 8 25 11 22 5 21 3 4"};
    vector<string> tree2 = {"0 1 2 2 3 4 0 4 3 8 4 5 12 8 11 12 12 0 10 4 2 15 ", "21 14 22 4 4 25 7 23 10 26 21 3"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 6.8;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> tree1 = {"0 0 0 3 0 3 5 6 4 8 5 0 7 9 7 7 0 11 16 17 19 10 1", "4 8 9 4 5 19 22 11 1 21 12 23 29 35 27 6 30 27 28 ", "3 16 15 11 32 22 4 22 18 9 13 48 10 11 38 39 45 54", " 32 43 59 9 18 5 12 61 21 19 56 55 31 70 48 3 21 3", "8 45 15 1 75 80 77 45 82 42 28 14 9 16 27 29 44 29", " 35 71 40 72 94 32 71 62 61 54 100 12 71 62 96 57 ", "37 81 59 23 106 105 9 83 109 69 2 47 47 67 33 78 9", "5 10 122 53 53 55 59 11 121 7 76 59 9 13 55 127 10", "7 44 26 112 71 80 127 149 113 49 125 40 70 13 46 3", "9 35 145 9 50 92 40 70"};
    vector<string> tree2 = {"0 1 2 3 4 2 2 1 3 4 4 1 5 10 2 13 7 0 7 19 14 19 1", "7 15 23 18 13 15 21 29 9 15 1 1 28 23 22 13 7 20 7", " 38 21 32 19 3 39 6 24 1 31 13 50 8 4 16 19 29 4 3", "3 43 10 51 63 33 56 59 11 52 64 45 71 51 28 18 28 ", "72 3 60 75 44 34 21 42 38 31 38 50 47 77 43 52 58 ", "33 84 83 93 19 14 53 60 20 17 0 32 87 31 89 12 22 ", "76 89 90 33 88 22 66 68 33 80 17 106 110 120 38 98", " 102 78 88 83 62 33 61 0 12 69 55 104 30 93 0 70 5", "4 117 71 122 112 97 130 117 103 77 71 91 9 80 30 1", "57 112 126 23 156 94 88 164"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.313253012048193;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> tree1 = {"0 1 2 2 3 0 0 5 2 1 2 1 4 5 7 15 4 14 17 7 10 6 18", " 12 10 17 11 1 9 22 23 28 31 13 4 34 1 31 21 16 30", " 39 19 9 28 19 40 18 0 26 35 20 10 43 31 42 35 5 4", " 6 30 61 61 61 9 16 62 48 56 35 50 42 58 5 55 19 3", "5 41 39 20 74 25 69 65 28 33 53 7 13 63 88 2 52 20", " 53 59 79 71 50 62 90 9 53 36 19 76 56 31 56 96 33", " 46 27 50 30 45 58 94 19 40 79 38 92 11 118 33 61 ", "66 98 120 41 107 82 78 32 20 102 104 91 122 75 79 ", "130 83 65 134 51 60 134 14 142 52 71 83 26 141 53 ", "59 34 76 66 10 89 22 43 23 1 114 96 92 5 32 148 21", " 64 94 48 138 101 149 10 143 168 162 131 140 180 1", "05 75 161 111 178 13 175 183 191 147 45 123 168 32", " 200 93 67 36 76 5 167 199 145 90 83 118 41 60 174", " 145 46 177 11 141 221 177 148 75 112 188 44 143 3", "7 159 8 227 190 187 203 140 102 181 102"};
    vector<string> tree2 = {"0 1 2 2 0 0 4 3 3 4 6 11 7 4 10 12 13 2 9 7 5 18 2", "2 15 3 2 9 16 25 1 9 1 8 32 28 12 10 18 22 7 26 2 ", "39 14 2 45 18 36 43 32 39 16 17 44 0 50 29 56 25 4", "0 58 11 1 18 23 47 44 2 17 67 17 37 61 26 63 72 6 ", "34 73 17 17 56 64 65 38 36 78 62 71 78 34 74 72 74", " 67 23 67 32 38 87 48 83 52 101 66 81 103 71 60 47", " 44 32 95 78 1 47 33 42 58 14 17 67 71 112 33 118 ", "104 49 74 47 92 113 51 111 5 90 51 15 81 12 65 18 ", "35 108 6 94 111 10 90 66 102 110 130 126 139 124 9", "1 6 144 97 154 135 52 11 124 15 140 145 7 53 45 94", " 51 105 134 35 38 78 99 44 152 104 4 83 69 35 54 6", "1 133 90 40 108 92 113 115 65 64 27 0 184 76 59 11", "8 45 143 105 188 102 13 54 14 172 166 3 131 127 11", "9 1 152 138 37 89 142 54 173 187 114 18 150 73 143", " 88 48 25 32 137 85 2 76 108"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.385892116182573;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> tree1 = {"0 0 0 0 2 5 0 0 0 6 2 8 1 11 13 12 0 1 16 8 3 9 1 ", "9 2 9 21 2 4 29 19 26 0 30 6 27 22 32 10 35 16 6 1", "3 4 21 35 44 29 36 4 36 33 27 33 28 20 9 55 14 1 3", "4 25 62 32 10 30 38 64 48 21 19 5 30 66 61 17 53 1", "2 48 54 73 33 7 44 15 38 42 71 27 70 63 73 29 15 8", "5 90 27 17 68 37 5 37 83 47 102 73 42 38 29 34 55 ", "13 15 92 107 64 26 37 5 62 54 13 111 34 31 108 21 ", "112 5 84 109 84 83 79 11 16 39 8 130 45 133 21 33 ", "6 54 30 38 117 76 9 138 147 36 131 72 73 85 9 45 5", "0 128 139 102 63 36 99 33 140 109 128 147 51 156 8", "8 138 107 108 127 118 57 170 159 173 171 162 54 53", " 89 6 139 174 129 91 78 104 155 194 28 143 169 90 ", "108 152 173 62 136 46 79 207 6 201 179 15 80 193 8", "1 54 206 78 139 201 210 154 65 165 220 162 70 23 7", "6 128 206 98 52 60 49 22 42 124 214 17 239 38 135 ", "234 6 89 153 76 186 193 244 154 195 69 25 111 9 24", " 164 200 31 17 119 32 257 58 226 263 257 223 126 1", "13 122 184 62 63 202 10 195 184 123 269 240 269 14", "1 179 170 84 243 194 282 113 27 116 88 203 230 12"};
    vector<string> tree2 = {"0 1 1 3 1 2 2 5 5 4 8 2 0 6 3 3 15 9 1 11 0 18 14 ", "1 11 1 11 2 6 24 9 10 32 24 23 13 30 7 3 4 38 26 3", "1 13 14 22 35 19 9 20 39 26 44 27 4 25 2 12 11 54 ", "4 0 55 52 0 43 11 34 14 13 7 1 0 16 18 19 48 48 9 ", "11 53 80 14 52 36 22 6 38 21 67 71 3 4 7 76 40 15 ", "62 89 52 29 51 70 42 2 105 30 36 95 34 46 89 89 13", " 32 112 9 4 75 69 71 2 91 36 18 112 110 87 1 54 19", " 59 74 94 17 40 17 78 21 113 52 77 47 30 75 84 6 2", "1 15 128 23 125 1 69 111 128 155 53 19 61 145 151 ", "26 107 92 0 8 87 163 145 109 114 136 164 10 60 72 ", "117 175 9 67 164 156 74 106 37 133 177 154 114 178", " 82 47 13 191 156 80 89 191 140 113 199 74 114 52 ", "25 94 68 17 22 30 193 210 1 111 184 111 30 135 48 ", "167 139 58 222 10 157 109 0 153 128 35 92 91 85 97", " 14 184 74 109 171 215 57 77 143 59 74 113 92 102 ", "6 232 209 88 228 47 227 187 242 180 64 111 18 202 ", "153 204 263 53 31 232 59 198 267 232 98 120 25 228", " 45 204 105 201 2 216 49 84 112 194 58 50 204 112 ", "11 170 11 44 94 138 22 182"};
    int K = 5;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 8.14;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> tree1 = {"0 0 1 1 3 2 1 3 2 3 6 3 6 4 1 11 8 15 12 3 0 9 19 ", "8 11 2 11 20 15 25 11 6 29 14 3 19 27 33 16 20 26 ", "26 13 34 14 10 16 4 13 13 13 20 9 10 52 40 38 5 22", " 9 30 44 41 54 42 60 38 36 52 62 29 49 42 3 71 58 ", "50 23 75 36 78 50 29 2 60 71 46 67 8 70 48 61 55 4", "5 2 94 64 89 19 55 65 74 19 102 36 31 81 30 28 83 ", "60 10 72 97 44 76 92 73 101 93 35 118 56 83 57 0 5", "7 47 42 45 115 14 36 46 110 19 56 92 81 23 124 46 ", "12 40 13 26 44 147 7 146 73 94 10 119 66 149 0 7 1", "27 45 109 12 77 154 152 57 66 86 20 87 99 27 56 13", " 80 62 26 89 170 19 20 86 64 179 51 40 42 149 89 6", "4 71 140 141 97 32 57 196 24 50 81 126 191 36 43 1", "30 146 28 19 39 42 111 165 82 35 9 145 202 216 54 ", "101 186 203 187 205 32 104 28 87 214 53 85 144 26 ", "179 77"};
    vector<string> tree2 = {"0 1 2 0 1 5 0 3 1 1 0 4 5 7 8 13 14 7 13 6 20 2 7 ", "10 5 10 2 2 6 7 19 30 3 17 16 27 26 8 29 5 21 31 3", "8 8 30 23 17 44 30 32 17 42 51 26 24 10 30 36 46 5", " 39 53 33 39 23 4 29 6 0 54 61 54 50 20 15 37 65 2", "9 45 65 1 29 28 64 5 18 54 86 12 20 31 41 77 91 35", " 63 84 69 12 71 20 27 10 33 8 34 62 68 72 51 73 31", " 82 110 34 113 6 108 10 63 40 120 7 27 121 111 2 2", "5 34 7 28 35 40 28 8 87 77 130 23 139 122 61 87 14", "1 45 30 88 108 13 123 93 80 113 18 20 10 19 117 64", " 121 91 101 78 127 14 12 86 66 44 13 78 130 25 139", " 30 170 45 161 34 29 110 166 156 167 50 119 109 33", " 67 30 187 176 50 167 159 27 48 86 176 66 138 2 63", " 190 55 163 89 124 28 32 146 186 133 61 203 34 87 ", "15 98 108 0 51 90 69 141 74 90 204 162 133 4 196 3", "7 50 58"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 22.411467724486116;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> tree1 = {"0 0 1 2 0 3 5 6 1 8 4 0 8 4 1 1 3 12 8 16 6 4 4 5 ", "7 5 4 21 11 11 29 2 10 25 2 12 16 8 18 19 40 1 13 ", "16 21 44 45 1 32 20 13 3 7 5 31 9 26 26 10 19 25 4", "4 0 31 12 38 51 42 54 63 43 10 46 20 35 35 76 39 2", "8 79 63 4 52 11 15 74 40 16 50 19 12 51 65 47 5 5 ", "92 23 60 33 3 83 26 59 57 11 31 20 61 18 78 88 96 ", "7 95 58 9 117 42 103 8 74 112 89 65 113 114 102 5 ", "77 55 81 128 87 55 124 85 122 65 119 12 111 128 85", " 92 127 70 47 98 6 131 140 34 114 48 19 96 149 22 ", "40 38 76 150 34 139 41 84 133 156 125 29 7 145 167", " 163 126 29 57 130 149 120 64 83 88 166 141 43 30 ", "9 175 177 47 108 35 9 9 89 90 50 138 129 127 82 15", "8 97 108 175 110 156 84 146 23 194 12 77 116 146 1", "8 40"};
    vector<string> tree2 = {"0 0 2 3 4 2 2 4 0 2 2 8 7 4 12 10 15 4 3 16 13 6 4", " 3 1 14 8 22 21 6 29 1 1 33 11 28 11 6 3 23 18 28 ", "3 29 35 20 20 30 43 32 19 35 17 46 1 21 29 41 46 3", "0 25 53 7 0 57 49 37 22 26 34 7 16 49 13 39 12 9 7", "2 36 49 34 77 51 30 21 31 5 45 82 19 34 28 65 44 1", " 87 12 92 59 62 38 56 59 30 44 90 7 39 30 35 82 68", " 100 41 87 115 46 89 98 101 106 90 27 26 26 71 107", " 79 102 43 4 116 79 13 97 17 32 104 40 92 60 130 7", "5 8 91 46 105 144 33 25 47 75 21 17 143 89 104 95 ", "38 140 71 92 103 125 128 142 5 68 113 60 29 165 17", " 51 171 123 107 154 77 60 23 103 14 78 164 159 3 1", "02 176 126 177 40 179 161 97 171 130 38 107 31 129", " 42 153 69 67 203 33 143 66 110 204 96 32 99 164 1", "19 38 13 162"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 20.156164383561645;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> tree1 = {"0 0 2 0 2 4 2 4 7 0 4 0 0 12 14 13 0 8 2 19 20 5 0", " 22 22 0 20 5 18 11 30 15 30 15 6 2 29 11 34 38 25", " 3 33 0 19 15 34 23 25 26 16 42 46 35 26 37 37 14 ", "14 49 27 30 35 27 42 11 20 14 67 47 1 12 53 9 61 7", "3 33 77 26 65 50 33 20 72 8 53 44 39 0 61 18 78 56", " 41 62 65 91 85 14 40 87 46 46 97 54 84 6 99 87 85", " 7 28 66 103 36 9 45 117 66 43 42 7 13 116 40 87 7", "4 9 23 43 46 124 43 91 28 38 124 64 1 36 17 134 4 ", "12 76 19 2 28 45 85 131 134 138 59 69 57 120 14 12", "4 51 22 132 97 21 80 163 30 101 79 62 159 58 114 4", "2 50 86 11 142 53 51 116 70 27 168 170 45 147 136 ", "15 33 3 30 145 71 6 14 47 186 174 187 144 12 193 4", "7 95 84 41 182 42 145 47 148 21 51 99 52 14 71 199", " 188 118 172 202 186 26 99 19 140 12 171 107 108 1", "55 16 93 196 157"};
    vector<string> tree2 = {"0 0 1 1 2 5 0 1 3 4 1 1 2 4 0 0 14 11 15 14 15 10 ", "14 23 1 3 8 18 23 10 4 3 17 30 8 4 11 13 37 11 30 ", "28 15 2 21 39 16 40 24 43 34 50 20 25 25 53 8 30 3", "3 23 45 29 50 13 21 44 54 9 53 33 70 18 58 27 7 70", " 62 63 38 42 30 14 42 78 11 33 66 27 24 61 47 29 7", "6 12 91 1 28 58 91 74 67 10 17 96 44 38 68 63 84 1", "06 61 21 17 37 19 38 13 50 42 73 41 120 28 12 9 85", " 35 69 56 93 2 91 8 23 106 5 72 23 112 39 63 17 46", " 135 64 16 11 114 89 88 87 91 115 73 47 77 101 9 3", "7 66 112 131 2 99 36 141 139 72 12 83 161 94 88 14", "1 112 109 138 57 37 57 27 3 134 101 105 78 164 74 ", "159 117 136 130 15 95 90 122 163 178 124 88 60 173", " 13 92 109 46 23 156 2 203 51 35 200 105 183 166 1", "90 21 203 30 136 43 172 204 34 122 189 62 106 69 1", "49 126 68 131 56 2 122"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 22.979151154132538;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> tree1 = {"0 1 2 3 0 4 2 1 6 3 4 10 10 1 3 7 12 9 13 11 2 12 ", "7 4 17 7 18 22 7 26 20 27 18 19 22 33 20 24 37 28 ", "35 16 21 16 40 19 4 22 22 24 36 42 35 23 11 51 12 ", "22 43 12 28 16 30 56 12 0 36 3 19 51 23 23 43 65 6", " 20 66 18 4 40 77 77 44 27 25 23 65 49 86 22 44 27", " 4 19 90 91 32 12 72 41 7 34 73 54 18 70 25 94 79 ", "88 81 19 9 61 41 29 68 104 103 58 105 63 46 82 36 ", "112 28 87 46 30 7 59"};
    vector<string> tree2 = {"0 0 1 3 0 5 4 1 4 1 1 8 9 8 13 8 8 10 10 4 1 0 21 ", "23 7 11 7 8 20 11 25 16 9 2 30 16 13 19 30 19 32 4", "0 35 23 1 40 12 28 7 30 37 35 23 49 46 22 50 42 58", " 27 23 7 54 49 3 33 27 21 52 55 38 25 10 36 47 13 ", "75 17 28 56 4 51 55 37 0 12 8 35 64 70 48 91 51 44", " 84 56 70 31 90 77 85 57 13 96 2 102 54 24 18 90 1", "3 17 32 87 31 61 116 4 74 65 87 118 92 43 63 10 12", "6 108 55 27 42 111"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 20.244702665755298;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> tree1 = {"0 0 2 1 0 5 5 7 4 2 10 1 8 12 2 13 4 17 13 14 18 0", " 20 21 19 15 21 24 8 13 1 20 5 30 7 27 5 4 35 20 6", " 15 21 43 33 17 0 33 42 20 23 18 6 21 37 5 15 18 2", " 20 39 7 48 59 23 54 54 44 32 43 41 60 1 59 6 23 9", " 9 40 63 73 1 73 15 55 58 30 77 1 50 59 82 89 46 6", "3 20 50 58 27 47 29 37 74 11 26 51 90 13 20 75 60 ", "61 102 41 35 17 12 17 45 53 73 101 99 103 80 91 70", " 30 86 46 54 86 17 130 65 131 86 45 83 64 124 73 4", "5 84 120 25 87 30 76 38 80 69 18 112 66 63 3 119 5", "3 19 87 147 78 97 89 124 148 128 167 56 111 48 5 1", "47 91 22 43 65 93 31 46 129 99 109 164 173 39 147 ", "160 83 59 157 174 167 138 121 53 172 125 29 26 143", " 178 104 203 203 142 122 155 66 99 200 51 159 20 3", "6 94 121 183 60 8 200 152 206 14 220 25 62 114 173", " 38 193 205 83"};
    vector<string> tree2 = {"0 0 1 3 4 2 3 2 3 8 3 7 12 0 10 11 7 13 13 2 6 13 ", "15 19 13 22 12 21 1 20 14 17 27 7 30 11 18 15 20 1", "9 31 14 3 26 29 43 30 14 23 20 19 45 38 49 42 37 5", "3 9 13 7 26 0 3 57 52 53 16 66 36 49 11 38 33 62 4", "5 47 59 51 51 15 38 56 44 51 38 15 0 51 85 48 70 5", " 7 9 65 48 43 94 31 55 90 77 18 20 93 100 87 107 3", "5 101 92 44 49 60 36 11 51 103 29 105 88 21 37 26 ", "28 10 38 61 2 82 25 106 7 4 5 100 44 108 115 96 10", "0 34 9 102 45 112 81 119 132 76 47 100 131 87 122 ", "53 8 146 15 88 49 84 80 28 155 28 153 106 144 114 ", "120 31 45 23 92 101 123 166 178 155 46 169 4 146 1", "49 63 153 35 39 146 21 16 89 179 146 145 17 65 169", " 129 183 8 62 110 188 104 77 16 173 28 181 26 108 ", "165 103 213 83 55 138 151 145 106 27 54 24 189 3 1", "06 5 190 32 8 208 132"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 20.27266775777414;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> tree1 = {"0 0 1 2 1 4 2 4 4 6 2 7 2 7 7 7 5 13 8 13 9 15 6 1", "8 16 23 0 0 2 3 17 29 28 11 27 33 34 4 27 21 29 18", " 3 38 10 24 7 0 46 28 32 25 1 10 45 53 43 25 19 29", " 55 58 39 55 38 59 64 62 0 24 35 67 60 41 64 34 54", " 77 7 36 34 39 77 81 23 66 51 44 19 87 70 59 32 28", " 55 11 52 28 78 8 1 12 94 67 74 72 38 40 9 74 96 3", "0 4 110 72 18 62 11 18 101 91 114 56 111 43 28 72 ", "79 119 110 62 14 36 56 37 43 21 13 63 17 16 27 7 1", "03 118 109 45 107 99 89 147 124 140 68 71 114 61 1", "38 76 7 159 158 74 44 69 6 96 43 98 81 1 71 81 11"};
    vector<string> tree2 = {"0 0 0 0 4 2 5 0 8 7 7 2 12 8 4 11 10 9 15 12 12 19", " 6 6 3 19 22 24 4 6 18 31 13 26 31 8 25 19 8 24 16", " 1 26 30 32 1 9 37 24 23 20 1 34 52 50 55 32 27 21", " 0 45 61 57 25 51 57 16 38 34 57 42 44 58 29 61 36", " 34 9 65 51 14 75 71 45 72 30 83 67 4 32 39 66 20 ", "34 8 31 24 88 33 38 93 71 45 27 55 9 72 97 97 14 1", " 4 59 98 5 1 114 90 21 56 83 59 113 101 53 92 99 4", "4 38 27 124 47 81 51 99 1 24 123 62 136 125 58 62 ", "30 125 137 47 13 61 52 49 138 47 61 153 9 155 65 7", "3 150 56 2 45 11 89 102 162 90 87 83 48 85 125 96"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 19.351527093596058;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> tree1 = {"0 1 1 2 0 3 2 1 8 3 6 3 5 10 13 9 0 13 8 4 18 13 1", "0 6 20 13 2 12 14 21 24 9 30 0 13 18 19 32 11 30 1", "7 9 10 14 24 23 14 42 39 2 42 36 0 19 23 49 28 45 ", "22 44 46 11 44 47 17 21 8 15 8 2 53 15 13 40 17 72", " 51 3 28 12 53 43 30 36 65 13 71 75 43 86 44 31 83", " 41 3 59 15 63 86 97 42 99 29 28 26 1 41 37 57 41 ", "23 4 73 111 96 83 36 44 35 115 99 93 68 85 41 30 1", "20 7 60 36 93 26 128 104 124 76 22 46 138 4 82 22 ", "116 20 134 107 99 104 46 2 109 145 122 147 34 117 ", "116 63 54 127 132 24 130 138 19 89 27 135 12 74 91", " 48 112 93 83 85 102 162 61 139 17 91 55 178 56 13", "4 102 92 137 118 114 146 99 39"};
    vector<string> tree2 = {"0 1 0 1 1 2 1 7 6 6 6 0 7 1 9 15 14 3 0 14 18 4 10", " 5 3 15 18 18 12 24 21 3 13 2 11 2 19 18 33 28 24 ", "41 14 1 32 40 24 21 24 49 46 18 30 51 22 30 31 24 ", "52 37 0 43 50 3 45 8 24 39 19 33 62 14 26 21 13 64", " 64 62 23 5 11 22 9 35 47 56 50 47 76 28 3 63 46 4", "1 14 3 81 77 62 63 68 94 42 25 80 28 31 89 93 25 8", "6 99 35 50 39 8 28 59 99 53 69 120 88 107 70 87 12", "2 19 107 73 94 30 124 112 11 101 43 115 63 34 63 8", "6 58 136 124 1 23 96 81 2 41 46 114 44 64 32 57 94", " 79 42 14 70 5 107 135 86 145 61 77 6 20 86 12 50 ", "104 167 130 74 88 3 96 9 178 157 67 36 110 20 131 ", "146 88 182 77 169"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 20.986201427438544;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> tree1 = {"0 0 2 3 2 0 0 5 5 2 7 3 4 1 4 7 1 4 18 2 12 21 0 2", " 23 10 14 19 17 3 5 14 20 31 24 9 7 16 28 31 5 39 ", "30 28 25 29 33 26 30 37 7 25 7 27 47 50 55 56 31 4", " 50 35 2 0 31 14 17 27 20 50 65 39 57 51 22 25 46 ", "2 6 61 28 49 42 67 66 45 36 66 37 50 23 66 13 75 1", "9 31 90 88 18 98 40 79 55 15 3 38 42 61 77 94 98 3", "7 20 36 81 97 42 54 102 69 99 6 41 52 105 61 83 50", " 41 45 52 34 36 50 84 34 63 61 6 115 66 95 127 78 ", "118"};
    vector<string> tree2 = {"0 0 1 1 1 0 5 5 4 6 2 1 1 11 0 10 8 6 8 18 20 14 1", "2 12 17 20 14 2 7 17 23 17 28 13 28 4 18 15 25 16 ", "32 28 23 24 14 10 46 25 7 29 12 0 40 8 25 25 48 13", " 14 51 9 53 48 21 40 6 20 44 4 56 56 17 39 53 4 49", " 67 2 40 23 33 39 41 62 75 51 22 59 62 7 69 0 61 7", "8 38 2 13 71 7 28 90 39 75 81 26 42 41 85 30 42 10", "6 56 47 45 29 75 112 50 22 20 37 11 105 80 81 16 4", "0 4 80 111 41 105 66 45 77 81 96 31 88 57 22 68 11", "3 85 47"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 20.25441662730279;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> tree1 = {"0 1 2 1 0 1 4 4 8 1 0 2 1 0 2 9 10 14 15 10 12 0 1", "5 23 8 9 16 6 22 23 14 21 32 19 17 20 6 19 6 2 13 ", "18 16 5 24 6 1 10 25 14 13 10 5 14 41 31 39 34 0 0", " 28 19 56 42 16 53 36 20 63 17 12 0 7 13 35 21 24 ", "4 18 20 32 38 27 72 55 79 50 76 74 89 67 58 76 76 ", "7 81 36 24 40 23 47 68 82 11 14 40 72 85 81 80 43 ", "66 70 101 114 76 40 49 26 24 82 72 75 95 32 1 106 ", "23 102 78 42 25 13 119 89 84 85 122 9 105 124 24 1", "23 131 120 106 98 115 81 148 121 102 113 144 22 62", " 126 107 95 43 44 151 34 144 161 132 106 161 31 14", "9 8 164 143 81 4 73 104 70 64 29 132 133 83 1 61 1", "41 58 116 107 152 167 29 128 91 189 144 34 61 177 ", "129 40 123 32 165 72 18 191 161 56 84 209 108 138 ", "5 98 116 1 187 109 151 91 219 212 93 191 114 222 8", " 217 207 38 93 70 106 33 119 164 110 20 73 27 95 1", "8 123 172 28 158 115 50 64 159 79 244 44 221 122 7", " 165 217 62 69 82 78 142 57 49 68 111 170 209 170 ", "117 169 145 152 80 164 277 11 103 49 169 193 57 21", "8 159 186 55"};
    vector<string> tree2 = {"0 0 1 2 2 3 0 4 7 4 9 9 11 0 9 6 2 1 17 3 4 11 18 ", "23 4 20 8 23 21 22 23 20 24 4 30 35 25 8 36 8 10 3", "0 3 24 21 13 26 5 39 6 35 35 42 43 22 7 50 54 47 3", "0 59 15 54 15 46 37 42 5 23 55 63 21 65 71 15 53 7", "0 30 38 44 41 76 72 55 25 64 81 10 4 39 28 60 46 6", " 65 0 78 46 65 59 43 60 49 38 71 34 68 55 108 61 8", "3 0 40 110 106 99 2 5 100 14 50 48 27 41 82 91 50 ", "22 123 114 89 126 119 91 102 28 62 50 91 37 27 86 ", "83 120 40 102 136 92 83 25 129 150 147 51 139 6 81", " 58 148 4 3 100 68 27 119 12 58 124 22 164 30 34 4", "7 26 105 81 152 61 156 154 158 151 14 48 42 184 10", "9 145 96 47 152 175 160 61 12 170 45 60 141 36 64 ", "64 168 129 24 46 141 111 97 207 72 61 158 117 92 9", "1 11 121 137 63 103 83 1 140 83 132 12 162 124 25 ", "150 92 16 43 63 93 188 14 10 86 140 216 90 219 87 ", "132 75 95 118 7 218 166 197 114 79 237 77 131 13 2", "50 104 119 31 148 250 121 195 133 236 35 157 170 1", "26 33 156 189 67 228 131 79 253 245 111 17 244 18 ", "191 116"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 20.26806997308727;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> tree1 = {"0 0 1 0 3 1 0 2 8 8 0 0 6 6 4 15 5 8 11 7 12 5 10 ", "13 22 10 21 23 3 28 16 28 12 21 5 0 15 22 17 35 7 ", "30 15 39 12 3 46 28 45 14 47 33 45 44 43 4 27 26 3", "6 33 28 58 59 0 28 15 38 43 33 53 12 39 13 15 37 1", " 48 69 5 4 23 45 36 29 23 9 1 53 76 80 23 64 88 50", " 12 17 95 58 36 77 76 6 97 38 48 56 85 37 60 3 77 ", "74 54 52 55 27 33 48 85 87 104 60 20 41 56 23 14 4", "7 6 40 80 56 122 88 85 123 9 7 122 102 61 109 84 4", "0 2 22 106 85 70 112 30 15 118 72 98 86 63 107 95 ", "62 23 76 147 162 18 127 85 131 96 60 130 129 78 65", " 50 79 167 61 86 102 35 36 141 1 91 112 6 82 86 12", " 56 16 93 77 125 166 125 46 113"};
    vector<string> tree2 = {"0 0 1 1 4 2 1 4 6 2 2 1 12 6 8 4 5 16 13 7 6 8 20 ", "10 21 10 17 18 3 28 9 5 7 30 28 29 16 35 6 2 11 12", " 22 43 43 0 14 38 34 33 16 3 2 18 35 39 23 7 17 4 ", "38 59 41 60 44 6 18 8 65 33 1 32 57 65 1 75 31 55 ", "49 62 75 69 54 83 3 12 45 14 58 61 33 37 25 38 64 ", "82 6 72 1 52 13 19 59 39 55 13 105 27 9 21 108 14 ", "78 34 83 93 102 13 43 82 5 19 83 110 54 90 0 89 22", " 3 50 44 65 70 75 6 99 126 28 47 59 94 91 121 63 1", "43 128 64 105 137 133 75 152 19 117 16 128 151 47 ", "100 65 11 97 91 72 65 1 147 28 75 7 8 65 14 114 13", "1 98 109 69 159 116 137 22 176 120 67 26 156 80 10", " 55 18 2 128 101 143 188 84 181"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 23.03;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> tree1 = {"0 0 2 1 2 2 6 3 7 5 5 3 6 11 3 11 14 15 16 3 17 6 ", "0 23 17 7 19 4 11 15 0 26 9 13 17 32 26 24 37 28 0", " 1 18 8 29 43 12 43 19 44 10 40 39 9 27 54 19 26 5", "2 14 33 44 57 43 25 42 29 60 9 61 60 57 70 28 8 6 ", "30 45 55 68 39 58 56 58 58 13 21 15 15 7 17 25 0 1", "3 38 32 60 15 60 40 84 24 84 38 59 93 61 24 31 101", " 71 95 56 5 37 112 11 17 71 2 112 56 37 27 88 50 1", "5 72 65 39 126 12 67 111 11 57 40 72 9 86 119 50 8", "9 21"};
    vector<string> tree2 = {"0 0 0 3 2 5 5 3 4 1 3 11 10 1 4 11 1 10 1 9 20 9 7", " 14 22 5 4 9 16 4 19 12 23 2 0 10 8 26 23 3 27 7 9", " 30 28 32 42 18 13 41 47 18 41 24 21 35 12 11 15 8", " 6 27 14 7 39 64 24 12 59 32 6 17 13 63 13 43 18 3", "5 1 61 30 2 12 54 19 71 2 14 44 55 19 9 64 25 13 5", "7 91 93 76 58 52 96 63 45 9 27 73 71 86 95 45 106 ", "3 107 38 30 38 80 30 85 83 60 34 94 111 17 110 120", " 91 127 36 81 3 22 18 98 27 50 56 11 66 17 47 129"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 19.502011494252873;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> tree1 = {"0 1 1 1 3 3 6 1 7 3 4 6 8 10 5 10 2 3 16 8 5 16 0 ", "23 8 13 11 14 27 20 29 3 0 26 32 8 5 1 8 29 7 15 2", "6 37 21 45 36 43 46 0 3 41 18 28 43 26 4 23 21 39 ", "43 18 37 39 2 63 18 61 62 26 20 45 64 73 72 9 32 3", "8 49 44 27 71 63 13 79 31 71 67 76 22 65 45 57 55 ", "22 35 89"};
    vector<string> tree2 = {"0 0 2 3 4 1 0 3 4 2 1 0 2 13 11 5 13 10 16 4 10 10", " 9 12 7 12 15 9 10 18 7 0 2 14 8 21 29 5 32 14 10 ", "18 16 2 11 33 45 19 32 27 1 4 45 2 13 39 4 12 14 5", "0 58 3 50 51 10 23 42 8 13 63 26 50 42 50 72 47 17", " 27 25 76 1 51 29 63 82 24 39 22 87 79 15 32 44 27", " 93 46 62"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 20.4334104775931;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> tree1 = {"0 0 2 2 3 3 0 5 3 2 5 7 6 13 7 10 2 6 16 9 18 2 1 ", "14 18 20 14 10 27 24 12 19 30 4 28 3 7 17 0 4 40 1", "1 2 25 25 43 7 15 21 10 28 17 32 21 8 48 4 8 56 48", " 4 11 62 47 12 32 2 48 51 36 2 27 6 47 30 9 31 21 ", "34 60 61 56 23 56 50 41 7 84 81 44 1 11 45 89 34 8", " 28 89 89 35 18 90 20 76 4 82 91 35 4 50 106 94 82", " 16 68 89 110 80 39 78 14 109 80 58 70 6 18 120 11", "4 87 35 55 22 114 110 98 108 101 126 52 56 4 127 3", "9 11 27 25 60 5 146 121 9 22 120 23 91 127 126 147", " 138 102 7 85 138 119 140 65 53 88 111 11 106 58 6", "8 69 101 172 25 38 171 29 5 163 154 167 82 173"};
    vector<string> tree2 = {"0 1 0 3 4 3 6 0 2 8 6 9 2 9 7 11 15 15 1 8 9 11 18", " 22 18 7 13 22 17 25 28 21 17 16 11 26 6 30 17 31 ", "28 20 20 30 15 45 37 21 5 31 12 35 25 24 28 18 44 ", "6 27 6 33 17 60 44 54 57 52 52 22 20 43 25 1 49 22", " 20 54 18 13 30 3 49 23 75 67 27 21 22 44 32 30 53", " 42 90 40 41 53 78 65 26 79 11 15 94 28 101 8 13 4", "1 72 41 5 43 19 101 37 39 68 22 79 120 40 97 24 98", " 114 98 54 44 20 78 15 116 105 51 110 99 10 29 69 ", "109 9 34 33 21 39 28 72 25 30 81 26 58 107 10 83 1", "4 79 144 51 66 52 144 121 44 154 11 23 78 154 151 ", "114 47 171 87 50 27 163 53 32 8 76 71 151 75 102 9", "0"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 21.23006030265104;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> tree1 = {"0 1 0 1 0 5 0 1 6 1 5 7 1 8 11 10 15 2 18 10 19 20", " 21 17 7 19 1 3 10 21 6 2 22 3 28 14 8 15 30 11 9 ", "6 35 40 43 45 37 12 25 6 4 50 34 52 22 25 50 11 29", " 17 12 15 22 33 58 54 15 61 35 42 63 59 64 15 59 5", "6 76 29 39 2 72 33 32 30 54"};
    vector<string> tree2 = {"0 1 1 3 4 0 6 7 2 1 6 6 6 2 13 12 11 12 16 13 15 1", "0 18 14 6 5 23 13 14 18 9 25 3 28 25 28 32 29 18 1", "0 8 18 2 28 12 18 39 17 0 33 9 6 9 27 34 11 42 51 ", "44 59 26 52 52 33 54 41 5 58 56 64 53 29 38 50 36 ", "15 15 28 13 73 62 16 36 17 21"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 17.393707250341997;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> tree1 = {"0 0 2 3 2 3 2 7 0 6 4 8 12 9 9 3 12 6 18 13 2 4 7 ", "11 3 21 9 19 1 19 5 0 18 8 24 34 6 11 30 1 40 37 1", " 22 9 43 41 7 21 5 43 5 14 53 40 4 49 33 31 57 49 ", "20 27 50 20 25 47 18 17 3 24 63 13 31 54 22 57 58 ", "35 17 36 39 33 69 80 9 61 33 63 35 10 66 21 12 61 ", "52 55 32 44 28 61 2 66 63 84 63 28"};
    vector<string> tree2 = {"0 0 1 2 4 0 5 7 7 5 0 5 11 12 4 13 8 14 14 13 19 3", " 3 16 2 6 10 22 11 15 2 3 4 30 20 19 18 35 7 13 2 ", "40 20 0 35 8 9 18 34 28 8 1 4 22 42 55 31 33 40 19", " 1 23 10 39 20 29 32 19 31 47 59 1 1 72 53 5 2 23 ", "32 74 78 16 63 45 42 64 55 51 41 74 33 49 87 17 32", " 53 39 89 64 5 76 62 77 92 98 74 26"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 17.906368985808236;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> tree1 = {"0 0 2 1 2 4 6 3 1 0 7 3 7 6 10 8 13 5 15 2 16 9 10", " 15 24 23 8 14 17 22 14 25 29 13 23 12 4 35 36 9 1", "5 25 39 14 15 38 21 0 17 27 0 7 19 52 43 28 24 32 ", "57 33 10 2 55 27 24 65 26 6 42 31 8 65 5 18 57 3 1", "9 45 68 54 18 73 25 31 53 50 79 81 49 12 88 33 72 ", "36 7 86 65 12 80 87 19 12 89 17 78 53 92 50 56 101", " 91 103 49 49 37 96 89 8 12 3 2 121 75 35 94 105 4", "9 58 62 62 73 43 132 55 25 58 6 42 136 53 62 129 2", " 71 69 38 26 45 86 45 28 15 6 75 29 51 145 106 11 ", "99 1 66 145 70 157 50 13 149 8 62 39 51 134 58 142", " 93 173 155 34 86 70 21 6 138 117 109 48 56 31 86 ", "76 86 154 94 94 124 170 64 38 134 120 166 98 136 8", "9 177 98 173 145 185 191 45 71 128 62 54 30 123 34", " 42 36 69 218 199 191 75 121 82 186 217 160 75 229", " 20 3 105 97 104 141 100 166 225 68 37 203 116 99 ", "33 1 0 204 209 125 108 81 121 236 173 33 176 189 2", "7 99 152 213 257 106 213 249 256 211 86 216 245 41", " 144 82 239 240 10 218 7 214 212 257 243 178 65 26", " 181 232 69 80 25 13 79 36 14 203"};
    vector<string> tree2 = {"0 1 0 2 2 1 1 7 1 1 2 8 10 5 12 6 5 15 9 17 17 13 ", "6 9 12 25 15 4 17 25 9 25 13 18 20 28 23 0 36 31 3", " 5 25 10 42 29 17 27 6 18 21 6 2 3 24 11 6 28 3 38", " 41 26 57 10 34 26 32 43 51 14 68 28 39 38 74 8 75", " 1 30 27 53 80 31 7 29 38 70 18 64 32 29 11 7 57 4", "8 67 21 38 87 71 84 40 92 95 43 25 22 51 63 74 74 ", "109 10 16 64 109 105 7 16 93 97 93 40 26 121 94 51", " 116 120 44 106 106 74 109 21 56 125 75 95 78 71 1", "02 71 38 74 101 88 57 97 18 138 69 144 99 53 26 48", " 15 44 40 34 93 63 16 91 74 119 158 11 70 136 63 1", "70 123 76 11 46 124 164 171 145 168 14 15 38 21 40", " 142 52 84 11 172 22 174 36 121 193 45 1 142 40 19", "5 56 149 71 84 57 12 119 101 39 120 94 35 24 25 19", "8 1 214 90 11 14 222 126 5 163 208 208 78 115 33 1", "34 191 57 220 118 201 204 77 190 110 222 30 95 118", " 124 90 61 130 195 178 139 188 206 16 176 157 138 ", "83 1 128 187 89 203 177 40 166 28 212 158 237 261 ", "229 273 145 234 221 115 160 65 243 173 166 79 192 ", "150 160 246 42 154 89 163 275 109 166 253 6 215 13", "0"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 21.75814938684504;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> tree1 = {"0 0 2 3 4 3 3 7 6 2 7 11 7 10 3 3 13 12 18 8 20 12", " 8 8 9 6 13 26 8 17 6 31 24 31 10 20 33 23 4 36 17", " 22 39 42 36 8 17 26 23 12 7 24 13 15 10 49 31 48 ", "42 11 49 45 8 56 61 1 44 11 50 7 67 59 28 49 3 52 ", "8 30 39"};
    vector<string> tree2 = {"0 0 2 2 4 0 4 5 4 1 0 1 6 13 6 14 9 17 13 4 17 6 2", "2 7 22 25 15 27 18 22 15 4 11 0 12 1 33 17 16 32 1", "0 4 6 24 17 22 29 33 22 27 43 17 1 44 39 29 36 12 ", "57 33 20 0 47 7 11 36 64 35 40 19 22 35 54 32 5 64", " 37 73 11"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 46.946518987341776;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> tree1 = {"0 0 1 2 1 3 3 1 4 2 5 7 9 0 13 2 3 4 13 6 17 13 22", " 18 13 16 18 25 20 20 22 12 32 32 17 5 0 21 10 17 ", "25 24 20 10 28 29 15 28 28 4 19 16 31 53 31 55 5 4", "9 36 12 7 53 48 7 52 33 52 55 34 59 51 25 70 52 47", " 32 66 47 72 57 6 1 59 62 11 48 24 71 12 30 21 39 ", "80 70 74 76 42 53 80 31 63 85 70 77 57 5 24 84 2 1", "1 58 101 1 53 41 107 94 75 41 88 116 93 95 46 54 3", "5 90 74 49 51 113 124 10 123 46 59 10 46 47 90 5 4", "6 88 37 53 16 77 71 135 67 37 95 19 22 128 32 10 1", "48 114 116 112 6 30 156 50 67 86 15 125 101 84 59 ", "117 91 16 82 24 138 48 116 154 23 8 128 81 154 7 1", "60 98 149 34 118 94 44 41 192 153 116 42 50 52 65 ", "91 164 88 32 75 179 207 153 170 189 120 0 27 132 2", "4 173 12 147 7 173 204 199 153 188 22 187 126 41 9", "4 131 49 206 72 74 134 79 185 187 28 24 44 203 37 ", "15 23 227 56 50 190 99 132 93"};
    vector<string> tree2 = {"0 1 0 1 2 2 0 7 1 3 6 2 10 8 7 8 2 2 6 13 3 6 18 1", "8 23 17 10 4 19 9 2 9 29 24 11 9 22 3 36 19 28 18 ", "25 23 44 4 22 25 38 13 32 39 20 40 51 2 27 19 41 5", "0 44 42 40 42 40 29 63 8 23 2 53 41 22 71 57 73 65", " 46 12 49 27 0 39 49 62 69 56 43 1 86 84 56 12 42 ", "5 29 78 12 60 90 93 10 10 36 90 97 23 50 71 101 1 ", "1 42 3 111 73 112 30 36 114 30 66 115 95 84 19 25 ", "33 99 105 40 15 86 99 79 5 130 72 35 101 9 12 72 8", "3 132 68 128 59 94 7 76 39 77 110 63 26 15 15 79 1", "12 153 58 103 127 147 42 139 135 32 4 25 12 144 98", " 123 136 51 121 174 73 44 129 39 41 15 111 138 70 ", "160 150 122 179 164 84 46 92 67 61 148 185 150 147", " 46 123 119 171 32 177 55 85 154 87 126 208 37 196", " 212 1 57 192 220 143 122 167 73 152 136 168 131 1", "52 15 31 39 63 42 144 213 45 230 68 93 15 35 214 1", "07 153 137 32 195 196 166 170 123 221"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 46.36285317276517;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> tree1 = {"0 0 0 0 3 4 1 1 2 4 1 7 3 9 12 1 8 10 6 17 14 8 14", " 21 5 22 14 19 1 16 21 1 10 5 6 31 24 28 38 36 6 4", " 21 39 18 29 5 6 34 6 3 33 11 4 29 9 3 48 22 3 37 ", "24 47 54 29 29 6 7 54 18 12 23 56 12 7 13 0 21 10 ", "69 24 41 18 68 32 41 86 28 25 8 31 62 53 22 78 52 ", "25 40 63 1 83 46 27 75 60 61 69 77 23 89 61 64 17 ", "9 44 36 31 71 87 100 98 110 60 11 40 56 88 62 63 1", "03 42 22 8 92 56 93 20 55 45 65 39 83 87 49 48 68 ", "31 109 123 60 95 100 101 73 116 16 26 154 62 54 89", " 57 30 125 11 85 96 13 22 16 90 149 63 110 81 105"};
    vector<string> tree2 = {"0 1 1 2 4 5 0 3 7 4 8 9 5 1 8 12 9 14 13 1 17 21 2", "2 7 7 1 24 25 21 15 22 0 32 13 15 21 1 16 24 24 32", " 17 42 29 30 22 13 24 34 3 7 7 9 3 51 47 0 28 36 2", "8 12 21 16 36 29 60 41 15 59 47 55 47 47 6 13 6 22", " 6 59 29 62 62 65 78 11 51 65 7 65 26 82 78 64 21 ", "29 88 36 17 86 12 89 7 24 45 21 28 1 104 33 101 79", " 104 112 110 97 51 10 13 4 27 6 64 100 72 34 91 84", " 120 11 57 8 119 126 41 19 80 115 49 129 106 51 87", " 107 21 15 18 49 37 102 30 22 112 110 132 42 82 38", " 118 58 103 92 31 154 135 58 88 128 162 134 2 60 9", "8 5 67 1 60"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 51.75950179763739;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> tree1 = {"0 0 0 1 0 5 5 0 3 2 1 7 8 5 3 14 9 8 13 7 1 8 4 15", " 1 1 16 10 6 3 12 23 31 11 26 14 1 36 33 25 32 22 ", "5 29 18 39 19 43 41 24 2 46 16 16 36 8 39 47 57 42", " 26 22 20 29 63 8 37 57 5 12 18 6 25 11 9 3 36 6 7", " 15 40 33 34 41 70 31 55 9 77 28 37 61 18 15 77 33", " 45 63 58 55 55 6 94 27 85 69 91 76 42 47 11 29 12", " 49 3 71 88 55 77 93 120 37 82 60 81 85 47 66 60 2", "5 82 8 1 131 16 88 1 45 60 68 126 127 51 142 122 1", "23 101 9 71 71 32 45 128 149 135 79 4 125 70 48 10", "4 147 42 18 146 48 51 166 163 120 154 125 56 48 39", " 56 6 106 156 125 90 54 126 82 135 112 37 5 23 52 ", "175 1 185 95 37 88 104 115 10 25 31 65 12 35 27 89", " 8 47 4"};
    vector<string> tree2 = {"0 0 1 2 1 2 4 7 4 8 3 0 2 11 0 10 2 12 18 9 3 8 4 ", "2 19 13 4 20 24 0 27 9 16 21 18 3 33 11 16 17 5 5 ", "34 1 31 16 10 28 43 20 5 44 39 14 52 4 55 2 57 38 ", "28 22 7 53 41 12 61 52 32 6 29 47 34 10 64 64 59 7", "7 24 41 62 23 26 33 49 40 38 28 58 5 58 59 64 47 1", "0 70 7 26 7 48 37 71 74 87 77 16 39 12 60 8 99 4 9", "8 101 3 26 68 57 106 22 25 63 85 73 92 102 46 4 80", " 53 122 57 53 17 71 49 31 106 115 2 102 64 60 63 1", "3 129 111 30 125 136 124 110 101 145 65 5 25 61 13", "5 138 89 132 22 88 68 153 84 73 85 5 114 49 32 84 ", "91 5 74 136 66 83 68 170 76 96 174 138 53 82 132 3", "1 95 151 180 55 91 17 23 167 56 4 152 172 158 85 2", "04 55 123 111 75"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 51.18259284575074;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> tree1 = {"0 0 0 0 0 4 3 6 4 4 3 2 11 5 2 4 10 10 5 15 4 0 11", " 17 7 2 14 1 17 27 21 21 23 16 10 15 32 11 28 5 8 ", "17 15 22 5 12 40 16 10 0 0 44 23 33 23 36 34 51 58", " 5 11 16 24 12 58 62 40 36 33 47 46 20 13 29 34 33", " 14 67 73 56 72 2 36 75 2 10 49 28 65 23 84 35 85 ", "13 81 78 34 83 24 35 82 43 59 31 70 7 105 28 23 14", " 99 19 105 87 67 10 65 84 87 74 94 87 41 18 121 12", "3 49 40 2 16 109 102 129 53 120 62 120 17 41 32 40", " 136 69 36 131 98 63 123 136 108 15 29 115 41 118 ", "17 132 134 137 1 97 43 97 122 51 1 133 10 152 141 ", "167 44 64 19 83 87 119 117 58 166 38 180 31 89 115", " 30 136 62 91 88 140 68 131 132 176 105 108 144 71", " 98 178 179 81 154 99 58 163 37 130 100 126 207 24", " 129 184 191 124 177 92 21 132 81 49 147 10 32 225", " 62 39 219 165 118 107 113 131 168 37 119 194 31 2", "8 90 99 20 80 188 232 47 146 4 160 48 55 116 196 1", "6 85 150 256 187 9 261 179"};
    vector<string> tree2 = {"0 0 1 0 0 0 5 7 8 2 10 10 8 4 14 10 4 3 7 19 7 11 ", "16 18 20 21 2 3 8 8 13 14 32 16 26 22 10 11 27 26 ", "3 34 18 21 35 21 24 36 48 27 6 7 51 52 10 31 48 36", " 15 13 25 26 38 45 19 54 31 18 14 66 5 10 71 37 60", " 48 20 4 1 28 38 57 69 75 9 39 17 46 27 85 49 46 8", "5 75 42 74 19 4 76 48 12 9 76 7 53 49 77 58 73 6 5", "0 69 51 11 103 81 76 8 107 81 99 89 23 59 118 22 6", "6 33 118 18 32 13 20 38 67 1 32 128 38 48 2 107 43", " 42 3 69 116 8 126 124 138 49 85 80 22 43 148 92 5", "4 122 23 48 116 105 139 84 140 39 143 42 18 90 166", " 132 172 107 91 140 156 160 176 133 72 2 153 101 7", "1 17 173 99 166 178 35 17 6 173 189 76 23 173 140 ", "24 178 92 51 58 100 89 158 118 61 56 71 26 52 164 ", "173 15 86 210 0 69 80 156 51 199 47 143 146 143 20", "5 44 175 10 200 70 83 155 76 159 113 102 52 64 113", " 61 138 127 120 4 238 177 54 182 97 220 240 129 17", "8 207 182 185 134"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 51.877145984560435;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> tree1 = {"0 0 2 0 1 0 4 7 8 8 3 2 8 1 6 13 0 14 2 4 10 18 3 ", "19 6 4 25 20 7 25 0 20 5 25 7 11 5 22 36 14 2 15 1", "2 2 21 16 41 47 9 21 30 0 3 17 54 29 25 33 21 40 3", "1 10 16 45 48 26 37 5 53 28 11 65 22"};
    vector<string> tree2 = {"0 0 0 0 4 0 6 0 8 1 8 8 7 3 14 7 8 4 13 19 4 3 17 ", "9 13 0 11 5 11 5 20 13 27 4 1 7 16 0 35 6 28 9 24 ", "0 23 16 24 20 8 4 39 36 24 24 39 48 39 19 13 6 49 ", "43 27 61 10 15 51 39 59 58 16 41 57"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 44.68863383931877;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> tree1 = {"0 1 1 3 3 3 3 3 7 8 6 5 12 0 3 0 11 1 5 14 16 5 1 ", "0 5 20 23 7 3 15 18 10 17 2 11 12 12 4 1 7 25 27 1", "2 11 13 16 31 32 32 3 9 11 2 30 0 23 49 12 0 33 58", " 4 27 13 42 57 49 64 47 53 30 29 23 33 6 74 41 3 2", "4 53 1 78 1 8 72 56 69 4 60 19 25 13 67 18 6 68 45", " 58 95 59 11 20 14 102 73 105 76 48 94 100 72 0 30", " 63 24 37 80 36 57 70 32 75 122 31 98 123 77 125 1", "3"};
    vector<string> tree2 = {"0 1 0 2 4 1 3 2 0 2 0 9 11 8 7 3 11 3 6 16 7 7 12 ", "8 10 21 25 21 3 16 25 5 14 1 3 16 0 36 5 12 20 14 ", "37 2 29 29 2 26 33 27 40 24 48 11 10 26 48 4 21 50", " 41 11 20 36 36 16 14 27 7 25 39 56 62 32 73 25 33", " 20 44 46 75 48 32 13 57 85 63 70 36 37 17 8 10 15", " 45 36 89 94 66 23 35 74 35 31 20 75 8 47 19 81 57", " 54 94 16 14 48 83 53 93 58 61 59 47 42 61 49 43 2", "4 18"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 55.619200954084675;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> tree1 = {"0 0 1 0 3 5 3 7 3 3 10 1 3 8 0 7 11 11 7 5 2 21 2 ", "3 5 1 0 2 6 16 27 2 14 10 25 26 27 33 15 19 31 13 ", "23 16 21 9 29 25 3 13 31 17 29 35 36 37 21 28 44 8", " 12 46 32 54 4 18 27 67 38 22 40 17 70 6 24 74 48 ", "2 7 53 51 14 9 20 15 82 40 37 58 29 59 70 88 69 70", " 95 49 34 22"};
    vector<string> tree2 = {"0 1 1 2 4 2 3 3 5 0 8 11 1 2 4 3 2 15 7 19 12 11 4", " 19 6 17 12 20 6 12 30 5 4 18 19 18 25 29 25 35 39", " 36 13 6 7 12 25 44 35 38 47 31 17 5 41 52 13 25 1", "4 24 58 21 38 41 32 31 5 7 34 38 21 58 22 53 13 13", " 31 17 76 66 44 53 73 58 1 47 75 8 73 60 63 85 51 ", "61 93 62 9 50 96"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 40.92848484848485;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> tree1 = {"0 1 2 2 3 0 4 0 1 6 1 9 7 10 10 11 14 7 0 15 8 19 ", "11 11 0 11 18 13 18 11 27 27 14 26 26 20 25 6 29 3", "3 13 40 38 17 0 12 4 33 37 22 8 6 19 40 48 21 51 4", "8 51 24 57 52 34 50 20 10 6 1 38 29 45 26 27 38 74", " 14 12 25 50 4 22 42 41 26 24 29 73 17 31 62 31 83", " 22 64 20 60 71 77 0 2 28 52 26 3 56 48 52 67 102 ", "73 33 52 5 99 97 58 26 78 19 58 75 26 95 100 63 88", " 74 34 41 19 112 35 20 22 16 116 55 85 13 80 41 13", "3 64 19 42 98 146 103 53 58 31 62 86 18 41 150 18 ", "5 118 91 20 34"};
    vector<string> tree2 = {"0 0 1 0 2 1 4 5 6 0 0 1 0 3 10 10 8 0 15 18 5 19 1", "4 20 3 0 21 20 16 28 21 8 25 6 13 28 32 1 37 19 26", " 2 34 18 41 29 18 9 27 15 39 29 52 38 50 13 48 24 ", "43 41 10 16 10 0 23 42 32 39 20 18 33 69 12 69 38 ", "63 56 69 34 34 26 57 71 18 16 30 56 14 39 83 11 49", " 79 75 73 93 29 33 86 65 51 46 14 84 57 67 77 79 7", "3 49 20 99 31 85 78 111 95 52 81 81 113 111 78 18 ", "3 95 67 6 1 112 13 28 126 88 67 104 44 66 72 19 10", "0 16 36 14 140 97 108 20 19 1 77 51 22 58 78 20 90", " 116 26 69 69 149"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 51.57418768461713;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> tree1 = {"0 0 1 2 0 1 0 4 4 0 8 6 8 13 12 7 11 5 12 6 13 15 ", "20 14 16 11 17 9 19 3 29 16 21 11 10 33 35 30 25"};
    vector<string> tree2 = {"0 0 2 1 2 2 1 3 6 4 0 2 6 0 4 0 15 10 5 15 0 0 13 ", "23 22 9 7 6 14 26 25 6 16 9 25 1 1 34 6"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 30.07051282051282;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> tree1 = {"0 0 2 1 4 3 2 6 0 7 9 0 4 1 13 12 14 14 9 13 2 9 2", "1 9 8 9 25 22 17 9 25 17 9 33 27 21 15 27 17 18 18", " 23 39 38 17 35 16 11 25 9 25 42 23 43 1 28 52 35 ", "43 1 3 14 36 22 30 65 29 67 23 33 57 57 18 56 0 53", " 29 11 73 1 24 29 43 77 62 54 48 46 3 60 52 53 52 ", "85 32 21 32 70 40 18 24 44 27 19 90 69 31 29 33 7 ", "27 41 111 38 34 23 8 80 103 75 51 4 122 113 32 107", " 20 115 41 117 48 49 62 88 111 34 80 43 65 129 61 ", "86 49 36 89 42 39 99 36 26 130 131 102 78 113 99 8", " 76 128 117 90 107 53 62"};
    vector<string> tree2 = {"0 0 1 2 2 1 1 1 3 0 5 9 5 8 12 4 12 3 17 2 4 19 5 ", "4 18 3 21 6 28 23 2 28 22 4 13 13 33 37 22 27 3 35", " 10 37 8 17 8 14 46 11 4 11 38 0 11 47 13 19 34 50", " 42 15 61 61 24 14 49 33 6 42 69 6 47 10 63 66 31 ", "71 64 5 64 29 27 41 38 67 62 73 26 19 3 75 42 93 8", "6 86 88 16 68 37 73 69 14 64 71 29 76 9 40 81 2 91", " 45 18 39 44 27 98 27 116 21 32 16 83 91 114 72 21", " 93 34 128 12 44 130 54 76 52 95 49 116 134 99 5 1", "21 13 37 56 57 58 13 16 33 126 58 143 77 97 19 144", " 121 18 143 149 98"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 44.913673318551375;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> tree1 = {"0 0 0 2 0 2 1 6 3 7 10 8 12 5 4 1 12 4 14 2 0 16 1", "8 7 13 23 18 16 8 21 2 24 18 13 16 33 15 4 33 5 24", " 18 3 1 14 22 21 37 27 7 11 26 40 41 30 34 31 32 4", "6 26 43 58 26 19 9 15 15 6 17 44 23 61 45 11 15 53", " 76 38 65 12 9 67 1 63 80 42 27 80 9 11 65 70 49 4", "2 11 78 38 80 89 20 92 11 16 16 98 80 54 1 106 97 ", "55 6 86 57 25 11 88 110 96 15 113 76 37 62 120 25 ", "39 26 71 129 110 39 121 95 91 56 120 110 111 48 21", " 0 21 115 56 23 68 74 59 108 106 29 19 84 154 127 ", "119 109 8 13 120 55 41 149 45 151 143 124 32 43 25", " 101 33 63 69 128 124 89 27 45"};
    vector<string> tree2 = {"0 1 1 2 4 5 4 6 2 3 10 5 4 3 9 12 2 2 7 14 19 15 1", "8 22 19 9 12 27 19 3 29 25 11 3 2 8 8 14 31 5 38 2", "4 35 28 30 4 9 40 27 25 9 17 31 32 18 47 55 7 13 3", "3 16 59 32 48 59 35 41 38 1 67 30 49 30 24 4 29 41", " 1 1 23 60 9 63 25 47 7 8 33 85 67 20 53 30 87 39 ", "33 92 24 0 86 68 55 2 38 80 82 65 35 63 56 90 17 3", "5 15 46 52 76 75 93 75 109 69 32 108 105 115 52 10", "8 22 124 57 121 47 2 9 15 48 92 101 90 73 88 63 14", "0 135 79 11 67 14 47 66 80 23 141 3 110 58 144 141", " 77 151 97 126 140 145 76 27 105 21 22 130 170 121", " 27 87 118 30 166 161 160"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 44.116513198281154;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> tree1 = {"0 1 2 2 4 0 6 6 4 5 5 3 2 0 3 0 10 5 10 4 14 4 14 ", "22 7 3 22 17 17 22 11 30 16 16 14 24 35 28 38 4 14", " 24 15 12 6 9 15 45 38 19 40 34 30 49 45 36 23 5 6", " 18 51 10 5 12 27 8 49 41 30 14 66 65 36 33 44 16 ", "43 8 70 10 45 2 24 49 14 80 54 7 3 20 84 15 59 39 ", "46 6 33 78 58 26 7 54 80 61 21 90 31 70 19 87 100 ", "25 30 63 90 40 99 117 73 118 37 108 51 2 43 112 42", " 100 76 57 23 31 64 124 102 25 69 16 57 34 14 135 ", "90 55 62 47 142 25 148 119 32 59 58 137 100 105 14", "6 125 128 92 0 154 49 95 62 142 92 40 154 52 169 2", " 29 125 15 140 80 40 159 167 49 39 1 128 61 112 5 ", "44 40 174 19 53 157"};
    vector<string> tree2 = {"0 1 2 3 2 4 0 2 3 7 8 4 8 7 6 10 8 10 3 2 19 10 0 ", "4 6 1 20 13 24 2 7 23 15 29 26 23 18 2 11 7 32 36 ", "3 20 40 23 2 23 35 48 27 28 7 44 41 8 29 8 2 20 20", " 19 28 24 29 60 40 56 50 40 18 70 68 13 61 12 69 4", "7 39 7 10 77 3 17 67 22 33 31 36 3 80 71 76 19 93 ", "76 86 94 93 14 64 76 34 82 44 37 93 11 104 19 21 1", "07 15 91 17 65 84 38 74 53 46 4 32 61 58 74 71 52 ", "68 76 0 110 85 91 123 53 14 70 46 65 42 102 128 13", "6 14 124 103 76 47 85 101 117 90 123 9 85 26 61 78", " 17 136 130 129 61 133 147 154 49 105 16 54 103 59", " 142 133 99 68 56 37 21 56 90 154 118 106 52 168 2", "1 181 113 156 121 30"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 51.41995619892099;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> tree1 = {"0 0 2 1 2 1 0 7 8 0 1 2 7 6 9 7 6 11 15 14 7 19"};
    vector<string> tree2 = {"0 1 0 2 3 3 4 1 0 5 0 10 0 13 0 14 2 5 12 14 5 2"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 23.968379446640316;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> tree1 = {"0 0 2 0 3 4 2 4 6 0 1 9 0 10 3 15 3 17 10 6 7 3 17", " 3 16 0 3 14 9 18 28 17 20 8 15 1 6 2 25 32 28 7 3", "3 41 28 20 19 9 33 12 22 1 49 39 54 29 6 8 3"};
    vector<string> tree2 = {"0 0 2 3 1 4 2 5 4 4 1 0 10 0 5 9 15 8 2 1 15 8 4 1", "2 6 19 4 27 6 3 25 1 14 4 24 24 21 8 35 18 31 33 1", "4 11 31 13 23 38 33 42 49 5 5 28 26 15 10 29 51"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 37.18248587570622;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> tree1 = {"0 1 2 0 2 1 4 7 7 9 6 1 11 7 8 7 9 10 0 14 0 6 10 ", "18 11 14 14 22 0 27 18 25 20 30 3 13 27 14 21 12 1", "8 28 15 1 12 23 33 18 34 32 43 36 35 34 51 6 4 11 ", "21 51 31 39 55 60 36 43 32 9 6 46 25 40 8 27 63 11", " 67 29 40 69 44 68 79 11 10 12 74 66 73 79 58 36 2", " 21 59 49 81 54 90 47 75 78 60 26 64 53 33 44 7 53", " 72 60 57 75 40 84 87 6 83 24 78 89 60 89 78 86 65", " 121 116 100 94 71 16 67 105 49 3 110 119 120 99 7", "9 68 39 113 38 132 29 62 94 30 94 18 119 38 46 99 ", "33 28 67 137 80 87 158 80 47 5 50 59 6 62 62 134 1", "37 93 125 12 134 50 125 40 157 175 179 26 149 122 ", "127 76 61 147 100 46 78 80 54 143 174 133 30 76 13", " 155 137 55 26 67 25 104 167 65 69 82 66 60 79 203", " 117 44 138 77 66 199 41 14 79 72 147 102 90 55 46", " 187 14 124 167 76 199 80 101 189 101 123 8 116 44", " 61 171 62 247 192 148 46 211 190 229 21 81 202 21", "3 75 129 181 176 149 12 104 19 160 75 88 137 171 3", "1 244 193 231 199 15 139 240 40 128 78 120 276 146", " 31 108 183 237 110 143 267 256 212 130 201 107"};
    vector<string> tree2 = {"0 1 2 3 4 2 1 0 4 3 8 7 1 3 12 11 10 2 4 0 20 1 9 ", "3 4 18 4 5 20 27 6 30 19 5 30 33 5 2 7 14 13 6 36 ", "17 2 32 37 38 46 3 11 33 8 27 16 29 5 7 29 42 40 1", "8 54 46 44 22 63 23 51 19 5 54 1 19 61 33 45 29 22", " 17 24 55 80 38 22 27 28 55 85 63 25 9 8 0 18 88 8", "0 8 95 58 51 93 89 28 7 62 76 89 72 96 53 81 22 94", " 17 69 2 26 29 87 99 99 31 49 115 32 125 74 104 25", " 66 78 95 88 40 37 18 120 9 22 0 137 69 60 70 70 2", "2 144 17 90 132 10 58 6 72 82 122 138 36 112 90 90", " 54 74 118 149 43 120 108 94 150 73 89 95 80 16 85", " 130 84 21 15 123 159 35 136 42 27 58 91 72 69 147", " 81 49 167 84 6 192 127 133 119 198 140 19 182 178", " 3 178 92 4 86 73 110 153 137 145 72 184 218 152 1", "78 82 180 109 155 221 3 58 155 114 97 40 160 204 2", "27 108 111 4 199 2 36 168 2 41 122 156 142 4 47 13", "1 160 53 120 29 189 200 100 168 63 165 186 27 4 68", " 169 261 184 55 110 177 158 42 239 198 59 258 77 2", "06 136 240 104 252 106 189 113 113 31 7 90 91 244 ", "8 21 89 240 79 235 23 68"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 50.9526867335563;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> tree1 = {"0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0"};
    vector<string> tree2 = {"0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0 ", "0"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9607843137254903;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> tree1 = {"0 0 2 1 3", " 0 1 3 8 3 8", " 1 6 4 0 13 10", " 16 1 8 6 21 13", " 6 17 10 17 21 22", " 26 18 5 18 33 10", " 26 27 3 26 14 20", " 15 20 9 21 26 24", " 31 4 33 6 16 33", " 53 28 4 26 33 23", " 53 44 56 29 9 25", " 19 29 54 19 42 36", " 22 72 65 27 15 56", " 56 33 49 41 19 43", " 82 63 67 4 15 58", " 24 47 13 4 2 5", " 54 73 94 86 87 68", " 32 21 26 84 72 7", " 50 61 20 86 109 0", " 93 5 38 100 22 80", " 36 67 0 58 74 5", " 15 125 53 3 77 15", " 26 6 65 121 59 29", " 66 32 127 115 83 79", " 14 8 137 135 125 12", " 61 107 70 18 113 139", " 144 151 140 136 27 154", " 21 15 7 69 133 111", " 161 144 35 33 126 0", " 133 79 133 133 167 119", " 157 173 84 150 79 45", " 140 181 155 53 145 11", " 115 130 8 190 37 61", " 85 127 2 42 92 3", " 155 200 25 68 159 59", " 134 70 209 175 13 141", " 127 199 90 170 107 111", " 41 97 223 173 39 162", " 61 54 134 63 55 69", " 232 0 150 225 64 108", " 140 143 30 207 24 184", " 220 58 130 181 183 114", " 65 69 71 146 217 255", " 185 5 110 40 250 38", " 65 194 234 65 181 22", " 218 1 254 226 157 227", " 67 104 171 58 14 83", " 104 91 47 231 181 105", " 234 181 229 70 276 182", " 244 66 113 53 178 14"};
    vector<string> tree2 = {"0 1 0 2 4", " 2 3 7 6 8 6", " 4 11 11 3 15 0", " 10 18 14 6 13 22", " 1 8 4 4 2 23", " 20 15 27 1 7 34", " 0 16 21 30 3 28", " 0 32 42 22 32 21", " 33 28 16 35 40 6", " 48 10 17 28 44 44", " 19 7 53 48 33 4", " 9 7 5 61 50 41", " 48 43 49 19 26 49", " 38 40 35 22 28 71", " 57 64 62 39 0 43", " 45 49 7 18 29 91", " 4 21 24 57 78 9", " 70 8 75 66 102 78", " 93 73 3 14 16 89", " 73 34 37 88 22 4", " 68 87 110 119 101 8", " 11 53 18 105 69 3", " 90 76 2 93 52 120", " 39 26 6 37 71 116", " 138 18 128 9 104 100", " 117 45 140 116 74 80", " 33 90 78 41 69 117", " 92 24 92 124 55 52", " 150 34 166 129 2 54", " 141 74 107 48 116 117", " 18 176 40 98 125 111", " 65 61 84 178 28 102", " 9 23 169 98 145 154", " 169 66 178 121 146 128", " 126 131 157 107 204 183", " 40 126 182 88 120 198", " 7 36 103 108 116 115", " 126 163 5 156 0 76", " 61 223 134 95 55 142", " 215 214 27 109 42 146", " 141 46 169 200 57 73", " 76 53 171 77 190 172", " 185 33 112 113 253 195", " 217 176 115 107 90 136", " 30 34 101 146 167 12", " 122 238 267 196 42 12", " 243 150 163 0 160 231", " 250 55 207 64 261 69", " 200 35 182 87 53 249", " 64 271 19 43 121 112"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 52.68771460423634;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> tree1 = {"0 1 1 1 0 5 3 2 3 9 1 2 3 6 4 3 5 6 17 12 16 21 11", " 15 4 16 8 26 1 7 30 9 18 10 33 5 7 33 31 11 19 15", " 25 37 29 28 9 14 9 15 9 1 52 37 35 36 15 22 29 16", " 55 61 27 28 37 50 40 10 33 3 59 36 59 46 45 14 65", " 74 31 43 41 45 74 12 58 84 21 35 50 44 78 20 0 86", " 48 91 31 88 9 94 57 9 37 42 28 57 46 77 12 7 0 76", " 61 109 35 10 19 79 104 4 86 96 81 87 117 87 84 11", "3 62 119 34 87 59 23 48 98 27 94 101 39 104 62 5 2", "0 99 133 137 58 103 58 25 124 48 18 143 98 156 94 ", "120 121 126 155 133 52 8 51 17 49 68 24 139 60 151", " 173 106 127 45 71 157 99 102 142 50 61 63 173 96 ", "134 106 148 114 125 25 97 88 178 72 147 96 128 126", " 38 55 127 133 141 119 190 195 4 154 164 75 29 212", " 101 132 184 93 150 185 158 90 108 200 96 42 41 65", " 174 49 77 101 150 209 181 147 63 90 188 148 212 1", "83 119 138 214 132 76 103 61 174 105 34 177 240 78", " 235 48 213 44 219 210 244 116 91 100 152 176 177 ", "222 49 264 189 32 249 27 166 220 188 213 39 15 65 ", "137 254 48 37 79 33 209 1 231 255 7 193 182 259 12", "8 293"};
    vector<string> tree2 = {"0 0 0 2 4 0 2 0 4 5 3 7 4 7 2 4 6 3 8 16 2 8 14 6 ", "1 21 3 25 18 29 19 25 14 1 31 20 8 21 3 7 2 18 36 ", "8 34 12 1 20 37 30 44 36 44 26 5 41 27 26 53 40 34", " 22 14 42 30 24 12 5 12 39 4 12 58 12 4 31 12 63 1", "8 50 46 62 74 11 14 75 82 85 78 74 33 33 92 26 34 ", "64 64 14 29 84 31 18 83 72 79 22 93 6 59 76 15 73 ", "105 51 18 73 8 74 101 7 80 14 48 108 46 102 119 9 ", "49 93 102 63 17 123 22 22 2 92 25 35 104 15 44 76 ", "40 28 0 120 14 128 64 10 14 40 142 14 136 67 49 79", " 26 138 115 68 11 25 62 103 113 85 23 147 9 3 2 88", " 38 117 17 65 93 75 40 33 100 94 45 21 48 117 167 ", "36 60 127 174 25 56 12 117 141 117 100 89 125 72 7", "4 153 135 185 141 155 86 207 22 72 77 152 58 55 10", "4 144 158 175 77 158 68 182 148 185 106 219 92 226", " 180 44 74 112 51 171 171 29 13 235 37 132 110 58 ", "198 145 12 193 72 151 10 34 237 197 53 34 60 213 2", "11 191 106 31 124 205 20 54 186 11 9 272 75 9 233 ", "18 45 66 33 146 29 38 81 193 253 163 21 172 251 25", "8 104 57 128 153 169 219 18 169"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 53.17589743589743;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> tree1 = {"0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"};
    vector<string> tree2 = {"0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 44253.99333333333;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> tree1 = {"0 1 1 1 2 0 1 6 6 5 4 3 11 11 4 13 13 6 7 16 10 17", " 19 20 15 14 1 18 22 29 19 1 31 33 30 28 13 14 29 ", "13 20 39 8 30 4 3 0 40 4 26 22 30 32 3 4 43 11 19 ", "37 30 38 8 16 36 25 14 1 2 40 13 7 53 36 38 57 44 ", "76 76 77 54 59 77 40 35 49 50 4 7 20 3 86 64 45 28", " 7 62 3 90 68 77 32 83 44 63 64 69 1 73 34 35 70 3", "1 27 8 62 85 15 60 109 88 111 79 89 68 118 23 73 1", "20 69 45 44 73 92 13 132 42 113 74 128 35 83 29 6 ", "75 62 89 95 140 18 135 12 126 77 130 137 131 53 61", " 66 57 84 4 8 12 158 40 48 110 161 83 9 148 163 35", " 1 131 147 8 10 135 1 171 166 50 72 4 145 4 14 34 ", "142 42 7 56 186 16 130 181 92 60 1 155 13 163 49 2", "1 67 46 66 183 57 102 66 173 111 211 24 21 66 79 1", "28 93 34 17 61 217 39 80 58 153 118 170 88 129 70 ", "109 11 169 85 84 133 177 197 13 128 76 36 242 156 ", "42 146 13 51 187 63 184 39 5 31 209 152 41 74 67 1", "25 45 262 213 94 191 31 94 166 8 74 69 163 192 273", " 86 221 197 56 41 0 260 119 263 118 56 94 222 42 3", "4 46 252 123 131 228"};
    vector<string> tree2 = {"0 1 1 1 2 0 1 6 6 5 4 3 11 11 4 13 13 6 7 16 10 17", " 19 20 15 14 1 18 22 29 19 1 31 33 30 28 13 14 29 ", "13 20 39 8 30 4 3 0 40 4 26 22 30 32 3 4 43 11 19 ", "37 30 38 8 16 36 25 14 1 2 40 13 7 53 36 38 57 44 ", "76 76 77 54 59 77 40 35 49 50 4 7 20 3 86 64 45 28", " 7 62 3 90 68 77 32 83 44 63 64 69 1 73 34 35 70 3", "1 27 8 62 85 15 60 109 88 111 79 89 68 118 23 73 1", "20 69 45 44 73 92 13 132 42 113 74 128 35 83 29 6 ", "75 62 89 95 140 18 135 12 126 77 130 137 131 53 61", " 66 57 84 4 8 12 158 40 48 110 161 83 9 148 163 35", " 1 131 147 8 10 135 1 171 166 50 72 4 145 4 14 34 ", "142 42 7 56 186 16 130 181 92 60 1 155 13 163 49 2", "1 67 46 66 183 57 102 66 173 111 211 24 21 66 79 1", "28 93 34 17 61 217 39 80 58 153 118 170 88 129 70 ", "109 11 169 85 84 133 177 197 13 128 76 36 242 156 ", "42 146 13 51 187 63 184 39 5 31 209 152 41 74 67 1", "25 45 262 213 94 191 31 94 166 8 74 69 163 192 273", " 86 221 197 56 41 0 260 119 263 118 56 94 222 42 3", "4 46 252 123 131 228"};
    int K = 7;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 63.12472686733557;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> tree1 = {"0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> tree2 = {"0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ", "0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9930795847750866;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> tree1 = {"0 1 2 3 4 5 6 7 8 9 10 ", "11 12 13 14 15 16 17 18 19 ", "20 21 22 23 24 25 26 27 28 29", " 30 31 32 33 34 35 36 37 38 39", " 40 41 42 43 44 45 46 47 48 49 50", " 51 52 53 54 55 56 57 58 59 60"};
    vector<string> tree2 = {"0 1 2 3 4 5 6 7 8 9 10 ", "11 12 13 14 15 16 17 18 19 ", "20 21 22 23 24 25 26 27 28 29", " 30 31 32 33 34 35 36 37 38 39", " 40 41 42 43 44 45 46 47 48 49 50", " 51 52 53 54 55 56 57 58 59 60"};
    int K = 4;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.967741935483871;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> tree1 = {"0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0"};
    vector<string> tree2 = {"0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 44253.99333333333;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> tree1 = {"0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"};
    vector<string> tree2 = {"0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"};
    int K = 6;
    TreeUnion* pObj = new TreeUnion();
    clock_t start = clock();
    double result = pObj->expectedCycles(tree1, tree2, K);
    clock_t end = clock();
    delete pObj;
    double expected = 44253.99333333333;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22838856&rd=15501&pm=12586
********************************************************************************
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <string>
#include <list>
#include <queue>
#include <cassert>
#include <stack>
#include <stdio.h>
#include <string.h>
 
using namespace std;
 
#define pb               push_back
#define mp              make_pair
#define fill(a,v)           memset(a, v, sizeof a)
#define INF              (int)1e9
 
typedef vector<int> VI;
typedef long long LL;
typedef pair<int, int > PII;
 
 
VI splitInt(string s)
{
  s+=(' ');
  int n=s.size();
  int cur=0;
  VI ret;
  for(int i=0;i<n;i++)
    if(s[i]==' ')
    {
      int z=0;
      bool neg=false;
      if(s[cur]=='-')  neg=true;
      if(s[cur]=='-' || s[cur]=='+') cur++;
        
      for(int j=cur;j<i;j++)
        z=z*10+s[j]-'0';
      if(neg) z=-z;      
      ret.pb(z);
      cur=i+1;
    }
  return ret;
}
 
int N;
int d1[305][305];
int d2[305][305];
 
int cnt1[10];
int cnt2[10];
 
class TreeUnion 
{
public:
 
 
double expectedCycles(vector <string> tree1, vector <string> tree2, int K) 
{
  string t1="";
  for(int i=0;i<tree1.size();i++) t1+=tree1[i];
  string t2="";
  for(int i=0;i<tree2.size();i++) t2+=tree2[i];
  
  VI a1 = splitInt(t1);
  VI a2 = splitInt(t2);
  N=a1.size() + 1;
  
  for(int i=0;i<N;i++) {
    for(int j=0;j<N;j++) {
      if(i==j) {
        d1[i][j]=0;
        d2[i][j]=0;
      } else {
        d1[i][j]=INF;
        d2[i][j]=INF;
      }
    }
  }
  
  for(int i=0; i<a1.size(); i++) {
    d1[a1[i]][i+1]=1;
    d1[i+1][a1[i]]=1;
    
    d2[a2[i]][i+1]=1;
    d2[i+1][a2[i]]=1;
  }
  
  for(int i=0;i<N;i++) {
    for(int j=0;j<N;j++) {
      for(int k=0;k<N;k++) {
        d1[j][k] = min(d1[j][k], d1[j][i] + d1[i][k]);
        d2[j][k] = min(d2[j][k], d2[j][i] + d2[i][k]);
      }
    }
  }
    
  fill(cnt1,0);
  fill(cnt2,0);
  
  for(int i=0;i<N;i++) {
    for(int j=0; j<N; j++) {
      int z1 = d1[i][j];
      int z2 = d2[i][j];
      if(z1<10) cnt1[z1]++;
      if(z2<10) cnt2[z2]++;
    }
  }
    
  double ans = 0;
  for(int a=1; a<=6; a++) {
    for(int b=1; b<=6; b++) {
      if(a+1+b+1 != K) continue;
        
      ans = ans + cnt1[a] * (cnt2[b] / (N * 1.0 * (N-1)));
    }
  }
  
  return ans/2;  
}
 
 
 
};
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/