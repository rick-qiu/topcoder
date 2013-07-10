/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5899
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

class RectangleGroups {
public:
    string maximalIndexed(vector<string> rectangles);
};

string RectangleGroups::maximalIndexed(vector<string> rectangles) {
    string ret;
    return ret;
}


int test0() {
    vector<string> rectangles = {"A 1 2", "A 3 3"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "A 11";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> rectangles = {"A 1 2", "B 3 3", "A 2 1"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "B 9";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> rectangles = {"D 1 6", "F 2 3", "G 1 1", "G 5 1", "C 3 2"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "C 6";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> rectangles = {"S 2 54", "Y 34 65", "F 234 23", "D 84 127", "R 603 46", "S 36 192", "Y 76 32", "T 54 28", "S 22 22"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "R 27738";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> rectangles = {"F 1000 1000"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "F 1000000";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> rectangles = {"W 131 538", "A 411 511", "Q 774 294", "E 406 264", "L 156 201", "B 97 318", "K 506 345", "E 509 761", "N 283 434", "H 630 329", "U 958 292", "W 21 503", "R 581 100", "W 489 234"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "E 494533";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> rectangles = {"T 327 794", "J 201 412", "Q 696 73", "A 905 758", "U 13 661", "W 844 17", "Q 653 514", "M 571 249"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "A 685990";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> rectangles = {"Z 175 327", "J 33 102", "N 435 479", "I 468 667", "I 473 791"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "I 686299";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> rectangles = {"H 127 76", "L 459 285", "I 485 81", "T 567 708", "A 657 488", "P 628 729", "N 283 448", "M 51 308", "C 813 534", "G 547 439", "C 848 659", "X 789 186", "I 756 516", "I 590 251", "F 755 497", "T 462 887", "I 680 755", "Y 685 224", "T 16 383", "B 771 802", "K 775 377", "M 293 915", "C 809 729", "L 866 474", "D 440 721", "O 502 810", "L 841 489", "H 540 511", "K 442 18", "L 926 885", "F 182 921", "F 764 333", "E 402 126", "Y 743 461", "G 175 556", "B 479 770", "M 294 172", "K 647 36"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "L 1772058";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> rectangles = {"E 533 970", "J 203 981", "H 459 943", "Y 696 343", "A 117 515", "M 62 823", "K 81 619", "S 35 231", "O 191 754", "J 879 737", "T 241 762", "R 76 576", "C 614 371", "H 846 394", "X 347 416", "N 370 970", "U 807 651", "Y 928 603", "V 735 781", "M 392 623"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "J 846966";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> rectangles = {"P 55 572", "Z 786 862", "I 484 521", "R 766 628", "L 317 98", "E 446 168", "H 44 102", "O 303 607", "F 206 437", "X 61 443", "H 201 311", "Y 394 293", "A 704 171", "T 486 798", "X 231 326", "G 433 191", "N 521 679", "P 739 138", "K 670 855", "L 481 559", "M 933 231", "O 480 850", "R 804 289", "U 635 947", "U 240 633", "K 897 648", "I 603 678", "D 232 845", "P 606 641", "A 588 897", "J 117 935", "E 220 777", "E 672 822", "V 354 227", "Z 694 908", "K 524 280", "L 777 126", "S 492 933", "C 730 915", "S 699 395"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "Z 1307684";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> rectangles = {"U 854 928", "F 214 76", "H 942 536", "O 546 137", "Z 572 8", "X 779 481", "N 916 263", "Q 931 749", "R 956 999"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "R 955044";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> rectangles = {"Q 990 400", "Q 577 10", "Y 829 97", "Q 79 854", "Y 329 385", "X 691 525", "H 704 508", "X 54 108", "U 71 446"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "Q 469236";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> rectangles = {"S 884 484", "Z 635 575", "R 830 842", "M 600 605", "L 916 753", "V 801 675", "Q 650 458", "Q 524 195", "R 740 398", "Q 951 412", "F 857 880", "Y 303 634", "V 526 925", "O 121 417", "C 120 853", "V 201 991", "Q 943 770", "A 729 469", "L 48 70", "E 707 119", "E 983 86", "N 777 703", "E 856 935", "P 208 916", "I 334 137", "C 152 497", "P 480 85", "U 59 983"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "Q 1517802";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> rectangles = {"C 433 520", "S 783 95", "O 561 255", "V 451 331", "F 986 547", "G 445 734", "C 161 136", "R 999 707", "M 137 254", "R 136 546", "H 587 585", "F 810 62", "P 817 676", "W 46 665", "A 748 196", "Y 757 779", "G 435 978", "Z 26 704", "Z 91 314", "J 310 596", "A 486 965", "M 412 492", "R 24 188", "M 239 180", "H 242 280", "H 589 399", "M 762 156", "V 648 529", "B 363 428", "Z 420 493", "D 49 540", "B 657 239", "J 779 137", "G 587 799", "O 840 829", "U 450 903", "E 352 37", "D 6 854", "B 15 692", "U 543 288", "N 103 155", "F 157 819", "O 862 751", "B 966 940", "M 48 694", "N 216 94", "G 158 231"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "O 1486777";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> rectangles = {"M 561 27", "C 279 132", "B 443 371", "O 879 972", "X 999 310", "K 621 684", "Z 438 954", "W 972 78", "B 346 363", "V 321 739", "D 846 647", "W 304 627", "D 508 347", "C 880 245", "K 88 673", "K 592 77", "Z 700 626", "R 632 665", "X 94 104", "X 398 794", "R 396 897", "N 438 308", "L 332 247", "W 764 811", "A 902 124", "G 361 200", "M 129 25", "Z 177 83", "C 502 431", "H 358 812", "U 76 239", "E 235 675", "X 259 365", "O 603 269", "Q 636 241", "H 142 973", "H 391 617", "W 945 692", "O 227 348"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "W 1539968";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> rectangles = {"M 925 541", "K 658 225", "O 585 915", "Q 926 333", "D 330 831", "W 935 471", "R 76 860", "Q 219 308", "F 520 915", "O 478 538", "J 28 777", "R 877 287", "L 986 551", "R 202 684", "W 495 779", "R 980 773", "Q 739 998", "P 145 676", "T 135 64", "P 68 12", "O 35 752", "V 84 349"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "R 1212767";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> rectangles = {"J 141 83"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "J 11703";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> rectangles = {"J 863 117", "T 419 178", "A 472 477", "I 125 61", "V 255 669", "U 278 262", "R 948 648", "X 13 914", "C 918 466", "R 419 136", "E 877 389", "D 873 403", "A 581 693", "N 513 612", "V 134 684", "U 291 115", "A 894 839", "X 497 435", "Q 951 576", "T 62 733", "S 142 216", "R 233 817", "A 802 841", "C 741 33", "Y 933 878", "Z 937 865", "V 18 446", "X 993 238", "Q 692 657", "D 542 566", "J 967 402", "B 822 817", "F 774 803", "C 599 931"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "A 2052325";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> rectangles = {"Q 852 789", "Q 880 750", "J 416 171", "D 689 182", "P 67 174", "N 474 722", "U 736 33", "O 109 785", "M 788 413", "W 951 405", "B 474 187", "G 495 969", "E 57 221", "C 93 506", "Q 116 503", "L 100 1", "K 67 241", "Y 51 257", "P 972 595", "N 635 162", "J 572 278", "D 414 437", "R 602 705", "Q 208 949", "P 157 462", "Q 726 857"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "Q 2210150";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> rectangles = {"S 885 729", "N 164 214", "L 571 869", "K 790 552", "R 696 179", "Y 645 476", "C 539 930", "A 819 358", "X 785 44", "E 191 442", "P 346 116", "G 230 332", "D 755 505", "F 375 660", "W 691 656", "L 357 285", "B 7 242", "C 519 878", "T 117 250"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "C 956952";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> rectangles = {"B 48 442", "F 826 218", "E 800 469", "K 105 358", "N 207 932", "E 863 748", "G 725 777", "G 837 91", "D 10 859", "F 633 627", "G 701 267", "D 84 744", "Z 487 883", "D 377 880", "C 527 99", "C 951 115", "M 725 637", "S 544 64", "T 473 965", "I 628 94", "M 791 25", "F 799 350", "P 858 227", "S 199 356", "R 928 592", "W 750 670"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "E 1020724";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> rectangles = {"R 16 432", "J 878 433", "D 786 913", "Z 698 235", "G 522 996", "G 369 231", "R 202 551", "I 194 565", "J 466 76", "N 431 70", "V 773 448", "L 977 233", "V 415 879", "K 99 229", "M 212 800", "J 352 956", "G 907 174", "E 238 546", "J 790 6", "S 5 865", "Q 788 553", "Y 421 488", "X 226 117", "M 364 333", "T 922 575", "O 354 737", "S 681 441", "M 321 304", "B 579 19", "A 959 544", "D 370 382", "V 763 358", "U 565 492", "V 843 441", "Y 346 567", "E 900 862", "J 946 36", "W 958 549", "M 650 366", "I 871 769", "Y 362 652", "V 768 776", "E 938 431", "Q 881 135", "O 900 389"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "V 1951974";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> rectangles = {"T 401 634", "W 435 694", "B 672 491", "R 661 575", "W 187 498", "R 724 143", "T 800 766", "G 549 880", "I 527 373", "T 219 197", "H 476 544", "Q 378 324", "F 675 280", "J 887 634", "U 443 879", "L 277 40", "R 2 48", "I 107 690", "G 192 188", "D 846 733", "O 311 739", "J 564 705", "K 508 754", "L 611 481", "L 677 567", "E 109 341"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "J 959978";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> rectangles = {"N 176 771", "P 774 1000", "V 677 814", "K 937 286", "E 655 929", "S 627 615", "Y 835 57", "A 512 304", "W 832 909", "U 678 826", "U 242 329", "U 785 180", "R 442 693", "F 364 367", "I 758 139", "U 350 733", "P 927 363", "L 268 380", "T 961 591", "U 331 76", "N 252 408"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "P 1110501";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> rectangles = {"D 509 572", "G 630 508", "G 867 663", "Q 995 87", "N 879 62", "K 728 317", "D 790 734", "S 440 37", "Y 442 389", "J 258 240", "W 397 94", "Y 864 665", "Q 797 545", "M 182 345", "C 281 976", "J 951 524", "G 970 234", "F 213 104", "H 550 585", "D 103 521", "S 480 804", "F 147 998", "L 563 785", "E 779 201", "C 249 999", "M 405 504", "D 264 554", "P 410 671", "E 253 418", "A 706 153"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "G 1121841";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> rectangles = {"X 167 768", "P 990 174", "B 469 502", "O 581 855", "P 756 952", "R 389 252", "A 436 951", "Z 253 55", "R 663 23", "G 1 21", "Q 483 895", "R 192 242", "L 175 110", "U 284 638", "X 202 674", "X 626 460", "K 77 25", "U 298 164", "A 989 18", "E 418 881", "U 876 311", "G 210 844", "M 257 954", "N 308 847", "J 382 935", "G 102 217", "J 824 28", "N 702 396", "N 177 541", "H 775 767", "N 309 468", "O 341 336", "C 817 139", "N 869 847", "F 315 948", "K 873 29", "M 991 771"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "N 1515280";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> rectangles = {"B 422 621", "N 267 130", "B 528 702", "X 307 9", "X 300 140", "K 983 155", "M 951 541", "G 81 27", "O 734 707", "Y 322 206"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "B 632718";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> rectangles = {"B 797 698", "V 111 81", "H 308 800", "O 278 690", "I 978 472", "Q 25 619", "M 820 937", "E 463 945", "D 732 543", "V 603 859", "F 606 894", "H 561 459", "I 241 659", "H 697 10", "R 849 314", "K 993 454", "S 117 673", "H 945 139", "Y 439 348", "B 904 698", "V 60 445", "O 732 921", "P 544 817", "B 276 969", "D 943 602", "V 919 879", "L 874 322"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "B 1454742";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> rectangles = {"A 689 699", "D 466 165", "X 388 362", "J 204 850", "H 769 91", "V 69 396", "I 374 647", "G 786 78", "N 354 925", "E 587 455", "Z 30 694", "J 78 494", "S 381 530", "M 267 67", "T 845 16", "N 701 455", "F 396 981", "O 342 485", "L 94 762", "Q 440 787", "V 864 291", "D 813 399", "H 198 652", "G 500 94", "B 908 232", "G 117 427", "D 830 283", "R 70 827", "Q 194 11", "T 656 87", "V 495 930", "H 363 719", "H 197 99", "L 982 210", "P 430 967", "Q 382 91", "K 86 211", "F 683 646", "J 223 516", "Q 418 96", "Z 659 268", "I 137 591", "S 255 404"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "F 829694";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> rectangles = {"O 870 402", "K 534 909", "B 787 192", "N 660 109", "K 619 735"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "K 940371";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> rectangles = {"A 802 289", "D 26 494", "A 50 637", "C 695 4", "N 471 975", "R 737 224", "U 634 190", "F 388 483", "S 888 320", "Q 253 709", "H 401 922", "U 961 528", "I 876 49", "G 261 767"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "U 627868";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> rectangles = {"J 403 710", "X 304 423", "K 373 619", "L 960 887", "B 43 15", "E 138 257", "L 216 698", "C 553 47", "Q 137 35", "H 481 148", "E 857 800", "M 447 906", "H 792 399", "V 793 29", "W 283 842", "J 124 292", "R 468 373", "B 81 546", "V 66 590", "F 10 520", "H 993 464", "Z 470 445", "P 189 311", "V 504 624", "P 903 378", "M 574 981", "Z 595 636", "Q 620 532", "L 704 570", "Y 184 791", "I 83 446", "Y 618 408", "Z 684 857"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "L 1403568";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> rectangles = {"I 346 467", "O 536 984", "Z 570 436", "D 589 612", "G 578 740", "Z 902 787", "K 401 755", "K 746 77", "V 199 716", "O 5 938", "Z 853 342", "K 194 471", "Q 542 498", "L 298 562", "G 210 72", "G 856 126", "W 4 925", "Q 998 272", "T 956 255", "H 506 952", "Z 758 772", "W 19 213", "C 464 962", "W 344 431", "G 743 410", "C 628 171", "H 494 859", "M 518 505", "W 818 796", "O 413 673", "W 142 518", "I 623 333", "V 338 589", "J 769 239", "A 359 497", "H 403 632", "H 655 845", "S 364 750", "R 927 933", "K 691 880", "D 803 14", "N 824 422", "E 511 235", "K 882 552", "B 478 551", "V 820 750", "Q 709 547"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "Z 1835296";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> rectangles = {"D 898 846", "F 455 574", "H 454 778", "G 291 480", "J 878 688", "L 995 330", "L 952 184", "I 617 167", "E 710 672", "G 348 312", "Z 784 929", "J 151 122", "O 914 197", "C 273 148"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "D 759708";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> rectangles = {"E 981 410", "Q 143 429", "B 560 250"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "E 402210";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> rectangles = {"L 207 337", "O 9 647", "V 15 767", "J 512 165", "Y 846 615", "P 932 295", "V 248 617", "T 903 700", "Z 22 355", "Q 372 216", "R 726 961", "U 736 81", "H 855 262", "O 607 780", "T 424 327", "T 53 631", "L 239 11"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "T 804191";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> rectangles = {"Y 825 685", "H 65 584", "C 447 662", "L 538 884", "F 679 858", "X 630 818", "C 898 668", "W 748 293", "W 947 341", "N 792 613", "B 458 788", "Y 626 378", "D 31 398", "V 456 360", "G 346 166", "J 324 121", "R 788 352", "A 835 417", "U 45 718", "I 62 835", "C 677 146", "S 875 659", "E 593 210", "D 821 790", "Z 597 211", "Z 391 87", "W 927 244", "B 396 252", "H 598 790", "B 693 797", "C 137 33", "A 62 836", "C 212 403", "W 446 890", "L 187 923", "D 446 136", "M 777 1000", "T 394 532", "Y 365 395", "V 540 480", "F 643 543", "M 93 372", "R 584 418"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "W 1165219";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> rectangles = {"E 441 218", "O 378 67", "T 138 90", "D 426 464", "Z 902 887", "K 263 287", "S 743 422", "R 902 49", "J 211 699", "O 919 291", "M 402 95", "X 627 573", "K 999 132", "W 65 404", "C 474 173", "W 190 580", "Q 647 272", "O 457 693"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "Z 800074";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> rectangles = {"I 763 551", "M 322 246", "S 626 591", "W 942 382", "K 248 704", "V 868 186", "T 138 535", "A 591 42", "F 198 655", "C 777 491", "P 584 495", "B 796 529", "X 991 586", "G 837 844", "A 846 230"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "G 706428";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> rectangles = {"U 806 558", "Q 81 439", "L 957 787", "A 172 691", "D 223 832", "D 752 518", "J 790 440", "I 953 916", "U 364 584", "R 602 837", "N 956 38", "Z 761 19", "Z 711 12", "B 459 939", "G 48 995", "H 594 573", "I 204 416", "S 2 306", "S 223 49", "O 484 506", "F 462 253", "H 703 277", "F 65 455", "H 140 824"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "I 957812";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> rectangles = {"L 858 930", "T 88 406", "L 646 689", "B 108 805", "A 713 727", "N 742 779", "S 932 263", "Q 416 252", "Z 411 725", "R 90 63", "G 353 500", "N 973 331", "T 12 933", "J 608 938", "Z 791 966", "I 246 928", "L 231 785", "W 915 418", "J 659 36", "A 357 959", "V 110 45", "C 857 123", "P 243 346", "B 252 870", "D 526 141", "P 992 367", "T 545 273", "F 29 448", "Q 682 560", "N 57 816", "T 401 344", "P 957 165", "K 303 981", "K 682 220", "J 575 231", "T 61 847", "Q 784 140", "N 770 969", "R 349 805", "I 907 232", "R 443 895", "G 256 681"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "N 1692723";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> rectangles = {"A 274 164", "S 830 20"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "A 44936";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> rectangles = {"Z 184 407", "D 51 867", "V 776 101", "R 695 865", "Q 932 349", "Y 316 280", "Y 268 149", "V 759 425", "V 388 460", "N 217 167", "H 153 548", "C 317 687", "C 340 527", "F 969 96", "R 818 163", "E 781 55", "B 816 992", "Z 617 692", "J 441 751", "Z 596 960", "M 504 346", "H 200 355", "R 941 483", "U 600 330", "B 875 867", "H 593 215", "W 847 519", "N 524 616", "G 615 383", "S 779 9", "A 100 401", "C 644 823", "Y 784 810", "N 917 810"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "B 1568097";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> rectangles = {"N 246 192", "M 745 55", "M 993 463", "O 314 245", "K 263 873", "R 804 212", "J 392 630", "H 519 826", "S 833 906", "S 11 556", "J 881 921", "X 560 272", "Z 977 289", "R 870 403", "Z 315 663", "T 372 83", "U 297 83", "P 357 737", "U 697 746", "X 764 182", "M 630 30", "H 785 741"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "J 1058361";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> rectangles = {"O 485 683", "V 107 46", "N 55 1", "Q 401 770", "C 14 238", "Z 612 214", "Y 981 582", "F 121 497", "P 957 103", "M 718 862", "C 286 771", "P 331 343", "Q 381 395", "B 508 289", "I 406 282", "G 782 517", "G 810 274", "A 587 427", "E 138 802", "X 754 711", "H 969 853", "B 600 11", "D 962 418", "G 749 475", "K 783 788", "T 742 291", "O 368 519", "B 885 342", "A 752 508", "N 778 767", "M 386 319", "Y 38 154", "S 73 625"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "G 982009";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> rectangles = {"Q 868 977", "W 5 60", "D 119 973", "O 619 464", "T 252 5", "C 274 546", "F 266 525", "M 690 771", "S 226 482"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "Q 848036";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> rectangles = {"S 122 279", "U 255 989", "U 934 824", "E 358 697", "O 524 786", "Q 841 365", "R 276 855", "H 471 375", "H 614 623", "F 393 179", "C 955 360", "Z 274 256", "S 363 316", "X 560 626", "V 527 227", "G 806 155", "L 321 536", "S 638 399", "T 429 895", "H 525 52", "N 115 829", "L 807 145", "U 750 180", "Q 178 530", "I 446 451", "R 820 786", "Y 92 374", "J 996 354", "J 991 861", "K 525 164", "Q 779 244", "R 409 628", "F 819 241", "Z 429 359", "Y 786 353", "U 732 900", "L 207 187", "E 629 194", "O 899 906", "N 1000 948", "T 241 203", "T 13 593", "Q 88 585", "G 930 152", "B 142 888", "Q 879 550", "G 206 905"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "U 1815611";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> rectangles = {"X 53 985", "Y 197 406", "W 71 294", "B 60 950", "T 570 48", "G 241 5", "T 842 231", "D 946 154"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "T 221862";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> rectangles = {"B 538 189", "X 192 864", "I 460 386", "F 58 892", "Y 695 341", "L 217 849", "O 108 642", "F 94 234", "Q 915 256", "S 427 187", "D 755 594", "L 135 582", "O 728 665", "F 440 203", "R 193 446", "N 471 251", "V 885 658", "U 86 431", "T 761 399", "N 950 742", "Y 885 306", "X 402 426", "A 544 729", "D 774 844", "U 83 153", "L 405 330", "A 297 884", "R 944 228", "X 612 106", "T 291 888", "W 359 231", "G 799 366", "K 421 160", "Y 522 992", "T 836 746", "B 691 522", "D 654 628", "D 376 658", "G 753 939", "K 713 925", "B 670 302", "E 17 975", "K 230 300"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "D 1759846";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> rectangles = {"S 379 665", "J 906 792", "P 44 832", "K 156 715", "O 120 105", "G 217 134", "X 348 163", "F 289 367", "D 239 889", "A 748 844", "D 38 260", "N 682 409", "G 844 910", "L 740 888", "A 574 501", "X 273 628", "N 526 587", "B 467 448", "H 296 324", "E 102 1000", "I 120 189", "F 766 875", "O 778 65", "C 801 430", "N 223 870", "Y 662 163", "D 74 83", "O 931 307", "G 397 941", "X 479 570", "L 353 289", "H 626 640", "H 500 971", "E 387 381", "T 614 352", "W 421 520", "R 710 305"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "G 1170695";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> rectangles = {"B 111 151", "M 798 807", "K 283 333", "A 530 796"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "M 643986";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> rectangles = {"F 229 626", "C 419 7", "E 715 57", "E 697 756", "K 676 470", "K 468 755", "W 586 511", "C 147 218", "I 418 762"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "K 671060";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> rectangles = {"W 688 904", "X 22 838", "O 211 139", "O 310 51", "V 324 675", "H 577 890", "X 547 190", "F 956 105", "Q 982 714", "D 536 761"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "Q 701148";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> rectangles = {"Y 348 454", "T 695 629", "A 241 235", "E 840 687", "S 932 240", "O 216 990", "C 808 189", "P 814 625", "A 123 440", "H 266 298", "L 515 286", "G 797 889", "J 722 115", "F 390 360", "B 525 525", "D 315 265", "K 102 40", "R 772 646", "J 58 529", "D 482 234", "B 188 492", "W 894 773", "Q 835 595", "G 827 747", "D 935 967", "Y 741 134", "O 787 401", "H 804 511", "M 117 286", "R 19 956", "E 679 945", "A 820 658", "E 214 194", "P 945 588", "D 437 19", "V 293 315", "I 302 546", "D 554 346", "G 531 795", "N 410 936", "L 412 149", "H 511 821", "I 451 732", "K 250 501"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "G 1748447";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> rectangles = {"B 1 2", "A 1 2"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "A 2";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> rectangles = {"S 2 54", "Y 34 65", "F 234 23", "D 84 127", "R 603 46", "S 36 192", "Y 76 32", "T 54 28", "S 22 22", "Z 999 999"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "Z 998001";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> rectangles = {"A 1 2", "A 3 3"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "A 11";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> rectangles = {"D 1 6", "F 2 3", "G 1 1", "G 5 1", "C 3 2"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "C 6";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> rectangles = {"S 2 54", "Y 34 65", "F 234 23", "D 84 127", "R 603 46", "S 36 192", "Y 76 32", "T 54 28", "S 22 22"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "R 27738";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> rectangles = {"A 1 2", "B 3 3", "A 2 1"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "B 9";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> rectangles = {"A 5 4", "A 5 5", "A 34 45", "B 34 45", "A 2 3"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "A 1581";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> rectangles = {"B 1 1", "A 1 1"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "A 1";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> rectangles = {"S 2 54", "Y 34 65", "F 234 23", "D 84 127", "R 603 46", "S 36 192", "Y 76 32", "T 54 28", "S 22 22", "R 999 999"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "R 1025739";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> rectangles = {"S 2 54", "Y 34 65", "F 234 23", "D 84 127", "R 603 46", "S 36 192", "Y 76 32", "T 54 28", "S 22 22", "T 10 10", "S 11 12", "T 12 23", "T 54 33"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "R 27738";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> rectangles = {"D 1 6", "F 2 3", "G 1 1", "G 5 1", "C 3 2", "G 6 8"};
    RectangleGroups* pObj = new RectangleGroups();
    clock_t start = clock();
    string result = pObj->maximalIndexed(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "G 54";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14874254&rd=8075&pm=5899
********************************************************************************
#include <string> 
#include <vector> 
#include <sstream> 
#include <algorithm> 
#include <iostream> 
 
#define FOR(i,n) for(int i = 0 ; i < n ; i++) 
#define pb push_back 
 
using namespace std; 
 
class RectangleGroups 
{ 
 public: 
 string maximalIndexed(vector <string> rectangles) 
 { 
   int area[26]; 
   int l , w; 
   char c; 
   FOR(i , 26) area[i] = 0; 
   FOR(i , rectangles.size()) 
     { 
       istringstream s(rectangles[i]); 
       s>>c>>l>>w; 
       area[c-'A'] += (l*w); 
     } 
   int best = 0; 
   char b; 
   FOR(i , 26) 
     if(area[i] > best) best=area[i] , b = (char)('A'+i); 
   ostringstream o; 
   o<<b<<' '<<best; 
   return o.str(); 
  
 
 } 
 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/