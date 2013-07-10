/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1677
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

class Bonuses {
public:
    vector<int> getDivision(vector<int> points);
};

vector<int> Bonuses::getDivision(vector<int> points) {
    vector<int> ret;
    int total = accumulate(points.begin(), points.end(), 0);
    int left = 100;
    for_each(points.begin(), points.end(), [&](int p){
	int per = static_cast<int>(static_cast<double>(p * 100)/total);
	ret.push_back(per);
	left -= per;
    });
    vector<bool> done(points.size(), false);
    while(left != 0) {
	int low = -1;
	int idx = 0;
	for(int i = 0; i < points.size(); ++i) {
	    if(points[i] > low && done[i] == false) {
		low = points[i];
		idx = i;
	    }
	}
	done[idx] = true;
	++ret[idx];
	--left;
    }
    return ret;
}


int test0() {
    vector<int> points = {1, 2, 3, 4, 5};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 13, 20, 27, 34};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> points = {5, 5, 5, 5, 5, 5};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 17, 17, 17, 16, 16};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> points = {113, 448, 361, 469, 98, 327};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 25, 20, 26, 5, 18};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> points = {60, 202, 43, 375, 11, 111};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 26, 5, 47, 1, 14};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> points = {487, 398, 223, 201, 60, 498, 130, 406, 279, 363, 291, 248, 445, 12, 156, 293};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 9, 4, 4, 1, 12, 2, 10, 6, 9, 7, 5, 10, 0, 3, 7};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> points = {259, 267, 122, 440, 418, 331, 137, 155, 199, 273, 276, 279, 89, 374, 158, 152, 210, 376, 469, 267, 86, 258, 23, 427, 331, 194, 246, 460, 471, 292, 360, 497, 282, 252, 73, 480, 335, 68, 259, 190, 313, 186};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1, 4, 4, 3, 1, 1, 1, 3, 3, 3, 0, 4, 1, 1, 1, 4, 5, 2, 0, 2, 0, 4, 3, 1, 2, 5, 5, 3, 4, 5, 3, 2, 0, 5, 3, 0, 2, 1, 3, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> points = {376, 234, 36, 291, 87, 11, 132, 90, 80, 433, 5, 436, 127, 14, 107, 196, 21, 412, 58, 481, 306, 296, 476, 318, 12, 333, 317, 160, 45, 414, 240, 65, 463, 182, 209, 483, 115, 233, 356};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2, 0, 4, 1, 0, 1, 1, 0, 6, 0, 6, 1, 0, 1, 2, 0, 5, 0, 6, 4, 4, 6, 4, 0, 4, 4, 1, 0, 5, 3, 0, 6, 2, 2, 6, 1, 2, 5};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> points = {426, 119, 233, 108, 375, 492, 396, 282, 52, 369, 176, 329, 34, 289, 123, 197, 65, 313, 7, 1, 487, 133, 104, 413, 451, 57, 83, 417, 317, 351, 111, 441, 34, 200, 442, 176, 316, 165, 376, 487, 319, 104, 286, 291, 78, 193, 88, 85, 9};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1, 3, 0, 4, 5, 4, 3, 0, 4, 1, 3, 0, 3, 1, 2, 0, 3, 0, 0, 5, 1, 0, 4, 4, 0, 0, 4, 3, 4, 0, 4, 0, 2, 4, 1, 3, 1, 4, 5, 3, 0, 3, 3, 0, 1, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> points = {221, 373, 13, 481, 54, 414, 268, 239, 166, 413, 5, 328, 167, 203, 415, 118, 123, 95, 253, 432, 29, 447, 360, 387, 159, 26, 149, 274, 441, 388, 324, 255, 283, 17, 43, 214, 322, 78, 39, 460};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 0, 6, 0, 5, 3, 2, 1, 5, 0, 4, 1, 2, 5, 1, 1, 1, 2, 5, 0, 5, 4, 5, 1, 0, 1, 3, 5, 5, 4, 3, 3, 0, 0, 2, 4, 0, 0, 5};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> points = {398, 184, 449, 158, 38, 383, 243, 284, 470, 83, 445, 273, 372, 39, 102, 244, 183, 11, 482, 42, 21, 83, 96, 209, 33, 398, 117, 299, 496, 15};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 2, 7, 2, 0, 6, 4, 5, 8, 1, 7, 5, 6, 0, 1, 4, 2, 0, 8, 0, 0, 1, 1, 4, 0, 6, 1, 5, 8, 0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> points = {387, 36, 389, 391, 418, 147, 52, 109, 133, 234, 66, 162, 376, 230, 238, 429, 79, 470, 478, 338, 486, 348, 481, 202, 67, 490, 132, 162, 353, 338, 468, 20, 308, 425, 440, 438, 8, 117, 353, 316, 110, 244, 170, 241, 19, 3, 267, 441, 234, 6};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 0, 4, 4, 4, 1, 0, 0, 1, 1, 0, 1, 3, 1, 1, 4, 0, 4, 4, 3, 4, 3, 4, 1, 0, 4, 1, 1, 3, 3, 4, 0, 3, 4, 4, 4, 0, 0, 3, 3, 0, 1, 1, 1, 0, 0, 3, 4, 1, 0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> points = {131, 351, 19, 107, 88, 210, 127, 476};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 24, 1, 7, 5, 14, 8, 32};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> points = {58, 366, 76, 78, 210, 12, 181, 365, 59, 446, 267, 441, 452, 379, 381, 454, 381, 186, 151, 96, 420, 179, 180, 103, 235, 374, 278};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 1, 1, 3, 0, 2, 6, 0, 7, 4, 7, 7, 6, 6, 7, 6, 2, 2, 1, 7, 2, 2, 1, 3, 6, 5};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> points = {148, 409, 303, 98, 162, 227, 264, 407, 331, 484, 61, 128};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 14, 11, 3, 5, 7, 8, 14, 11, 17, 2, 4};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> points = {105, 241, 256, 486, 488, 387, 229, 248, 265, 1, 22, 157, 384, 309, 63, 273, 55, 192, 91, 123, 43, 131, 25, 340, 416, 427, 366, 137, 291, 439, 95, 372, 87, 188, 329, 180, 137, 168, 46, 326, 34, 204, 23, 121, 463, 442, 383, 190, 173};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 3, 5, 5, 4, 2, 3, 3, 0, 0, 1, 4, 3, 0, 3, 0, 1, 0, 1, 0, 1, 0, 4, 4, 4, 4, 1, 3, 5, 0, 4, 0, 1, 4, 1, 1, 1, 0, 3, 0, 1, 0, 1, 5, 5, 4, 1, 1};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> points = {335, 322, 316, 215, 320, 129, 224, 358, 231, 269, 381, 140, 430, 62, 7, 260, 224, 344, 261, 334, 93, 225, 133};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 6, 3, 6, 2, 3, 7, 5, 5, 7, 2, 8, 1, 0, 5, 3, 7, 5, 6, 1, 4, 2};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> points = {295, 23};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {93, 7};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> points = {352, 483, 206, 372, 398, 318, 241, 125, 243, 460, 331, 80, 128, 238, 415, 197, 95, 317, 208, 432, 481, 461, 270, 385, 393, 139, 422, 9, 309};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 2, 5, 5, 4, 2, 1, 2, 6, 4, 0, 1, 2, 5, 2, 1, 4, 2, 6, 6, 6, 3, 5, 5, 1, 5, 0, 4};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> points = {259, 497, 443, 47, 489, 493, 40, 343, 225, 269, 304, 21, 250, 410, 155, 198, 27, 495, 412, 142, 488, 431, 62, 243, 211, 410, 369, 242, 14, 255, 400, 416};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6, 5, 0, 6, 6, 0, 4, 2, 3, 4, 0, 2, 5, 1, 2, 0, 6, 5, 1, 6, 5, 0, 2, 2, 5, 5, 2, 0, 2, 5, 5};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> points = {247, 137, 359, 411, 194, 125, 40, 297, 465, 113, 27, 310, 224, 25, 354, 225, 396, 411, 403, 386, 307, 428, 493, 365, 287, 29, 499, 247, 154, 238, 385, 74, 406};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 4, 5, 2, 1, 0, 3, 6, 1, 0, 4, 2, 0, 4, 2, 5, 5, 5, 5, 3, 5, 6, 5, 3, 0, 6, 2, 1, 2, 5, 0, 5};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> points = {359, 167, 306, 82, 256, 52, 469, 411, 152, 120};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 7, 13, 3, 10, 2, 20, 18, 6, 5};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> points = {149, 252, 460, 431, 405, 138, 33, 212, 23, 293, 228, 93, 38, 3, 427, 491, 305, 126, 473, 132, 158, 460, 23, 173, 318, 207, 18, 82, 218, 218, 74, 29, 482, 279, 473, 301, 217, 365, 38, 127, 350, 252, 403, 491, 227, 393, 250, 194};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 4, 4, 1, 0, 1, 0, 3, 1, 0, 0, 0, 4, 5, 3, 1, 5, 1, 1, 4, 0, 1, 3, 1, 0, 0, 1, 1, 0, 0, 5, 3, 5, 3, 1, 4, 0, 1, 4, 3, 4, 5, 1, 4, 3, 1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> points = {293, 140, 430, 424, 486, 5, 231, 241, 230, 217, 455, 100, 143, 388, 313, 490, 477, 294, 421, 7, 145, 391, 284, 343, 132, 315, 109, 100, 118, 94, 129, 362, 148, 261, 302, 233, 442, 128, 267, 416};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 5, 5, 5, 0, 2, 2, 2, 2, 5, 0, 1, 4, 3, 5, 5, 3, 5, 0, 1, 4, 2, 4, 1, 3, 1, 0, 1, 0, 1, 4, 1, 2, 3, 2, 5, 1, 2, 4};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> points = {281, 341, 297, 261, 161, 208, 338, 332, 33, 276, 230, 222, 386, 30, 363, 183, 320, 226, 29, 416, 304, 321, 465, 141, 320, 69, 125, 141, 432, 29, 96, 472, 345, 299, 351, 190, 350, 142, 293, 408, 334, 377, 483, 386, 293, 141, 157, 311, 348};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 2, 1, 1, 1, 3, 3, 0, 2, 1, 1, 3, 0, 3, 1, 3, 1, 0, 4, 3, 3, 4, 1, 3, 0, 0, 1, 4, 0, 0, 4, 3, 2, 3, 1, 3, 1, 2, 4, 3, 3, 4, 3, 2, 1, 1, 3, 3};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> points = {479, 294, 47, 170, 100, 222, 89, 398, 133, 217, 66, 356, 39, 427, 236, 244, 148, 78};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 8, 1, 5, 2, 6, 2, 11, 3, 6, 1, 10, 1, 12, 7, 7, 3, 2};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> points = {320, 71, 65, 164, 104, 380, 351, 32, 61, 115, 440, 332, 330, 449, 315, 183, 95, 454, 389, 207, 68, 414, 264, 220, 92, 207, 114, 411, 453, 57, 260, 252, 90, 275, 427, 36, 482};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 0, 0, 1, 1, 5, 4, 0, 0, 1, 5, 4, 4, 6, 4, 2, 1, 6, 5, 2, 0, 5, 3, 2, 1, 2, 1, 5, 6, 0, 2, 2, 1, 4, 5, 0, 6};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> points = {367, 69, 360, 28, 150, 40};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37, 7, 36, 2, 15, 3};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> points = {176, 271, 294, 181, 117, 450, 251, 490, 264, 347, 248, 476};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8, 9, 5, 3, 13, 7, 14, 7, 10, 6, 14};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> points = {344, 62, 26, 457, 162, 164, 79, 418, 102, 296, 494, 365, 434, 462, 75, 113, 169, 190, 244, 300, 317, 277, 99, 492, 66, 445, 134, 500, 223, 229, 417};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 0, 0, 6, 1, 2, 0, 6, 1, 4, 7, 5, 6, 6, 0, 1, 2, 2, 2, 4, 4, 4, 1, 7, 0, 6, 1, 7, 2, 2, 6};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> points = {376, 338, 190, 49, 194, 135, 155, 314, 141, 356, 413, 74, 444, 449, 346, 93, 498, 60, 390, 133, 441, 158, 102, 358, 59, 345, 27, 34, 394, 451, 110, 341, 432, 247};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 2, 0, 2, 1, 1, 4, 1, 5, 5, 0, 6, 6, 5, 1, 6, 0, 5, 1, 6, 1, 1, 5, 0, 4, 0, 0, 5, 6, 1, 4, 5, 2};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> points = {485, 324, 263, 143, 470, 292, 304, 188, 100, 254, 296, 255, 360, 231, 311, 275, 93, 463, 115, 366, 197, 470};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 6, 4, 2, 8, 5, 5, 3, 1, 4, 5, 4, 6, 3, 5, 4, 1, 8, 1, 6, 3, 8};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> points = {209, 303, 341, 115, 420, 339, 447, 69, 329, 484, 372, 308, 402, 278, 155, 164, 162, 165, 398, 317, 272, 476, 126, 366, 465, 4, 151, 19, 488, 355, 197, 30, 417, 262, 444, 319, 174};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 4, 1, 5, 4, 5, 0, 4, 5, 4, 2, 4, 2, 1, 1, 1, 1, 4, 3, 2, 5, 1, 4, 5, 0, 1, 0, 5, 4, 1, 0, 5, 2, 5, 4, 1};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> points = {135, 423, 240, 140, 140, 177, 113, 313, 380, 165, 182, 64, 244, 63, 200, 94, 269, 485, 106, 376, 380, 324, 212, 455, 155, 499};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 7, 4, 2, 2, 2, 1, 5, 6, 2, 3, 1, 4, 0, 4, 1, 5, 8, 1, 6, 6, 6, 4, 8, 2, 8};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> points = {115, 455, 413, 37, 324, 100, 121, 458, 264, 242, 415, 127, 496, 373, 382, 224, 434, 210, 283};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 9, 8, 0, 6, 1, 2, 9, 4, 4, 8, 2, 10, 7, 7, 4, 8, 3, 6};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> points = {13, 106, 104, 184, 165, 406, 13, 443, 472, 64, 182, 158, 309, 52, 346, 187, 372, 210, 35, 316, 349, 87, 74, 465, 309, 162, 437, 59, 129, 390, 191, 223, 237, 455, 299};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1, 2, 2, 6, 0, 6, 6, 0, 2, 1, 4, 0, 5, 3, 5, 3, 0, 4, 5, 1, 0, 6, 4, 2, 6, 0, 1, 5, 3, 3, 3, 6, 4};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> points = {493, 20, 94, 433, 179, 249, 103, 51, 241, 245, 150, 451, 47, 473};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 0, 2, 14, 6, 8, 3, 1, 8, 8, 4, 14, 1, 15};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> points = {217, 443, 491, 8, 76, 287, 231, 430, 425, 103, 40, 301, 382, 481, 64, 449, 161, 238, 345, 59, 247, 390, 454, 408, 294, 459, 140, 201, 253, 105, 354, 2, 303, 369, 113, 263, 178, 46, 241, 442, 49, 302, 6, 364, 103, 350, 34};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 5, 0, 0, 3, 1, 4, 4, 0, 0, 3, 4, 5, 0, 4, 1, 2, 3, 0, 2, 4, 4, 4, 3, 4, 1, 1, 2, 0, 4, 0, 3, 4, 0, 3, 1, 0, 2, 4, 0, 3, 0, 4, 0, 3, 0};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> points = {54, 315, 251, 463, 304, 186, 500, 412, 258, 267, 399, 190, 495, 207, 43, 463, 227, 235, 210, 400, 330, 327, 177, 261, 95, 46, 32, 208};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 3, 7, 5, 2, 7, 6, 4, 4, 6, 2, 7, 2, 0, 7, 3, 3, 2, 6, 5, 5, 2, 4, 1, 0, 0, 2};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> points = {44, 186, 36, 378, 149, 79, 130, 190, 320, 15, 209, 151, 334, 178, 19, 396};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7, 1, 14, 5, 2, 4, 7, 12, 0, 8, 5, 12, 7, 0, 15};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> points = {405, 24, 23, 274, 202, 203, 462, 309, 89, 311, 474, 399, 207, 249, 408, 262};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 0, 0, 6, 4, 4, 11, 8, 2, 8, 12, 10, 4, 5, 10, 6};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> points = {180, 179, 307, 258, 178, 381, 500, 262, 369, 52, 487, 310, 204, 181, 212, 113, 69, 127, 365, 165, 396, 350, 138, 354, 179, 255, 247, 27, 46, 73, 433, 459, 217, 437, 201, 347, 194, 476, 151, 87, 3, 63, 495, 463, 128, 14};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 3, 1, 4, 5, 3, 4, 0, 5, 3, 1, 1, 1, 1, 0, 1, 4, 1, 4, 4, 1, 4, 1, 3, 3, 0, 0, 0, 4, 5, 1, 4, 1, 4, 1, 5, 1, 0, 0, 0, 5, 5, 1, 0};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> points = {125, 282, 336, 440, 284, 138, 347, 473, 52, 393, 56, 446, 279, 131, 294, 441, 403, 407, 63, 143, 461, 187, 183, 85, 16, 384, 53, 429, 229, 292, 497, 390, 395, 52, 213, 142, 174, 132, 192, 19, 343, 434, 64, 370, 18, 26, 434, 225, 80, 316};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 2, 1, 3, 4, 0, 4, 0, 4, 2, 1, 3, 4, 4, 4, 0, 1, 4, 1, 1, 0, 0, 4, 0, 4, 1, 2, 5, 4, 4, 0, 1, 1, 1, 1, 1, 0, 3, 4, 0, 3, 0, 0, 4, 1, 0, 3};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> points = {316, 336, 10, 125, 333, 427, 112, 61, 125, 400, 110, 231, 357, 429, 182, 50, 156, 127, 42, 321, 338, 363, 168, 163, 227};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 0, 2, 7, 8, 2, 1, 2, 8, 1, 5, 7, 8, 3, 0, 2, 2, 0, 6, 7, 7, 3, 2, 4};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> points = {112, 44, 399, 210, 461, 414, 189, 293, 72, 187, 322, 218, 295, 340, 91, 158, 128, 402, 462, 265, 476, 336, 220, 110, 316, 334, 79, 258};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 6, 2, 7, 6, 2, 5, 1, 2, 5, 3, 5, 5, 1, 2, 1, 6, 7, 3, 7, 5, 3, 1, 5, 5, 1, 3};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> points = {220, 447, 213, 105, 313, 348, 376, 208, 11, 1, 454, 246, 230, 478, 208, 130, 445, 492, 201, 326, 215, 131, 328, 476, 151, 332, 147, 489, 56, 441, 33, 480, 119};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6, 2, 1, 4, 4, 5, 2, 0, 0, 6, 2, 2, 6, 2, 1, 6, 6, 2, 4, 2, 1, 4, 6, 1, 4, 1, 6, 0, 5, 0, 6, 1};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> points = {500};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> points = {500, 500, 500};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {34, 33, 33};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> points = {485, 324, 263, 143, 470, 292, 304, 188, 100, 254, 296, 255, 360, 231, 311, 275, 93, 463, 115, 366, 197, 470};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 6, 4, 2, 8, 5, 5, 3, 1, 4, 5, 4, 6, 3, 5, 4, 1, 8, 1, 6, 3, 8};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> points = {1, 1, 1};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {34, 33, 33};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> points = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 8};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 9};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> points = {1};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> points = {9, 9, 9, 9, 10};
    Bonuses* pObj = new Bonuses();
    clock_t start = clock();
    vector<int> result = pObj->getDivision(points);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 20, 19, 19, 22};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=269554&rd=4530&pm=1677
********************************************************************************
#line 2 "Bonuses.cpp" 
 
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <map> 
#include <sstream> 
#include <cmath> 
 
using namespace std; 
 
 
class Bonuses { 
  public: 
  vector <int> getDivision(vector <int> a) { 
    int n=a.size(),sum=0; 
    vector<int> ans(n,0); 
    for(int i=0;i<n;i++) sum+=a[i]; 
    int left=100; 
    for(int i=0;i<n;i++) { 
      ans[i]=100*a[i]/sum; 
      left-=100*a[i]/sum; 
    } 
    vector<bool> done(n,false); 
    while (left--) { 
      int h=-1,b=0; 
      for(int i=0;i<n;i++) 
        if (!done[i] && a[i]>h) { 
          h=a[i]; 
          b=i; 
        } 
      done[b]=true; 
      ans[b]++; 
    } 
    return ans;     
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/
