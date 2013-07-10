/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7652
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

class CarBuyer {
public:
    double lowestCost(vector<string> cars, int fuelPrice, int annualDistance, int years);
};

double CarBuyer::lowestCost(vector<string> cars, int fuelPrice, int annualDistance, int years) {
    double ret;
    return ret;
}


int test0() {
    vector<string> cars = {"10000 50 50", "12000 500 10", "15000 100 65", "20000 20 80", "25000 10 90"};
    int fuelPrice = 2;
    int annualDistance = 5000;
    int years = 2;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 10500.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> cars = {"10000 50 50", "12000 500 10", "15000 100 65", "20000 20 80", "25000 10 90"};
    int fuelPrice = 8;
    int annualDistance = 25000;
    int years = 10;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 45200.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> cars = {"8426 774 19", "29709 325 31", "30783 853 68", "20796 781 3", "27726 4 81", "20788 369 69", "17554 359 34", "12039 502 24", "6264 230 69", "14151 420 65", "25115 528 70", "22234 719 55", "2050 926 40", "18618 714 29", "173 358 57"};
    int fuelPrice = 33;
    int annualDistance = 8673;
    int years = 64;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 254122.44444444444;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> cars = {"7303 611 14", "13323 204 40", "29837 100 26", "26126 652 51", "26002 494 9", "22016 314 26", "22574 28 43", "8837 288 41", "28694 854 56", "23144 152 75", "6834 170 36", "25820 139 7", "31822 184 41", "3090 669 56", "19349 103 87", "8607 699 9", "7761 668 53", "3245 554 3", "23467 610 26", "24559 115 27", "18268 499 97", "27078 934 2", "13966 77 28", "6945 885 97", "19041 650 17", "12799 879 41", "21834 143 97", "23191 988 92", "10191 742 30", "1681 251 37", "13895 410 88", "7133 317 41", "11427 488 19", "25859 799 65", "26230 607 46", "27398 382 84", "12462 395 87", "9515 903 19", "1982 670 24", "17736 918 15", "40 548 39", "26470 175 59", "168 315 6", "8662 687 66", "15477 210 80", "28435 687 10", "16713 245 39", "15613 544 66", "16438 694 38", "9557 910 74"};
    int fuelPrice = 20;
    int annualDistance = 961;
    int years = 100;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 51740.9540229885;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> cars = {"386 167 17", "21139 157 88", "16392 864 28", "23569 687 20", "11322 799 29", "13766 836 46", "18691 217 38", "3056 475 35", "1513 253 5", "23787 635 97", "400 270 30", "3472 223 54", "20320 864 50", "21766 405 86", "24104 809 43", "31325 279 6", "15313 986 78", "11605 687 47", "5747 908 51", "28952 453 25", "5493 889 58", "27351 400 25", "1407 49 78", "16259 335 10", "26720 194 70", "21276 96 69", "22078 418 13", "334 358 40", "20387 704 14", "6735 749 52", "14405 499 1", "24640 432 41", "16547 369 78", "16512 721 97", "6339 239 53", "25001 417 100", "28856 561 73", "10806 240 18", "7103 867 73", "27911 126 23", "12553 562 58", "16436 233 18", "20885 197 97", "30710 506 77", "23718 187 31", "8842 691 18", "25778 209 18", "860 372 60", "13542 919 95", "15071 962 50"};
    int fuelPrice = 11;
    int annualDistance = 5012;
    int years = 47;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 36930.5641025641;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> cars = {"21973 49 10", "18435 409 38", "14845 762 10", "19179 537 47", "8028 38 29", "15859 774 94", "19613 60 84", "5196 379 94", "29243 34 75", "10120 795 5", "4979 247 56", "3255 515 49", "15668 890 76", "11210 832 9", "10877 681 49", "26541 300 90", "13040 820 75", "12180 76 42", "19335 454 10", "617 957 95", "19111 360 23", "21357 66 47", "22530 496 86", "27481 727 10", "17936 420 62", "25512 980 98", "22022 848 40", "16857 407 33", "26763 127 82", "5822 718 38", "11428 765 94", "27190 12 3", "19340 497 26", "13802 542 47", "11120 858 10", "20962 204 47", "31818 146 36", "3078 617 22", "10574 109 70", "16371 980 96", "20136 232 5", "13989 361 15", "18044 13 37", "28129 422 73", "4451 181 96", "13681 517 45", "7648 244 82", "25728 943 62", "3965 351 94", "21445 640 9"};
    int fuelPrice = 77;
    int annualDistance = 32406;
    int years = 74;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 1941276.125;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> cars = {"22843 656 83", "2792 890 18", "18574 998 76", "7852 945 31", "1938 980 84", "7286 956 61", "10334 636 25", "25681 253 94", "17110 851 65", "9472 232 49", "1489 695 47", "18939 734 14", "15394 62 42", "15317 366 31", "23588 351 65", "12553 88 98", "14492 284 26", "18021 896 96", "8210 229 10", "23944 739 6", "13293 284 16", "9517 976 68", "4849 409 12", "576 744 95", "11005 650 2", "8677 65 8", "13325 624 4", "7169 874 63", "2803 342 50", "2792 531 58", "27716 781 65", "10287 664 36", "108 635 86", "10211 180 59", "20451 367 21", "651 586 87", "8954 661 55", "29633 171 66", "4799 475 38", "30276 691 78", "14559 494 21", "18389 590 29", "2710 242 41", "20029 462 14", "3850 434 33", "25672 359 59", "23463 757 68", "28832 261 25", "8529 584 95", "453 443 76"};
    int fuelPrice = 59;
    int annualDistance = 19424;
    int years = 51;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 613437.081632653;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> cars = {"20898 6 80", "3824 939 25", "22627 124 48", "30309 340 88", "18840 310 23", "5954 601 60", "18387 823 9", "25113 201 5", "6714 363 33", "6846 331 78", "3274 712 69", "11273 883 61", "12086 509 18", "23604 998 79", "12207 373 55", "3300 259 2", "26104 221 90", "32327 361 40", "6280 721 85", "11972 744 95", "26807 120 8", "31021 719 42", "29729 554 49", "4485 295 10", "26818 870 3", "1190 286 55", "22142 245 90", "31083 680 52", "17420 55 4", "12858 344 99", "18051 921 31", "17396 26 3", "25078 222 44", "13238 177 84", "7905 361 75", "16121 482 91", "21340 457 96", "2536 946 70", "28739 182 95", "24075 839 8", "482 223 67", "6041 397 53", "20665 309 15", "27147 561 75", "31358 323 7", "21706 890 43", "17508 829 46", "1803 306 11", "8008 440 78", "7731 560 39"};
    int fuelPrice = 69;
    int annualDistance = 18093;
    int years = 7;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 103537.90909090909;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> cars = {"11364 621 3", "19586 838 54", "23801 718 67", "24829 691 3", "27416 333 53", "15586 132 24", "686 132 77", "30734 856 50", "7785 432 69", "14631 559 29", "5517 77 13", "16566 682 12", "25273 477 23", "24282 955 23", "18678 423 65", "832 746 55", "28324 859 61", "2659 871 78", "24103 94 53", "7248 784 86", "10843 676 49", "12368 294 45", "18748 845 31", "26192 107 62", "8515 360 74", "12769 131 11", "22120 190 18", "7195 894 96", "10702 686 81", "30934 93 61", "19317 19 31", "8427 375 80", "24472 976 65", "26236 620 74", "16761 116 37", "22911 554 41", "19396 917 43", "25077 682 25", "13018 835 79", "657 927 74", "22424 253 67", "4551 502 82", "31107 30 82", "12407 759 36", "25943 992 39", "3239 333 12", "14695 917 59", "25622 629 5", "11103 422 26", "3463 346 86"};
    int fuelPrice = 32;
    int annualDistance = 11956;
    int years = 95;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 458963.6976744186;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> cars = {"24847 554 66", "11650 158 36", "30429 368 47", "15199 866 86", "12580 721 16", "28840 984 77", "12597 134 87", "20805 514 79", "235 822 68", "17573 421 82", "12537 282 19", "4805 225 49", "16822 721 60", "16471 842 39", "12158 577 76", "2022 576 20", "15554 607 80", "19460 151 22", "25426 511 91", "738 916 56", "925 186 45", "22001 78 47", "17349 554 99", "4181 187 45", "27100 704 43", "3398 562 80", "9141 972 40", "13251 17 34", "29694 730 57", "16161 53 11", "12190 313 87", "11344 412 60", "26522 567 46", "12792 278 86", "6881 333 94", "15802 4 3", "26831 368 99", "6963 833 2", "2131 402 14", "14745 982 3", "20717 621 52", "2825 544 32", "31240 905 98", "17626 714 5", "10847 880 26", "27290 179 40", "21601 463 22", "5497 730 87", "32219 833 60", "26701 683 47"};
    int fuelPrice = 73;
    int annualDistance = 8330;
    int years = 67;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 462617.8510638298;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> cars = {"9342 709 56", "23756 802 20", "28268 5 67", "30969 725 34", "4154 37 43", "21759 980 37", "32765 796 8", "20572 48 5", "10945 973 48", "14733 834 19", "6114 558 22", "30593 916 37", "28842 614 56", "27912 412 99", "26164 107 57", "21939 334 41", "25605 691 89", "6376 792 41", "2011 467 20", "31506 185 24", "1948 683 93", "32311 748 62", "5233 399 17", "31324 881 84", "30318 142 58", "19323 439 9", "7769 642 44", "13819 509 94", "21353 715 6", "9188 128 84", "282 473 42", "27726 181 63", "3430 208 4", "17334 935 71", "6656 592 45", "3899 965 29", "13161 267 84", "28152 500 50", "18165 542 37", "13044 226 50", "21785 384 66", "3933 325 75", "18332 674 65", "8200 635 80", "11133 915 5", "17009 828 93", "23727 263 10", "21677 233 45", "1528 712 62", "8456 872 18"};
    int fuelPrice = 91;
    int annualDistance = 10142;
    int years = 93;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 933215.3333333334;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> cars = {"332 369 2", "14215 208 90", "3811 642 47", "23639 642 99", "19533 154 100", "56 822 20", "27044 580 19", "16267 817 79", "26916 747 63", "12013 170 78", "18932 141 54", "23265 25 11", "20124 359 85", "30546 525 48", "16881 880 46", "30118 24 87", "6242 332 80", "14364 141 3", "17629 695 73", "20389 263 45", "24532 192 8", "11651 971 11", "9221 650 24", "1093 833 62", "6155 893 77", "19457 938 90", "19694 301 92", "3040 672 53", "14629 223 100", "16203 970 54", "13510 320 88", "30565 809 3", "18135 484 51", "18832 885 97", "7433 888 79", "16944 9 80", "32307 692 35", "32496 649 84", "7537 783 74", "22056 446 33", "14006 921 50", "6463 167 71", "7971 200 92", "7706 922 63", "17045 648 72", "24571 355 43", "13591 766 72", "16981 484 27", "23111 825 65", "24714 588 72"};
    int fuelPrice = 95;
    int annualDistance = 14142;
    int years = 100;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 1378423.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> cars = {"27526 433 58", "24405 195 25", "29367 573 13", "31261 626 8", "10197 859 99", "609 452 11", "17774 812 96", "1430 303 84", "20032 272 31", "6261 521 40", "28599 257 18", "23482 681 13", "31798 45 32", "11149 697 95", "16880 315 19", "22207 358 93", "2422 243 70", "4710 719 52", "21326 640 26", "21371 665 39", "3626 738 86", "7047 415 62", "1942 587 17", "26250 80 23", "22335 525 44", "6032 160 55", "2327 50 66", "20160 785 23", "25862 14 51", "20162 316 86", "29418 807 29", "20688 936 32", "20496 370 71", "11727 740 48", "10093 150 56", "26685 132 81", "12357 39 82", "13795 784 15", "3837 863 3", "31105 451 88", "25158 613 94", "31730 829 65", "15090 950 54", "29052 563 39", "18181 426 11", "17220 584 46", "10464 297 92", "32287 603 87", "22945 169 88", "32573 251 15"};
    int fuelPrice = 69;
    int annualDistance = 19929;
    int years = 15;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 231430.63636363635;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> cars = {"19544 906 58", "14214 293 38", "18544 717 95", "29482 45 78", "30528 78 95", "30405 42 80", "4327 495 3", "30815 778 40", "5250 264 45", "26289 884 5", "9131 852 98", "14710 502 39", "2574 854 28", "5818 635 88", "15258 586 57", "4701 14 73", "6398 649 8", "16269 591 9", "15722 231 12", "9188 461 58", "18888 881 86", "27243 256 40", "24823 645 77", "2230 544 41", "9637 941 88", "29385 384 98", "21972 897 69", "2710 904 47", "26944 624 51", "15913 155 22", "12049 328 56", "21469 775 86", "7330 249 51", "17975 407 18", "8777 27 29", "22835 357 21", "15453 402 52", "20774 921 65", "26096 45 55", "30604 900 38", "24567 291 3", "29773 295 60", "15066 819 42", "613 577 5", "2457 888 55", "15612 636 20", "27918 284 5", "15936 134 76", "2808 952 64", "7076 121 35"};
    int fuelPrice = 42;
    int annualDistance = 22778;
    int years = 75;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 790335.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> cars = {"861 174 42", "11138 176 84", "27942 376 99", "14555 255 18", "1209 959 12", "31692 856 61", "15995 350 42", "24343 492 79", "30539 942 20", "571 636 38", "9860 417 39", "58 14 16", "5501 319 64", "11505 806 18", "21043 71 8", "16874 649 1", "15081 611 72", "13562 707 65", "7898 225 73", "16900 226 19", "5204 823 48", "24246 859 33", "24274 71 76", "10791 80 9", "8175 745 92", "17289 477 80", "9296 861 21", "6786 644 82", "31180 525 64", "4289 722 7", "11907 238 72", "30689 585 33", "12446 608 66", "26567 601 87", "21745 623 81", "26869 205 32", "7861 628 10", "19337 947 69", "3346 150 15", "3812 633 13", "824 189 44", "18215 840 96", "26157 411 77", "17680 629 98", "22436 291 44", "14812 755 34", "6002 671 81", "29739 64 30", "7556 400 27", "29742 169 71"};
    int fuelPrice = 47;
    int annualDistance = 18028;
    int years = 33;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 322788.6666666667;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> cars = {"17531 943 75", "8305 843 41", "4696 24 22", "6969 804 5", "15209 603 47", "26700 149 67", "16375 813 96", "4651 806 82", "4175 265 79", "22458 627 13", "20723 935 67", "1569 173 88", "17539 916 34", "13025 805 75", "23472 171 26", "28737 259 33", "19102 294 65", "2656 710 100", "16501 687 2", "25991 302 14", "18706 528 62", "18068 461 83", "18972 116 69", "13466 673 83", "17387 285 47", "20232 538 78", "21499 638 56", "30189 821 38", "14819 622 24", "2620 515 48", "8465 645 31", "27161 248 7", "172 658 72", "12698 145 38", "20596 137 64", "17018 710 19", "27769 229 88", "13748 206 60", "6905 234 64", "12296 278 35", "3790 770 57", "11971 1 21", "17957 630 57", "21623 320 47", "6280 748 76", "5468 845 44", "30804 583 59", "29072 325 79", "11055 882 35", "16244 413 25"};
    int fuelPrice = 94;
    int annualDistance = 9612;
    int years = 79;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 772533.12;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> cars = {"29393 719 93", "9594 721 34", "23958 772 68", "12594 327 24", "11588 818 9", "14114 351 77", "29794 796 33", "24550 63 84", "29084 762 33", "18412 853 44", "3657 789 24", "30395 671 66", "19605 814 44", "32241 860 93", "8583 263 70", "17058 223 1", "4492 164 86", "28463 508 21", "26208 835 100", "1194 361 97", "2909 166 56", "19028 41 14", "6557 790 94", "16112 216 65", "28540 837 29", "713 159 15", "26441 542 82", "17099 284 8", "28502 941 83", "19453 817 93", "31144 834 78", "27703 393 94", "1001 777 94", "28660 932 25", "26744 644 28", "13954 785 62", "20386 239 52", "19727 217 2", "1131 922 30", "5686 935 62", "12918 198 12", "1820 155 1", "15075 20 49", "17477 534 31", "27715 502 28", "14240 62 26", "3567 88 26", "26234 297 50", "26984 775 30", "10595 865 17"};
    int fuelPrice = 50;
    int annualDistance = 5388;
    int years = 86;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 271089.4845360825;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> cars = {"16671 965 78", "5538 902 94", "27452 749 53", "30466 26 60", "24042 700 59", "20777 974 78", "17950 103 56", "15327 682 33", "21550 867 22", "25611 771 44", "25187 739 64", "14516 188 67", "7742 231 90", "3015 547 88", "10327 521 20", "2929 868 91", "10275 19 44", "32556 872 78", "10248 605 46", "32730 587 32", "897 829 82", "1140 760 78", "5196 106 31", "9539 747 15", "27847 971 37", "30108 863 30", "7442 494 96", "22668 393 37", "3477 280 75", "20229 543 95", "13548 828 1", "32351 793 38", "10354 564 46", "9296 694 67", "3549 822 11", "27049 326 92", "6574 387 18", "6005 441 58", "22879 10 94", "10838 784 100", "22931 444 77", "11813 254 12", "6071 80 7", "16464 43 51", "27603 461 86", "8546 495 98", "637 25 86", "28345 901 84", "26670 773 55", "860 501 28"};
    int fuelPrice = 59;
    int annualDistance = 26417;
    int years = 66;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 1090887.4081632653;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> cars = {"11110 655 23", "2146 850 75", "22413 242 58", "16467 384 87", "26271 7 10", "26455 165 91", "30999 531 66", "4511 254 98", "10005 76 84", "23946 388 83", "27484 164 53", "24484 638 19", "13860 411 58", "9914 126 4", "28895 598 72", "17038 980 95", "22601 497 81", "15569 948 32", "1113 414 25", "26468 882 41", "19942 177 24", "5140 806 13", "4127 680 71", "2387 992 82", "6196 87 3", "9358 948 62", "32691 11 10", "26172 850 79", "16008 542 67", "27833 6 14", "1960 917 54", "31360 887 71", "4041 807 69", "22894 934 23", "16314 130 6", "4107 615 40", "7216 578 21", "16143 821 30", "27437 144 24", "27806 620 60", "25410 616 34", "20466 204 64", "2917 30 32", "11105 173 37", "29195 105 67", "15375 836 49", "6342 677 13", "3496 199 81", "28060 627 1", "26093 120 67"};
    int fuelPrice = 28;
    int annualDistance = 15695;
    int years = 5;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 28202.428571428572;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> cars = {"20228 662 98", "17863 852 76", "22729 730 30", "12399 343 11", "18573 723 89", "3096 665 10", "27656 227 9", "1457 952 27", "28525 814 76", "11029 255 65", "16350 591 32", "7048 762 45", "31408 269 42", "31162 841 48", "32575 384 16", "29938 841 29", "15434 830 18", "26415 971 36", "4870 251 86", "9301 959 68", "31081 738 87", "15051 918 64", "12899 608 12", "8215 924 85", "19964 651 75", "9294 243 92", "31882 326 73", "7549 613 67", "26499 480 85", "6233 229 37", "1945 238 40", "3528 546 1", "8984 933 16", "13617 841 93", "4297 439 87", "6541 156 33", "23230 705 65", "11188 168 45", "14808 827 32", "13909 334 17", "28136 371 36", "26779 776 70", "32693 920 48", "12917 450 63", "20812 77 38", "31217 448 24", "22124 569 23", "21294 487 59", "12777 396 34", "27858 970 44"};
    int fuelPrice = 83;
    int annualDistance = 28822;
    int years = 16;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 421387.51020408166;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> cars = {"24840 240 35", "30550 167 78", "8040 469 6", "9847 617 4", "15978 328 54", "12621 534 35", "17187 698 55", "4162 211 28", "25726 92 84", "15479 613 56", "2872 397 95", "26733 703 7", "25155 393 73", "10872 921 67", "17244 912 42", "14636 606 9", "14835 39 77", "14653 2 13", "19136 181 27", "22934 179 47", "14486 101 64", "25989 619 75", "12111 346 37", "24148 831 95", "9190 942 50", "25774 614 61", "25894 433 42", "3982 688 23", "23142 803 52", "4544 627 51", "22099 328 61", "4114 46 41", "16829 563 67", "6590 98 41", "18130 341 3", "8646 543 28", "8024 416 41", "29484 88 43", "18628 541 80", "13135 20 97", "14142 115 22", "27867 415 13", "15601 886 27", "8962 51 3", "19765 354 65", "24572 489 12", "7040 34 28", "25354 886 81", "25622 223 23", "20836 95 9"};
    int fuelPrice = 93;
    int annualDistance = 18103;
    int years = 44;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 777700.3195876288;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> cars = {"27354 12 78", "22381 892 16", "3612 828 94", "15210 172 23", "8661 615 37", "11093 46 80", "3883 672 50", "21521 190 62", "12092 310 42", "11921 527 56", "12455 474 57", "20713 531 38", "23383 956 75", "19181 351 49", "2041 677 21", "10943 798 16", "28134 297 48", "8150 525 32", "25968 55 11", "13160 884 20", "13770 568 58", "17208 225 47", "19721 190 48", "26684 29 69", "9711 577 78", "17559 710 15", "29308 445 93", "27861 982 50", "13180 384 12", "20081 254 96", "1161 558 30", "10760 454 26", "24893 654 97", "466 509 9", "21380 912 16", "19748 967 47", "9296 774 30", "26679 345 75", "7966 603 78", "9066 998 27", "3598 299 18", "6056 17 43", "6006 297 88", "3532 574 28", "26428 496 31", "25872 269 6", "23903 839 29", "2280 385 52", "10353 856 44", "16607 687 13"};
    int fuelPrice = 1;
    int annualDistance = 32517;
    int years = 70;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 42765.375;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> cars = {"1350 40 31", "31690 816 45", "6626 816 33", "9559 803 86", "3025 52 35", "13260 250 22", "25185 204 93", "17615 933 13", "27283 733 41", "25497 419 13", "4985 986 86", "10245 456 59", "26037 410 95", "1110 32 87", "19132 910 67", "21910 422 13", "10421 178 30", "21467 261 26", "24070 201 94", "22238 782 56", "29673 26 61", "22684 118 96", "418 98 73", "772 96 5", "16947 182 42", "14039 593 43", "23709 830 4", "10568 544 81", "25350 605 72", "17151 100 67", "10088 325 86", "9866 729 67", "17560 591 64", "32103 707 59", "12468 54 59", "12830 372 90", "27240 762 96", "25394 797 8", "25738 742 54", "28111 41 21", "19443 765 65", "16505 529 19", "12713 52 67", "1328 646 80", "6065 196 48", "28606 139 10", "26915 56 10", "26666 318 14", "5718 757 92", "12944 779 72"};
    int fuelPrice = 4;
    int annualDistance = 8588;
    int years = 54;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 24159.931034482757;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> cars = {"8426 774 19", "29709 325 31", "30783 853 68", "20796 781 3", "27726 4 81", "20788 369 69", "17554 359 34", "12039 502 24", "6264 230 69", "14151 420 65", "25115 528 70", "22234 719 55", "2050 926 40", "18618 714 29", "173 358 57"};
    int fuelPrice = 33;
    int annualDistance = 8673;
    int years = 64;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 254122.44444444444;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> cars = {"1000 1000 3"};
    int fuelPrice = 2;
    int annualDistance = 2;
    int years = 2;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 3002.6666666666665;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> cars = {"100000 1000 1"};
    int fuelPrice = 100;
    int annualDistance = 100000;
    int years = 100;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0002E9;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> cars = {"8426 774 19", "29709 325 31", "30783 853 68", "20796 781 3", "27726 4 81", "20788 369 69", "17554 359 34", "12039 502 24", "6264 230 69", "14151 420 65", "25115 528 70", "22234 719 55", "2050 926 40", "18618 714 29", "173 358 57", "10000 1000 100"};
    int fuelPrice = 33;
    int annualDistance = 8673;
    int years = 64;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 254122.44444444444;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> cars = {"10000 1000 1"};
    int fuelPrice = 100;
    int annualDistance = 100000;
    int years = 100;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 1.00011E9;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> cars = {"10000 50 50", "12000 500 10", "15000 100 65", "20000 20 80", "25000 10 90"};
    int fuelPrice = 2;
    int annualDistance = 5000;
    int years = 2;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 10500.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> cars = {"12 3 3"};
    int fuelPrice = 4;
    int annualDistance = 5;
    int years = 5;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 60.333333333333336;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> cars = {"25000 10 1"};
    int fuelPrice = 100;
    int annualDistance = 100000;
    int years = 100;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 1.000026E9;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> cars = {"10000 100 1"};
    int fuelPrice = 100;
    int annualDistance = 100000;
    int years = 100;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 1.00002E9;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> cars = {"1000 1000 1"};
    int fuelPrice = 100;
    int annualDistance = 100000;
    int years = 100;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 1.000101E9;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> cars = {"100000 50 2"};
    int fuelPrice = 100;
    int annualDistance = 10000;
    int years = 10;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 5100500.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> cars = {"100000 100 1"};
    int fuelPrice = 100;
    int annualDistance = 100000;
    int years = 100;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 1.00011E9;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> cars = {"10 100 1"};
    int fuelPrice = 100;
    int annualDistance = 100000;
    int years = 100;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 1.00001001E9;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> cars = {"9999 999 99", "9877 756 12"};
    int fuelPrice = 5;
    int annualDistance = 6;
    int years = 97;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 83451.5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> cars = {"1 1 2"};
    int fuelPrice = 1;
    int annualDistance = 1;
    int years = 1;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> cars = {"100000 1000 1", "12000 500 10", "15000 100 65", "20000 20 80", "25000 10 90"};
    int fuelPrice = 100;
    int annualDistance = 5000;
    int years = 100;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 581555.5555555555;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> cars = {"100000 1000 1", "100 100 100"};
    int fuelPrice = 100;
    int annualDistance = 100000;
    int years = 100;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 1.00101E7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> cars = {"100000 1000 100"};
    int fuelPrice = 10;
    int annualDistance = 10;
    int years = 10;
    CarBuyer* pObj = new CarBuyer();
    clock_t start = clock();
    double result = pObj->lowestCost(cars, fuelPrice, annualDistance, years);
    clock_t end = clock();
    delete pObj;
    double expected = 110010.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653971&rd=10671&pm=7652
********************************************************************************
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
 
class CarBuyer {
public:
  double lowestCost(vector <string>, int, int, int);
};
 
double CarBuyer::lowestCost(vector <string> cars, int fuelPrice, int annualDistance, int years) 
{
  vector<double> ans;
  for(int i=0;i<cars.size();i++)
  {
    int pc,t,fe;
    string str;
    double as;
    vector<int>v;
    stringstream ss(cars[i]);
    while(ss>>pc>>t>>fe)
    {
      v.push_back(pc);
      v.push_back(t);
      v.push_back(fe);
    }
    as=pc+((double)t*(double)(years)+((double)fuelPrice*(double)annualDistance*(double)years/(double)fe));
    ans.push_back(as);
  }
  sort(ans.begin(),ans.end());
  return ans[0];
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/