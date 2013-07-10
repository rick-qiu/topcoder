/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8238
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

class PointsOnACircle {
public:
    int color(vector<string> points);
};

int PointsOnACircle::color(vector<string> points) {
    int ret;
    return ret;
}


int test0() {
    vector<string> points = {"0 10 15 25 40 50 60"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> points = {"1"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> points = {"0 1 3 7 15 31 63 127"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> points = {"0 180"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> points = {"0 1 2 180 181 182"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> points = {"183 275 100 120 126 323 144 351 18 332 2", "37 345 355 177 30 279 245", " ", "196 152 285"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
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
    vector<string> points = {"290 21 305 2", "2 ", "248 59 199 353 17", "6 ", "97 16", "5 331 1", "8", "2 ", "2", "0", "5", " ", "1", "0", "8", " ", "1", "6", "2", " ", "2", "1", "8", " ", "1", "1", "1", " ", "1", "1", "6", " ", "1", "5", "0"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> points = {"359 54 268 307 55 131 89 324 47 278 287 291 259", " 103 322 207 142 166 68 3", "46 104"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> points = {"39 ", "205 351 304 184 243 76 98 195 348 234 ", "34", "4", " 14", "3 1", "76 ", "1", "6", "5", " ", "1", "5", "9", " ", "1", "1", "7", " ", "1", "1", " ", "1", "6", "7", " ", "2", "9", "8", " ", "1", "9", "9"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> points = {"34 94 180 327 107 152 96 235 ", "164 2", "3", "0 1", "24", " ", "2", "9", "2", " ", "3", "5", "9", " ", "2", "4", "4", " ", "2", "2", "0", " ", "1", "2", "1", " ", "1", "7", "0", " ", "1", "7", "4", " ", "7", "4", " ", "3", "3", "6", " ", "1", "6", " ", "3", "3", "2"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> points = {"3", "42 33 332 26 43 249 188 221 49 ", "34", " ", "27", "4", " ", "1", "5", "3", " ", "2", "1", "8", " ", "2", "2", " ", "2", "2", "9", " ", "2", "1", "4", " ", "2", "1", "7", " ", "2", "2", "6", " ", "2", "3", "5", " ", "1", "6", "0", " ", "2", "9", "6", " ", "1", "2", "2"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> points = {"316 173 130 42 328 38 137 164 26 211 129 ", "21 2", "2 ", "2", "1", "7", " ", "3", "0", "4", " ", "1", "6", "2", " ", "7", "6", " ", "1", "3", "6", " ", "5", "4", " ", "2", "7", "2", " ", "5", "2", " ", "2", "9", "4"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> points = {"325 14 3 215 277 314 221 83", " 274 19", "0", " ", "19", "9", " ", "1", "9", "5", " ", "7", "4", " ", "2", "0", "9", " ", "8", "1", " ", "0", " ", "2", "7", "9", " ", "6", "3", " ", "2", "0", "4", " ", "1", "4", "4", " ", "2", "7", "8", " ", "1", "9", "8", " ", "3", "5", "6"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> points = {"305 129 65 106 346 132 123 ", "79 262 343 220", " ", "1", "7", "3", " ", "1", "8", "3", " ", "3", "0", "8", " ", "2", "5", "3", " ", "2", "0", " ", "4", "4", " ", "1", "0", "5", " ", "2", "6", "5", " ", "1", "7", " ", "1", "2", "0", " ", "3", "2", "8", " ", "3", "1", "3"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> points = {"341 79 225 2 245 29", "5 185 22 81 144 2", "0", "0 ", "7", "0", " ", "1", "6", " ", "1", "7", "5", " ", "2", "0", "5", " ", "8", "7", " ", "7", "4", " ", "1", "3", "0", " ", "1", "5", "1", " ", "1", "5", "7", " ", "2", "1", "2", " ", "1", "2", "2", " ", "2", "7", "1"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> points = {"194 256 254 165 41 1", "5 104 234 76 227 9", "3 94 178 201 139 169 339 0 87 111 231 78 ", "333 1", "49"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> points = {"81 277 114 108 185 5 189 318 304", " 136 3", "43 333 ", "3", "5", "3", " ", "2", "6", "7", " ", "1", "7", "9", " ", "1", "7", "2", " ", "3", "5", "7", " ", "1", "2", "9", " ", "7", " ", "0", " ", "3", "1", "0", " ", "1", "6", "4", " ", "1", "8", "1", " ", "1", "9", "3"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> points = {"132 343 317 248 174 169 14", " 84 120 2 129 110 225 209 128 194 312 99 ", "298 257 206 228 123", " 80 2", "3", "6"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> points = {"185 150 286 141 208 58 176 69 240 4 99 20", " 341 328 107 80 134 29 72 34 39 236 55 128 155"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> points = {"277 321 342 182 194 256 145 239 297 112 338 146", " ", "3", "4", "0", " ", "7", " ", "2", "8", "2", " ", "1", "3", " ", "9", "4", " ", "2", "1", "8", " ", "2", "3", "5", " ", "1", " ", "3", " ", "3", "1", "0", " ", "1", "5", "7", " ", "1", "6", "3", " ", "3", "1", " ", "3", "8"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> points = {"116 90 76 74 210 141 9 256 281 94 118 145 356 161 ", "147 104 11", "7 47 290 65 ", "2", "9", "3", " ", "3", "5", "0", " ", "2", " ", "9", "6", " ", "1", "7", "1", " ", "4", "9"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> points = {"171 211 84 184 91 278 126 151 149 45 27", "4 192 13 238 281 130 290 146 312 193 16", "1 340 288 76 19", "9 ", "16", "0", " 72"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> points = {"324 3", "45 52 135 114", " 123 294 192 63 109 295 4 195 290 234", " 354 338 166 163 32", "5 ", "1", "4", "9", " ", "3", "3", " ", "2", "5", "3", " ", "2", "4", "9", " ", "6", "6", " ", "2", "4", "7", " ", "1", "0", "6"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> points = {"105 261 38 332 209 307 272 333 120 197 ", "313 248 348 191 74 10 295 58", " 242 45 28", "4 158 ", "2", "1", "6", " ", "7", "2", " ", "1", "2", "4", " ", "1", "9", "2", " ", "1", "5", "6"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> points = {"270 13 30", "7 43 65 133 346 181 353 313 160 30", "5 249 237 187 102 192 175", " 345", " ", "31", "8", " ", "1", "8", "0", " ", "1", "2", "5", " ", "2", "8", "3", " ", "1", "8", "9", " ", "2", "8", "7", " ", "3", "0", " ", "3", "3", "1", " ", "3", "0", "8"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> points = {"238 114 184 191 34 27", "2 4 359 72 269 293 262 307 332 278 146 59 1", "85 ", "3", "1", "4", " ", "2", "5", "2", " ", "2", "1", "3", " ", "6", "9", " ", "3", "4", "2", " ", "2", "4", "5", " ", "9", "6", " ", "1", "7", "8", " ", "2", "7", "7", " ", "9", "1"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> points = {"62 22 337 120 89 2 72 218 280 154 310 116 233", " 8 249 174 356 17 4", "1 215", " 303 31 ", "143 85 279 246 113", " ", "3", "4", "4"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> points = {"128 135 98 251 141 100 227 1 343 11", "9 69 194 2", "55 257 30 236 267 17", "8 66 96 209 159 292 288 258 42 19", "9", " 5", "1 20"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> points = {"42 19 253 69 75 173 85 12 166 93 217 246 291 ", "183 334 261 255 222 187 86 144 78 210", " 139 ", "4 ", "1", "2", "1", " ", "3", "5", "4", " ", "3", "3", "0", " ", "2", "8", "6"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> points = {"54 16 120 337 269 3", "25 165 96 3", "34 260 188 236 196 3 185 279 290", " 44 2", "0", "3", " 2", "5", "5", " 2", "5", " ", "1", "2", "5", " ", "2", "0", "9", " ", "1", "7", "6", " ", "4", "9", " ", "2", "2", "9", " ", "3", "0", "2", " ", "2", "1", "0", " ", "1", "6", "0"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> points = {"336 164 286 320 24 348 115 85 135 34", "6 260 240 21 170 123 220 247 39", " 219 191 295 309 82 83 267", " ", "124", " ", "0", " ", "4", "8", " ", "3", "7", " ", "2", "3", "3"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> points = {"212 176 340 194 235 189", " 172 356 249 156 240 257 128 223 347 255 30 4", "8 70 261 34 102 94 49 165 280 21 242 284 1", "5 65 95 137 26", "4 69 291 314 72", " 2", "3", "0", " ", "3", "5", "2"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> points = {"337 31", "7 1 259 7", "7 147 86 274 189 142 228 235 250 185 51 355", " 275 ", "192 278 196 1", "70 202 321 180 335 31", "4 332 351 85 154 132 81 217 56 ", "129 336 324 233 164 44 255", " ", "223 ", "8", "0", " ", "5", "2", " 9", "2", " ", "6", " ", "2", "6", "0", " ", "2", "1", "3", " ", "1", "1", "7", " ", "2", "0", "7"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> points = {"19 331 97 292 1 197 10 210 132 142 ", "2 5 93 240 244 135 175 219 75 94 ", "320 109 250 61 89 99 301 141 314 146", " 69 1", "40 293 105 160 42 339 96 220 32", "6", " 348 354 ", "139", " 115 190 2", "86 2", "6", "0", " ", "3", "0", "5", " ", "1", "6", "9", " ", "6", "0"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> points = {"7", "5 207 246 11 2", "1 214 8 310 294 118 17 116 280 2", "81 229 155 345 339 ", "84 103 312 110 353 322 29 20 293 3", "37 252 113 137 204 142 100 22 ", "39 179 284 228 92 150 178 171 199 112 331 358 ", "12 60 4 97 359 334 243 3", "26 20", "6", " ", "1", "8", "1", " ", "2", "8", "7", " ", "3", "7", " ", "5", "7"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> points = {"237 144 29", "5 30 180 268", " 92 71 132 338 95 2", "96 168 0 76 228 15 11 218 91 112 234 ", "352 72 52 46 356 102 99 205 192 82", " 236 75 171", " 136 47 139 170 110 164 18 2", "31 239 145 31 42 146 61 140 1", "67 2", "08 10 86 310", " ", "2", "9", "9", " ", "2", "9", "7", " ", "1", "2", " ", "3", "0", "9", " ", "1", "6"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> points = {"297 149 110 19 88 20 152 311 205 231 2", "39 306 140 107 344 175 350 51 300 180 65 1", "61 124 122 1", "59 331 100 111 195 194 150 79 266 30", "2 276 68 245 40 224 137 58 356 1", "06 270 10 109 78 41 32 220 145 325 46 2", "17 ", "30 39 295 179 128 213 76 121 243 359", " ", "2", "1", "9", " ", "3", "5", "3", " ", "8", " ", "1", "6", "0", " ", "7", "2", " ", "3", "3", "2"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> points = {"68 122 335 72 272 137 50 131 344 ", "138 296 4", "4 292 228 235 125 325", " 134 203 268 336 29", "8 54 3", "42 214 293 97 306 86 177 108 11", "2 289 234 238 187 13 316 346 239 271 21", "8 199 191 312 186 84 299 15 337 184 120 13", "2 130 273 1 295 190 9 ", "20", "6 ", "3", "0 ", "2", "7", "7", " ", "1", "3", "9", " ", "1", "3", "3", " ", "2", " ", "3", "5", "4", " ", "1", "4", "8", " ", "3", "4", "0", " ", "2", "1", " ", "9", "1"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> points = {"41 179 335 32", "3 249 198 95 217 324 33 230 219 341 48 58 170", " 223 303 158 296 23", "9 229 9", "6 318 258 234 150 142 2 328 14", "8 207 151 204 3", "02 102 98 100 267 174 248 145 1", "5 254 272 0 256 13 181 ", "139 45 144 141 326 1", "73 164 332 337 203 172 74 343 49 349 17", "7 122 63 228 68 29", "5 159 319 97 85 ", "265", " 3 ", "3", "3", "1", " ", "7", "7 ", "1", "2", "0", " ", "4", "7"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> points = {"20 55 255 189 358 35 284 239 3", "22 109 259 72 3", "55 1", "63 61 219 306 207 ", "201 148 222", " 67 24 323 218", " 93 178 86 261 214 ", "39 16 174 264 307 275 135 244 175 245 7", "4 23 62 316 319 206 254 91", " 266 56 119 278 2 334 129 47 216 ", "105 102 33 220 170 193 29", "6 234 354 345 140 37 289 ", "27 35", "1 29", "5 97 4", "2 6", "8 38 ", "15", "7", " ", "2", "0", "2", " ", "2", "0", "9"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> points = {"135 285 70 21 194 86 17 149 13 263 346 151 355 30", "2 4", " 187 43 175 1 130 314 248 246 1", "98 67", " ", "102 96 343 153 352 62 33 12", " 20 237 84 108 327 73 289 165 356 58 4", "1 340 215 292 275 208 219 283 226 305 53 3 233 ", "29 145 344 262 332 249 256 334 115 19 48", " 182 42", " 159 169 156 60", " ", "4", "9", " ", "1", "0", "6", " ", "9", "5", " ", "2", "0", "2", " ", "3", "3", "9", " ", "1", "2", "7", " ", "1", "2", "6"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> points = {"211 30 230 308 145 2 81 89 240 11 156 31", "9 228 90 237 276 15 98 283 185 3", "4 209 117 353 250 76 29 161 53 119 62 40 18", "2 266 47 69 78 72 137", " 54 194 328 77 253 32", "3", " 206 183", " 282 32 23 65 5", " 288 87 176 19", "2 301 313 134 31 232 19 337 92 187 99", " 285 340 95 348 163 153 48 1", "06 243 167 249 28 339 355 1", "68 287 170 180 150 346 294 1", "10", " ", "1", "5", "9", " ", "4", "2"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> points = {"86 213 35 112 15 199 212 72 305 264 294 153 3", "08 107 23", "8 280 251 192 288 29 116 18 3 48 319", " 171 91 206 12 230 32 175 13", "8 52 99 2", "03 139 231 42 82 331 273 222 41 115 18", "4 219 167 338 299 265 78 228 190 235 50 245 145 34", "8 79 289 216 141 129 143 254 38 258 137 26 193 233", " 109 125 111 1", "05", " 104 36 101 189 274 3", "10 275 88 59 73 5", "8 2", "6", "0", " ", "1", "2", "2", " ", "3", "2", "8"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> points = {"152 55 266 305 126 112", " 331 346 174 23 249 8 168 ", "228 263 77 324 18 107 113 79 292 39 2", "11 280 82 44 267", " 50 19 316 216 115 283 336 1", "50 342 223 47 3", "07 51 309 141 261 306 93 31", "0 189 ", "154 164 137 162 200 185 206", " 91 319 285 303 89 30 218 139 294", " 151 111 287 1 31", "8 117 135 36 311 197 32 273 63 323 304 12 20 24", "5 25 ", "3", "5", "9", " ", "3", "0", "0", " ", "2", "6", "5", " ", "1", "0", "6", " ", "2", "5", "1", " ", "2", "0", "1", " ", "1", "9", "0"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> points = {"2 213 11", "7", " 296 25 341 271", " 114 258 19 174 230 7 26 99 152 35", "0 106 35", "9 299 41 276 ", "349 156 338 ", "71 339 273 196 352 107 180 248 236 81 25", "1 97 321 51 237 165 82 211 238 103 55 ", "77 24 154 104 182 333 8 16 204 67 13 177 9 343 70 ", "227 300 118 158 88 113 235 69 243 123 17 311 1", "53 130 292 268 294 170 146 216 172 329 137 21 147 ", "278 124 15 161 39 217 108 310 326 274 6 47 186 101"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> points = {"230 297 260 24", "6 40 18", "2 21 176 221 277 33", "3 69 105 216 56 226 136 294 218 343 273", " 117 348 25 140 317 97 126 236 354 ", "349 196 310 234 83 76 303 19 217 118 191 346 3", "21 200 347 210 325 189 268", " 334 68 309 292 170 121 179", " 329 313 78 ", "298 205 128 314 99 74 101 304 156 301 164 186 344", " 91 239 259 352 1 122 ", "281 256 26 177 60 247 18 284 79 327 61 ", "3", "50 ", "324 73 131 244 358 319 279 96 88 225"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> points = {"144 119 168 339 254 55 218 131 324 6 328", " 340 1 123 231 174 77 28 104 307 354 ", "216 129 89 193 223 72 86 66 252 177 127 185 ", "182 100", " 224 17 271 40 103 99 258 280 276 299 291 156", " 253 161 357 83", " 113 45 ", "336 90 106 317 30 283", " 75 10 287 232 26 298 173 333 148 142 53 ", "204 278 288 234 320 176 153 239 1", "96 246 146 ", "155 180 97 151 57 130 19 309 118 247 195 62 315 ", "197 ", "122 110 175 322 93 111 24", "9 87 ", "229 ", "13", "7", " ", "3", "0", "6", " ", "3", "4", "5", " ", "1", "3", "6", " ", "3", "4", "4", " ", "6", "3"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> points = {"91 45 3", "18 193 272 2 154 131 22 83 219 238 303 18", "6 280 217 177 165 307 242 74 5 158 309 24", "5 70 300 354 118 220 98 92 239 218 350 126 ", "125 296 288 160 34 199", " 33 313 289 179 85 111 353 161 343 87 ", "195 176 254 215 58 65 26", "1 117 287 188 265 302 231 204", " 271 276 244 210", " 229 157 266 223 187 222 135 75 ", "224 311 41 ", "284 40 18", "4 15 206 150", " 72 167 62 212 37 24", "9 115 30 189 277 171 68 180 243 279", " 197 56 1 301 299 1", "20", " ", "8", "0", " ", "5", "9"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> points = {"202 97 352 72 25 ", "200 51 28 64 225 224 192 88 68", " 201 65 ", "212 345 ", "244 32 311 227 167 20", "8 98 291 73 110 54 85 164 206 130 128 294 2", "92 59 261 273 246 233 ", "307 343 240 326", " 356 141 304 234 359 259 256 333 ", "297 269 1 238 126 316 144 213 43 22 275 214 15 3", "55 121 106 323 155 277 75 242 80 353 45 276", " 255 320 285 168 77 84 92 235 162 357 337 248 140 ", "282 286 288 56 278 119 112 34 18 146 204 ", "152 163 177 347 191 279 271 ", "358", " 113 ", "135 78 ", "2", "8", "4", " ", "1", "8", "5", " ", "1", "2", "0", " ", "1", "6", "0", " ", "3", "3", "4", " ", "2", "1", "1", " ", "9", "0"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> points = {"129 96 54 12 288 214 65 326 109 45 17", "3 167 300 160 192 235 306 180 205", " 190 42 313 26 249 147 105 174 46 ", "356 343 84 232 225 24 55 327 253 2", "01 77 310 2", "9 91 1", "85 275 318 163 27 133 263 57 2", "92 354 161 209 358 182", " 261 9 44 145 216 139 293", " 224 323 211 117 155 266 330 177 112 41", " 193 30 48 138 264 271 332 143 36 102 1", "59 78 98 315 238 56 150 280 312 14 162 8", "1 106 114 220 336 298 345 317 256 295", " 245 4 338 269 165", " 22", "7 47 320 1", "5", "6 2", "0", "0", " 207 27", "8 169", " 2", "9", "6", " ", "2", "0", "8", " ", "1", "7", "2"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> points = {"114 233 190 127", " 100 36 228 288 38 110 105 175 22", "9 348 59 13 131 39 125 ", "210", " 35 266 197 177 33 156 20 214 ", "335 285 19 119 234 293 71 339 3", "09 56 312 34 79 290 76 276 328 241 50 337 344 247 ", "83 236 225 132 305 94 203 1", "82 204 88 217", " 144", " 4", "5 345 286 137 346 169 70 313 168 163 1", "74 280 130 212 170 268 138 279 147 249 ", "219 27 303 43 216 24 48 116 73 161 1", "81 296 273 133 164 118 246 320 327 340 238 186 91", " 95 82 135 350 349 16 162 275 112 51 185 124 314", " 85 28 21 329 308 53 244 294 86 136 155 191 283 75", " 355 139 215 252 106 326 184 113 352 12 11 281 115", " 159 146 277 317 167 158 357 154 15 208 23 98 359 ", "32 87 117 142 49 297 18 310 218 257 245 101 14 90 ", "265 8 311 171 47 97 152 318 141 96 267 46 145 278 ", "248 58 81 254 143 207 341 4 172 165 31 157 270 230"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> points = {"254 282 168", " 19 228 293 6 262 274 185 136 342 304 225 15 29", "4 105 230 251 236 219 122", " 192 302 249 218 52 183 26 234 ", "7 317 17 73 301 201 210 160 164 ", "2", "00 148 2", "90 104 11 20 208 90 96 119", " 128 167 95 243 231 76", " 187 43 223 198 335 ", "66 98 341 286 166 307 348 188 196 264 53", " 8 252 74 134 37 3", "8 24", " 326 101 3", "45 193 349 149 115 214 34", "3 338 48 354 316", " 291 205 245 239", " 358 65 257 184 327 337 355 202 17", "3 207 142 152 133 108 174 310 62 265 255 323", " 45 203 296 186 87 336 346 54 14", "1 116 303 206 99 266 272 242 29", " 215 102 ", "344 339 247 314 59 139 246 279 3", "28 287 132 195 179 241 190 309 138", " 221 178 357 79 332 320 250 ", "41 256 118 4 158 199", " 313 58 13 268 211 197 35 275 227 325 ", "161 ", "60 88 281 269 8", "6 140 330 288 ", "77 123 40 51 91 ", "31", "1 ", "61 42 127 80 113 57 130 181 78 121 111 283", " 7", "5", " ", "3", "4", "7", " ", "7", "1", " ", "1", "4", "4"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 166;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> points = {"30 187 152 223 135 329 28", "3 284 23", "7 222 133 340 221 199 77 85 266 43 158 336 67 ", "122 155 71 107 93 349 129 146 2", "5 260 169 113 277", " 88 74", " 247 101 337 210 131 3", "07 319 124 0 112 333 56 73 358 99 ", "279 211 149 267 24 274 35 285 242 59 178 241", " 200 52 240 306 ", "269 4", "1 345 183 92 4 262 291 314 60 182", " 299 5 65 21", "8 86 320 3", "16 176 172 346 90 295 118 359 261 234 132 271", " 153 287 164 191 348 258 27", " ", "39 270 76 45 ", "188 214 246 162 351 224 264 213 103 10", "5 18 98 354 301 89 143 297 194", " 23 104 227 313 1", "79 249 82 12 7 300 94 147 326 175 15", "9 33 243 79 34 70 140 125 29 202 123 322", " 75 145 189 298 119 ", "72 19 282 181 252 15 226 352 63 296 108 317 ", "32 156 127 233 20 106 166 ", "286 47 102 31 206 231 268 2", "01 6 154 353", " 163 294 259 170 212 292 275 338 46 100 312 111 1", "80 16 256 114 11 186 318 334 97 331 343 203"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> points = {"8 20", "8 355 237 61 151 235 11 116 31 30", "1 314 30 59 316", " 284 3", "30 53 2", "78 356 136 335 72 238 94 5", "8 64 3", "52 178 31", "7 ", "224 188 239 77 37 320 135 171 166 ", "28 183 41 327 214 167 105 304", " 337 280 35 206 119 165 338 242 348 160 182 233 21", "1 241 324 298 212 83 97 3 260 285 45", " 318 310 358 230 303 24 121 194 286 ", "161 217 10 225 259 2", "55 326 39 354 27", "4 359 79 74 222 4 181 50 47 244 ", "270 63 65 262 180 296 13", "1 351 249 293 331 90 175 142 315 32", " 127 147", " 0 334 48 139 223 197 172 220 152 ", "202 333 353 36 146 87 81 130 328 ", "122 26", "3 108 60 6 ", "269 185 141", " 111 21 101 9 110 132 133 ", "198 325 104 336 124 349 98 126 243 25 156 343 117 ", "332 155 289 148", " 67", " 322 192 231 26 71 80 277 1 19 254 283", " 219 84", " 234 125 196 ", "102", " 40 134 118 279 174 95 70 34", "1 339 309 321 82 106 22 3", "05 163 42 34 258 252 96 291 168", " 229", " 20 2", "15 91 2", "00 103 ", "276", " 66"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> points = {"313 309 355 29 11 334 179 123 15 312 198 129 2 10", "0 26 117 42 120 307 220 299 276 249 2", "92 222 279 50 229 289 174 80 62 347 97 16", "5 250 247 245 114 1", " 232 359 201 79 111 171 125 159 315 133 ", "65 217 352 3 298 193 139 216 7 340 20 304 160 ", "306 237 85 329 66 167 91 322 323 283 ", "317 325 99 21 310 25 94 240 265 350 5 212 20", "3 75 86 246 213 101 45 235 82 293 278 2", "77 234 242 144 146 27", "4 38 108 12", "6 300 338 8 ", "3", "42 135 61 333 2", "61 88 204 173 195 84 ", "335 316 68 19", " 190 ", "344 90 ", "320 188 121 327 89 106 43 273 210 215 72 ", "118 55 161 258 225 1", "87 78 169 221 290 296 152 150 53 130", " 2", "48 185 288 76 10 35 351 23 70 74 326 336 64 15", "7 163 9 202 339 13 92 31", "8 275 257 103 153 182 136 32 186 270 104 243 189 ", "124 113 145 219 56 17 93 142 356 98 141 263 208 2", "11 358 252 345 107 134 60 177 285 132 39 256 19", "9 22 16 346", " 239 2", "95 148 14 311 12 96"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 182;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> points = {"139 32 342 215 334 305", " 292 205 10 359 233 344 2", "8 56 349 289 283 352 329 325 296 144 337 18", "1 173 36 48 270 355 177 93 31", "0 209 272 271 2 74 64 154 332 2", "21 37 89 31 88 222 165 250 203 322 223 110 99 120", " 126 288 191 124 231 268 287 90 343 67 183 ", "239 22 249 199 314 300 180 109 2", "34 4", "2 45 188 346 303 117 328 128 58 29 68 206 276 47", " 279 71 179 308 175 137 269 20 264 82 167 129 114 ", "55 75 127 53 160 147 172 11 193 33 171 103", " 255 12 158 111 277 219 106 200 254 4 138 275 ", "331 159 313 38 35 321 59 204 212", " 25 101 21 351 295 98 96 174 251 104 ", "49 8 293 145 102 182 1", "87 301 273 157 354 1", "55 243 350 118 294 284 236", " 339 263 266 5 281 60", " 83 297 2", "45 91 149 312 113 86 9 34 280 290 340 357 15 253 7", "3 267 116 198 311 23 115 26 252 218", " 213 125 54 207 146 345 41 28", "5 238", " 192 17 210 76 244 2", "56 327 1 347 44 302", " 324 247 176 ", "18 333 78 43", " ", "9", "7", " 1", "8", "9", " ", "1", "9", "4", " ", "6", "9"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 186;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> points = {"69 217 303 187 8 172 ", "302 56 39 58 82 191 243 4", "6 ", "208 154 256 53 2 75 1 ", "350 333 183 2", "21 51 4 325 180 157 316 24 74 13 98 76 2", "46 244 249 357 181 38 25 85 25", "1 60 105 29 189 347 32 ", "150 34", "3 148 295 314 89 72 197 186 16 226 253 235 54 10", "1 234 170 52 272 296 323 199 173 102 9 121 ", "1", "39 238 169 61 185 309 329 285 26", "2 108 307 27", " 200 164 195 41 14", "9 268 241 359 44 239 33 62 6 358 22 330 136 203", " 228 266 356 43 280 126 229 291 261 40 240 66 17", "6 222 9", "2 155 7 232", " 351 86 335 73 348 274 337 1", "38 220 318 34 3 17", "5 21", "6 1", "30 141 151 179 353 263 21 336 11", " 84 242 210 292 31 278 143 206 265 103 ", "264 132 196 156 47 166 293 11", "8 294 36 233", " 63 162 298 223 25", "0 346 301 113 319 95 28 324 331 211 2", "18 91 306 35 67 55 87 214 339 326 ", "236 ", "30 159 50 59 168 15 252 ", "308 182 115 212 26 2", "01 328 312 29", "0 107 247 338 300 146 153 213 111 145 129 20 ", "79 345 140 ", "207 80 147 ", "6", "8", " ", "1", "3", "7", " ", "9", "3"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> points = {"352 122 194 207 280 61 115 86 292 216 6", "2 42 107 65 217 134 307 13 81 82 168 ", "75 349 151 228 275 27 101 242 271 ", "128 163 63 316 309 85 38 304 136 26", "0 87 278 223 150 236", " 212 43 191 137 14 330 ", "3 77 28 39 24 195 169 73 16 218 320 93 24", "4 247 51 182 138 233 104 2", "00 286 324 155 2", "72 359 287 12 132 125 34", "6 214 171 30 339 2 22 204 89 350 159 1", "47 243 358 267 337 210 252 142 314 231 52 106 40", " 335 129 230 226 98 291 300 1", "54 20 1", "9 206 1", "0 161 133 16", "4 130 285 7 262 344 67 315 353 184 255 1 79 140 ", "201 174 96", " 355 88 308 35 232 197 36 160 131", " 105 114 338 334 ", "345 94 108 208 ", "209 66 240 177 270 189 303 120 183 34 253 296 71 ", "294 298 119 326 56 340 248 69 331 ", "116 148 53 205 173 327 118 5", " 84 149 144 99 336 18 190 37 297 172 95 ", "0 220 342 329 11 341 2", "89 258 117 323 268 165 293 46 167 139", " 109 112 192 49 187 59 196 3", "1 245 113 8 222 259 227 64 313 44 288 121 55 2", "03 9", "2 3", "0", "1", " ", "1", "4", "5", " ", "3", "4", "8", " ", "1", "4", "3"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> points = {"228 184", " 7 304 9", "6 120 177 293 74 56 40 267 3", "58 70 326 149 252 260 195 319 186 328 216 113", " 285 331 23 128 164 142 314 219 218 81 84 347 ", "337 182 47 87 144 11 92 242 ", "12 154 90 288 32 312 298 170 29 37 118 17 13", " 349 22 354 69 117 294 208 146", " 82 58 353 39 244 2", "12 351 83 123 3", "05 263 27", "6 66 190 59 126 269 31 243 101 34 315", " 99 322 343 344 27 2 109 359 183 135 ", "210 166 268 273 175", " 227 197 196 261 141 279 85 229 150 259 104 ", "10", "0 54 270 284 176 296 289 157 114 24 129 278 ", "138 192 345 299 223 352 172 239 106 275 295 256", " 191 60 155 253 6 72 264 199 257 44 340 311 93 2", "06 18 76 52 153 291 307 160 ", "262 339 86 306 205 10 55 272 163 198 168 226 ", "320 133 173 57 300", " 214 105 238 161 156 16 248 28 350 19 220 286 1", "43 221 78 318 174 124 61 234 33", "8 3", "17 167 236 181 301 3 94 ", "310 171 211 333 249 125 ", "80 26 356", " 162 280 121 ", "355 255 207 25 292 189 89 65 68 341", " 297 91 14", "5 302 346 116 327 1", "65 36 115 254 ", "38 3", "3 2", "0", "0", " ", "2", "7", "7"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 206;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> points = {"68 358 216 132 11", "5 210 45 13 76 185 63 156 346 268 177 2", "96 305 266 285 123 298 25", "9 174 143 ", "207 319 81 301 260", " 189 128 173 267 310 282 114 214 194 342 ", "136 176 138 77 336 40 233 153 318 7", "4 292 204 57 144 88 254 125 98 65 15", "2 111 93 252 94 197 ", "218 16 227 41 46 150 187 12 ", "104 ", "326 297 78 350 37 151 15 248 59 ", "0 206 221 80 212 201 235 313 262 106 306 165", " 333 30 220 5 139 91 9 121 8", "2 112 60 198 237", " 117 54 335 159 339 66 52 284", " 149 71 244 126 53 158 202 90 290 275 ", "145 288 351 308 286 20", " 209 14 8", "3 2", "80 21 265 12", "7 343 172 6 24 105 10 325", " 79 84 2", "70 192 311 348 ", "196 70 7 35 48 217 271 170 2", "7 43 223 130 ", "141 338 226 179 118 203 67 1", "83 356 231 193 38 291 56 ", "309 334 256 205 230 3", "1 249 102 352 129 180", " 299 47 215", " 3 184 4 154 131 213 17 1", "69 25 243 357 349 359 11 347 72", " 61 307 224 166 134 238 190 327 331 2", "55 330 236 276 345 353 283 303 140 ", "211 2", "61 163 86 178 133 241 322 324 101 263 219 332 242 ", "316 161 ", "2", "6 ", "2 7", "5 ", "1", "0", "0"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 216;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> points = {"268 286 28 126", " 277 187 260 307 274 193 329 29 31 25 144 34", "5 296 186 56 298 267 240 26", "9 297 164 215 350 122 254 71 157 342 283 312 25", "6 32 141 229 203 90 188 279 119 47 295 175 19 177 ", "136 189 152 294 227 244 201 230 80 108 50 194 335 ", "326 299 21 206 318 321 200 46 172 337 212 133 82 3", "38 226 235 166 261 146 117 74 128 33 41 85 118 17 ", "292 358 89 18 325 313 359 310 2 247 315 124 303 20", "4 105 280 220 14 15 253 234 7 357 285 4 302 311 25", "8 281 228 211 130 97 333 131 93 276 257 147 60 156", " 183 353 182 149 339 301 110 259 134 214 184 330 1", "39 9 127 129 155 10 35 63 95 289 273 237 243 272 2", "90 246 101 233 81 79 98 192 197 58 99 343 322 86 2", "55 120 104 140 250 231 190 59 199 242 37 54 66 251", " 23 165 355 223 160 222 171 88 30 248 181 137 49 2", "45 11 347 308 205 275 138 169 34 278 218 61 287 83", " 324 341 24 336 123 84 91 306 102 319 265 27 208 8", "7 249 282 106 153 125 75 219 332 72 73 252 262 191", " 331 12 145 159 300 236 266 270 224 210 323 314 62"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 220;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> points = {"172 137 41 33 129 82 238 156 145 26 250 178 69 2", "25 136 214", " 124 316 165 30 19", "0 98 48 20", "3 249 99 29 347 344 3", "25 359", " 149 8 201 5", "4 103 239 280 127 290 3", "56 91 45 307 121 321 ", "146 90 171 6 71 193 116 11", "8 255 320 355 ", "50 75 188 215 85 133 2 219 ", "106 76 336 315 160 59 350 77 153 353 322 49 1", "73 243 288 158 31 200", " 93 210 42 13 9 289 23", "4 213 226 266 151 119 57 180 202 150", " 237 252 258 115 18 14 169 329 261 111 331 23", "6 311 241 80 95 272 39 340 79 230 38 109 ", "25 52 181 159 352 282 231 122 208 155 211 278 2", "51 62 87 21 309 199 10 179 185 262 287 108 19 1", "94 345 100 285 105 78 4 281 303 349 265 205 176 ", "84 184 28 139 259 70 138 246 37 295 247 257 58", " 142 112 186 166 330 168 55 35 40 72 97 337 326 22", "4 5 16 279 269 68 144 191 339 32 89 96 222 182 123", " 196 56 67 86 338 157 132 220 212 61 0 263 195 162", " 292 235 310 342 7 1 164 216 317 228 63 102 141 27", "6 117 296 20 223 275 113 300 227 154 301 299 60 30", "6 147 125 152 357 36 268 286 298 17 183 88 218 319"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 224;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> points = {"63 178 131 278 296 236 202 84 54 266 185 294 171", " 303 3 134 291 235 125 299 72 2", "01 1", "22 346 262 205 ", "318 307 35 348 355", " 304 213 168 306 177 319 228 237 336 71 287 91 ", "16 276 309 2 343 23 95 260 301 324 73 1", "07 ", "39 256 326 146 196 45 115 81 321 24", "4 338 320 133 5", " 221 153 94 239 160 269 288 17 271 102", " 179 10 51 356 170 292 6 255 315 169 19", "3 116 28 230 175 14 9 223 191 217 ", "156 181 238 206 340 254 92", " 219 187 158 88 41 ", "108 349 231 75 226 216 104 109 12 359 8 352 248 ", "208 ", "261 57 27 56 358 117 308 118 147 6", "9 61 333 215 55 0 70 240 204 246 154", " 124 328 212 247 43 50 2", "10 64 96 310 22 67 305 19 ", "227 229 111 40 273 341 298 128 66", " 132 101 140 332 166 89 275 ", "283 190 29 65 214 188 176 141 209 83 7 30 100 ", "150 38 46 334 113 155 285 127 ", "62 203 68 183 126 1", "62 249 267 74 121 329 123 250", " 290 21 297 268 289 165 224 79 1", "99 110 259 11 353 17", "2 322 347 32 194 106 8", "5 ", "120 284 31 142 144 36 257 1 345 274 270 17", "3 225 312 26 189", " 136 152 149 4 233 159 264 241 77 207 331 86 164 2", "18 ", "2", "72"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 232;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> points = {"101 5", "8 ", "98 16", "3 212 75 341 148 297 354 33 215 349 273 51 104 1", "27 71 256 258 201 106 167 123 276 352 1", "44 226 343 29 334 170 172 36 179 186 254 38", " 18 182 108 279 78 102 56 168 302 14 289 34 139", " 270 159 268 335 25 344 305 291 316 64 92 156 ", "234 198 189 63 314 114 243 207 264 59 83 220 ", "111 48 165 241 197 235 277 315 5 229 321 351 169 ", "55 1 24 350 154 72 327 134 166 151 219 211 15 28 ", "157 232 125 281 88 79 112 348 69 307 311 105 122 3", "42 181 10 70 194 253 248 338 40 304 73 216 328 280", " 87 95 222 299 326 325 45 9 8 323 85 265 140 347 1", "64 239 11 261 249 192 110 20 43 141 208 22 251 116", " 318 147 131 333 238 317 184 236 32 52 257 176 183", " 12 259 191 142 336 81 286 346 89 97 267 330 288 3", "24 62 0 146 203 128 39 180 332 230 93 26 210 266 2", "40 65 50 275 225 138 255 209 221 120 250 129 227 2", "31 337 17 282 272 96 13 100 153 3 99 178 77 90 42 ", "359 103 269 313 161 31 205 84 260 86 340 320 308 1", "15 301 218 160 292 80 290 237 137 6 117 271 278 35", "7 285 283 175 213 245 118 247 190 188 47 57 44 263"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 236;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> points = {"351 118 298 ", "215 292 281 260 16", "7 99 192", " 339 226 ", "314 166 145 183 193 11 333 5 33", " 34 116 190 181 336 174 265 345 349 71", " 52 2", "0 15 21 157 229 356 329 81 321 137 241 2", "6 261 148 90 348 13", "9 1", "20 144 100 141 232 ", "322 245 239 ", "83 337 98 176 114", " 310 150 101 24", " 130 131 240 247 214 326 163 ", "138 115 146 149 136 92 186 66 267 162 248 1", "73 256 95", " 246 132 2 84 89 223 87 282 284 16", "5 31 315 280 259 354 117 17 270 274 64 47 104 172 ", "111 134 353 35 200 46 60", " 220 178 169 212 125 219 269 ", "56 221 53 289 217 359 324 268 25 317 206 39 319", " 153 355 272 231 254 170 15", "8 10 264 45 275 23", "3 208 152 255 306 25", "1 328 78 304 40 3", "0", "8 0 4 182 124 252 230 ", "325 133 290 258 43", " 108 37 110 86 313 344 277 155 204 106 70", " 80 168 207 225 323 54 276 318 242 311 76 147 4", "4", " 346 335 32 305 197 164 94 18 343 224 285 1", "27 184 279 316 96 129 23 198 85 350 222 309 352 2", "93 41", " 243 296 294 142 160 3 291 38 63 ", "57 49 ", "29 202 330 161 97 288 300 205 62 249 123 228", " 295 273 253 82 340 91 22 180 287 213", " 103 262 154 199 75 79 48 88 143 105 191 263 1 194", " 19", "5 17", "9 112"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> points = {"57 156 33", "1 79 267 300 99 283 35", "9 107 182 20 157 214 233 223 129 351 268 269 3", "19 91 253 289 340 45 102 323 17 2 180 166 ", "80 329 241 217 24 301 294 11", "4 153 324 222 92 235 315 284 297 53 317 44 183 1", "9", "8 193 328 78 3", "27 246 226 236 103 291 209 161 ", "258 85 6 8 154 163 176 353 62 273 ", "61 51 221 172 130 86 141 250 117", " 247 308 112 81 83 ", "299 26", "5 332 46 55 9 271 185 1", "74 259 322 189 234 139 23", "9 292 118 177 98 270 110 42 96 151 64", " 147 165 122", " 216 143 121 325 2", "12 158 68 ", "358 205 304 206 187 108 339 93 0", " 134 70 207 155 190", " 29 3", "21 313 67 41 188 14 282 63 238 357 4 12 128 293 26", "4 47 347 285 48 73 22 228 240 298 255 338 312 237 ", "348 252 11 25 286 287 178 173 290 296 23 272 97 12", "4 5 71 43 355 230 227 307 295 175 220 170 38 336 3", "5 40 56 94 257 160 90 95 215 210 279 337 60 276 23", "2 104 13 116 309 88 152 30 199 229 343 203 34 105 ", "184 138 74 1 89 59 37 341 168 149 19 191 159 335 1", "09 135 218 75 320 179 354 15 100 243 251 127 50 31", "6 126 314 208 311 326 136 248 330 302 31 145 148 2", "19 254 171 3 101 281 111 245 52 144 140 249 231 18"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 248;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> points = {"218 332 ", "3", "33 108 279 190 265 290", " 48 145 268 226 1 ", "104 2", "12 246 125 353 93 199 358 348 117 2", "30 273 133 135 118 161 111 259 208 45 250 23", "3 317 211 195 10 323 258 1", "16 247 86 291 222 182 16 76 275 350 ", "94 41 112 160 198 130 220 107 96 221 308 165", " 6 124 223 19 9 234 256 82 132 61 119 31 91 153", " 120 146 122 89 295 206 20 102 129 147 200 214 7 1", "96 236 92 179 114 267 64 172 292 262 293 55 188 13", "7 148 342 309 74 139 138 73 17 57 288 67 242 105 3", "30 126 324 143 80 313 229 66 84 340 115 164 322 10", "1 150 181 254 144 95 189 131 248 245 163 37 335 10", "3 304 140 69 50 228 0 169 170 157 168 346 237 235 ", "231 209 197 351 39 355 187 23 337 85 151 156 270 3", "06 253 158 261 255 299 46 345 43 215 249 310 204 1", "36 184 227 21 239 201 180 4 78 14 68 305 192 155 8", "3 13 178 53 285 216 25 341 217 141 44 90 40 186 33", "4 316 30 62 173 320 193 177 52 29 113 281 27 213 1", "62 5 70 75 314 110 251 176 272 81 328 154 287 243 ", "238 59 194 301 15 257 356 329 339 241 49 210 35 77", " 34 318 47 266 232 2 167 280 311 174 152 134 54 24", "0 38 225 278 359 65 127 24 224 303 352 166 327 298"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> points = {"139 223 325 27", "9 90 41 297 294", " 281 23 26", "0 ", "194 178 163 205 110 164 48 228 18 65 28 188 14", "0", " 187 29 334 129 101 219 295 355 4 26 148 192 106 ", "131 256 253 196 285 8 83 201 81 74 286 125", " 348 135 58 276", " 0 2", "78 49 245 244 56 21 191 43 67", " 169 38 79 88 84 85 326 117 126 240 35 123 112", " 11 54 ", "306 73 165 337 359 179 247 3", "1 98 290 107 161 346 122 15", "4 127 313 102 249 252 95 298 108", " 203 168 ", "332", " 160 272 354 92 202 3 2 1", "74 204 64 331 155 236 3", "20 150 216 51 357 280 149 ", "13 305", " 68 170 105 50 185 329 317 213 225 258", " 349 315 103 310 345 99", " 114 270 159 352 271 274 182 ", "172 340 75 291 82 335 130 262 190 104 ", "35", "1 142 248 158 30", "0 314 234 42 121 153 217 116 5 37 277 23", "3 36 193 32 120 318 208 316 227 166 115 70 308", " 287 265 241 319 124 21", "1 199 330 350 72 93 292 266 171 144 17 254 2", "89 69 304 66 242 156 7", "6 10 57 273 347 293 176 186 96 226 214 230 2", "5 181 2", "61 141 229 255 343 207 119 264 59 210 138 206 71 ", "137 97 339 221 220 2", "50 45 302 100 62 342 22 27 356 341 238 47 ", "33 60 209", " 301 152 259 215 20 307 251 267 218 327 232 3", "58 231 212 86 15 46 312 143 55 52 353 1", "2 39 40 157 1", "77 ", "2", "5", "7"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 264;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> points = {"52 327 275 254 17 308 342 176 318 333 207 50 ", "171 15 65 33 1", "68 217 169 210 311 154 179 22", "2 151 94 174 116 315 238 234 296 268 120 127 45", " 124 166 172 29", "3 297 36 332 251 14 31", "6 221 306 288 358 55 3", "24 353 303 118 134 307 200 269 302 46 344 ", "84 6 309 144 86 117 75 41 136 243 83 193 66 77 3", "28 334 128 175 157 182 203 100 236 115 146 220 242", " 80 143 21 205 184 142 343 121 101 349", " 292 164 104 357 48 263 97 95 277 310 226 322 191 ", "289 181 8 105 299 160 98 272 71 187 355 131 350 19", "6 329 228 47 68 96 218 90 129 280 13 255 266 282 2", "70 284 300 38 330 89 123 273 81 209 206 227 204 11", "4 9 246 7 287 111 27 244 260 2 107 29 335 261 229", " 138 130 170 351 215 49 173 313 161 197 262 283 23", "2 202 295 149 286 34 30 22 252 53 113 274 256 28 3", "39 279 337 78 298 338 186 19 159 0 87 59 56 304 29", "0 359 102 231 250 112 20 278 240 64 126 140 354 18", "0 12 153 26 1 69 32 352 345 137 253 125 195 247 25", "9 225 42 88 219 224 108 331 208 271 325 72 211 76 ", "11 194 40 16 51 79 214 165 54 177 43 340 145 10 14", "8 257 320 245 3 281 63 37 141 91 60 163 133 93 25 ", "314 183 223 103 109 132 326 167 92 189 201 106 239"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> points = {"44", " 24 264 236 335 357 142 18 79 145 3 220 ", "346 338 2", "59 99 94 307 74 64 218 196 118 68 279 336 15", "6 320 108 193 297 104 22 244 222 301 163 3", "59 201 310 238 311 21", "2 32", "6 5 149 147 58 29 353 210 131 ", "70 290 87 1", "97 41 75 13 1", "2 344 84 ", "327 334 329 278 189 114 101 178 314 317 9 349 ", "233 159 207 83 285 166 ", "57 217 103 67 56 32 35 141 65 221 100 267 1", "54 295 2 15 240 179 184 52 105 348 323 126 269 137", " 296 93 128 249 271 48 135 268 206 352 294 102 121", " 21 183 256 144 111 88 95 188 47 304 286 171 175 1", "68 31 25 113 255 136 293 227 333 181 6 198 54 71 2", "14 160 302 257 8 351 274 46 325 228 318 39 291 332", " 36 60 33 254 272 107 316 162 216 177 288 250 82 9", "2 300 292 319 358 55 157 14 328 232 225 27 226 109", " 91 308 130 7 247 340 355 16 51 209 148 235 173 10", " 116 230 187 138 49 341 125 69 150 229 61 122 180 ", "139 30 248 312 331 277 26 231 59 287 252 97 191 17", "6 262 120 134 28 321 174 234 205 37 72 34 324 215 ", "117 315 11 265 202 354 85 140 224 190 273 280 337 ", "282 19 164 343 182 194 223 246 40 129 73 270 276 6", "3 356 38 112 132 192 330 23 204 90 169 20 241 165 ", "152 124 261 127 342 115 203 80 213 53 123 96 4 211"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 276;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> points = {"1", "77 352 193 325 219 324 271 227 348 327 40 245", " 216 38 308 9 11 332 294 13", "1 115 44 240 354 53 203 139", " 104 83 166 233 79 341 ", "117 292 95 156 357 213 286 82 1", "7 94 176 7 145 20", "7 187 349 1 282 58 344 346 106 211 100 172 92 23", " 287 35 262 339 132 0 189 ", "19 144 33 192 274 34 196 329 261 3 141 124 305 174", " 309 6 113 218 133 253 169 102 ", "78 264 157 97 285 3", "40 25 306 80 60 283 238 221 359 71 231 31", "4 345 122 232 ", "249 149 208 56 155", " 12 15 24 269 200 350 66 198 179 301", " 62 313 333 251 265 ", "228 125 14 96 14", "7 186 320 154 337 99 206 148 209 5 242", " 331 338 300 178 85 ", "343 279 260 184 28 225 36 140 11", "4 235 353 302", " 30 275 1", "81 165 37 243 119 268 316 18 284 2 297 291", " 355 ", "229 81 215 318 138 180 321 76 254 123 3", "47 105 162 135 84 246 307 222 68 319", " 194 121 342 39 278 199 134 273 2", "77 107 120 289", " 234 32 220 69 224 276 323 252 356", " 73 2", "98 239 197 22 358 330 67 103 237 16 288 130", " 315 4 77 267 55", " 270 163 142 ", "118 129 41 183 303 202 217 19", "0 27 311 110 49 272 258 336 112 72 65 ", "101 188 236 159 89 ", "137 29 210 164 13 45 244 128 75 259 167 201 2", "6 295 335 161 151 351 21 171 241 1", "0 250 296 91 304 47 205 50 43 64 51", " 63 326 153 299 152 109 42"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 282;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> points = {"9", "1 189 215 ", "262 29 2", "21 86 152 253 304 286 353 39 97 116 ", "199 144 256 ", "302 339 47 115 229 187 345 56 315 107 249", " 104 10 289 65 147 234 130 321 156 18", "2 195 151 269 238 ", "153 184 117 214 145 217 57 110 53 7 103 186 23", "2 294 135 176 134 20 343 227 49", " 231 266 35 281 230 247 1", "05 81 337 94 118 43 236 336 133 27 309 323 188 3", "3 36 296 248 316 318 138 288 92 292 320 15 2", "97 46 90 159 59 235 213 207 306 6", "9 75 9 257 165 190 285 126 160", " 32 258 216 106 108 19 113 98 137", " 6 322 2", "87 168 200 149 85 185 100 162 172 250 338 1", "3 344 74", " 211 66 346 167 358 16 79 260 136 208 93", " 131 25 60 350", " 179 64 164 82 83 349 226 254 42 33", "0 326 340 183 4 48 275 310 206 1", "98 21 129 332 148 163 268 58 270 298 271 300 276 3", "51 265 109 201 73 170 219 78 2 303 334 38 70 177 2", "72 241 175 357 141 171 333 34 51 5 312 161 261 24", "3 291 356 180 327 354 154 225 218 224 101 204 128", " 264 259 228 251 95 122 12 87 359 45 308 245 120 7", "6 96 127 328 174 341 267 194 72 305 140 14 150 331", " 121 210 31 26 263 325 335 282 166 88 314 102 290 ", "52 11 240 158 37 157 242 18 30 155 124 173 196 191", " 319 274 317 77 63 233 197 280 139 239 114 54 313 ", "1 80 192 112 193 41 273 146 283 62 324 293 203 295"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 290;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> points = {"313 251 198 351 346 138 176 104 189 5", "1 45 1", "62 228 199 265 238 341 353 21", "3 ", "216 332 90 299 182 30 15", "1 233 184 129 355 158 65 0 246 160 258 76 28", "9 75 8 ", "239 309 178 2", "98 286 270 140 88 259 257 10", "6 173 84 98 179 343 74 285 ", "152 206 20 242 223 12 203 46 202 35 282", " 215 312 6 310 19 127 224 92 340 29 302 31", "7 256", " 113 274 107 245 85 82 296 48 53 100 234 221 44 ", "27 16 266 163 139 102 165 30", "8 196 150 156 121 136 21 261 17 171 357 2 161 47", " 22 159 342 210 336 123 36 ", "249 241 333 11 262 103 247 291 128 321 205 326 12", "2 15 330 186 175 295 304 64 ", "345 79 248 112 134 62 323 101 153 26 5", "0 40 174 263 315 243", " 294 96 352 252 344 73 63 190 250 329 339 192 13 ", "41 180 114 214 164 149 328 187 181 280 130", " ", "33 318 141 279 167 14 185 119 293 ", "271 230 24 307 38 267 42 81 334 55 207 39 89 195 ", "225 125 226 168 281 188 337 349 25 300", " 204 335 276 354 177 131 23 1", "42 91 118 144 338 264 316 3 49 255 244 11", "6 4 124 10 18 273 347 277 157 109 115 288 324 1", "66 117 80 68 154 ", "170 292 61 231 32 34 ", "146 5 105 287 67 145 319 54 37 72 10", "8 78 58 200 56 193 43 219 237 57 232 71 126 2", "20 147 169 133 227 197 311 183 320 87 155 2", "54 358 120 217 212 194", " 94 209 229 235 60 275 ", "1 69 2", "18 284", " ", "3", "1", "4", " ", "1", "1", "0"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 294;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> points = {"1 143 9 234 2", "82 352 131 286 121 203 17 97 230 125 136 228 82 14", "6 127 243 297 225 330 4 238", " 277 276 249 110 106 54 113 334 62", " 104 85 10 357 181 215 91 20", "5 98 39 133 109 74 310 87 308 2", "72 37 24 182 49 80 137 140 344 168 251 52 ", "328 152 263 350 ", "35 303 154 43 201 312 99 192 11 180 114 162 220", " 21", "6 76 92 195 86 30", "9 296 8 358 246 278 130", " 60 301 ", "153 232 265 84 51 128 194 96 338 72 173 208 88 ", "188 219 13 304 31 270", " 269 28 274 295 73 142 321 2", "55 63 2", "42 25 307 333 22 3 34 343 148 210 318", " 134 337 0 299 95 2", "81 240 323 117 59 262 ", "103 179 198 56 ", "288 261 119 101 45 33 122 331", " 267 16 163 259 1", "83 126 326 268 289 245 14 81 209 7", "9 29 15 320 332 32 118 300 21 257 172 306 90 336", " 218 12 42 354 40 47 102 107 196 359 271 254 207 ", "287 324 319 280 302 237 145 266 250 144 151 120 32", "2 221 20 83 294 213 346 23 236 214 206 108 189 27 ", "325 66 166 191 105 175 169 174 316 305 347 170 292", " 141 298 36 339 138 93 248 186 197 44 345 193 314 ", "171 111 26 190 313 199 329 167 158 226 123 19 356 ", "48 149 317 273 124 291 217 351 264 260 132 77 252 ", "57 247 75 187 30 41 340 184 68 147 283 231 58 160 ", "239 70 50 256 71 65 55 139 89 61 7 315 275 223 129", " 185 18 244 233 284 285 222 38 157 177 293 115 112"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 302;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> points = {"240 119 4 165 293", " 310 201 300 213 218 22 81 168 287 348 279 198 244", " 114 248 135 152 312 332 207 18 59 ", "355 185 182 210 78 46 86 6 204 286 203 3", "7 190 173 328 216 95 40 79 60 23 342 167 122", " 301 294 169 65 47 27 83 264 105 208 137 221", " 323 187 309 330 125 66 147 259 34 188 359 1", "54 1", "29 343 358 ", "260", " 353 91 3 1", "17 ", "52 158 313 99 302 223 239 303 335 35 320 249 1", "57 151 261 89 88 63 196 25 71 191 304 340 10", "9 160 247 326 329 36 281 230 29 90 ", "283 224 214 134 ", "42 341 107 112 272 145 321 12 136 235 106 177 197", " 55 8 ", "277 319 149 10 199 242 186 306 ", "70 67 266 57 271 11 316 285 215 252 156 269 148", " 202 123 193 357 ", "274 246 222 50 245 217 2", "6 344 ", "84 290 132 175 325", " 183 133 73 126 77 32 333 354 19 194 115 176 229", " 349 130 317 121 82", " 140 256 236 139 268 254 181 61 336 80 162 263", " 100 2", "32 14 33 85 28 53 337 200 58 314 308 56 282 288 7 ", "273 21 45 270 179 141 206 250 238 48 43 338 118 ", "146 164 278 220 ", "315 68 102 38 116 31 1", "03 87 351 128 15", " 166 267 98 233 144 9", "3 195 228 120 180 251 305 258 30 241 3", "45 327 94 184 ", "227 347 64 255 352 111 69 262 13 3", "22 101 211 76 292 2", "96 2", " 155 161 75 163 265 257 275 5 131 346 280 138", " 143 41 9 39 237 192 2", "99 17 51 334 74 297 174 62 72 225", " 1", "13 110 209 284 97 92 3", "07 350", " ", "1", "7", "1"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 308;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> points = {"123 320 64 76 102 250 305 37", " 88 135 297 71 175 61 16", "3 26 1 197 309 79 277 115 2", "42 62 196 347 158 124 229 325 340 290 95 ", "16 55", " 339 177 205 283 68 237 18 266 94 142 332 104 30", " 151 103 65 125 345 238 53 85 33 93 227 3", "22 293 100 21", " 126 54 2", "88 82 23 182 343 292 346 326 328 20", "3 57 149 47 275 121 131 231 74 146 116 316 224 3", "13 157 67 259 349 200 264 12 268 181 302 291 28", "5 261 4 40 303 134 219 35 245 294 63 214", " 28 11 289 12", "2 101 139 164 109 136 270 29 201 128 15 206 338 ", "89 44 43 255 27", "3 179 49 334 72 247 184 284 217 241 21", "3 310 106 222 58 298 153 7 267 2", "43 155 249 357 133 307 1", "41 3", "5", "2 36 220 188 183 156 314 348 178 169 311 341 8 19", "0 77 91 300 256 97 41 263 246 98 355 228 27 20", "8 331 31 132 354 78 145 351 258 216 2", "5", " 13 3 117 337 24 166 223 321 260 211 2", " 143 160 350 215 336 253 81 114 187", " 87 45 165 271 14 327 ", "129 207 318 195 198 92 358 48 335 5 50 90 35", "3 225 154 152 42 140 279 11", "2 251 257 244 282 232 210 111 281 150", " 356 60 172 167 185 19 226 306 0 204 235 312 138", " 319 113 286 299 96 186 20 296 137", " 272 162 333 108 10 304 86 23", "4 295 287 56 280 110 105", " 269 218 180 99 233 38 84 330 75 17 274 ", "209 265 344 192 262 317 52 69 119 22 236 1", "94 199 83 3", "08", " 221 32 359 9 70 176 202", " 51 276 254 2", "78 3", "23 ", "12", "0 ", "2", "1", "2"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 316;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> points = {"54 103 239 12 72 167 152 214 74", " 28 92 83 286 131 ", "15 263 19 283 305 153 346 34", "2 ", "259 118 95 340 334 46 56 350 225 310 238 11 208 ", "144 130 280 53 70 252 266 2", "82 44 100 75 185 221 333 71 132 349 229 254 ", "205 244 120 268 84 301 294 82 0 ", "256 228 137 156 66 126 195 3", "36 101 216 138 324 129 321", " 309 122 112 176 330 306 323 1", "70 154 235 30 80 10 97 231 303 202 241 ", "39 234 21 133 200 87 335 212 124 3", " 175 177 96 325 140 58 63 181 312 32 199", " 127 344 293 222 113 184", " 163 328 18 2 93 249 26 192 248 42 159 217", " 36 281 295 183 204 284 ", "23 139 88 317 343 338 353 142 290 90 26", "2 78 119 109 155 ", "141 20 257 355 289 47 165 357 16", "1 116 2", "46 94 267 1", "90 347 253 351 179 189 ", "91 50 147 24 285 307 146 105 173 352", " 107 52 236 186 123 151 40 345 332 331 162 14 356 ", "2", "13 35 304 258 302 354 296 102 ", "149 299 48 22 85 168 20", "6 274 245 269 158 145 17 233 164 7 30", "0 318 64 ", "7", "9 135 45 69 291 34", " 273 134 143 219 31 230 265 41 26", "4 339 288 261 4 215 277 172", " 57 191 315 198", " 276 67 110 197 32", "7 182 279 157 201 240 5 329", " 27 220 251", " 37 298 237 59 111 211 121 62 76 223 180 115 10", "8 227 224 187 287 218 38 260 ", "60 2", "97 226 104 148 51 320 166 2", "55 73 207 250 203 65 313 169 174 98 243 77 17", "8 316 358", " 322 25 188 128 196 43 308 34", "8 89 86 314 117 6 99 1 337 171", " 275 68 209 106 326"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 322;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> points = {"270 29 262 282 72 116 22 151 255", " 222 91 108 328 335 285 341 1", " 334 146 251 232", " 247 114 175 211", " 84 24 100 67 110 195 20", "4", " 221 288 234 124 82 201 304 155 253 93 36", " 345 283 49 259 50 331 344 ", "267 186 238 117 245 23 176 24", "3 45 96 ", "83 320 39 323 111 11", "9 280 281 105 161 349 287 191 165 159 174 187 356 ", "77 156 137 183 354 347 14 350 16 233 181 295 89 6", "2 38 26 150 171 242 353 25 231 90 258 99 203 ", "351 6 158 296 160 149 128 338 223 352 241 88 326 3", "25 217 47 327 126 237 85 122 21 266 279 135 103 0 ", "113 210 293 120 299 42 31 209 340 169 46 308 35 25", "4 56 132 131 115 70 269 2 213 264 199 153 225 358 ", "311 78 8 69 257 235 355 127 65 32 330 322 55 197 1", "29 63 315 142 40 239 246 224 28 290 278 33 294 95 ", "198 244 316 180 182 229 207 81 260 101 310 74 357 ", "139 164 206 12 276 321 220 297 185 27 227 134 173 ", "336 168 272 298 275 98 64 333 302 157 86 305 306 9", "4 53 140 51 145 184 273 144 148 348 19 196 291 228", " 261 107 303 52 9 307 215 71 286 179 219 97 54 92 ", "57 141 59 216 236 61 329 194 190 106 73 166 188 17", "8 226 339 250 7 208 5 15 43 87 292 289 18 167 48 3", "17 284 192 177 319 202 17 66 79 301 313 136 133 14", "3 277 324 147 346 13 263 68 271 214 58 252 212 4 6", "0 41 343 240 118 121 200 80 102 314 205 125 332 37", " 256 123 218 309 20 300 112 34 152 230 138 189 268"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 330;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> points = {"196 2", "4 98 359 136 109 2", "56 100 1 281 306 84 43 128 97 55 208 249 211 33 1", "43 288 126 255 302 34 327 42 175 105", " 325 ", "266 223 102 235 111 56 312 279 31 146 44 7", "1 352 30 2", "95 273 297 70 177 92 50 305 125 77 173 246 230 29", "9 262 167 124 200 168 152 130 7", "9 28", "3 11 81 186 99 251 ", "147 270 90 29", "2 226 189 36 267 179 228 164 28 241 169 13", "3 19", "2 4", "0 248 80 219 314 4 280 195 347 182 0 64 334 32 32", "1 149 265 326 65 263 145 215 2", "31 39 119 260 63 285 253 290 161 316 197 160 18", "7 324 259 213 159 303 87 207 244 247 134 57 296 33", "2 291 351 310 335 224 113 341 158 75 67 54 275 14", "4 163 51 269 5 237 221 68 153 289 264 199 121 220 ", "344 150 20 348 203 17 23 194 21 174 72 229 191 19 ", "287 216 132 206 101 185 301 112 62 209 94 252 120 ", "181 356 313 9 323 346 354 242 331 41 176 38 122 24", "0 294 202 14 184 198 76 60 268 190 104 53 86 7 328", " 135 25 212 272 311 233 139 286 178 103 151 188 19", "3 127 329 6 339 52 29 322 319 48 340 201 357 254 2", "36 276 172 118 271 350 349 214 154 245 73 148 337 ", "15 59 308 88 307 110 96 261 284 243 320 155 345 14", "2 27 74 317 222 117 26 171 234 210 18 35 58 277 34", "2 129 156 3 336 218 8 85 232 304 330 49 61 180 315", " 205 157 141 238 353 166 66 131 293 82 318 107 123", " 37 115 108 165 138 46 10 250 91 83 282 300 45 338", " 298 2 278 47 170 257 274 13 69 217 309 343 355 93"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 336;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> points = {"211 324 11 186 290 85 107 24", "7 352 112 294 124 58 193 139 230 310 240", " 14 218 315 162 25 268 42 200 45 22 3", "23 130 41 17 313 4 269 254 24 257 258 351 32 2", "93 24", "1 325 164 38 7 120 83 285 18", " 337 26 307 168 113 220 333 252 9", "8 236 180 277", " 321 73 336 219 187 320 78 208 29", "1 231 135 188 156 159 150 61 354 227 77 57 121 10", "2 149 229 114 154 331 151 276 94 279 75 152 116", " 210 20 226 171 280 2", "01 37 15 176 163 2", "86 69 217 148 288 203 196 309 80 174 263 303 3", "58 122 1 0 248 96", " 195 30 305 261 95 68 338 249 161 43 60 251 91 6", "5 166 144", " 228 104 31 264 100 147 353 39 256 191 244 81 82 6", "7 129 260 182 207 2", "96 44 89 115 265 183 169 51 266 145", " 232 12 295 2", "12 284 59 21 141 9", " 125 70 74 271 155 317 262 184", " 36 131 10 64 23", "3 345 242 71 316 359 133 189 177 49 ", "275 172 132 334 6 235 88 224 146 1", "34 157 238 106 3 109 344 56 225 335 138", " 160 ", "8 137 245 110 234 199 101", " 140 127 87 292 278 28 105 72 326", " 158 297 194 357 90 27 283 340 181 84 153 5", "3 136 197 205 349 2 255 143 314 214 3", "27 175 63 31", "9 ", "250 93 204 40 119 79 123 1", "98 213 287 302 306 170 178 300 165 342 142 329 30", "8 311 1", "67 190 19 304 55 13 34", "3 281 332 32", "8 47 318 246 23 289 355 99 350 ", "179 348 209 243 299 173 103 223 3", "47 62 267 272 48 86 111 34 322", " 273 206 97 35 259 301 346 221 50 222 339 202 215 ", "46 274 54 117 126 312 216 33 16 270", " 298 29", " 10", "8", " ", "19", "2"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 342;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> points = {"31", "5 304 308 183 126 31 88 355 ", "237 44 1 43 46 28 279 248 150 306 219 33", " 345 218 272 274 71 63 ", "36 2", "16 48 258 135 186 252 55 2", "85 37 276 38 167 60 260 109 49 293 40 214 212 5", "6 291 137 19", " 122 282 142 319 270 161 203 269 180 313 13 257 32", "8 297 209 239 134 202 232 102 152 190 ", "174 299 21 267 294", " 158 82 11 61 253 320 217 196 329 14 240 302 151 2", "64 215 226 51 210 344 ", "200 347 53 145 326 27 9 336 324 231 156", " 266 143 273 12 120 301 195 23 305 223 149 278", " 30", "7 358 116 325 93 341 81", " 41 194 10 236 164 171 30 66 68", " 20 159 229 147 90 117 ", "108 107 52 323 11", "5 47 277 59 17 92 72 185 2", "86 275 314 136 349 340 247", " 300 2 75 168 106 65 140 312 173 160 62 139 233 ", "4 343 131 332 35 133 255 110 256 352 111 103 85 17", "7 89 162 348 99 79 127 25 8 189 309 114 119 235 31", "8 295 353 176 311 261 132 289 284 330 91 192 42 57", " 193 281 166 265 250 96 346 22 339 113 104 224 271", " 268 69 292 322 153 181 205 74 73 179 316 50 32 18", "2 101 204 86 130 263 262 220 15 206 7 24 45 259 19", "9 121 356 84 251 26 243 64 6 100 105 98 213 287 33", "3 254 335 337 188 144 146 138 338 244 112 78 350 1", "70 154 87 155 129 234 283 327 310 5 0 331 230 124 ", "222 70 197 298 241 280 77 249 54 354 169 207 123 2", "27 351 198 238 125 211 359 94 187 357 201 290 172 ", "246 80 242 118 342 184 165 317 303 221 334 29 95 1", "8 163 141 3 39 157 178 191 83 76 58 97 225 148 296"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 348;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> points = {"83 44 2 175 150 21 1 355 50", " 68 14 27 92", " ", "350 194 359 52 152 29 166 283 347 336 16", "2 93 265 62 41 264 167", " 170 42 197 220 231 280 222 ", "58 15 26", "6 91 285 56 131 111 286 90 256 1", "73 38 85 352 164 3", "19 96 49 154 74 72 318 344 69 202 329 109 ", "185 219 51 332 317 335 22", "6 203 205 130 163 23", "6 18 276 ", "89 228 259 306 277 81 303 308 289 8", "8 268 ", "71 275 334 278 119 337 176 212 257 ", "269 201 218 55 24 270 320 100 349 322 80 168 78", " 206 324 129 31 157 16 300", " 253 242 282 59 64 307 184 13", " 102 146 4 189 116 3", "5 267 75 217 1", "36 19 2", "34", " 172 159 95 215 84 16", "9 123 110 213 223 326 339 298 ", "79 138 342 190 239 99 65 1", "41 1", "81 272 178 3 133 48 98 156 87 186 331 288 97 340", " 245 132 120 240 104 73 314 34 ", "243 11", "8 260 5 148 345 261 43 196 0 160 1", "7 113 161 290 30 7 235 301 66 209 9 25 121 10", "5 135 252 211 273 287 153 28 ", "338 292 40 284 233 250 20 241 2", "62 353", " 274 263 208 155 12 232 305 86 323 321 182 2", "6 343 295 313 128 177 70 294 23 180 316 39 144 351", " 214 356 249 297 229 328 357 165 143 291 33 221 19", "2 341 140 158 106 271 200 258 309 346 67 204 101 2", "93 53 230 244 187 315 82 179 304 237 60 224 125 19", "9 124 188 302 348 57 76 151 6 127 139 174 247 117 ", "94 333 330 327 37 281 255 108 207 354 115 227 10 1", "34 195 22 145 225 238 310 107 114 142 45 149 137 6", "3 47 358 311 122 248 54 147 171 279 183 32 254 191", " 46 246 299 36 193 11 325 296 103 77 251 112 198 8"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 354;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> points = {"33 115 74 290 202 131 180 222 32 2", "40 341 332 149 312 219 189 196 ", "270 357 90 49 85 242 356 283 157 286 29 277 2", "65 107 102 5", "4 150 210 141 288 316 162 55 167 88 144 195 7", "6 200 5 343 293 170 96 201 239 2", "62 53 258 70 321 156 349 3", "55 317 77 296 56 24 320 39 9 276 117 347", " 103 272 284 17", "7 303 50 ", "22 235 208 212 232 37 168 241 169 93 205 2", "53 152 178 314 124 351 73 158 64 139 122 289 101", " 227 113 118 184 132 319 279 252 261 328 207 6 340", " 248 61 28 282 20 66 359 145 68 59 281 358 334 191", " 10 313 345 16 318 250 214 326 108 134 338 238 294", " 256 8 1 125 260 234 161 57 154 127 329 104 171 32", "4 323 140 251 148 172 259 43 126 187 23 62 263 247", " 12 298 350 176 244 79 291 297 65 13 218 31 185 17", "4 275 255 30 44 159 151 246 217 72 220 41 274 280 ", "346 299 40 193 46 27 182 209 206 301 181 339 38 92", " 285 48 47 344 138 215 111 91 216 348 78 315 121 2", "28 45 249 83 245 194 273 123 136 311 109 306 166 3", "27 243 331 25 71 333 133 304 224 183 190 225 266 3", "52 26 213 51 130 197 34 230 135 175 137 67 226 36 ", "203 119 129 342 160 330 153 100 99 199 89 186 271 ", "143 237 86 110 336 309 173 15 4 236 307 3 80 354 2", "64 0 84 105 97 305 278 116 21 211 87 60 164 52 14 ", "325 310 300 142 192 287 128 82 163 198 254 179 295", " 94 81 7 302 146 2 98 112 223 267 204 308 188 11 1", "20 63 147 269 35 337 42 17 257 221 165 231 353 106", " 18 335 75 58 229 292 69 155 19 95 322 233 114 268"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> points = {"1", "2", " ", "3", "4"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
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

int test84() {
    vector<string> points = {"0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 ", "20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36", " 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 5", "3 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 ", "70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86", " 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 10", "2 103 104 105 106 107 108 109 110 111 112 113 114 ", "115 116 117 118 119 120 121 122 123 124 125 126 12", "7 128 129 130 131 132 133 134 135 136 137 138 139 ", "140 141 142 143 144 145 146 147 148 149 150 151 15", "2 153 154 155 156 157 158 159 160 161 162 163 164 ", "165 166 167 168 169 170 171 172 173 174 175 176 17", "7 178 179 180 181 182 183 184 185 186 187 188 189 ", "190 191 192 193 194 195 196 197 198 199 200 201 20", "2 203 204 205 206 207 208 209 210 211 212 213 214 ", "215 216 217 218 219 220 221 222 223 224 225 226 22", "7 228 229 230 231 232 233 234 235 236 237 238 239 ", "240 241 242 243 244 245 246 247 248 249 250 251 25", "2 253 254 255 256 257 258 259 260 261 262 263 264 ", "265 266 267 268 269 270 271 272 273 274 275 276 27", "7 278 279 280 281 282 283 284 285 286 287 288 289 ", "290 291 292 293 294 295 296 297 298 299 300 301 30", "2 303 304 305 306 307 308 309 310 311 312 313 314 ", "315 316 317 318 319 320 321 322 323 324 325 326 32", "7 328 329 330 331 332 333 334 335 336 337 338 339 ", "340 341 342 343 344 345 346 347 348 349 350 351 35", "2 353 354 355 356 357 358 359"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> points = {"0 1 2 3 4 5 6 8 9 10 11 12 13 14 15 16 18 21 22 23", " 24 25 26 27 28 29 30 31 32 33 34 36 37 38 40 41 4", "2 43 44 45 47 48 49 50 51 53 56 57 58 59 60 61 62", " 64 66 67 68 69 70 71 72 73 74 75 77 78 80 81 82 8", "3 85 86 89 90 91 92 93 94 96 97 98 99 101 102 104", " 105 106 107 108 109 110 111 112 115 116 117 119 1", "20 121 122 125 126 127 129 130 131 132 133 134 135", " 136 138 139 141 142 143 145 146 148 149 150 151 1", "53 154 156 157 158 159 160 161 162 165 166 167 168", " 169 170 171 172 175 177 179 180 181 182 183 184 1", "85 186 187 188 189 191 192 194 196 197 198 199 200", " 201 202 203 204 206 207 209 210 211 212 214 215 2", "16 217 218 219 220 222 223 224 225 226 228 229 230", " 231 232 233 234 236 237 238 239 240 241 243 244 2", "45 246 248 249 250 251 252 253 254 255 256 257 258", " 259 260 263 264 265 266 267 268 269 270 271 272 2", "74 275 279 280 281 282 283 284 285 286 287 289 291", " 292 293 294 295 296 297 298 300 301 302 303 304 3", "05 306 307 308 309 310 311 312 313 314 315 316 317", " 319 320 322 323 324 325 326 327 329 330 331 333 3", "34 335 336 337 338 339 341 342 343 344 345 346 349", " 350 351 352 353 354 355 357 359"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 274;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> points = {"310 330 350 10 30 50 320 340 0 20 40 60 200 220"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> points = {"0 90 270 180"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> points = {"41 107 214 220 89 244 318 198 322 344 ", "305 65 241 267 131 115 62 147 36 351 ", "204 302 153 292 142 141 356 278 95 47 ", "126 11 18 69 112 19 174 263 51 2 ", "93 33 21 151 173 28 347 284 262 357 ", "237 259 83 169 58 76 155 230 42 288 ", "226 40 184 328 86 45 50 249 250 246 ", "273 308 189 23 324 154 320 286 176 251 ", "24 39 146 163 137 298 282 341 319 138 ", "210 297 353 66 352 150 57 312 330 161 ", "276 35 287 255 94 71 172 350 70 124 ", "190 311 7 177 337 303 185 269 38 101 ", "228 106 213 8 180 191 215 130 239 264 ", "17 3 235 81 211 236 14 261 348 159 ", "4 1 54 53 199 218 60 188 127 128 ", "133 168 167 270 56 171 80 209 118 63 ", "104 208 84 229 315 325 283 143 248 0 ", "149 289 157 222 178 52 59 15 114 152 ", "326 82 206 349 342 336 281 242 291 301 ", "299 317 272 123 221 135 223 145 205 88 ", "332 354 9 252 194 265 183 79 193 256 ", "181 26 225 253 192 32 121 156 290 13 ", "164 12 333 224 234 129 338 67 122 25 ", "197 314 359 313 217 257 323 148 200 139 ", "105 103 92 43 72 233 212 340 10 271 ", "85 310 140 175 296 22 91 358 280 87 ", "100 77 216 78 166 247 74 202 116 125"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 244;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> points = {"0 1 2 3 4 5 6 7 8 9 ", "10 11 12 13 14 15 16 17 18 19 ", "20 21 22 23 24 25 26 27 28 29 ", "30 31 32 33 34 35 36 37 38 39 ", "40 41 42 43 44 45 46 47 48 49 ", "50 51 52 53 54 55 56 57 58 59 ", "60 61 62 63 64 65 66 67 68 69 ", "70 71 72 73 74 75 76 77 78 79 ", "80 81 82 83 84 85 86 87 88 89 ", "90 91 92 93 94 95 96 97 98 99 ", "100 101 102 103 104 105 106 107 108 109 ", "110 111 112 113 114 115 116 117 118 119 ", "120 121 122 123 124 125 126 127 128 129 ", "130 131 132 133 134 135 136 137 138 139 ", "140 141 142 143 144 145 146 147 148 149 ", "150 151 152 153 154 155 156 157 158 159 ", "160 161 162 163 164 165 166 167 168 169 ", "170 171 172 173 174 175 176 177 178 179 ", "180 181 182 183 184 185 186 187 188 189 ", "190 191 192 193 194 195 196 197 198 199 ", "200 201 202 203 204 205 206 207 208 209 ", "210 211 212 213 214 215 216 217 218 219 ", "220 221 222 223 224 225 226 227 228 229 ", "230 231 232 233 234 235 236 237 238 239 ", "240 241 242 243 244 245 246 247 248 249 ", "250 251 252 253 254 255 256 257 258 259 ", "260 261 262 263 264 265 266 267 268 269 ", "270 271 272 273 274 275 276 277 278 279 ", "280 281 282 283 284 285 286 287 288 289 ", "290 291 292 293 294 295 296 297 298 299 ", "300 301 302 303 304 305 306 307 308 309 ", "310 311 312 313 314 315 316 317 318 319 ", "320 321 322 323 324 325 326 327 328 329 ", "330 331 332 333 334 335 336 337 338 339 ", "340 341 342 343 344 345 346 347 348 349 ", "350 351 352 353 354 355 356 357 358 359"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> points = {"0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 ", "20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 36 37", " 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 5", "4 55 56 57 58 59 60 61 62 63 64 65 66 67 69 70 71 ", "72 73 74 75 76 78 79 80 81 82 83 85 86 87 88 89 90", " 91 92 93 94 95 96 97 98 101 102 103 104 105 106 1", "07 108 109 110 111 112 113 114 115 116 117 118 119", " 120 121 122 123 124 125 126 127 128 129 130 131 1", "32 133 135 136 137 138 140 141 142 143 144 145 146", " 147 149 151 152 153 154 155 156 157 158 159 160 1", "61 162 163 164 165 166 167 168 169 170 171 172 173", " 174 175 176 177 178 179 180 181 182 183 184 185 1", "87 188 189 190 191 192 193 194 195 196 197 198 199", " 200 201 202 203 204 205 207 208 209 210 211 212 2", "13 214 215 216 217 218 219 220 221 222 223 224 225", " 226 227 228 229 230 231 233 234 235 236 237 238 2", "39 240 241 242 243 244 245 246 247 248 249 250 252", " 253 254 255 256 257 258 259 260 261 262 263 266 2", "67 268 269 270 272 273 274 275 276 277 278 279 280", " 281 282 283 284 285 286 287 288 289 290 292 293 2", "94 295 296 297 298 299 300 301 302 303 304 305 306", " 307 309 310 311 312 313 315 316 317 318 319 320 3", "21 322 324 325 326 327 328 329 330 331 332 333 334", " 335 336 337 338 339 340 341 342 343 344 345 346 3", "47 348 349 350 351 352 353 354 355 356 357 358 359"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 334;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> points = {"49 21 1 116 123 243 35 344 22 63 177 25 24 53 14 2", "02 347 263 168 262 128 169 313 304 98 20 110 252 8", "9 92 172 33 284 38 103 235 2 122 44 82 56 211 257 ", "5 114 192 162 6 26 354 213 201 327 239 68 57 18 19", "4 293 331 351 100 271 141 124 180 72 318 55 298 34", "3 188 247 104 225 95 238 330 66 250 159 178 19 209", " 157 323 278 286 0 147 94 58 9 77 321 281 12 118 3", "4 274 306 226 198 93 285 215 236 149 108 39 129 22", "0 96 99 166 85 165 253 288 59 309 337 97 80 326 19", "7 242 292 218 269 310 163 125 212 241 173 207 170 ", "112 140 280 336 50 17 11 45 319 297 332 23 214 167", " 151 76 90 152 356 135 264 185 190 315 4 179 282 3", "05 208 150 36 73 204 340 333 146 117 234 74 195 30", " 322 16 290 134 335 291 328 43 228 272 61 70 231 2", "66 181 127 60 136 216 78 230"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> points = {"359 0 1 2"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> points = {"1 3 5 359"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> points = {"202 3 90 59 82 211 50 193 318 324 140 25", " 294 7 169 223 253 308 167 9 260 49 161 282", " 264 270 76 173 297 191 110 163 74 235 293", " 278 195 265 271 286 16 125 89 112 116 276", " 164 43 339 295 335 58 162 31 4 182 118 243", " 224 94 227 47 0 342 220 5 317 353 255 254", " 232 160 302 215 80 247 296 219 13 71 61", " 175 40 138 210 172 192 142 158 26 130 357", " 170 285 69 29 78 310 338 97 212 159 230", " 19 288 178 256 184 115 38 336 73 84 105", " 88 246 171 12 147 358 123 345 98 229 311", " 266 261 337 344 240 273 258 10 137 245 354", " 306 299 204 217 14 52 188 356 34 55 272", " 208 279 32 348 121 350 280 284 216 274 269", " 228 131 152 139 135 320 303 263 2 102 351", " 307 81 343 117 67 86 156 83 65 11 68 268", " 234 226 242 213 91 221 332 231 321 267 128", " 106 41 287 315 179 146 194 144 62 252 132", " 222 304 72 46 218 23 122 250 114 141 136", " 185 85 168 347 248 143 6 63 120 101 51 309", " 100 99 244 298 181 44 133 36 103 359 322", " 27 201 77 316 281 174 330 8 300 150 108", " 262 346 200 207 214 349 39 275 56 154 107", " 153 95 54 37 334 109 48 341 209 206 186", " 45 239 314 190 205 259 225 119 87 53 277", " 325 127 157 183 165 1 104 327 42 149 312", " 355 249 15 79 326 155 35 70 92 305 233 75", " 236 329 22 251 199 301 291 331 319 148 290", " 198 28 289 166 197 113 33 180 313 241 66"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 316;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> points = {"357 0 3 6 1 4 7 10 35", "8 355"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> points = {"1 2 3 4 5 6 7 8 ", "9 10 11 12 13 14 15 16 ", "17 18 19 20 21 22 23 24 ", "25 26 27 28 29 30 31 32 ", "33 34 35 36 37 38 39 40 ", "41 42 43 44 45 46 47 48 ", "49 50 51 52 53 54 55 56 ", "57 58 59 60 61 62 63 64 ", "65 66 67 68 69 70 71 72 ", "73 74 75 76 77 78 79 80 ", "81 82 83 84 85 86 87 88 ", "89 90 91 92 93 94 95 96 ", "97 98 99 100 101 102 103 104 ", "105 106 107 108 109 110 111 112 ", "113 114 115 116 117 118 119 120 ", "121 122 123 124 125 126 127 128 ", "129 130 131 132 133 134 135 136 ", "137 138 139 140 141 142 143 144 ", "145 146 147 148 149 150 151 152 ", "153 154 155 156 157 158 159 160 ", "161 162 163 164 165 166 167 168 ", "169 170 171 172 173 174 175 176 ", "177 178 179 180 181 182 183 184 ", "185 186 187 188 189 190 191 192 ", "193 194 195 196 197 198 199 200 ", "201 202 203 204 205 206 207 208 ", "209 210 211 212 213 214 215 216 ", "217 218 219 220 221 222 223 224 ", "225 226 227 228 229 230 231 232 ", "233 234 235 236 237 238 239 240 ", "241 242 243 244 245 246 247 248 ", "249 250 251 252 253 254 255 256 ", "257 258 259 260 261 262 263 264 ", "265 266 267 268 269 270 271 272 ", "273 274 275 276 277 278 279 280 ", "281 282 283 284 285 286 287 288 ", "289 290 291 292 293 294 295 296 ", "297 298 299 300 301 302 303 304 ", "305 306 307 308 309 310 311 312 ", "313 314 315 316 317 318 319 320 ", "321 322 323 324 325 326 327 328 ", "329 330 331 332 333 334 335 336 ", "337 338 339 340 341 342 343 344 ", "345 346 347 348 349 350 351 352 ", "353 354 355 356 357 358 359"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 358;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> points = {"1 2 3 111 172"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> points = {"0 30 60 330"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> points = {"2 1 3", "1 4 9 7 ", "10 11 24 26 30 34 39 40 3", "8 42 44 49 51 53 5", "5 59 62 64 69 7", "2 71 75 76 ", "302 301 33", "1 304 309 307 ", "310 311 324 326 330 334 339 340 33", "8 342 344 349 351 353 35", "5 359"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> points = {"358 0 2 4 20 22"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> points = {"0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 ", "19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 ", "35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 ", "51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 ", "67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 ", "83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 ", "99 100 101 102 103 104 105 106 107 108 109 110 ", "111 112 113 114 115 116 117 118 119 120 121 122 ", "123 124 125 126 127 128 129 130 131 132 133 134 ", "135 136 137 138 139 140 141 142 143 144 145 146 ", "147 148 149 150 151 152 153 154 155 156 157 158 ", "159 160 161 162 163 164 165 166 167 168 169 170 ", "171 172 173 174 175 176 177 178 179 180 181 182 ", "183 184 185 186 187 188 189 190 191 192 193 194 ", "195 196 197 198 199 200 201 202 203 204 205 206 ", "207 208 209 210 211 212 213 214 215 216 217 218 ", "219 220 221 222 223 224 225 226 227 228 229 230 ", "231 232 233 234 235 236 237 238 239 240 241 242 ", "243 244 245 246 247 248 249 250 251 252 253 254 ", "255 256 257 258 259 260 261 262 263 264 265 266 ", "267 268 269 270 271 272 273 274 275 276 277 278 ", "279 280 281 282 283 284 285 286 287 288 289 290 ", "291 292 293 294 295 296 297 298 299 300 301 302 ", "303 304 305 306 307 308 309 310 311 312 313 314 ", "315 316 317 318 319 320 321 322 323 324 325 326 ", "327 328 329 330 331 332 333 334 335 336 337 338 ", "339 340 341 342 343 344 345 346 347 348 349 350 ", "351 352 353 354 355 356 357 358 359"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> points = {"1 2 3 4 6 359"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> points = {"0 1 2 3 4 357 358 359"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> points = {"0 2 4 1 3 5 7 13 15 30 32 49 51 358", " 357 359"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> points = {"358 0 2 4"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> points = {"10 11 40 60 350 351"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> points = {"350 0 10 20"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> points = {"1 2 3 4 5 6 7 8 10 13 14 43 53 23 98 12 123 124", " 125 126 127 128 129 359 358 354 352"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> points = {"0 357 358 359"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> points = {"0 30 60 330", " 10 40 340 310"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> points = {"3 7 12 19 ", "53 57 62 69 ", "103 112 267 279 ", "313 317 322 329"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> points = {"0 1 2 3 4 5 6 7 8 9 10 11"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> points = {"2 3 1 4 102 100 101 103 104 105"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> points = {"0 1 3 4 6 20 40 100 250 300"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> points = {"0 1 45 90 135 136 180 225 270 315"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> points = {"0 50 100 150 200 250 300 350", " 1 51 101 151 201 251 301 351", " 2 52 102 152 202 252 302 352", " 3 53 103 153 203 253 303 353", " 4 54 104 154 204 254 304 354", " 5 55 105 155 205 255 305 355", " 6 56 106 156 206 256 306 356", " 7 57 107 157 207 257 307 357", " 8 58 108 158 208 258 308 358", " 9 59 109 159 209 259 309 359", " 10 60 110 160 210 260 310", " 11 61 111 161 211 261 311", " 12 62 112 162 212 262 312", " 13 63 113 163 213 263 313", " 14 64 114 164 214 264 314", " 15 65 115 165 215 265 315", " 16 66 116 166 216 266 316", " 17 67 117 167 217 267 317", " 18 68 118 168 218 268 318", " 19 69 119 169 219 269 319", " 20 70 120 170 220 270 320", " 21 71 121 171 221 271 321", " 22 72 122 172 222 272 322", " 23 73 123 173 223 273 323", " 24 74 124 174 224 274 324", " 25 75 125 175 225 275 325", " 26 76 126 176 226 276 326", " 27 77 127 177 227 277 327", " 28 78 128 178 228 278 328", " 29 79 129 179 229 279 329", " 30 80 130 180 230 280 330", " 31 81 131 181 231 281 331", " 32 82 132 182 232 282 332", " 33 83 133 183 233 283 333", " 34 84 134 184 234 284 334", " 35 85 135 185 235 285 335", " 36 86 136 186 236 286 336", " 37 87 137 187 237 287 337", " 38 88 138 188 238 288 338", " 39 89 139 189 239 289 339", " 40 90 140 190 240 290 340", " 41 91 141 191 241 291 341", " 42 92 142 192 242 292 342", " 43 93 143 193 243 293 343", " 44 94 144 194 244 294 344", " 45 95 145 195 245 295 345", " 46 96 146 196 246 296 346", " 47 97 147 197 247 297 347", " 48 98 148 198 248 298 348", " 49 99 149 199 249 299 349"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> points = {"1 10 12 359"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> points = {"12 13 17 18"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> points = {"163 298 0 272 201 287 212 156 317 213 203 168 182 ", "355 329 273 178 112 210 354 51 106 312 64 208 146 ", "145 28 84 275 120 109 164 346 320 225 294 309 310 ", "46 137 187 69 50 232 229 18 258 315 37 139 150 251", " 195 303 135 144 71 2 286 295 282 180 62 357 348 6", "6 11 167 121 323 153 337 196 147 191 108 278 176 1", "03 230 67 267 246 88 296 202 206 9 35 341 204 166 ", "247 152 3 259 221 243 343 351 254 45 188 234 81 72", " 56 270 324 252 75 42 262 328 54 7 231 136 333 352", " 130 321 338 20 83 76 148 97 70 95 80 237 257 192 ", "220 279 32 33 91 165 184 289 38 336 359 78 240 114", " 248 138 263 276 299 186 162 116 4 264 290 105 266", " 199 100 261 172 27 350 98 345 297 58 224 85 256 1", "57 250 194 185 241 77 29 73 52 8 161 55 111 142 14", "0 158 183 269 133 181 200 228 16 353 82"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> points = {"0 30 60 330", " 10 40 340 310", " 187 217"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> points = {"194 175 340 269 315 142 77 291 1 200 272 61 49 250", " 173 147 59 231 261 249 270 94 258 15 45 12 155 21", "8 206 69 38 278 309 292 274 10 219 212 25 299 62 2", "05 161 92 303 350 294 47 312 95 183 156 326 179 34", "8 252 208 254 187 296 84 74 308 251 0 4 185 33 152", " 71 106 354 203 98 3 107 240 73 297 193 318 329 72", " 316 279 36 244 298 101 359 356 225 40 55 114 103 ", "89 282 253 56 54 268 277 260 150 344 148 75 109 10", "8 111 39 53 204 13 210 86 117 41 63 288 266 281 13", "3 202 293 42 245 336 127 90 311 227 195 20 337 100", " 34 157 242 176 122 172 21 26 31 2 140 216 264 153", " 304 262 159 228 189 248 334 46 78 143 76 347 239 ", "23 141 352 16 5 345 351 81 285 29 213 319 132 263 ", "82 271 170 43 349 57 317 123 196 283 11 68 8 65 26", "5 305 223 130 113 18 165 256"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> points = {"330 0 30 60 ", "15 45 315 345 ", "210 240 ", "220 250 ", "230 260 ", "245 275 ", "246 276"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> points = {"100 101 102 103 104 105 106 107 108 109 115"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> points = {"71 262 7 353 242 65 124 333 203 82 62 17 134 216 1", "51 85 270 230 122 174 232 177 289 46 59 335 152 26", "4 347 173 54 51 56 344 19 138 188 357 257 10 176 4", "1 307 255 76 156 162 248 355 269 126 12 160 210 35", "6 331 75 332 278 92 190 181 133 320 150 94 250 140", " 178 95 348 205 154 57 268 303 311 114 202 308 274", " 339 131 231 170 161 287 217 312 238 80 240 336 38", " 148 123 342 84 222 328 135 39 169 83 316 272 340 ", "60 130 279 241 171 101 53 89 48 47 276 137 168 29 ", "87 100 128 184 93 136 73 359 226 207 215 196 343 9", "6 91 293 305 33 199 30 298 280 143 106 69 194 141 ", "179 155 182 159 200 43 1 259 273 206 64 338 304 32", " 266 18 243 186 119 198 323 118 267 314 296 117 34", "6 213 107 2 260 244 334 275 261 127 337 354 288 5 ", "313 166 108 23 183 285 175 3 153 88 6 291"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> points = {"359 0 1"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> points = {"1 3 5 7 9 359"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> points = {"0 10 20 350 4 14 344 354 334 324"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> points = {"244 54 329 103 331 107 240 312 159 62 12 250 21 10", "9 182 60 310 16 287 158 30 113 108 215 55 8 47 145", " 20 248 235 44 25 43 275 286 37 247 74 92 279 341 ", "4 219 267 259 263 233 319 22 242 10 46 344 201 296", " 156 300 339 13 147 180 41 17 314 337 173 355 36 1", "05 277 171 301 142 351 187 223 90 79 227 152 203 5", "3 289 189 291 102 177 211 285 282 118 125 190 72 3", "22 155 153 316 11 97 75 273 18 197 144 178 334 9 3", "20 122 209 205 324 42 170 88 86 305 24 31 236 283 ", "328 261 26 333 191 311 67 2 210 276 357 327 243 57", " 7 302 129 128 299 14 168 269 80 336 71 288 202 52", " 309 143 186 204 278 179 139 63 133 234 78 114 65 ", "51 297 225 216 117 208 230 226 245 73 95 342 137 3", "9 359 212 84 304 0 100 335 315 221 232 176 280 167", " 346 130 353 193 251 255 308 83 218"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 162;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> points = {"0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 ", "18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 ", "33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 ", "48 49 51 52 53 54 55 56 57 58 59 60 61 62 ", "63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 ", "78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 ", "93 94 95 96 97 98 99 100 102 103 104 105 ", "106 107 108 109 110 111 112 113 114 115 116 ", "117 118 119 120 121 123 124 125 126 127 ", "128 129 130 131 132 133 134 135 136 137 138 ", "139 140 141 142 143 144 145 146 147 148 149 ", "150 151 152 153 154 155 156 157 158 159 160 ", "161 162 163 164 166 167 168 169 170 171 ", "172 173 174 175 176 177 178 179 180 181 182 ", "183 184 185 187 188 189 190 191 192 193 ", "194 195 197 198 199 200 201 202 203 204 ", "205 206 207 208 209 210 211 212 213 214 215 ", "216 217 218 219 220 221 222 223 224 225 226 ", "227 228 229 230 231 232 233 234 235 236 237 ", "238 239 240 241 242 243 244 245 246 247 248 ", "249 250 251 252 253 254 255 256 257 258 259 ", "260 261 262 263 264 265 266 267 268 269 270 ", "271 272 273 274 275 276 277 278 279 280 281 ", "282 283 284 285 286 287 288 289 290 291 292 ", "293 294 295 296 297 298 299 300 301 302 303 ", "304 305 306 307 308 309 310 311 312 313 314 ", "315 316 317 318 319 320 321 322 323 324 325 ", "326 327 328 329 330 331 332 333 334 335 336 ", "337 338 339 340 341 342 343 344 345 346 347 ", "348 349 350 351 352 353 354 355 356 357 358 ", "359"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 352;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> points = {"355 0 5 10 351 356 1 6 50 55 70 75"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> points = {"1 35 40 45 50 55 57 58 59 60 ", "61 62 63 64 65 66 346 351 356"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> points = {"329 174 43 298 213 53 335 300 80 328 270 198 262 2", "2 261 330 247 46 106 277 265 168 78 316 194 205 97", " 120 232 349 272 111 196 202 79 141 351 119 118 11", "7 39 248 251 220 215 230 94 208 92 2 122 192 103 1", "02 227 50 341 89 100 7 312 23 352 346 336 55 85 61", " 153 197 164 24 217 338 145 257 353 90 287 344 75 ", "93 147 347 95 127 354 250 350 98 81 52 129 162 10 ", "358 229 323 133 139 175 132 83 21 191 320 290 286 ", "156 72 337 284 356 137 63 256 131 254 303 357 317 ", "115 60 294 310 38 171 152 211 70 112 236 32 239 16", "7 142 87 283 274 18 35 3 84 278 289 327 30 206 340", " 157 219 154 12 16 108 181 128 11 140 124 105 56 2", "43 178 268 19 326 342 150 54 69 14 221 0 207 273 2", "52 228 225 333 76 195 166 114 282 34 302 64 184 13", "0 309 325 260 301 218 246 44 203 17 158"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> points = {"0 15 45 30 60 330 315 345 ", "210 220 230 245 246 240 250 260 275 276 277"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> points = {"0 359 358 357"};
    PointsOnACircle* pObj = new PointsOnACircle();
    clock_t start = clock();
    int result = pObj->color(points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=10805&pm=8238
********************************************************************************
// greetings to you, for reading this 
 
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
typedef long long ll; 
typedef vector<int> vi; 
 
#define LS < 
#define Size(x) (int(x.size())) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
// parse a space-delimited string into a vi 
vi parsevi(string s) { 
  s = s + " "; 
  int q = 0; 
  vi res; 
  FOR(l,0, Size(s)) { 
    if(s[l] == ' ') { res.push_back(q); q = 0;} 
    else { q = q * 10 + s[l] - '0'; } 
    } 
  return res; 
  } 
 
// Greatest Common Divisor 
ll gcd(ll x, ll y) {return x ? gcd(y%x,x) : y;} 
 
#line 3 "PointsOnACircle.cc" 
 
class PointsOnACircle { 
  public: 
  int color(vector <string> points) { 
    // !FDI 
    string s; 
    FOR(u,0,Size(points)) s += points[u]; 
    vi deg = parsevi(s); 
    int dg[360]; 
    FOR(k,0,360) dg[k] = 0; 
    FOR(u,0,Size(deg)) dg[deg[u]] = 1; 
     
    int best = 0; 
    FOR(delta,1,181) { 
      int dd = gcd(360, delta); 
      int xdd = 360 / dd; 
       
      int count = 0; 
 
      FOR(k,0,dd) { 
        FOR(u,0,xdd) if(dg[(k+u*delta)%360] == 0) { 
          int last = 0; 
          FOR(v,u+1,u+xdd+1) 
          if(dg[(k+v*delta)%360] == 0) { 
            count += last/2; 
            last = 0; 
            } 
          else last++; 
          goto nextk; 
          } 
        count += xdd/2; 
        nextk: ; 
        } 
       
      if(count > best) best = count; 
      } 
 
    return best*2; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/