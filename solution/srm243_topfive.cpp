/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4453
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

class TopFive {
public:
    double findProbability(vector<string> results, vector<string> accuracies, int points);
};

double TopFive::findProbability(vector<string> results, vector<string> accuracies, int points) {
    double ret;
    return ret;
}


int test0() {
    vector<string> results = {"200 200 200", "200 200 200", "200 200 200", "200 200 200", "200 200 200"};
    vector<string> accuracies = {"100 100 100", "100 100 100", "100 100 100", "100 100 100", "0 0 50"};
    int points = 100;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> results = {"200 200 200", "200 200 200", "200 200 200", "200 200 200", "200 200 200", "200 200 200"};
    vector<string> accuracies = {"100 100 100", "100 100 100", "100 100 100", "100 100 100", "0 0 50", "0 0 0"};
    int points = 100;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> results = {"200 200 200", "200 200 200", "200 200 200", "200 200 200", "200 200 200", "200 200 200", "200 200 200"};
    vector<string> accuracies = {"100 100 100", "100 100 100", "100 100 100", "100 100 100", "0 0 50", "0 0 0", "0 0 50"};
    int points = 100;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> results = {"1000 1000 1000"};
    vector<string> accuracies = {"100 100 100"};
    int points = 0;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> results = {"200 200 200", "200 200 200", "200 200 200", "200 200 200", "200 200 200"};
    vector<string> accuracies = {"100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100"};
    int points = 100;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> results = {"197 977 258", "543 313 843", "596 678 956", "167 794 504", "26 254 161", "270 851 316", "934 228 992", "504 80 582"};
    vector<string> accuracies = {"48 69 43", "9 44 89", "60 68 6", "18 2 26", "28 71 99", "56 61 32", "47 27 13", "29 11 35"};
    int points = 4;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04521160460771057;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> results = {"0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0"};
    vector<string> accuracies = {"0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0"};
    int points = 0;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> results = {"0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0"};
    vector<string> accuracies = {"100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100"};
    int points = 5;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> results = {"183 287 911", "462 976 761", "547 260 885", "69 37 687", "683 42 635", "973 766 547", "247 183 338", "984 765 622", "625 737 954", "732 557 800", "552 91 907", "193 86 559", "94 575 151", "984 894 786", "140 265 302", "368 246 723"};
    vector<string> accuracies = {"61 25 14", "99 76 34", "50 65 91", "88 46 60", "15 96 34", "94 5 100", "73 16 64", "55 76 45", "91 14 85", "80 68 43", "3 8 72", "22 38 92", "13 66 48", "52 63 66", "46 67 44", "41 39 11"};
    int points = 972;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1421852277786677;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> results = {"366 634 606", "61 288 304", "432 567 762", "39 895 95", "541 448 178", "65 685 152", "551 590 436", "288 60 206", "226 406 217", "966 313 992"};
    vector<string> accuracies = {"9 65 4", "96 57 9", "37 66 48", "77 71 15", "86 56 58", "56 59 58", "30 7 21", "41 44 35", "61 23 36", "58 67 62"};
    int points = 117;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009914904173694752;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> results = {"758 61 588", "170 161 699", "298 574 926", "129 929 381", "311 971 732", "84 836 842", "731 744 389", "139 821 782", "78 535 141", "152 697 424", "894 31 898", "550 820 830", "2 544 256", "800 65 368", "718 775 502", "143 306 345", "805 589 593", "771 693 168", "358 580 649", "635 394 44", "653 951 792", "434 293 6", "316 511 823", "332 239 282", "611 776 924", "676 556 366", "92 187 251"};
    vector<string> accuracies = {"9 5 38", "7 73 97", "80 64 84", "76 11 38", "62 58 5", "54 94 8", "48 65 100", "12 79 43", "2 97 67", "70 47 53", "94 79 37", "91 91 18", "47 37 2", "28 88 25", "97 38 63", "28 21 57", "16 67 45", "58 51 45", "91 35 58", "32 17 38", "12 85 42", "69 7 85", "71 71 20", "86 7 65", "12 17 43", "65 22 79", "12 78 87"};
    int points = 1941;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.999997521242777;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> results = {"597 894 371", "818 930 394", "234 119 114", "218 632 253", "668 686 44", "850 472 289", "517 398 122", "211 193 266", "512 155 707", "492 102 312", "368 773 216", "371 472 119", "499 409 730", "626 329 349", "704 769 115", "478 224 299", "919 894 836", "646 218 275", "9 891 157", "362 854 927", "896 664 261", "851 610 5", "975 558 123", "282 624 540", "737 666 681", "738 919 844", "899 95 828", "538 263 445", "879 442 933", "555 668 89", "101 708 591", "105 86 666", "323 39 152", "251 502 275", "628 905 131", "457 807 507", "233 697 567", "333 197 434", "555 528 38", "1000 857 326", "809 351 133", "738 37 543", "618 871 428", "444 461 238"};
    vector<string> accuracies = {"28 100 60", "8 79 92", "31 28 53", "25 42 83", "52 49 99", "39 41 87", "97 9 70", "90 23 20", "27 57 15", "80 63 10", "2 76 96", "79 4 26", "23 70 85", "36 11 91", "89 79 32", "74 98 81", "85 84 20", "72 1 2", "40 50 63", "20 83 8", "18 78 36", "50 86 73", "14 51 6", "24 100 86", "34 5 37", "81 49 15", "80 31 32", "61 93 57", "92 38 44", "84 55 44", "29 11 59", "95 97 13", "61 91 18", "62 50 72", "17 79 6", "42 32 31", "1 100 2", "93 85 68", "39 74 93", "39 25 30", "98 95 8", "98 88 76", "90 50 4", "75 24 40"};
    int points = 1921;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999940620092922;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> results = {"572 485 326", "593 75 274", "408 667 23", "785 561 619", "506 626 190", "754 169 701", "972 586 766", "820 287 293", "604 319 150", "327 760 863", "90 311 234", "768 198 833", "878 462 258", "852 942 996", "917 293 980", "477 322 759"};
    vector<string> accuracies = {"20 82 99", "93 69 87", "92 18 23", "60 90 98", "33 94 64", "32 27 9", "48 66 67", "30 37 55", "91 31 31", "15 46 94", "92 20 75", "65 34 73", "29 89 72", "72 52 28", "46 48 18", "43 92 78"};
    int points = 1914;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999578410578928;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> results = {"972 476 770", "180 650 735", "136 474 876", "668 179 985", "797 5 750", "586 355 157", "491 808 327", "543 865 269", "249 887 979", "168 173 468", "326 218 516", "593 947 207", "253 982 404", "709 224 1", "397 558 984", "241 923 274", "543 66 645", "427 481 721", "694 858 313", "567 699 999", "377 325 181"};
    vector<string> accuracies = {"47 95 37", "71 81 42", "8 59 85", "71 77 49", "50 48 13", "75 17 69", "43 25 28", "22 55 67", "41 58 7", "37 95 25", "29 82 6", "78 74 50", "11 14 13", "66 50 98", "83 19 57", "47 96 82", "89 23 13", "88 55 100", "43 39 29", "36 77 38", "61 28 15"};
    int points = 1300;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5508216532043124;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> results = {"245 276 582", "149 286 822", "661 717 408", "290 883 797", "852 822 598", "637 355 852", "605 859 77", "219 83 627", "831 259 211", "139 123 87", "881 510 166", "91 220 851", "42 662 916", "664 896 184", "561 376 138", "904 201 853", "846 524 733", "858 465 813", "205 914 321"};
    vector<string> accuracies = {"62 72 97", "85 47 56", "69 93 40", "33 55 52", "50 0 69", "96 88 47", "85 27 98", "25 74 75", "15 54 38", "84 23 20", "48 82 25", "67 60 55", "45 26 56", "65 78 78", "80 53 68", "65 83 11", "45 48 36", "60 34 64", "24 30 95"};
    int points = 1319;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6633957362514592;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> results = {"359 651 786", "492 731 155", "16 145 836", "666 502 619", "699 514 56", "533 870 736", "612 918 757", "672 983 131", "86 84 722", "960 10 936", "599 243 162", "109 704 160", "631 659 663", "271 183 113", "330 94 687", "185 811 607", "201 917 641", "899 435 857", "332 736 384", "34 125 492", "765 822 210", "105 295 261", "863 760 691", "720 7 346", "85 655 802", "753 369 343", "708 69 338", "148 836 83", "323 10 459"};
    vector<string> accuracies = {"45 97 74", "61 71 23", "70 9 16", "17 16 3", "41 63 70", "11 62 27", "22 20 64", "100 70 15", "65 83 77", "29 39 65", "75 75 7", "4 63 27", "6 99 88", "48 39 44", "1 17 81", "91 37 69", "33 48 69", "0 99 10", "96 96 2", "87 96 100", "94 66 69", "77 24 47", "84 16 48", "100 75 67", "38 60 48", "50 71 38", "33 35 3", "16 69 86", "54 54 74"};
    int points = 1600;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9458024320585064;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> results = {"552 199 209", "680 387 948", "57 374 904", "845 937 607", "691 601 180", "470 465 768", "60 592 593", "477 4 760", "820 146 723", "889 302 337", "669 178 994", "174 885 328", "123 125 789", "672 238 191", "322 249 392", "16 125 922", "167 263 609", "424 725 289", "572 601 804", "321 520 113", "217 374 408", "508 509 144", "344 726 430", "46 170 880", "712 353 755", "277 321 886", "761 56 625", "602 858 916", "29 738 525", "206 182 572", "122 579 272", "966 824 787", "83 896 309", "518 602 382", "969 806 123", "913 1000 96", "722 918 402", "271 209 715", "776 867 788", "71 101 852", "555 158 413", "346 87 775", "828 134 285", "23 928 246", "518 719 512", "978 333 304", "477 391 521"};
    vector<string> accuracies = {"61 21 70", "55 38 83", "77 2 1", "9 85 17", "6 81 22", "21 31 53", "72 2 48", "1 95 72", "88 84 47", "75 7 31", "41 26 73", "88 50 11", "38 94 83", "83 33 76", "30 60 47", "19 73 97", "47 9 88", "40 20 9", "34 18 2", "44 87 51", "18 95 0", "98 31 11", "6 57 22", "99 77 56", "29 19 3", "44 14 76", "86 72 2", "46 62 17", "18 38 60", "63 91 0", "52 42 44", "40 81 68", "10 60 37", "11 39 17", "17 79 23", "32 82 80", "47 63 14", "99 78 10", "93 48 41", "88 39 87", "71 96 0", "3 17 76", "18 28 89", "93 12 96", "90 94 45", "98 72 36", "100 55 53"};
    int points = 1721;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9836322937280906;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> results = {"432 194 533", "157 564 546", "793 260 632", "53 974 193", "79 34 494", "208 684 696", "830 782 384", "838 547 283", "845 696 184", "518 937 885", "937 694 83", "157 186 411", "119 473 649", "224 32 533", "342 615 329", "768 917 999", "958 786 344", "409 333 17", "896 900 440", "411 753 406", "835 257 367", "532 108 511", "787 620 787", "281 505 343", "923 919 722", "330 673 741", "675 413 967", "606 666 139", "107 201 350", "52 410 8", "715 522 554", "641 870 743", "853 954 356", "61 758 540", "895 30 635", "413 249 798", "433 176 279", "555 680 859", "56 637 432", "433 10 613"};
    vector<string> accuracies = {"1 83 66", "74 2 14", "16 92 4", "17 85 66", "37 8 94", "45 60 30", "39 79 15", "73 23 12", "19 1 50", "47 75 25", "73 31 58", "20 90 50", "63 95 63", "33 95 84", "77 76 21", "93 80 13", "86 18 23", "81 6 19", "43 56 39", "57 11 99", "42 13 0", "80 23 71", "13 20 12", "53 87 62", "16 69 83", "8 2 4", "83 0 68", "31 69 13", "96 7 53", "21 39 32", "46 82 91", "49 68 100", "48 32 22", "98 37 63", "34 55 33", "62 100 86", "15 2 74", "28 66 67", "29 44 75", "41 52 100"};
    int points = 1568;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49117153246024225;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> results = {"297 188 662", "702 390 87", "937 546 368", "805 763 947", "455 697 481", "746 824 833", "702 505 962", "505 340 996", "940 462 676", "702 284 67", "837 843 636", "451 628 715", "542 917 819", "100 828 479", "806 465 102", "455 755 675", "520 653 113", "735 688 150", "276 834 118", "638 299 789", "727 88 280", "174 204 472", "884 381 458", "133 827 575", "205 644 821", "801 199 264", "273 284 739", "447 417 455", "615 225 197", "904 735 216", "636 173 851", "666 116 847", "834 108 667", "987 320 917", "483 265 438", "561 338 794", "897 928 612", "104 638 229", "358 821 108", "985 725 495", "412 700 256"};
    vector<string> accuracies = {"81 71 37", "48 16 32", "46 98 23", "9 29 69", "58 53 5", "11 76 35", "25 48 31", "22 18 99", "40 63 99", "91 94 50", "83 5 100", "91 12 33", "63 2 99", "86 70 54", "22 47 89", "58 78 83", "73 78 31", "76 62 19", "16 81 78", "29 95 57", "28 35 90", "61 9 28", "49 73 41", "85 17 39", "43 79 26", "5 2 70", "58 74 27", "8 65 11", "89 23 16", "17 80 80", "94 62 30", "7 74 78", "46 40 86", "15 32 19", "81 55 15", "70 46 15", "8 22 65", "24 84 12", "60 34 24", "6 76 26", "59 61 46"};
    int points = 1391;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22046490289793372;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> results = {"928 209 594", "547 408 596", "190 865 494", "353 392 962", "6 252 267", "817 671 562", "631 78 290", "593 292 312", "59 51 286", "553 541 487", "466 318 271", "605 892 562", "596 261 63", "865 895 625", "893 479 586", "759 596 476", "157 407 819", "509 695 861", "696 730 430", "271 221 0", "922 296 640", "999 456 654", "320 550 805", "835 808 711", "9 161 670", "82 737 480", "939 12 363"};
    vector<string> accuracies = {"84 87 72", "39 60 84", "56 78 48", "0 80 59", "11 69 94", "100 53 77", "87 77 55", "0 67 7", "89 63 3", "4 69 99", "58 9 49", "81 8 84", "81 85 55", "84 68 28", "7 1 46", "30 50 51", "16 82 8", "60 17 88", "44 30 67", "20 65 65", "40 75 73", "38 97 20", "82 38 88", "90 78 58", "58 30 66", "3 95 50", "76 60 57"};
    int points = 1623;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8657569451352308;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> results = {"145 160 512", "993 529 551", "535 624 670", "917 225 550", "146 405 751", "500 409 573", "349 535 830", "810 642 851", "492 43 785", "933 283 350", "228 542 271", "44 52 751", "9 647 955", "983 966 755", "649 945 779", "609 854 263", "386 830 857", "118 227 599", "438 88 740", "214 171 34", "911 652 1", "488 633 363", "784 978 827", "758 458 69", "445 446 97", "564 461 113", "736 889 378", "539 394 623", "663 586 829", "24 653 411", "149 910 621"};
    vector<string> accuracies = {"12 23 91", "96 71 83", "27 76 35", "57 20 24", "96 91 43", "11 15 18", "51 65 25", "66 59 84", "92 40 57", "31 3 4", "61 91 97", "3 62 46", "28 2 32", "87 80 9", "42 33 66", "38 11 68", "28 88 83", "9 60 10", "77 35 50", "100 9 65", "68 18 45", "88 1 74", "48 85 41", "73 44 83", "38 27 32", "13 60 82", "40 49 35", "22 38 18", "81 92 65", "25 91 7", "69 40 89"};
    int points = 1693;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8115578118651794;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> results = {"736 158 572", "204 592 661", "94 298 111", "134 321 509", "362 15 989", "932 86 994", "711 452 163", "243 127 385", "358 755 956", "182 232 603", "59 729 542", "938 413 822", "867 695 418", "586 723 244", "465 145 782", "553 13 482", "819 67 347", "823 467 740", "981 680 672", "160 979 97", "955 965 21", "263 668 945", "580 82 765", "381 552 766", "33 333 31", "119 200 213", "859 995 196", "144 905 607", "916 839 803", "855 137 343", "617 880 795", "627 30 241", "752 986 988", "251 316 815", "538 333 408", "252 130 423"};
    vector<string> accuracies = {"87 88 17", "41 55 67", "47 39 92", "0 77 20", "51 99 91", "39 16 24", "31 88 5", "53 7 55", "57 17 32", "10 78 76", "49 56 85", "57 62 5", "43 51 100", "10 23 47", "58 96 50", "14 4 64", "9 48 43", "30 86 54", "91 51 2", "57 50 53", "27 22 78", "15 100 85", "64 58 26", "58 32 13", "69 43 60", "98 62 5", "48 44 20", "25 65 76", "45 53 67", "95 71 70", "47 22 22", "60 99 74", "87 75 96", "39 26 63", "82 2 87", "4 67 11"};
    int points = 1557;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7074581034658985;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> results = {"812 968 686", "305 538 218", "518 456 288", "24 647 567", "340 164 439", "425 326 507", "124 330 821", "390 491 124", "455 460 679", "370 162 240", "204 773 270", "944 939 129", "397 754 902", "672 261 710", "368 137 759", "547 109 623", "432 239 419"};
    vector<string> accuracies = {"60 57 79", "16 73 90", "6 57 93", "68 8 85", "27 15 42", "35 86 99", "55 27 97", "49 30 71", "6 88 58", "23 44 70", "85 70 86", "70 2 44", "71 67 40", "17 38 14", "82 90 20", "73 44 77", "66 41 46"};
    int points = 1817;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> results = {"782 436 330", "220 396 97", "562 753 651", "983 367 1000", "583 421 259", "924 824 913", "853 989 203", "579 48 29", "16 311 220", "866 953 428", "672 420 123", "113 830 257", "861 784 292", "479 844 128", "680 378 492", "773 720 524", "539 178 751", "602 935 554", "198 942 484", "107 513 703", "199 600 367", "112 903 27", "171 328 609", "406 452 229", "156 886 400", "224 958 881", "810 282 19", "184 902 339", "880 222 654", "516 337 943"};
    vector<string> accuracies = {"98 96 60", "23 21 72", "67 92 77", "52 66 8", "45 39 36", "44 40 100", "65 74 97", "76 2 28", "88 65 74", "92 78 17", "47 29 66", "26 22 38", "25 0 0", "85 77 92", "63 53 30", "29 12 51", "82 30 16", "54 50 30", "3 50 57", "56 67 84", "68 40 48", "51 6 61", "46 85 95", "58 15 43", "58 65 56", "39 90 61", "85 93 9", "15 4 88", "75 60 12", "75 92 33"};
    int points = 1843;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9958916998875982;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> results = {"708 370 454", "892 310 727", "578 660 873", "612 252 862", "596 935 737", "902 910 388", "888 571 150", "932 121 247", "320 589 411", "110 692 57", "109 794 329", "156 654 161", "29 1 581", "968 294 320", "202 938 37", "538 277 344", "216 281 78", "483 660 972", "363 483 416", "980 773 236", "87 347 45", "336 190 130", "181 500 11", "198 491 790", "879 383 673", "39 444 127", "850 329 241", "98 735 225", "813 989 456", "533 584 775", "749 690 311", "30 66 152", "378 747 459", "509 892 532", "275 651 669", "983 814 880", "371 7 771", "485 435 378", "120 604 240", "972 419 100", "743 371 137", "623 69 658", "712 312 303", "612 158 795", "807 579 99", "294 139 994"};
    vector<string> accuracies = {"84 3 98", "4 63 91", "98 8 50", "53 6 75", "4 13 85", "49 32 81", "62 41 43", "14 6 64", "15 82 50", "77 50 66", "47 61 15", "1 0 88", "45 98 19", "63 43 85", "77 4 14", "42 73 41", "6 28 97", "72 34 84", "74 17 35", "7 67 51", "87 60 4", "30 98 71", "34 65 64", "76 83 48", "78 92 97", "98 5 22", "58 2 86", "45 8 61", "75 78 74", "11 4 99", "87 59 49", "51 40 11", "78 70 23", "8 75 26", "56 63 5", "81 75 56", "25 59 56", "52 16 38", "42 24 4", "34 17 61", "17 48 79", "37 41 44", "14 75 97", "52 55 40", "76 5 14", "61 40 91"};
    int points = 1931;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.993773083467237;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> results = {"582 207 232", "203 468 135", "637 361 144", "662 884 11", "606 104 173", "314 8 368", "386 901 526", "468 506 201", "665 200 746", "707 597 102", "761 968 501", "146 871 614", "957 619 833", "376 59 797", "34 285 208", "752 190 404", "664 47 420", "414 349 368", "993 876 996", "692 324 639"};
    vector<string> accuracies = {"2 34 34", "41 62 13", "74 15 79", "91 6 98", "94 52 40", "100 66 52", "2 49 98", "93 75 3", "72 84 35", "14 76 53", "79 88 80", "89 96 59", "80 68 43", "5 59 96", "82 71 9", "61 18 19", "73 62 60", "21 5 6", "99 66 97", "51 46 26"};
    int points = 1721;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999999;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> results = {"338 995 869", "215 205 563", "541 157 33", "760 682 618", "155 449 861", "962 62 427", "378 787 391", "712 552 634", "170 60 669", "336 233 711", "569 902 850", "919 663 871", "998 466 561", "320 981 757", "530 490 489", "237 469 610", "658 953 266", "571 58 372"};
    vector<string> accuracies = {"87 58 74", "50 64 76", "87 17 37", "85 81 43", "77 66 42", "78 62 83", "6 42 5", "79 3 94", "1 76 23", "27 97 77", "64 67 18", "28 2 0", "71 46 13", "20 18 17", "34 83 56", "64 59 24", "92 95 16", "17 41 73"};
    int points = 1593;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9983214263735956;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> results = {"106 938 457", "501 944 131", "72 753 819", "546 834 446", "283 461 642", "849 635 931", "714 353 434", "327 891 15", "303 396 996", "238 270 253", "653 967 631", "620 564 80", "748 2 246", "771 943 380", "217 240 933", "643 166 991", "644 650 918", "752 719 94", "830 300 509", "56 480 95", "367 123 773", "946 368 373", "145 503 632", "378 858 124", "979 564 187", "326 74 523", "473 54 866", "743 340 946", "840 231 138", "603 608 871", "792 187 504", "593 736 286", "753 718 477", "749 788 511"};
    vector<string> accuracies = {"36 18 2", "86 43 81", "63 36 34", "41 90 59", "6 85 43", "19 60 17", "90 49 29", "83 26 86", "87 76 82", "1 10 70", "21 66 38", "15 43 55", "21 74 9", "22 6 16", "13 2 58", "34 96 39", "93 8 50", "55 79 65", "74 29 35", "57 2 20", "22 61 63", "2 85 33", "97 25 81", "43 71 9", "99 45 14", "91 82 31", "80 1 91", "1 88 53", "73 75 56", "80 10 78", "27 27 76", "69 88 44", "46 30 47", "96 84 46"};
    int points = 1483;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5048187542529721;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> results = {"742 606 710", "749 716 259", "434 130 190", "779 557 957", "430 595 176", "731 711 755", "761 880 366", "395 504 80", "714 705 409", "776 167 894", "513 454 795", "277 518 635", "195 305 53", "227 834 269", "551 406 662", "554 112 359", "434 935 768", "818 507 816", "60 841 343", "234 754 734", "468 148 1", "870 689 405", "918 843 797", "668 297 803", "761 765 680", "344 17 209", "138 621 615", "153 829 754", "186 42 646", "651 808 552", "23 400 947", "422 562 949", "711 786 630", "204 665 773", "645 426 529", "584 611 672", "657 324 540", "685 142 653", "46 432 281", "716 885 158", "961 684 177", "821 438 582", "577 659 924", "274 363 804", "194 748 162", "766 511 18", "119 488 947", "63 530 756", "543 709 314"};
    vector<string> accuracies = {"14 7 100", "84 66 79", "18 6 43", "78 11 41", "54 82 53", "40 64 81", "58 32 59", "88 86 11", "20 32 13", "7 2 85", "71 56 71", "41 63 27", "71 78 5", "37 35 89", "91 18 1", "85 44 67", "58 35 15", "37 1 98", "74 5 46", "100 11 11", "38 89 93", "26 37 23", "88 15 21", "79 30 9", "79 0 7", "18 31 98", "40 95 67", "29 14 38", "71 51 85", "2 83 43", "5 19 80", "78 79 67", "57 58 0", "56 68 75", "17 27 76", "48 70 14", "51 42 49", "94 40 5", "27 83 6", "37 58 92", "44 59 72", "3 77 42", "40 13 97", "53 80 12", "20 43 40", "42 22 12", "69 27 7", "9 20 53", "20 52 88"};
    int points = 1922;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9998017797116717;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> results = {"28 276 515", "521 693 589", "685 715 20", "340 156 305", "482 279 458", "206 62 96", "53 229 838", "552 647 20", "44 246 579", "674 877 716", "287 652 618", "218 903 259", "606 660 498", "728 339 779", "966 468 437", "628 483 608", "284 382 753", "744 384 857", "321 599 898", "844 666 233", "377 161 582", "410 554 705", "774 515 258"};
    vector<string> accuracies = {"67 92 22", "83 27 60", "22 25 64", "65 4 18", "35 79 76", "14 65 80", "67 100 100", "13 66 43", "73 90 97", "6 57 61", "36 44 77", "93 41 30", "2 85 41", "77 20 21", "18 91 23", "79 2 56", "21 5 14", "0 72 18", "59 94 46", "41 58 54", "96 97 49", "46 100 30", "24 66 48"};
    int points = 1471;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9887002153818963;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> results = {"486 588 384", "637 901 950", "468 623 531", "148 367 64", "869 40 78", "568 106 658", "482 990 233", "260 673 617", "884 441 821", "504 906 420", "723 337 640", "92 519 35", "240 24 398", "559 94 160", "152 443 118", "134 752 642", "238 67 104", "678 808 118", "408 612 591", "666 499 372", "373 54 655", "762 859 484", "660 443 463", "406 787 544", "192 397 312", "409 295 736", "681 391 647", "670 620 788", "322 968 665", "286 637 364", "67 614 223", "309 571 431", "932 321 235", "638 890 983", "662 238 582", "155 1000 45", "93 212 355", "520 172 445", "252 656 798", "945 687 746"};
    vector<string> accuracies = {"11 3 22", "39 7 18", "72 94 16", "79 90 70", "36 86 34", "58 61 49", "23 39 37", "17 80 6", "78 95 99", "98 29 30", "38 70 30", "35 66 6", "59 85 37", "72 5 99", "36 67 23", "54 57 56", "78 45 15", "66 1 68", "75 89 45", "74 74 10", "70 51 7", "53 50 62", "72 26 98", "92 52 81", "39 10 42", "28 9 43", "58 48 15", "50 75 31", "78 33 40", "28 37 77", "59 19 50", "89 0 97", "76 24 36", "4 38 42", "31 52 98", "88 1 52", "94 49 66", "13 31 15", "55 16 85", "49 12 24"};
    int points = 1652;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9735403164864684;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> results = {"539 512 754", "364 362 426", "754 546 18", "473 986 385", "408 579 742", "956 107 872", "116 467 868", "354 795 185", "739 639 553", "909 546 123", "346 772 596", "901 670 655", "193 371 163", "85 301 225", "943 863 341", "635 306 254", "182 7 311", "372 907 414", "601 1000 632", "384 94 949", "148 222 128", "554 685 755", "700 649 363", "218 489 272", "676 719 966", "504 393 569", "69 887 425", "932 345 972", "979 339 490", "599 802 991", "994 226 853", "783 811 114", "875 466 922", "317 833 442", "303 319 945", "52 293 465", "707 26 68", "316 434 603", "988 943 1000", "512 398 781"};
    vector<string> accuracies = {"12 83 65", "43 67 84", "25 59 93", "11 27 17", "36 67 69", "37 25 97", "60 5 50", "5 69 76", "72 7 80", "77 77 8", "9 96 51", "79 76 89", "26 13 38", "20 1 12", "12 4 94", "48 34 12", "75 68 0", "100 34 55", "63 5 98", "45 18 45", "21 25 35", "82 95 1", "32 57 49", "83 38 70", "29 26 2", "21 25 31", "6 10 36", "73 77 93", "74 85 6", "2 30 63", "41 82 77", "23 19 47", "8 37 78", "84 54 83", "23 59 16", "86 49 47", "5 19 23", "66 32 56", "53 70 13", "22 44 76"};
    int points = 1728;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8863810055971704;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> results = {"74 15 113", "861 166 859", "318 701 234", "78 318 422", "707 864 288", "683 138 401", "490 622 124", "23 429 674", "366 821 930", "35 508 769", "419 805 174", "200 717 227", "201 176 233", "814 854 405", "744 384 466", "548 650 688", "18 982 533", "334 622 944", "716 670 57", "210 517 535", "884 283 592", "995 957 770", "108 25 768", "355 967 693", "565 790 850", "825 838 854", "106 479 491", "520 514 480", "250 521 25", "124 750 427", "773 905 452", "249 260 339", "590 172 25", "204 719 754", "682 689 519", "31 388 653", "546 679 228", "420 785 851", "604 284 481", "22 903 849", "44 485 824", "755 823 104", "381 509 129", "401 403 286", "982 98 837", "485 218 157", "439 370 284"};
    vector<string> accuracies = {"15 75 85", "76 15 37", "10 53 12", "93 72 58", "52 84 93", "84 67 83", "88 78 45", "16 27 98", "37 23 98", "18 59 6", "18 32 76", "72 18 26", "45 88 75", "88 99 85", "40 88 98", "8 13 28", "57 25 66", "94 98 18", "85 99 64", "49 20 47", "89 99 42", "40 4 80", "72 36 65", "66 3 90", "38 43 4", "48 75 85", "17 28 72", "37 93 80", "57 54 40", "1 13 100", "74 35 22", "98 0 68", "81 32 35", "31 83 56", "22 87 64", "1 71 44", "5 75 62", "63 86 72", "35 89 40", "93 95 32", "26 38 88", "88 85 1", "98 74 74", "2 55 10", "72 17 55", "93 29 53", "26 57 58"};
    int points = 1815;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9160066623210391;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> results = {"714 826 278", "579 770 443", "687 830 708", "459 355 702", "868 500 878", "314 191 491", "11 22 924", "387 50 745", "833 144 154", "122 417 221", "582 85 574", "266 857 819", "730 213 327", "890 631 263", "550 373 220", "556 749 691", "4 335 238", "928 794 892", "123 37 593", "656 444 437", "562 289 806", "634 682 941", "59 713 907", "935 854 884", "484 661 599", "265 608 91", "108 496 232", "921 200 435", "889 589 24", "896 791 979", "342 142 67", "116 407 682", "452 545 396", "792 233 139", "791 314 837", "942 106 494", "221 138 18", "305 748 86", "673 376 870", "552 487 384", "142 778 833", "173 850 18", "606 595 991"};
    vector<string> accuracies = {"2 50 15", "47 35 5", "60 50 89", "59 100 75", "96 88 53", "49 60 36", "25 39 52", "72 60 65", "8 85 41", "11 83 0", "60 47 22", "57 81 71", "77 80 2", "4 29 43", "29 8 7", "5 82 58", "15 57 71", "5 72 83", "74 4 18", "39 80 22", "93 0 28", "22 74 66", "58 52 69", "61 39 93", "85 100 90", "84 93 19", "78 42 50", "43 4 5", "67 53 35", "84 58 76", "48 64 83", "78 24 16", "34 74 49", "86 91 58", "8 4 50", "10 9 81", "20 14 82", "24 43 85", "74 7 100", "16 76 72", "10 88 82", "32 82 36", "66 49 64"};
    int points = 1388;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005319586120755541;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> results = {"836 67 502", "372 379 552", "693 941 765", "877 237 566", "77 840 209", "779 458 515", "51 456 962", "533 791 346", "241 45 459", "675 533 187", "227 854 850", "18 746 943", "939 704 783", "933 13 311", "4 232 442", "711 829 528", "5 715 529", "692 562 387", "740 500 594", "324 118 603", "787 323 257", "219 160 669", "248 385 895", "453 131 74", "525 551 524", "169 129 865", "251 950 150", "505 462 86", "904 644 338", "311 410 201", "727 998 59", "940 894 37", "745 605 598", "29 914 733", "825 334 91", "438 251 973", "975 679 692", "609 811 693", "483 682 939", "507 908 372", "828 995 974"};
    vector<string> accuracies = {"65 21 13", "61 14 66", "8 8 27", "31 99 36", "88 96 39", "100 55 86", "79 91 92", "17 81 44", "67 35 64", "79 27 98", "31 52 59", "40 79 4", "66 51 99", "78 37 8", "56 12 57", "33 32 45", "15 43 75", "87 69 36", "79 56 19", "46 35 85", "55 46 43", "10 45 8", "17 46 75", "82 98 46", "72 61 56", "71 100 65", "45 5 78", "24 45 41", "70 56 74", "95 21 85", "64 99 5", "37 60 41", "88 70 8", "73 27 6", "56 10 2", "44 14 53", "77 18 26", "57 88 33", "34 7 68", "95 37 79", "59 6 96"};
    int points = 1624;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4860633001242544;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> results = {"660 662 751", "764 381 831", "38 635 193", "154 364 774", "707 790 40", "177 669 786", "132 112 757", "199 880 769", "222 263 498", "21 607 620", "255 855 894", "206 868 782", "343 466 350", "920 573 561", "325 389 625", "627 595 783", "238 104 836", "327 774 238", "86 957 50", "593 753 450", "133 886 150", "742 559 63", "232 339 896", "320 902 784"};
    vector<string> accuracies = {"64 21 21", "91 20 89", "62 74 11", "41 56 85", "65 33 53", "38 27 68", "97 16 29", "26 47 79", "30 37 7", "54 32 8", "71 84 97", "19 3 21", "52 53 12", "32 51 70", "35 90 88", "49 16 95", "39 88 28", "14 66 2", "28 72 83", "22 66 94", "14 32 48", "23 51 94", "4 7 30", "59 28 22"};
    int points = 1208;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5240190804012026;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> results = {"478 353 561", "194 274 404", "947 741 828", "845 889 467", "941 312 221", "271 706 288", "944 787 281", "823 943 688", "557 480 6", "145 785 984", "1000 789 757", "282 587 79", "96 710 270", "723 340 228", "886 546 220", "775 25 508", "661 630 519"};
    vector<string> accuracies = {"58 31 81", "23 62 2", "12 3 95", "59 27 51", "32 79 2", "98 98 74", "38 48 40", "0 61 52", "66 41 74", "29 51 34", "69 80 69", "17 79 31", "70 18 78", "6 94 25", "6 82 18", "33 30 88", "20 49 64"};
    int points = 1761;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.999783741648046;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> results = {"507 534 974", "962 178 449", "976 868 375", "118 132 423", "387 549 608", "600 775 689", "407 277 537", "74 563 907", "396 838 800", "579 913 53", "204 250 41", "877 126 335", "275 75 15", "317 26 653", "302 552 145", "907 139 664", "691 287 526", "469 545 857", "645 832 598", "125 879 273", "344 624 438", "812 691 455", "635 728 456", "13 65 200", "532 960 831", "349 383 892", "695 318 523", "309 827 206", "186 588 953", "680 991 145", "280 642 178", "536 603 885", "336 400 108", "844 212 749", "603 635 818", "98 628 798", "167 994 541", "239 624 207", "79 724 445", "203 243 932", "216 534 45", "287 400 10", "35 348 826", "718 832 191", "345 108 788", "383 714 19", "536 180 661", "113 311 48", "149 716 992", "478 609 887"};
    vector<string> accuracies = {"25 96 50", "56 62 13", "34 14 21", "91 52 55", "29 37 62", "18 81 50", "68 2 2", "32 23 63", "86 83 86", "12 65 51", "30 5 94", "75 26 83", "86 48 95", "35 75 46", "6 98 5", "45 44 81", "14 24 72", "38 88 10", "60 94 12", "63 8 92", "78 31 68", "92 53 58", "20 96 84", "21 69 24", "86 91 15", "13 91 26", "79 91 1", "38 91 51", "62 7 33", "70 48 22", "36 12 87", "81 11 43", "1 71 81", "9 74 91", "93 59 19", "100 60 57", "59 74 62", "21 14 50", "31 67 44", "88 97 40", "65 85 13", "83 99 0", "18 83 31", "81 77 8", "10 66 96", "85 3 50", "27 20 39", "21 65 29", "19 26 64", "88 69 95"};
    int points = 1813;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9570066556406667;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> results = {"25 681 827", "0 1 561", "593 535 33", "50 9 832", "177 900 430", "338 185 922", "860 641 965", "21 551 410", "914 961 987", "713 153 782", "861 669 309", "281 841 888", "399 942 991", "366 799 268", "868 850 843", "904 715 912", "710 675 272", "227 941 424", "568 435 97", "711 438 473", "348 293 90", "676 366 871", "221 632 424", "159 30 336", "625 84 311", "27 440 95", "856 851 896", "605 822 432", "310 21 760", "857 162 996", "70 964 20", "188 705 218", "575 115 655", "674 407 569", "101 322 85", "797 778 172", "823 169 64", "12 460 385", "695 527 999", "900 669 567", "466 128 603", "6 609 7", "291 959 157", "902 822 964", "435 96 477", "393 20 675"};
    vector<string> accuracies = {"31 17 9", "17 73 16", "26 59 97", "29 44 50", "62 60 93", "40 4 26", "8 57 39", "90 25 95", "75 64 65", "35 1 61", "32 11 51", "95 3 28", "32 3 23", "59 57 17", "9 74 12", "11 19 32", "10 28 22", "52 77 32", "98 70 23", "80 27 5", "12 45 2", "5 63 1", "8 74 97", "68 15 70", "93 91 89", "26 57 45", "94 2 28", "85 100 84", "88 73 29", "2 39 67", "36 39 16", "46 56 19", "8 24 72", "38 7 43", "89 57 85", "29 100 88", "81 12 59", "44 24 84", "80 54 19", "60 63 13", "82 76 13", "64 15 5", "76 29 84", "7 16 44", "59 13 58", "39 55 42"};
    int points = 1844;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9995002396681142;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> results = {"200 200 200", "200 200 200", "200 200 200", "200 200 200", "200 200 200"};
    vector<string> accuracies = {"100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 50"};
    int points = 500;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> results = {"200 200 200", "200 200 200", "200 200 200", "200 200 200", "600 600 600"};
    vector<string> accuracies = {"100 100 100", "100 100 100", "100 100 100", "100 100 100", "75 75 75"};
    int points = 500;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.015625;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> results = {"200 200 200", "200 200 200", "200 200 200", "200 200 200", "200 200 200"};
    vector<string> accuracies = {"100 100 100", "100 100 100", "100 100 100", "100 100 100", "0 0 50"};
    int points = 200;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> results = {"200 200 200", "200 200 200", "200 200 200", "200 200 200", "33 33 33", "33 200 200"};
    vector<string> accuracies = {"100 0 0", "0 0 100", "0 100 0", "100 100 100", "100 100 100", "33 80 50"};
    int points = 200;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10000000000000009;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> results = {"928 209 594", "547 408 596", "190 865 494", "353 392 962", "6 252 267", "817 671 562", "631 78 290", "593 292 312", "59 51 286", "553 541 487", "466 318 271", "605 892 562", "596 261 63", "865 895 625", "893 479 586", "759 596 476", "157 407 819", "509 695 861", "696 730 430", "271 221 0", "922 296 640", "999 456 654", "320 550 805", "835 808 711", "9 161 670", "82 737 480", "939 12 363"};
    vector<string> accuracies = {"84 87 72", "39 60 84", "56 78 48", "0 80 59", "11 69 94", "100 53 77", "87 77 55", "0 67 7", "89 63 3", "4 69 99", "58 9 49", "81 8 84", "81 85 55", "84 68 28", "7 1 46", "30 50 51", "16 82 8", "60 17 88", "44 30 67", "20 65 65", "40 75 73", "38 97 20", "82 38 88", "90 78 58", "58 30 66", "3 95 50", "76 60 57"};
    int points = 1623;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8657569451352308;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> results = {"84 87 72", "39 60 84", "56 78 48", "0 80 59", "11 69 94", "100 53 77", "87 77 55", "0 67 7", "89 63 3", "4 69 99", "58 9 49", "81 8 84", "81 85 55", "84 68 28", "7 1 46", "30 50 51", "16 82 8", "60 17 88", "44 30 67", "20 65 65", "40 75 73", "38 97 20", "82 38 88", "90 78 58", "58 30 66", "3 95 50", "76 60 57", "84 87 72", "39 60 84", "56 78 48", "0 80 59", "11 69 94", "100 53 77", "87 77 55", "0 67 7", "89 63 3", "4 69 99", "58 9 49", "81 8 84", "81 85 55", "84 68 28", "7 1 46", "30 50 51", "16 82 8", "60 17 88", "44 30 67", "20 65 65", "40 75 73", "38 97 20", "82 38 88"};
    vector<string> accuracies = {"84 87 72", "39 60 84", "56 78 48", "0 80 59", "11 69 94", "100 53 77", "87 77 55", "0 67 7", "89 63 3", "4 69 99", "58 9 49", "81 8 84", "81 85 55", "84 68 28", "7 1 46", "30 50 51", "16 82 8", "60 17 88", "44 30 67", "20 65 65", "40 75 73", "38 97 20", "82 38 88", "90 78 58", "58 30 66", "3 95 50", "76 60 57", "84 87 72", "39 60 84", "56 78 48", "0 80 59", "11 69 94", "100 53 77", "87 77 55", "0 67 7", "89 63 3", "4 69 99", "58 9 49", "81 8 84", "81 85 55", "84 68 28", "7 1 46", "30 50 51", "16 82 8", "60 17 88", "44 30 67", "20 65 65", "40 75 73", "38 97 20", "82 38 88"};
    int points = 200;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5535522101140015;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> results = {"541 40 551"};
    vector<string> accuracies = {"98 62 97"};
    int points = 0;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> results = {"1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1"};
    vector<string> accuracies = {"1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1"};
    int points = 0;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> results = {"100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100"};
    vector<string> accuracies = {"50 50 50", "12 71 57", "1 56 47", "50 50 50", "51 4 17"};
    int points = 0;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> results = {"1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1", "1 1 1"};
    vector<string> accuracies = {"100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100"};
    int points = 0;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> results = {"200 200 200"};
    vector<string> accuracies = {"100 100 100"};
    int points = 100;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> results = {"0 0 0", "0 0 0", "0 0 0", "0 0 0", "0 0 0"};
    vector<string> accuracies = {"50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50"};
    int points = 0;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> results = {"100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100"};
    vector<string> accuracies = {"50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50"};
    int points = 10;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16652297973632812;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> results = {"1000 1000 1000"};
    vector<string> accuracies = {"100 100 100"};
    int points = 2000;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> results = {"100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100"};
    vector<string> accuracies = {"50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50", "50 50 50"};
    int points = 200;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 4.112727935989824E-10;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> results = {"100 100 100", "100 100 100", "100 100 100", "100 100 100", "100 100 100"};
    vector<string> accuracies = {"100 100 100", "100 100 100", "100 100 100", "100 100 100", "0 0 100"};
    int points = 100;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
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
    vector<string> results = {"100 100 100"};
    vector<string> accuracies = {"100 100 100"};
    int points = 99;
    TopFive* pObj = new TopFive();
    clock_t start = clock();
    double result = pObj->findProbability(results, accuracies, points);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9906197&rd=7218&pm=4453
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
#include <regex.h>  
using namespace std; 
 
// LIB CODE 
#define PB push_back 
#define FOR(i,a,b) for(int i=(a);i<int(b);++i) 
#define REP(i,n) FOR(i,0,n) 
#define SZ(v) ((v).size()) 
#define REPSZ(i,v) REP(i,SZ(v)) 
typedef vector<int> VI; 
typedef vector<VI> VVI; 
template<class T, class U> T cast (U x) { T y; ostringstream a; a<<x; istringstream b(a.str()); b>>y; return y; } 
template<class T> vector<T> split(string s, string x=" ") { vector<T> r; REP(i,s.size()) { string c; while(i<(int)s.size()&&x.find(s[i])==string::npos) c+=s[i++]; if(c.size()) r.push_back(cast<T>(c)); } return r; } 
typedef vector<double> VD; 
// REAL CODE 
 
class TopFive { 
public: 
    double findProbability(vector <string> RES, vector <string> ACC, int p) { 
      VVI res; REPSZ(i,RES) res.PB(split<int>(RES[i])); 
      VVI acc; REPSZ(i,ACC) acc.PB(split<int>(ACC[i])); 
      VD place(5,0); place[0]=1.0; int n=SZ(res); 
      REP(i,n) { 
        VD nplace(5,0); 
        REP(j,5) { 
        double pwin=0; 
        REP(k,1<<3) { 
          int c=0; double pp=1; 
          REP(l,3) if(k&(1<<l)) { c+=res[i][l]; pp*=acc[i][l]/100.0; } else pp*=(100-acc[i][l])/100.0; 
          if(c<p) pwin+=pp; 
        } 
          nplace[j]+=place[j]*pwin; 
          if(j!=4) nplace[j+1]+=place[j]*(1-pwin); 
        } 
        place=nplace; 
      } 
      double ret=0; REP(i,5) ret+=place[i]; return ret; 
    } 
 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/