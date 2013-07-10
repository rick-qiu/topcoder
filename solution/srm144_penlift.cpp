/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1649
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

class PenLift {
public:
    int numTimes(vector<string> segments, int n);
};

int PenLift::numTimes(vector<string> segments, int n) {
    int ret;
    return ret;
}


int test0() {
    vector<string> segments = {"0 0 0 1"};
    int n = 1;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
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
    vector<string> segments = {"0 0 0 1", "0 0 -1 0", "0 0 1 0"};
    int n = 1;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> segments = {"0 0 0 1", "0 0 -1 0", "0 0 1 0"};
    int n = 2;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> segments = {"0 0 0 1", "0 0 -1 0", "0 0 1 0", "0 0 0 1", "0 2 0 3", "0 2 -1 2", "0 2 1 2", "0 2 0 3"};
    int n = 1;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> segments = {"0 0 0 1", "0 1 1 1", "0 1 10 1", "5 1 5 2", "5 1 5 10", "5 10 10 10"};
    int n = 1;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> segments = {"257 -438 257 -623", "417 886 417 347", "376 -264 33 -264", "299 759 962 759", "576 421 576 -239", "12 -777 -471 -777", "44 255 44 802", "-937 698 -937 979", "-225 783 -165 783", "242 600 242 474", "472 -570 693 -570", "158 -271 158 -772", "-132 -825 -985 -825", "-984 -755 294 -755", "787 -447 -348 -447", "356 762 82 762", "-671 -980 -671 50", "-561 -229 875 -229", "571 70 571 -835", "17 387 17 -743", "83 -897 -346 -897", "722 70 -773 70", "791 336 924 336", "-627 -13 651 -13", "883 -894 883 806", "877 163 -619 163", "-755 510 -755 263", "866 819 866 -691", "-934 601 -934 -469", "-890 -383 524 -383", "609 354 609 13", "52 -373 52 -894", "-855 -639 -855 -85", "-691 542 -434 542", "996 -990 996 538", "758 -226 758 978"};
    int n = 999901;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> segments = {"-360 672 -172 672", "-336 -930 -961 -930", "688 4 688 -967", "689 -237 -701 -237", "100 -867 100 -578", "-758 889 -272 889", "-136 -314 -876 -314", "-901 -640 35 -640", "980 -639 -364 -639", "156 45 610 45", "-245 569 -245 39", "850 40 -215 40", "-687 596 -687 -660", "-509 666 -509 457", "625 -309 372 -309", "-582 -785 836 -785", "-914 131 -914 58", "903 -339 903 -738", "-318 709 -318 71", "-635 742 -635 6", "-49 246 -49 917", "694 -27 -355 -27", "-931 390 143 390", "40 -132 40 319", "346 637 643 637", "945 952 573 952", "-102 898 -102 766", "979 615 979 113", "-761 465 -761 995", "10 398 -182 398", "907 -688 907 -222", "-307 909 -307 966", "331 -520 -525 -520", "132 267 -530 267", "-237 -93 -237 -932", "907 -685 653 -685", "796 501 796 -419", "663 -471 663 155", "23 388 23 -592", "44 401 -478 401", "-335 -89 -755 -89", "99 -437 -475 -437", "486 5 486 -195", "381 -954 -521 -954", "-957 -909 -957 260", "663 -264 663 -582", "219 954 -868 954"};
    int n = 999701;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> segments = {"-236 -540 203 -540", "-209 361 -209 -372", "559 -153 559 -876", "318 -498 318 354", "-887 -619 -887 -956", "382 -139 909 -139", "-186 732 -379 732", "295 -45 295 901", "-777 -529 -937 -529", "-533 -919 -533 831", "-75 -798 -339 -798", "158 841 158 -921", "-830 919 -340 919", "-373 823 -373 482", "641 -569 -160 -569", "603 275 -891 275", "403 -568 403 -1000", "700 -251 700 -756", "678 -517 796 -517", "861 889 302 889", "695 -649 -684 -649", "395 569 826 569", "495 -456 495 -738", "48 195 48 202", "-518 -536 398 -536", "16 733 -985 733", "830 900 -713 900", "23 -627 23 -462", "730 785 -645 785", "-327 -567 -299 -567", "-759 -587 513 -587", "638 -842 638 -14", "-111 -208 -111 -596", "211 847 211 527", "-789 379 394 379", "-452 996 705 996", "-876 -10 -876 -359", "-587 584 -587 -284", "-48 -28 -48 -528", "-928 630 -928 -556", "434 251 434 -666", "866 -428 866 454", "359 -953 -406 -953", "962 -888 962 727"};
    int n = 999501;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> segments = {"-956 824 -745 824", "-637 -184 -637 -380", "-159 792 70 792", "344 367 -847 367", "-239 640 -239 621", "468 -490 -785 -490", "-929 40 -131 40", "179 347 179 -764", "908 -688 908 -92", "292 -430 350 -430", "-583 840 -583 231", "-132 792 -781 792", "-262 -683 -262 -762", "893 -178 893 480", "375 158 375 502", "696 101 696 -228", "-51 -229 -51 659", "42 123 -517 123", "690 834 690 977", "827 152 827 388", "-801 -555 -801 -194", "115 -61 115 -57", "553 -920 528 -920", "719 306 452 306", "778 -280 -244 -280", "744 212 744 -120", "98 -856 -476 -856", "519 -276 519 -262", "-614 -499 -614 35", "-20 95 511 95", "543 623 543 -286", "933 -390 -793 -390", "-898 -461 -898 -319"};
    int n = 999301;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> segments = {"513 -25 513 387", "-996 908 -996 401", "-224 844 -70 844", "535 -424 535 282", "-326 337 -326 -495", "95 64 95 828", "672 520 -827 520", "-371 914 -371 -152", "371 -346 635 -346", "-835 132 -835 -697", "-835 487 -835 -271", "-741 985 -741 -549", "-363 -442 -363 -870", "-933 -646 -933 461", "769 498 769 57", "400 548 400 515", "850 781 850 -133", "27 721 27 -590", "150 -867 -482 -867", "809 -32 706 -32", "979 -727 -13 -727", "-80 -561 -879 -561", "315 -474 315 576", "805 405 805 376", "303 -116 303 -347", "387 -666 387 119", "-481 685 -205 685", "65 990 33 990", "-488 585 -156 585", "971 962 971 941", "-637 577 -637 -605"};
    int n = 999101;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> segments = {"-883 -382 -883 685", "57 692 57 338", "-24 271 388 271", "-718 255 -718 -562", "-491 -167 -491 -528", "980 -207 980 937", "267 939 267 4", "-266 -499 -266 126", "945 57 -66 57", "141 320 385 320", "261 -852 261 -374", "-51 999 -98 999", "-848 -475 -848 -309", "123 73 -589 73", "151 -843 151 -341", "-580 307 -580 31", "-115 -596 -115 230", "-545 534 -545 116", "-664 43 -664 -927", "162 -236 162 574", "-697 -321 -697 -581", "436 -579 -912 -579", "-504 -787 -504 -258", "195 -11 -217 -11", "726 611 93 611", "-528 572 -51 572", "151 559 727 559", "-585 -703 -585 -678", "-819 -516 -164 -516", "-609 -803 138 -803", "-583 121 -583 822", "-934 839 -670 839", "302 341 302 -978", "425 751 425 -821", "-576 557 70 557", "-334 -749 -282 -749", "463 -712 463 -761", "-979 900 -434 900", "-561 -227 883 -227", "275 68 275 96", "871 500 601 500", "-585 -523 -585 284"};
    int n = 998901;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> segments = {"852 856 852 944", "603 -28 -341 -28", "-217 -63 -217 -553", "-667 255 291 255", "773 -81 407 -81", "-111 454 -241 454", "-931 289 464 289", "128 -158 128 -518", "-769 543 -769 707", "-956 600 579 600", "443 44 -356 44", "-299 812 -921 812", "136 -863 -695 -863", "373 -212 373 544", "467 -302 771 -302", "-976 -153 -976 302", "858 -211 -757 -211", "329 837 -651 837", "-471 -923 -471 283", "-468 -970 629 -970", "-566 -500 -355 -500", "336 -889 336 -596", "-934 -145 -934 518", "202 -76 -557 -76", "655 186 655 933", "-335 -578 -335 -368", "-251 -380 -251 603", "901 781 133 781", "482 -994 -822 -994", "-913 -288 -324 -288", "852 898 852 787", "789 879 614 879", "-981 329 -981 -158", "346 -158 346 30", "745 -650 -520 -650", "-21 168 -21 900", "-598 -108 88 -108", "370 476 370 176", "-784 -366 -894 -366", "-657 594 -657 26", "-404 -740 -867 -740", "98 671 98 177", "709 188 709 622", "-318 869 -318 -307", "-25 61 -25 200", "-48 36 376 36", "945 -955 945 218", "782 -735 -492 -735", "405 -432 405 262"};
    int n = 998701;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> segments = {"9 5 -7 5", "5 1 5 9"};
    int n = 1;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> segments = {"822 769 822 -895", "-472 557 746 557", "-337 560 899 560", "581 -600 581 683", "-649 827 -649 -774", "105 -596 105 -868", "-167 -137 -167 641", "440 641 330 641", "293 -265 276 -265", "343 343 343 250", "-878 980 -259 980", "371 -98 371 -234", "-939 -993 -939 37", "415 590 209 590", "-167 -420 -167 44", "776 -869 582 -869", "273 391 273 -892", "-759 49 -759 -632", "13 -824 -606 -824", "-892 -235 511 -235", "-423 -174 -423 151"};
    int n = 998600;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> segments = {"822 769 822 -895", "-472 557 746 557", "-337 560 899 560", "581 -600 581 683", "-649 827 -649 -774", "105 -596 105 -868", "-167 -137 -167 641", "440 641 330 641", "293 -265 276 -265", "343 343 343 250", "-878 980 -259 980", "371 -98 371 -234", "-939 -993 -939 37", "415 590 209 590", "-167 -420 -167 44", "776 -869 582 -869", "273 391 273 -892", "-759 49 -759 -632", "13 -824 -606 -824", "-892 -235 511 -235", "-423 -174 -423 151"};
    int n = 998501;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> segments = {"-606 -815 138 -815", "-791 94 -791 891", "-328 995 -328 -864", "154 150 154 -33", "-765 -205 -765 219", "-837 -722 -837 -307", "-840 -82 -840 348", "-64 -649 -396 -649", "-5 -237 -5 -530", "261 -753 261 820", "301 206 369 206", "946 115 -889 115", "131 914 -613 914", "157 -534 -465 -534", "779 -784 443 -784", "-626 -329 -626 4", "-368 744 -368 -465", "319 -874 856 -874", "51 641 51 50", "303 -517 303 324", "-900 666 -900 850", "-719 401 -719 -537", "-871 -342 -871 233", "163 -908 -188 -908", "920 -73 923 -73", "433 949 433 914", "-292 115 -951 115", "137 192 137 768", "-82 -365 -82 -348", "-94 201 -774 201", "-144 339 -144 -51"};
    int n = 998400;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> segments = {"-606 -815 138 -815", "-791 94 -791 891", "-328 995 -328 -864", "154 150 154 -33", "-765 -205 -765 219", "-837 -722 -837 -307", "-840 -82 -840 348", "-64 -649 -396 -649", "-5 -237 -5 -530", "261 -753 261 820", "301 206 369 206", "946 115 -889 115", "131 914 -613 914", "157 -534 -465 -534", "779 -784 443 -784", "-626 -329 -626 4", "-368 744 -368 -465", "319 -874 856 -874", "51 641 51 50", "303 -517 303 324", "-900 666 -900 850", "-719 401 -719 -537", "-871 -342 -871 233", "163 -908 -188 -908", "920 -73 923 -73", "433 949 433 914", "-292 115 -951 115", "137 192 137 768", "-82 -365 -82 -348", "-94 201 -774 201", "-144 339 -144 -51"};
    int n = 998301;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> segments = {"984 -91 -895 -91", "859 159 859 842", "-215 -588 -215 398", "457 -981 457 -397", "739 800 739 381", "637 405 637 426", "-608 621 -608 285", "-231 766 393 766", "13 323 13 151", "232 108 232 975", "-422 276 -422 444", "403 37 -422 37", "374 296 108 296", "420 -279 945 -279", "-788 829 -788 107", "987 150 819 150", "34 -844 34 -202", "40 -40 40 -397", "708 709 -820 709", "254 794 6 794", "-723 612 -549 612", "-602 958 -602 -855", "958 988 212 988", "-719 668 853 668", "168 -836 -696 -836", "-671 752 -671 220", "67 454 67 153", "-429 -559 381 -559", "-93 409 -527 409", "-492 -548 -492 599", "269 -425 269 -535", "262 -18 262 -139", "129 37 74 37", "-228 69 -228 780", "-297 -111 -297 -151", "536 -876 536 -54", "136 -942 826 -942", "25 133 -565 133", "25 469 25 660", "-259 873 -727 873", "-16 -884 -16 468"};
    int n = 998200;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> segments = {"984 -91 -895 -91", "859 159 859 842", "-215 -588 -215 398", "457 -981 457 -397", "739 800 739 381", "637 405 637 426", "-608 621 -608 285", "-231 766 393 766", "13 323 13 151", "232 108 232 975", "-422 276 -422 444", "403 37 -422 37", "374 296 108 296", "420 -279 945 -279", "-788 829 -788 107", "987 150 819 150", "34 -844 34 -202", "40 -40 40 -397", "708 709 -820 709", "254 794 6 794", "-723 612 -549 612", "-602 958 -602 -855", "958 988 212 988", "-719 668 853 668", "168 -836 -696 -836", "-671 752 -671 220", "67 454 67 153", "-429 -559 381 -559", "-93 409 -527 409", "-492 -548 -492 599", "269 -425 269 -535", "262 -18 262 -139", "129 37 74 37", "-228 69 -228 780", "-297 -111 -297 -151", "536 -876 536 -54", "136 -942 826 -942", "25 133 -565 133", "25 469 25 660", "-259 873 -727 873", "-16 -884 -16 468"};
    int n = 998101;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> segments = {"-754 -168 -711 -168", "-101 -365 -633 -365", "-474 247 -45 247", "997 -166 997 295", "64 -624 64 372", "470 -905 -182 -905", "-506 -645 505 -645", "185 60 234 60", "432 -377 432 219", "285 -989 370 -989", "42 609 174 609", "317 966 -833 966", "93 937 -387 937", "271 -777 -404 -777", "-399 -84 -399 -7", "-238 801 -238 -697", "104 -756 104 -602", "68 -780 -611 -780", "388 -1000 388 -364", "-337 -356 -337 515", "-464 801 520 801", "932 -962 553 -962", "-692 631 -172 631", "250 -762 -431 -762", "107 -436 107 -405", "537 -473 537 620", "540 -735 540 956", "254 -234 254 622", "-445 -297 -897 -297", "-795 805 -795 547", "619 -716 619 198", "297 629 297 -256", "-649 376 -649 773", "580 78 580 -363", "-689 267 -689 41", "-990 521 -990 -904", "937 -573 937 -375", "151 -670 803 -670", "-246 335 -695 335", "68 -769 68 -811", "220 -273 220 496", "-132 844 -132 491", "417 10 537 10", "168 953 322 953", "999 953 106 953", "-21 -479 -922 -479", "-771 -393 -800 -393", "-645 113 813 113", "-856 432 -457 432"};
    int n = 998000;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> segments = {"-754 -168 -711 -168", "-101 -365 -633 -365", "-474 247 -45 247", "997 -166 997 295", "64 -624 64 372", "470 -905 -182 -905", "-506 -645 505 -645", "185 60 234 60", "432 -377 432 219", "285 -989 370 -989", "42 609 174 609", "317 966 -833 966", "93 937 -387 937", "271 -777 -404 -777", "-399 -84 -399 -7", "-238 801 -238 -697", "104 -756 104 -602", "68 -780 -611 -780", "388 -1000 388 -364", "-337 -356 -337 515", "-464 801 520 801", "932 -962 553 -962", "-692 631 -172 631", "250 -762 -431 -762", "107 -436 107 -405", "537 -473 537 620", "540 -735 540 956", "254 -234 254 622", "-445 -297 -897 -297", "-795 805 -795 547", "619 -716 619 198", "297 629 297 -256", "-649 376 -649 773", "580 78 580 -363", "-689 267 -689 41", "-990 521 -990 -904", "937 -573 937 -375", "151 -670 803 -670", "-246 335 -695 335", "68 -769 68 -811", "220 -273 220 496", "-132 844 -132 491", "417 10 537 10", "168 953 322 953", "999 953 106 953", "-21 -479 -922 -479", "-771 -393 -800 -393", "-645 113 813 113", "-856 432 -457 432"};
    int n = 997901;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> segments = {"568 52 568 248", "-230 524 -230 465", "-386 321 -386 -828", "219 704 499 704", "-494 -309 718 -309", "555 -344 555 480", "-936 -200 -936 408", "-583 619 -38 619", "466 197 466 -102", "981 -706 -806 -706", "706 -671 706 -691", "-710 8 983 8", "-35 -432 -35 666", "702 -633 391 -633", "-661 -366 922 -366", "902 -638 -558 -638", "644 -34 -675 -34", "-691 596 -691 -641", "-137 202 -936 202", "-8 -120 -471 -120", "-477 783 -477 60", "-765 608 302 608", "494 -638 -507 -638", "20 -207 20 95", "-777 400 -777 506", "-733 993 -599 993", "-346 -880 -346 -763", "-700 -298 -700 649", "-941 -619 -941 -165", "-311 247 -311 558", "-614 -385 -614 -441", "181 855 181 -624"};
    int n = 997800;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> segments = {"568 52 568 248", "-230 524 -230 465", "-386 321 -386 -828", "219 704 499 704", "-494 -309 718 -309", "555 -344 555 480", "-936 -200 -936 408", "-583 619 -38 619", "466 197 466 -102", "981 -706 -806 -706", "706 -671 706 -691", "-710 8 983 8", "-35 -432 -35 666", "702 -633 391 -633", "-661 -366 922 -366", "902 -638 -558 -638", "644 -34 -675 -34", "-691 596 -691 -641", "-137 202 -936 202", "-8 -120 -471 -120", "-477 783 -477 60", "-765 608 302 608", "494 -638 -507 -638", "20 -207 20 95", "-777 400 -777 506", "-733 993 -599 993", "-346 -880 -346 -763", "-700 -298 -700 649", "-941 -619 -941 -165", "-311 247 -311 558", "-614 -385 -614 -441", "181 855 181 -624"};
    int n = 997701;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> segments = {"416 485 416 -157", "-214 -533 -214 -32", "871 -654 613 -654", "566 584 566 817", "-301 511 -301 571", "-421 665 -421 78", "-780 -159 -780 51", "185 299 185 447", "709 -405 709 -532", "-856 -25 -856 229", "-683 740 -683 -803", "-509 -903 397 -903", "676 589 676 -263", "-81 -887 -81 347", "842 -687 78 -687", "339 -247 -344 -247", "790 -257 790 706", "106 -713 106 -971", "29 -355 29 101", "478 860 208 860", "166 -423 166 -444", "326 -527 326 -425", "820 -839 820 421", "509 -216 509 484", "-505 618 -505 -487", "-929 367 906 367", "-856 905 -856 -959", "-332 788 -332 738", "-961 960 -961 208", "-994 -924 -488 -924", "392 669 392 919", "832 -7 97 -7", "-138 -187 -138 -552", "255 -793 -694 -793", "160 684 367 684", "-32 -661 -356 -661", "-168 -518 -190 -518", "-866 246 -115 246", "668 -685 -65 -685"};
    int n = 997600;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> segments = {"416 485 416 -157", "-214 -533 -214 -32", "871 -654 613 -654", "566 584 566 817", "-301 511 -301 571", "-421 665 -421 78", "-780 -159 -780 51", "185 299 185 447", "709 -405 709 -532", "-856 -25 -856 229", "-683 740 -683 -803", "-509 -903 397 -903", "676 589 676 -263", "-81 -887 -81 347", "842 -687 78 -687", "339 -247 -344 -247", "790 -257 790 706", "106 -713 106 -971", "29 -355 29 101", "478 860 208 860", "166 -423 166 -444", "326 -527 326 -425", "820 -839 820 421", "509 -216 509 484", "-505 618 -505 -487", "-929 367 906 367", "-856 905 -856 -959", "-332 788 -332 738", "-961 960 -961 208", "-994 -924 -488 -924", "392 669 392 919", "832 -7 97 -7", "-138 -187 -138 -552", "255 -793 -694 -793", "160 684 367 684", "-32 -661 -356 -661", "-168 -518 -190 -518", "-866 246 -115 246", "668 -685 -65 -685"};
    int n = 997501;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> segments = {"476 843 476 488", "-543 865 -543 791", "-949 -600 -949 721", "249 225 249 -941", "713 -319 713 -238", "-444 16 -444 -809", "266 -741 266 -744", "781 852 781 429", "-296 474 -296 -380", "838 495 838 -528", "-802 -643 -802 434", "-360 816 601 816", "-771 -966 805 -966", "16 -286 16 787", "123 -396 589 -396", "713 717 713 -442", "-948 -495 -356 -495", "-126 513 -126 -513", "-874 760 -874 741", "493 -72 493 -648", "4 439 -667 439", "-152 -190 -758 -190", "930 -272 360 -272", "-682 823 305 823", "628 294 628 555", "-406 -29 -406 -174", "-498 -196 -498 -351", "-873 684 -375 684", "275 167 275 -905", "-653 566 -653 -165", "704 804 704 625", "108 32 -485 32", "27 821 27 740", "342 703 342 -16", "-663 98 806 98", "-905 312 -902 312", "-349 473 -349 -154", "306 692 129 692", "-318 -900 -318 348", "769 74 769 225", "-300 -380 -300 -408"};
    int n = 997400;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> segments = {"476 843 476 488", "-543 865 -543 791", "-949 -600 -949 721", "249 225 249 -941", "713 -319 713 -238", "-444 16 -444 -809", "266 -741 266 -744", "781 852 781 429", "-296 474 -296 -380", "838 495 838 -528", "-802 -643 -802 434", "-360 816 601 816", "-771 -966 805 -966", "16 -286 16 787", "123 -396 589 -396", "713 717 713 -442", "-948 -495 -356 -495", "-126 513 -126 -513", "-874 760 -874 741", "493 -72 493 -648", "4 439 -667 439", "-152 -190 -758 -190", "930 -272 360 -272", "-682 823 305 823", "628 294 628 555", "-406 -29 -406 -174", "-498 -196 -498 -351", "-873 684 -375 684", "275 167 275 -905", "-653 566 -653 -165", "704 804 704 625", "108 32 -485 32", "27 821 27 740", "342 703 342 -16", "-663 98 806 98", "-905 312 -902 312", "-349 473 -349 -154", "306 692 129 692", "-318 -900 -318 348", "769 74 769 225", "-300 -380 -300 -408"};
    int n = 997301;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> segments = {"424 -171 -699 -171", "-968 -871 -968 -887", "831 -244 362 -244", "647 -903 647 746", "509 761 -651 761", "59 -169 59 -950", "-567 704 407 704", "6 -958 6 -527", "-776 416 -776 -990", "635 671 -119 671", "-443 506 339 506", "315 206 274 206", "-831 -261 674 -261", "-135 -460 570 -460", "-255 870 686 870", "183 611 183 987", "983 -478 -5 -478", "-654 -788 -844 -788", "-598 -186 -598 171", "-523 -992 -866 -992", "-182 -339 -182 540", "-424 336 -424 -469", "-588 386 -588 -986", "18 603 532 603", "42 -399 -593 -399", "-932 -913 694 -913", "92 553 92 -145", "-685 27 -685 255", "542 391 -741 391", "673 950 673 -515", "500 -306 208 -306", "-874 438 -874 159", "-541 -898 81 -898", "-874 385 -874 408"};
    int n = 997200;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> segments = {"424 -171 -699 -171", "-968 -871 -968 -887", "831 -244 362 -244", "647 -903 647 746", "509 761 -651 761", "59 -169 59 -950", "-567 704 407 704", "6 -958 6 -527", "-776 416 -776 -990", "635 671 -119 671", "-443 506 339 506", "315 206 274 206", "-831 -261 674 -261", "-135 -460 570 -460", "-255 870 686 870", "183 611 183 987", "983 -478 -5 -478", "-654 -788 -844 -788", "-598 -186 -598 171", "-523 -992 -866 -992", "-182 -339 -182 540", "-424 336 -424 -469", "-588 386 -588 -986", "18 603 532 603", "42 -399 -593 -399", "-932 -913 694 -913", "92 553 92 -145", "-685 27 -685 255", "542 391 -741 391", "673 950 673 -515", "500 -306 208 -306", "-874 438 -874 159", "-541 -898 81 -898", "-874 385 -874 408"};
    int n = 997101;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> segments = {"956 225 -564 225", "-193 -753 -193 -741", "438 495 438 -65", "-357 -431 -794 -431", "-89 697 -140 697", "354 697 -849 697", "-582 -101 -610 -101", "580 -388 580 -467", "-475 -804 -475 -268", "929 498 929 845", "-7 -231 -7 252", "352 -872 352 786", "6 -250 6 -286", "783 635 -759 635", "483 -212 -435 -212", "-414 -248 416 -248", "-943 396 -842 396", "-771 293 74 293", "150 -270 150 -970", "47 -550 47 -365", "415 52 -272 52"};
    int n = 997000;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> segments = {"956 225 -564 225", "-193 -753 -193 -741", "438 495 438 -65", "-357 -431 -794 -431", "-89 697 -140 697", "354 697 -849 697", "-582 -101 -610 -101", "580 -388 580 -467", "-475 -804 -475 -268", "929 498 929 845", "-7 -231 -7 252", "352 -872 352 786", "6 -250 6 -286", "783 635 -759 635", "483 -212 -435 -212", "-414 -248 416 -248", "-943 396 -842 396", "-771 293 74 293", "150 -270 150 -970", "47 -550 47 -365", "415 52 -272 52"};
    int n = 996901;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> segments = {"-860 449 -860 -468", "662 -21 662 954", "663 130 663 -164", "-462 909 -462 145", "-682 -306 -682 127", "21 -349 772 -349", "253 936 253 288", "613 354 -874 354", "-396 905 -396 -338", "-446 226 -446 -457", "912 423 912 -6", "730 -845 -848 -845", "-346 -517 -346 -357", "-626 -332 -626 318", "786 27 786 -704", "394 -341 394 965", "663 435 663 -291", "-718 560 640 560", "212 -914 212 -465", "-332 -679 -332 -574", "737 110 737 -550", "-597 36 -597 -756", "306 733 417 733", "305 196 649 196", "595 -383 595 -266", "-470 -100 -343 -100", "328 -682 912 -682", "-916 409 -916 336", "247 259 -225 259", "-598 -330 425 -330", "-970 13 -970 -564", "974 404 974 -760", "730 268 730 820"};
    int n = 996800;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> segments = {"-860 449 -860 -468", "662 -21 662 954", "663 130 663 -164", "-462 909 -462 145", "-682 -306 -682 127", "21 -349 772 -349", "253 936 253 288", "613 354 -874 354", "-396 905 -396 -338", "-446 226 -446 -457", "912 423 912 -6", "730 -845 -848 -845", "-346 -517 -346 -357", "-626 -332 -626 318", "786 27 786 -704", "394 -341 394 965", "663 435 663 -291", "-718 560 640 560", "212 -914 212 -465", "-332 -679 -332 -574", "737 110 737 -550", "-597 36 -597 -756", "306 733 417 733", "305 196 649 196", "595 -383 595 -266", "-470 -100 -343 -100", "328 -682 912 -682", "-916 409 -916 336", "247 259 -225 259", "-598 -330 425 -330", "-970 13 -970 -564", "974 404 974 -760", "730 268 730 820"};
    int n = 996701;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> segments = {"-392 6 -392 -629", "961 319 961 601", "80 -331 80 -572", "316 308 316 -144", "-820 -204 415 -204", "994 -611 994 -215", "-725 -459 -725 -457", "-528 141 720 141", "-757 -252 433 -252", "-777 -821 -777 741", "779 -461 -417 -461", "-267 371 -267 -744", "504 846 504 -500", "318 -309 318 -164", "922 -819 922 967", "615 -358 615 -275", "-58 793 -380 793", "-582 416 264 416", "948 -567 948 409", "706 -559 784 -559", "927 140 608 140", "-537 730 -537 974", "-422 7 -422 708", "-237 -344 -237 786", "-358 867 -852 867", "-126 969 -126 507", "783 141 -783 141", "111 -374 26 -374", "131 295 131 -393", "-502 -383 -502 708", "604 691 -755 691", "462 -810 -505 -810", "55 -265 935 -265", "857 -225 -864 -225", "383 -962 694 -962", "-561 -757 -561 -120", "368 321 -520 321", "727 -258 727 -778", "929 269 832 269"};
    int n = 996600;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> segments = {"-392 6 -392 -629", "961 319 961 601", "80 -331 80 -572", "316 308 316 -144", "-820 -204 415 -204", "994 -611 994 -215", "-725 -459 -725 -457", "-528 141 720 141", "-757 -252 433 -252", "-777 -821 -777 741", "779 -461 -417 -461", "-267 371 -267 -744", "504 846 504 -500", "318 -309 318 -164", "922 -819 922 967", "615 -358 615 -275", "-58 793 -380 793", "-582 416 264 416", "948 -567 948 409", "706 -559 784 -559", "927 140 608 140", "-537 730 -537 974", "-422 7 -422 708", "-237 -344 -237 786", "-358 867 -852 867", "-126 969 -126 507", "783 141 -783 141", "111 -374 26 -374", "131 295 131 -393", "-502 -383 -502 708", "604 691 -755 691", "462 -810 -505 -810", "55 -265 935 -265", "857 -225 -864 -225", "383 -962 694 -962", "-561 -757 -561 -120", "368 321 -520 321", "727 -258 727 -778", "929 269 832 269"};
    int n = 996501;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> segments = {"733 -211 733 -845", "-247 156 -100 156", "-777 -687 23 -687", "684 687 684 -125", "610 995 -114 995", "320 956 320 -768", "-148 -805 147 -805", "-606 134 -954 134", "482 877 424 877", "-50 658 982 658", "775 166 775 799", "968 25 968 99", "-86 801 -86 -107", "353 374 353 -853", "170 755 170 -723", "385 -131 844 -131", "-498 -577 -529 -577", "946 258 946 649", "421 -512 -47 -512", "-209 281 -927 281", "499 -235 499 -544", "638 -290 638 -240", "-743 927 722 927", "154 -403 154 546", "-567 682 -567 167", "704 754 503 754", "-528 243 -528 986", "-223 151 -757 151", "-955 -342 -955 -107", "-284 889 -754 889", "-14 -587 -866 -587", "907 2 8 2", "346 -878 346 113", "-312 515 335 515", "499 -413 499 -433"};
    int n = 996400;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> segments = {"733 -211 733 -845", "-247 156 -100 156", "-777 -687 23 -687", "684 687 684 -125", "610 995 -114 995", "320 956 320 -768", "-148 -805 147 -805", "-606 134 -954 134", "482 877 424 877", "-50 658 982 658", "775 166 775 799", "968 25 968 99", "-86 801 -86 -107", "353 374 353 -853", "170 755 170 -723", "385 -131 844 -131", "-498 -577 -529 -577", "946 258 946 649", "421 -512 -47 -512", "-209 281 -927 281", "499 -235 499 -544", "638 -290 638 -240", "-743 927 722 927", "154 -403 154 546", "-567 682 -567 167", "704 754 503 754", "-528 243 -528 986", "-223 151 -757 151", "-955 -342 -955 -107", "-284 889 -754 889", "-14 -587 -866 -587", "907 2 8 2", "346 -878 346 113", "-312 515 335 515", "499 -413 499 -433"};
    int n = 996301;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> segments = {"497 -969 -504 -969", "-642 733 -472 733", "-685 -751 -690 -751", "-567 -460 814 -460", "962 231 962 625", "647 344 611 344", "899 358 899 516", "393 360 393 -279", "-93 756 213 756", "763 349 96 349", "806 817 806 243", "-205 -30 -205 -518", "344 276 344 -66", "768 574 -808 574", "340 -465 310 -465", "-866 208 -866 764", "893 870 893 -670", "-979 -443 -979 -274", "-242 -26 -242 -518", "582 -495 582 448", "-413 -689 -413 489", "-433 594 62 594", "-408 -541 -408 519", "846 857 846 -156", "487 757 487 884", "-28 335 860 335", "-846 -556 -846 945", "616 209 26 209", "-944 431 -944 229", "751 -119 -29 -119", "-301 553 -301 413", "75 383 -846 383", "-108 -257 396 -257", "185 484 719 484", "654 240 654 -290", "730 -598 -295 -598", "-820 564 -820 543", "921 543 921 -591", "-413 161 -413 872", "-364 -138 -483 -138", "-626 -973 -626 213", "927 -652 927 837", "-369 215 -369 -468", "735 -903 655 -903", "-929 -613 854 -613", "851 -790 903 -790", "-370 643 457 643", "1000 -659 1000 -577", "-940 13 -940 -919", "-966 -807 -966 294"};
    int n = 996200;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> segments = {"497 -969 -504 -969", "-642 733 -472 733", "-685 -751 -690 -751", "-567 -460 814 -460", "962 231 962 625", "647 344 611 344", "899 358 899 516", "393 360 393 -279", "-93 756 213 756", "763 349 96 349", "806 817 806 243", "-205 -30 -205 -518", "344 276 344 -66", "768 574 -808 574", "340 -465 310 -465", "-866 208 -866 764", "893 870 893 -670", "-979 -443 -979 -274", "-242 -26 -242 -518", "582 -495 582 448", "-413 -689 -413 489", "-433 594 62 594", "-408 -541 -408 519", "846 857 846 -156", "487 757 487 884", "-28 335 860 335", "-846 -556 -846 945", "616 209 26 209", "-944 431 -944 229", "751 -119 -29 -119", "-301 553 -301 413", "75 383 -846 383", "-108 -257 396 -257", "185 484 719 484", "654 240 654 -290", "730 -598 -295 -598", "-820 564 -820 543", "921 543 921 -591", "-413 161 -413 872", "-364 -138 -483 -138", "-626 -973 -626 213", "927 -652 927 837", "-369 215 -369 -468", "735 -903 655 -903", "-929 -613 854 -613", "851 -790 903 -790", "-370 643 457 643", "1000 -659 1000 -577", "-940 13 -940 -919", "-966 -807 -966 294"};
    int n = 996101;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> segments = {"766 750 -922 750", "496 -93 496 791", "824 -641 824 472", "-424 187 -964 187", "854 193 -388 193", "-300 -325 -300 -507", "-750 812 166 812", "828 419 281 419", "349 -567 -309 -567", "-910 235 -910 143", "131 187 -611 187", "-248 -366 -300 -366", "-225 -572 -335 -572", "-98 974 -98 -311", "986 867 673 867", "216 163 216 733", "972 908 972 -880", "100 907 -359 907", "666 -540 666 185"};
    int n = 996000;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> segments = {"766 750 -922 750", "496 -93 496 791", "824 -641 824 472", "-424 187 -964 187", "854 193 -388 193", "-300 -325 -300 -507", "-750 812 166 812", "828 419 281 419", "349 -567 -309 -567", "-910 235 -910 143", "131 187 -611 187", "-248 -366 -300 -366", "-225 -572 -335 -572", "-98 974 -98 -311", "986 867 673 867", "216 163 216 733", "972 908 972 -880", "100 907 -359 907", "666 -540 666 185"};
    int n = 995901;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> segments = {"-918 112 -918 -62", "-47 -820 -47 348", "-149 -625 -149 -32", "89 -932 -551 -932", "874 654 -648 654", "563 -817 563 -884", "119 346 119 911", "445 -857 601 -857", "45 620 722 620", "945 -627 -471 -627", "119 954 119 111", "-598 763 815 763", "735 874 889 874", "429 -909 429 839", "-632 -440 -632 288", "574 -468 -443 -468", "-358 526 748 526", "144 -290 144 -711", "838 360 422 360", "479 -592 -231 -592", "-411 -904 -462 -904", "-708 -794 -708 -120", "-311 -286 -311 943", "-970 363 626 363", "-685 -713 -231 -713", "-628 616 -628 5", "887 744 402 744", "620 -381 620 -391", "483 -47 977 -47", "341 -362 341 -763", "-236 -600 -236 -552", "-301 -278 524 -278", "666 -311 -914 -311", "-580 -297 -580 -672", "18 572 18 -597", "-615 360 697 360", "-44 915 724 915", "-783 -877 -783 390", "-447 -445 -447 892", "186 659 -379 659", "964 314 -576 314", "-658 47 731 47", "-633 -110 -914 -110", "794 -243 794 855"};
    int n = 995800;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> segments = {"-918 112 -918 -62", "-47 -820 -47 348", "-149 -625 -149 -32", "89 -932 -551 -932", "874 654 -648 654", "563 -817 563 -884", "119 346 119 911", "445 -857 601 -857", "45 620 722 620", "945 -627 -471 -627", "119 954 119 111", "-598 763 815 763", "735 874 889 874", "429 -909 429 839", "-632 -440 -632 288", "574 -468 -443 -468", "-358 526 748 526", "144 -290 144 -711", "838 360 422 360", "479 -592 -231 -592", "-411 -904 -462 -904", "-708 -794 -708 -120", "-311 -286 -311 943", "-970 363 626 363", "-685 -713 -231 -713", "-628 616 -628 5", "887 744 402 744", "620 -381 620 -391", "483 -47 977 -47", "341 -362 341 -763", "-236 -600 -236 -552", "-301 -278 524 -278", "666 -311 -914 -311", "-580 -297 -580 -672", "18 572 18 -597", "-615 360 697 360", "-44 915 724 915", "-783 -877 -783 390", "-447 -445 -447 892", "186 659 -379 659", "964 314 -576 314", "-658 47 731 47", "-633 -110 -914 -110", "794 -243 794 855"};
    int n = 995701;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> segments = {"519 -759 -569 -759", "-477 649 -477 223", "832 211 300 211", "-437 -44 -437 -141", "-719 836 -714 836", "-163 645 -550 645", "-594 550 -706 550", "749 465 749 399", "893 -602 906 -602", "-579 -780 93 -780", "965 301 965 -972", "52 -576 -738 -576", "-121 -737 -121 -524", "55 -294 661 -294", "401 -787 -818 -787", "-72 813 -72 -719", "-968 -92 -968 828", "-411 747 -411 38", "378 728 -182 728", "-710 257 -710 726", "-739 -113 934 -113", "659 232 -843 232", "713 -890 -456 -890", "-31 -584 501 -584", "-130 -7 -130 773", "827 25 -842 25", "-4 982 -4 -186", "621 372 -257 372", "-274 -576 -876 -576", "7 -625 579 -625", "671 13 671 -510", "395 -721 -438 -721", "-810 757 -733 757", "-345 -771 531 -771", "708 -336 514 -336", "-984 480 -984 -890", "-836 472 -836 942", "941 -553 941 -549", "-280 -306 -280 -261", "229 801 229 -182", "76 -61 76 -586", "485 657 674 657", "-207 -513 -207 831", "732 -707 732 -820", "780 821 780 -841"};
    int n = 995600;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> segments = {"519 -759 -569 -759", "-477 649 -477 223", "832 211 300 211", "-437 -44 -437 -141", "-719 836 -714 836", "-163 645 -550 645", "-594 550 -706 550", "749 465 749 399", "893 -602 906 -602", "-579 -780 93 -780", "965 301 965 -972", "52 -576 -738 -576", "-121 -737 -121 -524", "55 -294 661 -294", "401 -787 -818 -787", "-72 813 -72 -719", "-968 -92 -968 828", "-411 747 -411 38", "378 728 -182 728", "-710 257 -710 726", "-739 -113 934 -113", "659 232 -843 232", "713 -890 -456 -890", "-31 -584 501 -584", "-130 -7 -130 773", "827 25 -842 25", "-4 982 -4 -186", "621 372 -257 372", "-274 -576 -876 -576", "7 -625 579 -625", "671 13 671 -510", "395 -721 -438 -721", "-810 757 -733 757", "-345 -771 531 -771", "708 -336 514 -336", "-984 480 -984 -890", "-836 472 -836 942", "941 -553 941 -549", "-280 -306 -280 -261", "229 801 229 -182", "76 -61 76 -586", "485 657 674 657", "-207 -513 -207 831", "732 -707 732 -820", "780 821 780 -841"};
    int n = 995501;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> segments = {"46 -454 -166 -454", "457 -730 752 -730", "136 -381 -598 -381", "683 -842 -417 -842", "807 302 807 390", "-903 -72 -903 -364", "-121 -607 -358 -607", "464 731 464 52", "676 -209 852 -209", "-199 -425 577 -425", "-414 716 -580 716", "-789 -782 901 -782", "-628 796 -865 796", "745 701 745 -829", "454 -782 -860 -782"};
    int n = 995400;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> segments = {"46 -454 -166 -454", "457 -730 752 -730", "136 -381 -598 -381", "683 -842 -417 -842", "807 302 807 390", "-903 -72 -903 -364", "-121 -607 -358 -607", "464 731 464 52", "676 -209 852 -209", "-199 -425 577 -425", "-414 716 -580 716", "-789 -782 901 -782", "-628 796 -865 796", "745 701 745 -829", "454 -782 -860 -782"};
    int n = 995301;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> segments = {"-699 410 -371 410", "261 -640 261 197", "52 -641 176 -641", "-127 919 -127 233", "-216 616 -654 616", "-986 -282 -986 -456", "815 1000 815 691", "-583 -747 -132 -747", "388 42 388 32", "199 -384 435 -384", "485 815 485 54", "127 930 -413 930", "-934 -730 958 -730", "-751 724 -262 724", "40 123 -536 123", "115 -206 115 -518", "648 -98 648 -616", "-752 637 -752 794", "-398 920 -398 -604", "878 -283 -977 -283", "-271 -283 -10 -283", "560 -730 930 -730", "915 -930 915 796", "-366 -548 136 -548", "-107 -10 341 -10", "-214 274 -145 274", "-85 -803 -628 -803", "-516 -379 -95 -379", "-187 -159 -187 543", "-716 -468 -217 -468", "-831 -82 -831 867", "188 456 188 648", "895 726 895 189", "656 558 763 558", "-4 614 -458 614", "-357 -984 -967 -984"};
    int n = 995200;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> segments = {"-699 410 -371 410", "261 -640 261 197", "52 -641 176 -641", "-127 919 -127 233", "-216 616 -654 616", "-986 -282 -986 -456", "815 1000 815 691", "-583 -747 -132 -747", "388 42 388 32", "199 -384 435 -384", "485 815 485 54", "127 930 -413 930", "-934 -730 958 -730", "-751 724 -262 724", "40 123 -536 123", "115 -206 115 -518", "648 -98 648 -616", "-752 637 -752 794", "-398 920 -398 -604", "878 -283 -977 -283", "-271 -283 -10 -283", "560 -730 930 -730", "915 -930 915 796", "-366 -548 136 -548", "-107 -10 341 -10", "-214 274 -145 274", "-85 -803 -628 -803", "-516 -379 -95 -379", "-187 -159 -187 543", "-716 -468 -217 -468", "-831 -82 -831 867", "188 456 188 648", "895 726 895 189", "656 558 763 558", "-4 614 -458 614", "-357 -984 -967 -984"};
    int n = 995101;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> segments = {"-335 -520 69 -520", "799 408 799 -3", "-644 -428 -793 -428", "-531 123 -531 274", "541 -510 -24 -510", "-771 -756 333 -756", "635 343 635 463", "133 75 -357 75", "-617 -464 403 -464", "644 -449 644 -131", "-809 -409 487 -409", "-285 -409 -878 -409", "42 -542 -399 -542", "928 -829 928 35", "-459 189 -599 189", "-196 -86 -149 -86", "857 793 857 -497", "982 -594 982 52", "256 714 -555 714", "708 -383 239 -383", "-678 32 -678 723", "-815 156 550 156", "-705 775 -705 -29", "-42 475 -42 -137", "624 911 -66 911", "-246 282 -787 282"};
    int n = 995000;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> segments = {"-335 -520 69 -520", "799 408 799 -3", "-644 -428 -793 -428", "-531 123 -531 274", "541 -510 -24 -510", "-771 -756 333 -756", "635 343 635 463", "133 75 -357 75", "-617 -464 403 -464", "644 -449 644 -131", "-809 -409 487 -409", "-285 -409 -878 -409", "42 -542 -399 -542", "928 -829 928 35", "-459 189 -599 189", "-196 -86 -149 -86", "857 793 857 -497", "982 -594 982 52", "256 714 -555 714", "708 -383 239 -383", "-678 32 -678 723", "-815 156 550 156", "-705 775 -705 -29", "-42 475 -42 -137", "624 911 -66 911", "-246 282 -787 282"};
    int n = 994901;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> segments = {"-97 -31 -535 -31", "27 29 27 536", "-992 -462 -992 641", "363 -41 294 -41", "-988 -994 -225 -994", "-641 861 399 861", "63 937 63 -430", "-175 912 -175 540", "492 -606 492 -941", "392 775 -536 775", "-324 389 -309 389", "301 416 -106 416", "777 -232 777 931", "821 -674 821 538", "27 50 27 134", "66 -745 935 -745", "-762 699 -1 699", "436 -352 941 -352", "766 518 741 518", "-504 -153 -504 -338", "-299 -966 -299 -43", "-447 -260 -851 -260", "-921 246 -921 -265", "-544 591 -544 772", "268 -722 6 -722", "477 424 712 424", "385 831 -352 831", "101 -306 101 -616", "831 -814 831 797", "-394 -637 -394 223", "993 60 -889 60", "-134 811 -134 688", "-477 -409 -477 -999", "-516 -630 -982 -630", "-535 244 -535 -877", "76 -20 -681 -20", "-689 4 -689 -241", "-749 -455 -749 408", "-311 285 -293 285", "740 -814 35 -814", "-185 423 -663 423", "703 -862 181 -862", "111 -99 -744 -99", "188 -819 188 -128"};
    int n = 994800;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> segments = {"-97 -31 -535 -31", "27 29 27 536", "-992 -462 -992 641", "363 -41 294 -41", "-988 -994 -225 -994", "-641 861 399 861", "63 937 63 -430", "-175 912 -175 540", "492 -606 492 -941", "392 775 -536 775", "-324 389 -309 389", "301 416 -106 416", "777 -232 777 931", "821 -674 821 538", "27 50 27 134", "66 -745 935 -745", "-762 699 -1 699", "436 -352 941 -352", "766 518 741 518", "-504 -153 -504 -338", "-299 -966 -299 -43", "-447 -260 -851 -260", "-921 246 -921 -265", "-544 591 -544 772", "268 -722 6 -722", "477 424 712 424", "385 831 -352 831", "101 -306 101 -616", "831 -814 831 797", "-394 -637 -394 223", "993 60 -889 60", "-134 811 -134 688", "-477 -409 -477 -999", "-516 -630 -982 -630", "-535 244 -535 -877", "76 -20 -681 -20", "-689 4 -689 -241", "-749 -455 -749 408", "-311 285 -293 285", "740 -814 35 -814", "-185 423 -663 423", "703 -862 181 -862", "111 -99 -744 -99", "188 -819 188 -128"};
    int n = 994701;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> segments = {"-437 38 -211 38", "-880 599 912 599", "-350 -955 -350 -228", "747 246 290 246", "400 -960 138 -960", "470 298 470 -144", "-594 -501 -594 -544", "-16 -641 -16 -218", "-819 25 -510 25", "-643 88 195 88", "934 -335 934 -952", "-358 -66 -358 267", "258 869 258 241", "-889 288 -889 -808", "-515 -488 -515 827", "53 599 405 599", "38 -623 38 -506", "482 -381 482 768", "-160 -815 997 -815", "677 -831 677 333", "-885 -609 -885 138", "-789 407 835 407", "616 83 -466 83", "526 615 807 615", "-410 196 379 196"};
    int n = 994600;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> segments = {"-437 38 -211 38", "-880 599 912 599", "-350 -955 -350 -228", "747 246 290 246", "400 -960 138 -960", "470 298 470 -144", "-594 -501 -594 -544", "-16 -641 -16 -218", "-819 25 -510 25", "-643 88 195 88", "934 -335 934 -952", "-358 -66 -358 267", "258 869 258 241", "-889 288 -889 -808", "-515 -488 -515 827", "53 599 405 599", "38 -623 38 -506", "482 -381 482 768", "-160 -815 997 -815", "677 -831 677 333", "-885 -609 -885 138", "-789 407 835 407", "616 83 -466 83", "526 615 807 615", "-410 196 379 196"};
    int n = 994501;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> segments = {"547 164 -194 164", "-389 -441 415 -441", "608 -250 735 -250", "736 -784 736 689", "372 494 278 494", "-808 -2 -808 264", "-878 -779 -532 -779", "6 -441 927 -441", "-453 -493 -137 -493", "-710 436 -710 -614", "89 -988 89 -491", "802 408 -212 408", "934 -800 327 -800", "965 -347 675 -347", "558 217 558 84", "-730 -10 565 -10", "418 937 904 937", "624 -369 624 637", "980 -31 980 -511", "993 -883 561 -883", "-437 -419 -437 796", "54 -864 54 106", "-565 272 -565 -533", "-128 222 -276 222", "595 -635 595 470", "-619 111 -619 4", "342 -361 342 -971", "-163 450 -163 -367", "529 -832 -989 -832", "885 -937 885 -550", "346 -927 -648 -927", "517 -523 400 -523", "-254 -827 -254 -197", "-227 616 871 616", "117 -33 117 -213", "-903 -444 272 -444", "-590 338 -590 760", "-386 -815 840 -815", "966 996 -581 996", "9 510 454 510", "-849 485 -849 -938", "752 570 752 -180", "-740 489 975 489", "132 662 132 712", "-787 711 -787 -796", "-345 995 -345 -748", "58 133 -624 133", "-830 -230 -830 -244", "792 651 792 -742", "-629 -451 -629 581"};
    int n = 994400;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> segments = {"547 164 -194 164", "-389 -441 415 -441", "608 -250 735 -250", "736 -784 736 689", "372 494 278 494", "-808 -2 -808 264", "-878 -779 -532 -779", "6 -441 927 -441", "-453 -493 -137 -493", "-710 436 -710 -614", "89 -988 89 -491", "802 408 -212 408", "934 -800 327 -800", "965 -347 675 -347", "558 217 558 84", "-730 -10 565 -10", "418 937 904 937", "624 -369 624 637", "980 -31 980 -511", "993 -883 561 -883", "-437 -419 -437 796", "54 -864 54 106", "-565 272 -565 -533", "-128 222 -276 222", "595 -635 595 470", "-619 111 -619 4", "342 -361 342 -971", "-163 450 -163 -367", "529 -832 -989 -832", "885 -937 885 -550", "346 -927 -648 -927", "517 -523 400 -523", "-254 -827 -254 -197", "-227 616 871 616", "117 -33 117 -213", "-903 -444 272 -444", "-590 338 -590 760", "-386 -815 840 -815", "966 996 -581 996", "9 510 454 510", "-849 485 -849 -938", "752 570 752 -180", "-740 489 975 489", "132 662 132 712", "-787 711 -787 -796", "-345 995 -345 -748", "58 133 -624 133", "-830 -230 -830 -244", "792 651 792 -742", "-629 -451 -629 581"};
    int n = 994301;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> segments = {"-471 852 -471 -224", "-96 365 -96 384", "638 391 -362 391", "-503 974 -503 315", "-852 856 -852 966", "-575 960 -575 321", "227 286 212 286", "994 553 301 553", "456 -397 456 -762", "-855 -353 -47 -353", "-906 -855 647 -855", "-489 777 -413 777", "-851 -917 78 -917", "607 -91 -667 -91", "168 -475 168 125", "-408 -530 -408 652", "607 -959 607 -50", "276 250 276 -357", "-52 998 -52 329", "872 862 315 862", "268 -835 268 613", "-338 639 -338 -668", "782 -18 -255 -18", "-393 -365 -393 -263", "-36 859 -36 -669", "-920 -624 -920 483", "-256 -396 -256 -751", "-836 -815 -836 -965", "659 819 659 800", "647 -80 647 498", "-338 -611 -338 -144", "-717 737 685 737", "-837 672 -837 -937", "-963 516 -547 516", "717 770 717 739"};
    int n = 994200;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> segments = {"-471 852 -471 -224", "-96 365 -96 384", "638 391 -362 391", "-503 974 -503 315", "-852 856 -852 966", "-575 960 -575 321", "227 286 212 286", "994 553 301 553", "456 -397 456 -762", "-855 -353 -47 -353", "-906 -855 647 -855", "-489 777 -413 777", "-851 -917 78 -917", "607 -91 -667 -91", "168 -475 168 125", "-408 -530 -408 652", "607 -959 607 -50", "276 250 276 -357", "-52 998 -52 329", "872 862 315 862", "268 -835 268 613", "-338 639 -338 -668", "782 -18 -255 -18", "-393 -365 -393 -263", "-36 859 -36 -669", "-920 -624 -920 483", "-256 -396 -256 -751", "-836 -815 -836 -965", "659 819 659 800", "647 -80 647 498", "-338 -611 -338 -144", "-717 737 685 737", "-837 672 -837 -937", "-963 516 -547 516", "717 770 717 739"};
    int n = 994101;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> segments = {"447 701 910 701", "155 -381 -391 -381", "-620 488 -620 -748", "951 211 951 793", "-506 229 350 229", "724 775 -928 775", "-359 -280 370 -280", "999 -81 999 -707", "-7 330 -7 22", "145 427 -15 427", "665 472 0 472", "-948 563 -948 998", "665 -704 665 675", "-103 -914 -103 51", "-434 -848 -434 191", "879 806 879 -103", "487 738 -305 738", "-266 124 -885 124", "-522 408 -522 -477", "-647 -389 389 -389", "-471 875 -471 -543", "-640 808 366 808", "-666 -849 -666 65", "-74 -198 -240 -198", "975 -861 975 331", "-434 51 831 51", "-620 579 -620 -879", "794 967 794 -298", "-18 620 646 620", "-955 -409 -955 -800", "-279 890 -279 -922", "-753 166 -437 166", "171 -432 504 -432", "698 -177 -782 -177"};
    int n = 994000;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> segments = {"447 701 910 701", "155 -381 -391 -381", "-620 488 -620 -748", "951 211 951 793", "-506 229 350 229", "724 775 -928 775", "-359 -280 370 -280", "999 -81 999 -707", "-7 330 -7 22", "145 427 -15 427", "665 472 0 472", "-948 563 -948 998", "665 -704 665 675", "-103 -914 -103 51", "-434 -848 -434 191", "879 806 879 -103", "487 738 -305 738", "-266 124 -885 124", "-522 408 -522 -477", "-647 -389 389 -389", "-471 875 -471 -543", "-640 808 366 808", "-666 -849 -666 65", "-74 -198 -240 -198", "975 -861 975 331", "-434 51 831 51", "-620 579 -620 -879", "794 967 794 -298", "-18 620 646 620", "-955 -409 -955 -800", "-279 890 -279 -922", "-753 166 -437 166", "171 -432 504 -432", "698 -177 -782 -177"};
    int n = 993901;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> segments = {"533 247 -952 247", "350 -583 -409 -583", "-722 -187 -258 -187", "-430 959 25 959", "-441 332 -441 -228", "464 -934 464 -831", "-221 -689 -221 -285", "119 -872 119 -496", "-401 538 -401 -974", "29 914 -146 914", "249 943 -428 943", "913 431 -576 431", "-21 -849 -21 -153", "-283 -972 -283 -518", "-962 646 77 646", "-951 959 899 959", "-311 110 -311 -727", "794 934 794 -149", "-601 -963 845 -963", "-128 611 776 611", "310 322 -123 322", "326 271 -309 271", "-336 -786 -336 486", "889 -454 889 717", "-101 -909 -571 -909", "659 -54 659 626", "765 -818 765 -68", "81 -736 81 109", "523 117 505 117", "754 664 754 -98", "-748 -531 -399 -531", "-696 -337 -826 -337", "795 -980 795 563", "861 -700 861 -19"};
    int n = 993800;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> segments = {"533 247 -952 247", "350 -583 -409 -583", "-722 -187 -258 -187", "-430 959 25 959", "-441 332 -441 -228", "464 -934 464 -831", "-221 -689 -221 -285", "119 -872 119 -496", "-401 538 -401 -974", "29 914 -146 914", "249 943 -428 943", "913 431 -576 431", "-21 -849 -21 -153", "-283 -972 -283 -518", "-962 646 77 646", "-951 959 899 959", "-311 110 -311 -727", "794 934 794 -149", "-601 -963 845 -963", "-128 611 776 611", "310 322 -123 322", "326 271 -309 271", "-336 -786 -336 486", "889 -454 889 717", "-101 -909 -571 -909", "659 -54 659 626", "765 -818 765 -68", "81 -736 81 109", "523 117 505 117", "754 664 754 -98", "-748 -531 -399 -531", "-696 -337 -826 -337", "795 -980 795 563", "861 -700 861 -19"};
    int n = 993701;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> segments = {"-10 0 10 0", "0 -10 0 10"};
    int n = 1;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> segments = {"-10 0 0 0", "0 0 10 0", "0 -10 0 0", "0 0 0 10"};
    int n = 1;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> segments = {"-10 0 0 0", "0 0 10 0", "0 -10 0 0", "0 0 0 10"};
    int n = 4;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> segments = {"0 0 1 0", "2 0 4 0", "5 0 8 0", "9 0 13 0", "0 1 1 1", "2 1 4 1", "5 1 8 1", "9 1 13 1", "0 0 0 1", "1 0 1 1", "2 0 2 1", "3 0 3 1", "4 0 4 1", "5 0 5 1", "6 0 6 1", "7 0 7 1", "8 0 8 1", "9 0 9 1", "10 0 10 1", "11 0 11 1", "12 0 12 1", "13 0 13 1"};
    int n = 1;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> segments = {"-2 6 -2 1", "2 6 2 1", "6 -2 1 -2", "6 2 1 2", "-2 5 -2 -1", "2 5 2 -1", "5 -2 -1 -2", "5 2 -1 2", "-2 1 -2 -5", "2 1 2 -5", "1 -2 -5 -2", "1 2 -5 2", "-2 -1 -2 -6", "2 -1 2 -6", "-1 -2 -6 -2", "-1 2 -6 2"};
    int n = 5;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> segments = {"-252927 -1000000 -252927 549481", "628981 580961 -971965 580961", "159038 -171934 159038 -420875", "159038 923907 159038 418077", "1000000 1000000 -909294 1000000", "1000000 -420875 1000000 66849", "1000000 -171934 628981 -171934", "411096 66849 411096 -420875", "-1000000 -420875 -396104 -420875", "1000000 1000000 159038 1000000", "411096 66849 411096 521448", "-971965 580961 -909294 580961", "159038 66849 159038 -1000000", "-971965 1000000 725240 1000000", "-396104 -420875 -396104 -171934", "-909294 521448 628981 521448", "-909294 1000000 -909294 -1000000", "628981 1000000 -909294 1000000", "628981 418077 -396104 418077", "-971965 -420875 159038 -420875", "1000000 -1000000 -396104 -1000000", "-971965 66849 159038 66849", "-909294 418077 1000000 418077", "-909294 418077 411096 418077", "725240 521448 725240 418077", "-252927 -1000000 -1000000 -1000000", "411096 549481 -1000000 549481", "628981 -171934 628981 923907", "-1000000 66849 -1000000 521448", "-396104 66849 -396104 1000000", "628981 -1000000 628981 521448", "-971965 521448 -396104 521448", "-1000000 418077 1000000 418077", "-1000000 521448 -252927 521448", "725240 -420875 725240 -1000000", "-1000000 549481 -1000000 -420875", "159038 521448 -396104 521448", "-1000000 521448 -252927 521448", "628981 580961 628981 549481", "628981 -1000000 628981 521448", "1000000 66849 1000000 -171934", "-396104 66849 159038 66849", "1000000 66849 -396104 66849", "628981 1000000 628981 521448", "-252927 923907 -252927 580961", "1000000 549481 -971965 549481", "-909294 66849 628981 66849", "-252927 418077 628981 418077", "159038 -171934 -909294 -171934", "-252927 549481 159038 549481"};
    int n = 824759;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> segments = {"-252927 -1000000 -252927 549481", "628981 580961 -971965 580961", "159038 -171934 159038 -420875", "159038 923907 159038 418077", "1000000 1000000 -909294 1000000", "1000000 -420875 1000000 66849", "1000000 -171934 628981 -171934", "411096 66849 411096 -420875", "-1000000 -420875 -396104 -420875", "1000000 1000000 159038 1000000", "411096 66849 411096 521448", "-971965 580961 -909294 580961", "159038 66849 159038 -1000000", "-971965 1000000 725240 1000000", "-396104 -420875 -396104 -171934", "-909294 521448 628981 521448", "-909294 1000000 -909294 -1000000", "628981 1000000 -909294 1000000", "628981 418077 -396104 418077", "-971965 -420875 159038 -420875", "1000000 -1000000 -396104 -1000000", "-971965 66849 159038 66849", "-909294 418077 1000000 418077", "-909294 418077 411096 418077", "725240 521448 725240 418077", "-252927 -1000000 -1000000 -1000000", "411096 549481 -1000000 549481", "628981 -171934 628981 923907", "-1000000 66849 -1000000 521448", "-396104 66849 -396104 1000000", "628981 -1000000 628981 521448", "-971965 521448 -396104 521448", "-1000000 418077 1000000 418077", "-1000000 521448 -252927 521448", "725240 -420875 725240 -1000000", "-1000000 549481 -1000000 -420875", "159038 521448 -396104 521448", "-1000000 521448 -252927 521448", "628981 580961 628981 549481", "628981 -1000000 628981 521448", "1000000 66849 1000000 -171934", "-396104 66849 159038 66849", "1000000 66849 -396104 66849", "628981 1000000 628981 521448", "-252927 923907 -252927 580961", "1000000 549481 -971965 549481", "-909294 66849 628981 66849", "-252927 418077 628981 418077", "159038 -171934 -909294 -171934", "-252927 549481 159038 549481"};
    int n = 800000;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
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
    vector<string> segments = {"-909294 -887526 725240 -887526", "628981 549481 628981 580961", "-396104 549481 -396104 -887526", "725240 1000000 725240 -420875", "-252927 1000000 -909294 1000000", "411096 1000000 411096 -1000000", "-909294 66849 742893 66849", "-396104 -1000000 -971965 -1000000", "-396104 1000000 -396104 521448", "-396104 66849 725240 66849", "-971965 521448 -971965 549481", "725240 -420875 -1000000 -420875", "628981 -271962 742893 -271962", "-971965 549481 -971965 580961", "725240 418077 -909294 418077", "-252927 -271962 -252927 -1000000", "-909294 -271962 -252927 -271962", "-909294 -171934 -971965 -171934", "-971965 549481 159038 549481", "1000000 -1000000 -971965 -1000000", "628981 66849 -396104 66849", "725240 -171934 1000000 -171934", "725240 -171934 411096 -171934", "742893 418077 742893 580961", "742893 -1000000 -1000000 -1000000", "411096 549481 -1000000 549481", "-909294 580961 -909294 -887526", "-1000000 -420875 -1000000 418077", "-971965 66849 -971965 1000000", "-909294 66849 -909294 521448", "628981 418077 -396104 418077", "411096 580961 1000000 580961", "411096 418077 899114 418077", "742893 549481 742893 66849", "-1000000 549481 -1000000 -420875", "628981 549481 -1000000 549481", "628981 -420875 628981 580961", "742893 1000000 -909294 1000000", "-1000000 580961 1000000 580961", "411096 1000000 411096 521448", "411096 418077 1000000 418077", "411096 -1000000 -909294 -1000000", "1000000 -171934 899114 -171934", "742893 923907 742893 1000000", "-971965 418077 -252927 418077", "159038 418077 159038 -887526", "-909294 418077 -909294 -420875", "725240 418077 725240 -271962", "-971965 549481 411096 549481", "-909294 -420875 -909294 521448"};
    int n = 800101;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> segments = {"-909294 -887526 725240 -887526", "628981 549481 628981 580961", "-396104 549481 -396104 -887526", "725240 1000000 725240 -420875", "-252927 1000000 -909294 1000000", "411096 1000000 411096 -1000000", "-909294 66849 742893 66849", "-396104 -1000000 -971965 -1000000", "-396104 1000000 -396104 521448", "-396104 66849 725240 66849", "-971965 521448 -971965 549481", "725240 -420875 -1000000 -420875", "628981 -271962 742893 -271962", "-971965 549481 -971965 580961", "725240 418077 -909294 418077", "-252927 -271962 -252927 -1000000", "-909294 -271962 -252927 -271962", "-909294 -171934 -971965 -171934", "-971965 549481 159038 549481", "1000000 -1000000 -971965 -1000000", "628981 66849 -396104 66849", "725240 -171934 1000000 -171934", "725240 -171934 411096 -171934", "742893 418077 742893 580961", "742893 -1000000 -1000000 -1000000", "411096 549481 -1000000 549481", "-909294 580961 -909294 -887526", "-1000000 -420875 -1000000 418077", "-971965 66849 -971965 1000000", "-909294 66849 -909294 521448", "628981 418077 -396104 418077", "411096 580961 1000000 580961", "411096 418077 899114 418077", "742893 549481 742893 66849", "-1000000 549481 -1000000 -420875", "628981 549481 -1000000 549481", "628981 -420875 628981 580961", "742893 1000000 -909294 1000000", "-1000000 580961 1000000 580961", "411096 1000000 411096 521448", "411096 418077 1000000 418077", "411096 -1000000 -909294 -1000000", "1000000 -171934 899114 -171934", "742893 923907 742893 1000000", "-971965 418077 -252927 418077", "159038 418077 159038 -887526", "-909294 418077 -909294 -420875", "725240 418077 725240 -271962", "-971965 549481 411096 549481", "-909294 -420875 -909294 521448"};
    int n = 800200;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> segments = {"742893 -887526 -971965 -887526", "-892991 184917 -892991 1000000", "-62599 549481 -62599 1000000", "-396104 923907 1000000 923907", "899114 -1000000 899114 66849", "411096 534224 -1000000 534224", "-971965 418077 1000000 418077", "1000000 -171934 159038 -171934", "159038 -887526 -909294 -887526", "899114 521448 899114 549481", "159038 923907 -909294 923907", "-62599 549481 -62599 418077", "-971965 -403669 -971965 -887526", "-909294 66849 -909294 -271962", "-62599 184917 -252927 184917", "-62599 -171934 -62599 580961", "725240 -171934 -909294 -171934", "-971965 -1000000 1000000 -1000000", "-1000000 418077 725240 418077", "159038 580961 742893 580961", "-252927 -420875 -252927 -887526", "725240 418077 49737 418077", "-909294 534224 -909294 184917", "-1000000 549481 411096 549481", "-971965 66849 -252927 66849", "742893 923907 742893 66849", "159038 -271962 628981 -271962", "159038 -271962 159038 580961", "411096 534224 -909294 534224", "725240 549481 411096 549481", "-252927 -420875 -252927 66849", "-909294 521448 -909294 534224", "-971965 -271962 411096 -271962", "-1000000 521448 -1000000 549481", "725240 549481 -1000000 549481", "725240 549481 725240 923907", "49737 -403669 -252927 -403669", "411096 -887526 1000000 -887526", "411096 -403669 411096 418077", "159038 580961 1000000 580961", "411096 -1000000 -252927 -1000000", "-62599 923907 -892991 923907", "-892991 -271962 -892991 1000000", "628981 580961 899114 580961", "159038 -171934 159038 184917", "-252927 -171934 -252927 549481", "742893 580961 742893 -403669", "628981 521448 159038 521448", "725240 549481 725240 418077", "-62599 580961 899114 580961"};
    int n = 800301;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> segments = {"742893 -887526 -971965 -887526", "-892991 184917 -892991 1000000", "-62599 549481 -62599 1000000", "-396104 923907 1000000 923907", "899114 -1000000 899114 66849", "411096 534224 -1000000 534224", "-971965 418077 1000000 418077", "1000000 -171934 159038 -171934", "159038 -887526 -909294 -887526", "899114 521448 899114 549481", "159038 923907 -909294 923907", "-62599 549481 -62599 418077", "-971965 -403669 -971965 -887526", "-909294 66849 -909294 -271962", "-62599 184917 -252927 184917", "-62599 -171934 -62599 580961", "725240 -171934 -909294 -171934", "-971965 -1000000 1000000 -1000000", "-1000000 418077 725240 418077", "159038 580961 742893 580961", "-252927 -420875 -252927 -887526", "725240 418077 49737 418077", "-909294 534224 -909294 184917", "-1000000 549481 411096 549481", "-971965 66849 -252927 66849", "742893 923907 742893 66849", "159038 -271962 628981 -271962", "159038 -271962 159038 580961", "411096 534224 -909294 534224", "725240 549481 411096 549481", "-252927 -420875 -252927 66849", "-909294 521448 -909294 534224", "-971965 -271962 411096 -271962", "-1000000 521448 -1000000 549481", "725240 549481 -1000000 549481", "725240 549481 725240 923907", "49737 -403669 -252927 -403669", "411096 -887526 1000000 -887526", "411096 -403669 411096 418077", "159038 580961 1000000 580961", "411096 -1000000 -252927 -1000000", "-62599 923907 -892991 923907", "-892991 -271962 -892991 1000000", "628981 580961 899114 580961", "159038 -171934 159038 184917", "-252927 -171934 -252927 549481", "742893 580961 742893 -403669", "628981 521448 159038 521448", "725240 549481 725240 418077", "-62599 580961 899114 580961"};
    int n = 800400;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> segments = {"-62599 1000000 899114 1000000", "159038 1000000 159038 -1000000", "49737 -420875 -472414 -420875", "628981 -1000000 725240 -1000000", "-909294 -546268 -909294 923907", "628981 549481 -892991 549481", "-252927 923907 -252927 -171934", "-892991 521448 49737 521448", "411096 -887526 411096 418077", "-472414 580961 821930 580961", "-892991 184917 411096 184917", "49737 -403669 49737 649205", "-1000000 -271962 -1000000 923907", "-62599 -271962 -62599 -887526", "725240 923907 411096 923907", "-971965 1000000 725240 1000000", "725240 -887526 742893 -887526", "628981 184917 628981 549481", "821930 -403669 821930 580961", "159038 -441316 -472414 -441316", "49737 649205 -971965 649205", "411096 -420875 159038 -420875", "-1000000 -271962 -1000000 649205", "411096 549481 411096 -887526", "725240 -420875 725240 -546268", "899114 66849 899114 923907", "742893 -887526 -909294 -887526", "411096 534224 821930 534224", "411096 923907 178327 923907", "-472414 418077 -472414 66849", "-1000000 -171934 -1000000 418077", "-971965 -887526 -909294 -887526", "-1000000 -887526 178327 -887526", "49737 -441316 49737 -171934", "899114 66849 899114 923907", "1000000 -420875 1000000 184917", "-909294 -420875 -971965 -420875", "1000000 -420875 -909294 -420875", "899114 -546268 899114 923907", "659604 649205 659604 295643", "1000000 -171934 -252927 -171934", "-62599 549481 899114 549481", "659604 -271962 899114 -271962", "-971965 184917 -62599 184917", "178327 580961 628981 580961", "-396104 -271962 49737 -271962", "725240 972187 -396104 972187", "-62599 295643 -62599 -441316", "-396104 649205 1000000 649205", "411096 66849 411096 580961"};
    int n = 800501;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> segments = {"-62599 1000000 899114 1000000", "159038 1000000 159038 -1000000", "49737 -420875 -472414 -420875", "628981 -1000000 725240 -1000000", "-909294 -546268 -909294 923907", "628981 549481 -892991 549481", "-252927 923907 -252927 -171934", "-892991 521448 49737 521448", "411096 -887526 411096 418077", "-472414 580961 821930 580961", "-892991 184917 411096 184917", "49737 -403669 49737 649205", "-1000000 -271962 -1000000 923907", "-62599 -271962 -62599 -887526", "725240 923907 411096 923907", "-971965 1000000 725240 1000000", "725240 -887526 742893 -887526", "628981 184917 628981 549481", "821930 -403669 821930 580961", "159038 -441316 -472414 -441316", "49737 649205 -971965 649205", "411096 -420875 159038 -420875", "-1000000 -271962 -1000000 649205", "411096 549481 411096 -887526", "725240 -420875 725240 -546268", "899114 66849 899114 923907", "742893 -887526 -909294 -887526", "411096 534224 821930 534224", "411096 923907 178327 923907", "-472414 418077 -472414 66849", "-1000000 -171934 -1000000 418077", "-971965 -887526 -909294 -887526", "-1000000 -887526 178327 -887526", "49737 -441316 49737 -171934", "899114 66849 899114 923907", "1000000 -420875 1000000 184917", "-909294 -420875 -971965 -420875", "1000000 -420875 -909294 -420875", "899114 -546268 899114 923907", "659604 649205 659604 295643", "1000000 -171934 -252927 -171934", "-62599 549481 899114 549481", "659604 -271962 899114 -271962", "-971965 184917 -62599 184917", "178327 580961 628981 580961", "-396104 -271962 49737 -271962", "725240 972187 -396104 972187", "-62599 295643 -62599 -441316", "-396104 649205 1000000 649205", "411096 66849 411096 580961"};
    int n = 800600;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> segments = {"257 -438 257 -623", "417 886 417 347", "376 -264 33 -264", "299 759 962 759", "576 421 576 -239", "12 -777 -471 -777", "44 255 44 802", "-937 698 -937 979", "-225 783 -165 783", "242 600 242 474", "472 -570 693 -570", "158 -271 158 -772", "-132 -825 -985 -825", "-984 -755 294 -755", "787 -447 -348 -447", "356 762 82 762", "-671 -980 -671 50", "-561 -229 875 -229", "571 70 571 -835", "17 387 17 -743", "83 -897 -346 -897", "722 70 -773 70", "791 336 924 336", "-627 -13 651 -13", "883 -894 883 806", "877 163 -619 163", "-755 510 -755 263", "866 819 866 -691", "-934 601 -934 -469", "-890 -383 524 -383", "609 354 609 13", "52 -373 52 -894", "-855 -639 -855 -85", "-691 542 -434 542", "996 -990 996 538", "758 -226 758 978"};
    int n = 1000000;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> segments = {"-360 672 -172 672", "-336 -930 -961 -930", "688 4 688 -967", "689 -237 -701 -237", "100 -867 100 -578", "-758 889 -272 889", "-136 -314 -876 -314", "-901 -640 35 -640", "980 -639 -364 -639", "156 45 610 45", "-245 569 -245 39", "850 40 -215 40", "-687 596 -687 -660", "-509 666 -509 457", "625 -309 372 -309", "-582 -785 836 -785", "-914 131 -914 58", "903 -339 903 -738", "-318 709 -318 71", "-635 742 -635 6", "-49 246 -49 917", "694 -27 -355 -27", "-931 390 143 390", "40 -132 40 319", "346 637 643 637", "945 952 573 952", "-102 898 -102 766", "979 615 979 113", "-761 465 -761 995", "10 398 -182 398", "907 -688 907 -222", "-307 909 -307 966", "331 -520 -525 -520", "132 267 -530 267", "-237 -93 -237 -932", "907 -685 653 -685", "796 501 796 -419", "663 -471 663 155", "23 388 23 -592", "44 401 -478 401", "-335 -89 -755 -89", "99 -437 -475 -437", "486 5 486 -195", "381 -954 -521 -954", "-957 -909 -957 260", "663 -264 663 -582", "219 954 -868 954"};
    int n = 999800;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> segments = {"-236 -540 203 -540", "-209 361 -209 -372", "559 -153 559 -876", "318 -498 318 354", "-887 -619 -887 -956", "382 -139 909 -139", "-186 732 -379 732", "295 -45 295 901", "-777 -529 -937 -529", "-533 -919 -533 831", "-75 -798 -339 -798", "158 841 158 -921", "-830 919 -340 919", "-373 823 -373 482", "641 -569 -160 -569", "603 275 -891 275", "403 -568 403 -1000", "700 -251 700 -756", "678 -517 796 -517", "861 889 302 889", "695 -649 -684 -649", "395 569 826 569", "495 -456 495 -738", "48 195 48 202", "-518 -536 398 -536", "16 733 -985 733", "830 900 -713 900", "23 -627 23 -462", "730 785 -645 785", "-327 -567 -299 -567", "-759 -587 513 -587", "638 -842 638 -14", "-111 -208 -111 -596", "211 847 211 527", "-789 379 394 379", "-452 996 705 996", "-876 -10 -876 -359", "-587 584 -587 -284", "-48 -28 -48 -528", "-928 630 -928 -556", "434 251 434 -666", "866 -428 866 454", "359 -953 -406 -953", "962 -888 962 727"};
    int n = 999600;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> segments = {"-956 824 -745 824", "-637 -184 -637 -380", "-159 792 70 792", "344 367 -847 367", "-239 640 -239 621", "468 -490 -785 -490", "-929 40 -131 40", "179 347 179 -764", "908 -688 908 -92", "292 -430 350 -430", "-583 840 -583 231", "-132 792 -781 792", "-262 -683 -262 -762", "893 -178 893 480", "375 158 375 502", "696 101 696 -228", "-51 -229 -51 659", "42 123 -517 123", "690 834 690 977", "827 152 827 388", "-801 -555 -801 -194", "115 -61 115 -57", "553 -920 528 -920", "719 306 452 306", "778 -280 -244 -280", "744 212 744 -120", "98 -856 -476 -856", "519 -276 519 -262", "-614 -499 -614 35", "-20 95 511 95", "543 623 543 -286", "933 -390 -793 -390", "-898 -461 -898 -319"};
    int n = 999400;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> segments = {"513 -25 513 387", "-996 908 -996 401", "-224 844 -70 844", "535 -424 535 282", "-326 337 -326 -495", "95 64 95 828", "672 520 -827 520", "-371 914 -371 -152", "371 -346 635 -346", "-835 132 -835 -697", "-835 487 -835 -271", "-741 985 -741 -549", "-363 -442 -363 -870", "-933 -646 -933 461", "769 498 769 57", "400 548 400 515", "850 781 850 -133", "27 721 27 -590", "150 -867 -482 -867", "809 -32 706 -32", "979 -727 -13 -727", "-80 -561 -879 -561", "315 -474 315 576", "805 405 805 376", "303 -116 303 -347", "387 -666 387 119", "-481 685 -205 685", "65 990 33 990", "-488 585 -156 585", "971 962 971 941", "-637 577 -637 -605"};
    int n = 999200;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> segments = {"-883 -382 -883 685", "57 692 57 338", "-24 271 388 271", "-718 255 -718 -562", "-491 -167 -491 -528", "980 -207 980 937", "267 939 267 4", "-266 -499 -266 126", "945 57 -66 57", "141 320 385 320", "261 -852 261 -374", "-51 999 -98 999", "-848 -475 -848 -309", "123 73 -589 73", "151 -843 151 -341", "-580 307 -580 31", "-115 -596 -115 230", "-545 534 -545 116", "-664 43 -664 -927", "162 -236 162 574", "-697 -321 -697 -581", "436 -579 -912 -579", "-504 -787 -504 -258", "195 -11 -217 -11", "726 611 93 611", "-528 572 -51 572", "151 559 727 559", "-585 -703 -585 -678", "-819 -516 -164 -516", "-609 -803 138 -803", "-583 121 -583 822", "-934 839 -670 839", "302 341 302 -978", "425 751 425 -821", "-576 557 70 557", "-334 -749 -282 -749", "463 -712 463 -761", "-979 900 -434 900", "-561 -227 883 -227", "275 68 275 96", "871 500 601 500", "-585 -523 -585 284"};
    int n = 999000;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> segments = {"852 856 852 944", "603 -28 -341 -28", "-217 -63 -217 -553", "-667 255 291 255", "773 -81 407 -81", "-111 454 -241 454", "-931 289 464 289", "128 -158 128 -518", "-769 543 -769 707", "-956 600 579 600", "443 44 -356 44", "-299 812 -921 812", "136 -863 -695 -863", "373 -212 373 544", "467 -302 771 -302", "-976 -153 -976 302", "858 -211 -757 -211", "329 837 -651 837", "-471 -923 -471 283", "-468 -970 629 -970", "-566 -500 -355 -500", "336 -889 336 -596", "-934 -145 -934 518", "202 -76 -557 -76", "655 186 655 933", "-335 -578 -335 -368", "-251 -380 -251 603", "901 781 133 781", "482 -994 -822 -994", "-913 -288 -324 -288", "852 898 852 787", "789 879 614 879", "-981 329 -981 -158", "346 -158 346 30", "745 -650 -520 -650", "-21 168 -21 900", "-598 -108 88 -108", "370 476 370 176", "-784 -366 -894 -366", "-657 594 -657 26", "-404 -740 -867 -740", "98 671 98 177", "709 188 709 622", "-318 869 -318 -307", "-25 61 -25 200", "-48 36 376 36", "945 -955 945 218", "782 -735 -492 -735", "405 -432 405 262"};
    int n = 998800;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> segments = {"-10 10 10 10", "0 10 0 20"};
    int n = 1;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> segments = {"-10 10 10 10", "0 10 0 20"};
    int n = 1;
    PenLift* pObj = new PenLift();
    clock_t start = clock();
    int result = pObj->numTimes(segments, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=152347&rd=4515&pm=1649
********************************************************************************
#pragma warning( disable : 4786 ) 
 
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cstdio> 
#include <set> 
#include <map> 
#include <functional> 
#include <deque> 
#include <queue> 
 
using namespace std; 
 
vector< string > tokenize( string in, string kar ) { 
  string::iterator cp = in.begin(); 
  vector< string > oot; 
  while( cp != in.end() ) { 
    while( cp != in.end() && count( kar.begin(), kar.end(), *cp ) ) 
      cp++; 
    if( cp != in.end() ) 
      oot.push_back( string( cp, find_first_of( cp, in.end(), kar.begin(), kar.end() ) ) ); 
    cp = find_first_of( cp, in.end(), kar.begin(), kar.end() ); 
  }; 
  return oot; 
}; 
 
vector< int > sti( const vector< string > &foo ) { 
  int i; 
  vector< int > bar; 
  for( i = 0; i < foo.size(); i++ ) { 
    bar.push_back( atoi( foo[ i ].c_str() ) ); 
  } 
  return bar; 
}; 
 
map< int, int > mepe; 
 
class PenLift { 
  public: 
  int numTimes(vector <string> a, int b) { 
    set< int > kords; 
    int i; 
    for( i = 0; i < a.size(); i++ ) { 
      vector< int > vk = sti( tokenize( a[ i ], " " ) ); 
      for( int j = 0; j < 4; j++ ) 
        kords.insert( vk[ j ] ); 
    } 
    int ct = 0; 
    for( set< int >::iterator itr = kords.begin(); itr != kords.end(); itr++ ) { 
//      printf( "link %d to %d\n", *itr, ct ); 
      mepe[ *itr ] = ct++; 
    } 
    vector< vector< int > > adj( 40000 ); 
    for( i = 0; i < a.size(); i++ ) { 
//      printf( "one\n" ); 
      vector< int > vk = sti( tokenize( a[ i ], " " ) ); 
      for( int j = 0; j < 4; j++ ) 
        vk[ j ] = mepe[ vk[ j ] ]; 
      if( vk[ 0 ] == vk[ 2 ] ) { 
        if( vk[ 3 ] < vk[ 1 ] ) 
          swap( vk[ 3 ], vk[ 1 ] ); 
//        printf( "X %d, %d-%d\n", vk[ 0 ], vk[ 1 ], vk[ 3 ] ); 
        for( int i = vk[ 1 ]; i < vk[ 3 ]; i++ ) { 
          adj[ vk[ 0 ] * 200 + i ].push_back( vk[ 0 ] * 200 + i + 1 ); 
          adj[ vk[ 0 ] * 200 + i + 1 ].push_back( vk[ 0 ] * 200 + i ); 
        } 
      } else { 
        if( vk[ 2 ] < vk[ 0 ] ) 
          swap( vk[ 2 ], vk[ 0 ] ); 
//        printf( "Y %d, %d-%d\n", vk[ 1 ], vk[ 0 ], vk[ 2 ] ); 
        for( int i = vk[ 0 ]; i < vk[ 2 ]; i++ ) { 
          adj[ i * 200 + vk[ 1 ] ].push_back( i * 200 + 200 + vk[ 1 ] ); 
          adj[ i * 200 + 200 + vk[ 1 ] ].push_back( i * 200 + vk[ 1 ] ); 
        } 
      } 
    } 
    for( i = 0; i < adj.size(); i++ ) { 
      sort( adj[ i ].begin(), adj[ i ].end() ); 
      adj[ i ].erase( unique( adj[ i ].begin(), adj[ i ].end() ), adj[ i ].end() ); 
    }; 
    int pensi = -1; 
    for( i = 0; i < adj.size(); i++ ) { 
      if( adj[ i ].size() ) { 
        printf( "new loop\n" ); 
        int odds = 0; 
        queue< int > q; 
        q.push( i ); 
        while( q.size() ) { 
          int tq = q.front(); 
          q.pop(); 
          if( adj[ tq ].size() % 2 ) 
            odds++; 
          for( int j = 0; j < adj[ tq ].size(); j++ ) 
            q.push( adj[ tq ][ j ] ); 
          adj[ tq ].clear(); 
        } 
        printf( "%d odds\n", odds ); 
        if( odds == 0 ) 
          odds = 2; 
        if( b % 2 == 0 ) 
          odds = 2; 
        pensi += odds / 2; 
      } 
    } 
    return pensi; 
  } 
};

********************************************************************************
*******************************************************************************/