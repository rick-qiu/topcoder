/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2894
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

class TCSocks {
public:
    int earnMoney(vector<int> money, vector<string> cost, vector<string> time, vector<string> competitors);
};

int TCSocks::earnMoney(vector<int> money, vector<string> cost, vector<string> time, vector<string> competitors) {
    int ret;
    return ret;
}


int test0() {
    vector<int> money = {0, 100, 100, 100};
    vector<string> cost = {"0 50 50 200", "0 0 50 200", "0 10 0 200", "0 0 0 0"};
    vector<string> time = {"0 1 1 1", "1 0 1 1", "1 1 0 1", "1 1 1 0"};
    vector<string> competitors = {};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> money = {0, 100, 100, 100};
    vector<string> cost = {"0 50 50 200", "0 0 50 200", "0 10 0 200", "0 0 0 0"};
    vector<string> time = {"0 1 1 1", "1 0 1 1", "1 1 0 1", "1 1 1 0"};
    vector<string> competitors = {"3", "2 3 1", "2 1"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> money = {0, 100, 200};
    vector<string> cost = {"0 20 10", "10 0 20", "20 10 0"};
    vector<string> time = {"0 1 5", "1 0 1", "1 1 0"};
    vector<string> competitors = {"2", "2"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> money = {0, 40, 40, 40, 40, 40};
    vector<string> cost = {"0 25 25 25 25 25", "25 0 25 25 25 25", "25 25 0 25 25 25", "25 25 25 0 25 25", "25 25 25 25 0 25", "25 25 25 25 25 0"};
    vector<string> time = {"0 1 1 1 1 1", "1 0 1 1 1 1", "1 1 0 1 1 1", "1 1 1 0 1 1", "1 1 1 1 0 1", "1 1 1 1 1 0"};
    vector<string> competitors = {"1", "2", "3", "4", "5"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> money = {0, 70, 70, 70, 70, 70};
    vector<string> cost = {"0 25 25 25 25 25", "25 0 25 25 25 25", "25 25 0 25 25 25", "25 25 25 0 25 25", "25 25 25 25 0 25", "25 25 25 25 25 0"};
    vector<string> time = {"0 1 1 1 1 1", "1 0 1 1 1 1", "1 1 0 1 1 1", "1 1 1 0 1 1", "1 1 1 1 0 1", "1 1 1 1 1 0"};
    vector<string> competitors = {"1", "2", "3", "4", "5"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> money = {0, 5};
    vector<string> cost = {"0 2", "2 0"};
    vector<string> time = {"0 10", "10 0"};
    vector<string> competitors = {};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> money = {0};
    vector<string> cost = {"0"};
    vector<string> time = {"0"};
    vector<string> competitors = {};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
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
    vector<int> money = {0, 193, 809};
    vector<string> cost = {"0 480 350", "896 0 747", "174 859 0"};
    vector<string> time = {"0 4 1", "1 0 2", "2 10 0"};
    vector<string> competitors = {"1"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 285;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> money = {0, 571, 602, 607, 166, 663};
    vector<string> cost = {"0 352 57 608 784 803", "520 0 876 727 956 926", "539 142 0 235 863 209", "780 844 997 0 612 392", "266 297 840 23 0 92", "677 56 8 919 276 0"};
    vector<string> time = {"0 7 9 8 5 3", "8 0 5 10 8 2", "6 4 0 7 6 4", "2 3 5 0 6 10", "8 4 2 7 0 1", "7 6 2 10 2 0"};
    vector<string> competitors = {"3 1", "4 1 5 3 2", "4 3 1", "5 1", "4 3 1", "5 3 2 4 1", "5 2 3 1"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> money = {0, 50, 531, 194, 843, 627, 658, 198, 843, 123};
    vector<string> cost = {"0 743 314 942 286 336 140 733 835 708", "600 0 252 144 1 61 807 853 210 115", "553 14 0 454 752 686 543 73 437 202", "696 290 437 0 578 533 629 160 504 964", "696 925 190 336 0 996 457 999 97 625", "94 438 932 48 895 0 227 769 411 202", "628 604 452 466 598 635 0 829 625 721", "566 375 184 738 555 905 243 0 605 699", "585 351 494 80 741 612 621 691 0 149", "576 868 912 615 728 43 668 977 315 0"};
    vector<string> time = {"0 2 2 9 9 8 2 4 1 1", "7 0 6 5 5 3 5 6 2 4", "8 4 0 10 9 8 4 10 2 1", "8 6 7 0 1 9 7 4 2 6", "3 3 10 6 0 2 5 4 5 8", "6 4 7 6 7 0 1 8 2 7", "9 5 8 5 4 8 0 4 10 7", "2 4 2 8 10 7 1 0 1 7", "2 9 9 6 8 9 1 2 0 7", "3 1 2 7 4 4 4 7 9 0"};
    vector<string> competitors = {"8 9 2 6 4 3", "8 1", "6 3 5 1", "2 3 8 9 7 6 4 5", "1 5 4 3 9 2 8 7 6"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 712;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> money = {0, 946, 435, 891, 7};
    vector<string> cost = {"0 602 786 577 142", "222 0 4 418 82", "660 855 0 811 662", "692 803 530 0 142", "690 728 778 31 0"};
    vector<string> time = {"0 8 1 6 10", "1 0 2 10 7", "3 10 0 7 3", "2 3 6 0 2", "10 5 1 8 0"};
    vector<string> competitors = {"4 1 2 3", "4 1 3 2", "3 1 2 4", "3 2 1", "1 2 3 4", "1 4 2", "1 4 3 2", "3 1 2", "2 4", "3 4 2"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
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
    vector<int> money = {0, 308, 388, 571, 353, 734};
    vector<string> cost = {"0 737 740 139 200 272", "681 0 368 518 109 908", "203 518 0 438 688 90", "79 75 27 0 307 697", "142 395 67 676 0 198", "694 616 655 544 98 0"};
    vector<string> time = {"0 10 5 10 8 6", "7 0 4 4 1 9", "2 1 0 8 3 4", "5 1 5 0 7 8", "5 4 9 10 0 10", "1 6 9 4 4 0"};
    vector<string> competitors = {};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 1550;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> money = {0, 18, 31, 456, 858, 937, 402};
    vector<string> cost = {"0 612 809 876 583 595 79", "793 0 591 590 569 816 673", "343 10 0 341 232 771 372", "870 116 726 0 894 183 536", "902 780 966 197 0 798 954", "849 891 629 185 617 0 250", "732 788 171 714 481 81 0"};
    vector<string> time = {"0 2 4 6 5 8 2", "8 0 1 7 7 2 1", "3 7 0 6 4 8 3", "7 3 3 0 3 1 8", "2 1 1 4 0 4 5", "5 1 6 7 4 0 9", "6 6 1 5 3 5 0"};
    vector<string> competitors = {"4", "5 6 2 4 3", "3", "3 2 1 4 5", "1"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 330;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> money = {0, 808, 154, 143, 48, 346};
    vector<string> cost = {"0 979 648 53 915 638", "432 0 242 392 654 782", "22 826 0 634 550 984", "463 215 300 0 342 481", "608 102 985 756 0 456", "712 999 776 642 621 0"};
    vector<string> time = {"0 3 6 3 6 8", "3 0 5 10 7 8", "7 5 0 8 10 3", "7 10 6 0 6 5", "5 9 10 2 0 3", "8 10 7 1 7 0"};
    vector<string> competitors = {"3 1 5", "4", "1", "2 4 3 1", "3 5 1", "2 1"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
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
    vector<int> money = {0, 892, 643, 651, 514, 734, 737, 958, 466};
    vector<string> cost = {"0 112 905 822 455 108 870 762 39", "417 0 67 165 211 117 591 118 618", "580 690 0 916 670 298 809 378 998", "773 204 170 0 181 581 195 961 190", "382 304 120 198 0 771 761 881 1", "449 426 802 461 495 0 238 559 92", "922 894 857 59 491 632 0 756 256", "910 792 199 553 51 522 791 0 24", "732 553 915 876 797 305 395 482 0"};
    vector<string> time = {"0 1 8 8 3 2 1 7 1", "4 0 8 5 10 7 3 5 9", "1 2 0 2 10 4 4 9 1", "9 3 9 0 3 3 3 9 9", "9 9 7 1 0 2 4 5 2", "9 7 6 10 6 0 10 10 9", "9 2 4 3 2 10 0 8 1", "7 9 8 9 2 8 4 0 10", "9 1 8 5 1 3 5 2 0"};
    vector<string> competitors = {"7 8", "1 7", "5 7", "3 5 8 7 6 2 1", "4 1 3 8 2"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 1816;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> money = {0, 850, 894, 446, 222, 635, 560, 624, 424, 16};
    vector<string> cost = {"0 139 267 292 682 562 959 607 789 423", "819 0 135 517 20 6 749 334 903 462", "768 50 0 24 683 970 500 707 266 823", "647 597 263 0 460 748 351 14 477 627", "404 384 27 289 0 884 432 932 383 533", "10 975 866 437 700 0 602 499 560 39", "378 233 938 860 965 609 0 76 407 305", "499 80 875 304 782 933 589 0 279 561", "875 250 301 727 867 231 190 447 0 574", "28 996 59 619 257 170 116 231 495 0"};
    vector<string> time = {"0 1 4 3 6 5 5 10 7 3", "5 0 10 6 9 8 9 6 9 4", "10 3 0 8 2 8 5 2 1 1", "5 9 2 0 3 9 8 8 7 3", "8 10 9 3 0 1 1 1 4 8", "5 2 3 2 8 0 1 6 4 9", "2 9 2 1 2 9 0 6 4 6", "7 9 10 10 2 2 6 0 9 1", "9 9 4 6 7 5 3 10 0 8", "6 3 2 2 7 5 4 3 5 0"};
    vector<string> competitors = {"9 3 5 6 4 2 7", "6 7 3 1 8 4 5 2", "8 1 4 5", "1 3 9", "6 1 4 9 8", "3 1 9 2", "2", "8 6 1", "2 6 1", "7 4 1 3 8"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 905;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> money = {0, 81, 796, 1000, 635, 619, 595};
    vector<string> cost = {"0 194 979 231 42 239 255", "407 0 272 900 379 728 206", "53 605 0 361 668 977 223", "896 347 954 0 201 282 355", "532 291 220 99 0 710 844", "672 819 5 491 605 0 290", "606 747 874 913 830 606 0"};
    vector<string> time = {"0 2 6 7 4 10 2", "5 0 7 3 2 3 2", "9 8 0 5 1 10 1", "6 10 6 0 5 5 5", "7 9 10 3 0 7 1", "7 5 10 7 3 0 4", "7 9 1 2 4 3 0"};
    vector<string> competitors = {"2 4 3 6 5 1", "2", "2", "4 2 1", "1 2 5 3", "2 1 4 5 6 3", "4 2 3 5 6 1", "5", "4 3 1 2 6 5"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 712;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> money = {0, 179, 482, 472, 699, 248};
    vector<string> cost = {"0 277 299 823 820 630", "795 0 261 289 953 860", "517 708 0 921 491 93", "826 76 282 0 643 515", "431 140 975 74 0 915", "412 756 187 101 423 0"};
    vector<string> time = {"0 9 9 3 5 9", "2 0 6 3 1 3", "2 2 0 10 6 8", "3 7 8 0 10 9", "3 2 1 10 0 9", "4 10 4 4 7 0"};
    vector<string> competitors = {"4 2 3", "5 4 3", "3 2 1 5 4", "2 1"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> money = {0, 404, 145, 876, 608, 784, 197, 452, 762, 433};
    vector<string> cost = {"0 805 174 322 964 710 197 863 47 743", "36 0 82 553 569 533 219 77 304 64", "411 133 0 821 509 268 988 917 121 284", "707 471 295 0 525 811 517 67 830 554", "103 510 947 723 0 451 919 549 365 885", "660 122 507 112 280 0 792 369 858 745", "464 360 442 586 379 632 0 483 837 185", "9 109 40 221 256 410 708 0 133 544", "857 807 218 924 313 143 607 10 0 537", "387 12 237 886 593 152 16 535 917 0"};
    vector<string> time = {"0 5 10 1 4 6 4 4 7 3", "3 0 9 5 4 7 5 6 5 10", "2 7 0 3 2 2 7 9 5 5", "7 5 7 0 9 4 9 6 10 4", "8 7 4 9 0 1 8 4 3 9", "8 3 6 2 2 0 5 3 2 6", "3 4 3 7 7 7 0 1 4 10", "4 4 2 4 3 10 3 0 7 8", "6 3 8 4 8 1 8 7 0 8", "4 6 9 6 5 1 7 6 4 0"};
    vector<string> competitors = {"1", "7 3 8 5 4", "4", "7", "7 8", "6 3 2 7 9 5 8", "4 5 9 2 6 1", "7 1 6 2 3 9"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 1242;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> money = {0, 548, 892, 869, 616, 720, 731, 152, 756};
    vector<string> cost = {"0 405 615 717 830 886 63 395 604", "488 0 762 579 336 583 360 750 81", "95 998 0 397 108 415 434 269 453", "225 261 642 0 879 449 412 232 965", "740 342 723 603 0 895 683 235 108", "532 716 568 15 511 0 971 890 703", "246 103 266 466 607 49 0 116 999", "740 40 4 680 957 707 751 0 678", "613 663 976 71 908 862 629 889 0"};
    vector<string> time = {"0 9 6 3 2 7 9 7 9", "5 0 7 8 1 9 8 10 9", "4 2 0 3 10 9 3 3 9", "5 3 10 0 4 4 6 7 10", "8 8 4 6 0 7 4 5 7", "7 5 7 3 2 0 2 5 2", "7 9 3 9 7 10 0 3 5", "8 8 2 4 5 10 1 0 1", "6 4 8 9 8 6 1 2 0"};
    vector<string> competitors = {"6 8 7 4 3 1", "7 4 2 1 3 6 5", "6 8 4", "8 5 3"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 1353;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> money = {0, 815, 423, 81, 633, 983, 689, 499, 184};
    vector<string> cost = {"0 238 862 289 990 820 402 322 399", "658 0 904 277 764 526 953 917 643", "47 263 0 793 258 287 352 915 819", "243 322 230 0 245 934 818 103 577", "227 376 191 787 0 309 54 752 720", "559 548 368 109 68 0 27 320 308", "145 526 327 741 599 580 0 661 710", "581 71 295 14 772 998 580 0 475", "135 516 187 550 377 511 678 723 0"};
    vector<string> time = {"0 2 10 8 1 3 5 2 10", "5 0 7 8 7 9 3 10 9", "4 2 0 10 10 6 2 1 4", "4 5 8 0 6 9 6 10 3", "3 2 5 4 0 9 8 9 4", "5 10 1 8 4 0 3 7 3", "2 9 5 9 10 6 0 5 7", "9 10 10 6 1 1 6 0 6", "7 6 3 8 4 9 2 10 0"};
    vector<string> competitors = {"3 1 2", "4 1 8 5 6 2 7", "5 7 8 2 6 4 3 1", "8 5 3 1 7 2 4"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 1059;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> money = {0, 326, 16, 75, 370, 6, 230, 575, 747};
    vector<string> cost = {"0 439 114 827 395 320 935 597 564", "873 0 236 321 234 627 656 658 761", "500 512 0 420 471 985 887 22 73", "92 389 317 0 833 574 494 395 920", "522 112 861 418 0 996 229 30 465", "118 355 340 944 20 0 781 777 777", "751 614 44 52 554 698 0 286 732", "330 348 510 912 945 925 862 0 940", "692 306 991 425 941 605 491 165 0"};
    vector<string> time = {"0 4 6 3 1 2 6 4 9", "6 0 1 2 3 6 1 8 1", "10 9 0 4 5 8 9 10 6", "7 3 7 0 8 10 6 2 4", "9 8 8 10 0 2 2 1 10", "5 3 7 2 4 0 7 10 2", "7 2 5 1 4 8 0 9 7", "5 5 7 1 3 2 3 0 1", "10 4 10 6 1 6 5 2 0"};
    vector<string> competitors = {"2 1 3"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 823;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> money = {0, 334, 583, 923, 736, 25, 789};
    vector<string> cost = {"0 80 103 525 600 435 20", "667 0 420 75 343 821 108", "904 586 0 187 615 42 277", "561 616 633 0 548 645 571", "960 325 51 659 0 793 846", "243 881 488 563 766 0 733", "462 290 427 650 89 924 0"};
    vector<string> time = {"0 8 6 4 1 10 8", "3 0 1 3 3 6 1", "2 6 0 5 9 1 5", "2 8 4 0 2 4 5", "4 4 6 7 0 4 3", "10 2 4 5 3 0 9", "8 5 8 3 5 2 0"};
    vector<string> competitors = {"1 3 2", "1 4", "5 4 6 3 2 1"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 845;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> money = {0, 437, 69, 457, 499, 78};
    vector<string> cost = {"0 141 656 819 421 221", "857 0 330 78 60 227", "513 416 0 498 919 426", "215 565 911 0 603 199", "631 452 806 309 0 527", "676 965 132 292 36 0"};
    vector<string> time = {"0 2 2 7 1 10", "8 0 4 5 6 5", "8 2 0 6 4 8", "5 8 5 0 6 10", "5 7 3 3 0 10", "5 3 2 9 5 0"};
    vector<string> competitors = {};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 668;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> money = {0, 992, 999, 522, 852};
    vector<string> cost = {"0 548 867 689 412", "594 0 687 290 868", "622 435 0 873 551", "133 167 341 0 914", "351 443 648 14 0"};
    vector<string> time = {"0 10 9 3 8", "7 0 3 3 6", "8 9 0 8 10", "2 1 9 0 4", "5 8 1 10 0"};
    vector<string> competitors = {"4 1 3 2", "3 2", "4 2 3", "4 3 1", "2 4 3", "2 4 3", "2 3", "4", "2"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 282;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> money = {0, 11, 347, 252, 349, 462, 903};
    vector<string> cost = {"0 443 395 729 620 371 43", "156 0 124 132 422 60 773", "812 497 0 117 828 197 519", "961 834 870 0 528 256 433", "736 70 608 48 0 181 668", "214 960 852 426 549 0 811", "208 57 774 164 867 159 0"};
    vector<string> time = {"0 5 3 1 2 5 2", "10 0 2 9 1 8 2", "9 10 0 1 3 7 7", "7 5 8 0 5 4 6", "7 2 6 10 0 9 6", "9 6 2 5 9 0 7", "2 7 6 4 7 8 0"};
    vector<string> competitors = {"5 3 1", "2", "2 5", "5 3 1 6 2 4", "2 4 3 5 1", "6 4 3 1 5", "3 1 2 4", "4 6 1 5 2", "6 4", "6 2"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> money = {0, 457, 434, 382, 818, 403, 265, 449, 214};
    vector<string> cost = {"0 204 600 800 885 542 439 823 913", "32 0 813 687 242 129 34 447 862", "56 462 0 727 71 309 461 867 200", "656 96 334 0 178 650 108 477 547", "89 856 922 495 0 821 374 100 651", "634 810 319 947 322 0 283 227 286", "446 416 272 551 243 880 0 47 878", "390 315 221 765 938 732 747 0 435", "902 616 166 830 223 406 736 712 0"};
    vector<string> time = {"0 1 10 6 5 5 4 7 6", "5 0 2 7 3 2 1 4 2", "1 9 0 8 6 1 3 9 9", "2 8 8 0 1 9 10 4 5", "8 8 2 7 0 5 3 9 1", "6 8 9 9 3 0 7 4 7", "10 8 9 10 7 1 0 9 4", "8 6 5 1 6 6 5 0 4", "3 8 4 4 6 10 10 3 0"};
    vector<string> competitors = {"1 8 2 5 4 7 6", "6 2 4", "8 7"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 785;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> money = {0, 929, 403, 858};
    vector<string> cost = {"0 270 263 672", "340 0 506 627", "557 698 0 292", "884 998 73 0"};
    vector<string> time = {"0 5 2 7", "7 0 9 9", "7 9 0 10", "1 1 9 0"};
    vector<string> competitors = {"2 1 3", "3", "2 3 1", "1", "1", "2 3 1", "3"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> money = {0, 547, 265, 776, 384, 244, 796, 677, 141};
    vector<string> cost = {"0 306 553 382 148 702 149 996 845", "772 0 235 623 120 546 325 886 822", "734 610 0 87 699 807 325 721 743", "367 963 652 0 490 119 312 536 821", "501 161 673 358 0 114 61 610 554", "174 789 522 97 43 0 209 864 991", "913 36 101 761 217 54 0 813 497", "344 327 648 852 294 648 537 0 335", "319 401 519 173 381 153 423 46 0"};
    vector<string> time = {"0 2 1 8 8 7 10 9 9", "2 0 9 4 1 1 8 7 9", "10 4 0 9 1 7 1 6 1", "1 4 9 0 9 3 1 4 5", "3 9 1 5 0 7 8 9 9", "6 5 7 5 2 0 8 8 4", "2 10 4 6 4 2 0 2 3", "2 6 8 6 1 6 4 0 10", "4 3 3 10 1 4 4 5 0"};
    vector<string> competitors = {"7 2 3 4", "6 5", "3 5 7", "2 1 3 4 5 6", "3 4 8 7", "7 3 6 5 4", "7 5", "4 3"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 894;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> money = {0, 53, 928, 603, 885};
    vector<string> cost = {"0 509 460 547 205", "773 0 981 361 833", "578 352 0 391 394", "817 751 367 0 430", "909 385 671 823 0"};
    vector<string> time = {"0 5 8 5 4", "2 0 9 2 5", "8 3 0 7 6", "5 9 7 0 5", "5 7 6 6 0"};
    vector<string> competitors = {"3 1 2 4"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 359;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> money = {0, 771, 458, 847, 8, 992, 770, 366, 956};
    vector<string> cost = {"0 849 91 296 258 9 251 320 381", "940 0 996 570 396 468 492 523 153", "507 973 0 362 273 52 671 968 80", "847 379 356 0 998 912 873 893 601", "233 369 458 421 0 453 50 324 791", "570 84 309 841 596 0 69 782 83", "552 468 938 824 935 849 0 880 123", "577 14 747 613 738 950 795 0 361", "603 651 425 122 150 678 840 893 0"};
    vector<string> time = {"0 9 1 1 7 1 1 6 3", "10 0 5 6 5 10 10 10 2", "3 2 0 9 8 2 5 7 9", "4 8 8 0 6 6 10 8 5", "5 8 9 5 0 7 9 7 3", "3 3 2 2 7 0 10 7 2", "2 1 10 4 7 6 0 5 4", "9 6 8 4 3 8 5 0 5", "4 1 10 5 9 7 9 2 0"};
    vector<string> competitors = {"1 4 3 6 7 2 8", "3 7 1 5 8 2 4 6"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 2819;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> money = {0, 860, 555, 936, 667};
    vector<string> cost = {"0 80 181 605 283", "533 0 996 654 733", "680 749 0 478 568", "571 408 874 0 193", "996 656 795 553 0"};
    vector<string> time = {"0 9 7 9 2", "2 0 1 5 7", "4 5 0 3 1", "1 10 4 0 8", "9 5 2 2 0"};
    vector<string> competitors = {"3 1 4 2", "1 4 3 2", "1", "1 2 3", "2 4", "3 4 1"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 196;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> money = {0, 591, 960, 271, 997, 610, 585, 156, 630};
    vector<string> cost = {"0 175 550 947 701 588 25 273 779", "212 0 248 984 896 467 362 764 36", "61 131 0 411 494 686 191 724 617", "61 59 446 0 962 35 962 234 283", "978 538 910 184 0 183 401 974 254", "890 647 600 927 317 0 31 885 437", "146 299 345 168 881 485 0 543 173", "444 467 421 423 530 254 306 0 114", "305 266 77 184 857 513 59 781 0"};
    vector<string> time = {"0 9 6 8 2 3 4 2 2", "7 0 2 9 6 2 5 7 2", "8 6 0 6 8 8 10 4 7", "7 6 7 0 7 3 4 6 4", "3 5 7 1 0 9 3 5 10", "10 1 4 8 1 0 6 10 4", "6 10 9 5 8 2 0 3 10", "10 3 5 2 5 9 3 0 8", "4 4 10 10 1 10 10 8 0"};
    vector<string> competitors = {"1 2 8 6 7", "7 2 8 6"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 2071;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> money = {0, 2, 20, 431, 820, 244};
    vector<string> cost = {"0 58 125 40 978 518", "150 0 731 595 633 311", "353 128 0 921 906 149", "644 525 160 0 728 735", "856 614 843 542 0 614", "749 96 625 357 615 0"};
    vector<string> time = {"0 7 9 8 1 1", "6 0 6 1 8 10", "1 7 0 8 1 1", "4 7 7 0 8 10", "8 10 9 5 0 2", "6 7 10 7 3 0"};
    vector<string> competitors = {"5 3 1", "3 4 5 2", "1 4", "5", "4 5 2 1 3"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> money = {0, 14, 502, 969, 621, 508, 829, 859};
    vector<string> cost = {"0 44 148 687 905 101 403 4", "649 0 999 326 458 924 803 252", "411 620 0 586 167 351 797 616", "757 852 575 0 923 372 441 865", "557 515 271 428 0 697 746 540", "491 672 426 565 558 0 955 97", "610 890 176 723 28 286 0 184", "532 663 989 622 106 368 329 0"};
    vector<string> time = {"0 10 1 6 7 5 5 10", "7 0 1 5 7 1 5 1", "3 7 0 3 7 6 9 9", "6 2 10 0 7 4 3 4", "8 3 3 9 0 1 1 1", "7 10 6 4 3 0 8 10", "10 8 7 1 4 10 0 8", "5 10 7 7 2 7 3 0"};
    vector<string> competitors = {"4", "2 5 3 4", "7", "5 1 4 2 3", "7 5 1 2 4 6 3", "4 6", "3"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 444;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> money = {0, 860, 678, 20, 117, 410, 395, 497, 592};
    vector<string> cost = {"0 315 229 988 712 521 716 66 303", "950 0 959 961 187 798 629 45 892", "73 836 0 711 687 758 739 148 546", "932 187 238 0 655 958 471 522 527", "735 858 504 262 0 536 687 450 252", "842 762 408 332 238 0 784 978 7", "681 74 31 125 319 698 0 205 231", "796 348 942 955 406 458 932 0 174", "274 307 430 249 153 66 814 528 0"};
    vector<string> time = {"0 2 10 1 8 5 7 6 5", "10 0 3 4 5 8 2 8 8", "2 8 0 9 4 3 7 2 3", "2 7 9 0 9 8 4 9 5", "10 2 5 7 0 2 5 7 2", "3 10 2 9 2 0 5 10 6", "1 4 10 8 8 9 0 2 1", "5 10 7 4 6 3 3 0 7", "9 3 10 7 8 7 9 7 0"};
    vector<string> competitors = {"7 1", "5 4 6 3"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 1502;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> money = {0, 723, 317};
    vector<string> cost = {"0 545 242", "300 0 180", "702 751 0"};
    vector<string> time = {"0 9 7", "2 0 8", "10 3 0"};
    vector<string> competitors = {"1 2", "1 2", "2", "2"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> money = {0, 697, 108, 593, 208, 977};
    vector<string> cost = {"0 3 480 959 608 482", "668 0 952 277 182 992", "966 403 0 336 816 803", "977 333 277 0 311 0", "374 28 943 462 0 421", "644 241 375 527 915 0"};
    vector<string> time = {"0 7 9 2 10 4", "3 0 4 2 6 9", "8 8 0 3 1 8", "6 9 7 0 1 8", "6 4 7 3 0 7", "2 8 1 8 3 0"};
    vector<string> competitors = {"1", "4 3 5 2", "5", "5 4 3 1", "5 3 2"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> money = {0, 415, 309, 223, 728, 849, 969, 516, 592, 390};
    vector<string> cost = {"0 308 21 321 528 797 188 337 684 467", "536 0 996 676 648 842 991 665 838 563", "676 899 0 492 220 143 782 952 758 185", "495 900 839 0 992 91 566 468 339 842", "938 477 952 32 0 256 153 534 424 410", "732 691 251 123 738 0 835 756 337 810", "503 322 981 704 782 280 0 37 110 519", "650 970 12 957 164 139 770 0 798 977", "110 891 940 325 965 964 801 541 0 371", "715 710 589 22 13 157 903 47 250 0"};
    vector<string> time = {"0 1 1 2 9 3 5 7 10 3", "8 0 1 4 1 9 10 3 6 4", "5 4 0 3 6 10 10 4 1 7", "8 7 1 0 10 6 2 7 10 4", "1 10 6 9 0 10 8 9 5 5", "2 6 7 1 8 0 2 2 7 4", "8 8 3 7 1 7 0 3 2 7", "9 1 5 1 3 2 2 0 3 5", "10 6 10 1 2 8 6 8 0 5", "2 7 1 3 7 5 7 6 5 0"};
    vector<string> competitors = {"1 3 5 7 8", "8 1 6 5 2", "4 5 9 2 8 6", "6 8 2 5 4 7 3 1 9", "7 1", "3 1 9", "1 8 4", "3 1 2 4 7 8 6 5", "9 8 5"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 925;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> money = {0, 633, 925, 74};
    vector<string> cost = {"0 444 100 713", "200 0 277 800", "514 109 0 255", "877 843 159 0"};
    vector<string> time = {"0 8 6 4", "7 0 10 3", "10 4 0 6", "9 1 5 0"};
    vector<string> competitors = {"3 1", "1 2 3"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 674;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> money = {0, 672, 577, 878};
    vector<string> cost = {"0 350 877 867", "878 0 604 847", "557 136 0 514", "306 481 328 0"};
    vector<string> time = {"0 1 4 3", "2 0 3 7", "5 6 0 2", "5 1 8 0"};
    vector<string> competitors = {"2 1 3", "2 3", "2 3", "1 2 3", "3", "2 1"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> money = {0, 787, 215, 288, 169, 206, 611, 667, 731, 223};
    vector<string> cost = {"0 997 116 646 934 309 369 428 638 48", "590 0 345 593 484 627 82 565 569 698", "909 940 0 663 307 490 198 974 452 610", "830 157 513 0 469 532 646 452 929 298", "831 701 16 802 0 286 843 245 95 62", "46 623 259 905 857 0 739 993 385 96", "734 702 69 908 807 650 0 58 8 928", "642 257 109 34 581 178 582 0 151 877", "485 180 404 677 920 848 84 825 0 973", "446 678 401 359 451 720 456 587 776 0"};
    vector<string> time = {"0 9 6 6 1 6 1 7 6 5", "7 0 2 5 3 3 10 10 5 6", "2 3 0 8 7 2 6 3 8 3", "10 8 6 0 1 8 1 5 1 2", "5 1 3 4 0 2 3 8 6 5", "2 7 9 4 3 0 1 9 3 6", "8 6 4 6 4 10 0 10 2 5", "6 7 10 7 1 4 9 0 1 3", "5 10 3 10 4 5 6 8 0 3", "5 1 4 3 2 3 10 2 2 0"};
    vector<string> competitors = {"3 8", "8", "6 4", "5 9 8 6 2 4 1 7 3"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 1247;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> money = {0, 457, 434, 382, 818, 403, 265, 449, 214};
    vector<string> cost = {"0 204 600 800 885 542 439 823 913", "32 0 813 687 242 129 34 447 862", "56 462 0 727 71 309 461 867 200", "656 96 334 0 178 650 108 477 547", "89 856 922 495 0 821 374 100 651", "634 810 319 947 322 0 283 227 286", "446 416 272 551 243 880 0 47 878", "390 315 221 765 938 732 747 0 435", "902 616 166 830 223 406 736 712 0"};
    vector<string> time = {"0 1 10 6 5 5 4 7 6", "5 0 2 7 3 2 1 4 2", "1 9 0 8 6 1 3 9 9", "2 8 8 0 1 9 10 4 5", "8 8 2 7 0 5 3 9 1", "6 8 9 9 3 0 7 4 7", "10 8 9 10 7 1 0 9 4", "8 6 5 1 6 6 5 0 4", "3 8 4 4 6 10 10 3 0"};
    vector<string> competitors = {"1 2 3 4 5 6 7 8", "1 2 3 4 5 6 7 8", "1 2 3 4 5 6 7 8", "1 2 3 4 5 6 7 8", "1 2 3 4 5 6 7 8", "1 2 3 4 5 6 7 8", "1 2 3 4 5 6 7 8", "1 2 3 4 5 6 7 8", "1 2 3 4 5 6 7 8", "1 2 3 4 5 6 7 8"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 674;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> money = {0, 1000};
    vector<string> cost = {"0 1", "1 0"};
    vector<string> time = {"0 1", "1 0"};
    vector<string> competitors = {"1", "1"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 248;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> money = {0, 457, 434, 382, 818, 403, 265, 449, 214};
    vector<string> cost = {"0 204 600 800 885 542 439 823 913", "32 0 813 687 242 129 34 447 862", "56 462 0 727 71 309 461 867 200", "656 96 334 0 178 650 108 477 547", "89 856 922 495 0 821 374 100 651", "634 810 319 947 322 0 283 227 286", "446 416 272 551 243 880 0 47 878", "390 315 221 765 938 732 747 0 435", "902 616 166 830 223 406 736 712 0"};
    vector<string> time = {"0 1 10 6 5 5 4 7 6", "5 0 2 7 3 2 1 4 2", "1 9 0 8 6 1 3 9 9", "2 8 8 0 1 9 10 4 5", "8 8 2 7 0 5 3 9 1", "6 8 9 9 3 0 7 4 7", "10 8 9 10 7 1 0 9 4", "8 6 5 1 6 6 5 0 4", "3 8 4 4 6 10 10 3 0"};
    vector<string> competitors = {"1 2 4 7 6 5 3", "6 2 5 1 3 7 4", "2 4 7 3 5 6 1", "1 2 4 7 6 5 3", "6 2 5 1 3 7 4", "2 4 7 3 5 6 1", "1 2 4 7 6 5 3", "6 2 1 3 7 4 5", "2 4 7 5 3 6 1"};
    TCSocks* pObj = new TCSocks();
    clock_t start = clock();
    int result = pObj->earnMoney(money, cost, time, competitors);
    clock_t end = clock();
    delete pObj;
    int expected = 695;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=269554&rd=5853&pm=2894
********************************************************************************
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <map> 
#include <set> 
#include <sstream> 
#include <cmath> 
 
using namespace std; 
 
 
class TCSocks { 
  public: 
   
  int n,best; 
  int cst[10][10],tm[10][10]; 
  int mny[10][1000]; // mny[i][k] = money at city i if reached at time k 
  bool vis[10]; 
   
  void go(int cur, int curtm, int profit) 
  { 
    profit+=mny[cur][curtm]; 
    if (profit-cst[cur][0]>best) 
      best=profit-cst[cur][0]; 
    for(int i=1;i<n;i++) 
      if (!vis[i]) { 
        vis[i]=true; 
        go(i,curtm+tm[cur][i],profit-cst[cur][i]); 
        vis[i]=false; 
      } 
  } 
   
  int earnMoney(vector <int> money, vector <string> cost, vector <string> time, vector <string> competitors) { 
    n=money.size(); 
    for(int i=0;i<n;i++) { 
      vis[i]=false; 
      for(int j=0;j<1000;j++) 
        mny[i][j]=money[i]; 
      istringstream ss1(cost[i]), ss2(time[i]); 
      for(int j=0;j<n;j++) { 
        ss1 >> cst[i][j]; 
        ss2 >> tm[i][j]; 
      } 
    } 
    for(int i=0;i<competitors.size();i++) { 
      int t=0,cur=0,next; 
      istringstream ss(competitors[i]); 
      while (ss >> next) { 
        t+=tm[cur][next]; 
        for(int j=t;j<1000;j++) 
          mny[next][j]/=2; 
        cur=next; 
      } 
    } 
     
    vis[0]=true; 
    best=0; 
    go(0,0,0); 
    return best; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/