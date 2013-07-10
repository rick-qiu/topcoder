/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5951
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

class Distincter {
public:
    int disperse(vector<int> sequence, int K);
};

int Distincter::disperse(vector<int> sequence, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<int> sequence = {5, 1, 3};
    int K = 2;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> sequence = {1, 1, 1, 1, 1, 1, 1};
    int K = 5;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> sequence = {1, 1, 1, 1, 1, 2, 3};
    int K = 6;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> sequence = {8, 9, 7, 8, 7, 9, 7};
    int K = 7;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> sequence = {1, 2, 3, 4, 4, 5, 7, 7, 8};
    int K = 9;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> sequence = {576, 571, 571, 572, 575, 572, 571, 568, 573, 572, 569, 572};
    int K = 11;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> sequence = {676, 677, 678, 679, 679, 681, 682, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694};
    int K = 20;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> sequence = {489, 490, 491, 492, 492, 494, 495, 495, 496, 497, 499, 500, 501, 501, 502, 503, 504, 505, 506, 507};
    int K = 20;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> sequence = {543, 544, 545, 546, 546, 548, 549, 549, 550, 551, 553, 554, 555, 555, 556, 557, 558, 560, 561, 562, 563, 563, 564, 565, 566, 567, 568, 569, 570, 571};
    int K = 30;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> sequence = {340, 341, 342, 343, 343, 345, 346, 346, 347, 348, 350, 351, 352, 352, 353, 354, 355, 357, 358, 359, 360, 360, 361, 362, 363, 364, 366, 367, 368, 369, 370, 370, 371, 372, 373, 374, 375};
    int K = 30;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> sequence = {340, 341, 342, 343, 343, 345, 346, 346, 347, 348, 350, 351, 352, 352, 353, 354, 355, 357, 358, 359, 360, 360, 361, 362, 363, 364, 366, 367, 368, 369, 370, 370, 371, 372};
    int K = 27;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> sequence = {574, 604, 619, 585, 587, 579, 600, 621, 594, 611, 581, 618, 597, 584, 614, 616, 595, 594, 580, 582, 575, 592, 596, 586, 593, 607, 591, 586, 576, 613, 577, 605, 589, 608, 617, 609, 604, 603, 588, 606, 612, 620, 598, 615, 577, 602, 580, 616, 622, 601};
    int K = 50;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> sequence = {626, 601, 588, 606, 648, 587, 589, 635, 630, 638, 632, 595, 646, 605, 592, 604, 594, 616, 609, 634, 643, 647, 590, 649, 627, 607, 607, 611, 617, 645, 622, 641, 624, 613, 629, 617, 590, 621, 619, 629, 600, 593, 639, 631, 643, 614, 599, 602, 618, 637};
    int K = 50;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> sequence = {340, 341, 342, 343, 343, 343, 346, 346, 347, 348, 350, 351, 352, 352, 353, 354, 355, 357, 358, 359, 360, 360, 361, 362, 363, 364, 366, 367, 368, 369, 370, 370, 371, 372, 373, 374, 375};
    int K = 30;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> sequence = {340, 341, 342, 343, 343, 345, 346, 346, 347, 348, 351, 351, 352, 352, 353, 354, 355, 357, 358, 358, 360, 360, 361, 362, 362, 364, 366, 367, 362, 369, 370, 370, 370, 372, 373, 374, 375};
    int K = 30;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
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
    vector<int> sequence = {574, 604, 619, 585, 587, 579, 600, 621, 594, 611, 581, 618, 596, 584, 614, 617, 595, 594, 581, 582, 575, 591, 596, 584, 593, 609, 591, 584, 576, 613, 577, 605, 589, 608, 617, 609, 604, 603, 588, 606, 612, 620, 598, 615, 577, 602, 580, 616, 622, 601};
    int K = 50;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> sequence = {352, 345, 337, 349, 346, 351, 339, 346, 337, 343};
    int K = 10;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> sequence = {640, 640, 644, 643, 642, 640, 639, 646, 643, 632, 640};
    int K = 11;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> sequence = {564, 551, 551, 550, 549, 547, 563, 548, 551, 547, 557, 543, 555};
    int K = 12;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> sequence = {599, 590, 598, 589, 604, 605, 588, 605, 588, 598, 591, 600, 590};
    int K = 13;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> sequence = {518, 523, 516, 519, 520, 514, 522, 517, 518, 520, 511};
    int K = 10;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
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
    vector<int> sequence = {421, 422, 433, 432, 432, 428, 424, 431, 427, 420, 410, 423, 434, 433};
    int K = 13;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> sequence = {492, 500, 498, 522, 517, 497, 503, 504, 509, 496, 516, 522, 505, 525, 508, 512, 510, 514};
    int K = 18;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
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
    vector<int> sequence = {332, 332, 330, 334, 322, 316, 315, 321, 331, 319, 331};
    int K = 10;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
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
    vector<int> sequence = {391, 400, 406, 393, 401, 389, 398, 397, 397, 390};
    int K = 8;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> sequence = {445, 464, 463, 449, 467, 449, 457, 445, 433, 431, 430, 436, 439, 449, 427, 457, 450, 464, 445, 435};
    int K = 18;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> sequence = {510, 526, 517, 517, 518, 504, 511, 506, 504, 499, 522, 494, 521, 514, 520, 505, 518, 518, 527};
    int K = 16;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> sequence = {435, 460, 437, 461, 440, 460, 460, 452, 432, 453, 438, 452, 455, 460, 434, 438, 445, 454};
    int K = 17;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> sequence = {668, 652, 667, 650, 668, 649, 613, 647, 662, 622, 668, 634, 610, 598, 625, 620, 663, 623, 613, 631, 613, 650, 622, 672, 638, 665, 610, 647, 595, 660, 615, 598, 620, 631, 662, 627, 624, 644, 653, 598, 610};
    int K = 36;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> sequence = {522, 513, 516, 518, 514, 509, 510, 513, 511, 516, 511, 510, 513};
    int K = 12;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> sequence = {623, 601, 621, 612, 603, 644, 599, 612, 618, 618, 656, 659, 619, 616, 654, 620, 627, 607, 623, 656, 645, 632, 602, 603, 623, 649, 643, 625, 603, 648, 608, 616, 618, 641, 598, 637, 611};
    int K = 35;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> sequence = {428, 497, 446, 455, 418, 467, 476, 434, 460, 461, 457, 447, 421, 423, 434, 452, 434, 505, 481, 474, 457, 444, 499, 428, 480, 454, 492, 464, 419, 470, 449, 480, 414, 475, 498, 477, 451, 449, 462, 475, 488, 415, 424, 411, 416, 424, 484, 412, 407, 442};
    int K = 42;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> sequence = {415, 453, 460, 443, 418, 437, 413, 415, 451, 422, 462, 453, 420, 426, 463, 462, 412, 455, 440, 433, 417, 423, 422, 423, 426, 449, 453};
    int K = 22;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
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
    vector<int> sequence = {578, 528, 564, 565, 539, 537, 562, 521, 520, 525, 545, 554, 571, 573, 577, 556, 578, 580, 573, 520, 582, 519, 572, 542, 568, 573, 516, 545, 568, 568, 581, 522, 558};
    int K = 33;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> sequence = {629, 629, 663, 643, 631, 629, 643, 635, 649, 657, 648, 653, 645, 633, 634, 627, 631, 638, 633, 633, 656, 659, 664, 627};
    int K = 24;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> sequence = {445, 429, 436, 462, 406, 442, 403, 407, 416, 435, 416, 403, 462, 445, 412, 430, 394, 452, 465, 406, 437, 388, 457, 422, 411, 397, 402, 455, 447, 408, 450, 429, 407, 461, 407, 402, 390, 453, 437, 448, 405};
    int K = 38;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> sequence = {360, 362, 383, 382, 394, 376, 359, 394, 366, 367, 359, 383, 382, 391, 364, 367, 363, 384, 386, 359, 362, 360, 384};
    int K = 19;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> sequence = {666, 673, 685, 670, 669, 652, 685, 652, 636, 657, 649, 668, 658, 633, 684, 634, 647, 637, 682, 633, 654, 640, 651, 681, 638, 660, 656, 671, 631, 648, 648, 680, 650, 677};
    int K = 29;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> sequence = {702, 695, 710, 710, 688, 681, 702, 701, 692, 693, 691, 679, 699, 683, 698, 699, 688, 702, 676, 677, 703, 690, 675};
    int K = 19;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> sequence = {631, 604, 605, 565, 626, 602, 609, 570, 566, 630, 591, 634, 573, 571, 609, 596, 595, 615, 622, 634, 593, 566, 598, 577, 616, 611, 583, 622, 576, 619, 596, 555, 594, 572, 553, 625, 625, 595, 599, 564, 579, 578, 542, 554, 591, 550, 606, 545, 617};
    int K = 44;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> sequence = {488, 514, 503, 561, 486, 473, 527, 476, 526, 554, 544, 553, 537, 493, 495, 540, 534, 545, 518, 500, 542, 548, 533, 519, 542, 531, 549, 539, 537, 508, 511, 524, 511, 516, 505, 480, 476, 523, 471, 518, 532, 502, 552, 473, 506, 524, 552, 480, 489};
    int K = 49;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> sequence = {446, 451, 453, 439, 414, 453, 439, 416, 454, 439, 446, 444, 433, 431, 420, 429, 409, 413, 416, 449, 455, 441, 445, 413, 421, 446, 440, 448};
    int K = 24;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> sequence = {696, 676, 679, 695, 694, 691, 706, 692, 700, 686, 682, 687, 695, 689, 687, 669, 679, 674, 703, 708, 673, 677, 695};
    int K = 20;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> sequence = {312, 278, 330, 295, 285, 329, 287, 346, 279, 325, 307, 334, 278, 345, 311, 349, 308, 288, 286, 305, 301, 310, 330, 318, 351, 305, 326, 279, 293, 302, 290, 287, 307, 351, 295, 334, 306, 286, 301, 293};
    int K = 37;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> sequence = {514, 484, 518, 516, 463, 492, 495, 491, 504, 483, 485, 511, 494, 486, 493, 494, 466, 470, 459, 503, 516, 472, 509, 478, 487, 511, 510, 513, 518, 505, 493};
    int K = 28;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> sequence = {656, 657, 710, 702, 699, 705, 677, 669, 685, 672, 656, 689, 662, 658, 672, 644, 642, 654, 670, 666, 644, 666, 711, 649, 666, 698, 663, 647, 688, 667, 670, 651, 659, 659, 690, 692, 700, 691};
    int K = 32;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
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
    vector<int> sequence = {421, 397, 459, 468, 424, 480, 460, 422, 432, 476, 438, 412, 409, 447, 414, 440, 399, 460, 478, 437, 447, 451, 436, 461, 439, 444, 420, 394, 441, 405, 444, 474, 417, 452, 478, 482, 440, 438, 474, 475, 399, 458, 476, 457, 465, 409};
    int K = 44;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> sequence = {347, 378, 395, 400, 348, 416, 406, 403, 413, 408, 380, 404, 385, 355, 347, 370, 353, 404, 377, 386, 362, 396, 399, 389, 416, 359, 357, 361, 410, 361, 398, 405, 382, 344, 373, 422, 376, 372, 337, 421, 365, 370, 397, 404};
    int K = 41;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> sequence = {565, 562, 585, 537, 588, 532, 564, 579, 570, 590, 576, 560, 592, 535, 555, 543, 576, 537, 575, 543, 580, 548, 557, 578, 586, 568, 546, 560, 537, 554};
    int K = 26;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
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
    vector<int> sequence = {493, 482, 493, 477, 496, 494, 488, 492, 475, 478, 476, 498, 486, 468, 481, 494, 477};
    int K = 14;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> sequence = {337, 264, 277, 279, 288, 326, 297, 279, 325, 333, 323, 296, 315, 275, 292, 312, 263, 312, 254, 322, 269, 285, 265, 259, 309, 308, 274, 254, 327, 333, 297, 335, 330, 261, 319, 322, 279, 278, 337, 343, 327, 289, 256, 309, 336, 311, 254, 278, 271};
    int K = 44;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> sequence = {642, 627, 631, 642, 637, 629, 628, 626, 629, 633, 621, 639, 648};
    int K = 12;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
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
    vector<int> sequence = {483, 486, 507, 539, 511, 549, 489, 492, 501, 520, 492, 548, 541, 530, 491, 519, 501, 488, 489, 487, 539, 520, 508, 498, 527, 488, 530, 543, 547, 540, 509, 503, 537, 498, 523, 545, 516, 532, 542};
    int K = 38;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> sequence = {402, 393, 423, 415, 372, 380, 384, 406, 352, 387, 379, 401, 361, 378, 356, 407, 413, 394, 420, 353, 391, 386, 396, 357, 356, 376, 359, 389, 396, 374, 421, 381, 381, 375, 372, 426, 359, 361, 406, 419, 362, 374};
    int K = 39;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> sequence = {530, 530, 553, 491, 497, 550, 520, 518, 521, 504, 503, 541, 540, 499, 493, 553, 528, 547, 480, 480, 494, 544, 485, 509, 488, 500, 502, 502, 544, 515, 503, 503, 492, 526, 531, 501, 524};
    int K = 31;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> sequence = {408, 416, 448, 433, 419, 424, 429, 443, 449, 425, 411, 432, 450, 448, 416, 426, 418, 449, 415, 414, 428, 418};
    int K = 21;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> sequence = {919, 329, 131, 452, 752, 398, 166, 116, 852, 982, 453, 224, 884, 927, 982, 453, 256, 912, 246, 490, 224, 811, 920, 442, 153, 558, 446, 13, 208, 341, 464, 828, 685, 86, 40, 153, 555, 453, 811, 753, 226, 725, 329, 131, 153, 530, 802, 251, 398, 469};
    int K = 47;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> sequence = {423, 779, 779, 81, 958, 903, 809, 281, 99, 865, 542, 195, 258, 304, 281, 527, 41, 602, 241, 600, 42, 79, 955, 414, 470, 817, 978, 75, 852, 734, 861, 595, 467, 467, 506, 350, 178, 598, 900, 734, 527, 288, 75, 825, 569, 299, 14, 80, 965, 230};
    int K = 46;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> sequence = {213, 114, 441, 686, 505, 714, 643, 134, 347, 578, 585, 505, 996, 985, 206, 792, 52, 385, 348, 372, 681, 686, 996, 716, 108, 985, 441, 48, 716, 823, 206, 585, 811, 394, 52, 803, 186, 64, 312, 651, 78, 728, 910, 415, 262, 718, 89, 38, 485, 86};
    int K = 40;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> sequence = {565, 790, 379, 460, 982, 747, 565, 790, 482, 972, 569, 790, 830, 889, 982, 469, 678, 818, 718, 432, 984, 432, 888, 337, 220, 801, 6, 557, 565, 559, 569, 432, 6, 426, 40, 80, 250, 830, 939, 974, 518, 762, 675, 530, 638, 758, 308, 116, 604, 657};
    int K = 40;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> sequence = {83, 767, 231, 391, 884, 474, 705, 382, 31, 861, 720, 323, 897, 900, 634, 997, 29, 515, 539, 735, 323, 83, 419, 539, 210, 434, 724, 128, 978, 506, 231, 515, 665, 492, 284, 702, 673, 657, 680, 83, 612, 562, 757, 224, 422, 9, 881, 128, 224, 722};
    int K = 50;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> sequence = {372, 63, 130, 103, 202, 621, 40, 893, 913, 486, 124, 114, 488, 124, 103, 40, 545, 262, 738, 708, 37, 738, 808, 541, 545, 269, 525, 816, 738, 4, 656, 206, 415, 67, 782, 761, 25, 483, 25, 482, 738, 899, 760, 71, 862, 848, 420, 894, 193, 538};
    int K = 41;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> sequence = {682, 344, 718, 748, 796, 389, 281, 211, 942, 344, 719, 262, 262, 378, 673, 894, 461, 431, 985, 249, 781, 281, 129, 712, 474, 712, 449, 389, 328, 267, 76, 821, 639, 389, 123, 568, 776, 378, 596, 328, 139, 397, 340, 211, 894, 378, 378, 595, 713, 443};
    int K = 47;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> sequence = {587, 762, 762, 680, 845, 144, 698, 584, 845, 752, 738, 579, 600, 471, 895, 284, 587, 305, 466, 487, 587, 181, 488, 39, 993, 488, 619, 560, 659, 756, 895, 680, 733, 206, 471, 976, 976, 600, 799, 116, 883, 382, 1000, 488, 203, 643, 850, 918, 272, 132};
    int K = 42;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> sequence = {36, 754, 277, 940, 800, 897, 566, 163, 781, 130, 277, 480, 246, 304, 528, 785, 36, 185, 47, 772, 978, 134, 940, 500, 566, 553, 582, 791, 643, 277, 643, 742, 605, 921, 566, 643, 735, 134, 412, 819, 641, 447, 34, 84, 250, 340, 166, 196, 168, 927};
    int K = 40;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> sequence = {840, 276, 590, 452, 73, 330, 646, 633, 276, 972, 898, 285, 324, 888, 402, 118, 937, 498, 585, 330, 596, 378, 100, 56, 598, 385, 482, 710, 665, 264, 30, 646, 966, 482, 44, 119, 646, 616, 216, 472, 937, 385, 589, 633, 586, 727, 895, 779, 407, 48};
    int K = 46;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> sequence = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 501, 502, 503, 503, 505, 505, 506};
    int K = 40;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> sequence = {7, 5, 4, 5, 8, 3, 3, 3, 7, 2, 1, 9, 4, 5, 9, 10, 6, 6, 5, 2, 4, 2, 1, 3, 1, 2, 6, 5, 7, 6, 6, 9, 1, 4, 1, 4, 6, 9, 9, 7, 3, 1, 6, 7, 1, 6, 10, 9, 9, 9};
    int K = 46;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 412;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> sequence = {1, 2, 3, 4, 4, 5, 7, 7, 8};
    int K = 9;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> sequence = {1, 100};
    int K = 2;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> sequence = {1, 1000};
    int K = 2;
    Distincter* pObj = new Distincter();
    clock_t start = clock();
    int result = pObj->disperse(sequence, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8394868&rd=8082&pm=5951
********************************************************************************
#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <numeric>
#include <algorithm>
 
using namespace std;
 
typedef vector<int> vi;
 
#define For(i,a,b) for(int i=(a); i<=(b); i++)
#define Rep(i,n) for(int i=0; i<(n); i++)
#define Size(x) (int(x.size()))
#define Fil(a) memset(&a,0,sizeof(a))
#define All(v) (v).begin(),(v).end()
 
const int maxval=1200;
const int inf=1000000;
int dp[60][60][maxval+1];
 
struct Distincter
{
  int disperse(vi seq,int k)
  {
    int n=Size(seq);
    sort(All(seq));
    Rep(i,Size(seq)) seq[i]+=55;
    Rep(i,60) Rep(j,60) For(t,0,maxval) dp[i][j][t]=inf;
    For(i,0,maxval) 
    {
      dp[0][1][i]=abs(i-seq[0]);
      if(i>0) dp[0][1][i]<?=dp[0][1][i-1];
    }
    For(i,1,n-1) For(j,0,n) For(t,0,maxval)
    {
      dp[i][j][t]=inf;
      if(t>0 && j>0) dp[i][j][t]<?=abs(t-seq[i])+dp[i-1][j-1][t-1];
      dp[i][j][t]<?=abs(t-seq[i])+dp[i-1][j][t];
      if(t>0) dp[i][j][t]<?=dp[i][j][t-1];
    }
    int res=inf;
    For(j,k,n) For(t,0,maxval) res<?=dp[n-1][j][t];
    return res;
  }
};

********************************************************************************
*******************************************************************************/