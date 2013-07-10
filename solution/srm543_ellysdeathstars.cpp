/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11904
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

class EllysDeathStars {
public:
    double getMax(vector<string> stars, vector<string> ships);
};

double EllysDeathStars::getMax(vector<string> stars, vector<string> ships) {
    double ret;
    return ret;
}


int test0() {
    vector<string> stars = {"2 2"};
    vector<string> ships = {"1 1 5 3 2 1 2"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 0.894427190999916;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> stars = {"12 10", "7 5"};
    vector<string> ships = {"10 10 12 10 1 1 3", "6 1 8 10 1 2 3", "3 6 8 2 5 3 1", "42 42 42 42 6 6 6"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 4.983770744659944;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> stars = {"5 77", "60 50", "10 46", "22 97", "87 69"};
    vector<string> ships = {"42 17 66 11 5 7 13", "10 10 20 20 3 3 3", "13 15 18 9 4 1 2", "99 71 63 81 19 4 60", "27 34 56 43 11 3 12"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> stars = {"141 393", "834 847", "568 43", "18 228", "515 794", "167 283", "849 333", "719 738", "434 261", "613 800", "127 340", "466 938", "598 601"};
    vector<string> ships = {"410 951 472 100 337 226 210", "713 352 677 908 731 687 300", "191 41 337 92 446 716 213", "598 889 446 907 148 650 203", "168 556 470 924 344 369 198", "300 182 350 936 737 533 45", "410 871 488 703 746 631 80", "270 777 636 539 172 103 56", "466 906 522 98 693 77 309", "768 698 846 110 14 643 14", "755 724 664 465 263 759 120"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 31.965770956316362;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> stars = {"20 1", "70 1", "120 1", "170 1", "220 1", "270 1", "320 1", "370 1", "420 1", "470 1", "520 1", "570 1", "620 1", "670 1", "720 1", "770 1", "820 1", "870 1", "920 1", "970 1"};
    vector<string> ships = {"1 21 1000 21 1 21 257", "1 20 1000 20 1 21 102", "1 19 1000 19 1 21 75", "1 18 1000 18 1 21 61", "1 17 1000 17 1 21 51", "1 16 1000 16 1 21 44", "1 15 1000 15 1 21 39", "1 14 1000 14 1 21 34", "1 13 1000 13 1 21 30", "1 12 1000 12 1 21 27", "1 11 1000 11 1 21 24", "1 10 1000 10 1 21 21", "1 9 1000 9 1 21 18", "1 8 1000 8 1 21 15", "1 7 1000 7 1 21 13", "1 6 1000 6 1 21 11", "1 5 1000 5 1 21 9", "1 4 1000 4 1 21 7", "1 3 1000 3 1 21 5", "1 2 1000 2 1 21 3"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 837.0709015727234;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> stars = {"20 1", "70 1", "120 1", "170 1", "220 1", "270 1", "320 1", "370 1", "420 1", "470 1", "520 1", "570 1", "620 1", "670 1", "720 1", "770 1", "820 1", "870 1", "920 1", "970 1"};
    vector<string> ships = {"1 20 1000 20 1 20 249", "1 19 1000 19 1 20 98", "1 18 1000 18 1 20 72", "1 17 1000 17 1 20 58", "1 16 1000 16 1 20 49", "1 15 1000 15 1 20 42", "1 14 1000 14 1 20 36", "1 13 1000 13 1 20 32", "1 12 1000 12 1 20 28", "1 11 1000 11 1 20 24", "1 10 1000 10 1 20 21", "1 9 1000 9 1 20 18", "1 8 1000 8 1 20 16", "1 7 1000 7 1 20 13", "1 6 1000 6 1 20 11", "1 5 1000 5 1 20 9", "1 4 1000 4 1 20 6", "1 3 1000 3 1 20 4", "1 2 1000 2 1 20 2", "1 1 1000 1 1 20 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 789.0000000000003;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> stars = {"20 1", "70 1", "120 1", "170 1", "220 1", "270 1", "320 1", "370 1", "420 1", "470 1", "520 1", "570 1", "620 1", "670 1", "720 1", "770 1", "820 1", "870 1", "920 1", "970 1"};
    vector<string> ships = {"1 20 1000 20 1 20 124", "1 19 1000 19 1 20 174", "1 18 1000 18 1 20 210", "1 17 1000 17 1 20 240", "1 16 1000 16 1 20 264", "1 15 1000 15 1 20 285", "1 14 1000 14 1 20 303", "1 13 1000 13 1 20 320", "1 12 1000 12 1 20 334", "1 11 1000 11 1 20 346", "1 10 1000 10 1 20 357", "1 9 1000 9 1 20 366", "1 8 1000 8 1 20 374", "1 7 1000 7 1 20 381", "1 6 1000 6 1 20 387", "1 5 1000 5 1 20 391", "1 4 1000 4 1 20 395", "1 3 1000 3 1 20 397", "1 2 1000 2 1 20 399", "1 1 1000 1 1 20 399"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 799.0000000000024;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> stars = {"20 1", "70 1", "120 1", "170 1", "220 1", "270 1", "320 1", "370 1", "420 1", "470 1", "520 1", "570 1", "620 1", "670 1", "720 1", "770 1", "820 1", "870 1", "920 1", "970 1"};
    vector<string> ships = {"1 20 1000 20 1 20 248", "1 19 1000 19 1 20 347", "1 18 1000 18 1 20 420", "1 17 1000 17 1 20 479", "1 16 1000 16 1 20 528", "1 15 1000 15 1 20 570", "1 14 1000 14 1 20 606", "1 13 1000 13 1 20 639", "1 12 1000 12 1 20 667", "1 11 1000 11 1 20 691", "1 10 1000 10 1 20 713", "1 9 1000 9 1 20 732", "1 8 1000 8 1 20 748", "1 7 1000 7 1 20 762", "1 6 1000 6 1 20 773", "1 5 1000 5 1 20 782", "1 4 1000 4 1 20 789", "1 3 1000 3 1 20 794", "1 2 1000 2 1 20 797", "1 1 1000 1 1 20 798"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 799.0000000000023;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> stars = {"20 1", "70 1", "120 1", "170 1", "220 1", "270 1", "320 1", "370 1", "420 1", "470 1", "520 1", "570 1", "620 1", "670 1", "720 1", "770 1", "820 1", "870 1", "920 1", "970 1"};
    vector<string> ships = {"1 20 1000 20 1 20 83", "1 19 1000 19 1 20 116", "1 18 1000 18 1 20 140", "1 17 1000 17 1 20 160", "1 16 1000 16 1 20 176", "1 15 1000 15 1 20 190", "1 14 1000 14 1 20 202", "1 13 1000 13 1 20 213", "1 12 1000 12 1 20 222", "1 11 1000 11 1 20 230", "1 10 1000 10 1 20 238", "1 9 1000 9 1 20 244", "1 8 1000 8 1 20 249", "1 7 1000 7 1 20 254", "1 6 1000 6 1 20 258", "1 5 1000 5 1 20 261", "1 4 1000 4 1 20 263", "1 3 1000 3 1 20 265", "1 2 1000 2 1 20 266", "1 1 1000 1 1 20 266"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 799.0000000000018;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> stars = {"20 1", "70 1", "120 1", "170 1", "220 1", "270 1", "320 1", "370 1", "420 1", "470 1", "520 1", "570 1", "620 1", "670 1", "720 1", "770 1", "820 1", "870 1", "920 1", "970 1"};
    vector<string> ships = {"1 20 1000 20 1 20 62", "1 19 1000 19 1 20 87", "1 18 1000 18 1 20 105", "1 17 1000 17 1 20 120", "1 16 1000 16 1 20 132", "1 15 1000 15 1 20 142", "1 14 1000 14 1 20 151", "1 13 1000 13 1 20 160", "1 12 1000 12 1 20 167", "1 11 1000 11 1 20 173", "1 10 1000 10 1 20 178", "1 9 1000 9 1 20 183", "1 8 1000 8 1 20 187", "1 7 1000 7 1 20 190", "1 6 1000 6 1 20 193", "1 5 1000 5 1 20 195", "1 4 1000 4 1 20 197", "1 3 1000 3 1 20 198", "1 2 1000 2 1 20 199", "1 1 1000 1 1 20 199"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 799.0000000000009;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> stars = {"20 1", "70 1", "120 1", "170 1", "220 1", "270 1", "320 1", "370 1", "420 1", "470 1", "520 1", "570 1", "620 1", "670 1", "720 1", "770 1", "820 1", "870 1", "920 1", "970 1"};
    vector<string> ships = {"1 20 1000 20 1 20 49", "1 19 1000 19 1 20 69", "1 18 1000 18 1 20 84", "1 17 1000 17 1 20 96", "1 16 1000 16 1 20 105", "1 15 1000 15 1 20 114", "1 14 1000 14 1 20 121", "1 13 1000 13 1 20 128", "1 12 1000 12 1 20 133", "1 11 1000 11 1 20 138", "1 10 1000 10 1 20 142", "1 9 1000 9 1 20 146", "1 8 1000 8 1 20 149", "1 7 1000 7 1 20 152", "1 6 1000 6 1 20 154", "1 5 1000 5 1 20 156", "1 4 1000 4 1 20 158", "1 3 1000 3 1 20 159", "1 2 1000 2 1 20 159", "1 1 1000 1 1 20 159"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 799.0000000000009;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> stars = {"20 1", "70 1", "120 1", "170 1", "220 1", "270 1", "320 1", "370 1", "420 1", "470 1", "520 1", "570 1", "620 1", "670 1", "720 1", "770 1", "820 1", "870 1", "920 1", "970 1"};
    vector<string> ships = {"1 21 1000 21 1 21 257", "1 20 1000 20 1 21 102", "1 19 1000 19 1 21 75", "1 18 1000 18 1 21 61", "1 17 1000 17 1 21 51", "1 16 1000 16 1 21 44", "1 15 1000 15 1 21 39", "1 14 1000 14 1 21 34", "1 13 1000 13 1 21 30", "1 12 1000 12 1 21 27", "1 11 1000 11 1 21 24", "1 10 1000 10 1 21 21", "1 9 1000 9 1 21 18", "1 8 1000 8 1 21 15", "1 7 1000 7 1 21 13", "1 6 1000 6 1 21 11", "1 5 1000 5 1 21 9", "1 4 1000 4 1 21 7", "1 3 1000 3 1 21 5", "1 2 1000 2 1 21 3"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 837.0709015727234;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> stars = {"539 293", "39 180", "191 658", "959 192", "816 889"};
    vector<string> ships = {"931 978 307 674 387 22 746", "925 73 271 830 778 574 98", "513 987 291 162 637 356 768", "656 575 32 53 351 151 942", "725 967 431 108 192 8 338", "458 288 754 384 946 910 210", "759 222 589 423 947 507 31", "414 169 901 592 763 656 411", "360 625 538 549 484 596 42", "603 351 292 837 375 21 597", "22 349 200 669 485 282 735", "54 1000 419 939 901 789 128", "468 729 894 649 484 808 422", "311 618 814 515 310 617 936", "452 601 250 520 557 799 304", "225 9 845 610 990 703 196", "486 94 344 524 588 315 504", "449 201 459 619 581 797 799", "282 590 799 10 158 473 623"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 15.597286377100689;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> stars = {"25 155", "511 746", "650 187", "314 475", "23 169", "19 788", "906 959", "392 203", "626 478", "415 315", "825 335", "875 373"};
    vector<string> ships = {"203 635 273 56 329 647 363", "887 876 434 870 143 845 417", "882 999 323 652 22 700 558", "477 893 390 76 713 601 511", "4 870 862 689 402 790 256", "424 3 586 183 286 89 427", "618 758 833 933 170 155 722", "190 977 330 369 693 426 556", "435 550 442 513 146 61 719", "754 140 424 280 997 688 530", "550 438 867 950 194 196 298", "417 287 106 489 283 456 735", "115 702 317 672 787 264 314", "356 186 54 913 809 833 946", "314 757 322 559 647 983 482", "145 197 223 130 162 536 451", "174 467 45 660 293 440 254"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 290.40687754993365;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> stars = {"109 114", "888 802", "851 461", "429 994", "385 406", "541 112", "705 836", "357 73", "351 824", "486 557", "217 627", "358 527", "358 338", "272 870"};
    vector<string> ships = {"71 488 298 519 178 774 271", "764 669 193 986 103 481 214", "628 803 100 528 626 544 925", "24 973 62 182 4 433 506", "594 726 32 493 143 223 287", "65 901 188 361 414 975 271", "171 236 834 712 761 897 668", "286 551 141 695 696 625 20", "126 577 695 659 303 372 467", "679 594 852 485 19 465 120", "153 801 88 61 927 11 758", "171 316 577 228 44 759 165", "110 883 87 566 488 578 475", "626 628 630 929 424 521 903", "963 124 597 738 262 196 526", "265 261 203 117 31 327 12", "772 412 548 154 521 791 925", "189 764 941 852 663 830 901", "714 959 579 366 8 478 201", "59 440 304 761 358 325 478"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 843.8347960596576;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> stars = {"856 54", "963 585", "735 655", "973 458", "370 533", "964 608", "484 912", "636 68", "849 676", "939 224", "143 755", "512 742", "176 460", "826 222", "871 627", "935 206", "784 851"};
    vector<string> ships = {"23 618 113 718 697 586 42", "424 130 230 566 560 933 297"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 14.486815346291646;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> stars = {"520 986", "290 945", "866 541", "246 509", "319 871", "602 324", "133 473", "153 88", "571 764", "902 104", "424 528", "601 970", "16 566", "29 544", "348 89", "944 638", "410 464", "50 682", "589 343", "609 61"};
    vector<string> ships = {"702 194 735 638 535 557 994", "177 706 963 549 882 301 414", "642 856 856 143 463 612 878", "425 679 753 444 297 674 41", "314 876 73 819 611 18 933", "113 696 170 832 41 489 686", "91 498 590 991 146 354 315", "652 741 45 259 336 760 193", "606 265 182 504 830 776 609", "293 998 550 557 562 628 468", "542 130 241 814 175 602 78", "216 684 214 993 825 602 393", "760 671 429 28 85 76 787", "499 971 288 848 605 504 222", "664 707 364 11 172 490 241", "165 543 620 914 592 705 819", "233 751 206 976 540 304 423", "99 248 585 649 972 865 914", "76 546 713 547 679 770 263"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 87.96247550363458;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> stars = {"186 39", "854 630", "225 749", "924 360", "258 767", "945 956", "319 727", "412 26", "356 2", "550 497", "585 516", "965 343", "76 914", "143 197", "949 73", "427 607", "174 430", "405 706", "627 813"};
    vector<string> ships = {"955 889 147 691 950 844 431", "621 749 68 537 784 36 227"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 14.76120809828002;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> stars = {"381 816", "952 542", "116 680", "111 899", "74 789", "978 133", "957 690", "114 9", "942 791", "724 364", "29 185", "779 201", "72 886", "975 72"};
    vector<string> ships = {"566 37 737 142 815 995 257", "653 937 839 483 356 16 132", "231 842 626 12 638 187 691", "651 663 635 894 354 417 453", "9 263 234 455 304 635 304", "257 149 125 318 214 110 29", "201 81 319 859 51 156 362", "265 904 677 644 910 903 562", "490 949 283 654 675 221 403", "924 832 370 879 260 9 620", "972 4 946 782 505 393 686", "314 699 590 723 939 38 411", "462 235 509 962 960 494 516", "270 938 870 59 701 972 265", "118 216 556 816 331 40 213", "289 83 955 86 711 485 775"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 24.077199070493666;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> stars = {"99 831", "293 601", "279 800", "353 449", "883 541", "316 576", "763 568", "337 398"};
    vector<string> ships = {"154 296 169 826 677 630 651", "599 310 694 687 81 117 250", "668 529 680 865 422 406 827", "817 517 727 667 88 682 965", "341 687 22 663 722 65 310", "416 903 874 125 942 746 763", "424 532 807 269 319 603 908", "308 482 13 137 631 115 810", "85 557 291 294 997 153 55", "346 709 249 492 713 132 115", "440 959 723 705 996 53 270", "480 239 424 919 867 660 499", "487 197 463 634 159 23 147", "393 38 926 648 459 603 808"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 16.865893293303706;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> stars = {"196 595", "951 344", "755 482", "13 673", "440 429", "913 763", "968 409", "416 909", "224 760", "435 205", "487 320", "959 946", "807 167", "701 368", "693 788", "533 557", "975 448", "22 284"};
    vector<string> ships = {"829 852 817 231 450 926 659", "230 521 941 561 148 163 656", "676 793 362 755 399 147 715", "947 189 570 639 664 76 516", "522 476 616 529 235 571 906", "465 558 963 162 525 550 470", "331 924 351 334 926 911 738", "337 338 279 394 637 715 165", "592 950 136 506 338 5 338", "624 665 971 609 569 282 86", "153 374 653 195 877 827 397", "573 250 641 175 820 944 612", "942 290 420 566 806 586 217", "451 616 610 65 167 894 75", "510 301 696 574 590 162 173", "969 359 32 269 427 511 423", "775 780 911 553 183 392 496", "765 875 365 903 256 461 475", "973 822 123 548 578 790 606"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 63.3377216481459;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> stars = {"69 992", "197 784", "829 728", "427 872", "698 613", "704 28", "409 546", "509 186", "239 238", "444 314", "502 851", "129 112"};
    vector<string> ships = {"377 584 949 724 983 19 777", "221 112 183 857 491 926 325", "487 678 970 644 535 678 669"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 18.10629700131604;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> stars = {"841 767", "736 811", "600 838", "893 983", "329 353", "370 245", "795 609", "253 648", "433 536", "209 265"};
    vector<string> ships = {"193 455 870 682 466 268 714", "794 635 473 973 831 902 443", "178 878 771 703 365 382 591", "824 238 24 180 596 170 328", "43 311 183 59 927 488 671", "529 652 259 214 861 784 287", "743 611 473 129 435 842 719", "504 868 866 939 882 258 751", "615 599 459 662 64 757 808", "279 490 436 366 76 587 387", "834 361 331 49 929 493 434"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 26.320374728412798;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> stars = {"900 785", "566 94", "609 173", "244 930"};
    vector<string> ships = {"650 16 842 190 101 813 649", "524 852 475 634 892 201 855", "991 698 920 781 579 932 545", "341 488 900 526 484 539 493", "194 253 12 561 835 841 498", "786 530 541 806 792 393 211", "550 579 980 972 278 74 194", "621 498 827 277 791 583 579", "160 419 490 160 450 925 73", "381 9 968 209 478 504 371", "608 197 75 723 612 20 762", "57 891 164 684 717 933 453", "742 955 814 863 397 461 616", "905 600 137 681 199 33 388", "585 241 518 7 671 242 883", "250 524 759 106 622 96 297", "917 679 179 580 59 578 751", "8 730 82 996 679 677 754"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 42.79711133166979;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> stars = {"860 999", "75 254", "923 636", "644 889", "154 233", "748 681", "927 679", "451 802", "962 200"};
    vector<string> ships = {"56 192 974 923 749 652 987", "145 447 578 518 630 917 875", "792 470 913 147 694 92 816", "950 858 641 53 237 552 488", "227 163 956 184 395 181 98", "66 66 514 262 579 79 879", "141 612 948 446 171 976 490", "751 150 334 866 215 283 8", "433 897 368 523 883 811 642", "232 188 706 480 322 539 352", "448 209 647 277 760 190 423", "667 487 456 29 615 861 254", "778 349 504 862 432 83 456", "198 107 753 822 297 282 22", "456 948 125 319 136 377 775"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 44.17932914516878;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> stars = {"754 105", "85 96", "526 222", "965 782"};
    vector<string> ships = {"717 574 562 246 474 275 551", "354 182 288 700 111 644 466", "173 530 982 113 477 382 248", "891 672 806 373 33 990 321", "166 432 659 294 207 579 949", "207 172 167 397 698 21 695", "530 789 110 985 970 979 618", "16 627 685 169 907 929 98", "119 391 200 786 487 200 421", "711 272 814 416 86 319 581", "332 268 388 445 187 508 361", "828 75 432 153 272 269 694", "886 338 312 605 678 407 769", "23 414 1 543 538 39 389", "356 290 648 182 94 585 988", "762 494 218 502 483 448 666"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 37.678452043482665;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> stars = {"896 304", "641 980", "200 106", "792 662", "682 653", "754 34", "30 988"};
    vector<string> ships = {"657 344 594 81 81 869 412", "714 969 252 217 80 769 41", "532 934 780 664 260 654 937", "96 366 875 721 836 681 977", "456 726 72 809 560 157 603", "833 906 441 376 563 886 963", "81 837 798 203 509 81 341", "77 59 494 741 547 475 774", "98 881 336 73 401 708 956", "667 142 589 482 169 316 397", "226 10 13 137 456 763 44", "743 22 923 513 249 19 369", "718 715 651 291 336 760 170"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 62.09986744751065;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> stars = {"589 711", "272 946", "222 471", "184 590", "956 979", "780 7", "263 136", "488 197", "34 89", "936 780", "994 791", "963 966", "2 106", "808 568"};
    vector<string> ships = {"84 421 815 719 245 64 230", "653 865 770 471 6 48 595", "488 327 277 324 541 680 991"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 4.477256666625803;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> stars = {"136 698", "210 631", "225 909", "738 475", "921 373", "294 856", "735 562", "57 607", "185 76", "383 120", "742 433", "685 780", "280 284", "668 837", "126 119"};
    vector<string> ships = {"672 458 999 546 598 219 839", "845 373 564 29 265 802 724", "491 605 602 228 198 693 772", "364 302 364 722 566 422 446", "611 496 742 23 813 152 16", "56 394 739 280 883 609 655", "823 708 246 339 145 291 340", "155 605 624 226 79 725 982", "331 734 224 595 131 847 988", "446 806 617 751 490 339 964"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 113.59308088632172;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> stars = {"273 792", "384 134", "776 643", "570 301", "955 79", "586 258", "334 894", "491 104", "751 234"};
    vector<string> ships = {"120 578 738 92 557 796 61", "902 794 433 137 581 876 908", "185 75 720 791 477 42 352", "330 291 975 73 592 190 788", "491 240 894 54 64 682 904", "6 177 480 696 140 469 999", "84 640 516 622 994 827 723", "839 829 582 400 979 892 24", "944 835 244 350 703 708 503", "142 688 347 892 638 414 401", "817 691 163 936 127 411 878", "383 261 190 706 875 664 723", "196 567 361 39 589 812 246", "468 426 868 190 543 64 548", "503 618 100 24 227 204 49", "52 571 637 459 968 457 406", "532 963 820 976 557 532 496", "45 592 804 389 916 451 320"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 59.544544161549965;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> stars = {"700 189", "179 43", "358 942", "848 470", "346 381", "914 965", "711 62", "386 74", "505 463", "704 103", "70 155", "530 553"};
    vector<string> ships = {"612 991 339 642 259 48 353", "659 480 303 684 991 3 569", "423 896 136 9 362 743 195"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 26.606865972846844;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> stars = {"567 884", "662 660", "246 387", "652 766", "602 841", "210 498", "284 251", "59 422", "176 582", "788 272"};
    vector<string> ships = {"731 245 845 50 119 66 364", "553 774 471 732 748 512 870", "399 499 104 353 680 54 44", "523 89 564 835 851 23 241", "912 493 652 581 478 617 877", "179 221 616 349 799 180 636", "858 884 663 903 263 421 771", "23 274 842 687 889 918 718", "893 699 268 750 66 390 933", "620 82 4 131 29 632 590", "153 631 173 865 408 296 429", "682 491 611 178 72 237 460", "644 841 634 38 894 631 275", "994 783 204 462 291 663 308", "998 152 424 891 718 641 704"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 159.71658624059148;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> stars = {"880 648", "150 932", "670 876", "599 450", "437 600", "124 444", "732 155", "862 435", "386 968", "817 394", "705 867", "954 309", "224 685", "793 668", "49 470", "931 812", "815 91", "428 744", "605 600", "475 196"};
    vector<string> ships = {"505 980 139 701 531 462 119", "206 541 829 460 623 399 761", "99 936 482 615 568 494 597", "162 747 539 671 539 477 556", "918 372 761 753 759 434 256", "66 727 402 35 760 394 549", "274 793 194 934 138 104 691", "212 695 669 628 499 990 249"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 19.734264090093177;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> stars = {"822 856", "521 928", "774 135", "252 676", "337 335", "2 738", "311 975", "591 357", "72 81", "936 146", "283 826", "719 574", "713 38", "999 906", "163 718", "693 540", "48 947", "104 232", "116 840"};
    vector<string> ships = {"590 859 810 890 448 41 819", "365 976 27 90 504 67 413", "841 571 677 396 642 987 652", "110 188 84 86 391 251 687", "756 382 129 503 278 863 425", "566 873 833 886 429 647 890", "479 884 926 266 261 46 779"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 43.133583613491595;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> stars = {"479 815", "788 240", "75 21", "828 555", "989 442", "799 643", "3 322", "105 947", "57 510", "834 709"};
    vector<string> ships = {"646 395 200 646 273 676 863", "73 774 481 239 898 543 609", "204 278 126 135 402 79 383", "170 737 479 940 139 722 427", "664 678 576 725 982 701 962", "863 3 449 96 685 17 138", "508 994 285 945 260 822 59", "644 669 678 120 858 42 892", "265 624 916 73 930 842 716", "616 537 958 760 701 453 94", "242 830 449 228 799 225 325", "275 134 886 39 171 863 630", "85 910 879 924 86 401 25", "194 106 413 766 768 408 678", "785 705 791 835 892 622 86", "735 191 543 999 87 19 622", "425 598 377 255 670 109 928", "494 69 367 103 439 601 820", "319 291 985 340 557 809 633"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 53.29147593547972;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> stars = {"935 416", "657 762", "13 412", "960 252", "739 371", "125 508", "8 585", "952 102", "490 959", "442 791", "14 413", "856 61", "94 473", "403 677"};
    vector<string> ships = {"687 805 386 143 843 261 162", "621 344 579 188 114 64 592"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4080916399693648;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> stars = {"172 655", "948 515", "524 230", "490 767", "888 757", "633 471", "740 667", "523 284", "161 554", "706 92", "260 387", "688 630", "43 318", "46 357"};
    vector<string> ships = {"267 652 276 529 533 762 470", "504 730 108 893 452 954 393", "571 520 473 408 495 506 441", "384 263 410 608 39 361 472"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 75.83660513389731;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> stars = {"465 75", "347 838", "982 319", "612 293", "592 833", "124 462", "992 462", "331 499", "370 292", "401 180", "118 318", "915 596", "442 937"};
    vector<string> ships = {"155 467 834 761 920 632 739", "268 777 99 315 321 54 8", "470 217 723 843 8 464 261", "948 794 631 718 44 377 315", "627 118 335 621 172 793 965", "155 867 694 665 776 1 213", "101 552 477 380 944 878 790", "362 386 273 435 145 562 564", "505 947 889 309 158 431 124"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 322.3339660782338;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> stars = {"397 854", "459 831", "594 807", "850 855", "273 161", "295 55", "334 147", "230 472", "429 560"};
    vector<string> ships = {"454 910 974 982 504 570 817", "884 368 386 403 231 158 682", "568 311 867 688 172 478 246", "765 239 672 48 116 593 312", "658 406 54 172 581 741 531", "676 321 791 378 999 587 605", "490 632 745 389 611 719 920", "260 928 610 120 480 717 301"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 20.84411051737431;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> stars = {"898 888", "539 470"};
    vector<string> ships = {"689 367 34 686 271 330 262", "861 209 983 163 507 879 980"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 2.134864466895023;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> stars = {"614 297"};
    vector<string> ships = {"796 267 634 510 558 318 135", "54 136 259 594 844 694 467", "952 141 95 938 175 513 98", "552 696 818 493 293 238 531"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 4.8769830961539435;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> stars = {"835 249", "540 766", "797 313", "263 53", "732 988", "465 558", "249 557", "171 451", "183 302", "294 100"};
    vector<string> ships = {"629 810 787 745 841 183 570", "121 394 293 963 215 528 808", "195 706 714 12 914 694 665", "204 996 763 382 947 910 49", "769 625 512 955 236 128 634", "241 863 128 578 818 341 143", "101 401 559 477 155 936 431", "832 296 538 624 923 928 30", "212 212 755 881 254 294 322", "786 529 444 1 556 672 271", "453 376 632 641 935 41 987"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 30.746459180146108;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> stars = {"594 531", "162 235", "259 927", "907 192", "444 189"};
    vector<string> ships = {"332 76 5 51 27 67 739", "802 624 844 442 381 696 919", "660 364 629 330 89 855 614", "980 570 667 680 578 838 403", "116 293 724 873 449 324 154", "949 396 198 509 909 412 994", "666 782 203 611 829 257 706", "966 24 770 716 254 806 685", "479 146 841 834 286 901 969", "995 634 886 349 282 33 257", "911 873 983 902 307 636 861", "472 528 138 344 769 234 996", "172 604 943 12 880 35 513"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 14.157909481727936;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> stars = {"328 414", "455 897", "473 451", "242 642", "647 526", "214 825", "930 696", "404 595", "994 68", "188 641", "80 42", "126 535", "861 1", "908 622", "693 294", "118 718", "404 944", "894 640", "12 926", "29 979"};
    vector<string> ships = {"485 225 94 436 225 95 583", "868 628 6 147 687 590 541", "238 851 760 579 957 678 404", "43 301 812 226 144 596 17", "616 805 7 369 642 336 699", "326 314 24 313 619 458 397", "340 87 95 847 44 523 912", "281 456 359 848 871 991 874"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 234.11952081659263;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> stars = {"918 684", "919 585", "253 587", "270 249", "138 398", "425 169", "28 149", "994 383", "272 670", "894 878", "15 105"};
    vector<string> ships = {"893 445 655 624 354 37 548", "347 827 62 905 239 572 887", "406 300 57 729 268 752 20", "992 167 718 847 94 188 422", "913 868 300 445 898 202 329", "943 105 769 769 642 297 263", "721 245 919 626 220 585 175", "985 460 150 15 696 504 33", "852 538 815 364 652 220 291"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 31.873762305062808;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> stars = {"983 239", "123 724", "907 707", "190 157"};
    vector<string> ships = {"496 812 294 893 799 991 300", "891 494 75 550 775 315 174", "70 219 866 834 239 912 253", "464 509 150 89 246 232 921", "107 272 369 422 259 158 648"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 16.64647475010549;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> stars = {"113 123", "530 673", "837 278", "554 977", "671 86", "653 752", "398 752", "2 436", "694 73", "917 717", "329 512", "126 839"};
    vector<string> ships = {"924 119 551 98 837 592 407", "511 814 652 881 845 744 742", "246 579 950 706 515 786 228", "625 205 357 918 228 556 103", "287 469 699 980 412 490 759", "491 776 411 133 90 297 951"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 39.21788883536193;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> stars = {"505 823", "56 914", "463 474", "85 161", "123 54", "398 823", "751 338", "918 7", "932 198", "506 237", "358 600", "291 899", "986 448", "85 593", "726 997", "856 829", "339 343", "429 796", "743 38", "507 768"};
    vector<string> ships = {"545 57 827 903 759 589 22", "587 109 778 629 980 948 550", "281 246 129 63 427 720 678", "92 48 786 232 407 685 955", "770 710 957 422 946 466 17", "861 498 336 191 678 50 6", "887 389 676 144 378 131 488", "556 483 254 1 755 290 489", "216 9 311 941 800 998 708", "455 305 238 486 500 793 614", "613 683 984 352 130 138 34", "601 865 684 858 969 711 969", "709 642 733 438 685 500 702", "870 584 257 693 641 88 13", "811 821 836 664 616 898 678", "775 135 554 534 879 287 625", "735 76 350 713 985 625 793"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 34.10561221326419;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> stars = {"315 351", "587 280", "777 823", "880 302", "813 677", "165 358", "571 39", "313 145", "562 181", "201 644", "857 62", "648 940", "809 291", "453 980"};
    vector<string> ships = {"506 147 610 925 855 466 240", "207 210 493 500 176 37 62", "648 619 14 728 713 897 910", "842 131 91 35 916 287 524", "667 345 737 38 417 894 950", "972 845 778 286 201 591 286", "326 119 669 7 730 9 542", "226 537 981 717 471 385 748", "329 937 205 701 524 365 412", "41 251 505 484 767 142 671", "846 507 89 257 108 267 858", "679 200 675 156 192 991 833", "859 997 918 291 968 708 235", "247 463 403 240 427 96 907"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 47.87677513398885;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> stars = {"347 26", "971 337", "796 794", "324 533", "857 897", "211 777", "693 551", "291 796", "853 351", "316 37", "362 761", "985 730", "535 51", "83 807", "937 585", "791 618", "183 67", "117 389", "426 102", "611 451"};
    vector<string> ships = {"8 285 548 978 676 614 710", "372 643 340 337 622 502 35", "130 359 437 470 898 505 799", "203 106 239 33 66 517 482", "580 24 728 772 314 383 141", "817 489 320 590 514 260 852", "272 284 365 39 13 185 760", "502 575 734 60 715 650 596", "523 542 417 378 53 566 892", "139 311 968 56 788 225 223", "440 442 649 805 835 369 442", "873 669 975 177 138 634 242", "746 19 16 975 253 847 957", "525 967 582 145 241 335 297", "877 28 206 19 292 642 466", "192 472 260 701 218 17 944", "625 65 506 158 503 667 276", "47 633 790 47 146 4 153", "902 327 154 185 650 351 406"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 150.11433801484225;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> stars = {"754 680", "614 601"};
    vector<string> ships = {"194 39 755 594 896 281 639", "168 421 346 884 866 697 834", "391 633 190 840 184 818 130"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1362039230985888;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> stars = {"3 4"};
    vector<string> ships = {"5 8 8 4 8 4 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> stars = {"1 3"};
    vector<string> ships = {"4 2 1 1 1 24 1", "5 4 5 5 3 35 3"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> stars = {"3 5", "4 7", "7 5", "6 4"};
    vector<string> ships = {"6 1 8 6 146 1 2", "6 8 3 4 13 1 2", "4 3 5 8 41 1 2", "8 4 4 2 58 1 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1801265489631391;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> stars = {"4 4"};
    vector<string> ships = {"3 2 7 5 36 1 8"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> stars = {"304 77", "582 619", "638 874"};
    vector<string> ships = {"484 247 141 831 2 1 795", "990 814 82 971 1 1 207", "212 817 147 114 1 1 131"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0509422514045355;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> stars = {"8 7", "11 9"};
    vector<string> ships = {"11 14 8 10 92 3 3", "12 14 12 6 434 4 6"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01583636715715995;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> stars = {"3 4"};
    vector<string> ships = {"5 8 8 4 8 4 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> stars = {"1 3"};
    vector<string> ships = {"4 2 1 1 1 24 1", "5 4 5 5 3 35 3"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"40 42 44 42 2 7 42"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"40 40 41 41 2 7 42"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7071067811865476;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"39 40 41 41 2 7 42"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1.118033988749895;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"40 42 44 42 2 7 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"38 38 41 41 2 7 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"37 38 41 41 2 7 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"39 40 141 41 2 7 42"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 4.868196613215311;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"44 42 141 42 2 7 42"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"44 42 411 41 2 7 42"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5000026515982183;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"39 40 141 41 2 7 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"44 42 141 42 2 7 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"44 42 411 41 2 7 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"141 41 39 40 2 7 422"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 4.868196613215318;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"141 42 44 42 2 7 422"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"411 41 44 42 2 7 422"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5000026515982086;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"141 41 39 40 2 7 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"141 42 44 42 2 7 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> stars = {"42 42"};
    vector<string> ships = {"411 41 44 42 2 7 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> stars = {"3 5", "4 7", "7 5", "6 4"};
    vector<string> ships = {"6 1 8 6 146 1 2", "6 8 3 4 13 1 2", "4 3 5 8 41 1 2", "8 4 4 2 58 1 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1801265489631391;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> stars = {"4 4"};
    vector<string> ships = {"3 2 7 5 36 1 8"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> stars = {"3 3", "5 3", "4 5"};
    vector<string> ships = {"2 2 5 7 1 2 2", "1 3 7 3 3 1 1", "2 7 5 1 1 3 3"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 5.999999999999999;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> stars = {"3 3", "5 3", "4 5"};
    vector<string> ships = {"2 2 5 7 7 2 2", "1 3 7 3 3 1 1", "2 7 5 1 1 3 3"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 5.046803485479722;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> stars = {"42 42", "42 42", "42 42", "42 42", "42 42", "42 42", "42 42", "42 42", "42 42", "42 42", "42 42", "42 42", "42 42", "42 42", "42 42", "42 42", "42 42", "42 42", "42 42", "42 42"};
    vector<string> ships = {"43 43 41 42 3 4 1", "41 42 41 42 4 3 1", "43 43 43 41 3 3 2", "41 41 43 43 2 4 3", "43 41 43 41 2 2 3", "41 43 43 42 4 2 2", "43 42 42 42 3 4 2", "43 41 42 41 3 1 1", "41 43 41 42 4 2 1", "43 42 41 41 5 2 1", "42 43 43 42 5 4 3", "41 41 43 43 1 1 3", "41 41 43 42 3 4 1", "41 42 42 43 1 3 3", "43 42 42 43 5 2 3", "41 41 41 42 1 1 1", "42 43 42 42 3 1 2", "42 42 43 41 5 5 3", "42 41 42 41 2 3 3", "43 41 43 41 5 4 3"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 22.666666666666643;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> stars = {"38 42", "45 45", "41 38", "46 46", "43 39", "38 44", "41 42", "43 42", "44 43", "40 41", "46 41", "39 40", "42 43", "42 46", "45 39", "38 41", "42 46", "46 41", "43 42", "40 44"};
    vector<string> ships = {"18 38 66 46 5 43 12", "3 30 81 54 18 39 12", "72 3 12 81 33 49 4", "96 44 1 40 1 46 1", "74 83 10 1 39 40 4", "75 3 9 81 25 1 7", "22 26 62 58 43 12 7", "2 65 82 19 14 16 5", "67 54 17 30 10 9 13", "96 53 1 31 20 50 2", "50 70 34 14 1 40 7", "16 30 68 54 36 16 1", "43 82 41 2 26 38 3", "18 3 66 81 50 14 9", "50 50 34 34 38 49 10", "65 43 19 41 45 18 2", "8 1 76 83 39 22 3", "57 41 27 43 9 27 12", "62 46 22 38 43 3 1", "47 11 37 73 48 47 6"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 104.68164748120223;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> stars = {"896 304", "641 980", "200 106", "792 662", "682 653", "754 34", "30 988"};
    vector<string> ships = {"657 344 594 81 81 869 412", "714 969 252 217 80 769 41", "532 934 780 664 260 654 937", "96 366 875 721 836 681 977", "456 726 72 809 560 157 603", "833 906 441 376 563 886 963", "81 837 798 203 509 81 341", "77 59 494 741 547 475 774", "98 881 336 73 401 708 956", "667 142 589 482 169 316 397", "226 10 13 137 456 763 44", "743 22 923 513 249 19 369", "718 715 651 291 336 760 170"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 62.09986744751065;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> stars = {"304 77", "582 619", "638 874"};
    vector<string> ships = {"484 247 141 831 2 1 795", "990 814 82 971 1 1 207", "212 817 147 114 1 1 131"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0509422514045355;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> stars = {"8 7", "11 9"};
    vector<string> ships = {"11 14 8 10 92 3 3", "12 14 12 6 434 4 6"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01583636715715995;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> stars = {"471 207", "904 389", "845 995", "629 12", "181 151", "964 264", "750 272", "187 87", "229 801", "845 22", "816 28", "665 826", "596 520"};
    vector<string> ships = {"964 601 99 508 362 65 6", "410 703 445 633 587 600 903", "288 134 760 724 331 481 636", "947 699 870 778 770 795 660", "798 374 401 513 669 585 724", "839 174 857 159 564 549 814", "439 126 826 716 434 455 913", "754 409 374 163 930 344 894", "909 986 715 746 272 170 339", "689 865 272 624 263 481 848", "201 981 216 144 875 329 653", "571 375 96 834 67 655 932", "870 540 153 601 538 383 4", "60 752 509 899 110 80 429", "921 541 341 904 36 675 224", "906 716 131 3 899 78 810", "153 263 84 691 268 971 351", "974 831 417 184 769 534 766", "523 486 978 793 61 519 489"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 179.09157930129027;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> stars = {"165 882", "179 105", "17 434", "810 528", "34 20", "815 977", "724 35"};
    vector<string> ships = {"516 48 109 654 667 772 359", "905 1000 614 798 858 611 934", "229 135 53 45 270 443 544", "590 710 275 875 236 124 616", "77 301 567 142 247 901 137", "604 7 694 382 534 578 38", "394 648 882 409 642 763 48", "888 441 860 260 362 790 763", "779 667 68 490 88 883 979", "351 238 16 189 435 228 94", "539 452 66 13 352 695 27", "388 694 482 140 733 976 386", "732 161 760 216 892 301 282", "537 553 405 745 214 32 720", "97 537 969 12 740 810 591", "652 136 729 751 183 409 412", "231 291 163 739 457 529 715", "74 319 947 375 663 649 371", "226 917 429 110 677 496 279", "961 499 569 538 922 427 132"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 58.17796187004824;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> stars = {"35 401", "525 567"};
    vector<string> ships = {"990 543 218 487 136 657 942", "846 604 390 889 850 23 655", "105 790 654 460 920 451 266", "638 249 8 801 820 140 562", "231 562 43 565 853 718 6", "819 449 517 699 997 845 591", "202 192 548 166 504 17 210", "4 651 509 748 349 446 258", "817 322 212 242 359 880 938", "705 328 73 512 764 158 185", "873 4 669 876 372 556 16", "54 537 415 343 467 128 958", "303 96 622 841 322 745 577"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 11.382770930157687;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> stars = {"809 155", "779 572", "85 515", "546 186", "417 80", "162 891", "876 339", "809 882"};
    vector<string> ships = {"216 1 806 758 708 835 2", "606 421 947 329 532 424 2", "801 384 55 820 248 331 1", "887 114 891 934 807 647 3", "636 76 831 378 863 713 3", "236 661 183 663 241 291 2", "518 936 891 617 558 722 5"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 9.885144832846361;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> stars = {"169 859", "809 627", "905 518"};
    vector<string> ships = {"55 634 339 958 464 328 292", "551 841 598 123 184 711 248", "850 759 569 878 637 901 136", "301 639 496 537 40 466 639", "473 809 683 318 720 578 989", "98 257 385 613 831 169 764", "710 312 438 273 582 718 898", "465 769 358 312 157 124 532", "174 729 228 12 627 769 728", "50 363 562 316 48 249 50", "584 281 412 162 369 851 917", "714 814 922 120 126 493 283", "337 912 247 790 577 878 705", "808 593 142 845 559 398 135", "88 391 37 410 293 364 513", "384 746 585 292 565 225 825", "666 686 531 245 556 119 472", "837 859 504 113 178 178 537"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 16.791230014731667;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> stars = {"526 563", "57 312", "528 227", "448 189", "970 205"};
    vector<string> ships = {"826 825 871 323 266 730 513", "945 165 145 48 129 620 640", "793 175 131 843 630 196 243", "911 720 590 247 62 213 967", "254 832 887 893 65 340 534", "410 382 423 175 85 868 804", "892 673 751 750 878 252 782", "690 664 834 627 647 390 675", "211 954 381 306 927 157 125", "504 370 457 901 385 692 588", "862 205 679 300 211 377 952", "69 246 47 487 271 718 203", "690 195 704 208 55 463 628", "323 137 457 834 597 613 449", "45 527 926 465 510 545 997", "929 539 755 805 38 930 48"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 43.533775897693985;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> stars = {"274 245", "364 545", "247 418", "581 344", "486 132", "705 886", "191 213", "119 53", "206 459", "619 305", "992 492", "995 732", "271 858", "398 897", "671 649", "23 827"};
    vector<string> ships = {"449 278 804 786 763 348 876", "546 318 55 865 40 394 31", "686 399 424 193 567 371 949", "184 71 508 598 869 834 270", "204 509 698 639 880 650 742", "769 488 205 839 520 665 58", "605 446 504 540 650 254 484", "155 525 309 454 683 386 431", "261 912 575 617 891 462 482", "811 515 69 473 25 351 389", "658 322 589 774 885 208 778", "308 655 697 498 937 360 749", "46 683 63 674 655 143 524", "796 802 134 22 744 917 352", "279 675 257 150 940 159 888", "924 345 134 841 350 613 26", "1 282 194 987 28 391 976"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 297.1054584692836;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> stars = {"392 949", "297 726", "967 193", "369 497", "737 735", "664 895", "904 715", "499 93", "383 180", "155 268", "772 305", "244 25", "269 468", "40 381", "423 998", "28 954", "435 363", "812 296"};
    vector<string> ships = {"415 457 859 169 606 53 536", "570 8 629 404 401 38 144", "149 131 302 61 404 113 820", "433 884 422 255 337 28 644", "922 609 755 311 660 340 116", "508 498 732 690 11 803 469", "190 946 461 925 134 732 86", "583 192 659 749 320 992 881", "34 337 694 93 860 174 724", "740 25 158 358 358 843 781", "786 322 649 542 498 556 491", "701 312 319 91 612 809 822", "760 940 813 535 220 446 582", "58 376 602 752 566 935 528"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 480.7281898801384;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> stars = {"270 522", "322 203", "98 947", "39 578", "867 162", "524 806", "991 475", "490 818", "845 342", "693 230", "661 296", "381 977", "247 504", "946 488", "662 781"};
    vector<string> ships = {"406 186 138 277 901 625 208", "944 553 217 84 71 89 317"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 7.708332354789764;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> stars = {"804 759", "742 617", "283 287", "712 699", "144 866", "563 504", "486 390"};
    vector<string> ships = {"705 543 268 97 376 385 1", "176 749 306 234 440 278 2", "410 556 902 732 48 987 1", "720 439 477 38 11 891 2", "578 843 353 976 358 786 1", "554 391 731 796 589 191 2", "338 922 434 788 406 100 1", "893 52 444 798 407 624 3", "719 11 522 843 726 72 1", "992 656 603 69 678 821 1", "233 371 832 108 330 506 1", "381 393 110 557 89 272 3", "974 846 266 459 299 119 3", "596 487 919 362 710 792 1", "364 501 442 19 92 777 1", "674 79 606 349 499 700 3", "923 335 852 973 642 636 1", "372 139 608 559 173 860 2", "576 90 846 385 296 48 1", "392 147 671 409 824 467 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 20.993499926328745;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> stars = {"193 289", "596 131", "203 132", "532 857"};
    vector<string> ships = {"225 329 540 482 430 671 245", "593 936 336 205 74 327 685", "877 412 729 936 697 13 10", "621 433 329 719 90 465 246", "552 725 220 141 124 501 684", "556 210 451 317 354 124 522", "211 234 822 5 809 628 304", "88 643 840 208 123 502 781", "796 586 79 369 287 191 281"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 33.61000055231269;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> stars = {"927 214", "703 670", "113 532", "439 905", "56 393", "166 746", "182 957", "942 82", "298 46", "938 181", "417 399", "229 860"};
    vector<string> ships = {"969 403 358 244 9 645 869", "704 904 150 529 72 994 356", "329 691 384 1000 730 284 583", "842 616 351 399 217 780 960", "751 545 495 750 743 747 855", "761 287 855 599 216 142 141", "187 638 133 877 501 205 333", "99 890 403 350 999 560 893", "761 44 75 793 25 623 350", "928 13 554 176 460 585 458"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 773.743624674034;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> stars = {"613 216", "406 720", "266 50", "296 629", "131 725", "86 479", "472 489", "601 166"};
    vector<string> ships = {"234 289 94 145 86 77 988", "681 713 105 10 32 736 228", "678 267 908 663 737 783 241", "565 331 865 779 5 920 53", "456 918 597 202 545 571 422", "341 642 296 522 854 829 372", "177 400 706 574 412 773 907", "796 543 129 133 354 659 925", "344 288 886 480 578 448 791", "857 369 342 52 847 768 89", "190 212 700 761 144 328 351", "608 876 730 949 686 719 604"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 279.0615597472632;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> stars = {"424 959", "222 429", "346 230"};
    vector<string> ships = {"733 428 528 336 198 943 938", "277 476 595 845 458 129 347", "192 108 833 522 250 231 918", "291 950 539 94 207 149 764", "170 269 66 222 72 398 571", "23 227 25 892 287 489 988"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 6.051200897321099;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> stars = {"571 797", "748 12", "19 224", "215 660"};
    vector<string> ships = {"618 594 434 114 133 708 813", "490 317 27 372 148 512 869", "954 423 719 464 110 357 971", "235 466 216 270 5 996 533", "164 516 916 237 857 273 975", "234 780 475 884 695 44 41", "805 595 330 212 720 567 784", "323 214 709 320 393 411 956", "216 660 384 98 764 31 374", "913 501 867 300 813 88 66", "666 748 810 44 886 31 227", "637 743 49 888 750 857 117", "22 90 633 717 164 973 201", "712 280 216 573 803 804 424", "527 684 58 600 992 346 254", "4 977 873 684 432 657 165", "713 591 527 541 694 208 986", "746 562 558 790 536 655 432", "859 604 408 520 281 398 154", "415 46 57 633 953 172 793"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 157.53501198146395;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> stars = {"750 132", "858 54"};
    vector<string> ships = {"171 97 233 985 993 21 4", "651 729 636 922 836 998 4", "900 856 441 755 535 486 2", "684 889 398 412 624 650 4", "49 784 95 643 294 405 2", "804 863 8 358 689 726 5", "546 366 680 237 281 360 4", "875 636 673 753 493 840 5", "974 903 832 577 372 10 3", "974 11 594 212 456 224 1", "557 102 671 19 752 611 1", "692 199 825 502 839 777 3", "735 305 712 449 400 165 3", "391 409 120 508 574 250 4", "125 966 501 425 346 681 1", "872 645 523 636 91 852 5", "306 776 304 599 596 718 1", "930 931 185 205 773 415 3", "440 426 948 62 642 614 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 7.672879704582566;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> stars = {"163 476", "328 703", "416 412", "562 70", "771 698", "241 918", "743 150", "483 377", "65 434", "528 442", "795 703", "713 807", "74 21", "982 940", "219 673", "962 177", "225 395"};
    vector<string> ships = {"189 314 25 771 948 415 223", "130 616 245 735 582 582 37", "75 290 111 601 608 155 424", "494 61 703 63 497 444 475", "60 562 284 599 372 458 390", "501 716 546 350 811 308 383", "477 717 449 625 517 302 839"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 7.707967827060767;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> stars = {"591 330", "932 802", "678 423", "599 115", "52 715", "598 46", "19 154", "343 448", "633 491", "326 812", "704 12", "497 187"};
    vector<string> ships = {"232 310 663 123 662 47 925", "152 478 706 859 664 839 843", "807 153 801 702 713 480 310", "969 8 388 496 142 325 540", "303 568 307 789 25 788 908", "320 455 418 920 460 54 36", "634 464 867 847 499 907 435", "431 555 976 946 679 380 68", "674 273 482 842 22 971 544", "585 567 932 29 348 855 293"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 327.5566949853905;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> stars = {"858 221", "145 631", "271 838", "799 493", "522 169", "429 465", "334 598", "383 413", "306 970", "231 469", "51 163", "295 225", "570 871", "272 289", "887 6"};
    vector<string> ships = {"712 638 988 246 866 868 1", "820 968 183 75 864 780 2", "786 483 492 285 574 323 1", "794 149 239 279 219 255 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999999999999;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> stars = {"443 836", "666 593", "838 195", "278 193"};
    vector<string> ships = {"932 413 875 17 811 192 892", "646 465 839 370 307 742 498", "795 567 889 204 221 170 723", "282 482 128 988 325 722 673", "204 480 733 125 565 894 89", "887 639 350 240 103 588 905", "190 876 134 286 146 274 37", "411 747 16 653 966 293 845", "775 444 859 709 559 139 727", "438 518 579 560 512 81 883"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 25.508975860695127;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> stars = {"470 57", "804 45", "163 211", "230 21", "86 97", "589 262", "616 674"};
    vector<string> ships = {"78 454 321 364 34 323 3", "271 972 457 798 465 685 2", "25 662 833 220 417 749 1", "797 659 912 785 807 125 1", "873 274 652 626 502 507 1", "613 490 937 140 412 196 3", "865 355 344 279 149 605 1", "499 72 261 838 554 432 2", "760 257 77 62 793 320 1", "330 636 895 567 967 549 3", "604 213 388 966 152 824 2", "103 90 610 311 766 220 1", "109 452 839 618 515 712 3", "289 770 548 168 588 280 2", "194 802 42 175 980 288 3", "367 499 242 660 889 575 3", "957 132 486 142 394 146 2"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 16.24649003355955;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> stars = {"527 182", "162 233", "457 263", "186 701", "396 991", "890 117", "137 184"};
    vector<string> ships = {"682 993 962 95 364 181 702", "816 52 637 942 736 102 68", "431 344 187 325 941 734 397", "415 320 786 704 975 916 255", "556 966 233 870 384 716 349", "992 98 300 862 635 492 482", "181 191 49 731 95 465 728", "228 470 400 16 230 175 846", "45 320 357 456 209 749 654", "522 486 872 148 661 635 181", "583 979 966 562 169 188 690", "958 891 257 529 464 342 217", "163 347 996 163 783 985 159", "75 256 406 146 272 964 958"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 27.06078949230257;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> stars = {"237 216", "110 767", "447 268", "840 177", "702 622", "213 862", "778 264", "393 313", "813 294", "226 877", "567 409", "406 284", "568 617", "116 659"};
    vector<string> ships = {"574 215 789 672 678 257 5", "552 802 190 829 185 817 4", "175 522 965 711 141 408 4", "652 28 984 384 889 755 4", "885 864 278 756 394 665 4", "743 675 584 915 215 751 4", "423 293 70 773 690 771 3", "951 193 534 526 862 219 3", "853 729 264 370 489 500 5", "886 639 233 792 550 814 4", "171 511 486 32 945 900 3", "135 658 599 896 297 166 5", "423 403 336 747 312 941 2"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 29.189404447027204;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> stars = {"601 1000", "577 960", "305 297", "783 462", "458 716", "635 213", "983 865", "772 996", "816 530", "752 166", "796 637", "945 767", "802 995", "42 636", "209 735", "562 50", "977 593", "376 33"};
    vector<string> ships = {"151 266 516 760 328 578 1", "958 79 420 354 411 398 2", "27 976 42 665 646 365 2", "662 781 532 236 172 928 1", "485 987 347 904 24 632 2"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 6.963967573386578;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> stars = {"458 985", "328 865", "683 780", "237 577", "880 712", "326 384", "735 890", "584 292", "395 404", "19 528", "644 635", "969 399", "759 184", "107 226", "8 315"};
    vector<string> ships = {"859 355 476 311 748 531 5", "35 912 477 110 154 262 5", "48 953 799 54 535 721 4", "206 96 696 26 49 263 2", "134 471 166 541 382 133 3"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 15.957734076718289;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> stars = {"349 633", "323 24", "757 36", "552 331", "334 365", "826 688", "202 231", "197 841", "163 800", "610 359", "165 337"};
    vector<string> ships = {"4 975 443 557 532 200 168", "792 764 334 346 824 667 695", "470 529 918 335 181 589 372", "305 120 540 168 248 164 506", "626 981 1000 840 719 234 476", "432 960 879 772 651 97 442", "885 325 11 84 176 772 204", "978 933 924 20 129 633 335", "948 190 443 371 499 212 971", "908 337 831 973 316 607 673", "685 456 526 3 978 805 408", "567 920 618 268 579 384 968"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 66.17834926950906;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> stars = {"924 698", "583 224", "519 281", "352 867"};
    vector<string> ships = {"312 550 573 487 740 695 201", "38 128 214 191 356 324 698", "883 979 552 650 108 722 170", "669 104 372 898 891 753 957", "500 241 238 916 374 627 989", "302 27 282 799 288 279 200", "805 639 860 186 610 267 4", "174 176 369 584 932 592 352", "192 746 340 982 516 714 200"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 17.28491178985274;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> stars = {"55 546", "428 526", "805 391", "774 424", "488 488", "964 345", "4 931", "31 165", "717 100", "493 566"};
    vector<string> ships = {"841 799 725 807 328 708 74", "532 141 751 448 859 258 208", "26 332 907 848 216 581 621", "9 277 257 720 476 310 602", "436 666 341 160 355 933 663", "610 14 800 234 268 866 4", "707 274 980 28 864 452 779", "763 633 634 709 45 292 362", "229 411 962 288 467 203 180", "197 180 128 993 203 339 485", "308 799 760 632 274 560 800", "348 57 8 62 303 768 760", "65 582 746 785 813 94 516", "688 846 581 530 762 995 375", "469 217 135 693 8 949 6", "739 331 894 454 921 543 616", "707 341 658 800 520 622 294"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 46.74574836589477;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> stars = {"616 474", "715 666", "980 277", "33 571"};
    vector<string> ships = {"144 229 210 115 314 458 298", "684 175 107 347 612 46 733", "614 744 478 182 195 318 918", "246 182 858 196 208 618 126", "637 848 844 70 805 511 76", "930 247 621 320 663 750 518", "681 448 101 57 185 593 196", "61 661 157 916 876 272 680", "406 469 913 775 702 404 926", "694 54 229 192 690 936 737", "432 977 35 736 323 335 218"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 13.07002912338063;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> stars = {"154 295", "32 125", "499 502", "10 569", "596 390", "78 495"};
    vector<string> ships = {"984 653 416 334 890 576 64", "667 74 792 686 364 134 279", "645 489 862 152 825 737 663", "811 9 180 631 436 980 98", "386 170 610 850 709 87 335", "605 369 660 636 516 403 319", "535 518 329 743 196 511 719", "799 820 950 434 529 780 742", "189 333 481 336 835 826 267", "358 476 740 727 146 739 903", "946 752 695 499 490 322 977", "648 951 339 677 580 250 638", "573 219 405 672 554 214 340", "331 892 87 578 644 68 219", "887 423 640 417 224 873 959", "963 847 775 805 307 469 949", "465 808 837 529 550 584 963"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 17.627641795514478;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> stars = {"320 881", "442 191", "246 930", "434 704", "357 737", "309 97", "383 874", "10 121", "947 61", "573 211", "340 667", "123 457", "761 428", "742 912", "662 312", "789 683", "874 212", "719 860", "379 64"};
    vector<string> ships = {"168 286 859 984 751 172 279", "983 7 69 395 202 381 184", "342 585 999 124 99 146 21"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 39.96797789718122;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> stars = {"128 881"};
    vector<string> ships = {"895 959 796 308 142 824 421", "595 392 389 731 920 65 106", "257 253 562 62 334 904 92", "600 152 842 953 203 617 225", "55 379 770 616 734 352 975", "581 917 154 964 444 176 838", "71 114 28 25 677 717 926", "577 825 362 257 628 242 198", "526 43 733 233 217 783 795"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8111648862413;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> stars = {"855 640", "499 548", "935 245", "136 521", "310 781", "8 17", "709 640", "347 85", "443 356", "56 966", "456 726", "739 590", "83 526", "627 536", "953 216", "367 661", "287 232"};
    vector<string> ships = {"272 370 68 422 588 584 197", "979 118 229 534 575 977 649", "338 68 437 560 547 56 92", "418 105 300 820 86 757 791"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 137.35806128375825;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> stars = {"810 193", "359 354", "958 352", "230 855", "351 139"};
    vector<string> ships = {"430 109 869 756 674 557 486", "370 890 20 565 716 34 788", "752 188 395 568 42 899 823", "53 271 56 740 882 858 938", "959 924 282 1000 747 245 354", "311 466 133 16 948 482 698", "169 531 116 804 803 159 409", "796 787 443 558 135 47 456", "330 405 102 376 78 902 767", "155 892 343 768 631 146 881", "297 253 561 372 184 521 985", "74 245 251 88 262 960 356", "235 479 90 371 604 816 178", "905 636 122 169 193 970 283", "200 108 37 177 392 371 679"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 62.07040567590141;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> stars = {"627 929", "12 790", "17 39", "217 973", "683 926", "13 415", "180 941", "379 856", "259 384"};
    vector<string> ships = {"599 815 539 468 564 242 1", "822 443 261 722 568 101 2", "323 884 584 27 628 846 3", "423 742 682 681 543 526 1", "529 853 14 94 829 94 2", "957 131 223 349 208 817 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 5.832444908875379;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> stars = {"960 973", "877 660", "396 77", "832 536", "841 650", "496 896", "996 823", "742 70", "582 57", "845 948"};
    vector<string> ships = {"350 333 278 411 926 116 700", "325 558 114 192 46 868 439", "341 186 104 25 758 446 281", "855 347 952 352 150 209 871", "690 170 261 443 233 807 778", "967 789 304 49 478 15 256", "360 36 335 487 406 383 775", "111 262 166 591 127 258 360", "50 472 354 224 409 503 190", "192 46 994 944 116 260 679", "973 496 245 745 725 732 348", "763 888 391 196 930 308 634", "136 487 445 478 157 946 220"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 85.09573259277269;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> stars = {"132 868", "864 891", "810 584", "169 532", "898 700", "630 311", "15 195", "591 562", "352 783", "560 522", "16 919", "486 735", "86 165", "819 312", "758 560"};
    vector<string> ships = {"57 490 260 789 996 465 240", "756 375 335 414 388 807 928", "759 71 187 366 870 517 36", "520 77 527 748 347 376 579", "769 240 16 195 612 614 908", "393 485 482 619 974 562 76"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 23.50855502004643;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> stars = {"976 226", "604 537", "557 232", "738 716", "182 317", "799 707", "346 217", "219 659", "567 89", "385 409", "511 99", "93 814", "944 483", "412 185", "899 462"};
    vector<string> ships = {"783 782 95 131 697 953 1", "510 177 230 629 36 534 3", "865 7 321 423 269 634 3", "892 707 935 620 739 641 1", "603 112 480 742 843 559 2", "823 860 328 511 451 731 3", "591 384 921 815 627 843 3", "367 1000 931 294 669 676 1", "73 403 932 898 911 192 2", "16 277 344 352 662 617 2"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 20.76693848658164;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> stars = {"437 924", "864 455", "7 631", "538 781", "951 455", "10 955", "831 981", "932 805", "598 389"};
    vector<string> ships = {"509 597 132 399 156 374 333", "138 491 100 186 961 253 376", "605 950 888 253 556 706 100", "395 266 736 191 297 824 137", "232 636 604 655 10 606 273"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 286.1701250629573;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> stars = {"492 61"};
    vector<string> ships = {"924 772 167 776 28 857 324", "277 178 478 767 208 815 646"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 27.036091712783502;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> stars = {"31 822", "279 141", "971 905", "127 743", "516 928", "949 530", "512 966", "989 773", "608 777", "488 418", "952 943", "308 551", "900 856", "415 253", "324 36"};
    vector<string> ships = {"359 244 542 980 954 935 1", "945 645 873 70 398 201 1", "46 210 561 360 939 746 1", "621 119 694 71 568 859 1", "452 797 947 708 316 603 1", "300 589 798 781 724 365 1", "557 781 47 274 755 581 1", "378 947 766 915 237 455 1", "746 351 284 884 413 392 1", "460 104 258 328 455 943 1", "606 360 165 57 842 104 1", "333 216 483 754 783 156 1", "828 244 137 903 249 891 1", "430 436 677 127 321 849 1", "912 548 40 365 419 259 1", "26 238 625 686 349 348 1", "901 854 685 988 327 122 1", "906 180 187 86 248 463 1", "218 941 32 698 963 445 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 17.921973128382515;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> stars = {"476 330", "83 482", "711 471", "840 669", "866 605", "274 752", "883 34", "617 687", "943 935", "421 942", "944 391"};
    vector<string> ships = {"343 491 380 693 473 530 593", "584 195 241 417 316 439 302", "334 997 559 411 37 1 121", "944 116 805 514 591 231 693", "760 640 516 284 972 182 900", "328 960 818 475 793 853 983", "457 235 161 557 146 75 334", "490 155 791 142 790 686 336", "822 229 808 476 81 130 528", "439 863 322 147 651 157 807", "598 176 231 79 203 413 962", "684 313 647 103 149 549 721", "533 612 453 37 343 73 942", "986 718 344 587 647 559 630", "458 151 632 913 442 789 351", "881 24 97 221 210 210 315", "25 99 883 64 207 708 112"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 37.669474436857605;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> stars = {"250 21", "989 537", "270 459", "620 710", "68 159", "325 245", "637 319", "573 70", "401 67", "192 538"};
    vector<string> ships = {"188 734 404 964 547 741 632", "475 433 436 324 241 453 11", "790 616 168 870 143 616 90", "765 53 279 863 483 565 785", "474 194 613 619 377 893 714", "276 321 743 717 421 531 986", "555 579 15 849 629 139 880"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 30.278256798163508;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> stars = {"754 353", "177 25", "762 612"};
    vector<string> ships = {"896 342 849 667 662 947 908", "768 765 230 204 51 957 645", "330 887 212 854 802 675 329", "679 388 960 373 528 72 82", "53 493 470 893 729 793 228", "554 368 191 849 793 80 538", "90 489 944 696 362 255 569", "738 232 356 893 776 643 730", "854 531 689 951 266 698 761", "771 461 841 373 695 727 607", "645 62 704 654 735 632 170", "369 219 157 374 833 303 991", "881 216 414 627 544 346 534"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 45.722383273183944;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> stars = {"487 624", "888 519", "717 623", "251 182", "46 240", "497 706", "280 748", "1000 689", "371 889", "419 352", "760 273", "278 577", "727 491", "597 670", "837 800", "267 140"};
    vector<string> ships = {"571 745 223 215 750 275 781", "216 617 670 533 48 914 234", "223 917 85 119 995 885 331", "125 38 9 571 656 950 836", "239 596 441 301 346 527 785", "379 952 775 754 384 583 209", "975 946 405 716 322 574 74", "438 723 61 335 5 59 180"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 176.9209844582843;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> stars = {"986 72", "911 451", "936 722", "422 422", "8 619", "57 489", "799 356", "717 598", "91 658"};
    vector<string> ships = {"291 958 655 140 613 670 700", "32 141 94 768 821 18 902", "750 775 564 281 112 661 415", "237 663 195 317 812 312 223", "401 406 515 947 497 731 742", "82 91 67 322 30 652 216", "93 802 508 335 896 388 366", "739 656 157 983 570 402 291", "333 396 787 375 114 801 415", "291 433 499 915 710 680 628", "892 403 230 864 729 182 95", "446 262 641 101 59 547 807", "354 544 525 631 604 422 691"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 54.42986858767985;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> stars = {"202 560", "935 155", "41 394", "370 55", "405 313", "184 183"};
    vector<string> ships = {"138 635 104 538 935 751 678", "997 506 881 471 746 474 326", "113 218 940 588 959 311 324", "834 561 601 837 848 139 471", "253 223 99 751 101 714 399", "864 615 93 575 909 208 461", "486 157 929 184 647 745 761", "246 902 77 853 56 388 930"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 27.58665735028123;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> stars = {"882 914", "319 479", "831 648", "389 76", "1000 535", "134 480", "998 295", "745 838"};
    vector<string> ships = {"670 546 850 380 452 933 3", "860 342 339 915 416 363 2", "547 410 306 781 324 631 2", "18 229 128 954 71 195 4", "807 828 445 295 339 145 2", "695 164 795 168 645 870 4", "38 489 961 489 980 169 2", "904 89 203 107 897 309 2", "213 324 849 3 990 283 3", "489 456 497 774 197 361 4"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 14.259151479733477;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> stars = {"167 105", "507 393", "701 51", "662 346", "961 297", "718 623", "120 332", "267 146", "940 811"};
    vector<string> ships = {"336 544 368 385 307 456 437", "284 771 102 176 514 159 228", "988 153 822 303 293 31 627", "679 107 617 525 499 986 759", "729 981 568 532 300 897 759", "309 291 764 572 112 526 778", "198 199 669 384 923 397 889", "140 247 912 190 762 991 896", "447 256 941 814 235 996 236", "872 567 740 407 493 476 239", "365 252 18 922 792 402 845", "893 46 99 31 551 919 1000", "662 983 257 874 583 917 944", "214 635 313 265 714 489 818", "897 303 413 721 258 271 967", "943 766 512 935 667 119 794", "528 889 606 598 714 752 482", "552 500 811 667 438 449 722"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 38.49721378200392;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> stars = {"953 38", "829 248", "968 433", "256 624", "20 85", "402 393", "772 894", "494 22", "395 729", "788 381", "444 267", "766 477", "842 523", "40 690", "420 790", "747 679"};
    vector<string> ships = {"98 771 977 649 622 248 2", "607 46 617 494 421 292 1", "411 922 399 386 155 179 2", "35 669 532 714 906 46 1", "276 974 963 654 879 578 2", "446 374 757 952 944 801 2", "765 991 444 31 971 972 1", "177 256 861 552 395 119 2", "227 52 941 777 959 42 1", "296 895 540 245 478 803 1", "922 154 706 821 238 239 2", "628 212 432 923 887 952 2", "266 672 292 337 303 590 1", "734 861 443 944 744 301 1", "625 306 422 40 660 508 2", "75 439 308 123 28 551 2", "13 517 666 999 582 280 1", "559 444 825 169 101 134 1", "283 879 558 168 956 514 1", "182 670 991 48 470 865 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 27.104434986800687;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> stars = {"3 519", "139 394", "153 939", "625 662", "751 506", "669 328"};
    vector<string> ships = {"804 451 300 920 384 258 702", "50 784 183 299 129 504 651", "125 827 641 278 153 319 60", "308 441 513 102 814 723 823", "925 227 592 172 170 671 615", "523 39 442 426 383 547 651", "74 24 43 607 111 120 924", "925 890 382 918 988 919 419", "899 479 485 563 880 311 296", "679 315 682 777 433 606 643"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 24.56890751757645;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> stars = {"782 787", "769 840", "341 958", "969 276", "307 496", "220 93", "212 406", "877 23", "422 16", "589 554", "586 285", "530 452", "614 347", "958 965", "905 823", "674 852", "950 914", "386 75", "605 349", "330 23"};
    vector<string> ships = {"569 229 740 624 670 892 712", "577 179 626 3 846 550 177", "57 429 558 160 235 727 780", "770 836 327 376 21 946 653", "207 102 793 742 595 554 45", "462 28 128 214 304 622 702", "281 548 418 113 237 107 650", "73 195 48 647 756 641 184", "237 113 752 131 362 864 357", "371 843 64 789 4 895 673", "517 908 824 324 1 77 975", "944 851 961 239 670 878 550", "917 774 323 554 662 971 124", "696 906 821 168 139 248 142"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 1281.219586793812;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> stars = {"417 612", "622 291", "790 3", "943 313", "626 686", "881 127", "802 421", "561 657", "20 945", "905 691", "481 156", "609 120", "988 937", "866 155", "521 572", "812 564", "169 922", "105 182"};
    vector<string> ships = {"890 208 347 741 956 545 942", "440 191 334 786 346 162 661", "29 486 121 57 455 913 778", "343 434 560 123 734 234 178", "11 476 766 799 654 391 480", "238 741 392 698 557 613 279"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 18.968835005127108;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> stars = {"379 546", "721 515", "359 284", "651 987"};
    vector<string> ships = {"398 185 176 175 590 347 873", "331 803 908 224 50 892 583", "715 43 420 615 565 803 682", "366 965 148 607 451 636 97", "599 11 305 677 707 467 959", "53 374 805 130 675 807 354", "70 308 823 103 33 844 892", "130 314 937 940 751 457 45", "326 998 968 1000 925 71 371", "597 975 905 540 659 5 319", "258 432 572 605 163 921 276", "17 680 197 565 21 536 634", "251 908 615 991 842 339 904", "965 202 946 753 432 833 115", "118 122 133 906 561 809 505", "165 952 416 466 174 535 420", "746 871 512 248 53 942 552"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 89.94149009089747;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> stars = {"648 259", "553 307", "630 711", "739 703", "550 485", "430 415", "145 364", "12 510", "948 452", "560 594"};
    vector<string> ships = {"53 480 220 525 957 312 983", "332 972 1000 194 830 254 898", "706 753 217 809 907 597 458", "359 336 721 338 1000 917 915", "154 318 50 720 938 759 155", "473 608 44 118 423 759 563", "916 880 110 80 756 995 787", "567 261 560 767 220 306 635", "372 383 731 338 412 802 961", "309 988 197 177 526 289 709", "62 17 474 280 136 861 382", "548 641 483 55 752 378 856", "527 315 593 550 9 756 942", "391 700 833 102 820 115 484"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 271.2135507740291;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> stars = {"392 291", "510 496", "727 974", "447 132", "109 672", "437 335", "391 162", "252 804", "346 272", "473 189", "772 843", "38 465", "301 8", "327 925", "127 392"};
    vector<string> ships = {"583 656 491 495 859 859 296"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2380429838917353;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> stars = {"436 615", "703 436", "931 332", "733 450", "412 885", "911 995", "302 883", "397 717", "981 855", "520 627", "408 474", "921 96", "703 302", "838 204", "653 205", "229 909", "994 913", "846 888"};
    vector<string> ships = {"132 630 523 142 106 462 1", "403 431 403 248 636 986 2", "673 78 114 314 75 141 1", "761 685 391 533 622 699 1", "200 417 769 321 698 997 1", "611 701 606 469 168 818 2", "225 444 570 619 538 791 1", "484 995 239 870 186 55 2", "736 453 395 956 769 727 2", "199 280 572 798 478 296 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 12.816612504117339;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> stars = {"613 124", "356 978", "694 880"};
    vector<string> ships = {"752 464 119 452 782 611 720", "513 585 422 969 519 64 9", "172 255 222 559 845 147 684", "810 89 34 70 568 908 126", "999 767 249 996 46 485 934", "108 189 83 462 506 279 802", "872 324 19 319 24 340 214", "163 29 408 677 934 259 57", "971 45 665 9 32 297 926", "1000 643 35 216 872 970 957", "885 936 615 938 5 342 924", "928 303 16 818 389 196 405", "487 536 441 304 943 706 233"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 106.54910701506394;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> stars = {"979 42", "825 672", "661 360", "800 293", "570 411", "50 39", "77 792", "349 315", "352 220", "88 679"};
    vector<string> ships = {"514 713 901 98 896 877 257", "102 388 46 882 627 730 500"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 8.073635266755922;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> stars = {"472 614", "712 158", "459 227", "987 727", "204 201", "501 830", "851 898", "264 72", "789 327", "85 674", "96 552", "823 352", "566 989"};
    vector<string> ships = {"59 962 20 891 657 464 949", "206 456 154 575 812 407 309"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7693615400200687;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> stars = {"489 455", "256 115", "443 590", "973 554", "159 217", "132 618", "916 261", "383 689", "241 863", "946 703"};
    vector<string> ships = {"975 188 611 162 18 331 387", "236 247 151 264 115 77 520"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 23.023721521400308;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> stars = {"972 252", "154 403", "161 335", "729 123", "91 181", "525 553", "963 303", "721 230", "639 403", "365 493", "589 382", "191 40", "849 115", "947 666", "385 283", "680 117", "446 357", "342 837", "518 736", "621 773"};
    vector<string> ships = {"140 403 40 341 795 624 445", "640 805 295 550 187 729 768"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 44.563273930839415;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> stars = {"354 869", "553 65", "918 869"};
    vector<string> ships = {"23 724 553 922 683 232 1", "1 652 881 764 110 257 1", "698 232 952 79 18 627 2", "736 965 109 305 783 533 1", "524 188 302 216 363 601 1", "20 816 346 221 415 189 1", "873 268 563 903 275 843 2", "288 175 803 634 92 263 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 8.254923313277123;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> stars = {"727 443", "277 604", "954 140"};
    vector<string> ships = {"895 235 907 309 962 172 438", "208 647 30 544 632 249 53", "258 441 189 589 675 51 690", "708 607 152 258 313 468 32", "969 828 719 746 46 502 567", "868 856 874 528 372 442 756", "268 599 266 336 292 19 543", "782 181 505 513 701 673 773", "621 222 139 600 633 523 623", "333 829 415 352 467 291 423", "284 467 288 882 134 106 531", "125 371 17 213 586 783 187", "642 33 793 943 39 535 804", "399 332 71 159 824 964 311", "911 819 323 612 827 627 200", "784 440 528 875 811 974 27", "704 71 851 331 876 961 927", "975 695 53 24 405 563 713"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 57.11918637156785;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> stars = {"189 64", "464 463", "744 367", "40 668", "715 69", "486 583", "959 329", "542 383", "711 461", "766 721", "98 845", "525 180", "221 520", "24 54", "800 459", "554 762", "928 34", "812 225", "262 1000", "517 730"};
    vector<string> ships = {"341 835 687 9 440 923 18"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 18.000000000000004;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> stars = {"266 177", "16 500", "739 91", "619 449", "595 688", "130 167", "328 417", "319 967"};
    vector<string> ships = {"549 834 157 580 948 711 111", "839 699 256 392 158 14 321", "358 472 197 607 169 441 756", "711 887 940 134 197 902 180", "955 806 2 112 919 239 607", "174 733 7 906 9 588 170", "203 85 632 472 5 290 972", "285 657 743 639 346 232 986", "277 245 16 693 544 468 305", "170 670 831 136 683 924 863", "780 499 747 185 975 481 2", "568 431 231 548 58 517 181", "212 554 333 955 822 398 488", "975 160 577 366 44 393 99", "168 956 704 991 485 638 848", "710 836 779 946 955 722 222", "636 678 307 499 737 37 734"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 424.15804862744955;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> stars = {"809 968", "62 592", "173 97", "549 774", "850 495", "81 110", "99 269", "777 913"};
    vector<string> ships = {"971 754 727 318 528 261 1", "92 160 640 716 170 973 1", "755 437 952 858 228 938 1", "236 843 564 696 800 760 1", "678 590 222 768 1000 178 1", "85 893 989 380 904 493 1", "191 963 540 727 407 955 1", "908 90 105 855 259 992 1", "747 820 136 114 275 598 1", "615 675 824 55 701 164 1", "965 815 9 915 47 551 1", "834 292 678 327 313 39 1", "794 296 928 964 658 837 1", "427 840 284 59 407 755 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 11.290020984207983;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> stars = {"821 12", "630 988", "628 213", "524 798", "377 890", "238 1", "982 158"};
    vector<string> ships = {"424 67 814 629 908 681 508", "974 345 569 256 560 307 350", "572 18 162 989 293 976 522", "82 243 486 294 882 57 93", "637 675 511 716 805 656 687", "651 784 114 364 149 788 956", "546 436 608 317 322 801 924", "227 916 875 455 206 58 312", "127 458 946 130 413 874 61", "76 374 313 998 741 377 242"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 30.580906793408573;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> stars = {"739 125", "315 270", "33 592", "51 839", "97 251", "870 9", "557 243", "760 383", "65 693"};
    vector<string> ships = {"526 971 548 504 465 791 415", "376 993 380 717 901 402 760"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 8.220730330244075;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> stars = {"23 486"};
    vector<string> ships = {"537 325 746 378 525 614 1", "978 235 468 724 341 987 2", "291 564 831 570 502 110 1", "452 209 954 337 912 41 2", "656 777 698 99 971 422 1", "409 368 716 951 390 24 1", "533 189 364 352 26 337 1", "587 445 707 342 327 99 1", "643 467 621 359 476 411 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0720109392551675;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> stars = {"858 333", "87 481", "67 732", "521 89", "941 343", "476 662", "466 540", "55 269", "899 779", "820 901"};
    vector<string> ships = {"334 68 729 648 876 414 3", "653 547 638 279 1000 228 3", "450 505 706 205 666 379 3", "349 337 725 936 357 1000 3", "722 319 769 970 197 508 2", "475 751 903 189 471 740 2", "189 805 525 201 795 439 2", "102 394 580 309 681 632 1", "432 644 582 617 221 266 3", "624 576 184 379 130 841 2", "308 609 588 574 909 151 2", "31 390 696 987 966 725 3", "556 57 114 427 57 395 1", "954 340 428 160 77 287 3"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 21.142489598727856;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> stars = {"652 123", "780 646", "458 489", "469 906", "915 875", "26 209", "857 746", "304 271", "288 133", "99 417", "431 179", "224 803", "753 261", "150 181", "109 472", "221 361", "74 906"};
    vector<string> ships = {"753 115 429 243 716 529 1", "759 136 987 59 114 482 1", "517 794 134 636 834 376 1", "569 196 851 587 658 285 1", "122 612 667 838 965 406 1", "833 743 51 603 572 789 1", "556 211 225 788 400 15 1", "615 184 435 592 98 737 1", "735 529 832 857 224 132 1", "881 959 387 499 300 654 1", "631 676 897 834 306 317 1", "552 1000 842 322 887 429 1", "170 541 86 300 557 775 1", "594 129 976 838 94 269 1", "286 198 220 403 608 70 1", "795 662 190 606 198 463 1", "390 550 937 48 590 723 1", "775 702 37 25 742 543 1", "987 115 167 385 965 525 1", "881 141 428 869 976 207 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 18.378278663172527;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> stars = {"522 751", "141 409", "586 843", "908 523", "303 251", "329 819", "489 116", "598 245", "825 449", "997 474", "158 313", "581 138", "229 976", "450 931", "202 356", "646 704", "650 283", "484 517", "99 219", "302 450"};
    vector<string> ships = {"479 646 98 637 457 835 1", "591 464 595 541 295 517 1", "36 982 517 927 88 352 1", "665 948 331 841 258 376 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> stars = {"423 314", "387 508", "267 379", "32 15", "459 716", "784 268", "989 149", "172 7", "320 277", "980 446", "261 712", "934 394", "994 250", "622 409", "850 728", "216 526", "922 717", "820 525", "828 730"};
    vector<string> ships = {"399 828 376 642 695 151 818", "299 896 458 825 832 242 628", "113 110 901 832 958 859 840", "736 84 819 695 28 781 291", "981 286 553 428 627 392 209", "211 695 472 981 430 744 586", "543 561 928 926 375 465 900", "956 351 881 769 797 602 388", "719 540 913 306 618 917 799", "646 286 949 358 191 235 539", "336 614 1 941 227 375 870", "301 655 484 606 725 273 158", "570 856 189 629 84 964 55", "362 201 725 323 995 416 268", "319 127 411 184 885 42 748", "83 389 699 378 240 450 173", "723 219 443 795 427 250 725", "255 614 858 255 828 515 622"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 388.0098508738437;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> stars = {"192 301", "325 924", "993 683", "661 544", "503 17", "271 208", "575 237", "159 13", "82 108", "188 751", "576 112", "360 945", "749 156"};
    vector<string> ships = {"530 702 681 667 389 613 251", "657 275 361 575 111 716 88", "712 541 797 980 262 854 206", "367 439 548 818 62 567 609", "782 896 230 865 725 350 129", "815 971 468 323 222 385 409", "237 825 272 532 476 44 818", "47 227 500 221 673 672 324", "433 319 883 203 557 418 388", "290 205 367 956 274 334 146"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 70.59438472263373;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> stars = {"717 49", "348 152", "34 549", "639 970", "959 218", "372 68", "355 370", "543 983", "825 223", "485 480", "455 531", "189 405", "256 695", "874 677", "69 490", "606 56", "871 956"};
    vector<string> ships = {"272 463 136 88 784 196 4"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8406056688762842;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> stars = {"246 962", "232 991", "597 510", "311 463", "496 674", "373 320", "284 698", "139 48", "710 772", "940 801", "322 519", "500 540", "852 765", "809 813", "796 667"};
    vector<string> ships = {"307 5 779 255 678 110 1", "74 975 830 814 690 454 2", "779 169 627 746 773 868 4", "487 334 603 493 123 610 4", "519 549 508 276 900 503 2"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 11.999999999999998;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> stars = {"609 189", "217 9", "766 590"};
    vector<string> ships = {"235 219 507 940 778 141 5", "844 592 335 996 931 727 2", "191 443 798 456 49 836 1", "23 479 28 715 627 749 2"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6062317611922428;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> stars = {"2 630", "359 230", "890 363"};
    vector<string> ships = {"198 761 834 292 910 697 574", "654 159 237 504 828 650 990", "621 677 865 442 731 651 221", "47 298 201 538 213 341 18", "488 367 473 250 668 987 621", "899 502 746 202 921 180 58", "684 111 567 786 610 894 92", "861 475 546 701 802 10 920", "481 659 395 957 130 902 742", "601 565 553 892 612 864 313", "111 295 791 284 815 38 455", "812 26 788 710 975 732 176"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 7.157567270432688;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> stars = {"406 73", "548 48", "792 657", "268 818", "118 376", "791 285", "437 933", "869 478", "199 610", "926 55", "477 658", "396 243", "318 746"};
    vector<string> ships = {"243 392 587 490 439 479 2", "460 158 632 239 899 904 1", "930 254 118 271 873 610 1", "555 660 651 178 220 621 1", "920 174 202 507 887 153 1", "488 464 325 974 828 223 2", "222 473 832 720 904 726 1", "184 20 780 942 85 275 2", "90 441 978 536 454 946 2", "346 76 572 170 49 805 1", "922 488 441 780 883 764 2", "516 425 350 744 62 502 2", "344 405 47 662 280 374 1", "454 766 935 14 227 767 1", "972 334 478 39 344 322 1", "783 351 814 67 340 69 2", "662 833 657 872 923 3 1", "573 420 426 258 221 257 2", "411 144 642 932 378 855 2", "348 455 872 770 670 968 1"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 24.807364226478583;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> stars = {"86 65", "30 76", "97 25", "27 31", "31 16", "24 11", "71 47", "80 69", "95 57", "4 70", "69 15", "90 7", "100 9", "12 70", "79 63", "38 13", "46 88", "59 19", "36 11", "24 80"};
    vector<string> ships = {"11 59 80 65 3 3 41", "29 85 46 51 2 28 65", "15 88 12 25 2 41 42", "52 69 63 64 1 94 62", "66 12 96 10 2 14 19", "77 3 34 3 1 58 4", "94 86 49 85 3 77 65", "69 12 66 7 2 37 8", "70 40 35 17 1 88 36", "93 16 31 91 3 18 8", "83 49 88 49 3 82 22", "1 72 79 24 2 94 3", "39 14 7 93 2 78 97", "2 5 75 1 2 17 80", "64 30 12 50 1 41 40", "5 91 7 80 2 85 24", "52 86 9 47 1 64 67", "38 43 87 28 3 21 79", "9 64 72 31 2 60 88", "95 88 49 18 1 1 39"};
    EllysDeathStars* pObj = new EllysDeathStars();
    clock_t start = clock();
    double result = pObj->getMax(stars, ships);
    clock_t end = clock();
    delete pObj;
    double expected = 734.2658662785091;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22689214&rd=14735&pm=11904
********************************************************************************
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>
#include <climits>
#include <numeric>
#include <complex>
using namespace std;
 
#define all(c) (c).begin(), (c).end()
#define iter(c) __typeof((c).begin())
#define cpresent(c, e) (find(all(c), (e)) != (c).end())
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define tr(c, i) for (iter(c) i = (c).begin(); i != (c).end(); ++i)
#define pb push_back
#define mp make_pair
 
struct EllysDeathStars {
  double getMax(vector <string> stars, vector <string> ships);
};
 
typedef complex<double> p_t;
const double EPS = 1e-10;
 
 
namespace mf {
const int MAX_V = 100010;
 
struct e_t {
  int to;
  double cap;
  int rev;
};
 
int V, S, T;
vector<e_t> adj[MAX_V];
 
int lev[MAX_V], done[MAX_V];
 
void add_edge(int i, int j, double c) {
  adj[i].push_back((e_t){j, c, adj[j].size()});
  adj[j].push_back((e_t){i, 0, adj[i].size() - 1});
}
 
bool levelize() {
  memset(lev, -1, sizeof(lev));
  queue<int> que;
  lev[S] = 0;
  que.push(S);
  while (!que.empty()) {
    int v = que.front(); que.pop();
    rep (i, adj[v].size()) {
      e_t &e = adj[v][i];
      if (e.cap < EPS || lev[e.to] != -1) continue;
      lev[e.to] = lev[v] + 1;
      que.push(e.to);
    }
  }
  return lev[T] != -1;
}
 
double augment(int v, double f) {
  if (v == T || f < EPS) return f;
  for (; done[v] < (int)adj[v].size(); done[v]++) {
    e_t &e = adj[v][done[v]];
    if (lev[e.to] <= lev[v]) continue;
    double t = augment(e.to, min(f, e.cap));
    if (t > EPS) {
      e.cap -= t;
      adj[e.to][e.rev].cap += t;
      return t;
    }
  }
  return 0;
}
 
double max_flow() {
  double f = 0, t;
  while (levelize()) {
    memset(done, 0, sizeof(done));
    while (EPS < (t = augment(S, 1E30))) f += t;
  }
  return f;
}
}
 
 
 
 
double dot(const p_t &p, const p_t &q) { return real(conj(p) * q); }
double det(const p_t &p, const p_t &q) { return imag(conj(p) * q); }
 
double dist_l_p(const p_t &p, const p_t &a, const p_t &u) {
  return abs(det(p - a, u)) / abs(u);
}
 
pair<double, double> cross_l_c(p_t a, const p_t &u, const p_t &c, double r) {
  a -= c;
  double b = real(u * conj(a)), d = b * b - norm(u) * (norm(a) - r * r);
  d = max(d, 0.0);
  return make_pair((-b + sqrt(d)) / norm(u), (-b - sqrt(d)) / norm(u));
}
 
 
 
int NSTAR, NSHIP;
p_t S[60];
p_t F[60], T[60], move[60];
double speed[60], range[60], energy[60], end[60];
 
double EllysDeathStars::getMax(vector <string> stars, vector <string> ships) {
  NSTAR = stars.size();
  rep (i, NSTAR) sscanf(stars[i].c_str(), "%lf %lf", &S[i].real(), &S[i].imag());
 
  NSHIP = ships.size();
  rep (i, NSHIP) sscanf(ships[i].c_str(), "%lf %lf %lf %lf %lf %lf %lf",
                         &F[i].real(), &F[i].imag(), &T[i].real(), &T[i].imag(),
                         speed + i, range + i, energy + i);
 
  mf::V = NSHIP + 2;
  mf::S = NSHIP + 0;
  mf::T = NSHIP + 1;
  rep (v, mf::V) mf::adj[v].clear();
  rep (j, NSHIP) mf::add_edge(mf::S, j, energy[j]);
 
  rep (i, NSTAR) {
    vector<double> evt;
 
    rep (j, NSHIP) {
      if (T[j] == F[j]) continue;
      if (dist_l_p(S[i], F[j], T[j] - F[j]) > range[j] - EPS) continue;
 
      p_t m = (T[j] - F[j]);
      m /= abs(m);
      m *= speed[j];
      double e = abs(T[j] - F[j]) / speed[j];
 
      pair<double, double> c = cross_l_c(F[j], m, S[i], range[j]);
      evt.pb(max(0.0, min(e, c.first)));
      evt.pb(max(0.0, min(e, c.second)));
 
      move[j] = m;
      end[j] = e;
    }
 
    sort(all(evt));
 
    for (int k = 0; k + 1 < (int)evt.size(); ++k) {
      double time = (evt[k + 1] + evt[k]) / 2.0;
      double span = evt[k + 1] - evt[k];
      if (span < EPS) continue;
 
      int v = mf::V++;
      mf::adj[v].clear();
 
      rep (j, NSHIP) {
        if (time > end[j] + EPS) continue;
        p_t p = F[j] + move[j] * time;
        if (abs(S[i] - p) < range[j]) mf::add_edge(j, v, span);
      }
 
      mf::add_edge(v, mf::T, span);
    }
  }
 
  return mf::max_flow();
}
 
 
 
 
 
 
 
 
 
 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17pre2 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/