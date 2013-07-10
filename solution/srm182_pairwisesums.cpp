/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=595
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

class PairwiseSums {
public:
    vector<int> reverse(vector<string> sums);
};

vector<int> PairwiseSums::reverse(vector<string> sums) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> sums = {"3 5 4 7 6 5"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> sums = {"0", "1000", "1000"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1000};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> sums = {"15 30 45 60"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> sums = {"5 6 7 9 10 11"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> sums = {"910 689 882 565 922 815 457 674 495 653 755 948", "631 988 881 523 740 561 719 727 410 767 660 302", "519 340 498 603 960 853 495 712 533 691 643 536", "178 395 216 374 893 535 752 573 731 428 645 466", "624 287 108 266 325 483 304"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 73, 143, 231, 252, 267, 393, 422, 460, 488, 500};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> sums = {"7 13 8 37 32 38 33 29 24 30 25 54 49 55 50 35 30", "36 31 60 55 61 56 52 47 53 48 77 72 78 73 8 3 32", "27 33 28 24 19 25 20 49 44 50 45 30 25 31 26 55 50", "56 51 47 42 48 43 72 67 73 68 9 38 33 39 34 30 25", "31 26 55 50 56 51 36 31 37 32 61 56 62 57 53 48 54", "49 78 73 79 74 33 28 34 29 25 20 26 21 50 45 51 46", "31 26 32 27 56 51 57 52 48 43 49 44 73 68 74 69 57", "63 58 54 49 55 50 79 74 80 75 60 55 61 56 85 80 86", "81 77 72 78 73 102 97 103 98 58 53 49 44 50 45 74", "69 75 70 55 50 56 51 80 75 81 76 72 67 73 68 97 92", "98 93 59 55 50 56 51 80 75 81 76 61 56 62 57 86 81", "87 82 78 73 79 74 103 98 104 99 50 45 51 46 75 70", "76 71 56 51 57 52 81 76 82 77 73 68 74 69 98 93 99", "94 41 47 42 71 66 72 67 52 47 53 48 77 72 78 73 69", "64 70 65 94 89 95 90 42 37 66 61 67 62 47 42 48 43", "72 67 73 68 64 59 65 60 89 84 90 85 43 72 67 73 68", "53 48 54 49 78 73 79 74 70 65 71 66 95 90 96 91 67", "62 68 63 48 43 49 44 73 68 74 69 65 60 66 61 90 85", "91 86 91 97 92 77 72 78 73 102 97 103 98 94 89 95", "90 119 114 120 115 92 87 72 67 73 68 97 92 98 93", "89 84 90 85 114 109 115 110 93 78 73 79 74 103 98", "104 99 95 90 96 91 120 115 121 116 73 68 74 69 98", "93 99 94 90 85 91 86 115 110 116 111 53 59 54 83", "78 84 79 75 70 76 71 100 95 101 96 54 49 78 73 79", "74 70 65 71 66 95 90 96 91 55 84 79 85 80 76 71 77", "72 101 96 102 97 79 74 80 75 71 66 72 67 96 91 97", "92 103 109 104 100 95 101 96 125 120 126 121 104", "99 95 90 96 91 120 115 121 116 105 101 96 102 97", "126 121 127 122 96 91 97 92 121 116 122 117 87 93", "88 117 112 118 113 88 83 112 107 113 108 89 118", "113 119 114 113 108 114 109 137 143 138 138 133", "139"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 6, 7, 18, 19, 23, 24, 24, 25, 26, 27, 29, 30, 31, 32, 41, 42, 43, 44, 46, 47, 48, 49, 49, 50, 54, 55, 66, 67, 71, 72};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> sums = {"10 45 37 37 29 64"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 9, 28, 36};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> sums = {"10 14 14 25 25 29 29 14 14 25 25 29 29 18 29 29 33", "33 29 29 33 33 40 44 44 44 44 48"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 9, 9, 20, 20, 24, 24};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> sums = {"5 15 18 29 32 42 45 18 21 32 35 45 48 31 42 45 55", "58 45 48 58 61 59 69 72 72 75 85"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 14, 17, 28, 31, 41, 44};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> sums = {"15 37 34 42 39 61 58 27 24 46 43 51 48 70 67 30 27", "49 46 54 51 73 70 39 36 58 55 63 60 82 79 34 31 39", "36 58 55 24 21 43 40 48 45 67 64 27 24 46 43 51 48", "70 67 36 33 55 52 60 57 79 76 53 61 58 80 77 46 43", "65 62 70 67 89 86 49 46 68 65 73 70 92 89 58 55 77", "74 82 79 101 98 58 55 77 74 43 40 62 59 67 64 86", "83 46 43 65 62 70 67 89 86 55 52 74 71 79 76 98 95", "63 85 82 51 48 70 67 75 72 94 91 54 51 73 70 78 75", "97 94 63 60 82 79 87 84 106 103 82 79 48 45 67 64", "72 69 91 88 51 48 70 67 75 72 94 91 60 57 79 76 84", "81 103 100 101 70 67 89 86 94 91 113 110 73 70 92", "89 97 94 116 113 82 79 101 98 106 103 125 122 67", "64 86 83 91 88 110 107 70 67 89 86 94 91 113 110", "79 76 98 95 103 100 122 119 33 55 52 60 57 79 76", "39 36 58 55 63 60 82 79 48 45 67 64 72 69 91 88 52", "49 57 54 76 73 36 33 55 52 60 57 79 76 45 42 64 61", "69 66 88 85 71 79 76 98 95 58 55 77 74 82 79 101", "98 67 64 86 83 91 88 110 107 76 73 95 92 55 52 74", "71 79 76 98 95 64 61 83 80 88 85 107 104 81 103", "100 63 60 82 79 87 84 106 103 72 69 91 88 96 93", "115 112 100 97 60 57 79 76 84 81 103 100 69 66 88", "85 93 90 112 109 119 82 79 101 98 106 103 125 122", "91 88 110 107 115 112 134 131 79 76 98 95 103 100", "122 119 88 85 107 104 112 109 131 128 39 61 58 66", "63 85 82 51 48 70 67 75 72 94 91 58 55 63 60 82 79", "48 45 67 64 72 69 91 88 77 85 82 104 101 70 67 89", "86 94 91 113 110 82 79 101 98 67 64 86 83 91 88", "110 107 87 109 106 75 72 94 91 99 96 118 115 106", "103 72 69 91 88 96 93 115 112 125 94 91 113 110", "118 115 137 134 91 88 110 107 115 112 134 131 57", "79 76 84 81 103 100 76 73 81 78 100 97 95 103 100", "122 119 100 97 119 116 105 127 124 124 121 143"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 9, 15, 18, 18, 21, 25, 27, 28, 30, 30, 33, 34, 37, 37, 39, 40, 42, 42, 45, 46, 49, 49, 51, 52, 54, 58, 61, 61, 64, 70, 73};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> sums = {"10 13 19 5 11 14 20 15 21 24 30 16 22 25 31 19 25", "11 17 20 26 21 27 30 36 22 28 31 37 28 14 20 23 29", "24 30 33 39 25 31 34 40 20 26 29 35 30 36 39 45 31", "37 40 46 12 15 21 16 22 25 31 17 23 26 32 21 27 22", "28 31 37 23 29 32 38 30 25 31 34 40 26 32 35 41 31", "37 40 46 32 38 41 47 32 35 41 27 33 36 42 41 47 33", "39 42 48 50 36 42 45 51 42 48 51 57 34 37 43 43 49", "52"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 8, 9, 11, 12, 13, 14, 17, 18, 19, 20, 22, 23, 28, 29};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> sums = {"4 14 12 21 19 29 27 27 25 35 33 42 40 50 48 27 25", "35 33 42 40 50 48 48 46 56 54 63 61 71 69 12 10 19", "17 27 25 25 23 33 31 40 38 48 46 25 23 33 31 40 38", "48 46 46 44 54 52 61 59 69 67 20 29 27 37 35 35 33", "43 41 50 48 58 56 35 33 43 41 50 48 58 56 56 54 64", "62 71 69 79 77 27 25 35 33 33 31 41 39 48 46 56 54", "33 31 41 39 48 46 56 54 54 52 62 60 69 67 77 75 34", "44 42 42 40 50 48 57 55 65 63 42 40 50 48 57 55 65", "63 63 61 71 69 78 76 86 84 42 40 40 38 48 46 55 53", "63 61 40 38 48 46 55 53 63 61 61 59 69 67 76 74 84", "82 50 50 48 58 56 65 63 73 71 50 48 58 56 65 63 73", "71 71 69 79 77 86 84 94 92 48 46 56 54 63 61 71 69", "48 46 56 54 63 61 71 69 69 67 77 75 84 82 92 90 46", "56 54 63 61 71 69 48 46 56 54 63 61 71 69 69 67 77", "75 84 82 92 90 54 52 61 59 69 67 46 44 54 52 61 59", "69 67 67 65 75 73 82 80 90 88 62 71 69 79 77 56 54", "64 62 71 69 79 77 77 75 85 83 92 90 100 98 69 67", "77 75 54 52 62 60 69 67 77 75 75 73 83 81 90 88 98", "96 76 86 84 63 61 71 69 78 76 86 84 84 82 92 90 99", "97 107 105 84 82 61 59 69 67 76 74 84 82 82 80 90", "88 97 95 105 103 92 71 69 79 77 86 84 94 92 92 90", "100 98 107 105 115 113 69 67 77 75 84 82 92 90 90", "88 98 96 105 103 113 111 46 56 54 63 61 71 69 69", "67 77 75 84 82 92 90 54 52 61 59 69 67 67 65 75 73", "82 80 90 88 62 71 69 79 77 77 75 85 83 92 90 100", "98 69 67 77 75 75 73 83 81 90 88 98 96 76 86 84 84", "82 92 90 99 97 107 105 84 82 82 80 90 88 97 95 105", "103 92 92 90 100 98 107 105 115 113 90 88 98 96", "105 103 113 111 88 98 96 105 103 113 111 96 94 103", "101 111 109 104 113 111 121 119 111 109 119 117", "118 128 126 126 124 134"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 9, 11, 16, 18, 22, 22, 24, 24, 24, 26, 30, 30, 32, 32, 37, 37, 39, 39, 43, 45, 45, 45, 47, 47, 51, 53, 58, 60, 66, 68};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> sums = {"10 36 34 22 20 46 44 36 34 60 58 46 44 70 68 34 32", "20 18 44 42 34 32 58 56 44 42 68 66 58 46 44 70 68", "60 58 84 82 70 68 94 92 44 42 68 66 58 56 82 80 68", "66 92 90 30 56 54 46 44 70 68 56 54 80 78 54 52 44", "42 68 66 54 52 78 76 78 70 68 94 92 80 78 104 102", "68 66 92 90 78 76 102 100 58 84 82 70 68 94 92 82", "80 68 66 92 90 106 94 92 118 116 92 90 116 114 78", "104 102 102 100 126"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 6, 14, 16, 28, 28, 30, 30, 38, 38, 40, 40, 52, 54, 62, 64};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> sums = {"3 29 28 7 6 32 31 19 18 44 43 22 21 47 46 28 27 6", "5 31 30 18 17 43 42 21 20 46 45 53 32 31 57 56 44", "43 69 68 47 46 72 71 31 30 56 55 43 42 68 67 46 45", "71 70 9 35 34 22 21 47 46 25 24 50 49 34 33 21 20", "46 45 24 23 49 48 59 47 46 72 71 50 49 75 74 46 45", "71 70 49 48 74 73 33 59 58 37 36 62 61 58 57 36 35", "61 60 83 62 61 87 86 61 60 86 85 39 65 64 64 63 89"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 5, 16, 17, 19, 20, 26, 27, 29, 30, 41, 42, 44, 45};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> sums = {"346 359 302 372 176 329 91 123 376 412 157 423 198", "158 145 151 278 77 53 524 115 490 199 613 556 626", "430 583 345 377 630 666 411 677 452 412 399 405", "532 331 307 778 369 744 453 569 639 443 596 358", "390 643 679 424 690 465 425 412 418 545 344 320", "791 382 757 466 582 386 539 301 333 586 622 367", "633 408 368 355 361 488 287 263 734 325 700 409", "456 609 371 403 656 692 437 703 478 438 425 431", "558 357 333 804 395 770 479 413 175 207 460 496", "241 507 282 242 229 235 362 161 137 608 199 574", "283 328 360 613 649 394 660 435 395 382 388 515", "314 290 761 352 727 436 122 375 411 156 422 197", "157 144 150 277 76 52 523 114 489 198 407 443 188", "454 229 189 176 182 309 108 84 555 146 521 230 696", "441 707 482 442 429 435 562 361 337 808 399 774", "483 477 743 518 478 465 471 598 397 373 844 435", "810 519 488 263 223 210 216 343 142 118 589 180", "555 264 529 489 476 482 609 408 384 855 446 821", "530 264 251 257 384 183 159 630 221 596 305 211", "217 344 143 119 590 181 556 265 204 331 130 106", "577 168 543 252 337 136 112 583 174 549 258 263", "239 710 301 676 385 38 509 100 475 184 485 76 451", "160 547 922 631 513 222 597"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 31, 45, 46, 69, 77, 99, 105, 111, 112, 130, 152, 153, 232, 256, 283, 300, 313, 326, 330, 366, 377, 444, 478};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> sums = {"128 201 260 303 122 256 525 147 434 97 156 199 18", "152 421 43 330 229 272 91 225 494 116 403 331 150", "284 553 175 462 193 327 596 218 505 146 415 37 324", "549 171 458 440 727 349"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 12, 31, 85, 116, 140, 144, 187, 318, 409};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> sums = {"775 612 507 925 637 531 732 798 886 657 815 930", "555 811 768 604 598 489 803 833 784 715 589 648", "631 825 694 853 486 784 433 328 746 458 352 553", "619 707 478 636 751 376 632 589 425 419 310 624", "654 605 536 410 469 452 646 515 674 307 605 165", "583 295 189 390 456 544 315 473 588 213 469 426", "262 256 147 461 491 442 373 247 306 289 483 352", "511 144 442 478 190 84 285 351 439 210 368 483 108", "364 321 157 151 42 356 386 337 268 142 201 184 378", "247 406 39 337 608 502 703 769 857 628 786 901 526", "782 739 575 569 460 774 804 755 686 560 619 602", "796 665 824 457 755 214 415 481 569 340 498 613", "238 494 451 287 281 172 486 516 467 398 272 331", "314 508 377 536 169 467 309 375 463 234 392 507", "132 388 345 181 175 66 380 410 361 292 166 225 208", "402 271 430 63 361 576 664 435 593 708 333 589 546", "382 376 267 581 611 562 493 367 426 409 603 472", "631 264 562 730 501 659 774 399 655 612 448 442", "333 647 677 628 559 433 492 475 669 538 697 330", "628 589 747 862 487 743 700 536 530 421 735 765", "716 647 521 580 563 757 626 785 418 716 518 633", "258 514 471 307 301 192 506 536 487 418 292 351", "334 528 397 556 189 487 791 416 672 629 465 459", "350 664 694 645 576 450 509 492 686 555 714 347", "645 531 787 744 580 574 465 779 809 760 691 565", "624 607 801 670 829 462 760 412 369 205 199 90 404", "434 385 316 190 249 232 426 295 454 87 385 625 461", "455 346 660 690 641 572 446 505 488 682 551 710", "343 641 418 412 303 617 647 598 529 403 462 445", "639 508 667 300 598 248 139 453 483 434 365 239", "298 281 475 344 503 136 434 133 447 477 428 359", "233 292 275 469 338 497 130 428 338 368 319 250", "124 183 166 360 229 388 21 319 682 633 564 438 497", "480 674 543 702 335 633 663 594 468 527 510 704", "573 732 365 663 545 419 478 461 655 524 683 316", "614 350 409 392 586 455 614 247 545 283 266 460", "329 488 121 419 325 519 388 547 180 478 502 371", "530 163 461 565 724 357 655 593 226 524 385 683", "316"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 12, 30, 54, 78, 112, 121, 127, 135, 154, 160, 171, 180, 217, 238, 255, 291, 298, 307, 307, 321, 326, 334, 338, 348, 356, 376, 409, 448, 453, 477};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> sums = {"628 554 339 506 552 671 608 482 354 345 515 435", "561 753 528 742 458 542 424 635 406 706 758 615", "665 417 402 630 430 732 507 524 535 610 395 562", "608 727 664 538 410 401 571 491 617 809 584 798", "514 598 480 691 462 762 814 671 721 473 458 686", "486 788 563 580 591 321 488 534 653 590 464 336", "327 497 417 543 735 510 724 440 524 406 617 388", "688 740 597 647 399 384 612 412 714 489 506 517", "273 319 438 375 249 121 112 282 202 328 520 295", "509 225 309 191 402 173 473 525 382 432 184 169", "397 197 499 274 291 302 486 605 542 416 288 279", "449 369 495 687 462 676 392 476 358 569 340 640", "692 549 599 351 336 564 364 666 441 458 469 651", "588 462 334 325 495 415 541 733 508 722 438 522", "404 615 386 686 738 595 645 397 382 610 410 712", "487 504 515 707 581 453 444 614 534 660 852 627", "841 557 641 523 734 505 805 857 714 764 516 501", "729 529 831 606 623 634 518 390 381 551 471 597", "789 564 778 494 578 460 671 442 742 794 651 701", "453 438 666 466 768 543 560 571 264 255 425 345", "471 663 438 652 368 452 334 545 316 616 668 525", "575 327 312 540 340 642 417 434 445 127 297 217", "343 535 310 524 240 324 206 417 188 488 540 397", "447 199 184 412 212 514 289 306 317 288 208 334", "526 301 515 231 315 197 408 179 479 531 388 438", "190 175 403 203 505 280 297 308 378 504 696 471", "685 401 485 367 578 349 649 701 558 608 360 345", "573 373 675 450 467 478 424 616 391 605 321 405", "287 498 269 569 621 478 528 280 265 493 293 595", "370 387 398 742 517 731 447 531 413 624 395 695", "747 604 654 406 391 619 419 721 496 513 524 709", "923 639 723 605 816 587 887 939 796 846 598 583", "811 611 913 688 705 716 698 414 498 380 591 362", "662 714 571 621 373 358 586 386 688 463 480 491", "628 712 594 805 576 876 928 785 835 587 572 800", "600 902 677 694 705 428 310 521 292 592 644 501", "551 303 288 516 316 618 393 410 421 394 605 376", "676 728 585 635 387 372 600 400 702 477 494 505", "487 258 558 610 467 517 269 254 482 282 584 359", "376 387 469 769 821 678 728 480 465 693 493 795", "570 587 598 540 592 449 499 251 236 464 264 566", "341 358 369 892 749 799 551 536 764 564 866 641", "658 669 801 851 603 588 816 616 918 693 710 721", "708 460 445 673 473 775 550 567 578 510 495 723", "523 825 600 617 628 247 475 275 577 352 369 380", "460 260 562 337 354 365 488 790 565 582 593 590", "365 382 393 667 684 695 459 470 487"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {53, 59, 68, 116, 120, 131, 138, 144, 149, 172, 196, 220, 221, 229, 238, 242, 249, 256, 266, 268, 275, 286, 322, 329, 342, 344, 349, 379, 385, 420, 446, 456, 467, 472};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> sums = {"403 384 324 383 230 387 258 553 401 485 425 484", "331 488 359 654 502 406 465 312 469 340 635 483", "405 252 409 280 575 423 311 468 339 634 482 315", "186 481 329 343 638 486 509 357 652"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {79, 107, 151, 173, 232, 233, 236, 250, 252, 402};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> sums = {"364 516 504 797 646 688 733 520 819 415 489 408", "778 393 804 769 641 403 685 768 162 150 443 292", "334 379 166 465 61 135 54 424 39 450 415 287 49", "331 414 302 595 444 486 531 318 617 213 287 206", "576 191 602 567 439 201 483 566 583 432 474 519", "306 605 201 275 194 564 179 590 555 427 189 471", "554 725 767 812 599 898 494 568 487 857 472 883", "848 720 482 764 847 616 661 448 747 343 417 336", "706 321 732 697 569 331 613 696 703 490 789 385", "459 378 748 363 774 739 611 373 655 738 535 834", "430 504 423 793 408 819 784 656 418 700 783 621", "217 291 210 580 195 606 571 443 205 487 570 516", "590 509 879 494 905 870 742 504 786 869 186 105", "475 90 501 466 338 100 382 465 179 549 164 575 540", "412 174 456 539 468 83 494 459 331 93 375 458 453", "864 829 701 463 745 828 479 444 316 78 360 443 855", "727 489 771 854 692 454 736 819 326 608 691 370", "453 735"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 34, 44, 49, 56, 130, 145, 157, 161, 282, 287, 326, 329, 359, 374, 409, 410, 419, 438, 445, 460};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> sums = {"231 367 614 560 488 682 568 541 390 301 654 688", "506 471 526 626 444 671 587 363 272 656 434 265", "668 335 286 596 142 389 335 263 457 343 316 165 76", "429 463 281 246 301 401 219 446 362 138 47 431 209", "40 443 110 61 371 525 471 399 593 479 452 301 212", "565 599 417 382 437 537 355 582 498 274 183 567", "345 176 579 246 197 507 718 646 840 726 699 548", "459 812 846 664 629 684 784 602 829 745 521 430", "814 592 423 826 493 444 754 592 786 672 645 494", "405 758 792 610 575 630 730 548 775 691 467 376", "760 538 369 772 439 390 700 714 600 573 422 333", "686 720 538 503 558 658 476 703 619 395 304 688", "466 297 700 367 318 628 794 767 616 527 880 914", "732 697 752 852 670 897 813 589 498 882 660 491", "894 561 512 822 653 502 413 766 800 618 583 638", "738 556 783 699 475 384 768 546 377 780 447 398", "708 475 386 739 773 591 556 611 711 529 756 672", "448 357 741 519 350 753 420 371 681 235 588 622", "440 405 460 560 378 605 521 297 206 590 368 199", "602 269 220 530 499 533 351 316 371 471 289 516", "432 208 117 501 279 110 513 180 131 441 886 704", "669 724 824 642 869 785 561 470 854 632 463 866", "533 484 794 738 703 758 858 676 903 819 595 504", "888 666 497 900 567 518 828 521 576 676 494 721", "637 413 322 706 484 315 718 385 336 646 541 641", "459 686 602 378 287 671 449 280 683 350 301 611", "696 514 741 657 433 342 726 504 335 738 405 356", "666 614 841 757 533 442 826 604 435 838 505 456", "766 659 575 351 260 644 422 253 656 323 274 584", "802 578 487 871 649 480 883 550 501 811 494 403", "787 565 396 799 466 417 727 179 563 341 172 575", "242 193 503 472 250 81 484 151 102 412 634 465 868", "535 486 796 243 646 313 264 574 477 144 95 405 547", "498 808 165 475 426"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 37, 44, 58, 73, 107, 135, 139, 162, 206, 216, 228, 243, 260, 278, 298, 313, 332, 340, 359, 368, 386, 398, 426, 428, 440, 443, 454, 460};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> sums = {"386 312 468 527 30 460 139 76 466 66 90 395 35 151", "352 377 347 263 415 638 794 853 356 786 465 402", "792 392 416 721 361 477 678 703 673 589 741 720", "779 282 712 391 328 718 318 342 647 287 403 604", "629 599 515 667 935 438 868 547 484 874 474 498", "803 443 559 760 785 755 671 823 497 927 606 543", "933 533 557 862 502 618 819 844 814 730 882 430", "109 46 436 36 60 365 5 121 322 347 317 233 385 539", "476 866 466 490 795 435 551 752 777 747 663 815", "155 545 145 169 474 114 230 431 456 426 342 494", "482 82 106 411 51 167 368 393 363 279 431 472 496", "801 441 557 758 783 753 669 821 96 401 41 157 358", "383 353 269 421 425 65 181 382 407 377 293 445 370", "486 687 712 682 598 750 126 327 352 322 238 390", "443 468 438 354 506 669 639 555 707 664 580 732", "550 702 618"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 30, 36, 46, 60, 109, 121, 233, 282, 317, 322, 347, 356, 365, 385, 430, 436, 438, 497};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> sums = {"414 280 276 178 547 235 484 456 145 243 246 195", "183 344 328 428 424 326 695 383 632 604 293 391", "394 343 331 492 476 290 192 561 249 498 470 159", "257 260 209 197 358 342 188 557 245 494 466 155", "253 256 205 193 354 338 459 147 396 368 57 155 158", "107 95 256 240 516 765 737 426 524 527 476 464 625", "609 453 425 114 212 215 164 152 313 297 674 363", "461 464 413 401 562 546 335 433 436 385 373 534", "518 122 125 74 62 223 207 223 172 160 321 305 175", "163 324 308 112 273 257 261 245 406"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 45, 50, 62, 102, 110, 113, 133, 143, 147, 195, 211, 281, 323, 351, 414};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> sums = {"202 148 446 561 194 106 451 351 572 246 173 412", "250 465 182 480 595 228 140 485 385 606 280 207", "446 284 499 426 541 174 86 431 331 552 226 153 392", "230 445 839 472 384 729 629 850 524 451 690 528", "743 587 499 844 744 965 639 566 805 643 858 132", "477 377 598 272 199 438 276 491 389 289 510 184", "111 350 188 403 634 855 529 456 695 533 748 755", "429 356 595 433 648 650 577 816 654 869 251 490", "328 543 417 255 470 494 709 547"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 64, 84, 89, 110, 118, 162, 166, 267, 328, 362, 367, 381, 477, 488};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> sums = {"444 197 614 420 324 434 518 624 689 238 425 405", "453 276 340 484 493 564 556 247 664 470 374 484", "568 674 739 288 475 455 503 326 390 534 543 614", "606 417 223 127 237 321 427 492 41 228 208 256 79", "143 287 296 367 359 640 544 654 738 844 909 458", "645 625 673 496 560 704 713 784 776 350 460 544", "650 715 264 451 431 479 302 366 510 519 590 582", "364 448 554 619 168 355 335 383 206 270 414 423", "494 486 558 664 729 278 465 445 493 316 380 524", "533 604 596 748 813 362 549 529 577 400 464 608", "617 688 680 919 468 655 635 683 506 570 714 723", "794 786 533 720 700 748 571 635 779 788 859 851", "269 249 297 120 184 328 337 408 400 436 484 307", "371 515 524 595 587 464 287 351 495 504 575 567", "335 399 543 552 623 615 222 366 375 446 438 430", "439 510 502 583 654 646 663 655 726"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 41, 79, 127, 143, 197, 208, 223, 228, 237, 247, 256, 287, 296, 321, 359, 367, 417, 427, 492};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> sums = {"347 385 86 225 268 438 253 424 38 114 486 674 375", "514 557 727 542 713 327 403 775 413 552 595 765", "580 751 365 441 813 253 296 466 281 452 66 142 514", "435 605 420 591 205 281 653 648 463 634 248 324", "696 633 804 418 494 866 619 233 309 681 404 480", "852 94 466 542"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 29, 57, 85, 196, 224, 239, 318, 356, 395, 409, 457};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> sums = {"591 973 581 877 724 925 512 670 722 881 537 706", "941 791 490 646 634 911 796 929 626 615 556 795", "786 762 544 590 198 494 341 542 129 287 339 498", "154 323 558 408 107 263 251 528 413 546 243 232", "173 412 403 379 161 580 876 723 924 511 669 721", "880 536 705 940 790 489 645 633 910 795 928 625", "614 555 794 785 761 543 484 331 532 119 277 329", "488 144 313 548 398 97 253 241 518 403 536 233 222", "163 402 393 369 151 627 828 415 573 625 784 440", "609 844 694 393 549 537 814 699 832 529 518 459", "698 689 665 447 675 262 420 472 631 287 456 691", "541 240 396 384 661 546 679 376 365 306 545 536", "512 294 463 621 673 832 488 657 892 742 441 597", "585 862 747 880 577 566 507 746 737 713 495 208", "260 419 75 244 479 329 28 184 172 449 334 467 164", "153 94 333 324 300 82 418 577 233 402 637 487 186", "342 330 607 492 625 322 311 252 491 482 458 240", "629 285 454 689 539 238 394 382 659 544 677 374", "363 304 543 534 510 292 444 613 848 698 397 553", "541 818 703 836 533 522 463 702 693 669 451 269", "504 354 53 209 197 474 359 492 189 178 119 358 349", "325 107 673 523 222 378 366 643 528 661 358 347", "288 527 518 494 276 758 457 613 601 878 763 896", "593 582 523 762 753 729 511 307 463 451 728 613", "746 443 432 373 612 603 579 361 162 150 427 312", "445 142 131 72 311 302 278 60 306 583 468 601 298", "287 228 467 458 434 216 571 456 589 286 275 216", "455 446 422 204 733 866 563 552 493 732 723 699", "481 751 448 437 378 617 608 584 366 581 570 511", "750 741 717 499 267 208 447 438 414 196 197 436", "427 403 185 377 368 344 126 607 583 365 574 356", "332"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 25, 50, 57, 69, 94, 104, 128, 139, 147, 159, 183, 219, 235, 237, 275, 299, 304, 308, 309, 390, 394, 424, 438, 442, 454, 486, 487};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> sums = {"543 473 272 430 68 239 442 508 79 449 166 538 88", "487 268 371 346 451 152 435 369 910 709 867 505", "676 879 945 516 886 603 975 525 924 705 808 783", "888 589 872 806 639 797 435 606 809 875 446 816", "533 905 455 854 635 738 713 818 519 802 736 596", "234 405 608 674 245 615 332 704 254 653 434 537", "512 617 318 601 535 392 563 766 832 403 773 490", "862 412 811 592 695 670 775 476 759 693 201 404", "470 41 411 128 500 50 449 230 333 308 413 114 397", "331 575 641 212 582 299 671 221 620 401 504 479", "584 285 568 502 844 415 785 502 874 424 823 604", "707 682 787 488 771 705 481 851 568 940 490 889", "670 773 748 853 554 837 771 422 139 511 61 460 241", "344 319 424 125 408 342 509 881 431 830 611 714", "689 794 495 778 712 598 148 547 328 431 406 511", "212 495 429 520 919 700 803 778 883 584 867 801", "469 250 353 328 433 134 417 351 649 752 727 832", "533 816 750 533 508 613 314 597 531 611 716 417", "700 634 691 392 675 609 497 780 714 481 415 698"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 26, 35, 53, 99, 113, 186, 215, 219, 293, 316, 318, 377, 382, 389, 396, 398, 420, 434, 455, 485, 490};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> sums = {"244 573 499 368 429 146 326 464 254 316 442 531", "408 468 612 543 469 338 399 116 296 434 224 286", "412 501 378 438 582 798 667 728 445 625 763 553", "615 741 830 707 767 911 593 654 371 551 689 479", "541 667 756 633 693 837 523 240 420 558 348 410", "536 625 502 562 706 301 481 619 409 471 597 686", "563 623 767 198 336 126 188 314 403 280 340 484", "516 306 368 494 583 460 520 664 444 506 632 721", "598 658 802 296 422 511 388 448 592 484 573 450", "510 654 699 576 636 780 665 725 869 602 746 806"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 107, 117, 137, 179, 189, 231, 271, 292, 305, 327, 331, 362, 394, 436, 475};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> sums = {"494 796 855 509 633 508 864 443 731 642 791 850", "447 714 850 534 760 836 822 555 552 611 265 389", "264 620 199 487 398 547 606 203 470 606 290 516", "592 578 311 913 567 691 566 922 501 789 700 849", "908 505 772 908 592 818 894 880 613 626 750 625", "981 560 848 759 908 967 564 831 967 651 877 953", "939 672 404 279 635 214 502 413 562 621 218 485", "621 305 531 607 593 326 403 759 338 626 537 686", "745 342 609 745 429 655 731 717 450 634 213 501", "412 561 620 217 484 620 304 530 606 592 325 569", "857 768 917 976 573 840 976 660 886 962 948 681", "436 347 496 555 152 419 555 239 465 541 527 260", "635 784 843 440 707 843 527 753 829 815 548 695", "754 351 618 754 438 664 740 726 459 903 500 767", "903 587 813 889 875 608 559 826 962 646 872 948", "934 667 423 559 243 469 545 531 264 826 510 736", "812 798 531 646 872 948 934 667 556 632 618 351", "858 844 577 920 653 639"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {74, 78, 125, 139, 140, 165, 186, 264, 273, 345, 362, 369, 391, 422, 427, 453, 467, 481, 481, 486, 495};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> sums = {"590 593 580 717 505 306 369 640 612 611 339 300", "248 350 631 508 535 296 291 285 660 344 747 734", "871 659 460 523 794 766 765 493 454 402 504 785", "662 689 450 445 439 814 498 737 874 662 463 526", "797 769 768 496 457 405 507 788 665 692 453 448", "442 817 501 861 649 450 513 784 756 755 483 444", "392 494 775 652 679 440 435 429 804 488 786 587", "650 921 893 892 620 581 529 631 912 789 816 577", "572 566 941 625 375 438 709 681 680 408 369 317", "419 700 577 604 365 360 354 729 413 239 510 482", "481 209 170 118 220 501 378 405 166 161 155 530", "214 573 545 544 272 233 181 283 564 441 468 229", "224 218 593 277 816 815 543 504 452 554 835 712", "739 500 495 489 864 548 787 515 476 424 526 807", "684 711 472 467 461 836 520 514 475 423 525 806", "683 710 471 466 460 835 519 203 151 253 534 411", "438 199 194 188 563 247 112 214 495 372 399 160", "155 149 524 208 162 443 320 347 108 103 97 472 156", "545 422 449 210 205 199 574 258 703 730 491 486", "480 855 539 607 368 363 357 732 416 395 390 384", "759 443 151 145 520 204 140 515 199 509 193 568"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 67, 73, 78, 82, 88, 121, 126, 132, 151, 218, 287, 290, 317, 362, 372, 375, 393, 394, 413, 422, 442, 499};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> sums = {"396 257 382 443 518 68 186 487 486 462 351 283 275", "420 428 405 226 481 380 494 83 182 46 423 291 224", "470 384 74 296 231 442 603 728 789 864 414 532 833", "832 808 697 629 621 766 774 751 572 827 726 840", "429 528 392 769 637 570 816 730 420 642 577 788", "589 650 725 275 393 694 693 669 558 490 482 627", "635 612 433 688 587 701 290 389 253 630 498 431", "677 591 281 503 438 649 775 850 400 518 819 818", "794 683 615 607 752 760 737 558 813 712 826 415", "514 378 755 623 556 802 716 406 628 563 774 911", "461 579 880 879 855 744 676 668 813 821 798 619", "874 773 887 476 575 439 816 684 617 863 777 467", "689 624 835 536 654 955 954 930 819 751 743 888", "896 873 694 949 848 962 551 650 514 891 759 692", "938 852 542 764 699 910 204 505 504 480 369 301", "293 438 446 423 244 499 398 512 101 200 64 441 309", "242 488 402 92 314 249 460 623 622 598 487 419 411", "556 564 541 362 617 516 630 219 318 182 559 427", "360 606 520 210 432 367 578 923 899 788 720 712", "857 865 842 663 918 817 931 520 619 483 860 728", "661 907 821 511 733 668 879 898 787 719 711 856", "864 841 662 917 816 930 519 618 482 859 727 660", "906 820 510 732 667 878 763 695 687 832 840 817", "638 893 792 906 495 594 458 835 703 636 882 796", "486 708 643 854 584 576 721 729 706 527 782 681", "795 384 483 347 724 592 525 771 685 375 597 532", "743 508 653 661 638 459 714 613 727 316 415 279", "656 524 457 703 617 307 529 464 675 645 653 630", "451 706 605 719 308 407 271 648 516 449 695 609", "299 521 456 667 798 775 596 851 750 864 453 552", "416 793 661 594 840 754 444 666 601 812 783 604", "859 758 872 461 560 424 801 669 602 848 762 452", "674 609 820 581 836 735 849 438 537 401 778 646", "579 825 739 429 651 586 797 657 556 670 259 358", "222 599 467 400 646 560 250 472 407 618 811 925", "514 613 477 854 722 655 901 815 505 727 662 873", "824 413 512 376 753 621 554 800 714 404 626 561", "772 527 626 490 867 735 668 914 828 518 740 675", "886 215 79 456 324 257 503 417 107 329 264 475 178", "555 423 356 602 516 206 428 363 574 419 287 220", "466 380 70 292 227 438 664 597 843 757 447 669 604", "815 465 711 625 315 537 472 683 644 558 248 470", "405 616 804 494 716 651 862 408 630 565 776 320", "255 466 477 688 623"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 25, 43, 49, 58, 157, 161, 199, 201, 206, 232, 250, 258, 266, 271, 326, 355, 357, 359, 371, 380, 395, 398, 403, 417, 418, 437, 445, 456, 461, 462, 469, 493};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> sums = {"395 638 695 439 399 374 336 676 560 726 458 268", "543 600 344 304 279 241 581 465 631 363 173 843", "587 547 522 484 824 708 874 606 416 644 604 579", "541 881 765 931 663 473 348 323 285 625 509 675", "407 217 283 245 585 469 635 367 177 220 560 444", "610 342 152 522 406 572 304 114 746 912 644 454", "796 528 338 694 504 236"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 91, 129, 150, 154, 194, 213, 245, 315, 393, 431, 450, 481};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> sums = {"557 94 213 424 552 269 422 463 348 415 538 460 309", "222 420 301 135 249 134 300 94 325 573 414 186 94", "463 582 793 921 638 791 832 717 784 907 829 678", "591 789 670 504 618 503 669 463 694 942 783 555", "463 119 330 458 175 328 369 254 321 444 366 215", "128 326 207 41 155 40 206 0 231 479 320 92 0 449", "577 294 447 488 373 440 563 485 334 247 445 326", "160 274 159 325 119 350 598 439 211 119 788 505", "658 699 584 651 774 696 545 458 656 537 371 485", "370 536 330 561 809 650 422 330 633 786 827 712", "779 902 824 673 586 784 665 499 613 498 664 458", "689 937 778 550 458 503 544 429 496 619 541 390", "303 501 382 216 330 215 381 175 406 654 495 267", "175 697 582 649 772 694 543 456 654 535 369 483", "368 534 328 559 807 648 420 328 623 690 813 735", "584 497 695 576 410 524 409 575 369 600 848 689", "461 369 575 698 620 469 382 580 461 295 409 294", "460 254 485 733 574 346 254 765 687 536 449 647", "528 362 476 361 527 321 552 800 641 413 321 810", "659 572 770 651 485 599 484 650 444 675 923 764", "536 444 581 494 692 573 407 521 406 572 366 597", "845 686 458 366 343 541 422 256 370 255 421 215", "446 694 535 307 215 454 335 169 283 168 334 128", "359 607 448 220 128 533 367 481 366 532 326 557", "805 646 418 326 248 362 247 413 207 438 686 527", "299 207 196 81 247 41 272 520 361 133 41 195 361", "155 386 634 475 247 155 246 40 271 519 360 132 40", "206 437 685 526 298 206 231 479 320 92 0 710 551", "323 231 799 571 479 412 320 92"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 40, 41, 92, 94, 119, 128, 155, 175, 206, 207, 215, 231, 254, 320, 321, 326, 328, 330, 366, 369, 444, 458, 463, 479};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> sums = {"392 278 612 403 603 693 365 257 398 620 260 594", "385 585 675 347 239 380 602 480 271 471 561 233", "125 266 488 605 805 895 567 459 600 822 596 686", "358 250 391 613 886 558 450 591 813 648 540 681", "903 212 353 575 245 467 608"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {52, 73, 160, 187, 193, 198, 205, 398, 407, 415, 488};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> sums = {"520 843 988 943 983 676 820 972 762 928 747 811", "897 511 677 519 613 800 595 607 754 905 518 714", "554 888 673 661 806 865 509 371 516 471 511 204", "348 500 290 456 275 339 425 39 205 47 141 328 123", "135 282 433 46 242 82 416 201 189 334 393 37 839", "794 834 527 671 823 613 779 598 662 748 362 528", "370 464 651 446 458 605 756 369 565 405 739 524", "512 657 716 360 939 979 672 816 968 758 924 743", "807 893 507 673 515 609 796 591 603 750 901 514", "710 550 884 669 657 802 861 505 934 627 771 923", "713 879 698 762 848 462 628 470 564 751 546 558", "705 856 469 665 505 839 624 612 757 816 460 667", "811 963 753 919 738 802 888 502 668 510 604 791", "586 598 745 896 509 705 545 879 664 652 797 856", "500 504 656 446 612 431 495 581 195 361 203 297", "484 279 291 438 589 202 398 238 572 357 345 490", "549 193 800 590 756 575 639 725 339 505 347 441", "628 423 435 582 733 346 542 382 716 501 489 634", "693 337 742 908 727 791 877 491 657 499 593 780", "575 587 734 885 498 694 534 868 653 641 786 845", "489 698 517 581 667 281 447 289 383 570 365 377", "524 675 288 484 324 658 443 431 576 635 279 683", "747 833 447 613 455 549 736 531 543 690 841 454", "650 490 824 609 597 742 801 445 566 652 266 432", "274 368 555 350 362 509 660 273 469 309 643 428", "416 561 620 264 716 330 496 338 432 619 414 426", "573 724 337 533 373 707 492 480 625 684 328 416", "582 424 518 705 500 512 659 810 423 619 459 793", "578 566 711 770 414 196 38 132 319 114 126 273 424", "37 233 73 407 192 180 325 384 28 204 298 485 280", "292 439 590 203 399 239 573 358 346 491 550 194", "140 327 122 134 281 432 45 241 81 415 200 188 333", "392 36 421 216 228 375 526 139 335 175 509 294 282", "427 486 130 403 415 562 713 326 522 362 696 481", "469 614 673 317 210 357 508 121 317 157 491 276", "264 409 468 112 369 520 133 329 169 503 288 276", "421 480 124 667 280 476 316 650 435 423 568 627", "271 431 627 467 801 586 574 719 778 422 240 80 414", "199 187 332 391 35 276 610 395 383 528 587 231 450", "235 223 368 427 71 569 557 702 761 405 342 487 546", "190 475 534 178 679 323 382"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 15, 22, 23, 24, 58, 99, 111, 117, 165, 177, 180, 181, 218, 251, 258, 266, 304, 310, 315, 324, 347, 369, 392, 401, 409, 432, 447, 476, 487, 492, 496};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> sums = {"545 718 757 544 494 383 722 759 532 605 644 431", "381 270 609 646 419 817 604 554 443 782 819 592", "643 593 482 821 858 631 380 269 608 645 418 219", "558 595 368 447 484 257 823 596 633"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {54, 165, 203, 215, 216, 329, 389, 393, 428, 430};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> sums = {"233 145 447 269 336 145 608 537 602 193 295 411", "375 559 510 215 466 230 303 498 373 528 503 168", "433 492 601 149 148 450 272 339 148 611 540 605", "196 298 414 378 562 513 218 469 233 306 501 376", "531 506 171 436 495 604 152 362 184 251 60 523 452", "517 108 210 326 290 474 425 130 381 145 218 413", "288 443 418 83 348 407 516 64 486 553 362 825 754", "819 410 512 628 592 776 727 432 683 447 520 715", "590 745 720 385 650 709 818 366 375 184 647 576", "641 232 334 450 414 598 549 254 505 269 342 537", "412 567 542 207 472 531 640 188 251 714 643 708", "299 401 517 481 665 616 321 572 336 409 604 479", "634 609 274 539 598 707 255 523 452 517 108 210", "326 290 474 425 130 381 145 218 413 288 443 418 83", "348 407 516 64 915 980 571 673 789 753 937 888 593", "844 608 681 876 751 906 881 546 811 870 979 527", "909 500 602 718 682 866 817 522 773 537 610 805", "680 835 810 475 740 799 908 456 565 667 783 747", "931 882 587 838 602 675 870 745 900 875 540 805", "864 973 521 258 374 338 522 473 178 429 193 266", "461 336 491 466 131 396 455 564 112 476 440 624", "575 280 531 295 368 563 438 593 568 233 498 557", "666 214 556 740 691 396 647 411 484 679 554 709", "684 349 614 673 782 330 704 655 360 611 375 448", "643 518 673 648 313 578 637 746 294 839 544 795", "559 632 827 702 857 832 497 762 821 930 478 495", "746 510 583 778 653 808 783 448 713 772 881 429", "451 215 288 483 358 513 488 153 418 477 586 134", "466 539 734 609 764 739 404 669 728 837 385 303", "498 373 528 503 168 433 492 601 149 571 446 601", "576 241 506 565 674 222 641 796 771 436 701 760", "869 417 671 646 311 576 635 744 292 801 466 731", "790 899 447 441 706 765 874 422 371 430 539 87 695", "804 352 863 411 520"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 30, 34, 53, 78, 100, 115, 115, 118, 154, 180, 188, 221, 258, 260, 296, 318, 332, 351, 377, 383, 388, 395, 413, 422, 444, 486, 487, 493};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> sums = {"549 923 897 554 515 570 617 504 503 545 504 536", "466 578 833 649 670 837 492 773 779 697 456 921", "716 767 541 461 648 464 485 467 769 598 572 229", "190 245 292 179 178 220 179 211 141 253 508 324", "345 512 167 448 454 372 131 596 391 442 216 136", "323 139 160 142 444 946 603 564 619 666 553 552", "594 553 585 515 627 882 698 719 886 541 822 828", "746 505 970 765 816 590 510 697 513 534 516 818", "577 538 593 640 527 526 568 527 559 489 601 856", "672 693 860 515 796 802 720 479 944 739 790 564", "484 671 487 508 490 792 195 250 297 184 183 225", "184 216 146 258 513 329 350 517 172 453 459 377", "136 601 396 447 221 141 328 144 165 147 449 211", "258 145 144 186 145 177 107 219 474 290 311 478", "133 414 420 338 97 562 357 408 182 102 289 105 126", "108 410 313 200 199 241 200 232 162 274 529 345", "366 533 188 469 475 393 152 617 412 463 237 157", "344 160 181 163 465 247 246 288 247 279 209 321", "576 392 413 580 235 516 522 440 199 664 459 510", "284 204 391 207 228 210 512 133 175 134 166 96 208", "463 279 300 467 122 403 409 327 86 551 346 397 171", "91 278 94 115 97 399 174 133 165 95 207 462 278", "299 466 121 402 408 326 85 550 345 396 170 90 277", "93 114 96 398 175 207 137 249 504 320 341 508 163", "444 450 368 127 592 387 438 212 132 319 135 156", "138 440 166 96 208 463 279 300 467 122 403 409 327", "86 551 346 397 171 91 278 94 115 97 399 128 240", "495 311 332 499 154 435 441 359 118 583 378 429", "203 123 310 126 147 129 431 170 425 241 262 429 84", "365 371 289 48 513 308 359 133 53 240 56 77 59 361", "537 353 374 541 196 477 483 401 160 625 420 471", "245 165 352 168 189 171 473 608 629 796 451 732", "738 656 415 880 675 726 500 420 607 423 444 426", "728 445 612 267 548 554 472 231 696 491 542 316", "236 423 239 260 242 544 633 288 569 575 493 252", "717 512 563 337 257 444 260 281 263 565 455 736", "742 660 419 884 679 730 504 424 611 427 448 430", "732 391 397 315 74 539 334 385 159 79 266 82 103", "85 387 678 596 355 820 615 666 440 360 547 363 384", "366 668 602 361 826 621 672 446 366 553 369 390", "372 674 279 744 539 590 364 284 471 287 308 290", "592 503 298 349 123 43 230 46 67 49 351 763 814", "588 508 695 511 532 514 816 609 383 303 490 306", "327 309 611 434 354 541 357 378 360 662 128 315", "131 152 134 436 235 51 72 54 356 238 259 241 543", "75 57 359 78 380 362"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 24, 27, 29, 30, 48, 55, 66, 67, 67, 78, 99, 104, 108, 112, 117, 133, 141, 180, 211, 212, 233, 260, 279, 330, 332, 336, 342, 396, 400, 437, 460, 484, 486};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> sums = {"544 478 478 189 309 276 379 351 478 562 367 175", "649 588 298 514 266 249 524 450 417 534 602 478", "352 245 203 611 218 631 272 194 181 712 712 423", "543 510 613 585 712 796 601 409 883 822 532 748", "500 483 758 684 651 768 836 712 586 479 437 845", "452 865 506 428 415 646 357 477 444 547 519 646", "730 535 343 817 756 466 682 434 417 692 618 585", "702 770 646 520 413 371 779 386 799 440 362 349", "357 477 444 547 519 646 730 535 343 817 756 466", "682 434 417 692 618 585 702 770 646 520 413 371", "779 386 799 440 362 349 188 155 258 230 357 441", "246 54 528 467 177 393 145 128 403 329 296 413 481", "357 231 124 82 490 97 510 151 73 60 275 378 350", "477 561 366 174 648 587 297 513 265 248 523 449", "416 533 601 477 351 244 202 610 217 630 271 193", "180 345 317 444 528 333 141 615 554 264 480 232", "215 490 416 383 500 568 444 318 211 169 577 184", "597 238 160 147 420 547 631 436 244 718 657 367", "583 335 318 593 519 486 603 671 547 421 314 272", "680 287 700 341 263 250 519 603 408 216 690 629", "339 555 307 290 565 491 458 575 643 519 393 286", "244 652 259 672 313 235 222 730 535 343 817 756", "466 682 434 417 692 618 585 702 770 646 520 413", "371 779 386 799 440 362 349 619 427 901 840 550", "766 518 501 776 702 669 786 854 730 604 497 455", "863 470 883 524 446 433 232 706 645 355 571 323", "306 581 507 474 591 659 535 409 302 260 668 275", "688 329 251 238 514 453 163 379 131 114 389 315", "282 399 467 343 217 110 68 476 83 496 137 59 46", "927 637 853 605 588 863 789 756 873 941 817 691", "584 542 950 557 970 611 533 520 576 792 544 527", "802 728 695 812 880 756 630 523 481 889 496 909", "550 472 459 502 254 237 512 438 405 522 590 466", "340 233 191 599 206 619 260 182 169 470 453 728", "654 621 738 806 682 556 449 407 815 422 835 476", "398 385 205 480 406 373 490 558 434 308 201 159", "567 174 587 228 150 137 463 389 356 473 541 417", "291 184 142 550 157 570 211 133 120 664 631 748", "816 692 566 459 417 825 432 845 486 408 395 557", "674 742 618 492 385 343 751 358 771 412 334 321", "641 709 585 459 352 310 718 325 738 379 301 288", "826 702 576 469 427 835 442 855 496 418 405 770", "644 537 495 903 510 923 564 486 473 520 413 371", "779 386 799 440 362 349 287 245 653 260 673 314", "236 223 138 546 153 566 207 129 116 504 111 524", "165 87 74 519 932 573 495 482 539 180 102 89 593", "515 502 156 143 65"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 26, 34, 39, 48, 63, 90, 94, 111, 117, 121, 143, 154, 155, 196, 197, 212, 224, 262, 295, 323, 323, 323, 323, 359, 369, 379, 389, 407, 433, 447, 456, 476, 494};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> sums = {"420 390 173 193 401 581 582 379 574 513 518 610", "539 295 173 512 590 291 483 461 304 405 538 321", "341 549 729 730 527 722 661 666 758 687 443 321", "660 738 439 631 609 452 553 291 311 519 699 700", "497 692 631 636 728 657 413 291 630 708 409 601", "579 422 523 94 302 482 483 280 475 414 419 511 440", "196 74 413 491 192 384 362 205 306 322 502 503 300", "495 434 439 531 460 216 94 433 511 212 404 382 225", "326 710 711 508 703 642 647 739 668 424 302 641", "719 420 612 590 433 534 891 688 883 822 827 919", "848 604 482 821 899 600 792 770 613 714 689 884", "823 828 920 849 605 483 822 900 601 793 771 614", "715 681 620 625 717 646 402 280 619 697 398 590", "568 411 512 815 820 912 841 597 475 814 892 593", "785 763 606 707 759 851 780 536 414 753 831 532", "724 702 545 646 856 785 541 419 758 836 537 729", "707 550 651 877 633 511 850 928 629 821 799 642", "743 562 440 779 857 558 750 728 571 672 196 535", "613 314 506 484 327 428 413 491 192 384 362 205", "306 830 531 723 701 544 645 609 801 779 622 723", "502 480 323 424 672 515 616 493 594 437"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37, 37, 57, 136, 155, 159, 168, 243, 254, 265, 269, 284, 325, 347, 376, 377, 382, 403, 438, 445, 446, 454, 474};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> sums = {"400 537 729 482 584 402 692 485 683 424 752 705", "507 473 630 726 793 624 513 500 409 827 613 462", "585 564 745 619 695 243 435 188 290 108 398 191", "389 130 458 411 213 179 336 432 499 330 219 206", "115 533 319 168 291 270 451 325 401 572 325 427", "245 535 328 526 267 595 548 350 316 473 569 636", "467 356 343 252 670 456 305 428 407 588 462 538", "517 619 437 727 520 718 459 787 740 542 508 665", "761 828 659 548 535 444 862 648 497 620 599 780", "654 730 372 190 480 273 471 212 540 493 295 261", "418 514 581 412 301 288 197 615 401 250 373 352", "533 407 483 292 582 375 573 314 642 595 397 363", "520 616 683 514 403 390 299 717 503 352 475 454", "635 509 585 400 193 391 132 460 413 215 181 338", "434 501 332 221 208 117 535 321 170 293 272 453", "327 403 483 681 422 750 703 505 471 628 724 791", "622 511 498 407 825 611 460 583 562 743 617 693", "474 215 543 496 298 264 421 517 584 415 304 291", "200 618 404 253 376 355 536 410 486 413 741 694", "496 462 619 715 782 613 502 489 398 816 602 451", "574 553 734 608 684 482 435 237 203 360 456 523", "354 243 230 139 557 343 192 315 294 475 349 425", "763 565 531 688 784 851 682 571 558 467 885 671", "520 643 622 803 677 753 518 484 641 737 804 635", "524 511 420 838 624 473 596 575 756 630 706 286", "443 539 606 437 326 313 222 640 426 275 398 377", "558 432 508 409 505 572 403 292 279 188 606 392", "241 364 343 524 398 474 662 729 560 449 436 345", "763 549 398 521 500 681 555 631 825 656 545 532", "441 859 645 494 617 596 777 651 727 723 612 599", "508 926 712 561 684 663 844 718 794 443 430 339", "757 543 392 515 494 675 549 625 319 228 646 432", "281 404 383 564 438 514 215 633 419 268 391 370", "551 425 501 542 328 177 300 279 460 334 410 746", "595 718 697 878 752 828 381 504 483 664 538 614", "353 332 513 387 463 455 636 510 586 615 489 565", "670 746 620"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {53, 55, 62, 77, 115, 126, 135, 138, 153, 160, 166, 190, 217, 237, 238, 266, 272, 277, 283, 336, 345, 347, 348, 358, 379, 382, 398, 405, 446, 480};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> sums = {"276 329 42 279 218 373 488 176 454 504 217 222 317", "298 516 269 385 376 230 403 256 116 438 520 132", "493 242 539 252 489 428 583 698 386 664 714 427", "432 527 508 726 479 595 586 440 613 466 326 648", "730 342 703 452 305 542 481 636 751 439 717 767", "480 485 580 561 779 532 648 639 493 666 519 379", "701 783 395 756 505 255 194 349 464 152 430 480", "193 198 293 274 492 245 361 352 206 379 232 92 414", "496 108 469 218 431 586 701 389 667 717 430 435", "530 511 729 482 598 589 443 616 469 329 651 733", "345 706 455 525 640 328 606 656 369 374 469 450", "668 421 537 528 382 555 408 268 590 672 284 645", "394 795 483 761 811 524 529 624 605 823 576 692", "683 537 710 563 423 745 827 439 800 549 598 876", "926 639 644 739 720 938 691 807 798 652 825 678", "538 860 942 554 915 664 564 614 327 332 427 408", "626 379 495 486 340 513 366 226 548 630 242 603", "352 892 605 610 705 686 904 657 773 764 618 791", "644 504 826 908 520 881 630 655 660 755 736 954", "707 823 814 668 841 694 554 876 958 570 931 680", "373 468 449 667 420 536 527 381 554 407 267 589", "671 283 644 393 473 454 672 425 541 532 386 559", "412 272 594 676 288 649 398 549 767 520 636 627", "481 654 507 367 689 771 383 744 493 748 501 617", "608 462 635 488 348 670 752 364 725 474 719 835", "826 680 853 706 566 888 970 582 943 692 588 579", "433 606 459 319 641 723 335 696 445 695 549 722", "575 435 757 839 451 812 561 540 713 566 426 748", "830 442 803 552 567 420 280 602 684 296 657 406", "593 453 775 857 469 830 579 306 628 710 322 683", "432 488 570 182 543 292 892 504 865 614 586 947", "696 559 308 669"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 33, 83, 99, 143, 184, 185, 189, 197, 209, 223, 236, 243, 246, 265, 284, 296, 340, 343, 352, 370, 405, 421, 455, 460, 471, 483, 487};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> sums = {"431 641 661 802 601 815 745 772 398 657 434 799", "802 689 549 511 401 437 861 816 582 715 787 612", "409 757 570 590 827 453 629 336 356 497 296 510", "440 467 93 352 129 494 497 384 244 206 96 132 556", "511 277 410 482 307 104 452 265 285 522 148 324", "566 707 506 720 650 677 303 562 339 704 707 594", "454 416 306 342 766 721 487 620 692 517 314 662", "475 495 732 358 534 727 526 740 670 697 323 582", "359 724 727 614 474 436 326 362 786 741 507 640", "712 537 334 682 495 515 752 378 554 667 881 811", "838 464 723 500 865 868 755 615 577 467 503 927", "882 648 781 853 678 475 823 636 656 893 519 695", "680 610 637 263 522 299 664 667 554 414 376 266", "302 726 681 447 580 652 477 274 622 435 455 692", "318 494 824 851 477 736 513 878 881 768 628 590", "480 516 940 895 661 794 866 691 488 836 649 669", "906 532 708 781 407 666 443 808 811 698 558 520", "410 446 870 825 591 724 796 621 418 766 579 599", "836 462 638 434 693 470 835 838 725 585 547 437", "473 897 852 618 751 823 648 445 793 606 626 863", "489 665 319 96 461 464 351 211 173 63 99 523 478", "244 377 449 274 71 419 232 252 489 115 291 355 720", "723 610 470 432 322 358 782 737 503 636 708 533", "330 678 491 511 748 374 550 497 500 387 247 209 99", "135 559 514 280 413 485 310 107 455 268 288 525", "151 327 865 752 612 574 464 500 924 879 645 778", "850 675 472 820 633 653 890 516 692 755 615 577", "467 503 927 882 648 781 853 678 475 823 636 656", "893 519 695 502 464 354 390 814 769 535 668 740", "565 362 710 523 543 780 406 582 324 214 250 674", "629 395 528 600 425 222 570 383 403 640 266 442", "176 212 636 591 357 490 562 387 184 532 345 365", "602 228 404 102 526 481 247 380 452 277 74 422 235", "255 492 118 294 562 517 283 416 488 313 110 458", "271 291 528 154 330 941 707 840 912 737 534 882", "695 715 952 578 754 662 795 867 692 489 837 650", "670 907 533 709 561 633 458 255 603 416 436 673", "299 475 766 591 388 736 549 569 806 432 608 663", "460 808 621 641 878 504 680 285 633 446 466 703", "329 505 430 243 263 500 126 302 591 611 848 474", "650 424 661 287 463 681 307 483 544 720 346"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 33, 41, 63, 66, 69, 85, 143, 181, 202, 214, 222, 233, 244, 261, 273, 289, 293, 321, 347, 368, 377, 389, 404, 419, 431, 434, 434, 447, 448, 459, 493};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> sums = {"446 282 104 435 426 135 338 371 201 604 416 579", "571 587 519 157 562 520 342 673 664 373 576 609", "439 842 654 817 809 825 757 395 800 178 509 500", "209 412 445 275 678 490 653 645 661 593 231 636", "331 322 31 234 267 97 500 312 475 467 483 415 53", "458 653 362 565 598 428 831 643 806 798 814 746", "384 789 353 556 589 419 822 634 797 789 805 737", "375 780 265 298 128 531 343 506 498 514 446 84 489", "501 331 734 546 709 701 717 649 287 692 364 767", "579 742 734 750 682 320 725 597 409 572 564 580", "512 150 555 812 975 967 983 915 553 958 787 779", "795 727 365 770 942 958 890 528 933 950 882 520", "925 898 536 941 468 873 511"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 31, 53, 97, 104, 178, 234, 267, 312, 322, 331, 342, 415, 458, 467, 475, 483, 500};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> sums = {"305 318 169 236 538 281 403 355 188 443 201 238", "302 512 148 274 46 249 428 247 547 398 465 767 510", "632 584 417 672 430 467 531 741 377 503 275 478", "657 476 411 478 780 523 645 597 430 685 443 480", "544 754 390 516 288 491 670 489 329 631 374 496", "448 281 536 294 331 395 605 241 367 139 342 521", "340 698 441 563 515 348 603 361 398 462 672 308", "434 206 409 588 407 743 865 817 650 905 663 700", "764 974 610 736 508 711 890 709 608 560 393 648", "406 443 507 717 353 479 251 454 633 452 682 515", "770 528 565 629 839 475 601 373 576 755 574 467", "722 480 517 581 791 427 553 325 528 707 526 555", "313 350 414 624 260 386 158 361 540 359 568 605", "669 879 515 641 413 616 795 614 363 427 637 273", "399 171 374 553 372 464 674 310 436 208 411 590", "409 738 374 500 272 475 654 473 584 710 482 685", "864 683 346 118 321 500 319 244 447 626 445 219", "398 217 601 420 599"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 38, 110, 131, 150, 163, 198, 200, 209, 211, 236, 243, 264, 267, 280, 317, 365, 390, 405, 474, 500};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> sums = {"408 741 497 835 655 495 411 580 404 442 539 631", "414 526 636 719 750 532 666 732 647 792 763 651", "772 727 640 625 559 647 788 696 393 149 487 307", "147 63 232 56 94 191 283 66 178 288 371 402 184", "318 384 299 444 415 303 424 379 292 277 211 299", "440 348 482 820 640 480 396 565 389 427 524 616", "399 511 621 704 735 517 651 717 632 777 748 636", "757 712 625 610 544 632 773 681 576 396 236 152", "321 145 183 280 372 155 267 377 460 491 273 407", "473 388 533 504 392 513 468 381 366 300 388 529", "437 734 574 490 659 483 521 618 710 493 605 715", "798 829 611 745 811 726 871 842 730 851 806 719", "704 638 726 867 775 394 310 479 303 341 438 530", "313 425 535 618 649 431 565 631 546 691 662 550", "671 626 539 524 458 546 687 595 150 319 143 181", "278 370 153 265 375 458 489 271 405 471 386 531", "502 390 511 466 379 364 298 386 527 435 235 59 97", "194 286 69 181 291 374 405 187 321 387 302 447 418", "306 427 382 295 280 214 302 443 351 228 266 363", "455 238 350 460 543 574 356 490 556 471 616 587", "475 596 551 464 449 383 471 612 520 90 187 279 62", "174 284 367 398 180 314 380 295 440 411 299 420", "375 288 273 207 295 436 344 225 317 100 212 322", "405 436 218 352 418 333 478 449 337 458 413 326", "311 245 333 474 382 414 197 309 419 502 533 315", "449 515 430 575 546 434 555 510 423 408 342 430", "571 479 289 401 511 594 625 407 541 607 522 667", "638 526 647 602 515 500 434 522 663 571 184 294", "377 408 190 324 390 305 450 421 309 430 385 298", "283 217 305 446 354 406 489 520 302 436 502 417", "562 533 421 542 497 410 395 329 417 558 466 599", "630 412 546 612 527 672 643 531 652 607 520 505", "439 527 668 576 713 495 629 695 610 755 726 614", "735 690 603 588 522 610 751 659 526 660 726 641", "786 757 645 766 721 634 619 553 641 782 690 442", "508 423 568 539 427 548 503 416 401 335 423 564", "472 642 557 702 673 561 682 637 550 535 469 557", "698 606 623 768 739 627 748 703 616 601 535 623", "764 672 683 654 542 663 618 531 516 450 538 679", "587 799 687 808 763 676 661 595 683 824 732 658", "779 734 647 632 566 654 795 703 667 622 535 520", "454 542 683 591 743 656 641 575 663 804 712 611", "596 530 618 759 667 509 443 531 672 580 428 516", "657 565 450 591 499 679 587 728"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 30, 33, 36, 64, 117, 119, 148, 154, 161, 181, 202, 247, 253, 258, 262, 269, 269, 273, 277, 288, 318, 341, 349, 354, 363, 372, 378, 385, 394, 410, 414, 457};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> sums = {"182 98 394 521 414 228 104 367 120 342 151 289 479", "441 195 66 132 403 411 493 476 457 129 282 512 421", "218 514 641 534 348 224 487 240 462 271 409 599", "561 315 186 252 523 531 613 596 577 249 402 632", "541 430 557 450 264 140 403 156 378 187 325 515", "477 231 102 168 439 447 529 512 493 165 318 548", "457 853 746 560 436 699 452 674 483 621 811 773", "527 398 464 735 743 825 808 789 461 614 844 753", "873 687 563 826 579 801 610 748 938 900 654 525", "591 862 870 952 935 916 588 741 971 880 580 456", "719 472 694 503 641 831 793 547 418 484 755 763", "845 828 809 481 634 864 773 270 533 286 508 317", "455 645 607 361 232 298 569 577 659 642 623 295", "448 678 587 409 162 384 193 331 521 483 237 108", "174 445 453 535 518 499 171 324 554 463 425 647", "456 594 784 746 500 371 437 708 716 798 781 762", "434 587 817 726 400 209 347 537 499 253 124 190", "461 469 551 534 515 187 340 570 479 431 569 759", "721 475 346 412 683 691 773 756 737 409 562 792", "701 378 568 530 284 155 221 492 500 582 565 546", "218 371 601 510 706 668 422 293 359 630 638 720", "703 684 356 509 739 648 858 612 483 549 820 828", "910 893 874 546 699 929 838 574 445 511 782 790", "872 855 836 508 661 891 800 199 265 536 544 626", "609 590 262 415 645 554 136 407 415 497 480 461", "133 286 516 425 473 481 563 546 527 199 352 582", "491 752 834 817 798 470 623 853 762 842 825 806", "478 631 861 770 907 888 560 713 943 852 871 543", "696 926 835 524 677 907 816 349 579 488 732 641", "871"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 35, 67, 73, 89, 98, 101, 120, 151, 164, 197, 251, 258, 311, 336, 363, 372, 380, 383, 390, 410, 426, 445, 448, 462, 481, 490};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> sums = {"382 488 688 771 545 706 351 525 455 719 792 668", "438 630 687 447 644 558 752 762 510 266 466 549", "323 484 129 303 233 497 570 446 216 408 465 225", "422 336 530 540 288 572 655 429 590 235 409 339", "603 676 552 322 514 571 331 528 442 636 646 394", "855 629 790 435 609 539 803 876 752 522 714 771", "531 728 642 836 846 594 712 873 518 692 622 886", "959 835 605 797 854 614 811 725 919 929 677 647", "292 466 396 660 733 609 379 571 628 388 585 499", "693 703 451 453 627 557 821 894 770 540 732 789", "549 746 660 854 864 612 272 202 466 539 415 185", "377 434 194 391 305 499 509 257 376 640 713 589", "359 551 608 368 565 479 673 683 431 570 643 519", "289 481 538 298 495 409 603 613 361 907 783 553", "745 802 562 759 673 867 877 625 856 626 818 875", "635 832 746 940 950 698 502 694 751 511 708 622", "816 826 574 464 521 281 478 392 586 596 344 713", "473 670 584 778 788 536 530 727 641 835 845 593", "487 401 595 605 353 598 792 802 550 706 716 464", "910 658 668"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 80, 136, 145, 153, 186, 208, 223, 243, 256, 302, 328, 342, 366, 385, 386, 404, 417, 450, 460, 469, 490};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> sums = {"328 382 511 379 374 760 744 376 471 713 643 443", "343 778 717 480 781 350 731 562 689 593 323 667", "697 672 581 76 205 73 68 454 438 70 165 407 337", "137 37 472 411 174 475 44 425 256 383 287 17 361", "391 366 275 259 127 122 508 492 124 219 461 391", "191 91 526 465 228 529 98 479 310 437 341 71 415", "445 420 329 256 251 637 621 253 348 590 520 320", "220 655 594 357 658 227 608 439 566 470 200 544", "574 549 458 119 505 489 121 216 458 388 188 88 523", "462 225 526 95 476 307 434 338 68 412 442 417 326", "500 484 116 211 453 383 183 83 518 457 220 521 90", "471 302 429 333 63 407 437 412 321 870 502 597 839", "769 569 469 904 843 606 907 476 857 688 815 719", "449 793 823 798 707 486 581 823 753 553 453 888", "827 590 891 460 841 672 799 703 433 777 807 782", "691 213 455 385 185 85 520 459 222 523 92 473 304", "431 335 65 409 439 414 323 550 480 280 180 615 554", "317 618 187 568 399 526 430 160 504 534 509 418", "722 522 422 857 796 559 860 429 810 641 768 672", "402 746 776 751 660 452 352 787 726 489 790 359", "740 571 698 602 332 676 706 681 590 152 587 526", "289 590 159 540 371 498 402 132 476 506 481 390", "487 426 189 490 59 440 271 398 302 32 376 406 381", "290 861 624 925 494 875 706 833 737 467 811 841", "816 725 563 864 433 814 645 772 676 406 750 780", "755 664 627 196 577 408 535 439 169 513 543 518", "427 497 878 709 836 740 470 814 844 819 728 447", "278 405 309 39 383 413 388 297 659 786 690 420 764", "794 769 678 617 521 251 595 625 600 509 648 378", "722 752 727 636 282 626 656 631 540 356 386 361", "270 730 705 614 735 644 619"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 11, 26, 33, 57, 59, 62, 65, 126, 154, 163, 194, 245, 264, 276, 317, 326, 350, 355, 372, 380, 396, 400, 414, 427, 443, 461, 464};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> sums = {"251 155 547 319 142 554 521 221 452 608 316 255", "222 295 428 397 391 448 182 442 492 451 208 409", "506 138 530 302 125 537 504 204 435 591 299 238", "205 278 411 380 374 431 165 425 475 434 191 392", "489 434 206 29 441 408 108 339 495 203 142 109 182", "315 284 278 335 69 329 379 338 95 296 393 598 421", "833 800 500 731 887 595 534 501 574 707 676 670", "727 461 721 771 730 487 688 785 193 605 572 272", "503 659 367 306 273 346 479 448 442 499 233 493", "543 502 259 460 557 428 395 95 326 482 190 129 96", "169 302 271 265 322 56 316 366 325 82 283 380 807", "507 738 894 602 541 508 581 714 683 677 734 468", "728 778 737 494 695 792 474 705 861 569 508 475", "548 681 650 644 701 435 695 745 704 461 662 759", "405 561 269 208 175 248 381 350 344 401 135 395", "445 404 161 362 459 792 500 439 406 479 612 581", "575 632 366 626 676 635 392 593 690 656 595 562", "635 768 737 731 788 522 782 832 791 548 749 846", "303 270 343 476 445 439 496 230 490 540 499 256", "457 554 209 282 415 384 378 435 169 429 479 438", "195 396 493 249 382 351 345 402 136 396 446 405", "162 363 460 455 424 418 475 209 469 519 478 235", "436 533 557 551 608 342 602 652 611 368 569 666", "520 577 311 571 621 580 337 538 635 571 305 565", "615 574 331 532 629 362 622 672 631 388 589 686", "356 406 365 122 323 420 666 625 382 583 680 675", "432 633 730 391 592 689 349 446 647"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 21, 48, 74, 87, 88, 117, 121, 134, 161, 182, 185, 257, 263, 275, 294, 308, 314, 317, 318, 358, 372, 387, 413, 420, 474};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> sums = {"262 650 509 259 594 360 407 507 401 606 465 215", "550 316 363 463 357 853 603 938 704 751 851 745", "462 797 563 610 710 604 547 313 360 460 354 648", "695 795 689 461 561 455 608 502 602"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {106, 109, 153, 207, 248, 254, 354, 356, 441, 497};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> sums = {"599 863 614 910 599 883 482 548 852 905 708 608", "628 701 466 832 650 505 603 795 594 532 283 579", "268 552 151 217 521 574 377 277 297 370 135 501", "319 174 272 464 263 547 843 532 816 415 481 785", "838 641 541 561 634 399 765 583 438 536 728 527", "594 283 567 166 232 536 589 392 292 312 385 150", "516 334 189 287 479 278 579 863 462 528 832 885", "688 588 608 681 446 812 630 485 583 775 574 552", "151 217 521 574 377 277 297 370 135 501 319 174", "272 464 263 435 501 805 858 661 561 581 654 419", "785 603 458 556 748 547 100 404 457 260 160 180", "253 18 384 202 57 155 347 146 470 523 326 226 246", "319 84 450 268 123 221 413 212 827 630 530 550 623", "388 754 572 427 525 717 516 683 583 603 676 441", "807 625 480 578 770 569 386 406 479 244 610 428", "283 381 573 372 306 379 144 510 328 183 281 473", "272 399 164 530 348 203 301 493 292 237 603 421", "276 374 566 365 368 186 41 139 331 130 552 407 505", "697 496 225 323 515 314 178 370 169 468 267 459"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 17, 40, 83, 129, 134, 134, 138, 143, 149, 163, 185, 236, 243, 330, 367, 387, 398, 418, 440, 445, 465};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> sums = {"370 237 388 469 492 289 570 654 533 233 384 465", "488 285 566 650 529 251 332 355 152 433 517 396", "483 506 303 584 668 547 587 384 665 749 628 407", "688 772 651 485 569 448 850 729 813"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 102, 183, 187, 201, 282, 305, 346, 383, 467};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> sums = {"854 772 706 828 478 378 666 444 605 626 834 821", "521 697 785 594 449 766 721 745 465 812 840 520", "528 584 750 781 770 809 665 918 852 974 624 524", "812 590 751 772 980 967 667 843 931 740 595 912", "867 891 611 958 986 666 674 730 896 927 916 955", "811 770 892 542 442 730 508 669 690 898 885 585", "761 849 658 513 830 785 809 529 876 904 584 592", "648 814 845 834 873 729 826 476 376 664 442 603", "624 832 819 519 695 783 592 447 764 719 743 463", "810 838 518 526 582 748 779 768 807 663 598 498", "786 564 725 746 954 941 641 817 905 714 569 886", "841 865 585 932 960 640 648 704 870 901 890 929", "785 148 436 214 375 396 604 591 291 467 555 364", "219 536 491 515 235 582 610 290 298 354 520 551", "540 579 435 336 114 275 296 504 491 191 367 455", "264 119 436 391 415 135 482 510 190 198 254 420", "451 440 479 335 402 563 584 792 779 479 655 743", "552 407 724 679 703 423 770 798 478 486 542 708", "739 728 767 623 341 362 570 557 257 433 521 330", "185 502 457 481 201 548 576 256 264 320 486 517", "506 545 401 523 731 718 418 594 682 491 346 663", "618 642 362 709 737 417 425 481 647 678 667 706", "562 752 739 439 615 703 512 367 684 639 663 383", "730 758 438 446 502 668 699 688 727 583 947 647", "823 911 720 575 892 847 871 591 938 966 646 654", "710 876 907 896 935 791 634 810 898 707 562 879", "834 858 578 925 953 633 641 697 863 894 883 922", "778 510 598 407 262 579 534 558 278 625 653 333", "341 397 563 594 583 622 478 774 583 438 755 710", "734 454 801 829 509 517 573 739 770 759 798 654", "671 526 843 798 822 542 889 917 597 605 661 827", "858 847 886 742 335 652 607 631 351 698 726 406", "414 470 636 667 656 695 551 507 462 486 206 553", "581 261 269 325 491 522 511 550 406 779 803 523", "870 898 578 586 642 808 839 828 867 723 758 478", "825 853 533 541 597 763 794 783 822 678 502 849", "877 557 565 621 787 818 807 846 702 569 597 277", "285 341 507 538 527 566 422 944 624 632 688 854", "885 874 913 769 652 660 716 882 913 902 941 797", "340 396 562 593 582 621 477 404 570 601 590 629", "485 626 657 646 685 541 823 812 851 707 843 882", "738 871 727 766"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 90, 95, 111, 124, 166, 167, 174, 230, 240, 251, 272, 311, 312, 343, 352, 354, 367, 391, 396, 412, 416, 418, 427, 431, 455, 458, 467, 474, 480, 486, 500};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> sums = {"170 132 299 262 358 259 318 118 240 174 114 408", "427 208 479 171 287 162 329 292 388 289 348 148", "270 204 144 438 457 238 509 201 317 291 254 350", "251 310 110 232 166 106 400 419 200 471 163 279", "421 517 418 477 277 399 333 273 567 586 367 638", "330 446 480 381 440 240 362 296 236 530 549 330", "601 293 409 477 536 336 458 392 332 626 645 426", "697 389 505 437 237 359 293 233 527 546 327 598", "290 406 296 418 352 292 586 605 386 657 349 465", "218 152 92 386 405 186 457 149 265 274 214 508 527", "308 579 271 387 148 442 461 242 513 205 321 382", "401 182 453 145 261 695 476 747 439 555 495 766", "458 574 547 239 355 510 626 318"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 48, 62, 70, 100, 101, 104, 138, 170, 189, 192, 217, 229, 248, 288, 338, 357, 409};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> sums = {"202 56 498 133 191 339 32 495 381 443 244 686 321", "379 527 220 683 569 631 540 175 233 381 74 537 423", "485 617 675 823 516 979 865 927 310 458 151 614", "500 562 516 209 672 558 620 357 820 706 768 513", "399 461 862 924 810"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 25, 49, 126, 184, 195, 332, 374, 436, 488, 491};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> sums = {"556 498 812 676 755 505 538 606 606 632 813 741", "559 503 584 514 717 358 762 586 709 726 745 539", "663 836 372 686 550 629 379 412 480 480 506 687", "615 433 377 458 388 591 232 636 460 583 600 619", "413 537 710 628 492 571 321 354 422 422 448 629", "557 375 319 400 330 533 174 578 402 525 542 561", "355 479 652 806 885 635 668 736 736 762 943 871", "689 633 714 644 847 488 892 716 839 856 875 669", "793 966 749 499 532 600 600 626 807 735 553 497", "578 508 711 352 756 580 703 720 739 533 657 830", "578 611 679 679 705 886 814 632 576 657 587 790", "431 835 659 782 799 818 612 736 909 361 429 429", "455 636 564 382 326 407 337 540 181 585 409 532", "549 568 362 486 659 462 462 488 669 597 415 359", "440 370 573 214 618 442 565 582 601 395 519 692", "530 556 737 665 483 427 508 438 641 282 686 510", "633 650 669 463 587 760 556 737 665 483 427 508", "438 641 282 686 510 633 650 669 463 587 760 763", "691 509 453 534 464 667 308 712 536 659 676 695", "489 613 786 872 690 634 715 645 848 489 893 717", "840 857 876 670 794 967 618 562 643 573 776 417", "821 645 768 785 804 598 722 895 380 461 391 594", "235 639 463 586 603 622 416 540 713 405 335 538", "179 583 407 530 547 566 360 484 657 416 619 260", "664 488 611 628 647 441 565 738 549 190 594 418", "541 558 577 371 495 668 393 797 621 744 761 780", "574 698 871 438 262 385 402 421 215 339 512 666", "789 806 825 619 743 916 613 630 649 443 567 740", "753 772 566 690 863 789 583 707 880 602 726 899", "520 693 817"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 157, 162, 164, 173, 197, 198, 215, 218, 243, 245, 265, 265, 291, 322, 335, 341, 368, 376, 385, 400, 404, 414, 421, 471, 472, 495};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> sums = {"647 259 586 542 312 490 541 236 555 291 520 229", "542 648 365 354 461 666 486 458 300 565 432 498", "607 200 407 512 839 795 565 743 794 489 808 544", "773 482 795 901 618 607 714 919 739 711 553 818", "685 751 860 453 660 451 407 177 355 406 101 420", "156 385 94 407 513 230 219 326 531 351 323 165 430", "297 363 472 65 272 734 504 682 733 428 747 483 712", "421 734 840 557 546 653 858 678 650 492 757 624", "690 799 392 599 460 638 689 384 703 439 668 377", "690 796 513 502 609 814 634 606 448 713 580 646", "755 348 555 408 459 154 473 209 438 147 460 566", "283 272 379 584 404 376 218 483 350 416 525 118", "325 637 332 651 387 616 325 638 744 461 450 557", "762 582 554 396 661 528 594 703 296 503 383 702", "438 667 376 689 795 512 501 608 813 633 605 447", "712 579 645 754 347 554 397 133 362 71 384 490 207", "196 303 508 328 300 142 407 274 340 449 42 249 452", "681 390 703 809 526 515 622 827 647 619 461 726", "593 659 768 361 568 417 126 439 545 262 251 358", "563 383 355 197 462 329 395 504 97 304 355 668 774", "491 480 587 792 612 584 426 691 558 624 733 326", "533 377 483 200 189 296 501 321 293 135 400 267", "333 442 35 242 796 513 502 609 814 634 606 448 713", "580 646 755 348 555 619 608 715 920 740 712 554", "819 686 752 861 454 661 325 432 637 457 429 271", "536 403 469 578 171 378 421 626 446 418 260 525", "392 458 567 160 367 733 553 525 367 632 499 565", "674 267 474 758 730 572 837 704 770 879 472 679", "550 392 657 524 590 699 292 499 364 629 496 562", "671 264 471 471 338 404 513 106 313 603 669 778", "371 578 536 645 238 445 711 304 511 413 620 213"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 32, 39, 62, 94, 103, 115, 157, 168, 197, 210, 235, 261, 264, 289, 293, 301, 323, 344, 345, 345, 358, 368, 389, 410, 450, 451, 469};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> sums = {"39 92 221 331 186 310 394 448 117 131 213 265 479", "212 186 88 115 468 450 131 260 370 225 349 433 487", "156 170 252 304 518 251 225 127 154 507 489 313", "423 278 402 486 540 209 223 305 357 571 304 278", "180 207 560 542 552 407 531 615 669 338 352 434", "486 700 433 407 309 336 689 671 517 641 725 779", "448 462 544 596 810 543 517 419 446 799 781 496", "580 634 303 317 399 451 665 398 372 274 301 654", "636 704 758 427 441 523 575 789 522 496 398 425", "778 760 842 511 525 607 659 873 606 580 482 509", "862 844 565 579 661 713 927 660 634 536 563 916", "898 248 330 382 596 329 303 205 232 585 567 344", "396 610 343 317 219 246 599 581 478 692 425 399", "301 328 681 663 744 477 451 353 380 733 715 691", "665 567 594 947 929 398 300 327 680 662 274 301", "654 636 203 556 538 583 565 918"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 39, 88, 92, 115, 117, 131, 186, 186, 212, 213, 221, 265, 310, 331, 394, 448, 450, 468, 479};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> sums = {"526 911 715 849 813 572 858 480 899 889 644 577", "796 470 532 605 819 595 399 533 497 256 542 164", "583 573 328 261 480 154 216 289 503 784 918 882", "641 927 549 968 958 713 646 865 539 601 674 888", "722 686 445 731 353 772 762 517 450 669 343 405", "478 692 820 579 865 487 906 896 651 584 803 477", "539 612 826 543 829 451 870 860 615 548 767 441", "503 576 790 588 210 629 619 374 307 526 200 262", "335 549 496 915 905 660 593 812 486 548 621 835", "537 527 282 215 434 108 170 243 457 946 701 634", "853 527 589 662 876 691 624 843 517 579 652 866", "379 598 272 334 407 621 531 205 267 340 554 424", "486 559 773 160 233 447 295 509 582"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 59, 105, 111, 151, 156, 184, 223, 294, 375, 392, 398, 421, 428, 437, 468, 478, 490};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> sums = {"691 581 603 843 808 815 478 502 929 762 867 678", "797 728 489 406 428 668 633 640 303 327 754 587", "692 503 622 553 314 318 558 523 530 193 217 644", "477 582 393 512 443 204 580 545 552 215 239 666", "499 604 415 534 465 226 785 792 455 479 906 739", "844 655 774 705 466 757 420 444 871 704 809 620", "739 670 431 427 451 878 711 816 627 746 677 438", "114 541 374 479 290 409 340 101 565 398 503 314", "433 364 125 825 930 741 860 791 552 763 574 693", "624 385 679 798 729 490 609 540 301 659 420 351"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {45, 56, 69, 148, 170, 245, 258, 295, 329, 364, 375, 382, 410, 433, 434, 496};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> sums = {"330 268 655 417 549 585 361 596 291 497 299 489", "306 412 534 283 642 182 569 331 463 499 275 510", "205 411 213 403 220 326 448 197 556 507 269 401", "437 213 448 143 349 151 341 158 264 386 135 494", "656 788 824 600 835 530 736 538 728 545 651 773", "522 881 550 586 362 597 292 498 300 490 307 413", "535 284 643 718 494 729 424 630 432 622 439 545", "667 416 775 530 765 460 666 468 658 475 581 703", "452 811 541 236 442 244 434 251 357 479 228 587", "471 677 479 669 486 592 714 463 822 372 174 364", "181 287 409 158 517 380 570 387 493 615 364 723", "372 189 295 417 166 525 379 485 607 356 715 302", "424 173 532 530 279 638 401 760 509"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {60, 75, 83, 91, 98, 122, 153, 204, 208, 209, 281, 289, 326, 341, 377, 388, 434, 447};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> sums = {"631 665 452 839 429 679 812 681 779 604 824 675", "546 543 812 698 805 411 388 592 742 763 783 745", "719 685 475 750 613 829 404 835 837 530 317 704", "294 544 677 546 644 469 689 540 411 408 677 563", "670 276 253 457 607 628 648 610 584 550 340 615", "478 694 269 700 702 351 738 328 578 711 580 678", "503 723 574 445 442 711 597 704 310 287 491 641", "662 682 644 618 584 374 649 512 728 303 734 736", "525 115 365 498 367 465 290 510 361 232 229 498", "384 491 97 74 278 428 449 469 431 405 371 161 436", "299 515 90 521 523 502 752 885 754 852 677 897 748", "619 616 885 771 878 484 461 665 815 836 856 818", "792 758 548 823 686 902 477 908 910 342 475 344", "442 267 487 338 209 206 475 361 468 74 51 255 405", "426 446 408 382 348 138 413 276 492 67 498 500 725", "594 692 517 737 588 459 456 725 611 718 324 301", "505 655 676 696 658 632 598 388 663 526 742 317", "748 750 727 825 650 870 721 592 589 858 744 851", "457 434 638 788 809 829 791 765 731 521 796 659", "875 450 881 883 694 519 739 590 461 458 727 613", "720 326 303 507 657 678 698 660 634 600 390 665", "528 744 319 750 752 617 837 688 559 556 825 711", "818 424 401 605 755 776 796 758 732 698 488 763", "626 842 417 848 850 662 513 384 381 650 536 643", "249 226 430 580 601 621 583 557 523 313 588 451", "667 242 673 675 733 604 601 870 756 863 469 446", "650 800 821 841 803 777 743 533 808 671 887 462", "893 895 455 452 721 607 714 320 297 501 651 672", "692 654 628 594 384 659 522 738 313 744 746 323", "592 478 585 191 168 372 522 543 563 525 499 465", "255 530 393 609 184 615 617 589 475 582 188 165", "369 519 540 560 522 496 462 252 527 390 606 181", "612 614 744 851 457 434 638 788 809 829 791 765", "731 521 796 659 875 450 881 883 737 343 320 524", "674 695 715 677 651 617 407 682 545 761 336 767", "769 450 427 631 781 802 822 784 758 724 514 789", "652 868 443 874 876 33 237 387 408 428 390 364 330", "120 395 258 474 49 480 482 214 364 385 405 367 341", "307 97 372 235 451 26 457 459 568 589 609 571 545", "511 301 576 439 655 230 661 663 739 759 721 695", "661 451 726 589 805 380 811 813 780 742 716 682", "472 747 610 826 401 832 834 762 736 702 492 767", "630 846 421 852 854 698 664 454 729 592 808 383", "814 816 638 428 703 566 782 357 788 790 394 669", "532 748 323 754 756 459 322 538 113 544 546 597", "813 388 819 821 676 251 682 684 467 898 900 473", "475 906"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 21, 28, 46, 69, 92, 160, 163, 209, 221, 230, 248, 282, 292, 296, 298, 302, 315, 336, 359, 362, 367, 380, 383, 396, 400, 422, 429, 429, 441, 446, 452, 454, 456};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> sums = {"532 684 811 726 727 836 876 804 690 815 448 428", "555 470 471 580 620 548 434 559 192 707 622 623", "732 772 700 586 711 344 749 750 859 899 827 713", "838 471 665 774 814 742 628 753 386 775 815 743", "629 754 387 924 852 738 863 496 892 778 903 536", "706 831 464 717 350 475"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {54, 138, 290, 296, 332, 333, 394, 410, 417, 421, 442, 482};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> sums = {"544 538 653 630 635 850 667 641 745 686 876 722", "833 606 543 487 561 843 566 731 866 404 710 515", "728 580 330 445 422 427 642 459 433 537 478 668", "514 625 398 335 279 353 635 358 523 658 196 502", "307 520 372 439 416 421 636 453 427 531 472 662", "508 619 392 329 273 347 629 352 517 652 190 496", "301 514 366 531 536 751 568 542 646 587 777 623", "734 507 444 388 462 744 467 632 767 305 611 416", "629 481 513 728 545 519 623 564 754 600 711 484", "421 365 439 721 444 609 744 282 588 393 606 458", "733 550 524 628 569 759 605 716 489 426 370 444", "726 449 614 749 287 593 398 611 463 765 739 843", "784 974 820 931 704 641 585 659 941 664 829 964", "502 808 613 826 678 556 660 601 791 637 748 521", "458 402 476 758 481 646 781 319 625 430 643 495", "634 575 765 611 722 495 432 376 450 732 455 620", "755 293 599 404 617 469 679 869 715 826 599 536", "480 554 836 559 724 859 397 703 508 721 573 810", "656 767 540 477 421 495 777 500 665 800 338 644", "449 662 514 846 957 730 667 611 685 967 690 855", "990 528 834 639 852 704 803 576 513 457 531 813", "536 701 836 374 680 485 698 550 687 624 568 642", "924 647 812 947 485 791 596 809 661 397 341 415", "697 420 585 720 258 564 369 582 434 278 352 634", "357 522 657 195 501 306 519 371 296 578 301 466", "601 139 445 250 463 315 652 375 540 675 213 519", "324 537 389 657 822 957 495 801 606 819 671 545", "680 218 524 329 542 394 845 383 689 494 707 559", "518 824 629 842 694 362 167 380 232 473 686 538", "491 343 556"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 111, 139, 162, 167, 168, 185, 190, 204, 230, 254, 259, 265, 277, 291, 310, 334, 346, 352, 355, 369, 376, 457, 467, 474, 490, 500};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> sums = {"489 841 517 490 719 863 874 474 643 856 426 748", "460 713 763 484 574 696 457 661 725 827 429 776", "885 546 570 800 467 863 820 739 713 548 552 228", "201 430 574 585 185 354 567 137 459 171 424 474", "195 285 407 168 372 436 538 140 487 596 257 281", "511 178 574 531 450 424 259 580 553 782 926 937", "537 706 919 489 811 523 776 826 547 637 759 520", "724 788 890 492 839 948 609 633 863 530 926 883", "802 776 611 229 458 602 613 213 382 595 165 487", "199 452 502 223 313 435 196 400 464 566 168 515", "624 285 309 539 206 602 559 478 452 287 431 575", "586 186 355 568 138 460 172 425 475 196 286 408", "169 373 437 539 141 488 597 258 282 512 179 575", "532 451 425 260 804 815 415 584 797 367 689 401", "654 704 425 515 637 398 602 666 768 370 717 826", "487 511 741 408 804 761 680 654 489 959 559 728", "941 511 833 545 798 848 569 659 781 542 746 810", "912 514 861 970 631 655 885 552 948 905 824 798", "633 570 739 952 522 844 556 809 859 580 670 792", "553 757 821 923 525 872 981 642 666 896 563 959", "916 835 809 644 339 552 122 444 156 409 459 180", "270 392 153 357 421 523 125 472 581 242 266 496", "163 559 516 435 409 244 721 291 613 325 578 628", "349 439 561 322 526 590 692 294 641 750 411 435", "665 332 728 685 604 578 413 504 826 538 791 841", "562 652 774 535 739 803 905 507 854 963 624 648", "878 545 941 898 817 791 626 396 108 361 411 132", "222 344 105 309 373 475 77 424 533 194 218 448 115", "511 468 387 361 196 430 683 733 454 544 666 427", "631 695 797 399 746 855 516 540 770 437 833 790", "709 683 518 395 445 166 256 378 139 343 407 509", "111 458 567 228 252 482 149 545 502 421 395 230", "698 419 509 631 392 596 660 762 364 711 820 481", "505 735 402 798 755 674 648 483 469 559 681 442", "646 710 812 414 761 870 531 555 785 452 848 805", "724 698 533 280 402 163 367 431 533 135 482 591", "252 276 506 173 569 526 445 419 254 492 253 457", "521 623 225 572 681 342 366 596 263 659 616 535", "509 344 375 579 643 745 347 694 803 464 488 718", "385 781 738 657 631 466 340 404 506 108 455 564", "225 249 479 146 542 499 418 392 227 608 710 312", "659 768 429 453 683 350 746 703 622 596 431 774", "376 723 832 493 517 747 414 810 767 686 660 495", "478 825 934 595 619 849 516 912 869 788 762 597", "427 536 197 221 451 118 514 471 390 364 199 883", "544 568 798 465 861 818 737 711 546 653 677 907", "574 970 927 846 820 655 338 568 235 631 588 507", "481 316 592 259 655 612 531 505 340 489 885 842", "761 735 570 552 509 428 402 237 905 824 798 633", "781 755 590 674 509 483"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37, 40, 68, 71, 78, 85, 95, 100, 101, 128, 157, 159, 181, 185, 254, 272, 307, 324, 324, 330, 336, 350, 359, 374, 387, 389, 411, 431, 438, 452, 467, 474, 474, 485, 496};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> sums = {"462 291 458 291 136 289 345 141 105 165 337 409", "264 226 272 557 549 451 115 230 137 178 463 564", "122 427 134 212 448 377 301 274 625 792 625 470", "623 679 475 439 499 671 743 598 560 606 891 883", "785 449 564 471 512 797 898 456 761 468 546 782", "711 635 608 621 454 299 452 508 304 268 328 500", "572 427 389 435 720 712 614 278 393 300 341 626", "727 285 590 297 375 611 540 464 437 621 466 619", "675 471 435 495 667 739 594 556 602 887 879 781", "445 560 467 508 793 894 452 757 464 542 778 707", "631 604 299 452 508 304 268 328 500 572 427 389", "435 720 712 614 278 393 300 341 626 727 285 590", "297 375 611 540 464 437 297 353 149 113 173 345", "417 272 234 280 565 557 459 123 238 145 186 471", "572 130 435 142 220 456 385 309 282 506 302 266", "326 498 570 425 387 433 718 710 612 276 391 298", "339 624 725 283 588 295 373 609 538 462 435 358", "322 382 554 626 481 443 489 774 766 668 332 447", "354 395 680 781 339 644 351 429 665 594 518 491", "118 178 350 422 277 239 285 570 562 464 128 243", "150 191 476 577 135 440 147 225 461 390 314 287", "142 314 386 241 203 249 534 526 428 92 207 114 155", "440 541 99 404 111 189 425 354 278 251 374 446 301", "263 309 594 586 488 152 267 174 215 500 601 159", "464 171 249 485 414 338 311 618 473 435 481 766", "758 660 324 439 346 387 672 773 331 636 343 421", "657 586 510 483 545 507 553 838 830 732 396 511", "418 459 744 845 403 708 415 493 729 658 582 555", "362 408 693 685 587 251 366 273 314 599 700 258", "563 270 348 584 513 437 410 370 655 647 549 213", "328 235 276 561 662 220 525 232 310 546 475 399", "372 701 693 595 259 374 281 322 607 708 266 571", "278 356 592 521 445 418 978 880 544 659 566 607", "892 993 551 856 563 641 877 806 730 703 872 536", "651 558 599 884 985 543 848 555 633 869 798 722", "695 438 553 460 501 786 887 445 750 457 535 771", "700 624 597 217 124 165 450 551 109 414 121 199", "435 364 288 261 239 280 565 666 224 529 236 314", "550 479 403 376 187 472 573 131 436 143 221 457", "386 310 283 513 614 172 477 184 262 498 427 351", "324 899 457 762 469 547 783 712 636 609 558 863", "570 648 884 813 737 710 421 128 206 442 371 295", "268 433 511 747 676 600 573 218 454 383 307 280", "532 461 385 358 697 621 594 550 523 447"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 51, 58, 64, 70, 72, 73, 77, 101, 114, 148, 162, 166, 200, 208, 210, 225, 227, 227, 237, 273, 281, 313, 345, 363, 384, 387, 394, 398, 399, 485, 493, 500};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> sums = {"501 618 324 345 660 434 672 386 382 458 336 224", "227 271 559 453 224 609 405 283 258 719 425 446", "761 535 773 487 483 559 437 325 328 372 660 554", "325 710 506 384 359 542 563 878 652 890 604 600", "676 554 442 445 489 777 671 442 827 623 501 476", "269 584 358 596 310 306 382 260 148 151 195 483", "377 148 533 329 207 182 605 379 617 331 327 403", "281 169 172 216 504 398 169 554 350 228 203 694", "932 646 642 718 596 484 487 531 819 713 484 869", "665 543 518 706 420 416 492 370 258 261 305 593", "487 258 643 439 317 292 658 654 730 608 496 499", "543 831 725 496 881 677 555 530 368 444 322 210", "213 257 545 439 210 595 391 269 244 440 318 206", "209 253 541 435 206 591 387 265 240 394 282 285", "329 617 511 282 667 463 341 316 160 163 207 495", "389 160 545 341 219 194 51 95 383 277 48 433 229", "107 82 98 386 280 51 436 232 110 85 430 324 95 480", "276 154 129 612 383 768 564 442 417 277 662 458", "336 311 433 229 107 82 614 492 467 288 263 141"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 24, 27, 58, 71, 83, 124, 136, 145, 182, 186, 200, 205, 234, 253, 258, 301, 359, 409, 418, 460, 472};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> sums = {"245 495 537 702 215 375 656 560 490 386 257 631", "537 569 491 552 488 275 69 552 220 489 499 662 175", "422 343 594 559 482 595 352 446 488 451 166 256", "318 511 441 337 208 850 488 520 442 824 439 730", "467 503 171 440 252 402 126 373 294 271 510 433", "546 303 738 701 416 576 568 761 51 587 458 551 738", "770 871 753 689 476 717 753 421 690 502 652 376", "623 546 795 986 683 796 553 743 458 618 255 803", "733 629 500 593 780 812 734 795 731 518 759 795", "463 732 544 694 418 665 586 837 802 725 838 595", "421 581 573 149 696 592 463 556 743 775 697 758", "535 481 722 752 426 695 507 657 381 108 549 800", "765 688 801 558 296 288 481 411 708 178 930 458", "490 179 473 409 196 437 473 141 410 222 372 551", "343 264 286 72 403 516 273 448 641 571 467 338 636", "618 650 572 633 569 356 597 633 301 570 308 532", "256 0 424 539 679 563 817 433 633 563 459 330 991", "57 642 564 625 959 348 42 625 293 562 374 524 248", "495 416 688 632 555 632 425 756 652 259 616 803", "835 757 257 754 541 782 818 486 755 84 717 441 688", "609 860 234 748 268 618 582 453 546 733 765 687", "748 684 471 712 848 416 685 497 647 371 618 539", "790 755 309 791 548 349 442 629 661 583 644 675", "740 627 644 312 581 393 982 260 514 385 759 651", "124 687 615 313 500 532 454 515 451 238 479 515", "183 452 264 414 138 385 306 404 522 445 558 315", "593 625 547 608 838 226 572 608 982 2 357 507 231", "478 399 650 615 538 651 408 812 734 795 731 518", "759 795 463 732 544 694 74 665 586 837 802 165 838", "595 766 827 763 550 791 827 495 764 576 726 450", "872 618 869 834 757 870 627 749 182 472 40 643 417", "686 498 648 372 619 977 791 756 594 792 549 746", "533 774 810 478 747 559 709 704 680 601 852 817", "740 282 344 469 710 746 901 683 495 645 369 446", "537 631 782 524 789 546 497 457 201 470 282 432", "156 403 324 575 540 463 576 986 774 783 711 523", "673 397 644 351 816 781 704 817 574 459 747 559", "709 433 1 995 852 817 183 853 610 415 227 120 101", "348 167 520 485 408 521 278 496 646 370 617 538", "789 754 124 576 547 458 182 429 350 601 566 489", "602 458 332 579 500 751 716 639 752 272 303 224", "475 440 363 476 233 471 722 687 610 723 480 643", "608 531 205 401 859 782 895 953 294 860 617 3 540", "653"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> sums = {"600 416 500 418 590 277 372 600 560 468 342 289", "610 295 648 568 497 540 278 933 594 512 684 815", "466 694 773 562 684 383 704 389 462 662 591 634", "578 410 328 972 631 282 510 589 378 252 199 520", "205 558 907 407 450 622 412 584 675 366 640 673", "462 648 750 604 289 642 562 491 539 478 502 438", "284 512 591 380 254 201 522 207 560 480 409 452", "330 805 456 684 763 552 246 373 694 380 732 652", "581 457 568 587 815 894 289 557 504 262 510 466", "783 712 755 936 466 850 334 845 155 476 161 514", "434 363 406 350 773 562 534 383 704 950 742 662", "779 411 67 641 515 462 783 468 821 741 670 713 583", "304 251 572 257 610 812 459 694 446 125 446 131 43", "404 333 376 320 393 78 630 351 280 323 267 399 752", "672 601 644 588 210 357 753 329 587 710 639 682", "626 559 602 546 531 475 518"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> sums = {"292 90 519 303 469 475 77 464 76 106 431 414 547", "169 403 432 324 280 58 372 853 585 751 757 649 671", "358 388 713 696 551 296 685 690 606 562 340 92 383", "549 338 447 544 219 186 511 494 349 94 483 512 404", "360 138 305 471 477 369 557 78 108 433 201 271 16", "269 282 326 282 60 762 768 660 702 369 418 724 707", "562 307 696 725 617 573 351 579 826 923 535 565", "890 980 728 473 862 891 783 739 517 832 929 541", "571 896 879 734 479 868 658 789 573 523 821 433", "463 124 771 626 371 760 789 681 637 415 530 560", "885 868 723 468 857 355 778 415 512 172 497 480", "335 316 469 498 390 346 124 527 749 365 110 499", "528 703 376 502 14 690 40 824 853 745 701 298 499", "418 807 836 728 684 462 273 662 987 228 95 317 407", "436 328 284 62 825 717 673 451 746 702 480 594 372", "328"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> sums = {"314 65 612 507 916 355 410 430 696 298 432 373 757", "536 526 472 434 263 709 671 460 296 689 485 398", "333 396 412 307 469 155 210 76 496 98 232 173 557", "336 326 272 234 63 322 377 260 96 489 779 198 133", "694 589 548 437 492 358 778 887 514 455 910 618", "608 554 516 22 604 104 542 378 771 567 480 415 605", "767 453 508 374 611 396 530 471 855 634 624 683", "532 361 620 675 558 394 787 306 496 431 662 878", "403 269 689 291 425 366 750 529 519 465 427 256", "515 570 453 289 682 292 391 326 510 565 431 851", "453 587 528 912 691 476 837 582 418 677 732 615", "451 844 799 553 488 251 117 537 166 273 214 598", "377 807 313 275 104 363 418 301 505 530 326 239", "174 172 592 194 328 269 653 432 596 368 330 159", "418 473 356 192 585 381 294 229 458 731 194 135", "519 298 288 234 196 25 225 339 222 58 451 760 160", "95 820 614 555 939 718 708 654 616 442 704 759 642", "478 871 667 580 385 216 157 381 302 310 256 218 47", "306 361 244 642 473 735 182 117 291 675 454 444", "390 352 81 440 688 254 214 989 403 316 473 616 395", "385 959 293 122 381 436 319 155 548 344 108 117", "779 769 715 677 506 765 820 440 6 932 728 97 576", "548 494 456 285 565 599 482 318 711 823 420 387", "484 446 275 534 589 472 308 603 497 410 345 392", "221 480 535 418 368 647 443 76 291 441 442 497 380", "216 609 405 318 253 271 326 209 45 438 234 147 82", "585 386 304 469 493 406 302 523 359 752 548 461", "396 242 635 431 29 279 821 267 180 999 660 573 788", "369 304 217"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> sums = {"509 700 610 432 512 277 370 454 484 484 700 506", "423 473 241 238 958 421 478 287 789 4 521 601 366", "459 543 188 573 789 308 763 197 596 327 501 959", "567 376 726 712 46 557 650 734 540 764 980 499 703", "753 521 518 692 701 758 567 458 538 303 396 584", "286 510 205 245 449 499 267 264 438 447 504 313", "524 289 454 466 272 2 712 231 511 485 253 250 171", "433 490 299 369 462 168 352 576 792 311 515 579", "246 330 504 513 570 379 227 311 117 341 557 76 280", "330 261 95 269 278 335 144 404 399 434 650 169 373", "423 191 188 362 371 428 237 294 518 734 253 457", "507 275 272 226 455 512 808 324 540 517 263 313", "415 78 252 261 318 127 764 283 487 537 305 302 476", "485 542 668 499 234 600 521 518 692 701 459 567", "222 272 40 37 511 220 277 86 476 244 241 778 555", "481 290 294 291 465 474 531 340 59 35 242 49 579", "230 239 890 105 413 470 279 479 945 345"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> sums = {"431 264 168 436 118 91 433 417 773 109 239 130 153", "117 5 117 336 124 521 307 420 228 46 71 251 180", "313 339 58 403 410 315 436 398 507 570 252 225 567", "551 458 243 373 264 287 251 293 251 470 34 492 357", "554 362 450 205 314 314 447 564 192 537 544 449", "570 422 690 496 345 840 724 578 363 493 384 407", "371 259 371 590 378 524 561 674 325 300 325 434", "434 567 684 312 657 664 941 690 594 321 249 591", "575 604 267 397 288 311 275 163 37 494 282 516 465", "578 386 204 229 338 338 471 588 216 549 568 473", "594 544 517 478 843 977 535 665 556 323 543 431", "543 109 550 784 733 846 654 472 497 606 606 739 68", "484 829 564 741 862 199 541 687 365 217 347 238", "261 225 113 225 444 232 466 415 528 336 665 179", "288 288 421 538 112 511 518 182 544 44 498 147 190", "320 211 234 198 86 198 417 205 439 884 501 843 127", "938 261 261 394 511 139 484 491 929 937 840 747", "532 662 553 576 648 428 540 759 547 781 730 843", "651 469 959 603 603 736 853 30 640 833 738 859 731", "516 646 537 560 524 626 250 139 531 765 154 827", "635 453 428 587 191 375 314 465 810 817 722 843", "423 553 444 849 431 319 40 607 434 672 621 411 542", "360 385 987 494 627 744 372 717 724 497 750 338", "229 252 216 104 216 435 223 457 406 519 327 145", "170 279 903 412 529 157 502 509 500 535 359 608", "346 234 346 565 353 587 536 649 457 575 300 409", "409 542 659 521 632 639 544 665 273 237 125 237", "456 244 478 427 540 348 166 191 300 300 433 550", "178 523 530 81 571 260 148 260 479 267 501 450 563", "371 189 643 883 323 456 573 201 546 553 458 579", "112 224 443 231 816 529 527 335 153 178 287 287", "420 537 165 510 694 422 543 112 331 119 353 302", "415 223 41 66 175 175 308 425 53 398 405 310 431", "443 231 465 414 879 335 153 178 937 287 420 537", "165 510 460 422 146 989 684 633 746 554 372 952", "506 506 35 660 384 729 685 641 762 472 421 534 342", "160 185 294 294 427 544 350 517 524 429 550 655", "768 576 279 419 528 528 661 778 406 751 758 663", "430 717 525 947 646 477 477 610 727 355 700 707", "612 733 638 456 481 590 168 723 840 712 363 820", "725 846 264 289 398 398 531 648 953 621 628 533", "654 107 216 216 349 466 650 439 446 351 472 241", "241 374 491 119 464 471 697 497 350 483 455 228", "573 580 141 606 483 600 228 573 580 485 606 921", "361 706 713 599 627 532 823 830 735 856 451 458", "363 484 803 897 829 715 836 741"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> sums = {"830 513 959 791 61 793 498 834 555 727 902 173 317", "564 966 381 827 941 440 354 366 702 423 595 658", "979 728 539 834 510 342 123 344 49 385 106 278 453", "508 79 320 517 788 681 790 495 831 552 724 899 954", "857 766 963 401 622 616 626 384 556 731 62 689 598", "795 403 108 444 380 337 469 567 470 379 576 329", "665 386 455 733 788 691 805 871 437 91 263 530 493", "396 305 922 427 599 774 829 732 641 838 651 495", "550 226 362 392 905 722 625 534 731 897 800 709", "511 855 764 961 667 411 773"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> sums = {"416 275 582 555 740 635 597 529 694 320 354 439", "537 691 623 702 897 276 513 617 334 703 279 398", "270 185 520 493 571 757 535 467 95 258 208 377 475", "629 561 640 373 214 451 555 272 377 512 336 208", "379 352 368 432 394 783 489 117 151 236 334 488", "158 499 232 73 310 414 66 236 371 195 67 581 675", "739 701 633 796 424 458 543 937 795 270 806 539", "380 617 721 521 543 678 922 374 648 819 488 606", "769 453 431 516 614 261 700 779 512 706 439 694", "515 516 651 832 347 728 690 988 785 413 447 532", "217 784 716 795 528 369 606 710 427 532 667 491", "363 909 686 849 190 538 998 167 848 780 859 592", "433 670 774 491 589 378 555 427 31 811 439 473 558", "656 154 49 821 554 395 632 736 765 558 693 517 389", "743 371 365 490 588 742 65 753 486 327 564 668 398", "490 625 449 321 534 568 653 990 905 318 916 649", "490 727 137 548 653 150 612 484 370 281 379 533", "465 544 277 641 355 233 176 281 416 240 112 315", "413 567 499 578 314 152 856 493 210 315 450 274", "146 498 652 584 663 399 237 474 180 79 521 905 359", "231 750 682 761 494 335 572 676 393 498 476 457", "570 836 915 648 489 726 830 547 652 787 769 483", "847 580 421 658 762 479 584 719 543 51 659 500 394", "841 558 663 798 940 494 233 470 574 291 652 673", "355 227 311 415 693 80 372 214 68 652 369 474 609", "902 305 757 578 713 445 409 308 430 254 588 535", "359 231 574 366 190"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> sums = {"453 55 821 36 345 351 479 427 308 344 901 175 409", "100 223 400 94 120 378 492 705 734 886 788 916 515", "745 781 30 612 846 376 660 837 516 148 815 109 75", "384 390 518 117 347 383 415 214 448 139 262 439", "118 159 417 288 597 603 731 330 560 596 628 427", "661 176 475 652 481 372 630 365 371 499 98 328 364", "396 195 429 120 243 420 99 180 398 680 808 407 637", "673 705 504 738 429 98 488 735 449 707 814 413 643", "679 711 510 744 358 558 303 640 455 713 541 771", "807 498 638 872 563 686 863 162 583 841 370 406 62", "237 471 510 285 937 141 182 918 975 668 467 701", "392 515 692 371 412 670 704 503 407 428 551 728", "407 448 706 535 146 460 583 760 590 480 738 568", "259 382 559 890 44 537 493 616 793 472 513 771 307", "484 163 204 462 607 501 327 585 463 64 762 183 441", "482"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> sums = {"719 467 538 381 647 581 451 481 79 356 659 209 520", "545 533 728 420 514 408 368 286 696 539 358 425", "692 612 636 707 550 596 750 620 650 470 525 828", "734 689 714 477 897 589 928 577 537 455 865 608", "527 594 861 781 455 298 876 221 368 398 218 273", "576 482 437 462 225 645 171 431 325 663 203 613", "690 275 342 609 529 369 592 569 439 469 289 344", "647 553 671 533 296 716 408 502 396 963 913 684", "527 346 413 680 600 258 412 686 312 132 187 490", "396 351 715 139 559 251 345 239 199 117 527 771", "189 256 523 443 458 631 358 178 233 536 442 397", "422 185 605 366 391 285 245 563 573 416 235 861", "569 489 482 512 332 387 690 596 132 956 339 759", "451 545 439 399 317 727 570 389 456 723 643 149", "202 931 560 466 421 446 650 629 321 415 309 269", "187 597 440 259 326 593 753 232 287 571 496 451", "476 33 659 351 63 149 882 217 627 470 501 356 623", "543 107 410 316 271 296 59 522 171 374 534 119 37", "107 833 109 648 469 363 478 371 326 351 114 534", "606 320 214 174 960 502 345 164 231 498 418 674", "629 654 954 896 529 623 517 477 395 805 648 467", "534 801 899 535 560 323 743 435 529 423 383 345", "711 554 373 137 707 627 515 278 698 842 330 378", "338 256 666 509 328 395 662 519 257 723 415 509 7", "363 281 691 534 353 18 687 607 486 178 272 166 126", "44 454 86 116 677 450 370 551 692 586 109 463 874", "717 536 603 870 790 384 278 238 926 566 409 228", "695 562 482 372 332 250 660 503 322 389 656 576", "226 144 505 397 710 283 550 470 104 382 357 176", "243 510 430 432 687 94 579 428 348 615 504 571 838", "758 347 414 681 601 873 843 420 567 487 754"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> sums = {"703 264 359 229 415 336 631 499 427 467 315 300", "406 702 344 477 715 431 617 306 887 245 492 792", "533 564 762 809 900 127 563 669 965 607 740 978", "646 153 569 248 368 634 286 251 449 496 417 265", "250 356 652 294 427 665 680 567 256 203 334 255", "220 418 465 386 234 219 325 621 263 396 634 302", "536 225 204 125 90 288 804 256 104 89 195 491 906", "266 504 172 406 95 311 276 685 521 442 290 275 381", "677 90 452 690 358 592 74 197 224 442 363 211 343", "302 598 240 373 651 533 513 202 503 407 328 176", "161 267 730 205 338 576 244 478 167 605 526 374", "359 104 761 403 536 291 442 990 365 258 421 406", "512 808 450 583 821 489 723 412 342 903 433 729", "371 894 742 410 644 333 175 281 577 219 424 197", "258 492 181 266 562 848 337 575 243 477 166 668", "800 445 681 349 583 272 606 739 78 645 879 568 569", "619 287 521 210 752 420 654 343 658 892 581 560", "249 483"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> sums = {"727 304 772 446 453 509 587 355 497 437 905 763", "586 642 474 488 630 482 340 163 219 51 65 207 47", "631 687 519 730 704 489 545 547 391 533 368 200", "835 517 256 950 412 102 244 258"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> sums = {"733 563 708 717 545 675 653 735 346 474 344 284", "443 462 648 433 885 361 333 920 207 733 313 568", "449 704 201 426 768 913 922 750 880 858 940 551", "679 549 489 828 667 853 638 650 566 538 483 738", "963 518 681 654 834 704 631 743 752 580 710 688", "770 381 509 379 319 658 497 683 212 480 396 338", "313 568 768 348 603 484 739 534 461 897 725 719", "833 915 526 654 524 464 803 642 828 613 625 541", "513 458 713 913 989 289 629 884 679 577 734 864", "842 924 535 663 533 452 812 651 837 622 152 550", "794 467 722 922 502 757 638 893 688 615 692 670", "159 363 52 658 301 640 50 665 450 462 378 946 295", "550 750 330 864 466 466 516 443 800 882 493 111", "491 431 770 609 374 580 592 267 480 425 680 880", "460 452 596 851 646 630 860 471 599 973 409 748", "236 773 558 570 486 458 403 658 858 438 693 574", "829 556 551 553 681 551 491 830 669 855 640 652 72", "540 485 740 940 782 775 656 911 310 633 292 162", "102 331 660 466 251 263 179 151 96 286 551 131 386", "510 522 317 244 290 230 829 408 594 379 391 307", "279 224 479 679 259 514 395 650 142 372 506 439", "278 464 249 261 987 738 94 349 549 129 384 265 520", "397 242 379 805 404 189 945 117 89 137 289 489 69", "324 205 460 255 182 557 743 43 540 170 428 373 893", "828 408 663 544 799 594 240 582 367 379 926 267", "212 467 667 247 242 383 638 433 360 553 565 481", "453 398 653 853 433 688 569 824 619 546 350 266", "238 183 985 638 79 473 354 609 404 331 278 576 195", "94 650 230 485 380 621 416 343 166 111 366 704 146", "401 282 537 332 259 344 338 91 118 373 254 509 304", "231 139 483 63 685 199 641 249 176 768 318 573 454", "709 504 431 518 305 654 79 160 366 353 234 489 284", "211 300 313 539 466 625 420 347 675 602 397"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> sums = {"556 581 329 641 199 304 610 192 635 412 535 178", "276 743 637 247 269 468 348 236 380 895 651 175", "553 865 423 528 955 416 859 636 706 453 500 681", "861 471 493 692 572 460 604 806 875 578 768 448 91", "859 441 884 661 731 427 525 706 435 496 518 717", "597 205 311 831 900 625 196 301 607 189 632 820", "479 175 273 926 230 244 974 465 345 233 502 579", "648 508 613 919 291 944 812 791 487 585 766 946", "556 578 777 657 545 689 891 960 220 177 967 502", "876 627 45 143 641 618 114 136 335 215 103 247 449", "518 735 164 607 384 454 316 248 429 609 219 241", "440 320 208 352 564 623 470 913 68 760 456 554 735", "915 525 547 746 626 514 658 860 929 495 272 342 38", "136 317 497 107 129 328 208 96 240 442 663 715 341", "481 579 760 550 613 844 889 422 626 683 885 954", "562 258 356 537 717 327 349 548 428 316 460 662", "731 508 426 607 787 397 419 618 325 386 530 732", "801 122 303 483 941 115 715 194 82 226 428 497 401", "581 191 213 412 143 366 770 524 595 762 372 394", "361 473 361 505 707 776 552 574 773 949 541 685", "887 956 184 383 263 705 151 497 566 405 916 173", "128 519 588 484 372 516 718 787 252 396 24 842 284", "486 555 630 699 901"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> sums = {"830 486 479 708 664 510 646 353 227 325 487 526", "424 537 412 637 695 279 556 241 410 710 740 932", "680 548 870 577 451 549 711 750 444 248 458 861", "919 503 871 465 634 582 254 26 390 712 419 293 391", "553 386 490 95 478 870 761 345 713 307 812 804 760", "420 742 449 323 421 583 622 520 647 508 733 791", "594 648 337 506 952 612 934 641 515 613 775 814", "712 957 700 713 983 567 935 529 6 568 890 597 551", "569 967 770 668 913 570 881 117 523 819 485 981", "550 316 394 229 746 430 328 573 316 541 599 832", "755 145 314 983 154 551 713 752 650 895 638 943", "759 505 873 702 636 160 258 420 459 357 602 345", "570 628 212 580 174 343 132 294 440 148 476 454", "728 502 86 454 48 217 392 431 329 574 317 542 600", "184 552 499 315 593 491 736 479 704 795 619 714", "308 477 530 775 518 886 801 385 753 347 516 16 792", "641 841 283 651 245 414 661 886 944 528 896 490", "659 629 687 271 639 233 149 215 496 864 458 456", "554 569 516 685 506 100 269 468 637 580"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> sums = {"510 533 733 872 444 442 853 511 489 457 663 587", "460 23 380 497 689 634 876 945 368 612 630 383 233", "247 294 292 414 361 848 415 88 895 192 548 230 347", "714 484 405 677 584 462 480 52 270 317 760 437 384", "362 438 536 460 215 571 253 736 471 507 428 700", "616 485 503 120 167 165 287 234 212 288 386 310", "169 421 103 220 412 357 230 726 457 28 353 181 179", "301 248 540 302 400 739 79 435 117 234 426 470 292", "564 471 349 367 32 348 295 273 349 447 371 126 482", "164 281 57 418 339 611 518 396 414 346 293 362 347", "445 369 124 480 162 279 471 416 337 609 516 394", "692 125 393 469 257 491 246 602 284 401 410 538", "459 731 638 516 534 340 416 542 438 712 554 231", "418 540 485 518 678 585 463 450 394 492 416 171", "527 209 326 320 463 384 656 711 441 459 568 492", "247 429 285 402 594 539 769 732 639 116 535 590", "381 701 383 500 692 637 558 830 737 610 633 269", "224 307 424 616 561 219 754 90 539 645 380 62 179", "774 316 237 509 416 294 312 771 535 563 672 593", "865 772 650 668 217 409 354 275 547 454 332 350", "375 471 392 235 887 449 467 979 584 856 763 641", "659 529 454 729 586 709 722 629 507 525 901 779", "797 686 704 582"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> sums = {"763 639 816 344 615 372 292 514 468 300 307 738", "457 440 293 740 261 433 574 138 409 166 662 308", "214 94 101 588 251 234 87 176 382 910 487 758 515", "435 657 611 443 450 881 600 583 13 764 404 388 659", "416 336 558 843 344 929 782 501 484 337 426 305", "463 220 140 362 316 148 155 586 219 288 141 230", "109 995 411 633 587 419 265 857 730 559 412 501", "380 669 396 344 69 183 614 333 316 169 258 137 310", "264 96 103 534 253 236 545 178 57 486 318 909 756", "393 301 311 400 279 272 987 720 429 582 265 354", "233 111 542 261 244 97 186 65 549 268 76 104 193", "311 376 682 535 624 503 401 254 677 222 237 326", "205 179 459 147"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> sums = {"655 258 678 591 487 683 313 413 460 571 363 221", "235 243 391 321 551 646 228 472 215 467 309 622", "537 384 39 929 519 738 934 564 664 711 443 614 472", "618 839 753 890 802 897 479 723 466 718 560 873", "788 635 765 445 341 537 167 267 906 425 217 520", "221 7 356 175 405 64 82 326 311 321 163 476 391", "238 865 765 422 308 687 734 845 541 495 856 517", "776 595 825 920 502 837 489 269 65 465 811 658 674", "395 500 608 647 758 167 408 202 430 689 508 738", "833 328 659 402 654 496 809 724 571 766 396 496", "543 753 446 304 450 484 585 404 634 729 311 555", "298 550 392 705 620 467 592 966 739 850 642 500", "646 522 825 600 830 925 814 751 494 746 588 901", "816 8 322 535 480 272 130 276 152 411 230 460 555", "599 381 124 784 218 531 853 293 469 580 372 230", "376 252 511 662 560 655 237 481 224 476 318 904", "546 393 627 419 277 423 299 558 377 607 702 1 17", "271 523 778 678 593 440 530 388 534 410 669 488", "718 813 395 639 382 634 476 789 292 551 180 484", "202 461 91 510 605 187 880 174 480 63 581 496 343", "184 523 319 138 368 212 45 569 32 284 126 439 354", "201 206 465 284 514 609 191 176 178 430 403 969", "321 347 341 160 390 485 206 311 660 487 148 461", "376 223 419 649 744 326 570 313 565 648 720 635", "996 468 776 145 389 970 384 226 539 454 301 793", "375 619 929 614 456 769 684 531 470 714 457 709", "666 245 779 261 296 39 502 133 446 361 208 283 535", "377 690 605 452 278 120 371 348 195 372 685 600", "432 712 442 289 608 602 517"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> sums = {"613 266 353 156 479 51 124 334 255 386 381 365 348", "420 424 153 268 606 441 130 496 292 408 220 738", "692 864 717 509 439 640 905 766 750 733 805 345", "236 268 565 826 515 881 677 793 391 345 901 606", "162 135 293 558 419 403 804 458 202 519 266 218", "479 824 534 330 446 432 604 693 249 459 380 645", "506 490 473 545 549 278 393 305 566 255 621 417", "174 558 647 203 413 334 421 251 444 703 499 797", "232 436 259 520 209 575 371 487 866 684 87 506 771", "632 616 599 166 675 404 336 431 692 381 747 207", "659 464 674 595 860 721 705 688 760 764 493 608", "520 781 470 836 632 748 230 151 416 277 261 244", "366 519 49 164 76 337 274 503 188 304 361 626 487", "471 454 526 530 259 374 286 547 236 602 398 514", "547 408 392 375 447 451 180 295 207 502 157 523", "319 3 673 657 320 712 716 445 560 472 505 378 217", "584 700 518 935 573 577 306 421 333 594 283 279", "574 561 485 557 216 290 405 470 303 267 633 429", "545 540 544 273 603 300 561 250 332 412 528 616", "345 460 372 633 322 688 484 600 349 464 376 637", "326 692 488 54 193 230 366 55 421 217 333 220 481", "170 536 109 448 905 816 448 244 360 343 709 505", "531 398 194 310 560 676 472"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> sums = {"774 818 262 559 704 618 804 342 489 870 689 829", "932 869 634 930 560 486 886 497 501 189 242 387", "301 487 470 204 553 586 512 619 552 317 613 243", "169 569 976 376 429 574 488 946 657 359 740 559", "699 802 822 110 800 430 356 756 367 117 262 176", "362 345 47 428 247 512 521 369 192 488 118 883 444", "55 315 229 415 398 100 481 300 440 543 480 245 541", "171 97 497 108 374 66 543 245 585 445 585 688 850", "390 686 316 525 642 253 474 457 223 540 359 499", "602 707 304 600 230 156 556 656 643 720 250 545", "685 788 725 490 786 416 423 742 353 328 709 528", "668 771 722 473 769 876 325 772 336 411 230 370", "473 410 175 471 101 755 806 38 611 751 610 791 556", "274 482 408 808 419 570 673 610 230 882 301 703", "627 238 813 750 515 811 441 911 767 946 853 618", "914 544 470 870 481 555 851 481 407 807 418 930", "246 172 572 183 542 468 868 479 98 498 109 424 35", "550"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> sums = {"358 282 606 476 228 479 843 182 566 379 365 428", "527 577 493 472 335 647 349 565 764 546 302 626", "496 248 499 681 202 586 399 132 448 547 853 513", "492 355 980 369 585 517 625 550 420 172 423 81 126", "510 323 309 372 436 521 437 416 279 591 293 509", "441 133 744 496 553 929 426 834 647 633 696 795", "845 761 740 603 915 617 833 765 166 366 617 211", "320 606 517 503 566 665 949 631 610 473 785 487", "703 635 684 369 87 72 456 269 255 242 417 467 383", "362 225 537 204 723 387 436 802 323 334 520 506", "569 668 718 634 613 476 788 490 706 638 687 990", "889 984 688 751 850 188 816 137 658 970 672 877", "769 869 410 223 209 155 16 421 382 316 179 491 193", "409 341 390 607 593 656 800 805 721 700 563 875", "577 793 725 774 406 469 905 618 534 513 376 688", "652 606 538 587 455 554 604 7 499 362 674 376 592", "524 573 617 667 583 775 560 737 439 655 123 636", "766 682 661 524 836 538 754 686 735 732 711 574", "886 588 804 736 785 627 490 802 504 720 652 701", "469 781 483 885 631 680 644 346 562 494 543 658", "874 806 855 576 508 557 724 773 705"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> sums = {"583 299 779 316 577 614 518 812 726 260 244 519", "667 96 467 834 407 668 705 609 688 817 351 676 610", "758 175 627 200 461 498 795 481 610 144 469 403", "551 324 567 965 105 769 848 977 511 248 770 26 772", "401 438 342 421 550 84 876 343 491 413 699 743 682", "814 345 670 604 752 674 640 719 848 382 707 641", "789 711 623 58 286 611 545 693 784 831 254 690 624", "772 694 494 819 192 446 823 353 365 435 357 612", "760 682 694 616 764"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> sums = {"440 393 331 177 88 186 232 342 526 408 279 410 497", "210 472 277 495 946 451 297 100 306 352 462 367", "528 399 530 514 330 592 397 745 404 250 320 259", "305 415 599 481 352 713 720 283 545 350 568 415", "258 197 51 353 537 419 599 421 658 221 483 288 506", "104 43 89 199 383 265 136 267 504 67 329 134 352", "113 756 269 237 970 206 337 574 137 399 204 422 98", "208 392 274 145 276 513 76 338 143 361 254 438 320", "191 322 559 722 384 956 407 822 430 301 432 669", "232 494 299 517 614 485 616 853 416 678 483 701", "367 498 735 241 685 145 583 23 606 169 431 236 454", "737 300 562 367 585 998 799 111 822 362 167 652", "235 647 890"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> sums = {"533 564 145 181 570 527 845 439 162 297 278 537", "375 615 585 512 475 394 430 819 776 465 688 892 44", "528 786 237 864 834 761 87 123 443 10 158 381 161", "239 220 479 317 557 527 454 42 431 388 77 300 80", "37 139 398 236 476 446 373 467 21 113 336 116 194", "175 434 272 512 482 409 813 656 725 505 583 564", "356 785 901 871 798 459 682 462 540 521 780 618", "662 828 755 371 151 229 31 421 307 547 517 444 374", "452 433 210 647 770 740 667 232 213 472 67 550 520", "447 291 550 786 628 598 525 531 369 609 579 363", "628 868 838 765 867 676 603 916 843 813"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> sums = {"830 433 391 639 213 222 677 593 594 326 622 612", "299 456 463 421 669 243 252 707 623 624 356 252", "129 915 486 424 672 246 255 710 626 627 359 989", "745 837 489 630 204 213 668 522 585 317 213 603", "462 447 452 461 885 675 833 565 461 851 758 695 35", "490 406 407 139 950 425 198 269 499 325 416 148 44", "434 207 278 364 362 603 499 889 662 733 787 519", "415 805 578 649 520 416 157 552 650 148 538 311", "761 434 207 278 269 668 180"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> sums = {"503 390 197 476 466 489 295 435 477 273 275 373", "437 411 530 195 456 715 522 801 791 814 620 760", "867 598 600 698 228 736 855 520 378 409 688 913", "701 507 647 635 485 487 563 649 623 742 407 125", "495 485 530 231 454 561 292 820 26 456 430 538 214", "475 443 787 468 733 840 571 573 671 481 709 828", "753 754 777 583 723 682 561 563 661 725 699 818", "172 744 606 746 853 652 586 684 748 722 841 506", "767 552 659 390 392 490 554 528 647 312 552 799", "530 267 630 550 668 787 452 713 866 866 737 801", "775 894 559 820 850 468 532 506 625 290 551 86 534", "508 627 292 188 632 606 725 390 797 670 789 454", "715 763 428 689 547 808 473"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> sums = {"414 430 469 341 802 292 735 330 410 418 380 687", "701 322 361 233 634 184 627 222 302 310 259 579", "593 377 249 466 200 934 238 318 326 275 595 609", "288 689 239 682 277 357 733 314 801 648 561 111", "554 964 229 237 186 506 390 512 955 550 630 410", "587 907 921 658 100 180 188 137 457 471 543 260", "631 430 900 914 218 226 733 495 509 1 255 575 589", "263 944 597 532 546 866"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> sums = {"260 539 366 514 585 371 634 377 462 489 709 468", "610 652 703 535 302 377 764 886 423 964 472 215", "463 327 547 306 673 490 541 373 239 483 631 773", "488 751 494 462 606 826 585 727 769 820 652 393", "458 529 315 578 321 569 539 653 412 559 596 647", "590 246 392 463 726 469 717 581 801 560 702 744", "795 627 394 703 797 717 788 652 1 631 773 815 866", "16 915 583 326 574 438 658 789 559 363 652 484 251", "589 837 701 921 680 822 864 915 747 514 580 444", "798 423 565 607 493 490 257 692 803 671 813 855", "906 738 505 776 535 677 436 770 602 369 755 97 939", "990 481 589 656 698 749 581 348 840 891 723 490", "933 765 6 816 583 415"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> sums = {"335 473 323 173 847 167 479 75 518 269 188 447 992", "171 260 132 660 510 360 278 354 532 262 705 456", "375 634 475 83 447 319 648 541 547 492 804 400 843", "767 335 579 613 496 585 457 348 744 135 654 250 81", "975 363 622 463 346 435 275 116 192 504 100 543", "294 213 472 313 196 285 157 110 422 18 461 212 197", "390 231 114 203 75 498 97 537 288 207 466 307 190", "279 151 406 849 914 626 778 550 502 591 463 445", "196 115 374 215 98 187 59 639 558 817 658 541 630", "35 309 146 409 292 381 326 487 328 943 300 172 907", "470 559 431 311 511 272 283 155 244"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> sums = {"693 419 295 181 400 352 590 548 915 378 295 689", "564 960 327 303 459 567 543 350 547 430 773 535", "814 439 683 696 858 430 824 699 474 501 438 594", "209 678 598 397 381 254 533 725 402 415 675 149", "543 948 193 220 779 580 145 397 204 264 137 416 50", "102 298 638 32 426 301 965 103 40 844 28 280 87", "369 648 559 517 530 692 264 658 533 308 335 992", "428 260 512 602 521 631 390 403 565 137 531 963", "181 208 145 301 133 385 764 711 669 682 844 416", "810 560 460 487 424 580 412 737 471 580 593 755", "327 721 596 371 793 335 491 323 575 382 551 713", "285 679 554 329 234 293 449 904 533 340 726 298", "692 567 342 369 306 462 886 753 353 460 854 729", "504 531 468 624 456 914 74 426 301 76 103 40 196", "374 280 87 695 470 497 434 590 422 722 481 345 372", "309 465 297 549 356 147 84 466 72 324 421 995 267", "99 351 158 204 932 288 95 192 444 768 276 698 335"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> sums = {"88 509 500 341 414 47 707 241 456 55 533 202 365", "438 119 442 431 449 79 927 900 216 492 771 686 750", "500 812 850 135 854 677 892 491 691 324 695 518", "733 332 242 768 591 581 405 401 224 439 38 595 810", "409 633 232 447"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> sums = {"5 7 8 8 6 4 6 8 5 6 7 5 7 8 6 8 6 4 4 5 6 6 5 5 6", "4 4 7 5 4 8 8 4 7 4 8 6 6 7 4 8 8 5 5 5 8 8 6 8 4", "5 5 3 1 3 5 2 3 4 2 4 5 3 5 3 1 1 2 3 3 2 2 3 1 1", "4 2 1 5 5 1 4 1 5 3 3 4 1 5 5 2 2 2 5 5 3 5 7 7 5", "3 5 7 4 5 6 4 6 7 5 7 5 3 3 4 5 5 4 4 5 3 3 6 4 3", "7 7 3 6 3 7 5 5 6 3 7 7 4 4 4 7 7 5 7 8 6 4 6 8 5", "6 7 5 7 8 6 8 6 4 4 5 6 6 5 5 6 4 4 7 5 4 8 8 4 7", "4 8 6 6 7 4 8 8 5 5 5 8 8 6 8 6 4 6 8 5 6 7 5 7 8", "6 8 6 4 4 5 6 6 5 5 6 4 4 7 5 4 8 8 4 7 4 8 6 6 7", "4 8 8 5 5 5 8 8 6 8 2 4 6 3 4 5 3 5 6 4 6 4 2 2 3", "4 4 3 3 4 2 2 5 3 2 6 6 2 5 2 6 4 4 5 2 6 6 3 3 3", "6 6 4 6 2 4 1 2 3 1 3 4 2 4 2 0 0 1 2 2 1 1 2 0 0", "3 1 0 4 4 0 3 0 4 2 2 3 0 4 4 1 1 1 4 4 2 4 6 3 4", "5 3 5 6 4 6 4 2 2 3 4 4 3 3 4 2 2 5 3 2 6 6 2 5 2", "6 4 4 5 2 6 6 3 3 3 6 6 4 6 5 6 7 5 7 8 6 8 6 4 4", "5 6 6 5 5 6 4 4 7 5 4 8 8 4 7 4 8 6 6 7 4 8 8 5 5", "5 8 8 6 8 3 4 2 4 5 3 5 3 1 1 2 3 3 2 2 3 1 1 4 2", "1 5 5 1 4 1 5 3 3 4 1 5 5 2 2 2 5 5 3 5 5 3 5 6 4", "6 4 2 2 3 4 4 3 3 4 2 2 5 3 2 6 6 2 5 2 6 4 4 5 2", "6 6 3 3 3 6 6 4 6 4 6 7 5 7 5 3 3 4 5 5 4 4 5 3 3", "6 4 3 7 7 3 6 3 7 5 5 6 3 7 7 4 4 4 7 7 5 7 4 5 3", "5 3 1 1 2 3 3 2 2 3 1 1 4 2 1 5 5 1 4 1 5 3 3 4 1", "5 5 2 2 2 5 5 3 5 7 5 7 5 3 3 4 5 5 4 4 5 3 3 6 4", "3 7 7 3 6 3 7 5 5 6 3 7 7 4 4 4 7 7 5 7 6 8 6 4 4", "5 6 6 5 5 6 4 4 7 5 4 8 8 4 7 4 8 6 6 7 4 8 8 5 5", "5 8 8 6 8 6 4 2 2 3 4 4 3 3 4 2 2 5 3 2 6 6 2 5 2", "6 4 4 5 2 6 6 3 3 3 6 6 4 6 6 4 4 5 6 6 5 5 6 4 4", "7 5 4 8 8 4 7 4 8 6 6 7 4 8 8 5 5 5 8 8 6 8 2 2 3", "4 4 3 3 4 2 2 5 3 2 6 6 2 5 2 6 4 4 5 2 6 6 3 3 3", "6 6 4 6 0 1 2 2 1 1 2 0 0 3 1 0 4 4 0 3 0 4 2 2 3", "0 4 4 1 1 1 4 4 2 4 1 2 2 1 1 2 0 0 3 1 0 4 4 0 3", "0 4 2 2 3 0 4 4 1 1 1 4 4 2 4 3 3 2 2 3 1 1 4 2 1", "5 5 1 4 1 5 3 3 4 1 5 5 2 2 2 5 5 3 5 4 3 3 4 2 2", "5 3 2 6 6 2 5 2 6 4 4 5 2 6 6 3 3 3 6 6 4 6 3 3 4", "2 2 5 3 2 6 6 2 5 2 6 4 4 5 2 6 6 3 3 3 6 6 4 6 2", "3 1 1 4 2 1 5 5 1 4 1 5 3 3 4 1 5 5 2 2 2 5 5 3 5", "3 1 1 4 2 1 5 5 1 4 1 5 3 3 4 1 5 5 2 2 2 5 5 3 5", "2 2 5 3 2 6 6 2 5 2 6 4 4 5 2 6 6 3 3 3 6 6 4 6 0", "3 1 0 4 4 0 3 0 4 2 2 3 0 4 4 1 1 1 4 4 2 4 3 1 0", "4 4 0 3 0 4 2 2 3 0 4 4 1 1 1 4 4 2 4 4 3 7 7 3 6", "3 7 5 5 6 3 7 7 4 4 4 7 7 5 7 1 5 5 1 4 1 5 3 3 4", "1 5 5 2 2 2 5 5 3 5 4 4 0 3 0 4 2 2 3 0 4 4 1 1 1", "4 4 2 4 8 4 7 4 8 6 6 7 4 8 8 5 5 5 8 8 6 8 4 7 4", "8 6 6 7 4 8 8 5 5 5 8 8 6 8 3 0 4 2 2 3 0 4 4 1 1", "1 4 4 2 4 3 7 5 5 6 3 7 7 4 4 4 7 7 5 7 4 2 2 3 0", "4 4 1 1 1 4 4 2 4 6 6 7 4 8 8 5 5 5 8 8 6 8 4 5 2", "6 6 3 3 3 6 6 4 6 5 2 6 6 3 3 3 6 6 4 6 3 7 7 4 4", "4 7 7 5 7 4 4 1 1 1 4 4 2 4 8 5 5 5 8 8 6 8 5 5 5", "8 8 6 8 2 2 5 5 3 5 2 5 5 3 5 5 5 3 5 8 6 8 6 8 6"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> sums = {"5 5 4 3 5 2 5 3 3 1 3 5 3 5 4 4 4 3 1 3 3 4 5 5 3", "5 4 2 4 4 2 2 5 3 5 5 5 2 3 3 4 2 3 3 4 3 1 3 3 8", "7 6 8 5 8 6 6 4 6 8 6 8 7 7 7 6 4 6 6 7 8 8 6 8 7", "5 7 7 5 5 8 6 8 8 8 5 6 6 7 5 6 6 7 6 4 6 6 7 6 8", "5 8 6 6 4 6 8 6 8 7 7 7 6 4 6 6 7 8 8 6 8 7 5 7 7", "5 5 8 6 8 8 8 5 6 6 7 5 6 6 7 6 4 6 6 5 7 4 7 5 5", "3 5 7 5 7 6 6 6 5 3 5 5 6 7 7 5 7 6 4 6 6 4 4 7 5", "7 7 7 4 5 5 6 4 5 5 6 5 3 5 5 6 3 6 4 4 2 4 6 4 6", "5 5 5 4 2 4 4 5 6 6 4 6 5 3 5 5 3 3 6 4 6 6 6 3 4", "4 5 3 4 4 5 4 2 4 4 5 8 6 6 4 6 8 6 8 7 7 7 6 4 6", "6 7 8 8 6 8 7 5 7 7 5 5 8 6 8 8 8 5 6 6 7 5 6 6 7", "6 4 6 6 5 3 3 1 3 5 3 5 4 4 4 3 1 3 3 4 5 5 3 5 4", "2 4 4 2 2 5 3 5 5 5 2 3 3 4 2 3 3 4 3 1 3 3 6 6 4", "6 8 6 8 7 7 7 6 4 6 6 7 8 8 6 8 7 5 7 7 5 5 8 6 8", "8 8 5 6 6 7 5 6 6 7 6 4 6 6 4 2 4 6 4 6 5 5 5 4 2", "4 4 5 6 6 4 6 5 3 5 5 3 3 6 4 6 6 6 3 4 4 5 3 4 4", "5 4 2 4 4 2 4 6 4 6 5 5 5 4 2 4 4 5 6 6 4 6 5 3 5", "5 3 3 6 4 6 6 6 3 4 4 5 3 4 4 5 4 2 4 4 2 4 2 4 3", "3 3 2 0 2 2 3 4 4 2 4 3 1 3 3 1 1 4 2 4 4 4 1 2 2", "3 1 2 2 3 2 0 2 2 6 4 6 5 5 5 4 2 4 4 5 6 6 4 6 5", "3 5 5 3 3 6 4 6 6 6 3 4 4 5 3 4 4 5 4 2 4 4 6 8 7", "7 7 6 4 6 6 7 8 8 6 8 7 5 7 7 5 5 8 6 8 8 8 5 6 6", "7 5 6 6 7 6 4 6 6 6 5 5 5 4 2 4 4 5 6 6 4 6 5 3 5", "5 3 3 6 4 6 6 6 3 4 4 5 3 4 4 5 4 2 4 4 7 7 7 6 4", "6 6 7 8 8 6 8 7 5 7 7 5 5 8 6 8 8 8 5 6 6 7 5 6 6", "7 6 4 6 6 6 6 5 3 5 5 6 7 7 5 7 6 4 6 6 4 4 7 5 7", "7 7 4 5 5 6 4 5 5 6 5 3 5 5 6 5 3 5 5 6 7 7 5 7 6", "4 6 6 4 4 7 5 7 7 7 4 5 5 6 4 5 5 6 5 3 5 5 5 3 5", "5 6 7 7 5 7 6 4 6 6 4 4 7 5 7 7 7 4 5 5 6 4 5 5 6", "5 3 5 5 2 4 4 5 6 6 4 6 5 3 5 5 3 3 6 4 6 6 6 3 4", "4 5 3 4 4 5 4 2 4 4 2 2 3 4 4 2 4 3 1 3 3 1 1 4 2", "4 4 4 1 2 2 3 1 2 2 3 2 0 2 2 4 5 6 6 4 6 5 3 5 5", "3 3 6 4 6 6 6 3 4 4 5 3 4 4 5 4 2 4 4 5 6 6 4 6 5", "3 5 5 3 3 6 4 6 6 6 3 4 4 5 3 4 4 5 4 2 4 4 7 7 5", "7 6 4 6 6 4 4 7 5 7 7 7 4 5 5 6 4 5 5 6 5 3 5 5 8", "6 8 7 5 7 7 5 5 8 6 8 8 8 5 6 6 7 5 6 6 7 6 4 6 6", "6 8 7 5 7 7 5 5 8 6 8 8 8 5 6 6 7 5 6 6 7 6 4 6 6", "6 5 3 5 5 3 3 6 4 6 6 6 3 4 4 5 3 4 4 5 4 2 4 4 7", "5 7 7 5 5 8 6 8 8 8 5 6 6 7 5 6 6 7 6 4 6 6 4 6 6", "4 4 7 5 7 7 7 4 5 5 6 4 5 5 6 5 3 5 5 4 4 2 2 5 3", "5 5 5 2 3 3 4 2 3 3 4 3 1 3 3 6 4 4 7 5 7 7 7 4 5", "5 6 4 5 5 6 5 3 5 5 4 4 7 5 7 7 7 4 5 5 6 4 5 5 6", "5 3 5 5 2 5 3 5 5 5 2 3 3 4 2 3 3 4 3 1 3 3 5 3 5", "5 5 2 3 3 4 2 3 3 4 3 1 3 3 6 8 8 8 5 6 6 7 5 6 6", "7 6 4 6 6 6 6 6 3 4 4 5 3 4 4 5 4 2 4 4 8 8 5 6 6", "7 5 6 6 7 6 4 6 6 8 5 6 6 7 5 6 6 7 6 4 6 6 5 6 6", "7 5 6 6 7 6 4 6 6 3 3 4 2 3 3 4 3 1 3 3 4 5 3 4 4", "5 4 2 4 4 5 3 4 4 5 4 2 4 4 4 5 5 6 5 3 5 5 3 3 4", "3 1 3 3 4 5 4 2 4 4 5 4 2 4 4 5 3 5 5 2 4 4 2 2 4"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> sums = {"327 3 5 2 688 5 602 3 3 5 555 3 4 2 214 1 4 734", "877 668 2 921 2 3 2 2 5 1 715 1 914 1 2 2 5 5 5 5", "439 4 2 1 4 302 6 497 5 4 8 5 6 6 8 5 6 971 5 905", "4 7 616 8 5 5 184 308 589 5 5 668 4 7 4 7 4 5 5 8", "149 31 8 5 7 793 4 804 7 420 3 2 6 3 4 4 6 3 4 5 3", "5 2 5 4 6 3 3 2 3 4 3 954 6 2 5 2 5 2 3 891 6 6 6", "6 3 5 3 440 5 5 5 4 8 5 6 6 496 5 24 7 5 7 4 7 6 8", "5 5 4 5 6 313 5 8 306 714 4 7 4 5 5 8 8 8 8 5 7 5", "4 7 229 1 5 2 3 3 5 2 3 4 580 4 1 4 3 5 2 2 1 2 3", "2 2 5 1 14 1 4 1 2 2 5 5 5 5 2 4 2 1 4 4 4 847 2 2", "4 1 2 323 1 3 0 3 2 4 1 1 0 1 2 1 1 76 0 3 155 921", "0 1 470 4 4 4 632 1 3 1 0 3 3 5 6 6 8 580 396 7 5", "7 4 7 828 8 267 5 4 5 6 5 5 8 4 7 4 7 4 88 5 8 8 8", "8 5 7 5 4 7 7 122 3 5 913 3 4 2 4 1 4 3 5 2 2 1 2", "795 2 214 991 1 4 1 4 545 2 478 5 881 5 5 2 4 601", "1 560 4 4 6 3 4 71 3 5 2 5 4 6 3 3 2 3 4 3 3 6 2", "588 2 51 2 3 3 146 293 937 6 3 866 659 2 5 5 6 3 4", "5 3 5 2 338 4 78 3 3 2 3 4 3 3 6 2 5 2 325 66 3 3", "6 6 767 6 416 5 981 2 5 5 796 6 7 5 7 824 7 6 8 5", "5 4 5 714 5 5 8 4 7 4 7 4 5 5 8 8 440 8 5 389 296", "4 909 7 3 4 2 4 1 4 3 5 2 613 1 2 3 2 2 5 1 4 1 4", "1 2 2 5 5 446 5 2 4 2 837 4 179 5 3 32 2 5 4 6 3 3", "2 688 4 3 3 6 2 636 2 5 2 3 3 6 548 6 6 3 5 3 2 5", "5 311 6 3 6 5 7 4 997 3 4 5 843 4 7 3 6 630 6 222", "4 4 365 7 7 7 4 612 5 3 6 6 4 1 4 3 511 778 2 1 2", "590 2 2 5 1 4 1 126 1 6 2 5 5 5 5 2 4 2 1 4 4 702", "6 5 828 4 4 3 270 5 4 4 7 3 6 3 6 3 4 4 7 7 7 7", "494 758 4 3 6 6 3 2 4 675 1 0 1 2 1 1 4 0 3 0 3 0", "1 1 4 4 4 4 1 3 1 0 3 3 5 7 4 4 3 4 5 4 4 7 3 6", "397 6 632 4 4 7 767 917 7 110 6 4 3 6 6 6 3 139 2", "3 4 3 3 6 2 5 81 5 2 510 3 206 6 6 6 3 5 694 2 5 5", "5 5 4 5 6 913 257 8 4 7 4 7 4 902 5 8 535 8 8 5 7", "5 4 7 7 2 1 2 3 444 811 5 1 4 1 4 1 681 2 5 5 332", "5 2 4 213 1 4 4 220 2 3 2 35 5 1 4 1 4 1 118 2 5 5", "5 5 2 4 2 222 4 4 1 2 1 1 4 0 3 0 3 0 1 1 4 4 4 4", "1 3 1 0 3 103 3 2 2 5 1 4 1 611 1 2 2 5 5 5 5 2 4", "2 198 4 4 3 585 6 2 5 2 5 2 929 621 6 6 111 6 3 5", "385 2 404 5 2 5 1 178 1 544 1 2 2 5 5 5 5 2 4 2", "811 4 4 5 1 116 1 4 450 2 741 426 5 5 690 2 4 2 1", "4 4 4 7 623 7 194 5 5 8 8 8 8 5 7 5 4 7 7 3 0 3 0", "1 1 4 4 4 23 1 3 33 0 3 3 3 6 3 4 4 873 7 7 144 4", "135 375 3 488 6 664 0 1 1 4 4 4 4 997 3 1 0 595 3", "963 4 4 7 7 7 7 4 6 4 3 6 6 1 528 4 157 4 4 1 3 1", "0 3 3 141 5 5 5 5 2 4 2 1 4 4 5 5 5 5 2 4 2 1 4 4", "8 8 8 5 698 5 4 7 7 8 8 5 7 431 4 7 7 8 5 588 5 4", "7 7 52 139 5 4 7 7 4 2 1 893 4 4 3 6 6 1 4 4 3 3", "173"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> sums = {"5 4 3"};
    PairwiseSums* pObj = new PairwiseSums();
    clock_t start = clock();
    vector<int> result = pObj->reverse(sums);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=307060&rd=4730&pm=595
********************************************************************************
#line 5 "PairwiseSums.cpp" 
#include <string> 
#include <vector> 
#include <map> 
#include <set> 
#include <algorithm> 
#include <cmath> 
#include <cstdio> 
#include <iostream> 
#include <queue> 
#include <sstream> 
using namespace std; 
 
int n,m,sol[100]; 
int s[2502],used[2502]; 
 
int comp(const int *a,const int *b) { 
  return(*a-*b); 
} 
 
int setused(int sum) { 
  int i; 
  for (i=1; i<m; i++) { 
    if (!used[i] && s[i] == sum) { 
      used[i] = 1; 
      return(1); 
    } 
  } 
  return(0); 
} 
 
int isvalid(int k) { 
  int i,j,h; 
  for (i=0; i<m; i++) used[i] = 0; 
  for (i=j=1; i<n-1; i++,j++) { 
    while(j<m && used[j]) j++; 
    if (j == m) return(0); 
    sol[i] = s[j]-k; 
    used[j] = 1; 
    for (h=0; h<i; h++) { 
      if (!setused(sol[i]+sol[h])) return(0); 
    } 
  } 
  return(1); 
} 
 
class PairwiseSums { 
  public: 
  vector <int> reverse(vector <string> sums) { 
    m = 0; 
    for (int i=0; i<sums.size(); i++) { 
      istringstream istr(sums[i]); 
      while(istr >> s[m]) 
        m++; 
    } 
    for (n=2; n*(n-1)/2<=m; n++) { 
      if (n*(n-1)/2 == m) 
        break; 
    } 
    vector<int> res; 
    if (n*(n-1)/2 != m) 
      return res; 
    sort(s,s+m); 
    int i; 
    for (i=s[0]/2; i>=0; i--) { 
      sol[0] = s[0]-i; 
      if (s[n-1]-sol[0]<sol[0]) break; 
      if (isvalid(i)) { 
        if (res.size()) { 
          res.clear(); 
          break; 
        } 
        else { 
          res.push_back(i); 
          for (int j=0; j<n-1; j++) 
            res.push_back(sol[j]); 
        } 
      } 
    } 
    return res; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/