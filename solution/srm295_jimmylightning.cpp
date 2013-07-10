/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6102
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

class JimmyLightning {
public:
    int robTheBank(vector<int> doors, vector<string> diamonds);
};

int JimmyLightning::robTheBank(vector<int> doors, vector<string> diamonds) {
    int ret;
    return ret;
}


int test0() {
    vector<int> doors = {6};
    vector<string> diamonds = {"2 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> doors = {1};
    vector<string> diamonds = {"999 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
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
    vector<int> doors = {2};
    vector<string> diamonds = {"999 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> doors = {10};
    vector<string> diamonds = {"1 1 1", "3 2 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> doors = {10, 5, 2};
    vector<string> diamonds = {"1 1 1", "2 1 2", "3 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> doors = {1000};
    vector<string> diamonds = {"999 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 998001;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> doors = {1000};
    vector<string> diamonds = {};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> doors = {5};
    vector<string> diamonds = {"6 1 1", "10 2 1", "12 3 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> doors = {11, 11, 11};
    vector<string> diamonds = {"4 2 1", "7 3 3", "20 8 2"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> doors = {21, 21, 21, 21};
    vector<string> diamonds = {"19 17 1", "11 11 2", "5 5 3", "4 4 4"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> doors = {21, 21, 21, 21, 1};
    vector<string> diamonds = {"19 17 1", "11 11 2", "5 5 3", "4 4 4", "999 1 5"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> doors = {987, 987, 987, 987};
    vector<string> diamonds = {"893 799 1", "517 517 2", "235 235 3", "188 188 4"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 940;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> doors = {837, 741, 982, 798, 308, 639, 334, 631, 801, 405, 390, 191, 39, 581, 910, 915, 820, 827, 50, 568, 579, 745, 479, 602, 773, 831, 362, 338, 426, 275, 970, 834, 944, 339, 537, 656, 940, 642, 99, 101, 727, 503, 385, 865, 195, 866, 833, 28, 732, 589};
    vector<string> diamonds = {"875 533 49", "662 609 41", "655 754 23", "884 593 8", "779 861 25", "813 135 35", "250 149 22", "7 410 2", "44 478 23", "94 319 18", "381 650 14", "668 497 4", "32 627 49", "319 859 11", "242 761 16", "101 903 42", "778 215 49", "30 441 45", "910 87 2", "834 214 47", "454 119 49", "445 696 37", "330 197 41", "240 166 34", "656 372 46", "643 343 22", "843 847 30", "464 241 6", "601 887 19", "147 158 19", "393 877 12", "750 471 9", "527 76 25", "662 690 33", "561 11 6", "280 345 9", "338 878 22", "638 995 41", "524 843 42", "317 833 31", "466 2 24", "944 935 46", "499 869 10", "785 715 48", "903 756 41", "751 637 46", "540 996 29", "851 418 36", "108 897 20", "195 776 46"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 26868;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> doors = {386, 139, 97, 814, 229, 221, 352, 261, 161, 543, 864, 476, 97, 766, 719, 236, 318, 666, 2, 599, 769, 239, 670, 942, 969, 811, 500, 667, 510, 388, 646, 276, 780, 531, 32, 386, 54, 417, 671, 179, 598, 925, 638, 499, 745, 242, 538, 120, 437, 576};
    vector<string> diamonds = {"363 679 20", "186 819 19", "92 518 7", "95 529 40", "559 436 38", "760 177 27", "668 169 43", "383 329 26", "269 392 4", "398 918 46", "404 911 2", "46 298 2", "447 586 8", "31 617 8", "294 554 45", "101 4 22", "469 337 15", "115 583 9", "241 363 27", "767 226 3", "707 795 39", "639 271 17", "934 64 48", "919 383 5", "972 738 26", "109 704 9", "316 818 16", "809 365 3", "631 383 45", "871 532 28", "278 631 37", "1 169 30", "319 678 4", "229 98 3", "744 850 35", "501 338 45", "265 98 50", "727 483 49", "435 493 50", "818 660 27", "702 791 7", "176 416 41", "437 360 31", "447 640 11", "53 561 34", "139 373 20", "313 846 9", "557 740 15", "26 543 38", "654 108 45"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
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
    vector<int> doors = {278, 453, 352, 933, 876, 879, 81, 299, 191, 482, 394, 310, 343, 977, 525, 637, 510, 369, 789, 317, 511, 465, 219, 548, 773, 798, 230, 33, 267, 111, 570, 657, 765, 378, 63, 871, 180, 525, 644, 901, 220, 33, 685, 704, 332, 733, 250, 857, 758, 451};
    vector<string> diamonds = {"99 314 22", "550 487 34", "726 158 42", "163 661 14", "471 334 42", "219 669 20", "334 508 44", "514 231 26", "599 288 2", "212 421 31", "343 439 8", "802 197 10", "258 670 25", "447 26 42", "545 944 25", "805 689 7", "49 717 44", "138 933 48", "238 506 16", "826 903 23", "489 366 49", "602 376 49", "910 316 9", "232 949 21", "975 24 16", "708 758 38", "760 457 47", "632 13 47", "321 963 20", "357 189 41", "765 250 10", "559 813 27", "872 581 32", "434 574 16", "31 263 1", "862 865 12", "665 436 23", "489 169 47", "695 29 44", "123 234 8", "402 735 48", "275 822 43", "851 823 4", "510 426 18", "929 133 47", "788 258 43", "157 913 5", "249 149 50", "702 132 14", "1 465 29"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 3214;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> doors = {852, 420, 135, 438, 407, 199, 263, 91, 423, 122, 2, 8, 302, 824, 197, 6, 412, 62, 80, 185, 227, 116, 364, 452, 978, 495, 874, 284, 159, 525, 896, 163, 899, 964, 551, 829, 829, 976, 530, 80, 713, 514, 156, 237, 566, 551, 339, 89, 92, 463};
    vector<string> diamonds = {"528 185 33", "60 157 17", "94 882 8", "356 671 34", "653 961 7", "861 4 45", "519 183 35", "797 239 23", "496 172 45", "167 467 10", "150 376 24", "924 508 9", "640 892 35", "958 750 39", "362 674 22", "347 422 23", "629 419 14", "807 898 8", "803 256 4", "239 673 48", "891 202 8", "776 644 30", "339 710 29", "686 431 27", "609 331 8", "660 298 43", "188 286 36", "736 185 11", "708 476 21", "285 793 45", "566 985 23", "329 736 8", "473 781 39", "778 259 12", "979 151 10", "521 270 29", "614 775 21", "728 990 46", "899 517 50", "285 922 29", "957 821 33", "184 518 30", "440 527 26", "116 582 30", "399 654 48", "592 980 50", "46 503 43", "436 866 19", "591 319 12", "622 779 26"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> doors = {216, 577, 247, 142, 278, 129, 14, 580, 331, 470, 712, 84, 128, 891, 193, 767, 824, 356, 641, 610, 228, 931, 442, 860, 538, 833, 708, 836, 596, 903, 546, 30, 278, 734, 469, 253, 20, 796, 166, 16, 523, 990, 80, 812, 272, 888, 732, 221, 450, 944};
    vector<string> diamonds = {"389 971 6", "584 608 24", "460 458 22", "768 979 26", "443 19 46", "663 156 36", "561 619 1", "565 158 26", "704 248 50", "470 122 29", "854 916 6", "163 543 32", "813 179 31", "165 438 35", "30 531 50", "265 524 39", "607 764 32", "265 699 18", "990 739 13", "780 157 21", "373 253 13", "878 962 22", "699 388 19", "716 982 49", "90 245 42", "637 621 13", "135 519 28", "416 771 3", "778 502 4", "84 302 5", "466 76 48", "522 38 26", "556 247 37", "543 618 46", "275 291 38", "13 393 8", "656 481 39", "519 617 21", "784 869 26", "115 703 1", "138 311 20", "158 822 25", "638 834 49", "6 520 29", "545 308 42", "700 163 40", "573 718 29", "256 6 38", "230 69 18", "858 594 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> doors = {867, 239, 775, 75, 884, 469, 649, 51, 88, 741, 943, 133, 796, 779, 249, 586, 909, 43, 358, 751, 603, 741, 668, 94, 663, 304, 674, 745, 535, 630, 636, 516, 838, 364, 808, 679, 539, 760, 683, 790, 750, 844, 410, 574, 725, 25, 485, 962, 194, 51};
    vector<string> diamonds = {"126 151 30", "724 55 23", "983 881 23", "65 845 26", "851 905 36", "293 807 33", "300 578 49", "687 182 8", "674 469 48", "776 999 41", "359 973 15", "715 488 48", "416 684 2", "19 89 21", "471 239 46", "732 717 17", "487 540 9", "966 845 1", "57 739 3", "492 379 21", "136 126 8", "186 851 14", "28 339 30", "959 930 20", "295 305 15", "544 815 6", "93 592 13", "266 358 25", "703 244 4", "749 301 50", "75 289 47", "890 463 27", "399 312 15", "987 234 26", "10 501 40", "728 478 21", "901 424 48", "49 184 3", "738 864 43", "798 828 28", "819 573 42", "991 218 19", "537 123 35", "995 482 28", "691 709 39", "919 156 44", "552 601 30", "812 537 43", "171 643 9", "263 784 26"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 966;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> doors = {557, 875, 909, 278, 618, 286, 810, 272, 44, 932, 119, 544, 941, 891, 936, 24, 350, 284, 709, 195, 304, 318, 704, 935, 48, 310, 317, 176, 41, 844, 388, 361, 361, 652, 817, 833, 167, 640, 631, 4, 172, 40, 633, 194, 735, 540, 986, 307, 332, 818};
    vector<string> diamonds = {"282 956 28", "684 838 28", "26 273 37", "746 804 12", "635 838 11", "125 669 19", "927 333 28", "588 724 8", "18 909 47", "891 748 5", "368 608 30", "881 830 28", "33 19 45", "445 777 15", "979 247 17", "852 684 9", "371 659 36", "844 399 5", "635 366 11", "795 751 29", "439 114 36", "323 759 34", "556 877 35", "8 721 5", "940 889 37", "522 95 6", "604 844 34", "492 571 5", "521 298 41", "397 537 27", "216 979 13", "421 179 9", "837 767 38", "376 917 14", "434 927 21", "705 966 29", "925 266 20", "415 45 42", "429 830 46", "759 649 39", "703 780 10", "764 394 3", "540 397 31", "644 272 46", "451 287 12", "997 791 22", "687 95 27", "758 992 30", "129 172 15", "196 140 21"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1286;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> doors = {691, 326, 777, 865, 819, 109, 291, 55, 556, 33, 776, 837, 59, 182, 325, 682, 323, 979, 792, 321, 998, 774, 863, 313, 173, 602, 533, 499, 748, 428, 278, 230, 417, 525, 504, 335, 146, 61, 715, 315, 728, 600, 335, 876, 628, 867, 691, 295, 622, 481};
    vector<string> diamonds = {"639 159 45", "781 449 31", "520 535 17", "244 816 7", "719 224 9", "159 283 9", "250 545 16", "424 988 6", "251 6 45", "778 450 25", "666 307 22", "321 660 43", "158 264 19", "179 882 44", "953 890 34", "855 581 14", "553 13 22", "869 658 40", "596 842 31", "532 960 42", "119 934 3", "64 381 8", "289 970 40", "339 199 5", "615 468 1", "960 682 24", "621 376 45", "742 931 23", "115 186 40", "475 977 46", "405 155 40", "793 892 20", "76 984 15", "883 329 41", "205 479 2", "214 53 45", "554 301 50", "113 515 13", "342 409 20", "22 373 32", "35 979 48", "996 646 18", "466 637 40", "111 265 48", "538 436 42", "626 657 28", "623 292 9", "58 713 50", "713 543 48", "613 829 29"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1972;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> doors = {76, 756, 148, 904, 722, 281, 964, 824, 624, 487, 820, 523, 859, 153, 711, 336, 44, 96, 345, 311, 709, 829, 245, 611, 865, 355, 653, 204, 79, 985, 839, 864, 697, 770, 760, 377, 52, 428, 107, 573, 640, 862, 423, 327, 75, 339, 946, 48, 558, 870};
    vector<string> diamonds = {"255 342 35", "986 730 27", "109 588 17", "607 541 15", "615 492 50", "196 656 37", "569 645 28", "12 296 4", "812 782 37", "833 384 4", "429 270 20", "679 455 26", "337 176 50", "880 226 11", "475 758 12", "214 94 6", "835 660 35", "22 183 16", "518 115 16", "740 727 14", "217 460 19", "657 73 30", "264 986 29", "526 557 32", "738 698 13", "379 962 46", "133 268 15", "177 374 27", "156 474 50", "560 933 2", "56 504 22", "271 682 15", "280 698 35", "562 251 3", "325 687 38", "628 327 5", "988 981 26", "235 219 28", "106 329 5", "605 600 34", "726 505 46", "719 402 8", "948 523 40", "278 667 10", "421 708 9", "877 49 5", "722 620 43", "479 204 18", "445 728 14", "666 605 11"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 877;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> doors = {945, 3, 802, 504, 162, 85, 966, 143, 217, 433, 93, 334, 933, 454, 981, 771, 264, 662, 787, 741, 904, 787, 64, 733, 817, 641, 521, 832, 253, 273, 386, 662, 49, 786, 271, 463, 110, 648, 153, 475, 610, 700, 535, 627, 118, 470, 575, 132, 125, 196};
    vector<string> diamonds = {"71 566 31", "625 906 40", "694 220 28", "949 436 30", "979 151 28", "618 813 29", "441 372 6", "111 902 32", "512 872 26", "607 324 3", "489 697 50", "101 345 36", "235 543 6", "498 267 29", "605 761 16", "659 302 12", "653 545 49", "925 434 49", "481 463 50", "433 381 1", "308 535 16", "760 905 27", "469 158 48", "630 479 11", "819 434 48", "715 36 46", "38 553 27", "588 742 46", "966 259 32", "474 683 6", "174 193 44", "300 718 49", "558 21 36", "713 697 18", "723 872 49", "687 369 3", "909 683 17", "450 446 43", "703 155 38", "59 131 13", "923 355 49", "506 32 50", "650 925 48", "414 457 44", "897 110 39", "603 588 28", "135 895 16", "503 849 7", "83 301 47", "57 640 46"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 866;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> doors = {629, 629, 478, 802, 390, 385, 106, 946, 910, 358, 202, 82, 470, 261, 670, 148, 529, 57, 434, 724, 632, 347, 443, 134, 948, 32, 454, 940, 543, 440, 35, 582, 233, 285, 520, 775, 551, 728, 709, 238, 411, 91, 227, 990, 52, 403, 866, 454, 56, 799};
    vector<string> diamonds = {"153 916 49", "691 27 24", "746 82 37", "238 630 18", "920 996 17", "510 7 39", "327 902 22", "775 694 12", "970 179 36", "232 937 42", "604 213 25", "140 320 25", "35 588 38", "500 490 28", "962 240 10", "138 183 19", "467 577 49", "175 386 41", "566 426 2", "926 729 14", "871 674 4", "864 152 34", "916 536 21", "668 943 1", "230 407 38", "971 497 12", "988 939 16", "971 188 44", "291 710 5", "530 671 34", "97 637 12", "712 338 30", "708 529 14", "519 234 8", "793 335 44", "605 91 26", "309 258 29", "541 727 5", "134 53 41", "604 406 7", "334 533 49", "588 657 20", "369 850 6", "448 20 43", "730 734 17", "798 413 9", "533 126 21", "859 683 21", "949 721 13", "142 646 24"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 3297;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> doors = {63, 103, 837, 767, 211, 145, 309, 840, 421, 481, 102, 647, 655, 116, 679, 204, 211, 897, 359, 56, 673, 990, 892, 950, 269, 564, 266, 658, 374, 549, 419, 384, 934, 792, 276, 972, 483, 688, 89, 128, 86, 291, 716, 83, 702, 655, 177, 346, 532, 239};
    vector<string> diamonds = {"110 146 35", "253 775 47", "742 325 6", "701 680 22", "343 563 28", "387 552 40", "776 193 27", "83 173 37", "52 426 39", "339 242 41", "470 597 45", "848 7 25", "988 737 20", "909 665 43", "892 487 45", "881 315 17", "968 558 18", "619 179 18", "618 610 8", "247 228 50", "748 818 3", "147 82 9", "632 977 18", "664 568 32", "86 890 34", "204 126 26", "194 348 22", "513 493 40", "839 91 11", "854 758 5", "731 64 47", "164 133 5", "82 319 31", "396 953 42", "493 550 38", "592 574 50", "12 315 14", "271 602 3", "594 137 37", "585 7 7", "582 119 9", "90 404 19", "480 869 44", "35 245 22", "257 657 27", "7 703 25", "761 185 43", "781 833 37", "144 582 33", "484 124 18"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 6521;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> doors = {677, 326, 983, 59, 60, 71, 231, 5, 847, 832, 315, 635, 734, 251, 436, 570, 183, 145, 743, 917, 445, 840, 636, 290, 928, 839, 519, 723, 422, 560, 365, 47, 19, 249, 163, 287, 290, 290, 611, 337, 858, 537, 466, 734, 909, 26, 179, 180, 938, 541};
    vector<string> diamonds = {"25 254 30", "426 893 14", "469 860 12", "538 345 28", "427 705 41", "579 970 41", "954 437 26", "484 403 4", "311 45 22", "667 717 37", "272 932 23", "256 95 46", "109 123 18", "172 568 41", "628 203 23", "10 46 33", "27 369 37", "545 329 45", "990 474 45", "217 552 17", "894 351 3", "38 282 8", "982 145 28", "583 426 9", "149 626 12", "591 371 18", "885 262 19", "502 612 33", "376 626 12", "570 165 46", "967 457 32", "22 944 47", "925 22 17", "717 183 40", "746 317 8", "904 996 32", "626 603 43", "661 609 37", "914 345 1", "340 317 19", "93 664 20", "487 640 8", "479 411 4", "586 689 19", "449 965 38", "833 294 49", "754 504 20", "965 486 38", "881 558 33", "647 910 47"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 914;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> doors = {659, 990, 949, 778, 272, 537, 38, 558, 809, 352, 391, 683, 613, 377, 586, 919, 947, 608, 244, 4, 872, 245, 337, 876, 978, 956, 467, 628, 489, 864, 528, 539, 434, 857, 62, 878, 615, 35, 918, 778, 176, 324, 207, 221, 900, 842, 902, 224, 556, 792};
    vector<string> diamonds = {"449 517 44", "506 910 44", "379 488 2", "632 856 37", "572 117 33", "967 661 45", "923 996 50", "552 790 43", "152 441 41", "724 872 40", "506 982 3", "455 979 16", "875 950 38", "994 337 42", "401 22 36", "704 480 43", "368 134 48", "577 70 49", "474 129 15", "241 890 20", "821 967 25", "112 949 16", "215 494 7", "773 626 41", "900 762 30", "857 564 20", "568 684 18", "765 539 22", "162 192 30", "187 76 32", "767 280 22", "757 423 25", "942 529 40", "358 217 8", "587 338 14", "174 183 19", "35 654 11", "953 346 46", "718 980 21", "540 898 3", "651 607 23", "923 67 16", "485 499 13", "305 696 33", "642 530 31", "342 665 49", "39 925 8", "672 245 11", "468 271 16", "743 526 22"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 379;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> doors = {877, 410, 142, 685, 953, 539, 407, 738, 793, 159, 374, 744, 138, 816, 406, 811, 205, 646, 312, 156, 806, 442, 601, 177, 175, 466, 276, 249, 123, 550, 903, 376, 612, 141, 680, 326, 765, 742, 701, 268, 718, 736, 183, 503, 659, 354, 16, 888, 495, 832};
    vector<string> diamonds = {"893 628 35", "369 491 34", "214 270 32", "437 687 49", "811 266 1", "208 746 32", "726 295 44", "629 408 39", "209 23 17", "538 617 42", "519 458 6", "7 548 23", "890 586 2", "632 844 41", "455 664 21", "377 80 2", "180 68 18", "664 372 2", "31 800 17", "315 461 32", "555 46 41", "1 219 2", "106 767 36", "415 673 3", "414 807 31", "176 649 29", "106 369 35", "304 66 33", "681 258 1", "928 881 5", "377 364 10", "39 579 24", "207 171 9", "563 845 49", "117 404 10", "430 902 24", "834 916 22", "764 431 24", "16 960 26", "899 591 17", "541 135 49", "97 622 39", "470 272 37", "717 5 7", "429 942 26", "931 645 23", "626 950 47", "710 397 31", "394 874 11", "785 258 26"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 22452;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> doors = {460, 116, 455, 259, 407, 901, 278, 852, 902, 736, 210, 187, 706, 467, 200, 958, 474, 430, 663, 978, 323, 814, 481, 417, 127, 810, 36, 596, 343, 500, 767, 782, 103, 437, 799, 786, 438, 587, 273, 503, 399, 735, 679, 38, 14, 787, 867, 826, 52, 423};
    vector<string> diamonds = {"609 717 17", "461 876 50", "488 999 5", "354 922 46", "81 531 8", "655 893 10", "951 902 9", "912 75 8", "146 868 46", "696 392 16", "426 644 30", "710 832 30", "292 222 49", "307 466 19", "466 843 2", "368 881 8", "324 946 10", "253 467 36", "372 789 47", "526 346 3", "930 231 30", "768 491 2", "231 283 37", "639 21 7", "686 976 34", "314 387 11", "941 114 35", "530 736 21", "113 719 37", "575 53 13", "312 612 17", "255 703 9", "810 501 47", "299 205 7", "861 769 42", "589 714 29", "460 966 15", "918 676 14", "102 966 47", "213 734 12", "831 770 37", "183 338 50", "679 870 16", "725 517 2", "339 519 10", "564 889 19", "611 312 15", "43 159 43", "978 31 11", "864 155 34"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 3573;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> doors = {207, 861, 900, 738, 375, 492, 64, 763, 166, 461, 624, 306, 593, 99, 558, 414, 972, 302, 750, 601, 235, 830, 511, 777, 307, 265, 826, 588, 129, 749, 826, 954, 201, 361, 863, 42, 14, 823, 141, 764, 694, 413, 316, 428, 279, 486, 550, 599, 331, 627};
    vector<string> diamonds = {"330 659 40", "867 371 5", "177 843 35", "676 568 33", "408 545 37", "350 255 23", "583 569 39", "712 749 46", "392 321 49", "632 619 20", "804 700 2", "809 971 3", "864 651 21", "499 22 11", "127 457 41", "62 79 49", "357 864 9", "896 897 41", "298 937 14", "518 145 48", "315 431 6", "15 266 39", "362 974 31", "15 467 15", "578 414 1", "478 270 6", "724 17 38", "915 165 48", "582 454 15", "400 557 41", "287 513 32", "399 20 24", "588 431 42", "270 657 19", "650 613 35", "706 869 27", "825 968 40", "167 506 22", "443 788 16", "304 624 10", "942 636 49", "932 203 2", "72 698 23", "990 59 4", "717 684 24", "721 392 21", "116 772 20", "618 739 40", "384 348 43", "241 194 36"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 3469;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> doors = {189, 819, 122, 468, 471, 945, 824, 890, 612, 961, 95, 919, 493, 797, 279, 422, 507, 384, 724, 320, 765, 963, 861, 498, 993, 990, 644, 168, 485, 116, 124, 144, 301, 392, 784, 366, 945, 34, 233, 355, 572, 209, 639, 73, 128, 376, 42, 603, 130, 710};
    vector<string> diamonds = {"265 726 16", "418 657 29", "974 493 14", "643 21 18", "405 282 14", "599 839 24", "274 902 13", "470 61 22", "628 30 26", "759 678 17", "199 499 48", "745 883 10", "641 309 19", "320 384 8", "717 697 7", "100 165 28", "105 256 11", "520 767 5", "600 628 17", "916 267 19", "953 524 1", "447 441 40", "343 261 5", "374 620 27", "514 496 50", "899 517 14", "397 136 43", "540 440 24", "702 109 18", "984 730 50", "223 179 15", "253 167 50", "372 283 26", "937 631 7", "929 60 2", "925 404 10", "162 437 40", "983 908 38", "793 664 22", "663 522 20", "843 99 4", "471 446 6", "91 177 20", "365 394 26", "399 882 44", "886 122 44", "313 649 10", "906 190 28", "187 74 49", "723 250 28"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 3787;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> doors = {473, 775, 489, 393, 573, 197, 752, 327, 169, 699, 773, 726, 572, 919, 557, 235, 655, 808, 192, 272, 835, 685, 914, 784, 484, 722, 434, 738, 64, 167, 957, 614, 558, 457, 891, 488, 426, 956, 294, 572, 688, 60, 440, 705, 910, 357, 859, 713, 263, 338};
    vector<string> diamonds = {"169 300 23", "88 822 22", "568 218 18", "725 531 7", "679 764 30", "512 564 36", "427 707 22", "68 452 14", "247 414 17", "367 985 30", "827 3 22", "48 729 14", "715 15 32", "319 859 9", "878 783 31", "367 719 1", "395 139 8", "154 505 18", "366 504 7", "660 719 4", "822 222 4", "976 882 37", "185 159 38", "115 175 35", "661 987 50", "755 577 40", "163 271 19", "968 438 12", "693 784 29", "711 50 8", "222 888 42", "199 375 30", "865 310 47", "995 818 15", "340 774 36", "432 518 32", "454 853 46", "719 427 44", "973 591 12", "888 879 11", "17 579 20", "33 172 45", "250 466 19", "570 476 32", "78 505 49", "733 313 16", "333 863 46", "301 956 31", "438 844 26", "759 487 27"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 47134;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> doors = {359, 307, 145, 754, 241, 490, 732, 901, 94, 979, 76, 373, 284, 460, 689, 461, 61, 214, 380, 955, 494, 511, 237, 835, 929, 299, 718, 227, 727, 121, 361, 819, 930, 7, 666, 228, 110, 823, 170, 296, 337, 836, 809, 648, 733, 633, 898, 949, 818, 191};
    vector<string> diamonds = {"910 41 43", "615 725 45", "730 117 29", "499 987 25", "267 307 29", "990 844 29", "139 146 15", "384 539 13", "326 313 21", "56 560 21", "702 852 30", "591 642 13", "794 725 39", "318 379 16", "309 341 50", "304 42 39", "835 776 8", "387 36 41", "164 963 38", "552 70 50", "764 428 32", "653 761 47", "361 479 5", "836 823 10", "653 2 11", "109 462 15", "271 111 9", "409 38 25", "926 57 33", "291 554 17", "722 243 11", "156 487 47", "200 661 47", "571 923 35", "866 640 33", "747 984 42", "697 862 23", "666 421 31", "515 717 36", "45 120 32", "36 948 33", "678 265 16", "570 673 12", "804 283 17", "355 88 41", "620 198 22", "300 491 3", "700 681 34", "43 460 13", "492 175 17"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 24161;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> doors = {256, 215, 404, 705, 353, 490, 340, 114, 81, 486, 615, 466, 397, 596, 243, 172, 425, 267, 217, 653, 458, 873, 692, 960, 704, 705, 971, 484, 528, 594, 301, 681, 921, 487, 783, 320, 705, 188, 711, 734, 401, 711, 288, 966, 776, 523, 89, 832, 944, 533};
    vector<string> diamonds = {"299 180 33", "847 927 13", "723 881 12", "780 713 28", "739 81 45", "869 199 12", "746 178 24", "146 627 30", "758 311 41", "112 7 36", "115 726 48", "79 384 44", "177 597 18", "931 10 14", "826 727 50", "871 129 32", "357 971 9", "259 52 29", "564 156 13", "502 473 8", "144 916 33", "32 589 45", "265 737 1", "898 986 40", "417 60 8", "747 274 39", "262 806 33", "246 819 24", "254 166 14", "895 192 38", "472 492 34", "392 637 18", "798 491 27", "255 690 13", "693 481 1", "666 247 15", "818 41 43", "330 816 2", "491 35 2", "274 748 17", "508 171 41", "312 599 10", "415 630 17", "126 317 50", "460 918 6", "752 903 46", "39 882 23", "775 616 32", "57 298 32", "516 281 39"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 8921;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> doors = {531, 409, 55, 837, 442, 867, 30, 788, 941, 960, 756, 904, 339, 212, 96, 519, 934, 930, 445, 689, 886, 634, 434, 658, 326, 359, 207, 589, 243, 423, 691, 885, 408, 374, 438, 122, 611, 933, 575, 722, 915, 743, 617, 441, 593, 883, 869, 354, 971, 969};
    vector<string> diamonds = {"760 331 37", "175 893 3", "378 690 7", "607 441 17", "586 890 10", "6 534 39", "809 796 48", "616 464 47", "271 494 44", "633 779 40", "265 941 7", "531 483 28", "775 434 2", "226 952 11", "683 1 7", "578 559 29", "74 243 2", "808 204 42", "490 54 21", "368 585 43", "608 443 11", "968 984 34", "648 333 3", "146 218 39", "252 640 2", "452 888 10", "658 223 29", "950 637 31", "328 892 36", "808 395 43", "928 315 15", "114 939 23", "45 47 50", "359 838 48", "368 433 45", "164 45 12", "72 528 39", "487 980 32", "428 463 18", "840 182 13", "560 902 8", "532 743 46", "495 259 47", "757 609 31", "864 327 15", "215 130 21", "942 116 21", "147 559 36", "600 442 17", "385 409 44"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 19881;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> doors = {960, 280, 121, 913, 196, 284, 927, 917, 984, 2, 917, 728, 144, 552, 71, 188, 612, 536, 504, 523, 168, 992, 275, 970, 423, 814, 966, 405, 548, 777, 161, 839, 163, 681, 632, 340, 769, 230, 737, 224, 153, 692, 776, 241, 523, 194, 874, 23, 666, 428};
    vector<string> diamonds = {"273 354 19", "154 406 25", "154 313 21", "529 326 5", "303 638 47", "471 502 26", "664 652 18", "994 191 43", "272 233 4", "182 420 47", "587 809 37", "737 267 32", "322 273 7", "506 778 26", "329 770 28", "609 836 6", "968 922 16", "379 734 45", "245 942 50", "934 53 22", "929 772 32", "888 719 21", "182 605 31", "10 708 19", "838 114 44", "887 419 27", "591 10 49", "476 856 12", "735 812 40", "812 338 48", "264 849 48", "738 687 42", "760 212 19", "853 884 22", "669 24 45", "224 413 40", "378 854 25", "10 409 40", "12 144 27", "665 94 2", "550 549 4", "575 52 44", "762 372 11", "153 371 17", "176 921 14", "750 26 14", "249 93 25", "681 289 33", "633 635 27", "885 240 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1330;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> doors = {571, 595, 462, 204, 921, 495, 794, 844, 853, 790, 354, 840, 210, 809, 965, 787, 996, 334, 952, 576, 322, 499, 586, 430, 690, 110, 514, 888, 700, 728, 26, 789, 810, 6, 122, 198, 311, 989, 251, 578, 629, 519, 848, 388, 626, 151, 79, 999, 500, 275};
    vector<string> diamonds = {"771 302 36", "140 909 12", "283 883 23", "691 394 14", "691 768 18", "250 112 11", "953 990 35", "171 835 4", "512 252 46", "66 862 48", "147 360 47", "979 368 40", "896 281 23", "809 959 2", "423 841 24", "905 526 34", "684 623 23", "966 353 1", "57 580 33", "747 716 24", "375 833 49", "66 586 20", "140 342 26", "353 979 30", "985 968 48", "541 69 46", "89 663 14", "113 642 36", "976 271 14", "884 102 17", "809 563 25", "101 145 28", "43 815 26", "781 60 30", "841 622 47", "892 271 35", "359 864 15", "952 741 27", "795 307 45", "207 39 33", "927 171 41", "951 279 36", "745 587 32", "743 683 39", "659 322 21", "518 158 43", "420 855 39", "149 600 50", "581 265 47", "392 369 5"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 2631;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> doors = {427, 187, 648, 492, 612, 442, 101, 970, 681, 177, 583, 189, 181, 15, 445, 960, 476, 705, 585, 120, 884, 139, 752, 692, 792, 706, 290, 41, 263, 352, 574, 172, 671, 568, 370, 327, 839, 323, 473, 767, 941, 491, 625, 448, 101, 592, 26, 884, 546, 479};
    vector<string> diamonds = {"521 798 37", "345 483 45", "608 510 25", "45 526 31", "721 417 9", "87 60 49", "399 738 15", "702 975 30", "427 923 39", "737 811 32", "274 675 24", "676 788 33", "469 756 46", "76 20 8", "455 638 24", "567 945 12", "652 139 32", "811 261 9", "884 679 35", "282 264 37", "442 596 42", "321 884 30", "905 179 33", "613 582 5", "969 780 35", "373 50 1", "843 896 42", "820 420 9", "382 484 28", "738 608 35", "38 91 4", "314 951 41", "75 96 14", "988 850 14", "5 487 48", "909 36 19", "467 16 22", "997 313 34", "306 415 6", "921 709 24", "515 9 19", "484 382 45", "725 876 19", "500 745 26", "620 487 32", "361 432 48", "499 410 35", "474 86 35", "570 476 35", "730 767 19"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 3499;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> doors = {432, 431, 139, 541, 696, 669, 124, 344, 874, 109, 535, 942, 411, 448, 335, 967, 29, 201, 745, 20, 349, 119, 854, 479, 940, 721, 69, 611, 225, 25, 892, 166, 882, 989, 858, 288, 224, 579, 348, 528, 554, 939, 71, 645, 863, 735, 530, 267, 518, 980};
    vector<string> diamonds = {"33 60 12", "400 45 1", "856 563 42", "672 165 17", "564 371 30", "309 633 2", "744 55 12", "802 50 41", "754 747 43", "159 195 3", "855 434 24", "622 506 22", "23 832 37", "686 412 47", "267 881 45", "844 766 1", "799 699 47", "384 907 38", "583 109 1", "738 573 31", "810 776 17", "450 699 49", "332 944 16", "529 118 44", "907 270 4", "847 662 29", "770 773 43", "239 870 26", "71 37 42", "878 209 4", "634 314 28", "515 892 42", "215 141 18", "4 866 16", "666 301 7", "344 726 28", "229 914 29", "379 84 1", "622 952 40", "296 85 13", "79 681 45", "197 401 47", "559 695 15", "415 88 49", "420 102 26", "118 995 41", "575 370 23", "726 842 47", "242 469 6", "741 554 19"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 3944;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> doors = {999, 426, 733, 371, 730, 394, 352, 231, 948, 86, 451, 192, 10, 689, 5, 318, 109, 442, 178, 802, 801, 764, 268, 855, 518, 765, 798, 597, 464, 681, 351, 170, 803, 520, 605, 934, 222, 443, 596, 621, 432, 194, 38, 701, 967, 540, 871, 312, 854, 962};
    vector<string> diamonds = {"366 261 24", "663 408 47", "641 761 31", "723 197 33", "20 950 30", "941 433 31", "360 651 23", "352 136 35", "598 616 31", "203 842 36", "265 664 26", "211 960 44", "807 484 4", "160 664 15", "154 797 31", "287 308 22", "329 72 1", "554 927 21", "200 824 13", "381 661 9", "502 327 12", "188 541 46", "932 505 14", "358 766 9", "343 258 31", "3 813 15", "203 974 30", "188 197 9", "633 593 47", "155 930 24", "202 369 7", "686 328 40", "556 949 40", "961 730 30", "859 764 23", "588 124 31", "951 670 36", "71 990 13", "708 352 15", "428 304 31", "812 248 2", "45 833 32", "552 566 9", "18 463 32", "457 978 17", "149 665 43", "649 855 15", "241 272 4", "621 482 17", "181 650 15"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 4277;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> doors = {525, 851, 375, 431, 929, 387, 789, 961, 915, 415, 523, 199, 273, 701, 273, 562, 235, 389, 919, 713, 615, 158, 100, 782, 648, 312, 697, 888, 739, 724, 413, 574, 433, 206, 1, 473, 354, 240, 321, 209, 294, 907, 438, 38, 703, 715, 15, 258, 156, 4};
    vector<string> diamonds = {"376 480 13", "79 784 42", "318 802 46", "855 642 26", "862 310 17", "81 675 13", "175 346 11", "982 919 31", "849 998 22", "923 803 25", "758 726 33", "545 2 40", "566 543 22", "235 543 36", "586 713 24", "86 373 27", "624 84 49", "233 812 37", "18 186 50", "476 929 5", "815 120 14", "582 994 6", "682 254 2", "363 774 48", "603 326 41", "863 328 40", "284 791 36", "5 430 1", "947 134 35", "52 550 4", "331 537 30", "963 718 21", "101 317 20", "526 653 15", "681 143 12", "739 115 3", "949 353 18", "266 364 22", "408 57 38", "329 99 27", "545 414 41", "153 491 14", "441 110 9", "463 38 46", "297 902 12", "797 67 4", "739 349 11", "813 386 47", "914 773 32", "782 647 35"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 3985;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> doors = {697, 570, 483, 890, 691, 6, 757, 378, 338, 149, 558, 61, 663, 267, 861, 820, 947, 645, 588, 196, 824, 989, 111, 999, 593, 699, 373, 9, 51, 828, 25, 560, 137, 297, 527, 651, 517, 589, 443, 590, 656, 455, 168, 488, 486, 562, 796, 775, 254, 626};
    vector<string> diamonds = {"912 243 28", "62 900 31", "654 569 36", "726 928 19", "112 361 14", "777 622 12", "992 862 20", "668 770 38", "294 819 39", "963 851 44", "97 35 3", "761 555 7", "804 260 21", "67 245 28", "547 248 12", "784 858 14", "878 24 27", "606 627 47", "287 301 20", "826 743 39", "349 326 11", "28 989 31", "362 990 44", "763 310 31", "365 273 38", "248 709 33", "939 156 22", "502 183 22", "138 234 3", "326 699 39", "871 155 37", "808 769 11", "636 956 2", "172 327 37", "302 819 9", "288 195 27", "12 894 4", "552 994 19", "315 416 41", "795 339 48", "737 84 20", "240 200 2", "204 286 21", "605 678 6", "375 94 16", "972 238 39", "937 305 37", "472 559 20", "67 183 23", "244 340 15"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1261;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> doors = {846, 416, 775, 909, 770, 609, 341, 807, 660, 25, 105, 245, 278, 665, 420, 315, 412, 698, 419, 176, 989, 530, 329, 7, 754, 477, 820, 480, 251, 241, 331, 392, 299, 222, 362, 801, 26, 43, 236, 760, 386, 348, 168, 726, 704, 361, 60, 511, 516, 710};
    vector<string> diamonds = {"515 342 43", "361 840 18", "762 64 27", "963 337 30", "131 858 6", "194 472 13", "735 458 4", "28 314 9", "414 435 6", "754 305 45", "344 747 47", "300 881 14", "85 468 30", "322 755 3", "226 264 43", "781 326 27", "167 465 40", "115 37 23", "180 844 40", "431 227 8", "151 253 20", "668 638 7", "947 574 33", "423 941 10", "414 843 28", "754 370 24", "625 25 32", "944 462 6", "964 767 35", "914 580 43", "440 413 9", "326 394 33", "559 254 2", "717 944 47", "640 789 49", "275 206 27", "204 83 14", "210 281 40", "111 713 29", "801 801 35", "546 979 46", "560 484 42", "199 854 39", "343 208 38", "915 799 13", "993 459 41", "160 271 2", "772 469 8", "777 750 15", "761 203 16"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 559;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> doors = {399, 261, 418, 957, 401, 335, 743, 611, 539, 166, 302, 767, 825, 243, 107, 104, 737, 673, 702, 783, 490, 111, 835, 162, 527, 528, 705, 839, 893, 528, 839, 39, 619, 295, 213, 372, 227, 584, 332, 348, 600, 273, 406, 606, 354, 464, 82, 194, 666, 34};
    vector<string> diamonds = {"449 160 3", "706 187 36", "314 385 12", "510 669 9", "537 776 18", "50 715 8", "613 61 39", "748 177 12", "32 830 24", "908 940 3", "495 608 24", "805 185 2", "789 566 22", "903 886 19", "260 427 2", "920 9 49", "905 919 12", "445 446 27", "130 367 30", "404 892 4", "556 312 19", "684 296 49", "369 306 48", "921 20 35", "740 612 27", "327 135 1", "222 16 34", "461 674 5", "292 382 42", "151 566 47", "714 60 43", "611 404 31", "208 259 44", "551 824 3", "880 613 44", "642 61 20", "806 14 43", "528 759 1", "671 723 1", "923 332 33", "903 286 28", "420 840 36", "165 863 2", "517 857 28", "534 777 50", "674 991 9", "844 98 36", "253 28 30", "371 101 27", "977 557 24"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 5098;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> doors = {328, 145, 599, 784, 298, 138, 464, 238, 369, 640, 919, 74, 772, 683, 18, 597, 752, 48, 921, 690, 434, 569, 200, 798, 313, 892, 867, 746, 702, 516, 294, 167, 372, 434, 626, 318, 751, 977, 710, 431, 597, 876, 233, 161, 696, 540, 501, 418, 112, 31};
    vector<string> diamonds = {"354 701 36", "556 637 46", "831 55 39", "109 837 38", "982 406 18", "43 996 10", "103 892 19", "348 802 3", "221 516 6", "97 724 44", "952 925 28", "566 837 2", "277 947 31", "801 725 22", "585 33 42", "210 604 17", "780 913 37", "47 155 47", "766 406 24", "261 562 19", "818 47 19", "8 285 29", "592 442 2", "632 112 15", "956 366 17", "26 272 28", "53 990 27", "287 319 46", "324 361 19", "372 706 7", "519 956 34", "149 750 2", "597 281 27", "144 659 15", "335 595 45", "134 94 28", "172 175 16", "704 831 8", "796 263 3", "12 383 20", "109 534 40", "298 655 40", "69 387 39", "371 79 48", "62 282 37", "783 224 31", "864 346 39", "239 465 37", "458 573 27", "767 520 8"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> doors = {140, 219, 50, 844, 923, 46, 317, 125, 694, 545, 675, 333, 788, 817, 185, 550, 769, 189, 3, 993, 669, 686, 252, 601, 428, 907, 410, 338, 142, 832, 547, 210, 861, 816, 730, 934, 452, 390, 579, 760, 610, 834, 358, 571, 459, 280, 280, 16, 423, 54};
    vector<string> diamonds = {"349 21 49", "737 745 2", "495 443 39", "138 357 32", "725 715 9", "139 888 48", "834 714 21", "303 616 38", "199 524 23", "404 48 47", "626 186 34", "189 620 47", "23 647 42", "557 513 5", "790 57 2", "764 355 34", "940 297 17", "278 132 9", "765 510 14", "515 982 17", "944 188 14", "468 64 48", "999 196 17", "749 626 37", "287 606 3", "875 199 7", "344 618 27", "225 454 18", "512 991 43", "347 917 25", "790 181 26", "190 236 46", "589 194 9", "329 408 39", "660 58 49", "504 901 8", "66 90 28", "519 409 10", "971 416 48", "918 971 2", "78 165 10", "984 557 35", "737 544 29", "178 556 12", "441 768 42", "230 645 25", "443 966 29", "618 347 32", "629 959 16", "878 704 41"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1580;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> doors = {779, 836, 505, 889, 643, 10, 107, 738, 162, 259, 65, 364, 152, 642, 321, 772, 433, 197, 680, 979, 257, 887, 827, 163, 366, 747, 297, 762, 563, 17, 257, 410, 152, 230, 681, 148, 211, 195, 110, 141, 459, 594, 913, 922, 49, 245, 411, 505, 46, 72};
    vector<string> diamonds = {"797 361 4", "906 476 48", "741 807 24", "866 367 18", "181 104 8", "887 179 5", "103 874 33", "957 174 9", "620 385 19", "662 646 42", "993 858 48", "46 777 42", "706 11 3", "658 214 4", "154 647 11", "90 392 29", "76 921 32", "448 261 50", "131 237 15", "54 892 47", "85 831 44", "655 440 19", "634 816 2", "477 26 17", "154 401 4", "209 577 17", "832 678 31", "970 132 36", "116 349 7", "442 174 45", "706 525 27", "706 9 10", "851 418 26", "666 110 50", "971 311 29", "874 977 33", "854 562 48", "983 295 34", "566 770 20", "565 744 30", "205 794 11", "592 625 9", "249 684 15", "883 742 28", "882 833 46", "276 268 39", "247 59 34", "525 567 47", "736 6 35", "470 798 33"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 32506;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> doors = {960, 146, 861, 893, 386, 296, 469, 723, 277, 330, 676, 28, 640, 825, 552, 886, 16, 484, 280, 271, 14, 182, 488, 708, 34, 269, 877, 720, 182, 927, 195, 207, 759, 950, 702, 739, 900, 138, 98, 783, 79, 155, 684, 488, 197, 123, 931, 159, 174, 341};
    vector<string> diamonds = {"415 979 30", "916 62 13", "705 323 8", "103 427 18", "83 788 30", "208 859 30", "599 621 42", "466 719 48", "31 180 25", "314 746 50", "280 140 45", "145 45 5", "547 391 36", "807 744 46", "457 300 35", "551 813 2", "327 242 18", "238 873 22", "236 997 29", "191 168 17", "130 685 36", "93 215 19", "443 157 25", "645 565 47", "584 789 29", "122 199 7", "635 487 21", "121 97 8", "711 922 42", "491 354 48", "691 947 29", "807 201 15", "894 299 27", "462 101 33", "417 827 30", "155 891 45", "701 516 26", "12 944 36", "632 763 43", "623 650 5", "381 615 9", "235 611 12", "304 763 46", "260 794 46", "452 717 25", "661 976 18", "956 44 15", "398 711 39", "280 815 42", "780 618 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1215;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> doors = {642, 134, 139, 478, 424, 408, 956, 292, 870, 247, 306, 16, 446, 552, 995, 679, 930, 298, 996, 217, 119, 479, 265, 135, 420, 482, 838, 892, 154, 667, 150, 146, 188, 979, 449, 924, 10, 850, 626, 151, 839, 129, 823, 513, 386, 197, 792, 680, 997, 718};
    vector<string> diamonds = {"749 987 31", "9 68 18", "138 435 31", "662 256 38", "852 506 35", "657 123 30", "669 988 3", "667 915 23", "915 485 49", "32 535 8", "183 964 17", "845 456 48", "533 968 2", "104 507 25", "224 124 40", "120 187 30", "556 739 6", "625 809 22", "368 910 14", "40 253 39", "637 534 22", "690 998 9", "657 746 12", "779 8 22", "903 95 43", "185 343 31", "240 897 30", "780 222 3", "117 712 37", "133 713 2", "815 509 21", "232 779 20", "301 345 5", "378 489 6", "265 859 35", "903 218 34", "381 598 44", "572 353 22", "830 91 6", "591 813 37", "847 902 19", "78 115 34", "56 22 4", "373 207 47", "715 295 43", "698 427 3", "900 408 48", "229 673 46", "853 520 37", "340 925 39"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1665;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> doors = {475, 430, 616, 789, 880, 56, 932, 565, 187, 981, 817, 473, 262, 238, 857, 216, 429, 265, 396, 757, 542, 369, 97, 747, 967, 905, 342, 122, 795, 54, 645, 547, 906, 999, 271, 861, 313, 402, 537, 286, 955, 275, 872, 134, 405, 279, 447, 721, 602, 172};
    vector<string> diamonds = {"805 165 13", "763 713 40", "191 676 33", "212 176 23", "857 814 1", "693 698 43", "837 55 32", "952 960 7", "692 463 28", "257 233 45", "824 92 38", "263 112 27", "264 575 18", "334 671 32", "582 651 23", "933 655 27", "738 27 21", "22 625 11", "672 934 35", "312 457 29", "115 181 46", "858 633 8", "60 100 28", "184 354 8", "9 744 39", "96 406 6", "142 136 20", "338 856 45", "500 204 41", "29 775 3", "748 775 45", "38 604 44", "344 491 16", "779 995 12", "892 136 16", "201 149 38", "473 971 5", "220 925 22", "681 152 48", "576 633 6", "759 848 27", "979 911 14", "266 124 29", "514 753 12", "975 508 19", "779 396 14", "658 798 5", "112 116 34", "220 956 34", "984 545 44"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1476;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> doors = {999, 938, 124, 169, 406, 500, 853, 27, 467, 61, 482, 872, 370, 647, 741, 453, 731, 248, 739, 884, 258, 514, 142, 406, 687, 946, 689, 799, 364, 631, 237, 336, 320, 903, 829, 269, 431, 540, 725, 744, 563, 845, 854, 103, 331, 760, 961, 665, 313, 88};
    vector<string> diamonds = {"708 576 25", "570 242 14", "103 475 42", "944 779 49", "483 467 1", "623 436 10", "318 808 26", "910 208 23", "87 5 15", "289 951 27", "776 64 47", "727 481 23", "100 819 33", "242 133 31", "904 82 31", "491 195 14", "196 775 26", "714 529 15", "143 847 26", "570 806 11", "223 347 10", "538 486 26", "824 121 29", "843 711 5", "146 365 8", "418 500 20", "377 111 25", "887 911 36", "341 128 5", "480 6 48", "611 488 1", "147 78 10", "662 977 31", "402 339 22", "64 816 19", "507 610 48", "230 802 45", "734 511 17", "782 633 33", "443 901 42", "835 594 32", "235 248 14", "860 463 45", "263 107 16", "509 982 34", "610 52 5", "347 780 41", "415 207 6", "478 213 24", "641 406 23"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 3271;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> doors = {496, 968, 722, 104, 336, 47, 404, 913, 624, 786, 723, 277, 610, 743, 959, 840, 401, 675, 206, 433, 63, 989, 661, 705, 83, 749, 174, 471, 983, 995, 580, 907, 175, 811, 763, 410, 690, 669, 399, 583, 204, 38, 532, 394, 508, 824, 60, 920, 216, 129};
    vector<string> diamonds = {"172 715 20", "861 845 19", "289 161 33", "727 197 29", "649 832 33", "573 436 12", "923 351 2", "990 1 14", "344 126 19", "403 968 49", "208 528 50", "193 538 41", "466 399 20", "958 615 26", "975 539 19", "443 11 13", "162 396 21", "176 880 3", "107 335 47", "202 815 33", "262 153 25", "616 687 17", "613 594 42", "378 450 22", "428 840 33", "209 879 23", "225 529 50", "679 253 16", "747 128 37", "390 687 11", "659 377 33", "227 909 23", "62 419 27", "999 750 49", "846 815 10", "942 994 5", "887 730 19", "956 331 24", "846 373 6", "406 317 21", "896 532 29", "60 945 16", "50 528 8", "170 399 37", "670 95 10", "348 830 37", "299 432 26", "789 461 17", "559 985 33", "62 681 49"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 46463;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> doors = {858, 9, 799, 414, 453, 832, 610, 709, 26, 477, 368, 725, 315, 287, 493, 921, 521, 328, 413, 380, 790, 517, 886, 611, 479, 889, 54, 947, 192, 900, 69, 665, 854, 823, 844, 975, 356, 359, 943, 369, 685, 602, 75, 590, 256, 257, 251, 957, 211, 624};
    vector<string> diamonds = {"732 965 47", "346 358 31", "31 928 33", "850 171 28", "395 625 30", "807 121 16", "409 355 32", "987 699 41", "923 274 7", "399 833 5", "817 578 42", "799 587 31", "952 683 25", "612 732 15", "484 872 20", "569 933 42", "734 153 42", "402 198 4", "862 196 29", "539 453 23", "605 509 3", "650 591 43", "14 369 39", "591 505 50", "175 837 27", "856 456 47", "820 273 13", "844 216 18", "120 114 47", "749 422 15", "492 833 21", "562 369 15", "56 263 20", "959 70 9", "638 289 47", "878 210 49", "180 258 24", "413 817 10", "321 681 16", "108 686 6", "900 255 41", "749 581 27", "378 879 9", "802 479 20", "219 810 7", "715 276 35", "406 259 19", "810 263 1", "369 990 42", "789 391 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 2430;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> doors = {732, 233, 282, 62, 107, 909, 772, 756, 858, 505, 316, 655, 528, 317, 518, 451, 814, 97, 818, 876, 399, 737, 853, 152, 545, 30, 413, 85, 636, 483, 480, 894, 365, 341, 403, 311, 341, 413, 879, 723, 242, 896, 147, 79, 721, 641, 138, 147, 799, 981};
    vector<string> diamonds = {"333 628 3", "521 555 10", "234 477 39", "869 608 21", "791 56 36", "985 984 44", "267 999 25", "895 945 24", "626 77 1", "738 642 38", "607 706 43", "473 954 26", "718 449 24", "708 74 12", "917 897 44", "299 781 33", "239 86 11", "469 484 47", "784 247 34", "833 519 3", "886 138 44", "848 369 7", "845 396 49", "851 951 4", "343 994 25", "774 659 22", "518 904 25", "557 319 25", "358 118 18", "914 549 49", "706 916 14", "814 85 36", "312 569 4", "326 641 11", "219 786 34", "319 226 38", "327 864 25", "576 880 22", "413 247 22", "991 575 29", "37 163 50", "682 526 1", "310 537 43", "777 498 44", "602 241 7", "557 250 10", "261 357 13", "947 224 24", "114 146 7", "7 353 8"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 5634;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> doors = {232, 442, 566, 138, 54, 3, 877, 509, 852, 573, 705, 399, 888, 676, 209, 959, 696, 781, 843, 879, 749, 270, 114, 488, 899, 907, 873, 749, 210, 214, 881, 75, 561, 47, 883, 851, 776, 989, 663, 411, 881, 795, 580, 58, 386, 244, 142, 811, 468, 7};
    vector<string> diamonds = {"737 652 37", "995 364 46", "407 679 40", "142 619 14", "238 92 12", "758 308 49", "838 634 44", "262 486 37", "924 677 38", "776 819 7", "295 837 14", "501 622 34", "507 768 17", "201 345 34", "690 287 20", "715 347 28", "230 762 21", "139 805 8", "618 627 6", "296 890 13", "964 58 13", "591 662 10", "185 971 49", "790 155 5", "455 534 49", "98 115 6", "366 707 34", "510 333 42", "499 562 21", "846 519 14", "383 119 18", "305 997 1", "170 207 17", "275 752 24", "632 371 15", "565 869 22", "515 604 20", "721 422 19", "857 460 44", "65 98 29", "530 778 41", "8 222 45", "133 333 46", "133 746 1", "758 695 32", "235 658 47", "631 586 4", "489 761 13", "929 481 15", "643 351 20"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> doors = {870, 911, 453, 933, 279, 697, 972, 567, 931, 678, 789, 174, 713, 714, 863, 1, 58, 31, 572, 66, 330, 912, 987, 321, 179, 312, 153, 361, 73, 593, 73, 965, 465, 903, 242, 486, 906, 875, 108, 23, 526, 834, 595, 672, 689, 778, 406, 159, 687, 911};
    vector<string> diamonds = {"538 462 28", "905 475 20", "47 509 41", "532 428 2", "951 677 30", "389 264 7", "744 452 10", "925 516 10", "594 735 34", "237 871 17", "537 607 32", "293 213 10", "150 150 21", "138 191 44", "791 278 16", "851 382 10", "385 936 3", "125 120 23", "282 199 12", "224 180 50", "912 564 27", "329 12 4", "152 939 50", "380 185 23", "314 829 3", "61 157 2", "11 192 46", "631 586 25", "886 750 29", "116 869 48", "873 1 18", "686 427 26", "167 943 17", "571 960 22", "418 919 30", "13 768 21", "394 586 11", "520 727 9", "667 834 4", "540 230 28", "619 112 40", "486 299 46", "937 73 48", "667 990 23", "4 645 38", "541 674 18", "805 158 43", "932 438 28", "788 377 40", "219 98 6"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 12376;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> doors = {982, 834, 48, 621, 579, 408, 361, 379, 986, 938, 240, 769, 478, 204, 375, 509, 626, 227, 473, 697, 668, 103, 73, 332, 489, 506, 296, 807, 780, 845, 108, 286, 569, 240, 910, 949, 809, 93, 636, 553, 524, 912, 754, 76, 291, 422, 197, 813, 401, 285};
    vector<string> diamonds = {"203 872 40", "779 311 34", "992 582 46", "11 747 26", "394 302 27", "981 639 17", "405 795 14", "657 878 49", "32 829 46", "566 492 10", "25 572 33", "697 588 40", "98 73 17", "410 870 35", "338 658 37", "694 950 36", "832 6 23", "293 129 23", "89 755 32", "755 67 27", "715 978 38", "751 447 19", "269 859 50", "624 463 30", "713 43 49", "439 363 20", "691 762 31", "902 269 34", "350 505 14", "664 965 1", "861 761 15", "951 351 8", "844 389 8", "401 349 7", "923 403 34", "291 745 36", "946 133 8", "781 884 28", "525 76 23", "191 946 9", "303 50 20", "409 409 7", "171 133 34", "611 537 38", "782 517 40", "378 418 35", "397 441 26", "39 431 46", "25 385 44", "926 351 36"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 5824;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> doors = {342, 830, 326, 458, 64, 676, 30, 963, 927, 988, 211, 182, 357, 705, 913, 66, 762, 381, 347, 206, 474, 210, 498, 145, 729, 554, 789, 987, 811, 564, 556, 284, 591, 817, 84, 360, 259, 217, 589, 112, 749, 883, 900, 836, 400, 946, 786, 136, 324, 494};
    vector<string> diamonds = {"128 805 47", "469 487 47", "629 540 37", "165 610 40", "477 67 45", "867 89 33", "265 237 46", "375 999 46", "175 615 49", "885 717 18", "233 799 6", "911 330 42", "704 256 29", "885 63 1", "46 515 44", "368 867 3", "737 517 13", "962 564 27", "15 674 27", "355 270 6", "518 822 43", "723 42 4", "729 894 18", "439 879 19", "480 792 46", "320 394 30", "496 313 15", "487 121 40", "756 349 10", "773 801 22", "327 863 8", "908 850 7", "541 184 48", "569 859 11", "972 88 37", "571 350 19", "182 899 6", "863 215 41", "913 690 1", "617 477 48", "576 112 24", "368 317 40", "731 954 18", "657 196 49", "964 645 38", "439 21 35", "929 39 30", "730 788 20", "657 85 46", "51 758 16"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 5662;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> doors = {997, 884, 835, 466, 428, 257, 556, 904, 110, 844, 268, 606, 437, 574, 935, 579, 279, 939, 243, 723, 323, 864, 160, 100, 275, 389, 965, 873, 30, 73, 982, 877, 876, 639, 46, 772, 673, 535, 207, 687, 292, 334, 761, 522, 808, 773, 563, 775, 446, 581};
    vector<string> diamonds = {"371 509 30", "947 162 49", "901 234 34", "838 414 36", "586 271 27", "797 125 3", "156 343 41", "809 742 40", "553 534 27", "257 951 37", "645 691 38", "751 50 11", "72 994 21", "668 28 34", "141 665 22", "275 237 32", "396 974 43", "638 124 22", "24 794 23", "576 488 21", "335 320 41", "524 616 9", "722 756 17", "428 341 2", "412 249 17", "331 847 22", "207 180 8", "681 292 46", "272 32 13", "43 249 12", "286 703 18", "686 247 48", "154 379 43", "115 237 3", "689 915 47", "797 186 6", "859 58 9", "239 306 14", "760 899 21", "914 298 22", "231 421 31", "714 478 29", "160 582 3", "212 259 43", "541 419 1", "622 281 1", "352 95 27", "359 160 21", "685 626 28", "485 385 18"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 6201;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> doors = {576, 79, 308, 569, 984, 848, 621, 14, 21, 652, 593, 631, 112, 532, 346, 266, 329, 30, 55, 488, 127, 873, 66, 966, 593, 796, 155, 244, 223, 187, 420, 775, 765, 858, 831, 549, 765, 90, 289, 80, 579, 159, 934, 929, 534, 270, 896, 527, 874, 119};
    vector<string> diamonds = {"3 513 21", "887 502 2", "315 35 49", "277 412 50", "526 322 36", "932 526 30", "207 111 20", "425 878 10", "602 738 17", "440 664 23", "292 477 29", "160 86 29", "384 189 17", "216 647 31", "254 778 19", "892 723 48", "965 989 38", "53 243 27", "409 47 40", "855 960 5", "596 737 30", "439 396 25", "607 521 47", "223 831 25", "947 477 11", "327 885 10", "816 558 38", "638 56 7", "114 88 21", "239 407 8", "100 814 5", "395 127 7", "292 842 50", "441 736 5", "780 541 11", "609 485 39", "818 664 38", "558 446 40", "688 614 12", "545 368 22", "766 105 48", "891 249 5", "620 932 39", "764 293 50", "187 794 8", "127 287 11", "179 498 14", "853 480 7", "504 340 10", "801 173 7"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 638;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> doors = {86, 624, 267, 882, 998, 881, 603, 80, 645, 820, 868, 408, 815, 346, 970, 549, 205, 747, 171, 485, 283, 439, 762, 252, 537, 971, 626, 547, 864, 576, 540, 307, 229, 643, 188, 149, 571, 375, 427, 407, 867, 810, 130, 89, 998, 638, 679, 184, 214, 475};
    vector<string> diamonds = {"983 673 2", "880 554 19", "638 117 2", "11 111 32", "872 874 43", "975 718 38", "437 939 31", "46 667 33", "426 826 27", "897 373 13", "77 942 21", "321 635 29", "981 547 42", "49 781 35", "592 972 18", "793 261 34", "432 736 7", "402 628 12", "842 678 42", "74 195 25", "581 535 38", "678 329 23", "771 804 12", "288 3 44", "233 965 49", "213 541 41", "469 78 28", "354 595 33", "2 106 5", "276 986 44", "843 420 10", "816 557 39", "684 704 21", "470 726 13", "633 362 46", "984 41 48", "95 374 15", "370 839 40", "833 497 36", "900 802 44", "964 710 41", "578 105 44", "492 265 49", "581 433 23", "169 196 32", "896 11 29", "229 300 14", "972 808 2", "922 747 30", "780 443 28"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 7488;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> doors = {16, 979, 295, 169, 513, 654, 889, 100, 683, 718, 538, 866, 415, 471, 131, 918, 489, 933, 291, 440, 777, 417, 872, 673, 622, 3, 97, 752, 661, 922, 746, 704, 821, 684, 749, 616, 294, 499, 644, 927, 762, 554, 855, 291, 421, 999, 544, 770, 960, 809};
    vector<string> diamonds = {"992 628 45", "356 924 1", "212 532 11", "64 58 44", "115 708 33", "293 856 29", "198 302 10", "67 970 9", "767 512 13", "924 601 31", "775 48 6", "583 947 16", "766 280 18", "554 880 43", "850 191 15", "794 129 8", "384 700 43", "592 835 10", "48 700 9", "367 544 39", "786 26 36", "254 877 41", "6 950 21", "27 126 13", "474 57 16", "105 628 6", "634 781 10", "897 768 22", "230 472 35", "918 303 38", "375 18 14", "710 782 18", "429 310 32", "184 112 22", "64 842 7", "917 264 5", "403 168 36", "880 953 38", "770 624 49", "604 877 11", "434 361 13", "715 890 33", "188 934 16", "243 17 36", "900 849 24", "921 143 5", "440 832 22", "104 149 14", "403 889 26", "206 71 18"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> doors = {837, 335, 856, 158, 565, 420, 794, 535, 543, 72, 150, 292, 595, 822, 414, 805, 496, 817, 705, 61, 959, 810, 584, 748, 339, 584, 562, 370, 812, 933, 252, 223, 622, 431, 877, 396, 845, 207, 53, 735, 235, 669, 455, 211, 616, 816, 393, 599, 359, 281};
    vector<string> diamonds = {"101 839 19", "371 401 13", "483 243 12", "953 755 9", "928 781 19", "619 128 22", "976 969 31", "320 630 18", "523 565 46", "290 152 38", "102 793 22", "934 415 26", "992 252 9", "822 298 5", "249 870 34", "285 932 11", "492 612 4", "727 102 34", "145 437 22", "519 10 16", "859 771 23", "338 753 40", "187 852 26", "665 740 9", "704 183 21", "936 446 13", "225 590 45", "476 863 37", "120 990 46", "846 789 29", "79 71 41", "87 144 44", "147 205 39", "148 677 20", "586 747 15", "309 712 21", "238 506 17", "802 380 1", "778 450 17", "564 454 38", "422 461 26", "358 112 16", "783 619 44", "21 204 50", "20 9 45", "784 697 27", "347 541 3", "835 286 40", "41 827 45", "907 191 10"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 5237;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> doors = {614, 648, 716, 225, 504, 58, 961, 40, 797, 910, 347, 117, 602, 609, 55, 757, 415, 672, 748, 881, 875, 669, 626, 90, 674, 394, 223, 949, 805, 373, 581, 772, 618, 299, 991, 668, 311, 725, 127, 139, 627, 157, 90, 67, 208, 87, 29, 872, 128, 279};
    vector<string> diamonds = {"108 315 5", "725 98 21", "978 851 26", "710 119 1", "559 513 48", "105 59 21", "492 250 25", "83 938 31", "683 33 46", "883 378 39", "892 723 39", "610 598 35", "703 509 12", "960 115 11", "645 830 1", "790 623 30", "781 583 36", "442 570 38", "743 956 32", "839 523 28", "287 222 7", "552 137 44", "717 326 11", "502 829 24", "443 48 31", "983 550 4", "770 244 8", "483 192 9", "421 885 33", "809 231 21", "902 147 1", "422 47 19", "971 479 16", "550 382 24", "878 811 27", "498 947 25", "943 499 23", "542 948 21", "297 289 13", "585 912 15", "368 98 17", "791 32 14", "323 694 47", "746 760 27", "832 555 1", "470 534 34", "350 278 33", "831 282 22", "742 225 36", "94 524 21"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 4207;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> doors = {903, 12, 460, 834, 441, 776, 569, 846, 483, 517, 179, 200, 828, 206, 488, 138, 481, 79, 649, 654, 86, 987, 810, 340, 877, 454, 926, 935, 383, 977, 582, 56, 591, 442, 508, 820, 341, 112, 228, 901, 369, 615, 879, 835, 605, 596, 858, 160, 847, 820};
    vector<string> diamonds = {"308 205 41", "602 331 22", "750 264 31", "493 17 7", "114 906 42", "165 581 40", "103 75 30", "579 866 10", "840 473 2", "969 203 29", "351 235 6", "165 635 47", "45 653 28", "970 637 46", "536 845 7", "31 938 4", "61 731 16", "612 398 35", "439 46 5", "514 195 49", "739 491 36", "372 794 45", "32 448 34", "60 924 18", "97 517 22", "456 528 31", "755 968 3", "582 333 12", "30 949 49", "634 859 23", "385 88 13", "25 469 30", "574 192 39", "485 334 15", "726 676 2", "703 748 19", "522 79 29", "432 403 38", "974 762 41", "121 540 25", "301 255 50", "70 133 4", "601 955 8", "397 709 44", "762 758 12", "286 896 22", "56 91 29", "255 674 41", "638 535 8", "513 252 46"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> doors = {297, 489, 980, 327, 241, 88, 919, 969, 292, 271, 100, 11, 313, 771, 53, 24, 369, 664, 560, 135, 32, 360, 225, 968, 357, 282, 248, 499, 564, 123, 851, 602, 702, 61, 747, 938, 809, 135, 868, 673, 786, 71, 321, 81, 683, 171, 963, 995, 226, 662};
    vector<string> diamonds = {"494 214 14", "178 609 14", "251 234 40", "215 934 12", "495 891 42", "204 959 37", "820 378 12", "481 643 37", "382 312 41", "401 804 32", "124 363 17", "114 961 44", "28 276 12", "180 745 48", "16 592 48", "329 955 15", "301 47 26", "872 667 36", "795 969 25", "28 774 20", "775 600 36", "17 571 25", "505 645 40", "423 688 21", "157 357 50", "747 855 13", "130 186 3", "348 759 10", "887 949 48", "822 322 39", "723 551 44", "879 506 7", "285 862 5", "263 450 40", "417 998 3", "749 51 18", "784 136 20", "306 67 13", "62 919 11", "303 504 23", "775 276 6", "352 54 46", "274 364 8", "501 638 36", "711 198 40", "673 510 35", "62 597 39", "270 997 17", "197 686 44", "22 744 30"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 130;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> doors = {598, 508, 914, 612, 194, 647, 648, 52, 325, 643, 29, 702, 485, 250, 976, 84, 856, 751, 953, 915, 549, 265, 620, 665, 499, 820, 309, 660, 47, 773, 780, 835, 342, 813, 803, 187, 951, 24, 778, 84, 588, 223, 157, 997, 796, 624, 8, 685, 675, 659};
    vector<string> diamonds = {"82 253 21", "130 514 13", "907 728 6", "657 357 33", "989 166 9", "122 759 4", "979 487 33", "480 783 45", "601 512 36", "379 157 39", "850 796 36", "197 115 33", "892 23 16", "905 722 25", "952 40 37", "685 466 3", "798 172 10", "927 775 32", "958 321 27", "450 245 30", "921 355 38", "199 695 24", "10 485 42", "478 233 19", "734 187 49", "200 196 5", "8 115 16", "946 932 6", "685 870 43", "872 523 30", "75 733 32", "546 39 23", "786 471 49", "589 319 19", "230 351 6", "377 4 31", "535 970 43", "815 712 42", "429 816 39", "652 799 40", "566 963 22", "886 366 5", "41 502 33", "914 544 38", "870 60 47", "557 694 38", "872 635 24", "792 158 46", "209 129 8", "228 906 25"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 3324;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> doors = {269, 849, 440, 541, 231, 394, 911, 631, 553, 34, 208, 213, 930, 389, 913, 436, 97, 885, 655, 922, 599, 576, 485, 959, 902, 178, 164, 507, 445, 179, 238, 92, 596, 210, 975, 394, 938, 967, 271, 603, 283, 332, 747, 635, 863, 176, 468, 365, 182, 57};
    vector<string> diamonds = {"861 48 14", "207 227 36", "329 670 16", "454 783 23", "165 460 33", "171 964 26", "698 793 22", "999 962 38", "718 558 35", "215 673 36", "336 456 5", "169 463 50", "589 173 18", "501 323 17", "427 502 42", "322 248 17", "221 180 33", "228 874 38", "968 704 13", "174 821 17", "835 936 17", "284 306 37", "593 831 34", "271 498 26", "144 442 20", "623 941 15", "96 153 5", "540 366 30", "941 232 44", "195 475 18", "446 7 9", "255 360 37", "778 522 31", "985 642 9", "718 964 30", "494 222 38", "680 664 30", "502 526 46", "809 924 47", "619 967 14", "232 917 17", "656 442 6", "676 900 19", "867 870 30", "506 477 42", "69 673 5", "613 568 37", "638 219 19", "636 911 19", "822 60 40"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 14272;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> doors = {578, 702, 424, 60, 782, 161, 27, 902, 537, 883, 145, 150, 77, 955, 553, 230, 691, 335, 984, 387, 79, 117, 17, 110, 893, 641, 59, 744, 19, 173, 731, 913, 599, 884, 273, 919, 603, 157, 568, 333, 772, 928, 813, 399, 522, 734, 895, 647, 421, 215};
    vector<string> diamonds = {"957 828 42", "483 543 6", "658 35 31", "659 699 30", "518 55 27", "221 770 12", "950 296 37", "604 418 38", "214 617 36", "136 161 1", "689 738 38", "840 568 27", "366 652 20", "32 666 2", "432 997 1", "755 886 15", "983 308 26", "339 924 31", "134 953 25", "669 30 8", "528 170 18", "984 597 26", "908 716 11", "886 448 3", "601 693 33", "755 247 19", "990 965 23", "578 287 25", "245 242 46", "563 340 2", "205 791 38", "82 667 14", "330 361 33", "432 137 8", "217 615 12", "401 226 25", "630 934 8", "252 333 4", "301 427 10", "945 933 34", "709 908 22", "516 381 11", "7 412 42", "732 563 10", "298 643 13", "106 253 45", "601 220 18", "47 166 47", "268 932 47", "641 551 42"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 699;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> doors = {967, 751, 719, 483, 651, 918, 961, 700, 217, 150, 184, 604, 991, 159, 318, 796, 896, 134, 349, 370, 257, 835, 148, 41, 303, 911, 653, 97, 73, 90, 511, 220, 98, 676, 804, 238, 527, 288, 78, 865, 889, 591, 271, 204, 221, 930, 990, 500, 25, 954};
    vector<string> diamonds = {"676 83 44", "622 115 28", "998 710 38", "410 285 12", "404 346 6", "323 8 37", "600 315 6", "873 984 46", "700 780 14", "122 211 6", "442 134 24", "278 733 29", "454 785 46", "582 842 30", "990 752 50", "836 785 23", "156 675 33", "240 545 11", "430 152 40", "974 971 50", "674 672 33", "10 788 9", "258 950 35", "587 626 35", "480 496 10", "430 21 25", "139 932 28", "545 999 22", "901 96 9", "811 817 13", "151 783 35", "433 796 23", "305 332 21", "311 319 11", "57 84 33", "169 938 7", "14 612 12", "227 882 8", "201 862 27", "458 820 9", "453 784 46", "534 159 30", "353 633 40", "600 88 10", "378 901 25", "158 208 20", "41 16 49", "765 381 8", "921 855 45", "740 886 18"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 3116;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> doors = {415, 450, 542, 306, 895, 973, 495, 671, 904, 427, 773, 305, 205, 565, 926, 755, 983, 845, 664, 579, 246, 889, 955, 173, 970, 640, 115, 854, 600, 973, 279, 299, 691, 795, 805, 253, 592, 727, 990, 991, 174, 212, 103, 348, 48, 24, 385, 83, 435, 802};
    vector<string> diamonds = {"123 565 35", "771 820 41", "728 806 44", "199 34 47", "106 521 27", "982 987 14", "975 839 36", "866 982 4", "530 860 1", "414 736 49", "391 656 23", "973 308 30", "951 807 6", "989 927 24", "288 222 43", "876 855 34", "455 184 42", "1 480 28", "614 282 28", "935 776 18", "203 847 39", "41 550 49", "768 664 39", "290 70 9", "568 724 32", "947 568 27", "896 464 21", "75 153 19", "729 46 24", "2 802 49", "329 373 23", "768 317 39", "756 675 18", "341 917 28", "86 927 25", "594 43 26", "559 335 16", "447 698 40", "696 736 23", "585 472 42", "612 617 43", "726 614 4", "983 72 39", "97 769 29", "103 729 2", "576 114 2", "991 811 15", "568 716 21", "515 282 18", "654 570 40"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 3593;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> doors = {438, 401, 534, 296, 202, 971, 242, 884, 95, 465, 940, 317, 322, 253, 991, 464, 398, 558, 13, 170, 767, 397, 899, 822, 51, 419, 910, 835, 657, 1, 174, 129, 461, 159, 979, 155, 785, 516, 930, 858, 420, 354, 103, 367, 592, 599, 670, 294, 805, 323};
    vector<string> diamonds = {"135 60 37", "703 695 48", "253 391 21", "657 415 4", "832 240 2", "304 233 42", "890 229 3", "802 950 37", "241 548 11", "153 744 7", "288 803 31", "455 674 48", "561 393 16", "516 667 23", "946 503 42", "244 705 31", "32 570 5", "633 372 47", "853 987 31", "282 581 17", "777 26 36", "409 987 32", "133 278 8", "793 97 41", "510 665 40", "936 254 26", "694 759 46", "680 170 18", "114 244 14", "190 608 29", "888 63 12", "808 900 16", "413 363 20", "269 153 3", "618 763 14", "982 243 48", "625 199 28", "810 577 38", "640 367 15", "474 980 35", "780 304 14", "477 73 37", "399 512 15", "217 232 50", "92 182 50", "372 422 49", "150 835 45", "260 924 25", "79 987 44", "202 745 32"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1778;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> doors = {467, 244, 565, 44, 815, 895, 331, 497, 680, 694, 651, 858, 239, 332, 973, 412, 52, 307, 893, 855, 569, 801, 705, 92, 799, 436, 558, 523, 608, 46, 58, 847, 515, 57, 890, 422, 781, 769, 768, 832, 492, 348, 146, 684, 479, 750, 991, 822, 965, 331};
    vector<string> diamonds = {"418 125 17", "955 690 26", "201 604 6", "129 981 17", "142 809 36", "676 846 49", "396 320 31", "207 229 45", "652 151 15", "583 411 33", "736 410 13", "34 32 26", "412 874 13", "449 11 11", "307 160 14", "288 976 13", "797 9 33", "294 34 35", "617 96 1", "563 383 5", "35 357 22", "410 463 46", "965 572 35", "251 456 9", "467 113 10", "138 227 31", "535 675 12", "307 284 12", "83 980 33", "804 166 25", "519 95 30", "230 927 49", "489 578 8", "863 845 39", "831 839 5", "107 411 18", "256 879 36", "344 286 23", "892 519 13", "531 629 23", "888 287 11", "76 821 33", "263 533 22", "794 95 47", "701 986 19", "991 655 49", "424 362 17", "650 659 13", "851 164 20", "565 513 16"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 5656;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> doors = {841, 165, 943, 626, 153, 996, 863, 790, 855, 868, 202, 45, 474, 705, 465, 433, 887, 630, 64, 773, 910, 223, 963, 525, 386, 689, 77, 377, 313, 402, 952, 641, 103, 849, 804, 833, 442, 850, 996, 993, 464, 452, 342, 274, 613, 903, 504, 311, 339, 112};
    vector<string> diamonds = {"353 201 5", "731 697 17", "326 300 46", "76 61 8", "988 931 43", "605 26 36", "439 147 44", "454 390 40", "444 341 2", "15 206 49", "104 807 50", "521 1 30", "377 370 34", "529 34 35", "984 206 20", "681 175 10", "495 191 12", "281 449 33", "47 337 5", "626 455 12", "740 739 35", "409 23 5", "754 478 8", "958 108 6", "433 761 20", "229 687 46", "820 364 10", "351 739 7", "105 603 38", "815 684 50", "915 523 21", "55 309 3", "859 843 47", "212 634 11", "788 910 18", "879 936 32", "462 535 34", "412 85 13", "191 417 13", "619 637 44", "520 561 19", "742 404 48", "711 333 34", "83 165 3", "840 436 33", "555 807 14", "778 423 7", "401 334 13", "680 322 26", "364 799 7"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 24560;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> doors = {751, 488, 481, 397, 990, 674, 207, 996, 118, 384, 51, 580, 375, 538, 680, 669, 331, 27, 235, 554, 686, 869, 304, 241, 279, 60, 177, 766, 419, 680, 165, 241, 92, 151, 761, 961, 125, 143, 706, 907, 824, 500, 922, 191, 822, 389, 590, 611, 973, 911};
    vector<string> diamonds = {"858 377 42", "426 454 21", "729 393 34", "126 867 17", "731 778 6", "805 665 5", "693 381 23", "920 402 44", "678 251 29", "165 5 11", "33 947 26", "873 770 37", "939 882 8", "748 773 20", "98 259 40", "411 190 45", "681 976 9", "119 495 30", "48 906 47", "737 626 17", "74 636 34", "203 44 50", "150 180 4", "69 731 22", "773 225 46", "869 354 41", "884 91 10", "751 845 34", "357 543 21", "345 414 7", "669 727 50", "874 710 36", "967 471 23", "194 165 36", "102 264 33", "12 812 37", "129 842 38", "693 691 19", "768 825 10", "261 344 5", "121 568 45", "558 795 32", "530 657 24", "882 155 16", "52 156 45", "442 591 47", "331 138 18", "238 662 19", "831 117 14", "59 545 10"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1911;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> doors = {326, 106, 187, 34, 867, 34, 657, 193, 96, 434, 605, 220, 557, 35, 314, 564, 533, 17, 755, 925, 558, 473, 253, 673, 176, 446, 322, 243, 253, 59, 616, 486, 642, 793, 345, 815, 383, 785, 976, 408, 603, 801, 482, 885, 445, 918, 405, 671, 818, 309};
    vector<string> diamonds = {"924 637 35", "788 296 37", "190 821 4", "236 465 18", "811 411 27", "378 140 38", "39 604 14", "40 742 18", "985 176 30", "553 723 31", "810 128 21", "801 765 24", "90 594 25", "789 222 46", "916 875 40", "411 476 42", "850 402 45", "229 879 45", "315 114 37", "40 818 45", "849 132 45", "39 427 19", "559 953 25", "249 690 12", "972 905 17", "299 436 43", "843 123 27", "304 546 42", "216 597 4", "154 655 41", "691 154 43", "880 943 23", "173 239 21", "853 385 44", "695 241 25", "352 415 44", "979 353 48", "653 625 13", "165 480 29", "315 604 46", "403 469 21", "504 918 13", "220 2 50", "552 443 31", "304 659 10", "131 488 30", "354 202 7", "386 494 46", "948 438 9", "109 466 30"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1760;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> doors = {795, 343, 998, 160, 833, 447, 720, 331, 621, 79, 693, 304, 548, 263, 350, 971, 305, 907, 371, 115, 936, 179, 731, 335, 570, 287, 521, 982, 296, 864, 358, 947, 218, 920, 50, 252, 617, 288, 981, 314, 832, 394, 706, 928, 177, 681, 466, 41, 830, 873};
    vector<string> diamonds = {"103 234 22", "990 267 11", "655 527 37", "974 696 45", "44 540 32", "911 46 40", "716 312 25", "501 443 8", "211 724 13", "876 701 14", "385 840 15", "347 532 30", "877 789 7", "527 764 6", "461 482 26", "229 34 2", "987 490 8", "684 228 22", "54 207 14", "246 376 28", "778 618 27", "865 615 17", "929 312 16", "479 534 13", "582 888 16", "501 351 35", "248 216 36", "441 664 20", "356 128 25", "896 926 11", "849 31 19", "830 463 5", "860 349 7", "357 198 43", "710 587 32", "323 793 28", "970 123 36", "941 641 26", "948 81 35", "752 19 41", "288 366 36", "421 662 26", "650 532 16", "81 861 49", "732 111 13", "116 509 29", "892 317 34", "128 623 2", "493 466 7", "159 221 20"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 4185;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> doors = {311, 842, 656, 633, 567, 148, 306, 386, 919, 528, 302, 882, 94, 786, 933, 715, 282, 578, 93, 768, 44, 135, 807, 198, 724, 991, 317, 359, 182, 904, 558, 393, 100, 779, 199, 657, 557, 58, 685, 441, 829, 900, 466, 353, 750, 271, 771, 438, 487, 501};
    vector<string> diamonds = {"991 165 3", "296 54 42", "679 308 42", "112 69 16", "463 174 42", "186 202 2", "49 613 41", "138 53 34", "635 38 11", "394 81 43", "44 964 25", "978 175 5", "703 921 37", "922 448 24", "35 631 48", "86 969 48", "282 400 11", "775 370 33", "440 745 9", "785 466 44", "3 649 39", "976 315 12", "211 229 30", "648 935 5", "100 262 3", "876 120 48", "185 51 18", "874 640 2", "994 703 34", "416 868 43", "276 238 49", "194 531 26", "483 767 1", "769 473 20", "885 768 23", "382 754 41", "956 61 6", "998 790 47", "624 490 14", "593 390 30", "787 68 17", "402 3 30", "926 690 2", "46 104 6", "762 416 50", "658 869 50", "182 552 1", "626 746 14", "786 728 5", "356 629 21"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 8210;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> doors = {205, 448, 326, 180, 466, 379, 225, 323, 13, 58, 132, 469, 293, 943, 278, 18, 283, 968, 390, 47, 991, 120, 402, 576, 79, 249, 466, 17, 315, 587, 616, 878, 671, 73, 890, 43, 727, 4, 416, 882, 129, 815, 962, 250, 865, 979, 357, 726, 72, 297};
    vector<string> diamonds = {"859 132 8", "857 334 15", "637 397 47", "395 636 40", "484 242 5", "784 140 6", "939 65 37", "267 310 26", "774 750 5", "393 124 16", "47 445 42", "128 898 45", "496 480 10", "904 214 28", "716 468 21", "994 777 26", "504 236 13", "78 272 37", "861 736 1", "244 918 2", "606 553 4", "147 557 15", "91 103 3", "689 595 14", "308 8 5", "742 999 4", "467 225 11", "729 994 43", "972 93 42", "595 298 33", "525 233 25", "856 17 12", "221 400 32", "288 14 46", "441 847 45", "536 18 24", "135 905 15", "380 551 47", "217 270 23", "832 437 38", "221 671 14", "131 487 2", "1 85 21", "148 808 49", "749 405 37", "24 362 19", "646 816 15", "376 125 48", "532 432 47", "212 47 41"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 6776;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> doors = {645, 42, 915, 623, 868, 353, 30, 753, 665, 516, 590, 110, 590, 84, 20, 680, 965, 54, 390, 538, 541, 806, 212, 794, 301, 97, 724, 552, 955, 532, 867, 203, 986, 208, 237, 890, 246, 648, 523, 545, 935, 671, 24, 570, 248, 921, 960, 433, 333, 696};
    vector<string> diamonds = {"482 13 40", "905 262 9", "21 992 13", "358 194 17", "814 58 38", "862 838 15", "670 151 38", "592 13 35", "680 427 39", "618 715 25", "574 467 45", "418 822 26", "379 958 37", "619 869 10", "619 158 24", "664 660 40", "585 40 13", "31 443 50", "747 184 14", "457 91 2", "216 880 3", "522 359 17", "400 116 30", "905 733 13", "256 577 4", "886 946 28", "601 284 36", "897 819 18", "157 523 1", "988 995 22", "448 654 36", "636 384 20", "214 445 3", "366 550 28", "670 578 34", "161 736 7", "55 250 2", "771 83 13", "885 177 14", "768 55 26", "534 800 25", "302 487 42", "455 188 35", "930 767 38", "896 468 31", "320 169 49", "62 676 33", "251 430 8", "615 140 17", "443 643 26"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 749;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> doors = {313, 119, 304, 791, 836, 795, 52, 500, 335, 189, 500, 958, 782, 990, 509, 800, 362, 750, 24, 530, 117, 247, 422, 250, 508, 914, 76, 752, 14, 152, 486, 944, 378, 410, 230, 968, 535, 181, 55, 666, 901, 188, 170, 887, 944, 170, 65, 159, 840, 815};
    vector<string> diamonds = {"566 57 1", "101 762 32", "193 10 4", "169 373 4", "105 788 13", "11 19 29", "117 619 33", "912 723 44", "591 225 45", "125 51 1", "72 857 7", "727 540 44", "494 4 24", "242 810 10", "889 426 43", "984 925 48", "214 875 26", "709 77 29", "994 988 14", "508 620 13", "217 381 45", "397 96 44", "838 17 20", "762 118 25", "175 595 25", "580 627 24", "92 426 36", "639 791 24", "524 314 21", "36 831 42", "236 308 14", "706 514 1", "170 800 28", "18 145 9", "87 279 40", "468 518 4", "823 557 47", "662 927 23", "802 523 44", "197 812 35", "319 751 42", "909 370 17", "724 621 13", "526 824 40", "82 373 32", "523 50 50", "619 267 36", "52 512 34", "887 656 50", "662 140 8"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 5905;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> doors = {390, 695, 39, 184, 551, 683, 11, 200, 39, 362, 154, 531, 141, 545, 428, 691, 138, 95, 817, 279, 852, 487, 872, 254, 636, 411, 282, 881, 699, 87, 226, 176, 159, 346, 739, 315, 906, 666, 3, 540, 78, 584, 72, 230, 860, 388, 399, 683, 916, 883};
    vector<string> diamonds = {"618 634 23", "194 817 18", "73 718 18", "826 249 38", "972 463 21", "228 628 7", "362 333 8", "999 285 3", "46 107 40", "515 291 41", "991 688 40", "379 948 35", "808 208 50", "65 551 23", "434 953 41", "222 50 32", "51 133 49", "922 302 27", "451 917 22", "88 538 7", "407 497 28", "432 97 10", "519 27 4", "55 204 40", "515 273 46", "704 513 25", "758 435 49", "725 43 1", "142 745 8", "4 165 44", "362 351 18", "403 256 40", "95 337 48", "951 408 27", "121 254 43", "702 35 39", "794 562 4", "89 511 5", "876 288 37", "461 105 15", "863 35 11", "694 508 10", "840 325 35", "126 168 9", "903 628 47", "728 158 44", "956 321 9", "729 175 4", "643 551 50", "735 345 14"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 6525;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> doors = {735, 87, 435, 308, 222, 930, 654, 686, 445, 49, 517, 768, 514, 589, 835, 316, 470, 805, 510, 22, 285, 624, 699, 188, 795, 988, 637, 677, 586, 777, 767, 36, 987, 505, 518, 643, 634, 857, 847, 61, 982, 573, 85, 957, 124, 564, 794, 86, 362, 368};
    vector<string> diamonds = {"989 713 3", "54 709 40", "124 968 8", "933 620 17", "292 575 27", "781 41 21", "675 124 34", "869 460 50", "290 65 23", "904 149 13", "879 364 14", "18 929 20", "781 197 17", "6 485 28", "318 16 19", "875 707 16", "649 59 37", "634 320 1", "992 657 39", "883 60 47", "81 685 18", "265 287 15", "562 574 32", "815 176 45", "448 551 27", "262 950 18", "976 521 6", "832 181 45", "534 895 39", "100 354 46", "691 60 24", "476 859 34", "6 810 31", "769 590 15", "749 667 1", "380 26 11", "419 638 8", "448 72 48", "778 178 12", "819 611 18", "312 325 47", "896 380 26", "164 424 8", "504 488 1", "974 111 20", "696 228 5", "172 671 48", "15 403 1", "198 383 1", "169 782 6"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 2222;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> doors = {600, 258, 947, 526, 249, 613, 793, 373, 593, 401, 910, 778, 23, 962, 564, 224, 356, 77, 619, 359, 496, 425, 449, 283, 575, 804, 225, 425, 391, 951, 496, 787, 419, 877, 924, 786, 137, 693, 98, 84, 679, 221, 511, 756, 804, 532, 729, 365, 251, 363};
    vector<string> diamonds = {"386 453 31", "806 143 50", "612 127 10", "717 496 44", "827 293 34", "810 215 22", "408 887 2", "805 942 27", "714 890 2", "66 962 20", "891 813 47", "179 728 21", "198 353 40", "122 635 1", "382 236 7", "614 540 49", "959 923 31", "676 72 8", "87 507 38", "24 92 25", "411 950 29", "186 95 11", "686 93 42", "751 935 5", "463 815 29", "403 577 42", "746 253 34", "452 76 31", "592 363 4", "603 349 48", "892 304 24", "961 188 35", "553 535 12", "565 663 18", "708 635 49", "716 867 29", "651 850 17", "170 769 26", "472 784 50", "839 404 41", "308 652 5", "68 272 36", "313 442 2", "364 415 9", "384 349 13", "904 992 35", "544 874 47", "61 643 26", "894 717 6", "11 63 5"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 2028;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> doors = {10, 5, 2};
    vector<string> diamonds = {"1 1 1", "2 1 2", "3 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> doors = {1};
    vector<string> diamonds = {"999 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> doors = {10, 5, 2, 1, 3, 2};
    vector<string> diamonds = {"1 1 1", "2 1 2", "3 1 3", "5 2 1", "6 1 2", "10 5 4", "11 3 6"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> doors = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 800, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 700, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 600, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 500, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 400};
    vector<string> diamonds = {"999 55 50", "300 17 49", "500 15 48", "300 20 30", "300 20 29", "100 7 19", "60 8 10", "40 7 10", "1 1 50", "1 1 49", "1 1 48", "1 1 47", "1 1 46", "1 1 45", "1 1 44", "1 1 43", "1 1 42", "1 1 41", "1 1 30", "1 1 39", "1 1 38", "1 1 37", "1 1 36", "1 1 35", "1 1 34", "1 1 33", "1 1 32", "1 1 31", "1 1 50", "1 1 29", "1 1 28", "1 1 27", "1 1 26", "1 1 25", "1 1 24", "1 1 23", "1 1 22", "1 1 21", "100 7 48", "1 1 19", "1 1 14", "1 1 13", "1 1 12", "1 1 11", "100 7 38", "1 1 9", "1 1 8", "1 1 7", "1 1 2", "2 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 21312;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> doors = {15};
    vector<string> diamonds = {"5 4 1", "3 3 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> doors = {50, 24};
    vector<string> diamonds = {"8 4 2", "6 3 2", "4 2 2"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> doors = {999, 999, 499};
    vector<string> diamonds = {"1 1 1", "2 1 1", "2 1 2", "3 2 1", "2 1 3", "3 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 2494;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> doors = {100, 80, 100, 50};
    vector<string> diamonds = {"5 1 4", "16 3 4", "100 100 3", "300 39 2", "500 80 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 605;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> doors = {808, 659, 545, 710, 493, 504, 841, 170, 561, 279, 98, 268, 980, 822, 394, 746, 195, 154, 669, 197, 723, 25, 978, 934, 636, 815, 426, 95, 518, 405, 189, 883, 717, 145, 872, 359, 295, 232, 636, 400, 261, 9, 114, 963, 83, 822, 672, 832, 617, 680};
    vector<string> diamonds = {"50 234 1", "31 275 2", "79 404 3", "41 476 4", "43 120 5", "28 26 6", "13 459 7", "10 118 8", "34 343 9", "17 251 10", "27 29 11", "11 114 12", "50 960 13", "68 789 14", "37 360 15", "29 688 16", "58 27 17", "9 23 18", "91 121 19", "31 125 20", "67 97 21", "2 4 22", "9 253 23", "99 294 24", "14 490 25", "64 617 26", "70 130 27", "30 72 28", "96 348 29", "52 349 30", "24 33 31", "53 568 32", "38 12 33", "2 118 34", "29 714 35", "78 200 36", "5 155 37", "46 232 38", "99 311 39", "69 13 40", "58 115 41", "96 1 42", "31 47 43", "43 548 44", "53 34 45", "96 431 46", "2 399 47", "39 418 48", "91 122 49", "36 207 50"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1451;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> doors = {100, 50, 20, 30};
    vector<string> diamonds = {"1 1 1", "2 1 2", "3 1 3", "4 1 4", "1 2 1", "2 2 2", "3 3 3", "4 4 4"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 186;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> doors = {999, 1, 444, 112, 999, 444, 555, 666, 1, 2, 3, 4, 1, 1};
    vector<string> diamonds = {"1 1 1", "2 2 2", "3 3 3", "4 4 4", "5 5 5", "1 1 1", "6 6 6", "2 2 2", "55 999 2", "4 1 1", "7 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 6986;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> doors = {8, 8};
    vector<string> diamonds = {"10 4 2", "11 6 2", "1 2 2"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> doors = {17};
    vector<string> diamonds = {"6 10 1", "5 8 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
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
    vector<int> doors = {6};
    vector<string> diamonds = {"20 1 1", "2 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> doors = {10, 5, 2};
    vector<string> diamonds = {"1 1 1", "2 1 2", "5 1 3", "3 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> doors = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 999, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<string> diamonds = {"1 3 1", "1 3 2", "1 1 3", "1 1 4", "1 13 5", "1 1 6", "1 1 7", "1 1 8", "1 1 9", "1 1 10", "1 2 11", "1 1 12", "1 1 13", "2 1 14", "1 1 15", "1 1 16", "1 1 17", "1 1 18", "1 1 19", "1 1 20", "1 1 21", "1 1 22", "1 1 23", "1 1 24", "1 1 25", "1 1 26", "1 1 27", "1 1 28", "1 1 29", "1 1 30", "1 1 31", "1 1 32", "1 1 33", "1 1 34", "1 1 35", "1 1 36", "1 1 37", "1 1 38", "1 1 39", "1 1 40", "1 1 41", "1 1 42", "1 1 43", "3 1 44", "1 1 45", "1 1 46", "1 1 47", "1 1 48", "1 1 49", "1 1 50"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 2995;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> doors = {5, 4};
    vector<string> diamonds = {"2 2 1", "3 3 2"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> doors = {2, 3, 5};
    vector<string> diamonds = {"1 1 1", "2 2 2", "3 3 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> doors = {2, 10};
    vector<string> diamonds = {"1 1 1", "1 1 2"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> doors = {2};
    vector<string> diamonds = {"1 1 1", "100 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> doors = {1, 3, 5, 2};
    vector<string> diamonds = {"1 1 1", "2 1 2", "3 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> doors = {100};
    vector<string> diamonds = {"100 1 1", "1 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 9900;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> doors = {4, 1000};
    vector<string> diamonds = {"999 1 2"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 2997;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> doors = {20};
    vector<string> diamonds = {"20 10 1", "19 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 361;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> doors = {10, 5, 2};
    vector<string> diamonds = {"1 1 1", "2 1 2", "3 1 3", "3 2 3", "4 2 3", "1 2 1", "2 2 2"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> doors = {10, 2, 5};
    vector<string> diamonds = {"1 1 1", "2 1 2", "3 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> doors = {22};
    vector<string> diamonds = {"999 20 1", "495 8 1", "50 2 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1090;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> doors = {999, 998, 878, 967, 886, 989, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    vector<string> diamonds = {"432 3 48", "432 45 48", "234 3 48", "432 56 48", "34 76 48", "214 342 48", "43 45 48", "234 76 48", "888 1 48", "546 545 48", "43 434 48", "54 65 48", "534 2 48", "45 54 48", "65 34 48", "435 5 48", "54 667 48", "435 545 48", "546 65 48", "456 5 48", "546 76 48", "67 455 48", "45 7 48", "4 5 48", "4 5 48", "67 5 48", "456 5 48", "345 5 48", "435 5 48", "657 5 48", "34 5 48", "7 5 48", "345 5 48", "546 5 48", "234 5 48", "546 5 48", "43 5 48", "67 4 48", "23 4 48", "677 4 48", "76 4 48", "7 3 48", "432 5 48", "7 56 48", "765 45 48", "432 6 48", "876 5 48", "432 43 48"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 778776;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> doors = {1, 10, 5, 2, 4};
    vector<string> diamonds = {"1 1 1", "2 1 2", "3 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> doors = {100};
    vector<string> diamonds = {"90 60 1", "49 49 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> doors = {6, 3, 6};
    vector<string> diamonds = {"2 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> doors = {15, 5, 3};
    vector<string> diamonds = {"1 10 1", "3 5 2", "7 2 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> doors = {46, 22, 39, 45, 49, 24, 8, 23, 12, 34, 40, 25, 21, 47, 21, 46, 30, 22, 17, 41, 41, 29, 37, 23, 27, 12, 11, 46, 13, 10, 7, 41, 16, 23, 29, 27, 22, 24, 30, 44, 43, 11, 7, 8, 38, 34, 26, 21, 43, 33};
    vector<string> diamonds = {"63 45 48", "60 38 8", "30 42 24", "36 17 29", "89 43 41", "43 41 7", "47 49 15", "30 91 6", "7 51 21", "49 94 2", "85 24 30", "41 57 5", "32 77 17", "40 45 9", "38 24 27", "83 19 39", "34 42 30", "59 40 16", "78 31 5", "87 74 7", "25 46 22", "30 71 23", "98 74 28", "91 87 13", "56 37 12", "75 56 18", "51 53 32", "25 42 1", "8 31 17", "38 8 42", "54 88 8", "10 46 34", "22 59 10", "47 23 39", "14 31 7", "92 1 19", "11 56 13", "38 25 10", "96 84 49", "51 3 42", "75 37 42", "22 97 21", "69 100 49", "35 82 35", "19 100 4", "89 1 39", "29 68 28", "84 49 44", "11 22 8", "15 14 18"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 644;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> doors = {10, 10, 10};
    vector<string> diamonds = {"1 1 1", "2 1 2", "3 3 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> doors = {2, 100};
    vector<string> diamonds = {"1 1 2"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> doors = {100};
    vector<string> diamonds = {"2 49 1", "3 51 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
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
    vector<int> doors = {5, 7, 3};
    vector<string> diamonds = {};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> doors = {11};
    vector<string> diamonds = {"8 6 1", "5 5 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
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
    vector<int> doors = {6};
    vector<string> diamonds = {"2 1 1", "1 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> doors = {10, 2};
    vector<string> diamonds = {"2 1 2"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> doors = {6};
    vector<string> diamonds = {"2 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
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
    vector<int> doors = {1, 100};
    vector<string> diamonds = {"100 10 2"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> doors = {100, 1, 100};
    vector<string> diamonds = {"50 50 3", "50 50 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> doors = {10, 11};
    vector<string> diamonds = {"10 1 2"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> doors = {30, 999, 120, 30, 40, 40, 10, 15, 66};
    vector<string> diamonds = {"9 30 5", "1 1 5", "6 3 3", "8 15 2", "19 20 6", "999 31 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> doors = {10, 15, 6, 5};
    vector<string> diamonds = {"10 1 4", "5 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> doors = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<string> diamonds = {"1 1 1", "1 1 2", "1 1 2", "1 1 2", "1 1 2", "3 2 2", "1 1 3", "1 1 4", "3 1 5", "1 1 6", "1 1 7", "1 1 8", "1 1 9", "1 1 10", "1 1 11", "1 1 12", "1 1 16", "1 1 17", "1 1 18", "1 1 19", "1 1 20", "1 1 21", "1 1 22", "1 1 23", "1 1 24", "1 1 25", "1 1 26", "1 1 27", "1 1 28", "1 1 29", "1 1 30"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 2997;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> doors = {2, 5, 10};
    vector<string> diamonds = {"1 1 1", "2 1 2", "3 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> doors = {5, 2, 10};
    vector<string> diamonds = {"1 1 1", "2 1 2", "8 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> doors = {100, 1};
    vector<string> diamonds = {"10 10 2"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> doors = {547, 934, 719, 336, 444, 35, 884, 155, 449, 826, 15, 409, 24, 825, 961, 582, 491, 681, 786, 126, 291, 220, 701, 581, 736, 421, 754, 709, 68, 547, 364, 205, 987, 633, 335, 779, 641, 258, 284, 810, 261, 847};
    vector<string> diamonds = {"283 249 32", "570 455 24", "985 619 23", "539 914 10", "634 549 39", "41 590 13", "40 868 10", "285 409 30", "593 23 35", "203 838 34", "702 161 29", "49 611 10", "836 282 34", "165 571 20", "291 650 38", "523 8 4", "265 851 9", "879 716 11", "293 509 41", "756 123 36", "354 885 26", "709 357 11", "277 347 9", "948 174 21", "248 48 32", "602 598 35", "409 695 22", "217 860 18", "740 872 41", "169 214 7", "371 91 7", "905 140 11", "588 560 24", "643 89 30", "418 932 30", "529 494 23", "407 22 9", "171 403 42", "214 641 2"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 21443;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> doors = {10, 5, 10, 2};
    vector<string> diamonds = {"2 1 2", "10 4 3", "3 1 4", "1 2 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> doors = {100, 5, 100};
    vector<string> diamonds = {"1 1 2", "1 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> doors = {10, 1, 2};
    vector<string> diamonds = {"1 1 1", "2 1 2", "3 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> doors = {4, 4, 2};
    vector<string> diamonds = {"3 1 2", "1 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> doors = {5};
    vector<string> diamonds = {"1 1 1", "6 2 1", "10 3 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> doors = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<string> diamonds = {"1 1 1", "1 1 2", "1 1 2", "1 1 2", "1 1 2", "3 2 2", "1 1 3", "1 1 4", "3 1 5", "1 1 6", "1 1 7", "1 1 8", "1 1 9", "1 1 10", "1 1 11", "1 1 12", "1 1 16", "1 1 17", "1 1 18", "1 1 19", "1 1 20", "1 1 21", "1 1 22", "1 1 23", "1 1 24", "1 1 25", "1 1 26", "1 1 27", "1 1 28", "1 1 29", "1 1 30", "4 1 2", "1 10 2"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 3996;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> doors = {30, 15, 20};
    vector<string> diamonds = {"500 15 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> doors = {10, 5, 10};
    vector<string> diamonds = {"1 1 1", "2 1 2", "3 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> doors = {10, 5, 2};
    vector<string> diamonds = {"1 1 1", "2 2 2", "3 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> doors = {100, 10, 100};
    vector<string> diamonds = {"100 20 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> doors = {12, 100, 100, 100, 11};
    vector<string> diamonds = {"1 1 1", "100 10 5"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> doors = {100, 1, 100};
    vector<string> diamonds = {"56 2 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> doors = {10};
    vector<string> diamonds = {"1 1 1", "10 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> doors = {11, 11};
    vector<string> diamonds = {"8 4 1", "10 5 2"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> doors = {1, 100, 100};
    vector<string> diamonds = {"100 10 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> doors = {6};
    vector<string> diamonds = {"100 2 1", "10 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> doors = {10, 10, 10};
    vector<string> diamonds = {"1 100 1", "16 10 2", "5 3 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> doors = {10};
    vector<string> diamonds = {"66 5 1", "35 4 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> doors = {10, 20, 30, 20, 10};
    vector<string> diamonds = {"1 3 5", "3 5 5", "2 4 4"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> doors = {2};
    vector<string> diamonds = {"5 5 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> doors = {10};
    vector<string> diamonds = {"999 1 1", "1 1 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 8991;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> doors = {100, 50, 200, 150};
    vector<string> diamonds = {"20 8 4", "10 6 3", "6 6 2", "2 4 1"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> doors = {10, 5, 4, 3, 5};
    vector<string> diamonds = {"10 4 4"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> doors = {1000, 4, 1000};
    vector<string> diamonds = {"999 1 3"};
    JimmyLightning* pObj = new JimmyLightning();
    clock_t start = clock();
    int result = pObj->robTheBank(doors, diamonds);
    clock_t end = clock();
    delete pObj;
    int expected = 2997;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9906197&rd=9816&pm=6102
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <list> 
using namespace std; 
 
// LIB CODE 
#define SZ(v) ((int)(v).size()) 
#define FOR(i,a,b) for(int i=(a);i<int(b);++i) 
#define REP(i,n) FOR(i,0,n) 
typedef pair<int,int> PII; 
typedef vector<PII> VPII; 
typedef vector<VPII> VVPII; 
#define VAR(a,b) __typeof(b) a=b 
#define FORIT(it,v) for(VAR(it,(v).begin());it!=(v).end();++(it)) 
#define MP make_pair 
#define PB push_back 
typedef vector<int> VI; 
template<class T, class U> T cast (U x) { T y; ostringstream a; a<<x; istringstream b(a.str()); b>>y; return y; } 
template<class T> vector<T> split(string s, string x=" ") { vector<T> r; REP(i,s.size()) { string c; while(i<(int)s.size()&&x.find(s[i])==string::npos) c+=s[i++]; if(c.size()) r.push_back(cast<T>(c)); } return r; } 
#define FORE(i,a,b) for(int i=(a);i<=int(b);++i) 
#define FORD(i,a,b) for(int i=(b)-1;i>=int(a);--i) 
#define REPD(i,n) FORD(i,0,n) 
#define REPE(i,n) FORE(i,0,n) 
// REAL CODE 
 
int best[1001]; 
 
class JimmyLightning { 
public: 
  int robTheBank(vector <int> doors, vector <string> diamonds) { 
    int n=SZ(doors); 
    REP(i,n-1) doors[i+1]<?=doors[i]; 
 
    VVPII items(n); 
    FORIT(i,diamonds) { VI x=split<int>(*i); items[x[2]-1].PB(MP(x[0],x[1])); } 
     
    REP(i,n) FORIT(j,items[i]) printf("%d: %d,%d\n",i,j->first,j->second); 
     
    memset(best,0,sizeof(best)); 
    REPD(i,n) FORIT(j,items[i]) FORE(k,j->second,doors[i]-1) best[k]>?=best[k-j->second]+j->first; 
    int ret=0; REPE(i,doors[0]) ret>?=best[i]; return ret; 
 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/