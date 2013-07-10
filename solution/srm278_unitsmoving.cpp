/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5921
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

class UnitsMoving {
public:
    double bestTime(vector<string> start, vector<string> finish);
};

double UnitsMoving::bestTime(vector<string> start, vector<string> finish) {
    double ret;
    return ret;
}


int test0() {
    vector<string> start = {"0 0 1", "0 1 1"};
    vector<string> finish = {"1 1", "1 0"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
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
    vector<string> start = {"0 0 1", "0 1 1"};
    vector<string> finish = {"1 1", "2 1"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> start = {"0 0 10", "0 1 1"};
    vector<string> finish = {"1 1", "2 1"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> start = {"0 0 1", "0 2 1"};
    vector<string> finish = {"0 1", "0 4"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> start = {"0 0 3", "0 2 1"};
    vector<string> finish = {"0 1", "0 4"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> start = {"0 0 1", "0 1 1"};
    vector<string> finish = {"1 1", "1 2"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> start = {"0 0 1", "5 0 1"};
    vector<string> finish = {"5 12", "10 12"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> start = {"0 0 2", "5 0 1"};
    vector<string> finish = {"5 12", "10 12"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> start = {"308 994 10", "157 22 9", "282 975 5", "993 17 8", "925 771 2", "843 110 6", "860 629 8", "947 143 6", "921 348 7", "520 607 6", "735 306 3", "253 861 7", "562 56 9", "243 168 2", "521 971 1", "745 537 7"};
    vector<string> finish = {"431 911", "109 951", "177 721", "295 831", "937 256", "608 180", "863 994", "148 406", "275 531", "635 297", "681 404", "909 151", "569 730", "332 391", "94 97", "376 142"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 115.72920979597156;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> start = {"478 880 3", "861 735 10", "487 979 1", "31 206 7", "94 859 2", "418 318 8", "644 348 1", "315 222 5", "10 313 1", "125 576 5", "862 309 4", "617 521 9", "515 61 7", "66 835 9", "14 283 9", "512 182 8", "840 306 3", "613 412 1", "614 53 2", "681 135 2"};
    vector<string> finish = {"532 347", "783 789", "740 770", "885 427", "651 120", "932 297", "396 32", "46 424", "601 25", "411 14", "275 903", "162 305", "715 831", "236 712", "386 704", "813 766", "794 255", "470 509", "357 341", "534 317"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 225.21101216414795;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> start = {"155 512 9", "900 686 3", "22 946 7", "753 66 3", "151 837 9", "487 25 5", "574 930 5", "736 512 7", "274 891 7", "241 331 9", "730 54 2"};
    vector<string> finish = {"431 760", "948 985", "451 54", "373 826", "64 602", "741 846", "532 949", "297 514", "533 621", "572 948", "989 586"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 190.3493863633106;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> start = {"144 415 8", "711 591 1", "668 163 2", "316 721 6", "251 644 6"};
    vector<string> finish = {"992 772", "302 319", "773 675", "144 826", "616 43"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 112.98684780883913;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> start = {"354 690 9", "571 398 2"};
    vector<string> finish = {"124 25", "46 925"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 291.0919098841464;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> start = {"78 520 5", "827 239 5", "620 200 7", "809 269 7"};
    vector<string> finish = {"986 496", "754 745", "772 375", "44 223"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 68.45242650102004;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> start = {"121 780 1", "427 629 3", "242 363 2", "342 629 9", "946 30 10", "372 654 10", "994 805 1"};
    vector<string> finish = {"943 713", "692 492", "641 42", "198 643", "244 738", "238 193", "629 643"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 129.9730741346068;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> start = {"44 325 8", "294 829 10", "45 122 1", "408 401 1", "680 892 2", "287 865 1"};
    vector<string> finish = {"230 638", "566 570", "133 416", "121 355", "332 265", "396 28"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 245.08161905781512;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> start = {"805 94 6", "251 615 4", "422 134 2", "266 597 2"};
    vector<string> finish = {"650 218", "260 497", "564 721", "794 619"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 121.49074038789952;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> start = {"83 534 8", "22 177 3", "655 933 1", "486 996 2", "330 45 1", "726 185 7", "127 144 4", "572 736 10", "810 953 8", "651 307 8", "372 710 2", "342 934 8", "372 472 5", "890 797 3", "905 460 10", "533 450 2", "404 15 10"};
    vector<string> finish = {"189 327", "132 117", "770 687", "765 508", "312 364", "357 974", "793 320", "487 932", "376 198", "571 612", "241 827", "93 599", "778 465", "524 203", "826 304", "226 377", "885 736"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 168.00297616411441;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> start = {"125 574 3", "543 503 3", "516 398 7", "24 322 4", "469 640 1", "821 527 5", "41 64 2", "209 934 9", "389 360 6", "150 415 7", "521 344 7", "814 374 1", "730 503 8", "535 955 5", "239 159 10", "61 773 1", "712 981 8", "546 228 6", "172 644 10", "374 627 4", "139 778 1", "900 593 3", "515 220 1", "502 630 7", "419 626 9", "693 969 10", "857 557 6", "7 357 2", "572 256 8", "459 258 9", "819 95 2", "231 441 3", "841 435 9", "39 532 5", "447 619 5", "415 809 8", "148 357 3", "125 270 1", "8 83 6", "581 589 5", "262 849 10", "651 80 9", "576 203 9", "284 685 1", "495 104 9", "216 737 5", "4 212 5", "223 707 7", "444 79 5", "77 538 6"};
    vector<string> finish = {"260 587", "295 589", "111 466", "700 14", "670 47", "668 787", "923 155", "313 363", "601 309", "446 411", "43 754", "663 436", "531 289", "291 472", "500 767", "735 515", "265 962", "196 769", "323 263", "262 736", "815 459", "494 217", "775 399", "604 387", "727 150", "480 197", "644 162", "636 104", "792 391", "228 466", "797 14", "80 629", "766 50", "47 77", "106 686", "438 852", "937 713", "150 423", "68 933", "847 611", "148 592", "298 477", "907 454", "525 396", "228 510", "978 727", "968 227", "611 999", "723 192", "637 754"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 155.0290295396317;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> start = {"0 724 6", "0 355 4", "0 159 9", "0 816 9", "0 765 2", "0 21 8", "0 416 2", "0 243 4", "0 732 5", "0 374 5", "0 746 8", "0 191 2", "0 198 8", "0 271 10", "0 858 3", "0 401 8", "0 312 4", "0 951 7", "0 936 3", "0 813 2", "0 254 2", "0 626 3", "0 866 1", "0 389 3", "0 230 10", "0 42 1", "0 553 2", "0 805 8", "0 53 8", "0 787 8", "0 64 3", "0 917 2", "0 178 2", "0 491 4", "0 607 3", "0 759 2", "0 140 10", "0 397 4", "0 437 2", "0 78 3", "0 301 1", "0 945 10", "0 961 4", "0 780 1", "0 740 6", "0 307 6", "0 572 4", "0 230 9", "0 652 4", "0 910 5"};
    vector<string> finish = {"10 450", "10 255", "10 682", "10 92", "10 713", "10 687", "10 478", "10 84", "10 646", "10 338", "10 950", "10 558", "10 774", "10 857", "10 883", "10 889", "10 877", "10 492", "10 529", "10 619", "10 919", "10 943", "10 187", "10 154", "10 885", "10 191", "10 767", "10 753", "10 156", "10 167", "10 807", "10 426", "10 97", "10 901", "10 26", "10 645", "10 236", "10 262", "10 346", "10 786", "10 955", "10 251", "10 376", "10 994", "10 831", "10 855", "10 257", "10 977", "10 270", "10 933"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 37.41336659537605;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> start = {"0 0 1", "0 1 1", "0 2 1", "0 3 1", "0 4 1", "0 5 1", "0 6 1", "0 7 1", "0 8 1", "0 9 1", "0 10 1", "0 11 1", "0 12 1", "0 13 1", "0 14 1", "0 15 1", "0 16 1", "0 17 1", "0 18 1", "0 19 1", "0 20 1", "0 21 1", "0 22 1", "0 23 1", "0 24 1", "0 25 1", "0 26 1", "0 27 1", "0 28 1", "0 29 1", "0 30 1", "0 31 1", "0 32 1", "0 33 1", "0 34 1", "0 35 1", "0 36 1", "0 37 1", "0 38 1", "0 39 1", "0 40 1", "0 41 1", "0 42 1", "0 43 1", "0 44 1", "0 45 1", "0 46 1", "0 47 1", "0 48 1", "0 49 1"};
    vector<string> finish = {"10 0", "10 1", "10 2", "10 3", "10 4", "10 5", "10 6", "10 7", "10 8", "10 9", "10 10", "10 11", "10 12", "10 13", "10 14", "10 15", "10 16", "10 17", "10 18", "10 19", "10 20", "10 21", "10 22", "10 23", "10 24", "10 25", "10 26", "10 27", "10 28", "10 29", "10 30", "10 31", "10 32", "10 33", "10 34", "10 35", "10 36", "10 37", "10 38", "10 39", "10 40", "10 41", "10 42", "10 43", "10 44", "10 45", "10 46", "10 47", "10 48", "0 1000"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 951.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> start = {"0 859 1", "0 95 1", "0 438 1", "0 27 1", "0 502 1", "0 388 1", "0 454 1", "0 25 1", "0 746 1", "0 169 1", "0 538 1", "0 682 1", "0 773 1", "0 959 1", "0 314 1", "0 886 1", "0 207 1", "0 449 1", "0 321 1", "0 473 1", "0 401 1", "0 662 1", "0 723 1", "0 507 1", "0 648 1", "0 171 1", "0 342 1", "0 661 1", "0 679 1", "0 347 1", "0 402 1", "0 769 1", "0 532 1", "0 576 1", "0 67 1", "0 89 1", "0 889 1", "0 919 1", "0 695 1", "0 627 1", "0 646 1", "0 942 1", "0 587 1", "0 140 1", "0 781 1", "0 905 1", "0 547 1", "0 322 1", "0 406 1", "0 382 1"};
    vector<string> finish = {"10 946", "10 190", "10 596", "10 438", "10 358", "10 226", "10 8", "10 0", "10 927", "10 597", "10 163", "10 993", "10 243", "10 531", "10 924", "10 1", "10 760", "10 512", "10 101", "10 61", "10 920", "10 372", "10 336", "10 646", "10 632", "10 635", "10 834", "10 810", "10 203", "10 448", "10 738", "10 301", "10 785", "10 624", "10 557", "10 65", "10 503", "10 453", "10 592", "10 222", "10 529", "10 717", "10 69", "10 459", "10 180", "10 250", "10 11", "10 581", "0 1000", "10 999"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 139.35924798878617;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> start = {"586 583 9", "421 939 6", "649 433 9", "813 700 10", "360 772 9", "914 610 6", "658 163 7", "723 207 8", "880 52 10", "957 861 5", "434 762 3", "475 535 6", "532 634 3", "674 392 9", "210 573 2", "120 415 1", "972 683 1", "351 857 2", "220 615 5", "302 874 7", "237 275 1", "902 996 8", "708 117 8", "642 528 3", "444 810 2", "824 75 8", "120 508 4", "269 654 2", "654 569 10", "295 580 6", "253 353 8", "849 318 1", "852 277 3", "870 927 1", "181 874 3", "865 240 8", "905 62 3", "92 377 1", "191 678 4", "139 217 7", "658 590 5", "907 466 5", "470 552 10", "152 203 10", "696 808 10", "443 597 10", "310 254 1", "116 977 4", "571 93 7", "445 314 4"};
    vector<string> finish = {"489 264", "604 409", "707 95", "219 437", "629 261", "734 344", "845 856", "451 573", "985 349", "571 757", "374 926", "766 970", "681 351", "360 370", "857 479", "825 24", "91 598", "942 593", "649 931", "345 456", "692 81", "613 365", "427 947", "950 699", "995 236", "19 134", "486 622", "566 165", "520 541", "816 675", "179 882", "791 184", "925 425", "597 779", "661 838", "475 503", "92 639", "59 198", "517 175", "942 668", "298 822", "946 314", "692 98", "348 514", "957 991", "773 1", "89 757", "25 873", "968 676", "218 479"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 179.27911200137063;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> start = {"822 566 7", "623 651 5", "38 273 4", "444 153 3", "962 263 8", "114 194 7", "782 606 4", "121 728 1", "706 180 9", "320 672 2", "285 814 4", "68 358 5", "816 738 4", "697 815 2", "58 429 9", "351 65 8", "256 342 4", "388 730 2", "481 288 9", "651 825 9", "912 308 2", "175 722 9", "501 819 6", "361 636 4", "532 373 2", "525 566 2", "990 381 1", "695 165 5", "724 936 9", "900 965 3", "572 835 10", "788 499 7", "119 172 10", "458 204 10", "648 105 9", "547 202 5", "697 343 4", "270 94 8", "83 104 8", "160 183 7", "139 170 10", "57 704 7", "606 210 7", "537 934 9", "605 896 6", "153 960 5", "169 931 7", "126 443 5", "763 399 1", "353 50 5"};
    vector<string> finish = {"45 273", "308 403", "752 643", "405 838", "364 336", "328 382", "970 378", "485 469", "74 402", "94 33", "917 934", "426 558", "418 713", "483 199", "626 108", "931 735", "92 914", "817 865", "1 462", "72 456", "866 768", "893 803", "961 69", "695 211", "640 631", "518 300", "429 370", "620 718", "47 725", "839 251", "995 628", "505 226", "168 741", "5 804", "26 440", "640 517", "836 296", "945 895", "569 383", "107 650", "338 517", "476 353", "118 495", "504 740", "50 616", "268 355", "228 105", "952 30", "172 515", "136 702"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 126.24579200908045;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> start = {"803 182 6", "730 489 10", "522 717 10", "355 423 3", "237 302 7", "595 299 9", "553 916 9", "552 582 2", "527 860 9", "354 303 10", "941 363 6", "896 900 2", "218 484 9", "638 475 2", "628 420 8", "816 553 8", "936 49 5", "256 190 4", "988 62 3", "169 131 4", "280 657 8", "275 58 8", "397 68 7", "206 28 9", "391 287 8", "427 7 9", "936 100 3", "600 392 1", "997 82 10", "586 689 6", "354 319 4", "351 554 2", "244 328 7", "120 839 4", "937 8 8", "571 280 7", "116 548 6", "688 679 2", "62 525 4", "323 664 3", "219 734 10", "468 959 6", "243 313 3", "42 950 4", "753 284 1", "556 413 6", "483 628 2", "357 605 3", "407 115 7", "167 115 1"};
    vector<string> finish = {"317 84", "938 825", "529 547", "437 590", "241 234", "985 862", "818 304", "404 268", "761 209", "574 832", "58 981", "820 423", "555 124", "162 361", "170 564", "961 260", "862 11", "471 493", "998 330", "242 736", "609 592", "983 435", "637 427", "851 498", "760 739", "196 504", "826 717", "949 159", "569 898", "836 909", "833 547", "235 887", "107 683", "816 553", "385 247", "712 180", "974 596", "368 538", "596 611", "304 860", "1000 215", "404 675", "75 313", "615 23", "935 897", "143 845", "246 105", "255 7", "21 877", "188 817"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 79.63039620647382;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> start = {"984 8 10", "203 120 2", "978 736 4", "263 287 10", "121 989 3", "114 81 1", "216 307 2", "514 300 5", "61 405 5", "293 63 5", "620 16 6", "135 564 5", "160 661 2", "748 925 9", "872 721 4", "405 8 9", "949 628 4", "607 261 5", "359 751 9", "975 66 4", "133 185 5", "229 58 6", "132 806 8", "488 145 9", "380 230 2", "929 736 2", "140 69 3", "972 514 7", "732 961 5", "714 449 8", "607 582 7", "892 645 6", "79 79 2", "881 948 1", "214 712 9", "553 198 9", "379 31 1", "866 485 7", "830 337 1", "753 734 6", "457 476 1", "569 675 3", "809 151 6", "917 163 2", "983 964 6", "535 384 10", "162 609 8", "501 217 10", "669 471 10", "753 903 9"};
    vector<string> finish = {"255 983", "220 236", "458 331", "330 266", "540 766", "826 850", "448 651", "215 701", "198 918", "369 509", "437 27", "939 93", "126 405", "731 160", "283 926", "305 306", "999 522", "280 196", "383 119", "309 752", "866 349", "766 70", "442 713", "728 256", "11 128", "922 273", "350 516", "805 140", "258 372", "332 922", "195 302", "237 5", "271 806", "495 538", "319 162", "571 464", "524 276", "9 945", "314 98", "51 381", "48 407", "472 486", "673 349", "48 576", "376 550", "321 726", "757 495", "829 987", "210 763", "798 30"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 113.21660655575224;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> start = {"377 555 3", "129 757 7", "694 658 4", "80 139 9", "604 819 2", "636 208 3", "548 309 2", "245 717 4", "235 996 4", "571 600 9", "168 260 5", "446 183 1", "166 145 7", "29 487 3", "159 620 6", "30 932 2", "712 166 8", "4 217 4", "711 929 4", "965 70 5", "886 710 8", "325 924 4", "676 847 9", "633 38 5", "666 886 7", "721 498 4", "828 539 2", "571 642 9", "273 94 7", "721 354 7", "783 893 2", "235 294 9", "484 891 4", "818 482 3", "829 418 6", "868 930 5", "984 438 10", "380 729 10", "143 382 5", "872 821 4", "406 43 4", "739 450 3", "880 774 6", "656 17 5", "840 526 7", "642 869 9", "163 615 10", "532 491 9", "193 547 9", "698 865 4"};
    vector<string> finish = {"755 814", "398 96", "762 525", "213 520", "599 532", "334 876", "994 629", "696 687", "33 581", "10 40", "98 375", "135 444", "447 25", "98 839", "421 647", "699 546", "341 87", "646 400", "626 577", "988 86", "928 570", "237 485", "829 902", "594 160", "738 745", "863 724", "354 235", "666 183", "996 226", "200 556", "464 217", "113 676", "615 780", "404 236", "89 300", "830 619", "492 702", "157 575", "805 878", "143 898", "953 13", "856 987", "890 659", "159 44", "755 559", "44 142", "76 781", "661 184", "985 325", "374 677"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 66.86740611089981;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> start = {"960 441 3", "292 924 5", "978 1 5", "103 186 10", "673 700 5", "272 949 7", "612 524 10", "881 108 10", "512 56 5", "544 109 3", "259 766 10", "418 456 10", "417 736 2", "518 138 10", "629 766 4", "268 754 10", "291 23 5", "628 561 3", "235 990 8", "262 698 1", "422 933 7", "133 72 1", "718 926 3", "392 228 3", "484 925 4", "679 147 5", "794 49 3", "231 399 8", "338 220 1", "847 516 6", "703 812 8", "847 957 1", "413 753 7", "933 480 5", "632 734 10", "741 641 5", "645 368 5", "911 836 8", "572 261 9", "786 46 4", "736 368 2", "754 481 1", "195 449 3", "298 780 4", "440 620 4", "967 112 5", "309 107 9", "70 980 9", "394 669 7", "204 284 1"};
    vector<string> finish = {"810 324", "990 688", "868 193", "793 961", "837 97", "295 381", "406 121", "166 695", "285 716", "816 82", "946 525", "105 780", "964 631", "869 250", "328 154", "771 388", "783 972", "64 611", "852 396", "831 262", "266 32", "920 669", "751 266", "613 317", "627 41", "305 899", "558 291", "0 40", "784 152", "771 649", "240 744", "712 542", "570 870", "797 930", "64 390", "378 346", "662 489", "684 674", "598 432", "807 950", "828 177", "726 123", "282 707", "969 734", "452 387", "426 274", "418 606", "982 243", "230 392", "298 442"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 136.79546776117988;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> start = {"221 276 6", "428 939 5", "245 756 10", "641 283 4", "688 527 8", "80 547 9", "554 467 6", "44 323 3", "755 829 7", "154 490 7", "215 665 7", "877 894 3", "356 961 8", "486 28 10", "783 709 3", "183 713 9", "455 137 9", "854 339 8", "192 812 2", "926 953 10", "462 11 1", "68 80 5", "473 586 8", "384 415 7", "284 743 1", "919 851 9", "793 205 1", "947 475 4", "143 755 9", "931 583 6", "370 65 5", "27 394 10", "212 724 4", "729 156 3", "741 711 8", "677 882 9", "343 8 9", "544 862 6", "539 193 5", "447 825 1", "247 50 2", "45 362 3", "77 256 8", "155 133 1", "20 59 1", "978 154 1", "336 38 4", "596 299 8", "386 677 1", "754 377 2"};
    vector<string> finish = {"510 208", "264 982", "953 393", "945 435", "118 703", "481 460", "195 106", "832 780", "685 937", "78 407", "136 686", "755 654", "327 548", "614 12", "19 733", "832 806", "291 93", "573 369", "968 326", "169 440", "449 40", "411 113", "457 402", "640 466", "759 590", "275 385", "891 655", "283 577", "151 657", "79 770", "585 892", "207 997", "763 128", "350 586", "402 909", "494 955", "476 242", "956 543", "455 714", "756 943", "540 822", "257 539", "246 842", "223 515", "357 98", "166 909", "701 354", "19 788", "286 79", "275 936"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 181.2015452472743;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> start = {"373 223 3", "816 816 7", "258 10 1", "849 923 1", "962 86 9", "280 375 1", "154 198 3", "568 13 1", "616 214 1", "80 613 9", "112 539 2", "955 259 1", "714 560 4", "675 162 7", "698 741 9", "349 226 1", "416 411 5", "820 145 1", "543 992 4", "415 548 8", "230 453 9", "592 839 6", "918 608 9", "915 677 9", "946 861 8", "851 154 9", "674 143 3", "304 460 5", "54 186 10", "498 439 5", "287 697 9", "190 81 8", "312 570 4", "424 926 2", "901 403 6", "499 587 10", "129 56 2", "130 362 5", "793 63 9", "714 251 1", "994 548 6", "687 416 6", "434 773 3", "130 155 8", "213 563 8", "620 973 4", "879 343 2", "886 578 7", "840 390 4", "756 398 10"};
    vector<string> finish = {"136 208", "415 97", "404 443", "699 911", "876 666", "161 421", "96 829", "948 197", "130 305", "446 151", "270 836", "891 363", "526 209", "564 583", "447 737", "139 562", "16 525", "259 166", "946 569", "505 271", "595 462", "975 279", "299 85", "967 845", "206 514", "534 112", "189 999", "95 924", "171 528", "844 508", "777 913", "736 103", "490 846", "434 884", "85 19", "88 917", "240 143", "993 257", "310 618", "572 566", "68 167", "705 291", "123 322", "619 142", "36 611", "29 295", "108 297", "986 290", "233 711", "493 990"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 127.58134659894448;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> start = {"939 658 8", "361 872 10", "609 328 4", "962 751 5", "712 939 3", "528 475 4", "288 374 8", "28 648 8", "950 250 5", "452 143 10", "923 598 2", "933 900 9", "231 357 8", "938 263 9", "252 903 7", "901 237 3", "915 239 5", "820 108 2", "717 448 6", "994 194 1", "269 794 3", "621 390 9", "64 817 9", "775 99 1", "176 157 7", "645 594 2", "821 895 7", "546 183 6", "142 398 2", "755 885 1", "246 632 10", "308 215 5", "980 946 6", "523 215 5", "266 611 10", "446 682 1", "968 528 3", "766 194 2", "846 984 6", "88 461 3", "669 304 2", "783 967 1", "742 898 1", "685 18 4", "436 603 5", "648 116 4", "694 520 8", "617 931 3", "423 120 7", "492 595 10"};
    vector<string> finish = {"560 830", "903 537", "627 584", "60 111", "914 13", "791 349", "215 276", "925 746", "65 610", "154 792", "156 422", "219 427", "855 928", "146 390", "76 212", "251 514", "751 635", "690 868", "709 416", "532 46", "185 151", "552 251", "45 828", "633 670", "818 477", "780 199", "293 502", "990 599", "469 560", "484 810", "533 707", "352 521", "305 519", "403 23", "798 548", "775 623", "543 720", "194 997", "648 842", "159 798", "23 247", "649 887", "706 715", "722 64", "835 570", "434 418", "264 929", "843 218", "336 465", "760 848"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 152.8953890737062;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> start = {"243 700 5", "715 229 8", "338 519 3", "0 165 8", "10 254 7", "161 538 3", "592 893 3", "523 951 7", "57 488 9", "562 164 5", "884 91 2", "168 826 5", "753 919 7", "117 267 7", "663 811 9", "900 506 5", "781 709 9", "716 323 2", "259 375 2", "577 353 7", "514 974 6", "892 525 9", "711 47 2", "488 357 8", "291 301 5", "879 681 7", "270 903 7", "671 989 2", "657 394 7", "681 508 3", "647 689 1", "200 768 3", "969 405 3", "727 84 5", "389 207 7", "366 908 6", "471 39 1", "970 861 10", "542 654 9", "330 972 8", "675 44 6", "14 241 3", "572 276 5", "435 744 5", "637 193 7", "81 288 9", "493 852 6", "500 968 6", "754 59 7", "258 759 10"};
    vector<string> finish = {"284 840", "388 336", "747 797", "627 307", "696 362", "874 126", "263 592", "869 625", "539 139", "359 636", "344 452", "351 377", "711 183", "619 231", "580 594", "916 611", "466 963", "271 139", "961 866", "903 994", "936 433", "181 888", "103 309", "634 405", "164 594", "643 251", "306 751", "95 92", "811 506", "939 945", "372 546", "544 246", "312 166", "794 16", "695 885", "488 391", "33 509", "647 394", "680 982", "955 503", "936 791", "673 322", "73 303", "63 436", "856 449", "530 294", "100 942", "325 15", "559 670", "744 147"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 120.9297316626478;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> start = {"674 534 2", "27 118 2", "175 657 10", "906 146 5", "344 817 2", "207 234 3", "462 710 3", "399 707 8", "503 951 8", "610 36 9", "505 452 7", "21 600 10", "772 270 9", "216 911 4", "346 508 6", "895 96 1", "854 409 1", "616 78 8", "301 32 9", "516 491 9", "197 0 1", "128 298 2", "624 370 4", "360 439 2", "362 99 1", "56 182 5", "515 281 7", "196 452 7", "582 968 1", "645 544 3", "49 571 7", "210 543 9", "549 476 9", "124 270 6", "157 924 1", "517 651 8", "804 729 5", "368 145 7", "90 37 3", "981 796 10", "952 823 1", "578 473 6", "643 751 2", "557 693 2", "830 370 10", "387 761 3", "172 74 10", "455 313 1", "226 169 7", "844 872 9"};
    vector<string> finish = {"900 624", "265 199", "289 299", "944 841", "766 359", "806 233", "709 820", "698 447", "150 44", "566 255", "680 320", "652 109", "463 542", "224 984", "540 131", "518 435", "735 796", "831 968", "66 411", "122 478", "415 625", "453 101", "517 909", "787 525", "753 246", "422 678", "652 184", "599 872", "359 871", "368 23", "956 552", "723 987", "508 787", "584 593", "428 747", "437 3", "829 82", "895 463", "616 792", "361 813", "699 654", "359 405", "695 52", "891 728", "678 957", "316 564", "161 403", "129 293", "940 820", "326 182"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 125.23977004130916;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> start = {"514 869 6", "463 213 2", "88 677 9", "759 985 6", "782 70 10", "779 965 8", "242 410 5", "188 315 8", "723 422 7", "569 363 2", "965 618 1", "268 617 6", "92 443 1", "985 615 7", "691 8 7", "294 36 6", "598 157 5", "849 636 4", "69 54 1", "638 324 3", "163 988 10", "53 171 3", "670 240 6", "929 961 8", "887 600 6", "485 125 4", "57 807 10", "597 159 8", "162 343 8", "909 709 10", "659 75 9", "6 895 1", "912 767 9", "513 481 9", "360 818 1", "258 489 4", "729 566 6", "448 880 8", "404 552 6", "190 745 9", "829 424 2", "311 724 3", "567 463 1", "806 502 1", "863 412 7", "413 481 2", "881 153 10", "11 422 7", "631 915 3", "163 322 9"};
    vector<string> finish = {"799 640", "810 213", "214 308", "605 163", "430 596", "185 928", "598 648", "646 387", "472 515", "665 931", "451 64", "348 462", "797 197", "816 609", "388 722", "356 417", "224 597", "422 153", "786 211", "976 896", "232 707", "604 918", "932 486", "681 95", "714 588", "807 401", "335 130", "231 323", "730 963", "41 654", "446 18", "986 651", "188 104", "384 380", "500 821", "783 333", "511 676", "137 731", "480 518", "180 172", "231 805", "980 977", "736 422", "254 651", "380 836", "311 366", "7 812", "75 743", "527 386", "914 775"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 181.95878654244757;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> start = {"377 440 9", "12 555 3", "458 824 7", "832 474 3", "683 660 2", "921 801 6", "225 141 5", "497 908 4", "791 699 5", "401 190 3", "726 779 3", "808 983 6", "114 738 4", "179 32 5", "847 804 6", "36 183 9", "118 102 10", "9 593 9", "156 777 1", "820 490 10", "444 248 5", "837 293 7", "339 29 9", "24 456 1", "479 903 1", "254 339 1", "985 902 1", "640 62 8", "913 469 9", "613 839 4", "933 923 3", "463 637 2", "211 906 5", "555 229 1", "176 272 10", "227 239 9", "729 389 10", "840 136 3", "779 780 5", "135 645 3", "927 435 3", "114 16 2", "519 96 3", "80 731 10", "493 405 8", "776 81 3", "181 251 2", "69 863 7", "843 978 4", "957 828 1"};
    vector<string> finish = {"820 821", "379 863", "628 509", "58 438", "255 673", "532 187", "740 580", "216 8", "175 408", "858 727", "159 812", "487 145", "420 971", "986 185", "241 632", "179 388", "307 748", "303 518", "688 554", "277 987", "565 764", "6 947", "229 166", "711 470", "953 938", "629 18", "389 789", "811 408", "378 341", "478 68", "14 856", "591 362", "235 766", "616 194", "555 548", "712 834", "700 97", "748 170", "248 299", "327 664", "721 806", "848 341", "582 939", "52 430", "35 360", "826 985", "658 317", "529 295", "76 776", "222 652"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 137.17871555019022;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> start = {"484 262 8", "448 699 1", "965 779 1", "831 569 8", "356 831 5", "54 115 2", "853 915 8", "488 689 6", "517 56 9", "397 146 7", "223 828 9", "273 844 4", "584 384 2", "716 490 9", "234 127 7", "62 694 10", "107 238 1", "316 866 5", "792 33 10", "677 676 3", "890 157 3", "786 667 2", "330 814 10", "392 43 10", "667 862 8", "988 756 9", "964 121 4", "589 730 6", "919 902 1", "543 447 1", "154 397 3", "227 403 1", "14 23 8", "255 709 2", "235 191 1", "494 338 2", "107 396 2", "422 68 7", "280 567 6", "451 984 4", "320 166 6", "944 652 4", "647 113 7", "811 73 10", "867 602 7", "680 241 9", "490 555 2", "298 437 1", "17 174 4", "984 419 1"};
    vector<string> finish = {"312 901", "881 428", "983 587", "893 229", "259 822", "705 595", "21 683", "369 672", "685 467", "860 892", "867 879", "309 248", "87 165", "728 463", "926 366", "604 756", "936 710", "188 158", "1000 321", "494 396", "670 316", "245 222", "817 106", "368 774", "632 56", "218 859", "570 700", "978 983", "254 741", "614 785", "751 468", "7 990", "908 943", "703 36", "136 921", "473 972", "540 715", "843 915", "952 467", "154 612", "500 474", "562 24", "101 146", "495 32", "565 107", "479 684", "46 37", "757 928", "688 685", "361 283"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 175.35392781457733;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> start = {"245 879 9", "467 736 2", "747 543 2", "257 236 3", "281 743 10", "375 197 4", "246 289 5", "445 143 9", "102 948 5", "853 930 3", "622 458 6", "332 767 3", "196 944 7", "647 348 1", "746 289 10", "176 411 3", "35 28 2", "77 928 8", "750 189 1", "33 571 10", "398 174 3", "517 571 8", "272 587 6", "286 235 3", "977 546 6", "483 294 3", "110 161 6", "874 406 6", "428 319 3", "953 522 8", "925 659 8", "509 548 1", "235 497 10", "308 733 4", "737 258 4", "842 389 1", "498 245 3", "195 689 4", "515 383 1", "3 470 7", "992 892 5", "962 377 10", "913 847 8", "153 507 4", "630 826 1", "761 312 5", "947 185 1", "991 99 9", "823 208 8", "598 864 6"};
    vector<string> finish = {"815 299", "559 514", "110 939", "317 13", "955 998", "320 227", "375 441", "1000 773", "813 222", "754 479", "426 854", "39 542", "373 341", "593 388", "769 435", "621 565", "765 781", "529 153", "830 534", "673 880", "23 287", "448 926", "710 937", "926 58", "365 92", "562 408", "770 143", "582 994", "344 833", "300 592", "891 430", "30 432", "834 894", "954 864", "442 776", "490 214", "368 314", "217 244", "670 374", "642 317", "313 44", "488 305", "709 278", "729 475", "179 297", "650 850", "410 296", "836 416", "921 735", "822 394"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 129.63892162464174;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> start = {"437 192 4", "455 696 1", "56 882 4", "464 926 2", "943 673 9", "626 287 3", "809 841 4", "801 801 2", "783 927 4", "268 844 9", "592 546 8", "762 654 6", "627 391 9", "613 428 4", "217 384 8", "457 908 8", "718 749 8", "827 25 2", "650 457 6", "551 824 7", "977 832 10", "414 472 1", "460 355 10", "618 999 7", "3 67 6", "652 64 5", "953 187 4", "31 254 8", "955 812 4", "501 532 6", "842 821 7", "747 173 5", "284 393 10", "270 55 10", "797 574 1", "898 382 4", "25 558 5", "900 715 5", "518 462 5", "574 942 2", "303 513 3", "655 507 3", "469 416 7", "310 277 8", "608 169 7", "594 25 8", "395 601 5", "401 341 10", "986 926 4", "505 921 5"};
    vector<string> finish = {"267 905", "946 621", "383 210", "634 929", "976 211", "38 67", "535 696", "912 49", "129 818", "876 762", "816 95", "871 170", "261 491", "244 400", "545 645", "64 691", "728 402", "336 394", "396 887", "480 406", "332 466", "25 333", "42 509", "620 10", "675 186", "813 414", "885 520", "630 778", "365 654", "77 606", "139 596", "97 103", "939 630", "416 67", "605 320", "34 632", "934 731", "869 169", "553 98", "448 394", "990 903", "706 943", "794 728", "984 767", "901 583", "788 705", "226 556", "673 149", "839 560", "584 217"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 82.21921916437786;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> start = {"497 425 3", "291 445 9", "162 579 5", "522 117 1", "317 331 5", "18 379 9", "746 606 2", "41 991 1", "630 411 10", "235 112 2", "518 613 1", "287 573 4", "267 910 6", "764 819 5", "719 908 2", "802 809 9", "789 597 4", "455 319 8", "761 448 6", "476 431 7", "493 8 8", "851 655 10", "271 442 10", "513 328 4", "349 497 8", "7 998 8", "26 676 3", "28 304 4", "221 839 7", "795 393 6", "262 871 9", "93 422 7", "520 396 4", "126 124 7", "232 499 7", "431 107 9", "799 848 4", "752 600 8", "208 544 6", "95 814 10", "726 629 2", "744 980 8", "727 881 1", "901 353 6", "654 260 2", "339 252 9", "621 495 3", "792 543 2", "862 942 5", "203 303 10"};
    vector<string> finish = {"753 698", "575 224", "509 578", "593 20", "926 167", "84 784", "837 515", "759 921", "22 744", "332 585", "444 127", "443 785", "77 925", "953 844", "341 290", "582 154", "431 617", "24 298", "932 252", "500 12", "455 493", "278 194", "290 998", "417 90", "127 732", "742 282", "72 172", "418 800", "466 24", "68 714", "509 103", "24 388", "623 713", "702 497", "696 442", "466 860", "642 296", "322 838", "43 356", "379 104", "586 225", "986 775", "282 574", "520 412", "896 329", "760 184", "825 610", "921 848", "495 325", "250 912"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 105.3612832116238;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> start = {"252 948 10", "910 922 2", "453 446 5", "28 752 6", "933 817 7", "647 546 4", "243 783 9", "209 619 1", "888 388 6", "15 746 10", "308 410 6", "127 698 7", "5 518 3", "539 980 6", "238 347 6", "213 311 7", "802 749 5", "646 123 6", "907 336 4", "783 627 3", "73 128 6", "602 48 1", "893 377 3", "522 880 1", "651 636 3", "39 919 8", "334 417 5", "515 385 4", "496 552 1", "809 478 6", "240 696 6", "891 118 1", "76 148 8", "758 696 1", "833 503 7", "394 301 9", "354 624 6", "257 472 2", "118 809 9", "465 450 3", "365 341 10", "569 855 3", "568 488 6", "954 13 10", "797 648 3", "985 483 10", "181 189 9", "385 488 10", "416 621 4", "861 762 5"};
    vector<string> finish = {"358 976", "524 620", "619 86", "379 326", "926 678", "439 746", "89 27", "326 201", "983 477", "129 895", "221 380", "239 756", "231 525", "765 660", "10 406", "131 405", "357 882", "154 30", "17 963", "222 122", "44 365", "383 109", "127 810", "4 787", "61 578", "901 195", "353 69", "361 986", "411 676", "402 830", "521 181", "407 224", "391 697", "40 852", "520 15", "731 389", "452 600", "285 693", "166 812", "685 457", "656 895", "113 352", "377 266", "544 411", "979 603", "732 549", "749 599", "306 75", "9 279", "476 469"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 130.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> start = {"976 270 9", "365 853 4", "502 238 9", "141 278 2", "801 639 4", "990 544 7", "284 564 3", "746 961 8", "768 550 6", "372 268 8", "590 171 1", "468 80 8", "53 839 2", "96 567 2", "163 954 4", "165 743 3", "334 940 9", "638 980 2", "5 998 8", "836 639 4", "629 95 5", "232 732 6", "404 457 9", "377 774 6", "481 133 8", "818 578 10", "596 576 4", "10 482 8", "307 106 6", "387 821 10", "535 598 3", "302 402 2", "333 639 4", "428 718 4", "449 147 10", "389 222 10", "983 720 1", "82 846 2", "572 290 2", "752 785 8", "51 230 4", "130 470 7", "482 591 4", "188 366 3", "150 897 5", "312 580 1", "517 501 8", "30 312 5", "863 955 4", "448 57 10"};
    vector<string> finish = {"118 86", "72 378", "692 333", "502 635", "253 627", "431 516", "424 560", "604 907", "385 880", "764 335", "96 633", "374 394", "922 696", "622 563", "89 590", "925 786", "847 895", "66 492", "949 37", "752 636", "735 88", "914 539", "171 144", "191 531", "49 930", "133 596", "28 653", "172 766", "14 119", "338 719", "804 372", "918 694", "692 841", "782 925", "122 586", "140 114", "772 680", "352 591", "785 464", "610 486", "827 572", "223 381", "542 238", "116 291", "556 319", "35 416", "707 481", "693 754", "902 306", "786 586"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 82.41965784932621;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> start = {"974 276 1", "114 589 9", "540 243 4", "295 444 7", "575 436 7", "250 801 7", "549 39 3", "94 441 9", "830 502 1", "259 540 8", "166 690 8", "433 659 1", "623 9 7", "497 105 8", "896 867 9", "339 934 8", "502 634 4", "53 21 10", "819 976 9", "848 537 1", "113 453 4", "283 143 7", "184 789 10", "179 735 3", "245 957 4", "72 569 8", "895 388 10", "384 910 8", "25 867 9", "637 407 1", "891 157 5", "852 609 1", "621 562 4", "331 62 2", "338 360 8", "296 518 3", "161 739 5", "428 12 6", "627 912 4", "970 634 7", "59 118 7", "240 789 8", "844 985 1", "984 647 2", "663 687 1", "18 86 4", "292 99 1", "740 86 7", "158 432 10", "41 193 2"};
    vector<string> finish = {"450 752", "945 481", "906 432", "447 281", "912 976", "519 815", "970 491", "481 428", "861 528", "346 803", "434 543", "730 390", "531 71", "577 400", "445 735", "862 576", "728 344", "412 748", "532 228", "931 490", "917 523", "481 611", "47 760", "271 154", "156 529", "540 166", "9 370", "726 678", "25 691", "937 354", "310 680", "184 447", "143 115", "375 584", "942 325", "60 146", "813 599", "100 334", "131 366", "753 283", "258 238", "635 452", "547 171", "769 236", "856 932", "617 254", "813 325", "434 971", "678 712", "992 19"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 95.26935498889452;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> start = {"402 418 5", "4 115 8", "408 799 8", "903 79 2", "171 648 10", "171 717 9", "830 517 2", "846 288 3", "232 70 4", "209 165 9", "172 272 9", "288 718 8", "957 296 4", "4 21 6", "623 980 5", "15 518 3", "645 80 8", "677 343 4", "346 516 1", "315 865 4", "623 698 3", "295 366 5", "340 496 9", "411 396 8", "956 18 1", "563 47 7", "509 318 3", "179 67 8", "575 330 10", "188 951 8", "495 176 1", "956 236 5", "116 938 5", "872 74 5", "145 763 10", "606 205 6", "405 684 6", "450 742 6", "663 736 8", "702 553 2", "905 961 2", "30 842 7", "937 524 3", "503 847 8", "839 723 1", "139 941 3", "231 631 7", "940 707 9", "840 15 1", "914 360 2"};
    vector<string> finish = {"436 515", "820 514", "766 542", "243 211", "896 934", "364 905", "932 318", "67 688", "578 632", "70 642", "74 871", "538 107", "22 338", "502 930", "848 632", "113 113", "701 889", "598 736", "382 207", "961 11", "28 202", "323 769", "498 948", "65 333", "250 987", "415 125", "958 307", "547 351", "372 693", "418 716", "919 609", "13 419", "706 931", "355 92", "306 576", "741 29", "246 284", "268 325", "401 21", "527 709", "723 176", "9 753", "770 97", "591 469", "572 725", "500 302", "775 687", "226 627", "703 196", "971 420"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 99.98499887483122;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> start = {"266 962 2", "322 186 7", "576 821 5", "304 659 2", "243 632 9", "290 208 9", "309 689 9", "714 300 2", "548 933 10", "835 313 1", "400 852 7", "605 141 7", "718 255 8", "449 903 3", "130 505 10", "812 1 5", "426 284 7", "962 110 5", "418 201 7", "646 900 6", "284 666 4", "485 907 5", "437 212 3", "245 316 3", "696 232 3", "48 722 3", "523 678 7", "919 205 3", "534 521 1", "648 904 9", "998 699 1", "939 323 2", "571 514 6", "500 480 2", "879 289 6", "899 492 9", "262 743 8", "255 92 1", "883 450 5", "332 129 4", "601 822 3", "967 980 4", "146 432 5", "357 550 3", "387 9 10", "197 112 2", "686 386 4", "28 176 6", "474 219 7", "182 838 9"};
    vector<string> finish = {"922 563", "417 369", "858 542", "837 128", "39 901", "710 987", "585 727", "175 300", "348 91", "754 401", "536 912", "737 221", "776 169", "656 61", "974 825", "723 31", "131 445", "735 819", "154 696", "923 733", "693 918", "267 459", "983 718", "697 50", "369 543", "907 186", "242 564", "678 210", "740 240", "348 659", "817 565", "874 920", "602 732", "457 70", "840 733", "294 182", "252 200", "389 371", "511 734", "556 672", "164 782", "101 381", "228 955", "637 199", "246 675", "455 673", "379 661", "193 801", "225 342", "380 744"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 152.59423318068085;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> start = {"500 444 9", "263 775 2", "222 908 7", "402 684 10", "221 105 2", "309 249 8", "818 45 1", "144 518 10", "517 279 5", "459 506 9", "629 85 8", "980 574 7", "633 622 7", "644 203 10", "537 756 5", "364 470 7", "315 765 6", "884 643 2", "443 293 8", "979 162 6", "794 250 4", "878 373 9", "859 138 3", "60 802 1", "61 150 9", "68 37 8", "299 124 9", "417 331 2", "984 993 5", "713 246 2", "76 754 3", "884 450 7", "193 175 5", "236 659 1", "346 787 8", "712 913 4", "66 374 8", "14 127 4", "260 886 9", "939 305 9", "100 606 9", "339 84 10", "854 486 1", "328 541 2", "768 289 2", "418 705 9", "829 132 10", "936 926 9", "855 659 3", "316 351 7"};
    vector<string> finish = {"884 630", "179 650", "661 765", "62 182", "839 737", "962 816", "895 832", "874 890", "656 300", "104 257", "452 809", "106 365", "335 201", "145 588", "920 611", "947 290", "388 600", "765 873", "209 906", "442 57", "136 223", "818 997", "790 835", "36 410", "212 587", "754 111", "872 409", "842 289", "568 201", "837 342", "91 797", "357 659", "682 446", "739 268", "342 842", "76 797", "235 230", "362 19", "706 272", "32 303", "22 47", "60 413", "411 990", "794 317", "547 347", "991 819", "3 874", "140 761", "121 778", "317 424"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 91.93475947648963;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> start = {"297 213 5", "809 642 4", "360 142 4", "952 588 5", "761 399 3", "565 318 5", "111 914 1", "848 914 8", "626 38 10", "960 983 10", "508 79 9", "45 643 5", "278 114 3", "574 285 3", "114 212 4", "363 493 6", "245 345 3", "1000 485 9", "249 942 3", "644 615 5", "876 61 1", "340 612 5", "632 158 8", "328 938 4", "993 491 9", "861 730 1", "721 423 7", "557 972 8", "537 803 5", "69 901 4", "288 972 4", "295 748 8", "111 539 7", "450 449 2", "817 318 1", "38 593 10", "555 40 8", "616 623 7", "56 549 3", "56 307 10", "224 626 5", "930 31 1", "902 462 10", "213 81 6", "201 212 9", "998 280 7", "181 476 2", "80 30 3", "368 387 5", "665 453 2"};
    vector<string> finish = {"730 722", "494 71", "291 481", "354 1000", "145 953", "714 297", "413 668", "483 262", "120 393", "448 526", "340 151", "305 490", "899 297", "724 376", "387 773", "880 533", "92 810", "240 45", "294 456", "600 215", "835 947", "765 723", "937 179", "979 631", "563 887", "716 407", "592 102", "415 434", "260 128", "328 35", "101 923", "642 270", "309 116", "688 956", "531 247", "875 356", "710 22", "285 973", "566 926", "34 981", "118 704", "823 331", "97 15", "819 861", "982 872", "835 616", "273 835", "39 293", "821 350", "1000 190"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 170.51979357247652;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> start = {"951 962 3", "130 491 8", "731 158 7", "916 24 1", "664 197 4", "267 842 7", "894 508 3", "524 73 8", "729 358 7", "955 23 6", "47 186 5", "388 897 1", "326 769 7", "48 975 6", "461 222 5", "844 125 4", "426 338 2", "881 571 1", "48 156 5", "392 394 5", "831 684 1", "62 259 6", "330 259 10", "920 106 7", "255 589 7", "121 590 6", "753 935 8", "933 367 2", "873 290 3", "174 438 1", "460 224 10", "969 657 3", "114 913 4", "764 240 4", "593 514 6", "159 998 10", "720 358 9", "48 727 5", "472 290 8", "386 483 8", "489 184 3", "271 220 3", "73 789 3", "697 549 8", "958 914 4", "590 894 10", "977 594 8", "179 956 5", "639 744 4", "609 526 1"};
    vector<string> finish = {"935 870", "545 348", "601 580", "378 781", "367 285", "18 560", "881 650", "666 208", "910 608", "539 802", "149 686", "254 265", "280 279", "217 393", "338 557", "117 801", "861 252", "229 138", "674 503", "536 536", "47 247", "767 303", "566 511", "240 72", "18 347", "166 700", "193 720", "495 463", "851 702", "844 845", "102 515", "757 78", "626 47", "927 171", "510 968", "29 836", "318 122", "46 430", "762 994", "349 572", "342 159", "692 84", "669 505", "801 660", "780 902", "178 897", "93 82", "856 96", "491 810", "918 236"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 116.43023662262307;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> start = {"224 41 3", "388 199 10", "846 317 7", "696 259 9", "522 776 10", "751 93 4", "160 485 6", "865 169 3", "353 662 9", "770 597 4", "969 445 8", "645 246 5", "399 63 8", "516 711 4", "794 68 1", "439 924 1", "489 57 5", "53 293 7", "608 498 6", "690 622 10", "257 525 8", "403 569 7", "465 635 2", "273 884 4", "129 481 1", "156 205 5", "850 330 7", "221 433 9", "662 837 9", "635 184 6", "573 100 4", "110 715 8", "796 224 7", "977 394 4", "789 574 2", "310 736 9", "253 381 4", "505 147 3", "52 981 10", "223 542 1", "113 539 2", "682 350 9", "852 541 6", "21 953 2", "240 238 1", "745 778 3", "537 262 4", "337 992 9", "874 287 8", "165 109 10"};
    vector<string> finish = {"409 101", "456 945", "102 523", "226 445", "489 669", "834 754", "82 136", "528 492", "158 928", "252 160", "221 758", "995 983", "45 127", "888 954", "2 803", "78 718", "105 770", "606 686", "572 135", "547 828", "815 413", "770 727", "138 586", "247 447", "697 502", "240 818", "159 957", "135 683", "784 939", "364 197", "195 43", "702 272", "238 899", "956 931", "806 231", "501 204", "678 730", "941 743", "850 300", "971 294", "450 744", "518 679", "511 666", "350 521", "523 95", "518 981", "631 573", "270 49", "563 964", "219 187"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 163.44112089679268;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> start = {"328 959 5", "819 799 9", "544 830 2", "355 861 8", "439 41 5", "175 639 8", "737 658 2", "986 901 10", "871 858 6", "10 336 1", "827 391 8", "987 117 6", "970 340 10", "102 743 3", "304 162 1", "435 574 2", "301 944 3", "129 198 10", "596 570 3", "87 233 2", "758 323 4", "287 675 10", "408 92 2", "531 424 4", "619 296 6", "61 316 3", "490 198 8", "513 975 8", "231 150 9", "443 768 6", "204 110 10", "252 933 4", "570 721 9", "723 363 9", "871 654 8", "422 913 5", "973 980 4", "332 67 6", "424 409 8", "916 751 6", "947 340 4", "777 898 10", "291 878 1", "223 781 5", "288 21 2", "4 235 4", "269 541 6", "812 850 8", "419 170 3", "241 21 9"};
    vector<string> finish = {"698 114", "239 947", "715 66", "164 239", "433 963", "94 707", "551 516", "906 217", "68 247", "786 976", "924 22", "779 973", "31 900", "140 116", "752 82", "264 123", "898 815", "719 447", "400 490", "66 40", "890 143", "664 246", "14 234", "693 642", "920 151", "112 270", "145 217", "426 251", "861 165", "369 30", "937 806", "358 56", "981 621", "561 553", "589 520", "72 677", "449 248", "853 694", "406 714", "7 863", "229 244", "370 433", "907 774", "971 867", "911 907", "716 697", "650 984", "362 916", "639 255", "285 369"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 102.07840124139877;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> start = {"612 821 4", "235 867 3", "639 641 10", "255 376 2", "947 769 7", "405 356 2", "79 394 2", "65 250 10", "426 416 10", "341 119 7", "512 459 5", "250 951 8", "826 518 9", "293 552 5", "329 189 3", "524 642 7", "247 224 8", "146 22 3", "286 148 5", "751 274 2", "698 435 8", "289 797 4", "877 183 5", "577 955 7", "535 476 10", "657 127 1", "286 280 10", "170 193 7", "508 291 10", "2 665 4", "320 793 3", "415 459 9", "768 984 7", "163 829 8", "446 534 2", "405 246 6", "742 680 1", "799 754 7", "710 208 6", "590 402 10", "211 221 9", "479 116 8", "350 661 1", "764 711 10", "553 680 9", "111 318 1", "708 375 1", "592 104 2", "308 555 10", "334 145 10"};
    vector<string> finish = {"714 882", "86 793", "552 208", "428 889", "549 295", "486 309", "874 123", "509 61", "42 872", "859 914", "848 517", "57 371", "665 237", "918 995", "240 197", "915 946", "895 313", "543 135", "403 808", "704 998", "453 213", "721 568", "33 203", "895 103", "763 94", "341 287", "771 767", "470 526", "42 770", "265 156", "940 115", "50 147", "333 800", "837 621", "327 665", "131 561", "862 705", "187 110", "49 989", "68 132", "370 295", "351 678", "574 560", "227 539", "667 800", "806 258", "563 624", "543 545", "547 857", "38 815"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 144.5441109142811;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> start = {"942 457 10", "309 907 10", "267 91 2", "490 135 8", "978 184 2", "328 434 8", "68 841 3", "388 311 7", "861 219 3", "409 230 5", "349 500 2", "900 824 5", "220 135 4", "396 253 2", "643 431 8", "389 609 7", "666 569 10", "418 418 10", "95 910 6", "750 931 5", "693 223 1", "516 296 3", "367 100 8", "160 191 9", "731 310 7", "17 601 9", "237 508 10", "541 57 8", "263 50 10", "520 893 4", "234 709 9", "799 783 9", "418 814 3", "531 358 3", "107 282 1", "537 919 9", "259 556 4", "757 6 1", "171 848 3", "851 482 2", "784 158 3", "383 458 3", "65 734 5", "384 637 4", "339 848 9", "270 577 9", "238 975 3", "42 814 6", "419 436 5", "417 965 8"};
    vector<string> finish = {"942 1", "839 976", "132 284", "642 484", "217 889", "701 690", "0 935", "342 440", "16 241", "134 809", "972 603", "218 429", "575 768", "31 992", "571 421", "599 282", "138 86", "226 368", "755 443", "740 51", "42 130", "827 481", "455 128", "733 60", "556 236", "503 838", "312 345", "691 489", "673 4", "600 721", "406 829", "524 78", "610 94", "807 184", "701 577", "714 543", "313 8", "981 308", "430 493", "715 347", "401 597", "478 184", "992 491", "6 93", "858 763", "691 21", "513 590", "260 7", "365 889", "292 580"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 110.98198051936178;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> start = {"578 926 7", "323 708 2", "812 707 6", "98 52 9", "444 642 4", "296 737 2", "228 317 3", "111 670 9", "324 517 7", "726 988 9", "682 588 1", "147 209 2", "225 97 6", "978 429 10", "301 80 7", "729 281 6", "275 4 6", "51 988 9", "976 468 8", "482 95 9", "596 477 6", "668 325 3", "307 81 6", "308 566 9", "505 505 1", "633 201 7", "322 249 8", "193 26 5", "22 480 6", "823 668 10", "216 87 2", "368 485 5", "966 596 6", "124 329 10", "575 971 7", "458 954 10", "531 433 2", "922 389 5", "877 87 6", "164 450 5", "873 412 2", "347 450 9", "751 928 7", "771 119 8", "924 53 5", "760 325 5", "527 555 5", "417 82 5", "15 45 7", "380 813 6"};
    vector<string> finish = {"307 874", "433 117", "700 648", "445 806", "811 616", "823 645", "256 509", "622 993", "293 327", "626 549", "597 540", "596 834", "79 845", "236 382", "774 187", "506 276", "421 776", "968 982", "836 463", "108 63", "58 597", "380 925", "242 23", "403 957", "815 845", "935 375", "681 884", "915 112", "955 547", "505 42", "459 685", "94 134", "705 601", "416 953", "568 443", "462 369", "438 296", "528 795", "135 941", "187 25", "996 962", "70 931", "262 334", "275 35", "585 473", "709 930", "927 379", "943 96", "349 408", "621 499"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 86.16263691415206;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> start = {"580 387 4", "934 118 4", "848 401 10", "718 308 10", "6 22 6", "111 301 5", "30 458 7", "472 823 6", "862 708 6", "293 414 2", "99 210 7", "787 286 6", "379 223 2", "615 647 1", "93 380 7", "645 356 4", "667 895 2", "921 696 1", "540 882 2", "274 142 6", "994 954 5", "322 740 1", "184 500 6", "170 525 7", "715 377 5", "399 527 7", "470 424 2", "145 103 9", "104 205 8", "996 26 3", "833 240 9", "268 623 1", "287 821 2", "564 563 4", "428 299 5", "788 814 7", "747 860 9", "850 337 4", "128 575 7", "152 794 6", "690 432 1", "15 22 8", "981 106 7", "810 699 3", "180 948 9", "60 441 10", "492 979 3", "386 327 6", "386 121 8", "552 949 3"};
    vector<string> finish = {"537 763", "565 41", "480 748", "478 46", "569 88", "831 744", "466 199", "881 739", "855 822", "994 279", "758 704", "932 390", "360 404", "768 645", "918 592", "300 294", "282 823", "608 232", "798 11", "458 622", "309 811", "960 522", "781 84", "17 853", "240 236", "747 971", "775 998", "225 588", "215 901", "69 144", "695 620", "10 550", "258 903", "878 326", "784 982", "664 189", "167 149", "853 41", "341 129", "543 253", "496 380", "527 574", "494 55", "195 994", "956 858", "617 10", "579 149", "571 441", "993 310", "531 933"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 119.33985084622823;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> start = {"482 595 1", "60 108 8", "757 123 10", "913 788 5", "174 717 7", "915 343 5", "772 960 9", "815 572 9", "551 946 2", "693 398 6", "630 560 2", "772 771 5", "866 166 4", "733 397 1", "752 283 1", "835 574 8", "124 64 5", "832 979 9", "440 261 3", "383 253 8", "951 810 7", "156 188 6", "639 123 2", "2 256 9", "707 102 7", "929 893 6", "175 36 1", "644 214 8", "678 30 3", "464 466 10", "23 503 2", "358 960 9", "20 921 4", "424 170 6", "57 408 9", "37 668 6", "896 5 10", "991 188 4", "577 641 7", "21 352 2", "337 768 3", "756 558 7", "946 956 3", "106 997 8", "70 244 2", "775 194 8", "181 219 9", "680 578 10", "138 638 2", "703 611 8"};
    vector<string> finish = {"567 275", "535 825", "11 891", "751 247", "617 494", "198 980", "760 267", "224 110", "597 270", "692 584", "839 563", "50 138", "762 209", "524 187", "396 607", "476 793", "359 809", "341 343", "278 714", "234 490", "72 30", "643 85", "169 460", "708 334", "121 23", "918 239", "184 288", "141 319", "886 401", "71 343", "787 466", "720 451", "780 150", "224 936", "774 939", "433 606", "740 361", "374 341", "634 733", "341 628", "278 49", "587 401", "722 404", "417 635", "474 542", "580 773", "65 683", "463 304", "899 338", "886 518"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 76.10026281163555;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> start = {"875 569 1", "906 313 8", "566 922 1", "174 597 3", "236 394 4", "857 969 7", "964 657 8", "226 542 10", "296 196 10", "27 798 2", "527 36 5", "129 913 3", "5 432 6", "673 24 7", "185 328 3", "253 599 9", "845 942 8", "252 272 9", "547 210 6", "276 171 5", "547 898 7", "148 849 1", "367 499 7", "889 490 4", "767 689 5", "899 330 9", "422 697 3", "984 305 6", "251 919 3", "277 566 2", "264 33 8", "994 343 7", "631 931 4", "102 178 3", "533 165 5", "513 121 2", "517 378 3", "426 300 7", "756 380 8", "767 641 8", "368 697 9", "201 202 2", "621 883 10", "377 515 8", "962 932 1", "282 744 9", "428 275 1", "273 662 6", "31 957 1", "482 237 2"};
    vector<string> finish = {"193 33", "84 754", "715 553", "674 456", "719 533", "76 354", "588 136", "832 875", "207 384", "261 67", "319 232", "960 994", "150 230", "85 699", "99 928", "606 154", "298 579", "298 429", "416 714", "579 785", "347 311", "7 962", "4 874", "100 309", "712 577", "526 135", "978 751", "431 312", "930 345", "251 109", "113 113", "273 895", "557 91", "582 215", "79 500", "994 488", "552 597", "452 475", "309 872", "999 197", "150 616", "812 431", "154 90", "200 264", "631 794", "285 113", "795 755", "523 66", "119 582", "576 521"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 143.95138068111746;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> start = {"15 615 5", "99 328 7", "26 107 2", "447 134 3", "186 346 8", "271 388 9", "485 828 7", "372 672 6", "945 553 9", "663 137 6", "279 536 5", "966 768 7", "701 624 6", "651 520 4", "848 478 1", "839 168 6", "894 708 8", "211 455 5", "388 257 1", "933 152 2", "839 543 7", "686 247 4", "185 881 10", "478 993 10", "965 686 5", "999 29 5", "729 721 8", "716 578 7", "872 380 9", "894 704 9", "328 205 8", "244 395 6", "800 136 4", "377 817 10", "154 586 6", "897 666 9", "918 563 3", "956 785 7", "524 195 1", "72 402 9", "434 192 4", "22 574 4", "353 968 7", "839 703 9", "203 24 1", "58 953 10", "904 490 8", "467 408 8", "442 253 7", "640 586 2"};
    vector<string> finish = {"401 929", "433 617", "299 115", "531 892", "574 798", "145 428", "34 52", "677 26", "555 13", "349 308", "166 25", "573 289", "126 481", "481 967", "978 50", "760 634", "0 418", "972 860", "118 471", "123 467", "655 334", "429 315", "31 86", "698 395", "240 557", "284 517", "517 565", "536 938", "741 608", "750 548", "227 344", "574 667", "978 760", "116 139", "739 760", "11 958", "840 802", "365 580", "231 63", "98 46", "734 521", "709 446", "477 480", "164 109", "851 179", "917 421", "232 463", "913 155", "680 702", "923 480"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 106.00471687618433;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> start = {"846 964 7", "630 789 5", "972 267 2", "247 736 5", "685 803 4", "538 236 1", "31 240 5", "363 795 4", "929 777 6", "745 78 2", "95 103 4", "737 596 3", "544 444 3", "317 253 7", "405 732 2", "37 491 6", "774 366 2", "657 894 3", "851 699 1", "723 683 2", "748 692 2", "744 749 9", "974 77 5", "393 699 1", "794 970 6", "824 60 2", "127 10 9", "705 456 4", "308 186 1", "102 860 9", "423 841 7", "903 348 5", "630 545 8", "69 83 3", "900 997 1", "448 507 1", "41 834 6", "280 499 4", "561 682 2", "387 567 4", "106 726 8", "49 274 2", "212 465 2", "441 960 8", "121 37 8", "413 188 1", "139 627 3", "4 345 1", "58 13 1", "358 138 8"};
    vector<string> finish = {"753 578", "523 87", "821 942", "588 99", "547 360", "958 261", "209 828", "610 591", "685 255", "742 132", "783 277", "378 363", "491 866", "706 431", "229 900", "407 733", "317 887", "206 759", "862 849", "742 362", "508 307", "101 499", "626 43", "964 185", "588 650", "847 858", "865 581", "29 428", "941 884", "332 288", "777 728", "192 35", "175 789", "224 656", "303 934", "408 826", "792 643", "658 107", "835 534", "113 568", "870 973", "144 484", "537 471", "967 376", "245 367", "601 578", "720 924", "780 242", "915 326", "965 463"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 149.33519344079613;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> start = {"322 550 2", "995 65 1", "575 867 4", "111 385 7", "262 531 3", "552 797 2", "116 93 2", "452 163 10", "546 113 4", "800 615 2", "573 282 8", "981 532 7", "936 942 1", "962 302 2", "515 227 9", "296 30 3", "959 862 3", "501 24 9", "310 187 10", "358 972 7", "533 685 4", "371 762 1", "710 968 1", "854 374 6", "373 620 10", "822 882 9", "986 192 1", "194 783 10", "13 614 7", "701 117 6", "251 142 9", "308 967 5", "68 614 2", "966 63 3", "575 693 6", "192 199 5", "209 761 6", "261 978 9", "944 267 10", "289 434 9", "330 223 6", "210 523 6", "537 97 5", "930 684 1", "456 317 1", "3 984 5", "437 779 10", "475 111 5", "397 924 1", "67 8 6"};
    vector<string> finish = {"184 85", "286 561", "757 155", "810 957", "289 73", "483 94", "108 492", "278 236", "469 851", "433 43", "615 248", "917 30", "777 384", "123 844", "46 257", "475 482", "874 183", "672 761", "567 630", "668 749", "323 859", "104 876", "251 206", "548 442", "545 396", "868 163", "539 351", "148 545", "230 160", "527 653", "405 1000", "248 950", "803 149", "462 20", "523 902", "988 177", "547 61", "750 343", "831 172", "552 828", "608 380", "39 405", "404 138", "713 401", "950 836", "626 695", "265 124", "748 18", "538 347", "94 628"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 198.3053201505194;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> start = {"374 748 5", "408 102 1", "268 311 9", "771 324 1", "241 488 1", "721 810 3", "689 690 10", "707 948 2", "267 318 6", "468 227 1", "993 674 5", "544 364 5", "501 842 1", "493 266 2", "86 272 1", "21 331 2", "845 706 1", "969 55 4", "428 190 4", "516 234 10", "899 139 9", "45 935 4", "102 120 3", "656 523 4", "399 815 3", "1 88 6", "316 446 2", "530 614 5", "179 320 3", "778 832 9", "813 41 9", "904 176 7", "546 430 5", "34 726 5", "564 898 4", "656 483 4", "418 351 4", "542 559 6", "936 962 10", "183 430 3", "862 577 5", "614 906 8", "188 523 10", "31 466 7", "211 616 6", "431 942 8", "49 981 5", "656 888 10", "38 854 4", "770 235 9"};
    vector<string> finish = {"717 585", "890 583", "108 829", "37 79", "914 267", "780 884", "432 239", "738 245", "523 644", "171 506", "296 175", "760 549", "805 720", "814 315", "620 480", "656 267", "670 457", "458 720", "444 922", "3 851", "830 508", "805 614", "48 59", "921 538", "713 320", "466 898", "339 887", "875 720", "673 58", "945 188", "62 730", "648 210", "152 160", "318 734", "319 755", "798 117", "133 377", "279 42", "903 49", "603 976", "629 105", "594 507", "320 902", "973 591", "644 82", "853 280", "316 743", "248 626", "114 104", "259 493"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 133.6899397860587;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> start = {"628 363 1", "314 729 1", "810 261 8", "959 881 7", "388 471 9", "364 919 6", "938 270 6", "671 842 8", "881 454 3", "874 548 3", "876 692 10", "732 91 5", "272 851 1", "400 468 5", "424 135 5", "760 644 8", "850 91 5", "466 617 5", "962 333 1", "920 93 8", "459 973 6", "349 65 4", "199 298 7", "492 770 1", "229 233 3", "98 764 2", "929 418 9", "656 870 4", "429 104 6", "623 490 1", "653 901 5", "384 946 1", "788 425 1", "757 345 8", "581 7 7", "718 974 2", "343 243 9", "131 735 6", "509 362 2", "845 810 8", "935 153 8", "298 302 5", "759 335 2", "685 965 5", "415 647 7", "716 319 7", "905 394 2", "360 287 6", "32 121 8", "479 775 9"};
    vector<string> finish = {"721 691", "211 671", "688 673", "718 114", "205 105", "569 277", "438 657", "313 355", "733 210", "165 853", "673 946", "910 937", "311 549", "422 752", "544 82", "712 738", "179 759", "576 966", "191 944", "976 75", "862 144", "660 214", "597 948", "119 261", "27 946", "56 237", "99 984", "602 986", "342 570", "660 127", "114 14", "956 654", "693 247", "876 276", "624 42", "434 213", "368 504", "500 95", "873 835", "176 349", "198 472", "576 472", "722 71", "293 501", "512 814", "576 467", "54 526", "428 89", "667 949", "592 573"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 201.76471445721128;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> start = {"143 396 1", "917 453 3", "809 444 1", "724 76 4", "554 27 2", "33 947 2", "749 30 3", "700 290 3", "361 184 8", "297 436 4", "72 864 2", "969 901 2", "943 410 5", "122 716 10", "374 863 4", "636 879 3", "913 711 7", "379 180 1", "106 15 9", "78 206 8", "409 362 4", "829 705 7", "137 356 10", "142 281 8", "520 296 9", "693 649 10", "472 842 1", "505 193 6", "440 299 5", "970 230 4", "829 672 9", "225 574 4", "71 747 2", "260 851 10", "558 494 2", "562 720 9", "397 43 5", "940 815 9", "726 380 10", "308 426 3", "428 136 7", "142 250 1", "361 811 10", "454 551 7", "367 115 10", "841 669 1", "725 355 9", "944 528 5", "921 676 10", "286 11 10"};
    vector<string> finish = {"722 108", "714 112", "144 440", "982 856", "850 758", "846 852", "853 740", "845 758", "881 275", "206 626", "707 610", "530 382", "706 143", "927 664", "357 411", "207 512", "471 181", "36 469", "60 634", "352 843", "696 324", "463 418", "734 171", "952 387", "317 921", "853 29", "894 175", "413 397", "260 500", "484 535", "214 190", "13 271", "779 722", "16 598", "178 666", "997 396", "563 320", "905 806", "498 862", "673 711", "589 40", "271 40", "479 544", "229 526", "678 704", "512 955", "682 752", "280 474", "260 653", "934 310"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 153.9415473483361;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> start = {"802 842 5", "793 851 9", "305 309 5", "748 188 7", "472 856 3", "188 315 2", "422 34 7", "335 481 10", "793 27 6", "452 449 2", "760 134 3", "755 925 8", "308 987 2", "85 866 6", "388 67 3", "547 625 10", "754 3 4", "773 81 3", "7 722 1", "553 334 10", "512 961 9", "946 444 1", "183 923 4", "204 155 6", "472 490 2", "820 765 2", "413 241 8", "62 126 9", "589 719 1", "34 540 9", "512 741 5", "100 605 3", "125 171 4", "654 244 5", "150 121 6", "978 900 3", "754 649 6", "686 965 6", "832 100 8", "1000 602 9", "27 900 7", "0 938 6", "486 380 6", "320 18 3", "990 836 8", "531 617 9", "528 397 3", "790 414 9", "994 914 2", "119 112 5"};
    vector<string> finish = {"336 98", "676 157", "838 252", "902 644", "127 195", "534 201", "969 592", "906 497", "7 368", "108 383", "25 743", "187 432", "393 925", "14 731", "535 188", "708 215", "367 216", "398 55", "655 858", "379 915", "172 896", "825 972", "74 770", "494 107", "400 292", "325 216", "197 117", "900 307", "138 859", "527 374", "697 34", "985 740", "757 198", "501 121", "733 927", "130 890", "412 486", "666 931", "634 212", "266 196", "108 423", "876 229", "832 776", "709 787", "975 361", "860 759", "453 899", "896 678", "975 123", "882 452"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 137.92751719653333;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> start = {"414 899 4", "706 170 5", "25 257 9", "525 450 3", "327 294 4", "893 757 8", "126 419 8", "148 147 10", "686 941 2", "901 711 6", "956 969 3", "712 524 5", "79 475 1", "537 739 10", "10 675 7", "402 237 6", "965 775 10", "392 833 6", "604 34 6", "591 694 8", "713 139 5", "16 457 8", "387 997 1", "127 990 3", "247 862 2", "68 810 3", "40 248 1", "607 126 8", "931 516 8", "917 210 6", "429 225 8", "323 817 1", "951 734 3", "925 756 9", "674 721 9", "611 605 1", "938 636 8", "268 101 1", "154 640 4", "313 822 3", "86 936 10", "403 996 5", "157 691 10", "903 142 6", "44 78 9", "656 453 9", "198 743 3", "836 703 5", "601 189 5", "316 923 6"};
    vector<string> finish = {"564 665", "830 408", "632 376", "827 510", "304 240", "524 401", "945 912", "323 103", "491 112", "602 934", "878 204", "894 347", "224 85", "770 912", "236 951", "5 757", "287 251", "462 903", "267 161", "368 340", "692 534", "607 462", "303 839", "689 948", "941 218", "903 448", "22 511", "316 487", "699 297", "907 846", "474 563", "847 571", "563 507", "883 737", "321 273", "16 656", "858 123", "338 785", "523 804", "495 551", "383 123", "139 175", "20 364", "951 531", "128 688", "151 495", "606 497", "773 558", "204 821", "530 650"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 120.2538980657176;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> start = {"53 848 7", "454 274 7", "249 986 9", "47 815 7", "344 677 5", "79 557 2", "325 539 9", "316 975 9", "268 598 1", "760 235 1", "847 885 8", "649 311 6", "58 879 3", "926 175 3", "389 407 2", "711 411 3", "634 276 9", "311 307 8", "811 678 4", "500 781 9", "954 299 8", "772 366 8", "935 271 5", "269 772 4", "626 10 6", "612 675 9", "915 453 9", "192 68 7", "78 317 8", "210 740 9", "113 503 5", "217 827 5", "813 754 8", "316 158 5", "240 280 10", "845 647 10", "509 6 6", "276 300 8", "536 741 8", "616 521 3", "739 74 10", "965 569 1", "34 446 1", "810 42 8", "855 777 1", "777 224 2", "436 616 3", "469 338 5", "278 40 9", "42 383 8"};
    vector<string> finish = {"734 805", "307 953", "602 520", "396 98", "909 818", "6 0", "265 462", "890 902", "499 820", "726 421", "947 968", "747 138", "577 626", "851 629", "308 106", "290 484", "5 620", "526 864", "920 990", "131 816", "851 170", "216 67", "539 754", "167 170", "202 539", "524 721", "851 936", "7 60", "297 541", "790 378", "130 228", "957 156", "846 575", "359 688", "696 35", "978 721", "23 676", "246 843", "761 94", "498 530", "445 52", "910 850", "330 594", "770 232", "454 379", "691 628", "240 123", "593 455", "233 406", "387 467"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 176.40011337864837;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> start = {"651 606 6", "305 4 9", "662 742 9", "54 361 4", "632 639 7", "623 261 9", "116 563 4", "767 869 10", "130 109 10", "556 915 4", "43 813 7", "767 923 4", "807 478 5", "358 439 8", "354 367 6", "512 128 7", "571 939 5", "210 234 5", "177 687 9", "855 614 6", "211 413 10", "23 286 3", "729 300 1", "394 461 10", "603 498 1", "129 436 7", "543 626 3", "783 236 8", "255 796 8", "95 990 9", "348 218 5", "642 170 6", "899 116 10", "567 652 9", "848 236 6", "808 38 10", "577 160 9", "352 93 2", "912 939 2", "463 829 1", "505 982 8", "660 677 8", "676 825 1", "642 45 10", "742 254 5", "615 996 5", "268 326 8", "68 406 9", "542 160 5", "218 341 5"};
    vector<string> finish = {"960 352", "601 653", "834 843", "366 187", "417 35", "55 550", "272 206", "930 339", "521 181", "32 844", "257 662", "615 20", "125 84", "257 601", "291 498", "815 378", "748 875", "246 340", "706 253", "3 975", "674 58", "970 111", "534 521", "811 134", "939 293", "751 507", "169 390", "872 563", "436 257", "119 343", "276 639", "82 472", "942 401", "215 916", "36 624", "695 106", "665 65", "499 654", "50 511", "222 798", "610 88", "403 974", "287 437", "927 410", "688 109", "486 645", "112 511", "500 100", "205 211", "951 155"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 156.92354826475216;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> start = {"402 9 1", "197 426 3", "893 282 9", "795 796 7", "300 955 4", "373 490 3", "59 46 5", "573 248 7", "853 574 4", "706 964 4", "147 414 7", "629 930 3", "81 164 9", "137 524 4", "177 446 8", "630 21 5", "596 561 8", "738 547 1", "858 868 6", "163 827 8", "763 413 10", "7 995 3", "896 753 10", "814 385 3", "683 763 6", "965 967 4", "147 764 8", "316 963 2", "723 235 1", "193 209 2", "242 278 5", "122 85 1", "317 448 1", "973 848 4", "957 154 6", "279 457 6", "571 15 9", "603 843 9", "318 928 2", "960 572 9", "341 451 4", "328 989 10", "318 232 3", "778 978 5", "414 578 9", "806 164 9", "727 411 9", "249 323 9", "630 701 5", "568 916 4"};
    vector<string> finish = {"947 351", "775 520", "488 595", "880 154", "82 682", "320 0", "935 999", "868 467", "193 161", "761 447", "390 877", "597 729", "809 894", "303 559", "272 719", "431 254", "546 44", "702 324", "511 161", "539 275", "628 235", "420 751", "447 908", "919 517", "957 736", "839 279", "457 488", "1000 381", "959 423", "13 222", "238 215", "259 915", "905 575", "864 38", "676 597", "11 916", "203 68", "436 15", "46 484", "4 195", "430 827", "954 260", "541 920", "119 756", "958 936", "528 503", "714 743", "158 237", "754 603", "924 591"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 111.87939935484101;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> start = {"258 923 8", "163 254 4", "946 137 2", "65 798 6", "50 853 10", "685 583 9", "444 986 3", "237 372 1", "901 643 6", "36 1 10", "716 830 7", "733 846 7", "570 953 1", "925 637 10", "369 761 5", "672 639 3", "969 816 10", "86 907 1", "344 736 1", "709 190 10", "271 614 3", "490 968 9", "836 762 5", "256 807 2", "188 807 5", "169 818 4", "98 141 10", "509 18 6", "727 952 5", "65 180 1", "975 406 5", "388 912 1", "204 600 8", "27 100 5", "707 946 3", "967 789 7", "353 624 1", "275 662 9", "286 596 1", "828 780 2", "408 716 6", "482 28 1", "347 349 5", "219 560 5", "413 312 3", "690 745 8", "22 452 5", "997 520 1", "757 957 8", "651 550 8"};
    vector<string> finish = {"899 923", "718 514", "999 132", "468 871", "471 862", "587 276", "882 485", "294 856", "574 959", "659 626", "609 380", "803 450", "567 999", "811 462", "473 352", "185 157", "458 438", "79 646", "753 794", "918 716", "391 374", "415 851", "175 995", "952 772", "508 964", "242 782", "575 698", "394 0", "557 320", "70 270", "647 637", "157 966", "475 644", "566 561", "152 218", "817 897", "645 299", "139 177", "972 244", "708 786", "515 661", "349 129", "957 838", "501 560", "924 581", "993 694", "118 290", "157 151", "494 419", "229 342"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 191.1334612253961;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> start = {"747 592 5", "434 343 1", "139 377 3", "579 114 10", "175 859 6", "132 571 10", "931 912 1", "862 388 6", "698 538 5", "495 631 5", "207 511 4", "403 475 9", "576 221 7", "432 490 4", "379 812 6", "949 411 6", "84 571 4", "693 682 5", "111 627 9", "487 680 3", "681 805 10", "680 642 10", "586 233 3", "348 424 7", "776 673 5", "262 681 9", "995 488 2", "381 141 4", "828 495 3", "247 405 2", "47 563 2", "176 424 7", "881 537 10", "386 283 8", "557 540 8", "554 144 5", "903 732 6", "886 262 6", "764 67 10", "380 812 5", "267 524 3", "759 758 9", "646 391 7", "24 44 2", "888 496 10", "934 460 10", "793 273 5", "792 919 9", "639 837 6", "66 233 4"};
    vector<string> finish = {"782 881", "910 60", "26 424", "913 981", "546 935", "406 295", "223 777", "74 777", "295 982", "518 658", "193 911", "937 552", "181 453", "68 389", "145 532", "752 460", "201 960", "329 494", "784 862", "32 557", "515 61", "366 577", "15 62", "723 965", "801 891", "775 261", "432 560", "156 56", "541 46", "273 211", "671 338", "89 744", "513 201", "766 882", "548 699", "581 112", "313 379", "972 577", "665 70", "528 951", "971 543", "200 117", "404 365", "936 247", "983 587", "523 350", "773 495", "906 694", "578 575", "375 410"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 71.30918594402827;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> start = {"823 903 9", "794 678 1", "202 567 7", "892 320 1", "817 16 5", "902 557 4", "75 189 2", "156 269 4", "509 24 8", "1000 660 5", "972 654 1", "559 449 4", "809 727 1", "4 488 7", "756 440 8", "298 83 5", "97 639 6", "516 325 5", "854 70 3", "862 955 7", "191 721 10", "498 656 7", "658 228 8", "17 379 9", "80 177 2", "129 495 7", "134 864 1", "426 149 7", "306 426 10", "813 148 1", "793 299 3", "149 756 8", "59 218 4", "921 875 4", "769 44 10", "154 654 5", "135 487 2", "238 9 3", "365 672 6", "992 75 5", "659 630 9", "109 25 3", "153 105 4", "989 424 3", "283 950 3", "753 242 8", "96 178 5", "846 356 1", "901 3 9", "586 287 3"};
    vector<string> finish = {"774 502", "482 682", "753 236", "274 112", "413 948", "129 841", "25 525", "967 163", "170 910", "501 422", "62 973", "207 669", "572 896", "657 383", "307 223", "225 626", "625 877", "545 823", "165 353", "889 236", "45 887", "741 166", "658 525", "241 689", "481 587", "607 455", "425 748", "482 47", "508 995", "750 919", "182 926", "104 275", "305 339", "507 982", "762 6", "853 718", "306 187", "115 80", "814 389", "41 371", "524 486", "974 258", "380 818", "497 282", "919 537", "670 227", "898 292", "200 794", "232 146", "691 887"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 177.13271860387624;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> start = {"534 339 4", "94 683 9", "383 247 7", "418 316 4", "549 842 1", "355 592 1", "987 54 3", "145 114 2", "962 937 4", "33 683 9", "614 567 3", "822 511 3", "226 490 6", "769 75 3", "377 106 7", "593 651 10", "48 445 1", "581 287 5", "868 734 9", "657 511 6", "150 750 1", "985 452 4", "163 649 9", "156 303 6", "902 856 4", "502 113 2", "977 42 9", "54 682 9", "630 111 4", "980 319 3", "457 976 9", "433 209 8", "277 698 8", "19 727 8", "775 992 2", "243 935 10", "627 91 9", "186 64 1", "631 642 7", "284 822 3", "160 44 2", "685 141 9", "536 457 5", "628 783 6", "640 534 6", "796 49 9", "580 918 3", "296 803 5", "748 584 2", "227 570 5"};
    vector<string> finish = {"272 518", "272 58", "109 866", "578 72", "21 734", "843 503", "757 280", "985 77", "916 539", "77 715", "473 473", "79 108", "799 368", "697 289", "82 782", "619 3", "313 613", "72 947", "494 576", "594 806", "91 16", "814 889", "451 910", "207 462", "743 202", "671 124", "207 470", "783 370", "753 40", "92 215", "994 562", "778 784", "654 575", "257 844", "819 979", "611 551", "378 570", "345 213", "853 282", "334 968", "550 944", "485 329", "2 801", "966 637", "875 438", "271 846", "419 303", "751 622", "290 242", "364 476"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 159.90622251807463;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> start = {"748 908 9", "816 75 10", "486 687 8", "592 62 3", "626 729 5", "837 855 2", "100 427 9", "898 397 4", "620 622 10", "857 703 6", "690 30 10", "90 479 1", "143 56 2", "96 460 5", "68 348 4", "934 866 1", "193 24 6", "376 642 8", "193 504 3", "585 558 4", "710 20 3", "282 991 4", "536 528 8", "694 603 4", "864 501 9", "378 967 6", "90 676 3", "343 257 2", "344 514 4", "794 783 4", "974 603 1", "105 620 9", "533 513 10", "950 894 4", "26 701 2", "908 353 6", "388 216 1", "650 836 6", "608 525 6", "30 681 1", "448 449 6", "841 996 8", "299 209 5", "85 35 7", "173 909 3", "328 207 8", "450 39 6", "652 871 6", "1 737 5", "66 397 7"};
    vector<string> finish = {"243 940", "701 805", "327 241", "419 120", "920 309", "464 751", "447 963", "384 249", "274 62", "141 165", "936 287", "727 440", "66 115", "315 188", "572 758", "121 911", "577 471", "930 698", "615 727", "831 563", "903 81", "535 749", "864 78", "852 325", "15 761", "101 585", "196 469", "389 249", "987 552", "717 847", "992 357", "984 830", "696 28", "110 393", "729 838", "492 225", "558 844", "269 539", "659 385", "279 31", "631 486", "880 322", "55 137", "179 949", "786 9", "398 878", "804 349", "929 55", "262 28", "670 673"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 88.29496021857646;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> start = {"311 288 1", "7 230 9", "522 714 2", "120 189 8", "863 557 9", "827 793 7", "306 305 6", "582 205 1", "459 444 10", "639 616 9", "30 890 2", "298 958 10", "110 423 6", "862 983 8", "431 10 3", "750 32 7", "847 919 2", "744 71 2", "888 998 6", "15 632 4", "254 569 2", "808 720 3", "95 168 6", "110 958 8", "126 511 8", "653 239 7", "325 351 6", "643 163 1", "923 551 1", "300 368 9", "145 759 1", "887 820 4", "627 829 3", "623 802 9", "685 598 8", "737 46 2", "930 975 1", "363 876 8", "99 653 10", "514 275 10", "713 477 2", "355 94 2", "749 616 2", "912 896 4", "932 516 8", "375 123 3", "317 123 1", "141 163 3", "109 258 9", "658 499 7"};
    vector<string> finish = {"727 696", "823 752", "253 848", "280 851", "157 494", "64 889", "19 742", "782 208", "459 202", "276 345", "866 858", "528 981", "839 64", "190 778", "900 786", "147 678", "78 515", "663 368", "83 283", "306 318", "65 545", "799 917", "11 213", "733 192", "840 270", "145 282", "434 515", "173 933", "573 892", "401 919", "426 442", "69 988", "3 983", "334 653", "681 721", "20 873", "455 950", "204 199", "597 380", "591 302", "396 448", "59 232", "231 154", "219 888", "109 30", "147 177", "302 294", "468 248", "501 2", "188 795"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 224.50167037240502;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> start = {"0 0 1", "0 17 1", "0 34 1", "0 51 1", "0 68 1", "0 85 1", "0 102 1", "0 119 1", "0 136 1", "0 153 1", "0 170 1", "0 187 1", "0 204 1", "0 221 1", "0 238 1", "0 255 1", "0 272 1", "0 289 1", "0 306 1", "0 323 1", "0 340 1", "0 357 1", "0 374 1", "0 391 1", "0 408 1", "0 425 1", "0 442 1", "0 459 1", "0 476 1", "0 493 1", "0 510 1", "0 527 1", "0 544 1", "0 561 1", "0 578 1", "0 595 1", "0 612 1", "0 629 1", "0 646 1", "0 663 1", "0 680 1", "0 697 1", "0 714 1", "0 731 1", "0 748 1", "0 765 1", "0 782 1", "0 799 1", "0 816 1", "0 833 1"};
    vector<string> finish = {"0 950", "0 951", "0 952", "0 953", "0 954", "0 955", "0 956", "0 957", "0 958", "0 959", "0 960", "0 961", "0 962", "0 963", "0 964", "0 965", "0 966", "0 967", "0 968", "0 969", "0 970", "0 971", "0 972", "0 973", "0 974", "0 975", "0 976", "0 977", "0 978", "0 979", "0 980", "0 981", "0 982", "0 983", "0 984", "0 985", "0 986", "0 987", "0 988", "0 989", "0 990", "0 991", "0 992", "0 993", "0 994", "0 995", "0 996", "0 997", "0 998", "0 999"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 950.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> start = {"0 0 1", "0 17 1", "0 34 1", "0 51 1", "0 68 1", "0 85 1", "0 102 1", "0 119 1", "0 136 1", "0 153 1", "0 170 1", "0 187 1", "0 204 1", "0 221 1", "0 238 1", "0 255 1", "0 272 1", "0 289 1", "0 306 1", "0 323 1", "0 340 1", "0 357 1", "0 374 1", "0 391 1", "0 408 1", "0 425 1", "0 442 1", "0 459 1", "0 476 1", "0 493 1", "0 510 1", "0 527 1", "0 544 1", "0 561 1", "0 578 1", "0 595 1", "0 612 1", "0 629 1", "0 646 1", "0 663 1", "0 680 1", "0 697 1", "0 714 1", "0 731 1", "0 748 1", "0 765 1", "0 782 1", "0 799 1", "0 816 1", "0 833 1"};
    vector<string> finish = {"0 1000", "0 999", "0 998", "0 997", "0 996", "0 995", "0 994", "0 993", "0 992", "0 991", "0 990", "0 989", "0 988", "0 987", "0 986", "0 985", "0 984", "0 983", "0 982", "0 981", "0 980", "0 979", "0 978", "0 977", "0 976", "0 975", "0 974", "0 973", "0 972", "0 971", "0 970", "0 969", "0 968", "0 967", "0 966", "0 965", "0 964", "0 963", "0 962", "0 961", "0 960", "0 959", "0 958", "0 957", "0 956", "0 955", "0 954", "0 953", "0 952", "0 951"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 951.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> start = {"13 26 10"};
    vector<string> finish = {"100 21"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 8.714355971613738;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> start = {"1000 1000 1"};
    vector<string> finish = {"0 0"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1414.213562373095;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> start = {"308 994 10", "157 22 9", "282 975 5", "993 17 8", "925 771 2", "843 110 6", "860 629 8", "947 143 6", "921 348 7", "520 607 6", "735 306 3", "253 861 7", "562 56 9", "243 168 2", "521 971 1", "745 537 7"};
    vector<string> finish = {"431 911", "109 951", "177 721", "295 831", "937 256", "608 180", "863 994", "148 406", "275 531", "635 297", "681 404", "909 151", "569 730", "332 391", "94 97", "376 142"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 115.72920979597156;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> start = {"308 994 10", "157 22 9", "282 975 5", "993 17 8", "925 771 2", "843 110 6", "860 629 8", "947 143 6", "921 348 7", "520 607 6", "735 306 3", "253 861 7", "562 56 9", "243 168 2", "521 971 1", "745 537 7", "9 19 1", "245 23 5", "1000 1000 10", "234 253 1", "982 152 3"};
    vector<string> finish = {"431 911", "109 951", "177 721", "295 831", "937 256", "608 180", "863 994", "148 406", "275 531", "635 297", "681 404", "909 151", "569 730", "332 391", "94 97", "376 142", "2 1", "19 19", "10 10", "47 23", "34 15"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 169.2572007330855;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> start = {"1 1 1", "2 2 1", "3 3 1", "4 4 1", "5 5 1", "6 6 1", "7 7 1", "8 8 1", "9 9 1", "10 10 1", "11 11 1", "12 12 1", "13 13 1", "14 14 1", "15 15 1"};
    vector<string> finish = {"10 10", "20 20", "30 30", "40 40", "50 50", "60 60", "7 7", "8 8", "9 9", "100 100", "11 11", "12 12", "13 13", "14 14", "15 15"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 120.20815280171308;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> start = {"379 470 10", "671 476 7", "70 375 9", "770 940 5", "360 955 2", "309 320 6", "350 407 4", "536 614 6", "569 257 1", "39 504 1", "489 491 7", "221 745 8", "854 58 3", "80 929 9", "787 500 5", "313 71 5", "971 240 1", "266 197 3", "69 181 7", "398 988 3", "375 408 1", "692 867 1", "951 398 1", "853 607 2", "965 850 5", "944 757 7", "417 104 4", "570 819 1", "730 614 5", "125 21 1", "25 239 4", "644 497 9", "863 680 10", "152 326 3", "760 221 4", "469 674 4"};
    vector<string> finish = {"558 649", "856 551", "660 797", "193 761", "932 347", "241 110", "825 570", "743 295", "507 123", "396 552", "395 938", "164 670", "435 869", "500 66", "888 269", "424 210", "984 862", "970 533", "314 487", "555 196", "90 152", "435 84", "406 530", "23 673", "375 172", "520 465", "986 751", "13 851", "232 287", "189 760", "674 996", "56 351", "148 427", "991 137", "931 999", "867 712"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 135.5949851580065;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> start = {"341 486 6", "740 189 5", "989 388 4", "174 711 3", "971 844 8", "954 998 6", "424 442 4", "154 906 7", "439 395 5", "915 738 6", "786 748 3", "932 871 1", "53 326 9", "835 732 4", "691 364 3", "719 157 3", "573 875 3", "790 695 6", "732 872 4", "779 557 4", "213 39 5", "137 289 7", "284 951 5", "829 474 5", "395 736 6", "133 22 6", "649 552 4", "974 109 6", "971 852 1", "335 945 6", "651 472 7", "560 543 2", "952 85 9", "147 838 9", "727 688 5", "309 991 4", "27 409 3", "92 951 9", "804 835 7", "529 103 4", "171 304 2", "792 378 7", "36 590 4", "152 378 2", "980 746 4", "222 139 2", "473 349 8", "394 781 3", "242 918 6", "607 246 3"};
    vector<string> finish = {"971 429", "44 534", "198 430", "624 901", "657 781", "366 428", "558 652", "490 570", "46 623", "375 606", "867 302", "32 384", "46 601", "223 376", "509 688", "739 290", "2 54", "966 445", "792 907", "468 146", "908 732", "506 673", "424 825", "624 325", "524 836", "624 324", "469 954", "255 621", "588 536", "334 821", "20 231", "642 850", "735 5", "506 199", "358 97", "589 554", "513 344", "226 456", "625 472", "816 601", "297 813", "819 609", "185 38", "646 493", "305 557", "204 45", "687 209", "198 966", "911 835", "523 176"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 135.5322839769182;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> start = {"932 60 1", "540 426 1", "862 170 5", "567 429 2", "862 123 4", "91 980 4", "403 651 1", "211 368 2", "386 492 2", "305 925 2", "784 537 1", "94 539 5", "383 886 4", "690 59 5", "87 808 4", "421 919 2", "739 12 1", "777 915 4", "676 368 1", "393 456 5", "172 736 5", "413 526 5", "929 802 5", "782 530 3", "276 178 2", "11 42 4", "124 895 2", "814 367 3", "69 167 1", "226 586 5", "956 873 2", "846 729 3", "229 373 2", "434 364 3", "754 399 4", "67 135 1", "313 857 3", "788 584 5", "793 335 2", "763 926 4", "996 281 1", "582 545 5", "43 750 3", "22 58 1", "649 421 4", "84 327 4", "362 27 4", "315 370 4", "336 505 2", "198 324 4"};
    vector<string> finish = {"131 881", "590 505", "343 746", "840 904", "422 311", "499 772", "810 605", "36 452", "611 622", "139 954", "305 320", "163 199", "507 355", "466 84", "894 660", "736 444", "258 924", "183 490", "981 899", "416 282", "899 379", "743 470", "668 190", "82 542", "917 917", "773 813", "568 340", "464 197", "996 324", "930 933", "637 62", "786 669", "71 973", "688 369", "730 878", "529 776", "828 299", "818 128", "624 600", "404 443", "95 926", "465 708", "538 606", "996 959", "804 348", "801 661", "763 613", "626 522", "550 468", "725 644"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 301.4448539948891;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> start = {"49 37 4", "95 97 6", "88 82 5", "1 16 4", "13 55 3", "8 32 7", "21 58 8", "44 96 2"};
    vector<string> finish = {"66 49", "16 86", "55 34", "71 86", "85 53", "45 13", "46 82", "22 29"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 10.381607668264957;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> start = {"0 0 1", "1 0 1", "2 0 1", "3 0 1", "4 0 1", "5 0 1", "6 0 1", "7 0 1", "8 0 1", "9 0 1", "10 0 1", "11 0 1", "12 0 1", "13 0 1", "14 0 1", "15 0 1", "16 0 1", "17 0 1", "18 0 1", "19 0 1", "20 0 1", "21 0 1", "22 0 1", "23 0 1", "24 0 1", "25 0 1", "26 0 1", "27 0 1", "28 0 1", "29 0 1", "30 0 1", "31 0 1", "32 0 1", "33 0 1", "34 0 1", "35 0 1", "36 0 1", "37 0 1", "38 0 1", "39 0 1", "40 0 1", "41 0 1", "42 0 1", "43 0 1", "44 0 1", "45 0 1", "46 0 1", "47 0 1", "48 0 1", "49 0 1"};
    vector<string> finish = {"0 100", "1 100", "2 100", "3 100", "4 100", "5 100", "6 100", "7 100", "8 100", "9 100", "10 100", "11 100", "12 100", "13 100", "14 100", "15 100", "16 100", "17 100", "18 100", "19 100", "20 100", "21 100", "22 100", "23 100", "24 100", "25 100", "26 100", "27 100", "28 100", "29 100", "30 100", "31 100", "32 100", "33 100", "34 100", "35 100", "36 100", "37 100", "38 100", "39 100", "40 100", "41 100", "42 100", "43 100", "44 100", "45 100", "46 100", "47 100", "48 100", "49 1000"};
    UnitsMoving* pObj = new UnitsMoving();
    clock_t start = clock();
    double result = pObj->bestTime(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8547850&rd=8075&pm=5921
********************************************************************************
#define FR(i,a,b) for (int i = (a); i < (b); i++)
#define FOR(i,n) FR(i,0,n)
#define FORI(i,n) FOR(i,n.size())
#include <string>
#include <vector>
#define SZ size()
#define CS c_str()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <setjmp.h>
#include <regex.h>
#include <utility>
#define ll long long
#define ld long double
#define EPS 1e-9
using namespace std;
 
int adj[64][64];
int n;
int mate[64], mate2[64];
int been[64];
int aug(int v) {
 if (been[v]) return 0;
 been[v] = 1;
 FOR(i,n) if (adj[v][i] && -1==mate2[i]) {
  mate2[i] = v; mate[v] = i; return 1;
 }
 FOR(i,n) if (adj[v][i] && aug(mate2[i])) {
  mate2[i] = v; mate[v] = i; return 1;  
 }
 return 0;
}
struct UnitsMoving {
ld graf[64][64];
int can(ld mx) {
 memset(mate,-1,sizeof(mate));
 memset(mate2,-1,sizeof(mate2));
 FOR(i,n) FOR(j,n) adj[i][j] = graf[i][j] < mx;
 FOR(i,n) { memset(been,0,sizeof(been)); if (!aug(i)) return 0; }
 return 1;
}
double bestTime(vector <string> start, vector <string> finish) {
n=start.SZ;
FORI(i,start) FORI(j,finish) {
 int x1, y1, x2, y2, v;
 sscanf(start[i].CS,"%i%i%i",&x1,&y1,&v);
 sscanf(finish[j].CS,"%i%i",&x2,&y2);
 graf[i][j] = hypot(y2-y1,x2-x1+(ld)0)/v;
}
ld lb=0, ub=1e10;
while (ub-lb > 1e-10) {
 ld cur = (ub+lb)/2.;
 if (can(cur)) ub=cur; else lb=cur;
}
return (lb+ub)/2.;
}};
// Powered by ted

********************************************************************************
*******************************************************************************/