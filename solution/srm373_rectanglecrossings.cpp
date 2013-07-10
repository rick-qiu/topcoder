/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8051
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

class RectangleCrossings {
public:
    vector<int> countAreas(vector<string> rectangles, vector<string> segments);
};

vector<int> RectangleCrossings::countAreas(vector<string> rectangles, vector<string> segments) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> rectangles = {"-1000 -1000 1000 1000"};
    vector<string> segments = {"-525 245 222 243"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4000000, 0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> rectangles = {"1 1 2 2", "1 4 2 5", "5 5 6 7", "7 7 9 9"};
    vector<string> segments = {"1 2 1 5"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> rectangles = {"1 1 3 3", "4 4 5 5", "6 6 7 7", "8 8 9 9", "51 22 344 352", "-124 -235 -12 -1"};
    vector<string> segments = {"-100 -2 300 300"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {122898, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> rectangles = {"1 1 3 3", "4 4 5 5", "6 6 7 7", "8 8 9 9", "51 22 344 352", "-124 -235 -12 -1"};
    vector<string> segments = {"-104 -103 202 201"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {122898, 7};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> rectangles = {"-1000 -1000 1000 1000"};
    vector<string> segments = {"-141 -755 -123 -135", "-321 -545 -123 -135", "311 235 777 543", "1 1 423 53"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4000000, 0};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> rectangles = {};
    vector<string> segments = {};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> rectangles = {"1 1 2 3", "3 3 5 4", "5 5 7 6", "7 8 9 9", "52 223 364 352", "-204 -235 -12 -1"};
    vector<string> segments = {};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> rectangles = {"1 1 3 3", "7 7 9 9", "312 223 346 342", "-124 -235 -12 -1"};
    vector<string> segments = {"999 999 1000 1000"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> rectangles = {"1 2 5 3"};
    vector<string> segments = {"5 3 6 8"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> rectangles = {"4 4 6 5"};
    vector<string> segments = {"5 7 7 3"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> rectangles = {"1 8 2 10"};
    vector<string> segments = {"2 4 2 3"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> rectangles = {"0 0 1 1", "2 0 3 1", "4 0 5 1", "6 0 7 1", "8 0 9 1", "10 0 11 1", "12 0 13 1", "14 0 15 1", "16 0 17 1", "18 0 19 1", "20 0 21 1", "22 0 23 1", "24 0 25 1", "26 0 27 1", "28 0 29 1", "30 0 31 1", "32 0 33 1", "34 0 35 1", "36 0 37 1", "38 0 39 1", "40 0 41 1", "42 0 43 1", "44 0 45 1", "46 0 47 1", "48 0 49 1", "50 0 51 1", "52 0 53 1", "54 0 55 1", "56 0 57 1", "58 0 59 1", "60 0 61 1", "62 0 63 1", "64 0 65 1", "66 0 67 1", "68 0 69 1", "70 0 71 1", "72 0 73 1", "74 0 75 1", "76 0 77 1", "78 0 79 1", "80 0 81 1", "82 0 83 1", "84 0 85 1", "86 0 87 1", "88 0 89 1", "90 0 91 1", "92 0 93 1", "94 0 95 1", "96 0 97 1", "98 0 99 1"};
    vector<string> segments = {"41 -1 43 2", "34 -1 34 2", "69 -1 73 2", "78 -1 81 2", "62 -1 66 2", "5 -1 5 2", "81 -1 83 2", "61 -1 62 2", "95 -1 97 2", "27 -1 28 2", "91 -1 95 2", "2 -1 5 2", "92 -1 94 2", "21 -1 22 2", "18 -1 18 2", "47 -1 48 2", "71 -1 74 2", "69 -1 71 2", "67 -1 71 2", "35 -1 39 2", "3 -1 4 2", "22 -1 25 2", "73 -1 77 2", "41 -1 42 2", "53 -1 56 2", "47 -1 51 2", "62 -1 64 2", "37 -1 41 2", "23 -1 24 2", "29 -1 32 2", "16 -1 16 2", "90 -1 92 2", "88 -1 89 2", "40 -1 42 2", "64 -1 67 2", "46 -1 46 2", "90 -1 94 2", "70 -1 70 2", "6 -1 7 2", "93 -1 96 2", "29 -1 32 2", "84 -1 88 2", "56 -1 56 2", "66 -1 67 2", "31 -1 34 2", "44 -1 48 2", "26 -1 29 2", "37 -1 40 2", "18 -1 20 2", "29 -1 30 2"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 36};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> rectangles = {"-655 -928 -449 -901", "-617 -686 -608 -551", "-924 -458 -118 -432", "-767 -211 -157 -153", "-501 17 -150 32", "-560 286 -447 472", "-869 655 -9 683", "-970 889 -200 973", "178 -966 671 -786", "42 -670 358 -616", "272 -336 775 -265", "733 -155 920 -88", "98 18 370 98", "371 257 520 401", "225 521 714 738", "852 809 931 852"};
    vector<string> segments = {"-365 -682 -955 -740", "855 -581 -134 -116", "983 871 416 833", "556 697 -984 -358", "-293 73 -623 879", "785 395 243 738", "-830 -420 0 -585", "746 -397 411 75", "709 -847 -833 -83", "-322 -633 314 967", "438 -459 433 -450", "752 708 -949 -870", "-321 984 -729 -583", "-57 857 429 -462", "-728 -594 296 184", "722 -551 -726 -524", "784 -339 301 696", "-957 170 -657 -689", "-689 -65 832 -197", "969 635 549 -693", "126 -788 185 -858", "-539 168 -560 533", "245 -574 -721 649", "-361 -257 496 -859", "-833 -992 -528 -691", "388 950 901 -222", "310 -588 -536 624", "-851 -640 862 320", "515 -717 484 -944", "-333 763 -746 765", "199 -524 101 979", "-376 -488 -903 -200", "55 958 18 924", "580 497 419 -12", "214 -858 -512 25"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {194853, 281116};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> rectangles = {"-891 -869 -853 -842", "-857 -399 -744 -231", "-910 -55 -856 36", "-844 287 -749 548", "-809 627 -782 954", "-704 -803 -641 -663", "-684 -330 -558 -268", "-702 -40 -545 98", "-660 386 -528 586", "-697 855 -571 962", "-414 -678 -168 -648", "-401 -559 -383 -441", "-387 5 -263 51", "-389 220 -194 448", "-361 673 -175 753", "68 -912 95 -742", "-24 -521 24 -227", "30 -70 38 -2", "-111 297 14 356", "7 797 27 809", "368 -709 418 -614", "247 -453 344 -251", "385 -111 417 -33", "275 202 290 421", "265 604 278 921", "524 -861 655 -640", "555 -336 576 -305", "429 28 578 35", "480 324 704 520", "444 632 665 842", "932 -954 981 -931", "930 -537 939 -455", "735 -81 787 192", "830 316 869 589", "808 629 971 666"};
    vector<string> segments = {"-898 -383 126 12", "283 -716 545 -918", "-299 333 54 138", "-901 129 706 488", "-8 690 -290 955", "-590 -771 476 257", "-528 -518 651 -139", "-984 -848 -380 459", "-358 924 31 -617", "817 -904 -208 -401", "-657 -211 275 -407", "-427 -699 -460 876", "403 -612 -675 563", "-782 -197 845 816", "-492 -771 -342 -83", "-650 -208 393 -614", "-67 -290 135 -610", "68 650 -366 560", "-482 608 -525 516", "548 460 -95 -436", "461 -457 -491 -846", "-672 728 -764 548", "-301 633 -613 278", "-496 126 940 576", "-350 -378 -671 1000", "148 82 275 211", "815 872 -810 -362", "160 -367 -754 569", "-721 941 -405 -57", "-792 582 804 563", "-934 -115 -641 -737"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {126942, 241757};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> rectangles = {"-977 508 -954 767", "-738 619 -702 955", "-494 -518 -441 11", "-345 -678 -219 -43", "-196 -827 -125 -283", "4 -280 187 36", "290 -349 390 495", "507 -395 592 -170", "658 -790 702 -390", "819 -263 898 504"};
    vector<string> segments = {"-261 253 881 -67", "-950 -340 -556 -411", "426 480 -732 -203", "830 386 583 -941", "-573 478 -977 630", "967 882 327 495", "784 229 364 338", "531 424 642 248", "636 232 496 263", "803 -908 -811 -172", "-381 -538 842 519", "685 986 845 187", "-472 -75 -433 772", "-810 489 520 -170", "840 827 560 -1", "-204 525 -480 -216", "568 543 204 386", "-817 -927 273 -44", "154 572 544 -395", "-82 448 -841 -524", "-797 954 -5 -625", "-811 -409 363 -506", "-253 10 -395 716", "710 -325 148 -116", "-190 -48 -260 440", "-101 -395 453 -609"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {230858, 173412};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> rectangles = {"-101 -998 272 -923", "252 -745 956 -731", "58 -524 200 -435", "-115 -294 839 -144", "-812 -14 -290 48", "-549 235 691 264", "-971 351 641 544", "773 691 886 747", "-186 894 -16 950"};
    vector<string> segments = {"-530 234 546 -432", "-715 181 -659 550", "169 457 -366 -899", "-621 470 -889 977", "-644 -199 -337 -123", "424 154 316 988", "-60 -435 198 288", "-311 395 -843 158", "-36 964 -719 544", "164 683 -382 -987", "-622 -896 -909 916", "-586 190 -521 780", "331 579 570 -731", "-500 175 438 -617", "-309 -737 873 691", "-329 596 296 -663", "-2 404 8 765", "352 378 -977 529", "-424 87 180 632", "497 -787 -517 -244", "-907 -252 658 433", "963 -794 519 86", "342 655 -898 -130", "401 -139 -928 67", "-927 203 250 -42", "768 -73 516 32", "-906 923 -360 -747", "668 -178 717 869", "-204 -931 723 -554", "902 824 600 152", "-208 836 -612 -14", "-930 338 -925 -497", "-536 -458 737 478", "67 324 -124 88", "160 -525 -521 264", "-999 9 -783 387", "-258 31 -247 450", "-995 244 -500 914", "284 642 710 706", "301 885 168 -247", "651 -323 609 -731", "39 980 -987 -979", "-298 807 415 -927", "-145 -358 226 48", "594 37 -2 -545", "-463 313 275 -686", "257 -302 -428 979"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {454216, 106666};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> rectangles = {"-988 -985 -716 -713", "-979 677 -717 827", "-555 -801 -443 -349", "-415 521 -411 981", "-211 -854 -88 -248", "-280 118 -190 595", "120 -413 148 -98", "52 19 69 117", "591 -942 660 -904", "372 24 637 994", "673 -638 674 -295", "765 190 975 706"};
    vector<string> segments = {"-195 395 -596 -375", "-753 377 673 -638", "-288 -338 868 -308", "-421 -965 -648 -445", "-146 -591 463 -769", "-513 537 57 -463", "188 218 11 95", "454 -368 570 41", "948 526 401 -548", "480 528 -449 972", "-94 387 -210 -424", "-872 369 52 36", "946 -709 558 -370", "-107 321 -744 584", "-19 602 886 190", "-649 38 247 631", "-19 -333 290 -521", "-868 -113 -580 561", "688 -817 -266 -645", "930 342 -960 -832", "898 -622 -663 466", "-937 373 -949 698", "64 -912 -313 458", "140 -942 537 528", "-947 -889 -988 -720", "717 -539 -241 543", "-507 -609 867 508", "37 -961 667 339", "846 822 563 73", "649 488 901 237", "218 169 372 800", "620 -837 -215 -663", "-752 -107 662 -118"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {646786, 12669};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> rectangles = {"-85 746 918 891"};
    vector<string> segments = {"-71 -616 -935 744", "22 116 -998 -927", "163 -379 141 -418", "667 416 -711 -596", "-367 -544 918 752", "-232 -13 129 746", "-704 653 -714 453", "-291 -114 -586 136", "-624 -764 508 891", "201 -168 592 -251", "-583 -951 236 270", "-715 270 -226 -434", "-305 -863 -33 -502", "617 -553 689 746", "-524 -71 85 759", "152 -418 -516 558", "466 -472 667 -467", "750 -248 -637 -95", "-274 51 -761 426", "-467 -612 -247 33", "-878 -73 -815 -217", "-344 688 -803 689", "878 241 -11 495", "-140 -331 -84 144", "-887 -413 424 437", "-568 -150 -855 731", "-304 388 -189 956", "-325 -791 -707 -62", "924 -547 -957 -344", "732 425 -918 805"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {145435, 0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> rectangles = {"-943 -997 -726 -956", "-648 -668 -605 -623", "-964 -545 -814 -506", "-868 -373 -744 -230", "-858 -120 -659 -119", "-769 103 -760 149", "-770 305 -643 394", "-866 438 -811 582", "-802 691 -689 729", "-902 824 -825 989", "-446 -971 -403 -809", "-520 -793 -435 -686", "-343 -537 -292 -504", "-347 -314 -268 -241", "-334 -193 -233 -46", "-536 6 -289 74", "-559 266 -542 279", "-450 419 -265 441", "-583 729 -308 733", "-404 826 -236 962", "39 -936 54 -917", "-130 -764 158 -717", "90 -562 92 -513", "51 -379 67 -268", "-72 -129 91 -123", "-189 42 52 184", "-67 315 114 348", "-182 582 79 584", "-27 671 17 783", "-77 846 -74 920", "546 -920 584 -898", "451 -709 475 -664", "534 -557 549 -549", "341 -309 389 -217", "413 -76 512 -66", "469 55 475 172", "392 294 555 374", "489 497 558 543", "217 677 297 729", "321 811 535 979", "731 -933 830 -841", "635 -758 933 -614", "817 -552 976 -451", "649 -260 986 -245", "841 -121 926 -54", "625 6 899 26", "648 227 702 282", "747 453 909 558", "686 736 899 796", "883 839 976 840"};
    vector<string> segments = {"-10 -144 -166 -655", "881 453 412 -675", "644 -361 233 -562", "-309 921 -184 -801", "-824 -946 990 -412", "-95 -11 -77 846", "714 115 281 679", "-3 -366 885 942", "-151 -257 969 -984", "-659 612 -351 -569", "-947 -174 336 532"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27008, 172606};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> rectangles = {"-972 -875 -910 -784", "-943 -680 -928 -575", "-906 -488 -861 -349", "-844 -245 -649 -218", "-934 -88 -822 -55", "-828 203 -788 314", "-928 375 -735 527", "-964 668 -744 755", "-645 813 -637 954", "-585 -964 -442 -830", "-595 -751 -253 -588", "-316 -541 -305 -538", "-599 -269 -341 -193", "-509 28 -291 33", "-423 197 -276 308", "-547 417 -469 430", "-454 657 -359 727", "-548 791 -220 976", "28 -959 86 -828", "73 -710 91 -631", "-55 -505 -40 -355", "-59 -194 60 -166", "168 -99 185 -60", "-170 195 21 213", "117 403 175 455", "-18 715 92 723", "42 821 184 866", "386 -834 531 -788", "538 -755 567 -603", "346 -384 441 -368", "327 -330 412 -199", "239 -3 517 91", "319 173 449 272", "441 437 588 505", "436 612 583 729", "243 820 505 971", "778 -959 868 -801", "826 -658 863 -603", "737 -490 775 -462", "863 -263 996 -227", "656 85 772 102", "601 225 879 325", "778 367 957 387", "643 695 724 699", "618 809 971 968"};
    vector<string> segments = {"-316 854 -412 33", "831 -821 -379 -615", "-326 -250 -882 811"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {130646, 57577};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> rectangles = {"-830 -641 -706 469", "-482 -985 -370 -654", "121 -782 222 520", "635 -933 823 -1"};
    vector<string> segments = {"-806 -269 476 942", "667 -846 -159 -794", "694 257 199 98", "594 -886 -988 -937", "144 -466 -882 -117", "332 -844 -861 709", "697 105 493 -220", "-880 -658 -367 948", "621 546 -274 -321", "-731 895 -753 -70", "-840 -941 739 -142", "472 -771 -923 408", "-351 -66 -496 -755", "-938 -394 222 -748", "-20 -233 206 -951", "-498 292 563 -332"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {444358, 37072};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> rectangles = {"-871 -735 -869 -500", "-921 222 -860 845", "-696 -873 -573 -313", "-703 118 -607 315", "-363 -899 -338 -689", "-486 569 -357 648", "-289 -787 -139 -548", "-297 548 -209 689", "63 -557 105 -516", "20 176 28 951", "282 -577 315 -96", "199 382 208 905", "353 -659 398 -629", "355 751 535 797", "560 -742 625 -338", "573 159 651 985", "862 -851 863 -148", "849 194 931 213"};
    vector<string> segments = {"-417 -717 355 765", "-821 -912 690 973", "-168 692 -714 416", "-366 822 -401 -474", "615 162 827 403", "434 643 -590 -497", "949 850 661 -627", "-396 -23 913 124", "914 -677 -940 -619", "-488 612 -953 644", "46 -130 984 429", "-234 -803 -422 -983", "-251 -250 -455 -350", "-179 434 553 -167", "398 726 -879 -592", "160 -946 863 786", "202 607 -515 983", "973 -722 -293 21", "-992 -812 -38 68", "-199 130 -139 -78", "245 -717 909 80", "589 -109 -684 296", "-568 730 -277 -361", "-39 -880 -545 224", "506 -694 499 -555", "-339 173 -315 424", "-427 897 -44 651", "-372 -39 591 -365", "229 828 528 -192", "735 -850 -56 521", "-602 -486 -363 -799", "-425 681 -441 444", "-657 -133 -905 -346", "618 -155 -392 -4", "-875 134 -280 829", "726 791 353 -654", "-922 88 -227 372", "-842 -914 304 -473", "945 561 283 -606", "-545 567 218 -872", "430 -863 -553 427", "604 -304 207 -883", "466 458 199 395", "326 -473 4 -534"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {199060, 120427};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> rectangles = {"-781 -864 -726 -771", "-753 -600 -704 -506", "-885 -387 -748 -267", "-890 -138 -759 -48", "-898 26 -755 218", "-838 384 -738 427", "-997 512 -728 681", "-947 922 -881 979", "-581 -900 -405 -841", "-628 -671 -508 -522", "-641 -484 -439 -437", "-491 -234 -443 -130", "-471 32 -443 124", "-613 343 -600 406", "-507 592 -472 655", "-540 850 -526 866", "-246 -911 -128 -816", "-266 -738 -190 -663", "-113 -454 -74 -401", "-174 -158 -134 -156", "-232 26 -12 143", "-217 294 -16 392", "-125 663 -89 733", "-106 869 -84 981", "45 -885 314 -771", "9 -639 254 -543", "159 -434 238 -325", "224 -50 305 -36", "9 129 297 154", "181 389 199 436", "254 593 309 689", "119 842 150 901", "520 -940 581 -865", "473 -613 490 -519", "509 -469 538 -446", "582 -201 636 -170", "369 39 439 135", "455 258 544 437", "482 554 601 719", "421 980 426 988", "720 -811 984 -809", "931 -656 981 -582", "716 -485 812 -311", "789 -251 870 -13", "760 25 923 180", "825 336 899 405", "757 606 783 618", "977 844 986 947"};
    vector<string> segments = {"-741 670 -964 -221", "-546 -675 -387 -131", "537 811 -20 501", "295 -256 792 -944", "-748 212 297 -933", "-630 -249 -133 -816", "725 670 -745 -796", "-680 -372 -307 -193", "968 -732 -710 -281", "531 -888 957 154", "-750 -943 -134 -157", "-855 -782 -142 -156", "-164 -968 -774 -350", "-878 -793 553 45", "354 -859 -502 -762", "721 648 453 662", "-159 -892 -539 -317", "1 839 199 401", "134 972 -86 370", "472 -637 528 579"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {122134, 213265};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> rectangles = {"-948 -956 -824 -909", "-788 -741 -674 -578", "-752 -541 -513 -470", "-975 -143 -880 -127", "-796 -102 -790 62", "-694 134 -547 298", "-690 359 -653 514", "-845 624 -518 651", "-743 882 -734 918", "-283 -928 -252 -904", "-209 -767 -63 -592", "-496 -426 -436 -415", "-471 -332 -333 -138", "-443 -52 -165 82", "-251 299 -10 321", "-321 388 -181 516", "-499 586 -147 693", "-200 891 -95 900", "274 -1000 405 -868", "85 -765 108 -636", "251 -480 351 -445", "63 -310 263 -176", "159 -68 240 103", "221 148 457 214", "3 362 378 465", "47 730 491 771", "80 820 274 873", "781 -883 846 -786", "560 -763 902 -579", "626 -503 663 -408", "525 -297 574 -259", "917 -102 952 51", "580 298 618 306", "656 448 900 494", "534 642 742 733", "629 941 792 992"};
    vector<string> segments = {};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> rectangles = {"-953 250 -844 773", "-415 618 -229 951", "-90 -713 57 947", "381 378 497 623", "735 -112 869 153"};
    vector<string> segments = {"577 -142 779 934", "-745 79 -953 259", "-696 448 158 224", "46 -439 413 623", "-232 47 182 -521", "-118 415 523 -151", "518 -835 831 577", "397 -229 -8 -713", "-944 -170 -90 -241", "-568 -308 -272 -396", "-515 840 869 59"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {244020, 182875};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> rectangles = {"-917 -985 -887 -802", "-929 -460 -785 -186", "-931 172 -893 449", "-961 600 -893 747", "-510 -763 -446 -662", "-664 -272 -505 -146", "-629 58 -542 423", "-653 853 -597 943", "-296 -829 -197 -567", "-371 -221 -299 -85", "-359 30 -322 221", "-229 528 -156 669", "-58 -913 93 -848", "58 -498 81 -488", "-75 60 -40 319", "40 803 70 859", "221 -736 396 -556", "375 -501 408 -447", "207 239 345 465", "307 576 408 938", "543 -919 695 -862", "438 -396 503 -86", "564 418 626 420", "531 698 603 849", "743 -996 810 -696", "723 -281 809 -251", "821 170 936 370", "771 632 874 847"};
    vector<string> segments = {"865 676 -400 940", "776 192 291 287", "-304 647 122 -168", "-86 -456 -392 70", "618 -176 -247 -866", "-862 364 -359 74", "15 -170 662 -667", "982 -686 18 241", "405 403 93 -913", "342 -33 -312 -968", "-470 -542 -850 -364", "938 400 -97 198", "-915 -927 -426 125", "-897 -992 68 231", "553 -463 -362 -165", "884 414 -178 -232", "698 646 786 -680", "-450 206 722 -598", "-768 -222 794 -996", "-346 -391 -997 -207", "782 66 -478 196", "964 895 -861 -377"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {108071, 237564};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> rectangles = {"-951 -739 -477 -169", "-881 177 -464 532", "169 -684 224 -32", "134 369 155 467", "494 -742 510 -440", "755 253 796 523"};
    vector<string> segments = {"-517 855 666 147", "378 -281 -269 7", "127 -921 60 -513", "824 203 780 523", "403 -914 695 -71", "341 422 83 204", "673 -397 755 483", "-18 -696 564 -128", "870 314 854 543", "458 -207 945 -819", "978 -536 -935 -501", "699 -591 -878 716", "705 -391 499 -742", "-472 -312 -291 -750", "687 -91 -594 532", "131 -365 83 674", "-981 407 -834 -169", "-594 -574 306 625", "-368 507 755 408", "-281 -669 795 818", "-7 -619 781 -32", "-795 673 -433 -169", "-21 -285 224 -598", "842 -985 170 -253", "-456 867 -591 -502", "937 363 691 -31", "53 -44 -383 -665", "-721 -99 -281 -354", "-124 162 -464 -71", "-467 -74 123 -422", "221 -379 494 -648", "-250 -224 -881 117"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {306040, 165995};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> rectangles = {"-900 -99 -820 727", "-597 -311 -549 797", "-216 -931 -40 745", "119 -654 167 -178", "338 -61 562 607", "779 60 970 324"};
    vector<string> segments = {"813 881 96 -415", "-737 224 849 60", "962 -260 409 -903", "-929 511 366 21", "-680 643 -207 -205", "-940 787 85 74", "-612 430 141 -178", "7 716 931 -752", "-784 124 568 314", "-999 148 670 -543", "-817 -975 494 -282", "-448 -211 -597 282", "197 -54 953 -15", "-442 446 632 -45", "-472 -432 -339 -592", "-154 195 -792 489", "369 712 715 906", "287 150 -28 620", "430 457 -518 -871", "686 -801 525 -621", "-435 951 140 448", "569 -755 669 835", "-719 557 -608 -903", "-104 -914 -782 -63", "-863 247 -241 -625", "-36 -233 320 653", "781 -156 -907 920", "404 415 383 915", "-431 822 774 -958", "-576 -537 665 874", "896 -47 -94 829", "-370 -663 -313 942", "-807 712 442 -575", "-581 372 -607 465", "-993 191 -799 -396", "-845 -342 -147 -7", "240 -273 481 -61", "-64 -845 285 65", "-979 -715 -198 523", "799 -425 970 202", "-393 633 331 469"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {563872, 73272};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> rectangles = {"-11 -1000 765 -795", "-870 -334 -822 -264", "-603 -123 -46 68", "-429 350 79 351", "-456 603 696 978"};
    vector<string> segments = {"-795 -811 893 -662", "-482 -879 714 228", "-718 752 -288 -589", "481 -397 518 -264", "404 247 -609 555", "-416 -666 -432 773", "725 665 604 356", "-392 -417 -349 661", "504 211 -87 -998", "-14 -690 -519 -677", "-452 -809 -623 266", "82 -307 -19 -492", "-656 -742 -710 -597", "-208 563 732 737", "-367 234 -793 633", "30 -460 -453 669", "-540 426 -993 998", "-586 -914 -156 -490", "721 -131 -332 48", "-658 125 -706 -107", "-281 -74 -996 -271", "898 -841 -134 -490", "303 -86 955 -747", "278 714 -196 -227", "-272 -205 -791 -61", "-362 244 -832 -334", "23 -748 597 449", "-122 -478 -586 884", "-183 428 499 -226", "290 843 -976 800", "-331 -697 744 762", "565 645 279 101", "710 -885 -220 350", "-302 -864 -943 -629", "-773 -139 -417 -837", "233 -354 88 -506", "613 -478 -424 140", "-364 776 620 219", "-544 -459 -666 549", "-590 -545 967 905", "32 967 -715 304", "770 -405 -845 -966", "216 -924 517 -16", "257 667 -921 -561", "228 -731 -942 200", "-42 -745 30 -790"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {697467, 3868};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> rectangles = {"-549 -968 -119 -944", "-486 -775 -306 -726", "-949 -433 -466 -382", "-840 -309 -604 -263", "-83 -36 -63 61", "-668 221 -316 320", "-784 333 -316 417", "-660 617 -221 724", "-994 904 -53 980", "471 -935 616 -823", "477 -682 980 -673", "264 -467 868 -354", "283 -334 965 -189", "629 -16 955 -5", "628 170 864 228", "217 364 988 462", "379 611 907 639", "480 826 964 961"};
    vector<string> segments = {"877 248 108 -565", "-527 -68 699 -41", "-745 -185 659 339", "-130 27 921 368", "-94 -972 973 754", "-192 444 92 -117", "-353 -787 -493 -963", "994 736 988 401", "848 -716 522 -695", "-803 343 -534 -45", "597 641 -287 -106", "-186 -71 -25 349", "794 -518 -205 708", "-906 -872 357 242", "-559 -152 47 -253", "-945 -216 -365 -4", "497 -580 -555 118", "772 244 -328 -742", "312 -251 -749 803", "-218 818 -483 771", "-908 -635 -539 -558", "771 -561 929 -600", "847 -66 404 319", "-307 683 484 -712", "-491 -873 570 -797", "89 195 651 -696", "-538 17 -217 611", "780 691 -119 -957", "452 500 636 -245", "934 118 490 -429", "464 136 117 544", "-923 337 -956 -265", "-788 -739 903 -599", "108 -438 -878 -384", "246 728 -267 747", "-545 606 -982 -278", "138 621 405 947", "-580 773 112 -463", "-757 532 753 462", "25 281 662 -563", "-181 721 -29 588", "-601 339 -660 642", "-827 -952 416 72", "-898 -912 320 -200", "194 681 74 340", "-968 852 212 -288", "173 771 890 -334", "-237 576 930 44", "-25 842 607 -677"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {377285, 68846};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> rectangles = {"-911 -541 -851 -61", "-939 566 -849 879", "-580 -769 -475 -58", "-575 837 -484 953", "-233 -222 -172 -78", "-248 170 -170 836", "-5 -205 46 -35", "-42 21 42 815", "139 -520 198 -145", "165 440 171 833", "509 -289 568 -49", "474 423 579 434", "909 -635 957 -534", "812 48 822 967"};
    vector<string> segments = {"50 -396 -330 49", "593 -806 310 808", "-33 102 -361 -880", "-853 -533 103 -392", "176 -404 -293 -675", "-294 -782 -391 -681", "-732 28 -236 157", "-27 937 -340 -129", "-680 -407 -167 -298", "206 -613 105 -93", "864 -367 576 -407", "-257 361 918 694", "995 261 94 -936", "-47 399 390 -613", "940 680 -773 -605", "41 -328 -773 111", "946 545 425 -609", "164 -910 698 -197", "-598 881 -900 716", "156 348 368 94", "-606 -699 -393 -617", "273 658 35 -802", "784 220 -979 186", "-117 132 488 -276", "903 -802 787 -834", "-893 -410 957 -612", "-156 174 -218 -222", "971 -609 -769 -448", "-163 -89 -971 192"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {145791, 151783};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> rectangles = {"-853 -927 -844 -592", "-964 79 -838 243", "-912 520 -822 925", "-590 -887 -584 -516", "-634 -229 -596 -217", "-652 805 -630 976", "-366 -878 -359 -749", "-529 -303 -515 -7", "-444 739 -371 749", "-269 -905 -122 -564", "-243 -245 -232 -204", "-278 459 -210 867", "-87 -783 -61 -629", "-93 41 1 206", "-62 737 35 744", "118 -941 319 -838", "249 -217 314 141", "127 508 140 739", "463 -968 549 -549", "437 -237 461 -220", "468 964 526 973", "600 -901 743 -856", "613 43 731 300", "563 704 769 909", "842 -935 943 -463", "815 -316 816 -298", "863 406 987 732"};
    vector<string> segments = {"265 -931 700 583", "-512 802 -504 -527", "130 942 -302 -499", "-984 -913 -230 215", "-736 -420 35 738", "-604 553 -214 -101", "-300 -971 498 505", "384 -745 -898 -725", "-911 -591 110 -851", "-619 -139 -142 -747", "143 -617 -209 -906", "-724 -162 -621 -869", "-229 -320 396 -263", "-135 447 582 520", "-770 510 606 994", "446 -161 625 -305", "-85 446 -792 -513", "902 541 -45 856", "309 385 348 198", "416 -229 -381 41", "-746 -131 -187 -391", "-512 -27 -204 -200", "388 26 910 -403", "78 -94 342 998", "-915 420 405 155", "397 627 863 663", "490 -634 -348 638", "-580 492 -630 898", "-571 1000 -952 395", "523 937 793 81", "-256 -20 621 -193", "741 225 -556 -129", "-989 -393 53 739", "338 -228 -759 -141", "-517 94 -763 -263", "-713 985 -710 131"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {147288, 194338};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> rectangles = {"-910 -734 -653 -574", "-670 -1 -656 858", "-211 -986 -69 -376", "-230 69 -19 698", "-1 -817 54 -404", "328 174 380 283", "607 -966 833 -92", "741 17 811 390"};
    vector<string> segments = {"-406 -660 -790 608", "-170 363 -993 -126", "-825 -990 323 -796", "699 451 -475 860", "908 -180 -179 271", "920 -412 -584 887", "-870 478 -670 3", "-203 -793 81 821", "-926 216 13 492", "707 -326 -231 657", "-373 938 344 251", "-818 492 677 -966", "924 252 690 -318", "-968 271 -897 236", "-717 709 -898 623", "462 75 104 703", "376 -421 94 959", "83 -445 -370 -630", "-171 -380 981 940", "752 -867 -848 -757", "714 454 -853 -574", "957 920 703 -591", "247 758 667 -813", "369 345 799 -788"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {422531, 101971};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> rectangles = {"-871 -990 -837 -914", "-790 -521 -729 -467", "-928 -166 -923 -13", "-956 429 -801 551", "-905 719 -812 755", "-590 -876 -550 -854", "-531 -570 -353 -315", "-524 -97 -342 189", "-580 229 -411 575", "-538 831 -416 975", "-271 -980 -121 -660", "-208 -566 -127 -350", "-180 -26 -111 -18", "-188 360 -159 531", "-321 816 -5 847", "65 -947 112 -724", "10 -389 82 -249", "47 -77 298 4", "12 465 264 472", "157 815 283 914", "588 -739 607 -718", "376 -494 402 -281", "591 -195 655 15", "368 465 373 572", "381 949 511 961", "685 -724 706 -657", "962 -544 968 -260", "842 -71 944 91", "812 330 994 559", "800 604 845 894"};
    vector<string> segments = {"427 913 -630 -421"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 53816};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> rectangles = {"-903 -775 -689 -688", "-817 -170 -700 209", "-813 576 -704 972", "-384 -566 -225 -545", "-382 -167 -314 87", "-561 893 -292 982", "120 -570 158 -445", "-5 -186 109 93", "-87 736 98 991", "229 -877 242 -762", "312 -262 315 -100", "338 687 488 818", "807 -726 810 -573", "829 -260 849 198", "641 420 784 436"};
    vector<string> segments = {"-542 -348 616 76", "-596 -387 -974 -406", "557 690 90 736", "587 1 -813 579", "-698 880 -584 -916", "616 993 -424 -934", "-585 906 794 835", "55 303 -933 -472", "-264 -254 -758 -739", "-34 -608 -746 297", "-927 801 -544 738", "452 974 -759 -421", "-612 619 701 284", "-675 -94 105 770", "193 -775 675 281", "-740 -122 179 682", "598 -896 310 589", "-91 -174 145 -154", "-159 170 242 -218", "-988 242 -623 -426", "-675 731 735 -842", "-914 -852 -511 -954", "-671 -511 -603 -471", "469 -786 836 -938", "487 -415 -559 134", "-801 827 922 -859", "683 -23 432 645", "-39 278 -933 457", "673 -149 233 -877", "16 882 -388 -276", "22 -552 234 -877"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {153300, 97503};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> rectangles = {"-839 -948 -802 -763", "-979 -581 -768 -541", "-958 -375 -688 -258", "-803 -64 -788 -9", "-951 261 -793 369", "-973 543 -692 564", "-944 743 -695 898", "-574 -925 -515 -866", "-518 -507 -365 -454", "-586 -213 -559 -199", "-663 57 -503 60", "-647 156 -483 382", "-665 649 -662 650", "-625 860 -568 964", "-263 -857 -230 -756", "-320 -598 -45 -483", "-295 -302 -129 -182", "-243 61 -190 93", "-255 212 -240 254", "-261 473 -63 574", "-245 912 -244 957", "120 -978 173 -776", "6 -479 100 -448", "211 -402 227 -349", "41 -64 121 46", "190 174 207 380", "145 457 328 565", "62 822 74 933", "479 -857 610 -730", "387 -652 473 -576", "340 -396 524 -314", "358 -107 535 45", "517 368 576 400", "534 507 538 653", "376 771 403 989", "776 -986 792 -948", "762 -694 814 -582", "818 -373 892 -356", "720 -83 770 130", "928 245 970 363", "742 660 795 670", "685 827 712 913"};
    vector<string> segments = {"-505 478 267 -833", "450 -685 -337 564", "-716 -25 -272 -351", "-578 -968 -588 -266", "-225 -990 -790 378", "-883 -693 -991 842", "870 -742 277 -829", "-927 -538 -900 -521", "363 -705 534 507", "-363 100 -974 380", "990 686 -893 253", "657 715 608 -499", "67 797 -480 743", "-892 923 246 -399", "537 -299 -767 -667", "26 -999 -518 -491", "104 229 -945 216", "-855 191 683 809", "-53 222 -523 210", "-590 -525 -518 -496", "-339 994 -468 275"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37064, 265728};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> rectangles = {"-652 -837 -629 -672", "-917 -547 -874 -437", "-879 -126 -564 -107", "-732 39 -553 139", "-930 393 -833 431", "-785 707 -608 975", "-369 -812 -296 -702", "-242 -606 -180 -491", "-205 -197 -91 -97", "-480 60 -4 266", "-263 444 -116 502", "-329 735 -263 821", "132 -844 236 -761", "35 -583 277 -377", "353 -266 387 -263", "133 16 234 270", "290 362 357 394", "23 691 226 932", "931 -983 942 -842", "553 -399 708 -388", "746 -310 838 -125", "549 67 936 117", "621 356 836 479", "817 700 899 756"};
    vector<string> segments = {"-378 -758 -416 -471", "263 984 -358 446", "820 680 885 -988", "-498 900 -603 -107", "879 807 -321 -933", "-585 -536 -257 148", "559 -958 -517 -740", "-264 694 -208 -713", "591 -76 -967 211", "811 -784 -768 -570", "-536 -634 -725 -906", "-241 -28 -936 718", "491 -269 473 -549", "-205 -100 -675 674", "631 -72 -783 386", "937 757 405 -603", "-974 -655 -423 568", "-536 -929 -260 353", "752 -823 610 647", "-48 -837 340 -665", "930 540 152 810", "284 -853 -314 -537", "-528 892 -372 994", "-378 -246 -999 395", "3 -705 80 -141", "676 -318 197 -377", "471 460 903 -753", "-186 395 806 -626", "262 -528 46 -623", "545 469 410 329", "-685 -716 212 770", "-43 896 -840 609", "-325 -62 906 -720", "-486 332 -180 -496", "-564 698 -537 729", "-408 732 905 -337", "914 -739 523 760", "-860 -509 -184 -606", "726 -62 -649 551", "-897 36 -753 456", "903 -207 -265 -987"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {196831, 176570};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> rectangles = {"0 0 2 2"};
    vector<string> segments = {"0 0 1 1"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 0};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> rectangles = {"0 0 2 2"};
    vector<string> segments = {"0 0 2 2"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> rectangles = {"1 1 2 2"};
    vector<string> segments = {"0 1 3 1"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> rectangles = {"1 1 2 2"};
    vector<string> segments = {"1 0 3 0"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> rectangles = {"1 1 2 2"};
    vector<string> segments = {"0 2 2 0"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> rectangles = {"1 1 2 2"};
    vector<string> segments = {"2 0 0 2"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> rectangles = {"1 1 2 2"};
    vector<string> segments = {"0 1 2 3"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> rectangles = {"1 1 2 2"};
    vector<string> segments = {"2 3 0 1"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> rectangles = {"1 1 2 2"};
    vector<string> segments = {"2 3 3 1"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> rectangles = {"1 1 2 2"};
    vector<string> segments = {"1 0 3 2"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> rectangles = {"-891 -869 -853 -842", "-857 -399 -744 -231", "-910 -55 -856 36", "-844 287 -749 548", "-809 627 -782 954", "-704 -803 -641 -663", "-684 -330 -558 -268", "-702 -40 -545 98", "-660 386 -528 586", "-697 855 -571 962", "-414 -678 -168 -648", "-401 -559 -383 -441", "-387 5 -263 51", "-389 220 -194 448", "-361 673 -175 753", "68 -912 95 -742", "-24 -521 24 -227", "30 -70 38 -2", "-111 297 14 356", "7 797 27 809", "368 -709 418 -614", "247 -453 344 -251", "385 -111 417 -33", "275 202 290 421", "265 604 278 921", "524 -861 655 -640", "555 -336 576 -305", "429 28 578 35", "480 324 704 520", "444 632 665 842", "932 -954 981 -931", "930 -537 939 -455", "735 -81 787 192", "830 316 869 589", "808 629 971 666"};
    vector<string> segments = {"-898 -383 126 12", "283 -716 545 -918", "-299 333 54 138", "-901 129 706 488", "-8 690 -290 955", "-590 -771 476 257", "-528 -518 651 -139", "-984 -848 -380 459", "-358 924 31 -617", "817 -904 -208 -401", "-657 -211 275 -407", "-427 -699 -460 876", "403 -612 -675 563", "-782 -197 845 816", "-492 -771 -342 -83", "-650 -208 393 -614", "-67 -290 135 -610", "68 650 -366 560", "-482 608 -525 516", "548 460 -95 -436", "461 -457 -491 -846", "-672 728 -764 548", "-301 633 -613 278", "-496 126 940 576", "-350 -378 -671 1000", "148 82 275 211", "815 872 -810 -362", "160 -367 -754 569", "-721 941 -405 -57", "-792 582 804 563", "-934 -115 -641 -737"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {126942, 241757};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> rectangles = {"1 1 2 2", "1 4 2 5", "5 5 6 7", "7 7 9 9"};
    vector<string> segments = {"1 2 1 5"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> rectangles = {"1 1 3 3", "4 4 5 5", "6 6 7 7", "8 8 9 9", "51 22 344 352", "-124 -235 -12 -1"};
    vector<string> segments = {"-104 -103 202 201"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {122898, 7};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> rectangles = {"-1000 -1000 1000 1000"};
    vector<string> segments = {"-525 245 222 243"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4000000, 0};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> rectangles = {"1 1 2 2", "3 2 5 4", "6 3 9 6", "8 8 9 9", "100 100 301 101", "-111 -4 -7 -1"};
    vector<string> segments = {"0 1 8 9", "7 4 8 5"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 6};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> rectangles = {"1 1 2 2", "1 4 2 5", "5 5 6 7", "7 7 9 9"};
    vector<string> segments = {"1 2 1 5", "1 1 5 5"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> rectangles = {"0 0 500 500"};
    vector<string> segments = {"500 200 500 400"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 250000};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> rectangles = {"0 0 1 1"};
    vector<string> segments = {"1 2 1 3"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> rectangles = {"2 2 8 4"};
    vector<string> segments = {"1 3 0 3"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> rectangles = {"-1000 -1000 1000 1000"};
    vector<string> segments = {"-1000 -1000 1000 1000"};
    RectangleCrossings* pObj = new RectangleCrossings();
    clock_t start = clock();
    vector<int> result = pObj->countAreas(rectangles, segments);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4000000};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22679947&rd=10791&pm=8051
********************************************************************************
#include <algorithm> 
#include <string> 
#include <vector> 
 
#include <ctype.h> 
 
#include <stack> 
#include <queue> 
 
#include <map> 
 
#include <cmath> 
 
#include <sstream> 
 
using namespace std; 
 
 
struct point { int x,y; }; 
 
int ccw(point p0,point p1,point p2) 
{ 
  int dx1=p1.x-p0.x, 
    dy1=p1.y-p0.y, 
    dx2=p2.x-p0.x, 
    dy2=p2.y-p0.y; 
  if(dy1*dx2>dx1*dy2) 
    return -1; 
  if(dy1*dx2<dx1*dy2) 
    return 1; 
  if(dx1*dx2<0 || dy1*dy2<0) 
    return 1; 
  if(dx1*dx1+dy1*dy1 > dx2*dx2+dy2*dy2) 
    return -1; 
  return 0; 
} 
 
int intersect(point p0,point p1,point p2,point p3) 
{ 
  return ccw(p0,p2,p1)*ccw(p0,p3,p1)<=0 && 
    ccw(p2,p0,p3)*ccw(p2,p1,p3)<=0; 
} 
 
struct PPP { 
  point p0, p1; 
}; 
 
bool inside(const PPP& ppp, const point& p) { 
  return ppp.p0.x < p.x && ppp.p1.x > p.x && ppp.p0.y < p.y && ppp.p1.y > p.y; 
} 
 
int area(const PPP& p) { 
  int dy = abs(p.p1.y - p.p0.y); 
  int dx = abs(p.p1.x - p.p0.x); 
  return dx * dy; 
} 
 
class RectangleCrossings { 
public: 
  vector <int> countAreas(vector <string> rectangles, vector <string> segments) { 
    vector <int> sol = vector <int>(2, 0); 
    vector<PPP> ls; 
    for ( int i = 0; i < segments.size(); ++i ) { 
      PPP ppp; 
      sscanf(segments[i].c_str(), "%d%d%d%d", &ppp.p0.x, &ppp.p0.y, &ppp.p1.x, &ppp.p1.y); 
      ls.push_back(ppp); 
    } 
    for ( int i = 0; i < rectangles.size(); ++i ) { 
      PPP ppp; 
      sscanf(rectangles[i].c_str(), "%d%d%d%d", &ppp.p0.x, &ppp.p0.y, &ppp.p1.x, &ppp.p1.y); 
      bool in = false; 
      bool in2 = false; 
      PPP p0, p1, p2, p3; 
      p0.p0 = ppp.p0; 
      p0.p1 = ppp.p0; p0.p1.y = ppp.p1.y; 
 
      p1.p0 = ppp.p0; 
      p1.p1 = ppp.p0; p1.p1.x = ppp.p1.x; 
 
      p2.p0 = ppp.p1; 
      p2.p1 = ppp.p1; p2.p1.y = ppp.p0.y; 
 
      p3.p0 = ppp.p1; 
      p3.p1 = ppp.p1; p3.p1.x = ppp.p0.x; 
 
      for ( int j = 0; !in && j < ls.size(); ++j ) { 
        if ( inside(ppp, ls[j].p0) ) in = true; 
        else if ( inside(ppp, ls[j].p1) ) in = true; 
        else if ( !in2 ) { 
          in2 = intersect(p0.p0, p0.p1, ls[j].p0, ls[j].p1) || 
            intersect(p1.p0, p1.p1, ls[j].p0, ls[j].p1) || 
            intersect(p2.p0, p2.p1, ls[j].p0, ls[j].p1) || 
            intersect(p3.p0, p3.p1, ls[j].p0, ls[j].p1); 
        } 
      } 
      if ( in ) sol[0] += area(ppp); 
      else if ( in2 ) sol[1] += area(ppp); 
    } 
    return sol; 
  } 
 
  
}; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/