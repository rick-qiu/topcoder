/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5943
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

class FindTriangle {
public:
    double largestArea(vector<string> points);
};

double FindTriangle::largestArea(vector<string> points) {
    double ret;
    return ret;
}


int test0() {
    vector<string> points = {"R 0 0 0", "R 0 4 0", "R 0 0 3", "G 92 14 7", "G 12 16 8"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> points = {"R 0 0 0", "R 0 4 0", "R 0 0 3", "G 0 5 0", "B 0 0 12"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 30.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> points = {"R 0 0 0", "R 0 4 0", "R 0 0 3", "R 90 0 3", "G 2 14 7", "G 2 18 7", "G 29 14 3", "B 12 16 8"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 225.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> points = {"R 0 0 0", "R 0 4 0", "R 0 0 3", "R 26 71 3", "R 27 72 3", "R 28 73 3", "R 29 74 3", "R 30 75 3", "R 31 76 3", "R 32 77 3", "R 33 78 3", "R 34 79 3", "R 35 80 3", "R 36 81 3", "R 37 82 3", "R 38 83 3", "R 39 84 3", "R 40 85 3", "R 41 86 3", "R 42 87 3", "R 43 88 3", "R 44 89 3", "R 45 90 3", "R 46 91 3", "R 47 92 3", "R 48 93 3", "R 49 94 3", "R 50 95 3", "R 51 96 3", "R 52 97 3", "R 53 98 3", "R 54 99 3", "R 55 1 3", "R 56 2 3", "R 57 3 3", "R 58 4 3", "R 59 5 3", "R 62 6 3", "R 63 7 3", "R 64 8 3", "R 65 9 3", "R 66 10 3", "R 67 11 3", "R 68 12 3", "R 87 13 3", "R 88 14 3", "R 89 15 3", "R 88 16 3", "R 93 17 3", "R 90 18 3"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 4146.737452504077;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> points = {"R 0 0 20", "R 0 4 0", "R 0 0 3", "R 90 0 3", "G 2 14 7", "G 2 18 7", "G 29 14 3", "B 19 41 3", "B 12 16 8"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 1317.245990694221;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> points = {"G 125 246 581", "B 149 595 713", "B 183 772 29", "G 615 880 427", "G 515 401 389", "G 668 204 632", "G 483 246 736", "B 709 903 700", "R 681 14 532", "B 758 607 466", "G 307 570 192"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 264828.68164343527;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> points = {"G 681 107 981", "G 701 711 363", "G 232 643 427", "B 957 883 154", "G 816 200 456", "B 199 382 104", "R 13 630 534", "B 340 583 310", "R 19 43 696", "B 239 984 754", "R 927 973 877", "G 762 885 825", "R 577 916 559", "B 498 911 483", "B 653 717 692", "B 304 353 710", "B 535 314 802", "B 215 981 862", "G 119 115 357", "B 288 951 516", "B 679 468 825", "G 750 710 927", "R 185 591 969", "R 672 339 354", "G 548 608 288", "R 746 463 628", "B 499 786 597", "G 863 536 764", "R 321 868 905"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 475195.933463503;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> points = {"G 238 665 245", "G 373 140 859", "B 178 713 112", "G 678 763 499", "G 294 207 733", "G 271 881 588", "G 921 550 658", "R 716 907 605", "G 228 246 161", "B 622 43 267", "G 569 268 76", "G 944 281 563", "G 443 27 786", "R 502 758 124", "B 147 929 727", "G 530 998 555", "B 947 340 690", "G 536 229 235", "R 21 236 79", "R 963 766 672", "R 341 444 451", "B 169 28 932", "R 69 335 239", "B 11 742 10", "G 541 185 519", "G 47 300 459", "B 166 827 669", "R 622 550 473", "R 78 716 620", "B 859 576 121", "R 343 309 615", "G 364 554 899", "R 193 391 662", "R 736 124 632", "R 243 809 200", "G 330 281 775"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 487294.5323477373;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> points = {"G 382 166 878", "R 616 304 186", "G 853 174 775", "R 336 83 227", "G 827 571 69", "B 82 191 490", "R 183 985 68", "G 185 164 660", "B 384 755 264", "G 576 554 922", "R 156 901 874", "G 389 718 316", "R 175 296 22", "R 191 128 141", "R 94 551 726", "G 110 204 352", "R 198 456 292", "B 146 640 591", "G 135 493 760", "R 952 386 298", "R 465 710 985", "R 265 257 759", "R 423 372 892", "G 412 630 881", "G 81 127 567"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 411902.0981865715;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> points = {"B 803 288 978", "B 620 479 912", "R 148 337 267", "B 91 170 467", "B 690 757 499", "B 791 370 99", "B 644 111 409", "G 152 581 706", "G 583 223 910", "B 574 615 829", "B 760 436 668", "G 733 762 636", "B 521 873 819", "G 822 578 64"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 330624.3848455525;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> points = {"B 504 280 596", "B 73 744 622", "R 748 534 62", "G 651 226 967", "B 207 918 246", "R 636 31 966", "R 886 494 183", "R 529 909 159", "G 179 247 966", "B 478 620 977", "G 860 680 365", "R 173 933 282", "G 999 763 302", "B 225 181 449", "B 375 985 207", "R 810 272 825", "R 710 450 912", "G 284 736 207", "B 405 656 36", "B 385 219 528", "G 185 119 867", "G 65 329 873", "B 834 462 600", "G 311 801 956", "R 775 20 715", "R 823 413 173", "G 872 469 334", "B 51 275 75", "G 808 604 728"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 503519.9245831787;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> points = {"G 305 464 466", "G 907 278 350", "G 214 563 320", "R 434 424 418", "G 29 837 278", "R 384 617 650", "R 299 395 999", "R 523 981 712", "G 185 168 577", "R 896 511 362", "G 666 48 404", "R 596 299 772", "B 99 122 749", "R 457 739 76", "G 975 784 827", "B 503 769 103"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 430950.0055885253;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> points = {"B 882 889 346", "B 398 814 846", "B 387 739 328", "G 677 440 706", "G 56 82 871", "G 237 781 743", "B 938 813 180", "R 778 54 418", "B 260 656 659", "R 35 643 10", "B 404 981 105", "G 126 397 789", "B 674 120 460", "G 731 661 884", "B 987 556 655", "B 365 88 751", "B 485 396 754", "B 365 669 388", "B 136 844 839", "G 175 394 870", "G 763 588 352", "R 9 710 654", "B 918 156 989", "R 718 898 579", "R 461 398 149", "B 854 418 932", "R 598 699 794", "B 798 628 112", "G 194 808 410", "R 187 565 167", "R 323 58 242", "B 922 283 691", "R 26 248 213", "B 852 198 516"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 503849.9022521489;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> points = {"R 427 616 517", "R 436 364 196", "B 778 726 890", "R 515 945 191", "G 778 231 295", "R 508 725 12", "G 770 955 716", "B 880 384 833", "R 426 678 405", "B 936 432 229", "B 912 152 316", "G 148 241 93", "B 596 340 154", "R 250 552 247", "R 938 587 92", "G 291 968 576", "G 712 93 219", "R 489 531 844", "B 940 812 539", "B 745 708 609", "R 365 179 454", "R 382 883 325", "B 359 414 286", "B 599 386 473", "R 208 735 149", "R 35 514 288", "B 710 241 284", "B 580 754 69", "R 993 926 563", "R 423 38 276", "G 387 125 16", "G 601 169 12", "R 787 775 951", "R 622 578 865", "G 208 177 432", "B 553 375 837", "G 486 84 123", "G 319 888 989", "G 241 214 174", "R 630 83 702", "B 399 690 833", "R 438 370 645", "R 842 884 179", "B 857 370 64", "R 228 214 908", "G 530 355 536", "R 978 986 963"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 504622.2204751293;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> points = {"R 61 623 831", "B 644 725 669", "B 110 619 41", "G 665 228 582", "B 984 720 201", "R 919 759 791", "B 874 895 76", "G 807 844 919", "R 652 226 278", "B 190 221 647", "B 21 307 94", "R 20 994 222", "G 666 573 628", "G 885 130 249", "R 273 502 776"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 416588.51323758316;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> points = {"R 846 653 901", "B 167 381 78", "B 176 427 413", "B 551 252 21", "R 213 452 117"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 68342.28135459044;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> points = {"G 747 252 887", "G 740 848 61", "B 653 847 785", "B 917 119 970", "R 422 602 768", "B 371 653 367", "B 602 435 283", "G 303 278 858", "G 403 205 578", "R 996 982 832", "R 561 236 470", "R 288 960 829", "B 795 295 691", "R 987 448 306", "B 448 178 458", "B 210 402 194", "B 399 663 110", "R 870 608 458", "G 904 382 941", "B 746 841 301", "B 118 33 735", "R 169 543 473", "G 590 867 924", "R 90 735 466", "G 641 715 69", "G 708 60 77", "B 474 146 607", "G 586 250 157", "B 495 155 987", "B 177 895 97", "R 181 845 608", "G 338 338 176", "R 267 419 578", "R 246 824 590", "G 633 535 31", "R 547 870 42", "R 657 889 190", "G 677 536 565", "R 311 159 364", "G 802 719 278", "B 813 367 229", "R 753 704 995", "G 530 502 404", "B 51 745 694", "R 359 811 770", "B 910 801 561"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 524749.9052210491;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> points = {"R 571 185 253", "R 832 805 431", "B 331 38 728", "B 298 524 539", "B 624 184 339", "R 290 619 988", "G 308 223 135", "B 671 656 460", "G 102 536 740", "R 70 112 823", "G 683 785 954", "B 610 930 677", "R 267 444 927", "B 961 628 770", "R 268 977 164", "G 148 345 471", "G 562 288 774", "R 161 322 430", "R 477 628 995", "R 978 870 285", "B 152 805 50", "G 507 622 145", "R 808 475 560", "R 860 723 859", "G 737 239 307", "B 14 895 564", "R 751 585 42", "B 802 787 308", "R 110 918 998", "R 545 142 991", "G 23 158 784", "R 496 253 200", "B 618 999 66", "G 851 567 244", "G 145 939 309"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 459718.30626700085;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> points = {"R 35 510 61", "B 600 331 489", "G 118 563 119", "G 244 429 726", "R 797 344 504", "B 425 680 27", "G 959 816 846", "B 559 172 998", "R 449 291 517", "R 643 802 958", "R 893 509 723", "G 746 617 329", "R 961 115 661", "B 874 163 338", "B 572 458 726", "B 99 752 910", "G 376 44 600", "R 846 49 589", "B 520 513 929", "B 770 716 899", "B 726 559 922", "B 981 311 54", "G 109 93 390", "G 336 489 412", "G 51 920 84", "G 301 146 414", "R 580 861 862", "R 48 168 56", "B 218 102 113", "R 646 658 175", "R 83 393 79", "B 687 997 457", "B 107 966 550", "R 980 235 328", "R 226 500 774", "G 220 333 775", "R 647 50 868", "R 664 99 676", "R 855 535 590", "R 837 322 285", "R 837 588 935", "R 521 150 655", "G 273 214 697", "B 979 625 304", "G 472 137 487"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 509864.1551874381;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> points = {"R 45 304 270", "R 715 57 971", "G 792 623 70", "R 361 228 567", "G 60 324 139", "R 622 146 401", "B 548 226 278", "G 88 761 134", "B 580 546 189"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 264544.6377816039;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> points = {"G 877 612 991", "B 198 70 294", "R 745 239 608", "G 788 427 282", "B 950 947 142", "B 956 590 919", "B 244 820 887", "R 729 71 257", "G 432 320 625", "G 844 122 538", "G 458 874 196", "R 197 362 867", "R 394 900 108", "B 498 707 275", "G 633 526 327", "B 547 862 529", "R 237 141 892", "B 855 746 386", "R 423 904 578", "B 334 177 682", "B 884 43 725", "B 506 771 189", "G 532 20 145", "G 310 466 414", "R 859 104 890", "B 103 555 180", "G 884 965 123", "B 420 242 328", "R 613 758 743", "R 417 119 593", "R 644 949 825", "G 869 382 136", "B 972 432 90", "R 80 508 916", "G 340 790 321", "G 135 540 359", "G 482 498 418", "B 302 505 191", "G 859 769 28", "B 385 936 977", "G 944 469 682", "G 324 776 616"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 515997.41424206767;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> points = {"R 571 953 765", "G 644 514 428", "G 203 743 965", "G 872 457 848", "B 648 892 694", "R 29 681 779", "B 339 369 549", "G 624 810 269", "B 736 799 515", "B 360 35 922", "G 259 319 817", "G 212 717 786", "G 871 793 584", "G 843 720 716", "R 632 391 839", "B 650 999 717", "G 680 526 217", "G 823 351 177", "B 359 646 11", "G 634 925 556", "G 697 329 495", "B 19 548 476", "G 643 954 855", "R 263 51 945", "B 264 176 877", "R 110 58 221", "B 116 194 287", "G 995 765 136", "R 57 108 773", "B 344 112 603", "R 962 996 990", "R 867 22 934", "B 937 267 524", "G 459 630 590", "R 951 307 348", "B 401 1 324"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 508531.3797537474;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> points = {"B 777 79 345", "G 64 558 821", "G 197 42 908", "R 622 861 419", "R 396 154 950", "G 149 127 764", "B 910 977 510", "G 440 99 943", "B 147 447 677", "G 945 803 798", "B 496 220 22", "B 635 992 76"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 385964.62504353945;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> points = {"G 408 311 589", "R 557 753 842", "G 394 926 960", "G 192 928 696", "G 325 413 784", "G 694 912 904", "G 616 865 580", "G 659 827 352", "G 518 409 319", "R 28 340 392", "G 700 494 853", "B 564 459 981", "B 0 636 931", "G 460 19 685", "G 687 132 396", "R 465 443 782", "G 724 745 321", "B 718 580 309"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 302334.0937919506;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> points = {"G 157 105 578", "B 851 724 302", "G 803 759 467", "B 692 610 547", "G 797 416 204", "G 261 683 117", "B 425 757 125", "G 488 162 327", "B 84 697 189", "R 599 165 990"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 323873.62965591997;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> points = {"R 412 880 75", "B 994 625 302", "G 636 799 664", "R 655 793 780", "G 308 84 593", "B 895 659 555", "G 942 870 797", "B 476 67 999", "R 696 386 352", "G 408 221 369", "B 626 772 797", "R 402 296 913", "B 869 980 544", "R 873 665 651", "G 288 773 454", "R 90 755 598", "B 135 677 98", "R 851 186 843", "R 197 564 720", "G 582 476 465", "R 985 939 304", "R 384 343 543"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 463707.2431615663;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> points = {"B 336 816 19", "G 885 311 541", "G 241 679 815", "B 21 538 576", "G 41 771 190", "R 319 909 105", "G 858 95 581", "B 396 973 154", "G 852 40 583", "B 292 586 540", "G 936 532 506", "G 995 102 242", "R 494 518 505", "R 845 366 511", "B 318 51 81", "R 190 491 842", "G 790 609 918", "B 504 58 241", "B 682 511 604", "R 331 135 276", "B 419 503 211", "R 357 116 340", "R 709 646 237"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 441280.77678758;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> points = {"R 340 726 264", "G 684 994 997", "G 533 679 935", "G 312 613 259", "B 472 101 78", "G 247 264 566", "R 176 42 785", "B 860 123 834", "G 432 881 71", "B 768 7 475", "B 92 182 953", "B 93 140 880", "G 918 195 64"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 421731.1465993471;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> points = {"R 722 867 985", "R 516 512 219", "R 381 150 849", "B 398 345 973", "R 284 929 747", "G 971 197 640", "B 920 651 308", "G 615 704 923", "R 4 971 71", "G 644 878 308", "R 347 788 770", "B 128 433 561", "G 573 695 924", "B 936 314 125", "R 686 260 953", "B 668 457 366", "R 459 194 80", "G 586 753 266"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 482523.77282989904;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> points = {"R 169 754 952", "B 75 488 579", "B 489 269 613", "G 358 760 524", "R 159 75 678", "G 392 737 547", "B 911 80 7", "R 581 519 591", "B 233 481 394", "R 237 939 855", "G 418 988 617", "B 743 480 674", "G 45 610 371", "G 773 251 413", "B 731 174 937", "R 374 561 80", "B 423 273 303", "B 642 254 635", "R 686 888 686", "R 41 857 921", "G 356 72 233", "R 322 640 386"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 463925.13969766715;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> points = {"B 161 995 83", "B 364 797 631", "G 968 971 583", "R 47 968 140", "R 695 951 667", "B 752 728 180", "G 199 475 608", "R 348 395 993", "G 788 541 345", "B 952 748 66", "G 945 180 225", "G 423 354 822", "G 856 391 889", "R 951 135 813", "R 813 102 510", "B 442 840 856", "B 747 134 36", "B 542 475 764", "G 87 515 812", "B 791 792 248", "G 484 112 778", "B 86 762 405", "B 673 354 749", "G 260 108 384", "B 730 960 731", "B 818 609 977", "B 474 228 553"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 510822.3582875949;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> points = {"B 767 130 373", "G 54 321 585", "B 860 264 856", "B 69 491 54", "R 357 681 571"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 198637.8331253893;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> points = {"G 572 582 607", "R 104 479 688", "G 443 146 820", "G 710 888 405", "R 745 423 128", "R 950 638 240", "G 873 780 775", "R 989 227 298", "G 576 276 657", "R 666 3 735", "R 760 503 137", "G 49 609 92", "B 859 952 174", "B 610 600 214", "R 154 420 651", "B 573 746 857", "G 83 12 866", "G 270 414 204", "B 142 662 556", "R 215 513 47", "G 188 601 698", "B 674 949 430", "R 421 694 477", "B 883 950 225", "B 151 558 852", "R 856 241 657", "G 913 717 231", "B 465 905 323", "R 397 485 706", "B 575 503 434", "G 783 883 961", "R 578 91 812", "B 236 760 814", "G 486 567 913", "R 338 334 889", "B 76 67 282", "B 429 906 761", "R 647 699 288", "G 457 519 19"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 506086.9293552739;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> points = {"G 896 506 520", "B 648 122 752", "B 690 69 628", "B 984 90 39", "G 123 823 830", "G 630 314 5", "B 100 93 37", "G 445 725 335", "G 486 889 413", "R 48 171 914", "B 113 109 389", "B 432 391 767", "G 300 585 970", "R 387 642 99", "R 698 358 255", "R 324 22 886", "B 242 475 347", "B 432 153 250", "G 661 229 676", "G 437 505 220", "B 119 459 792", "R 571 691 591", "G 590 940 612"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 525879.5794307381;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> points = {"G 511 843 778", "B 333 34 673", "G 419 390 446", "R 820 924 884", "G 338 906 267", "B 433 42 781", "R 193 575 996", "R 491 514 932", "G 737 269 625", "R 552 397 772"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 358287.27710770024;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> points = {"R 0 0 0", "R 1 1 0", "R 4 4 0", "G 10 10 10", "G 0 1 2"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> points = {"R 0 0 0", "R 0 4 4", "R 0 8 8", "G 92 14 7", "G 12 16 8"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> points = {"R 0 0 0", "R 0 49 17", "R 0 98 34", "R 0 10 10", "G 100 100 100"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 320.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> points = {"R 0 0 0", "R 0 0 0", "R 0 0 0", "R 500 500 500", "R 999 999 999"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> points = {"R 0 0 0", "R 1 1 0", "R 3 3 0", "G 10 10 10", "G 0 1 2"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> points = {"R 0 0 0", "R 1 1 0", "R 4 4 0", "G 10 10 10", "G 0 1 2", "R 0 0 0", "R 0 4 0", "R 0 0 3", "G 0 5 3", "B 0 0 12", "R 0 0 0", "R 0 4 0", "R 0 0 3", "R 90 0 3", "G 2 14 7", "G 2 18 7", "G 29 14 3", "B 12 16 8", "G 999 999 999"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 66583.77096184925;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> points = {"R 0 0 0", "R 1 1 1", "R 2 2 2", "G 1 1 0", "R 999 999 999"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> points = {"R 0 0 0", "R 100 145 124", "R 15 932 241", "G 0 0 0", "G 7 3 2", "G 3 5 1", "B 99 231 492"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 206436.54253728918;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> points = {"R 0 1 1", "R 0 2 9", "R 4 3 7", "G 4 2 1", "B 4 3 20"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 39.22053033807676;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> points = {"R 100 100 100", "G 0 0 0", "R 500 0 0", "G 0 1 0", "G 0 0 1"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> points = {"R 0 0 0", "R 0 4 0", "R 0 0 3", "G 0 5 0", "B 0 0 12"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 30.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> points = {"R 0 0 0", "R 1 1 1", "R 3 3 3", "G 9 9 9", "B 999 999 999"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
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
    vector<string> points = {"R 0 0 0", "G 0 999 0", "B 999 999 0", "R 0 0 0", "R 0 0 0"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 499000.5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> points = {"R 0 0 0", "R 1 1 1", "R 2 2 2", "R 3 3 3", "R 4 4 4", "R 5 5 5", "R 6 6 6", "R 7 7 7", "R 8 8 8", "R 9 9 9", "R 10 10 10", "R 11 11 11", "R 12 12 12", "R 13 13 13", "R 14 14 14", "R 15 15 15", "R 16 16 16", "R 17 17 17", "R 18 18 18", "R 19 19 19", "R 20 20 20", "R 21 21 21", "R 22 22 22", "R 23 23 23", "R 24 24 24", "R 25 25 25", "R 26 26 26", "R 27 27 27", "R 28 28 28", "R 29 29 29", "R 30 30 30", "R 31 31 31", "R 32 32 32", "R 33 33 33", "R 34 34 34", "R 35 35 35", "R 36 36 36", "R 37 37 37", "R 38 38 38", "R 39 39 39", "R 40 40 40", "R 41 41 41", "R 42 42 42", "R 43 43 43", "R 44 44 44", "R 45 45 45", "R 46 46 46", "R 47 47 47", "R 48 48 48", "R 999 999 999"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
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
    vector<string> points = {"R 0 0 0", "R 0 0 0", "R 0 0 0", "R 0 0 0", "R 0 0 0", "R 0 0 0", "R 0 0 0", "R 0 0 0", "R 0 0 0", "R 0 0 0", "R 0 0 0", "R 0 0 0", "R 0 0 0", "R 999 999 999", "R 999 999 999", "R 999 999 999", "R 999 999 999", "R 999 999 999", "R 999 999 999", "R 999 999 999", "R 999 999 999", "R 999 999 999", "R 999 999 999", "R 999 999 999", "R 999 999 999", "R 999 999 999", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0", "R 0 999 0"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 705693.2747309556;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> points = {"R 0 0 0", "G 92 14 7", "R 0 4 0", "G 12 16 8", "R 0 1 0"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
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
    vector<string> points = {"R 999 999 0", "R 0 0 999", "R 0 0 0", "G 10 10 10", "G 0 1 2"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 705693.2747309556;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> points = {"R 0 0 0", "R 0 4 0", "R 0 0 3", "G 92 14 7", "G 12 16 8", "G 190 373 288"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 18343.54347583912;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> points = {"R 0 0 0", "G 1 0 0", "G 2 0 0", "G 3 0 0", "B 0 3 0"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> points = {"R 0 0 0", "R 1 1 1", "R 2 2 2", "G 9 9 9", "B 999 999 999"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
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
    vector<string> points = {"R 0 0 0", "R 1 1 0", "R 4 4 0", "G 10 10 10", "G 0 1 2", "B 0 1 2", "R 0 1 2", "R 50 50 51"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 193.4922479067314;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> points = {"R 0 0 0", "R 0 4 0", "R 0 0 3", "R 90 0 3", "G 2 14 7", "G 2 18 7", "G 29 14 3", "B 12 16 8"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 225.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> points = {"R 0 0 0", "R 0 0 998", "R 0 998 0", "R 0 998 998", "R 998 0 0", "R 998 0 998", "R 998 998 0", "R 998 998 998", "R 1 1 1", "R 1 1 999", "R 1 999 1", "R 1 999 999", "R 999 1 1", "R 999 1 999", "R 999 999 1", "R 999 999 999", "R 0 0 0", "R 0 0 999", "R 0 999 0", "R 0 999 999", "R 999 0 0", "R 999 0 999", "R 999 999 0", "R 999 999 999", "R 0 0 0", "R 0 0 999", "R 0 999 0", "R 0 999 999", "R 999 0 0", "R 999 0 999", "R 999 999 0", "R 999 999 999", "R 0 0 0", "R 0 0 999", "R 0 999 0", "R 0 999 999", "R 999 0 0", "R 999 0 999", "R 999 999 0", "R 999 999 999", "R 0 0 0", "R 0 0 999", "R 0 999 0", "R 0 999 999", "R 999 0 0", "R 999 0 999", "R 999 999 0", "R 999 999 999"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 864294.2190022735;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> points = {"R 0 0 0", "R 0 4 0", "R 0 0 3", "R 90 0 3", "G 2 14 7", "G 2 18 7", "G 29 14 3", "B 12 16 8", "G 200 200 200"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 11824.971035905332;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> points = {"R 0 0 0", "R 1 1 1", "R 2 2 2", "R 3 3 3", "R 4 4 4", "R 5 5 5", "R 6 6 6", "R 7 7 7", "R 8 8 8", "R 9 9 9", "R 10 10 10", "R 11 11 11", "R 12 12 12", "R 13 13 13", "R 14 14 14", "R 15 15 15", "R 16 16 16", "R 17 17 17", "R 18 18 18", "R 19 19 19", "R 20 20 20", "R 21 21 21", "R 22 22 22", "R 23 23 23", "R 24 24 24", "R 25 25 25", "R 26 26 26", "R 27 27 27", "R 28 28 28", "R 29 29 29", "R 30 30 30", "R 31 31 31", "R 32 32 32", "R 33 33 33", "R 34 34 34", "R 35 35 35", "R 36 36 36", "R 37 37 37", "R 38 38 38", "R 39 39 39", "R 40 40 40", "R 41 41 41", "R 42 42 42", "R 43 43 43", "R 44 44 44", "R 45 45 45", "R 46 46 46", "R 47 47 47", "R 48 48 48", "R 49 49 49"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> points = {"R 0 0 0", "R 0 0 0", "R 0 0 0", "R 0 999 999", "R 999 0 999"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 864294.2190022735;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> points = {"R 0 4 0", "G 0 0 5", "B 0 0 0", "B 0 0 1", "G 0 0 1"};
    FindTriangle* pObj = new FindTriangle();
    clock_t start = clock();
    double result = pObj->largestArea(points);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=9809&pm=5943
********************************************************************************
// another fine solution by misof
// #includes {{{
#include <algorithm>
#include <numeric>
 
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
#include <cassert>
 
#include <cmath>
#include <complex>
using namespace std;
// }}}
 
/////////////////// PRE-WRITTEN CODE FOLLOWS, LOOK DOWN FOR THE SOLUTION ////////////////////////////////
 
// pre-written code {{{
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define SIZE(t) ((int)((t).size()))
#define SQR(x) ((x)*(x))
// }}}
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
char type[64];
double X[64], Y[64], Z[64];
 
class FindTriangle {
public:
  double largestArea(vector <string> points) {
    int N = SIZE(points);
    REP(i,N) {
      stringstream SS(points[i]);
      SS >> type[i] >> X[i] >> Y[i] >> Z[i];
    }
    double res = 0.0;
    REP(i,N) REP(j,i) REP(k,j) {
      int ok = 0;
      if (type[i] == type[j]) if (type[i] == type[k]) ok=1;
      if (type[i] != type[j]) if (type[i] != type[k]) if (type[j] != type[k]) ok=1;
      if (!ok) continue;
      double ux=X[j]-X[i], uy=Y[j]-Y[i], uz=Z[j]-Z[i];
      double vx=X[k]-X[i], vy=Y[k]-Y[i], vz=Z[k]-Z[i];
      double area = sqrt( SQR(ux*vy-vx*uy) + SQR(uy*vz-vy*uz) + SQR(uz*vx-ux*vz) );
      res >?= area*0.5;
    }
    return res;
  }
 
 
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/