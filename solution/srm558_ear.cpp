/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12156
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

class Ear {
public:
    long getCount(vector<string> redX, vector<string> blueX, vector<string> blueY);
};

long Ear::getCount(vector<string> redX, vector<string> blueX, vector<string> blueY) {
    long ret;
    return ret;
}


int test0() {
    vector<string> redX = {"3 2 8 7"};
    vector<string> blueX = {"5 4"};
    vector<string> blueY = {"2 4"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> redX = {"3 2 8 7"};
    vector<string> blueX = {"2 8"};
    vector<string> blueY = {"3 4"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> redX = {"1 2 6 9"};
    vector<string> blueX = {"3 6 8 5"};
    vector<string> blueY = {"1 5 4 3"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> redX = {"10000"};
    vector<string> blueX = {"10000 9999"};
    vector<string> blueY = {"10000 9999"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> redX = {"100 2", "00", " 39", "9", " 800 900 9", "99"};
    vector<string> blueX = {"15", "0 250 ", "349"};
    vector<string> blueY = {"2 3 1"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> redX = {"1", " ", "2", " ", "3", " ", "4 5 6", " 7 8 9"};
    vector<string> blueX = {"4", " ", "5", " ", "6", " 7 ", "8"};
    vector<string> blueY = {"1", " 2 ", "3 4", " 5"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 204;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> redX = {"4725 9443 9717 8889 9288 5861 2002 5560 6824 6466 ", "884 733 5052 4562 7424 9389 5467 7042 6633 5500 57", "30 919 9867 9364 4652 4512 6783 1740 8913 4370 615", "4 2046 2482 2050 120 4859 8168 3263 279 1219 7760 ", "7552 9956 9429 6503 6108 4318 1250 8397 4696 5465 ", "8944 4937 6026 2306 8650 649 7373 6890 8276 276 18", "37 705 9341 5599 7010 1248 3453 968 6234 9282 2414", " 1794 5775 4256 8775 2301 1688 9912 2338 7345 3562", " 5033 719 9159 4751 7582 3810 6612 3391 2884 2792 ", "1971 5579 3994 87 270 697 3524 5187 6361 9305 8684", " 716 8955 789 5285 8533 9929 3815 8205 8832 5569 8", "981 863 7108 4480 4136 9746 2849 2576 6523 8130 90", "34 4642 8062 1881 6192 6580 8745 5641 832 9503 969", "4 3769 5731 8719 6407 9337 9572 5327 383 227 3086 ", "9009 8445 2464 9331 4264 8906 6724 6073 7794 2323 ", "5608 9886 7301 827 6850 4093 7300 9480 5923 9161 4", "269 8797 6333 2550 5123 1368 3902 7479 9716 7522 9", "085 6849 7910 1300 5712 3791 5042 9656 1247 1501 4", "398 8969 778 9951 7125 1674 4864 6594 4553 7973 69", "77 6025 5260 732 3081 6586"};
    vector<string> blueX = {"3100 8617 3 3866 7637 8783 3454 1459 3616 5202 298", "9 2964 8600 7264 7367 7573 8221 5243 6607 3142 797", "0 4436 5711 1523 9840 6197 957 1990 7038 4666 432 ", "2425 2600 7005 2571 6566 1628 8013 9463 7085 5028 ", "1979 7392 2785 8317 8577 7942 863 9830 4655 6851 8", "028 8820 8243 1820 4522 5586 7476 3121 4119 3078 9", "356 8302 2083 2255 5311 2084 8155 8202 5084 8674 6", "95 4932 9279 8076 2732 1002 6080 62 5662 940 348 6", "66 3366 5088 7709 541 572 4914 6505 5279 3362 5753", " 9172 2617 1612 1141 9427 5137 6367 2917 1342 6385", " 5221 3365 9057 8566 6378 8964 7216 4052 7735 2579", " 1556 1927 9368 3817 5782 3220 8044 772 3494 2654 ", "9945 8443 7960 868 2313 5966 8039 7365 8767 8569 9", "674 9292 281 3830 9202 7680 1726 1861 7965 4701 97", "44 9387 6031 6727 4997 5328 6535 5055 3949 9184 11", "2 5985 4687 1035 2755 5549 8543 8959 5034 3552 157", " 5808 767 6783 8711 8354 8947 8432 3678 8963 4411 ", "8228 4437 3367 7701 6965 934 1072 6072 3272 1280 5", "066 2041 3182 4379 3057 3130 4189 4443 5296 77 928", "6 9362 3687 3590 4739 8064"};
    vector<string> blueY = {"264 6078 783 9670 5502 5892 2817 6217 9626 6782 25", "50 1617 8299 9533 6283 9521 4425 7678 2020 2337 88", "79 1645 3180 9942 3891 9524 777 5428 66 8002 1355 ", "9434 5149 774 5809 8507 5690 7050 8151 173 1753 50", "37 8336 6250 3540 6521 5293 6708 4129 883 7815 770", "2 7431 2944 3790 3797 4539 6612 5534 6501 4118 261", "4 4907 8472 1396 6720 4314 2625 9532 9075 4395 971", "9 5047 3767 5462 3605 2031 5041 8997 9963 27 6525 ", "1423 6263 7112 1899 4156 4961 586 7306 6197 8136 1", "928 3774 4066 3664 5581 123 2694 897 5648 2218 708", "1 4191 3884 309 3632 7285 2331 5026 6922 9243 4900", " 1532 5481 6390 4877 3932 9052 8462 6719 9111 6149", " 9163 9973 3793 1371 3449 6592 287 2094 3610 8107 ", "5770 5315 3114 3717 5247 3627 1598 3024 1668 5748 ", "5142 5829 613 6459 6049 9410 8444 3404 3840 7663 3", "881 1091 6807 3843 8163 1599 5414 6047 3607 6145 1", "918 8027 2776 5132 9799 3655 5637 6958 7172 3288 4", "422 9536 7060 2365 6777 1277 1018 7216 3075 1354 4", "07 7144 5541 7363 7953 1515 8509 4263 1538 5344 37", "33 5929 2208 4274 4573 1880 4932"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 97303616197;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> redX = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20"};
    vector<string> blueX = {"6 9 12 15"};
    vector<string> blueY = {"1 2 3 4"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 3204;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> redX = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20"};
    vector<string> blueX = {"12 9 6 3"};
    vector<string> blueY = {"1 2 3 4"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 4680;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> redX = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20"};
    vector<string> blueX = {"7 8"};
    vector<string> blueY = {"1 10000"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1170;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> redX = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20"};
    vector<string> blueX = {"8 7"};
    vector<string> blueY = {"1 10000"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1386;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> redX = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20"};
    vector<string> blueX = {"7 8 9 10 11 12 13"};
    vector<string> blueY = {"9994 9996 9998 10000 9999 9997 9995"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> redX = {"1 5 6 10"};
    vector<string> blueX = {"5 4"};
    vector<string> blueY = {"1 10000"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> redX = {"1 5 6 10"};
    vector<string> blueX = {"4 3"};
    vector<string> blueY = {"1 10000"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> redX = {"1 5 6 10"};
    vector<string> blueX = {"6 7"};
    vector<string> blueY = {"1 10000"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> redX = {"1 5 6 10"};
    vector<string> blueX = {"7 8"};
    vector<string> blueY = {"1 10000"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> redX = {"1 5 7 10"};
    vector<string> blueX = {"6 8"};
    vector<string> blueY = {"1 10000"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> redX = {"6742 3635 5750 5483"};
    vector<string> blueX = {"3847 3533"};
    vector<string> blueY = {"5345 879"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> redX = {"6298 3641 196 7412 2926 1934 4206"};
    vector<string> blueX = {"5463 6009 7742 5317 428 265 6961 7199"};
    vector<string> blueY = {"6405 4933 829 6445 4190 7298 3412 4488"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> redX = {"3811 3330 8506 1027 3119 663 2802 3008 2578 4038"};
    vector<string> blueX = {"3492 4750 3677 8790 3644 6336 9533 7255 402 537 41", "94 2831 3106 7428"};
    vector<string> blueY = {"27 6863 9832 9472 4800 1989 9290 6424 6764 4651 32", "17 7296 4981 508"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 724;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> redX = {"10000 9999 9998 9997"};
    vector<string> blueX = {"9998 9999 10000"};
    vector<string> blueY = {"2 3 1"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> redX = {"9996 9998 9995 10000 9999 9994 9993 9997"};
    vector<string> blueX = {"10000 9996 9998 9999 9995 9997"};
    vector<string> blueY = {"1 4 2 5 3 6"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> redX = {"10000 9997 9999 9995 9996 9991 9993 9998 9990 9994", " 9992 9989"};
    vector<string> blueX = {"9993 9995 9996 9992 9998 10000 9994 9999 9997"};
    vector<string> blueY = {"5 2 4 6 1 8 3 9 7"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1589;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> redX = {"7466 925 4558 4844 8970 3338 5181 5180 5110 684 46", "11 2987 5650 5718 1462 9096 4135 3643 1196 1037"};
    vector<string> blueX = {"1931 1274 1626 9508 4296 439 205 2355 684 6411 330", "0 5922 1677 7650 5880 5118 374 5538 425 8182 595 8", "251 3431 754 837 6794 4874 6291 8114"};
    vector<string> blueY = {"8487 8286 8933 6252 4703 5694 6561 2268 4956 8475 ", "2080 5483 5711 538 2282 525 5936 6072 7260 9274 23", "96 7130 7960 4298 7854 8677 2023 6525 184"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 72610;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> redX = {"2502 681 1076 3616 2960 1756 1951 7672 5584 7739 1", "140 5557 1230 2462 8185 4897 6034 3391 6542 5196 9", "809 1661 3594 6125 1555 7561 9392 4183 1361 4110 6", "477 7207 1968 9373 497 4409 4805 4726 216 5258 867", "6 3156 1828 4024 3161 2799 1081 6357 594 549 5572 ", "3851 2775"};
    vector<string> blueX = {"3954 3353 921 8007 4987 6007 6315 3152 5051 8954 6", "633 1643 4645 5710 8886 4273 5432 2218 9224 6062 2", "288 4368 6343 8561 3417 6688 3454 717 4543 2356 43", "99 4383 5505 5115 7283 7219 2869 9599 4294 2019 85", "52 1010 8970 2003 5405 2539 1002 2629 7850 7127 78", "74 9669 9229 8503 8889 4592 1633 6849 1606 5826 72", "32 9005 8028 5853 2550 9728 8196 7509 5565 7029 62", "13 7977 2250 5735 7459 8060 9060 9995 4097 5089 63", "32 9754 6452 4773 8877 1741 2165 5574 514 7185 448", "2 946"};
    vector<string> blueY = {"8622 9866 451 6250 3292 2803 6916 8853 5171 8419 7", "811 7713 7286 4459 7816 4500 7750 8860 6908 6224 2", "020 7398 4583 4533 3446 7308 4378 8497 8581 4083 1", "654 9507 401 6568 8375 6237 162 7921 1392 6279 986", "8 9867 2788 7647 9709 4419 8830 9023 8071 4033 199", "8 647 5605 9999 7937 3561 171 6231 6363 5076 750 1", "498 6708 8200 4109 125 3564 3880 5851 3580 3422 32", "58 4675 4299 5016 8294 8099 6857 3328 7211 2446 73", "2 1913 515 6120 6212 7941 9632 4004 2573 7252 7682"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 78661597;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> redX = {"5739 6113 2790 1462 5627 7863 3650 9388 4044 2060 ", "1567 6627 94 9708 2591 6419 2238 5869 7260 9238 90", "95 1993 5850 244 8373 3894 7804 5897 5797 8147 792", "3 1701 7145 8641 7985 9937 9000 2875 8892 537 593 ", "3508 3918 4250 2687 2668 73 4840 6696 4478 9863 99", "64 2672 3753 6831 6282 7931 9721 8628 6043 1072 88", "17 8327 7211 7129 792 3373 5008 486 9757 4652 4085", " 3681 4744 446 2643 9532 6238 2904 555 8774 688 48", "37 7490 605 8369"};
    vector<string> blueX = {"6107 5097 9822 2242 8863 56 472 6284 5636 8119 252", "6 3689 4670 4521 4123 944 8741 9493 4271 2587 3509", " 9218 4504 6982 6690 2894 8460 9975 201 4027 3698 ", "1540 3906 5847 5553 1253 8866 9174 7776 1015 1532 ", "7054 2605 5034 6439 3359 3817 8216 1259 3949 5136 ", "6051 3093 2171 7574 4569 1050 3958 3597 8390 6824 ", "7995 3012 6887 7240 2534 8409 4374 6160 6360 2126 ", "7815 1141 8883 5145 1582 4589 7542 1894 8234 2498 ", "5376 3912 7282 9187 7890 1900 8827 8949 3446 2334 ", "5347 1286 102 2565 7837 6066 2314 3241 2345 9422 7", "106 7189 7871 7522 8732 2471 4920 9524 9570 4245 6", "298 111 6147 618 4846 6483 3372 7693 9471 7222 160", "3 5490 3312 6535 9696 2522 3242 4211 5545 3526 392", "2 5841 6024 4249 3572 1800 7946 1147 8718 4480 941", "5 2409 154 1013 1210 6058 2105 1736 2380 7405 4233", " 6481 1969 3502"};
    vector<string> blueY = {"7059 7951 5102 2791 8547 1359 5620 211 5029 8267 5", "518 8590 4392 7225 7268 4328 5490 8164 7834 6856 9", "456 7145 5160 2925 648 8872 1206 400 4253 74 6707 ", "4229 2654 721 5170 7920 7036 8043 1506 7829 8325 2", "096 6601 9800 962 3339 8892 2242 2265 6230 7085 62", "45 1488 6909 1026 4135 703 4853 6414 1770 9632 789", " 2686 9804 2358 7218 226 7946 5687 8041 1813 4159 ", "1624 54 1915 1723 2899 9473 8439 5454 3879 9752 11", "42 8020 9021 4935 7051 7515 8354 724 6648 9695 954", "2 263 5670 1638 3727 2982 7873 5943 5706 4608 8866", " 3510 7664 7647 6186 4570 4961 3888 3112 720 6928 ", "2543 5320 6616 7147 1163 4249 5021 8805 3288 3720 ", "5059 4257 6004 1614 5416 7453 7169 8195 8828 4009 ", "669 8269 3555 7472 8057 6555 4944 1307 8820 6923 6", "072 3710 4327 3127 8463 6491 1133 6418 220 2903 41", "15 7850"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 2379392991;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> redX = {"9176"};
    vector<string> blueX = {"1246 5003 1542 1172 4439 7468 4862 5735 4194 9209 ", "8409 4403 9597 1244 7809 7315 9734 783 7252 6275 7", "163 4327 7988 3836 3165 2750 5726 6186 2851 8955 6", "760 6972 7835 1712 6387 5656 9419 1264 9807 7720 6", "677 5851 7502 1077 8089 2359 6528 4958 7429 9453 3", "214 1045 2712 8957 5123 3158 4420 3358 2132 645 75", "37 7910 7329 8099 7342 7155 2643 9677 2610 9716 53", "33 9345 353 9286 5871 6749 6330 1823 9165 4758 199", "7 3569 7726 7682 9658 9227 3704 9922 8052 1522 637", "7 5088 1317 8855 9641 3201 7099 6934 4251 9142 980", "8 282 7826 5285 3111 6112 3776 3919 1170 9558 1082", " 8590 1393 9471 4503 7453 7381 8327 5831 1010 8862", " 4304 9982 8034 6066 2804 3736 8119 2909 6655 5721", " 2968 5512 2156 2937 7645 4907 7270 6575 6006 9314", " 9372 2746 6101 7421 2878 76 3820 9492 68 7982 601", "7 5797 1422 4004 2958 3228 8038 5471 7796 5421 798", "6 8920 2704 9121 8677 7967 2806 107 9493 129 9866 ", "8582 5319 7821 5245 4454 5009 148 2294 3603 4230 2", "053 1772 1799 2902 2715 4967 5843 1111 9225 2682 8", "408 5769 2346 8953 9651 9262 4070 325 992 1896 716", "9 7142 4431 97 6622 3460 6948 6113 6033 2945 4856 ", "144 9570 6246 797 7929 7630 7801 3535 7574 8807 92", "0 9446 3006 3515 7316 7016 6456 2941 4890 2689 768", "6 8824 9250 3125 8923 8528 4615 4906 5527 6159 321", "3 7688 263 7679 2058 421 5103 640 3188 9802 8640 8", "892 551 7255 1594 4977 8877 2071 8540 2969 1290 82", "3 2649 7641 8005 8192 2794 675 5925 6103 3737 630 ", "6599 6669 7125 6222 1429 5992 1907 4149 8905 7271 ", "6577 2676 2572 9341 3851 7398 2836 3899 2935 503 7", "150 9607 4666 8520 4631"};
    vector<string> blueY = {"188 5693 4834 4196 2365 5675 8964 8721 22 7809 599", "5 5542 3186 9240 7276 3094 1379 7359 641 5713 3697", " 8576 9214 7098 2002 5717 9984 9746 7970 9412 817 ", "7603 9279 5494 9210 9785 4756 6085 8117 1482 2320 ", "6083 3789 4583 6818 7175 2388 554 852 7731 337 103", "9 753 8401 9605 3231 1299 7388 5704 4344 5869 5226", " 1413 8744 7154 1735 9294 4440 305 8925 6301 3558 ", "7838 2047 9433 4090 7918 5941 9249 778 238 8658 13", "84 1801 783 4817 3613 3946 2018 3838 2517 8626 990", "1 545 8712 5707 1592 580 7253 149 9575 8742 1810 8", "104 5891 169 7620 9012 1719 1893 8087 5273 3412 40", "31 2602 7651 9714 5524 2907 8252 6643 6752 5819 70", "77 4373 5596 4557 320 261 9203 5360 8277 1210 6341", " 1270 1349 820 2000 3386 1891 5660 5945 4892 5036 ", "800 4572 4384 3755 335 5650 2604 4746 2134 5228 17", "66 4138 3791 4681 7706 540 4406 8740 1978 4767 489", "4 9343 118 4213 2211 7678 6677 476 7564 4310 2376 ", "8967 3472 8006 7712 3413 7239 860 5595 3347 477 89", "99 383 1518 2576 4414 755 2978 7590 7113 5417 7089", " 7965 7997 5212 5040 3072 9270 1490 6187 3299 204 ", "5118 3033 8028 1720 7957 2298 8128 1306 1868 1203 ", "3678 1896 8157 7925 1151 8412 1563 5993 9143 7885 ", "7400 8632 4977 7913 3161 6843 9780 6125 9789 9683 ", "1170 3776 6826 3011 762 8125 5154 7530 8845 6011 7", "05 9517 922 7201 5629 1698 7964 225 2166 7662 9891", " 5459 5840 8578 5939 8473 7294 2074 692 7968 8507 ", "2323 6381 6793 7584 9612 1026 2560 8727 4625 7282 ", "7258 618 4616 4765 4795 9258 5575 9667 3650 3004 5", "104 2920 7373 5243 5684 4844 5430 7166 1718 6253 2", "523 5899 4200"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> redX = {"50 9342"};
    vector<string> blueX = {"8310 1149 1252 2849 1282 4759 3989 2552 5687 2982 ", "9397 8044 7057 4843 8400 6603 2344 394 3991 6173 9", "976 1438 3370 9202 7597 7510 2303 6871 5436 9789 2", "74 5736 9792 9623 5609 175 1008 8808 6291 4794 850", "6 9839 2412 5003 4574 7759 2703 953 5657 8894 4953", " 6339 6813 5061 8230 2181 4585 9496 4410 3811 1018", " 6177 2974 98 7214 4197 8644 8934 128 1880 7689 53", "82 6293 4716 6103 8668 290 2900 404 2376 6184 9462", " 4778 1636 9197 8831 548 4098 3832 2865 9425 2226 ", "9321 9880 8552 6240 2003 6410 393 8314 3559 716 66", "8 9615 125 7793 5080 1666 5009 2909 7202 462 7992 ", "4264 3087 4884 4414 5567 8792 3407 6894 212 8842 6", "441 7213 613 2358 9494 2931 6442 7499 6542 4471 99", "12 4990 6520 2661 5026 8084 3186 9295 3120 4189 43", "66 2375 9788 6533 8467 2984 7830 4863 8837 4614 77", "87 3897 7981 411 4456 2435 5433 7119 7991 9093 710", "3 2757 1127 50 1588 4319 1455 7695 3151 104 4043 3", "325 6792 3476 6702 2543 1519 3618 1126 460 2953 77", "56 5212 9219 8852 8171 6794 8486 5340 3449 7480 37", "49 9703 5540 8143 2199 1818 1452 7934 3687 9167 22", "02 3563 4073 1646 9724 4497 5335 1783 65 1143 9533", " 8722 5726 6754 1453 5358 8762 5537 3024 6134 8700", " 4678 1626 1362 4607 7796 3929 3049 1568 1523 1369", " 1315 868 9584 9974 4029 5544 114 1408 9142 5302 4", "440 3732 4086 8816 5582 2077 7231 9645 2127 3926 9", "723 5629 7460 970 4581 1467 6730 842 8643 5262 825", "7 5995 6289 9211 1920 6106 8041 1979 454 3788 8862", " 2837 8540 966 3305 7352 2327 7445 8410 4150 7129 ", "5419 7568 8288 2535 3816 5747 426 4709 4321 4094 9", "87 9004 3135 731"};
    vector<string> blueY = {"6772 4430 5094 2503 986 6561 2480 148 6578 3239 49", "50 8989 1400 1023 1914 7860 651 9235 3924 2183 514", "4 4210 6151 9026 2546 2728 3935 6798 6059 4538 573", "8 2342 3362 2830 7536 3466 7737 6470 9904 2636 992", "1 1533 8136 2504 7652 3226 5984 3025 7407 2866 762", "0 8007 4074 5962 8621 916 1606 585 5338 6181 337 2", "380 2528 8182 5033 7540 7179 6054 4507 826 5088 44", "74 4118 7522 2785 2797 1649 8461 2363 4661 9638 71", "28 8048 4129 2554 1778 4188 9070 4041 7611 3686 75", "13 6035 5368 9829 7151 9405 3268 4204 4624 1749 74", "24 6548 33 9766 9082 8612 769 9747 2827 9759 4307 ", "2276 1482 2475 8283 1355 9487 3513 9076 8322 4754 ", "902 9709 5602 9197 9540 5954 5393 9622 2250 9930 4", "060 271 279 1347 5878 1254 206 9353 1760 4081 4941", " 8301 1129 7287 866 341 5528 9146 6402 3474 6462 6", "821 4933 7165 8476 890 6476 1329 4254 6672 8548 90", "95 8174 179 1139 6810 6898 9429 3803 1810 1809 259", "8 2131 3439 6860 914 6678 4781 7235 4622 7744 1203", " 8934 46 7230 1493 9141 7808 2327 2343 2548 56 136", "9 6366 7562 2297 7516 7060 2345 5437 1412 2200 578", "4 3842 2210 8064 8827 9441 2457 5868 5252 7627 651", "0 9240 8627 2738 7400 110 1625 6609 2023 4341 1258", " 8313 8466 3706 3569 6633 7960 4553 317 5674 9896 ", "104 9321 404 4380 3952 410 1152 5376 9097 9345 172", "4 1969 9137 2256 9716 2624 9625 6297 6275 3669 527", "7 4178 949 7473 9277 7285 1656 7851 2956 1668 2047", " 5148 9508 2362 6050 1671 4116 9148 6918 2816 3240", " 1742 5732 6963 7746 9753 2393 2764 3627 6042 9509", " 3106 783 1793 8554 8524 3867 1480 202 7954 7313 1", "121 3332 1954 45"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> redX = {"3983 5349 5968"};
    vector<string> blueX = {"8005 2885 9372 5053 5966 457 2262 6706 8955 2565 8", "280 665 1905 9386 6139 2776 7542 5377 9762 6236 49", "19 5855 8647 1790 6841 3427 8371 6820 87 3648 4508", " 7078 9770 4242 6312 1291 4551 9295 2576 3520 8450", " 4763 7777 6229 7680 2855 5660 6500 7034 5912 3212", " 1071 6045 5967 2759 5204 4542 8875 3006 6767 4556", " 5095 8831 1149 2574 5872 2762 6552 9179 3688 4736", " 8804 8600 1184 9910 692 3259 1494 1866 8922 3567 ", "7162 4029 6010 5985 4126 2782 2105 4694 2090 9016 ", "3671 4634 1777 8454 2005 6709 9619 4550 1567 793 3", "656 927 5682 2344 5406 6202 8520 1865 6826 5788 98", "17 9245 3753 5728 1862 2095 4929 9872 4389 5751 18", "29 1472 6982 8859 6952 5687 1507 4626 8857 6171 12", "38 7751 7373 503 5013 6454 4027 9867 9657 5446 425", "6 3745 6573 9155 163 6375 5073 5879 562 8750 5613 ", "2900 651 1406 3411 6448 4887 147 3965 6926 6496 81", "21 1334 9925 3780 2127 1781 7439 5649 5563 1427 43", "2 4224 8346 5262 3633 8735 5794 582 104 4182 9574 ", "2996 9452 5909 8315 1852 3825 7919 8054 6763 7307 ", "9429 9553 7639 5183 8076 1156 9399 9333 2750 5386 ", "267 9247 9421 7104 5754 6994 9796 4968 6280 8946 6", "125 797 5328 4300 5848 5761 1348 7404 3822 1058 40", "15 179 2540 529 6723 4705 9512 2609 2475 7511 7025", " 2476 5231 3838 4231 5747 1440 6307 1661 4041 9096", " 4741 157 3591 3312 6429 9003 170 2683 9557 8342 8", "746 6592 4567 811 4855 4501 6339 8564 306 5382 425", "2 5390 6917 6645 1023 4728 2704 1708 7185 4791 993", " 7230 3285 7478 2159 363 1830 2283 5890 6711 6581 ", "4708 9569 3493 6305 6670 3095 1861 6972 9022 7563 ", "4207 1459 6108 1942 3191"};
    vector<string> blueY = {"8694 2405 5674 2516 7531 4595 4006 1822 3758 9996 ", "2242 4057 4086 292 7701 2297 3651 4304 7558 1344 3", "188 8888 5375 6907 3109 4168 7677 6374 1845 499 50", "0 6423 3637 7797 2736 5406 7292 1699 7158 5366 712", " 7217 5912 1336 6608 1200 5288 6445 4980 8177 6212", " 6094 5734 5035 9119 1594 9746 5525 5329 787 5719 ", "8528 8884 6597 6426 5716 6015 5476 3520 7430 4704 ", "225 3257 99 7458 6264 3020 5323 6607 4522 5613 740", "4 6798 8050 2300 1482 3101 1013 3559 2568 4506 773", "9 5295 3382 4971 629 7272 5192 2878 4746 1529 9006", " 2186 3218 2308 4005 6548 2557 4608 4825 4286 6801", " 625 9045 3385 5567 8137 953 7276 3153 5736 519 80", "45 8530 5887 2778 1515 4314 2035 7523 6254 3156 51", "64 9729 327 4637 5949 9020 3521 6955 7582 3086 703", "3 5272 1252 9791 4713 9418 5235 2636 671 5937 8218", " 3652 5629 2156 3996 2750 9226 6568 2095 5241 8614", " 6 9277 738 7658 6647 5256 9852 3757 2566 2347 507", "1 7124 5299 3835 8463 8545 6008 60 7208 4204 7097 ", "7392 9203 5391 1645 2394 9864 9402 9187 4305 960 6", "056 8803 1840 229 7225 3210 8440 6558 5474 2570 41", "91 9941 5417 1193 5302 2763 1977 9407 5782 8702 16", "62 2185 1878 921 4045 138 5137 5840 9452 6986 1272", " 6145 6824 9374 8247 2230 5430 2725 7653 2787 6705", " 5985 7130 770 8642 6400 6059 9672 5918 935 1280 9", "923 7417 7274 8567 1315 9384 8282 4786 9283 1748 1", "227 4819 362 9473 4567 6258 7648 4343 696 3005 648", "2 187 3645 3358 4938 3273 5108 9475 3966 83 9568 2", "573 1444 5946 2966 5905 6080 5403 1296 8623 3053 9", "801 996 3900 378 8514 9007 5678 540 6257 2507 5251", " 7042 4064 5760"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> redX = {"5487 8886 1928 5255"};
    vector<string> blueX = {"3872 9311 7911 4345 5951 9171 3644 8149 4310 9449 ", "7969 1105 5880 4604 7798 5848 1057 444 8022 7202 7", "740 1167 4728 4465 6107 9445 1573 9319 1910 1001 7", "20 1189 6627 51 6695 2735 7982 1114 8421 9723 5445", " 9943 5249 7944 7059 8068 6774 5147 9143 5220 1200", " 996 528 2976 4959 9895 6703 5420 1607 4553 2391 7", "942 6549 8095 4431 4919 694 8364 1502 5960 1786 52", "03 3869 3405 5272 627 6682 4863 6128 8357 7588 402", "5 5742 295 1068 808 9404 9363 4123 7154 9259 4309 ", "3374 936 1242 4167 1836 3409 7200 6050 1610 9271 4", "789 8608 3611 6455 636 5840 1826 4091 8433 1988 27", "90 1445 5979 6837 6561 1377 3582 5558 3860 8557 25", "61 5109 571 2261 6375 5550 7624 9686 7387 26 4207 ", "6581 3165 2821 7630 4376 5363 8236 1350 705 1406 5", "029 4714 3051 1481 5955 4493 8370 732 605 9532 852", "6 1038 5490 3758 5481 3113 289 504 3443 1946 4203 ", "840 1920 6557 2009 9743 6940 6690 4134 3851 6716 7", "460 1201 6464 2535 5957 9649 986 5225 4473 2036 57", "50 9953 9367 6327 5285 252 2058 619 9500 7431 1697", " 5909 594 2847 1635 2480 3801 1524 2012 4573 4428 ", "3420 89 2522 929 1075 7324 8417 3706 3552 9756 832", "7 6190 2532 637 8133 2736 5115 8615 4339 8313 1605", " 2768 7126 6349 4461 9919 8720 5512 8247 6075 6724", " 826 5611 9434 2255 146 4988 256 24 4247 6235 8987", " 3194 5465 7593 587 2732 3450 7964 3396 3918 5638 ", "6845 2684 2546 7133 2092 5504 4117 9969 3473 3907 ", "9561 1146 1344 54 1472 9623 1576 130 2311 1264 760", " 4204 3079 1838 1470 5582 5772 5774 4530 5424 4847", " 5947 8382 3353 9761 3301 5926 9307 9107 7823 2666", " 1104 4891"};
    vector<string> blueY = {"1952 7208 3031 2757 7996 6331 9728 2825 4177 9835 ", "943 1537 7266 8586 2438 4815 7282 9858 8869 8692 6", "233 9086 3853 1627 6199 7862 7427 9476 3571 4278 7", "792 3248 2013 4521 964 4086 9970 6311 2298 401 892", "5 4904 6023 7350 1690 5460 6684 3717 1494 2377 879", "5 5227 8338 1239 775 4977 3975 2315 9956 7798 7107", " 1574 1517 6724 8673 9306 5652 6033 5831 1456 4340", " 708 9177 6793 3410 2625 5194 3535 3682 6979 1507 ", "8487 342 5093 1852 5590 4625 1069 9096 4381 4586 1", "638 8365 6514 7596 8681 9056 4540 5642 6039 7519 9", "371 3488 3014 6808 9409 5124 869 9848 6097 4044 88", "93 749 6211 7321 2924 4001 5712 1347 6991 9825 360", "9 4891 1510 3566 8657 5509 7422 5765 6218 4175 478", "3 8218 5187 6363 1424 6229 1730 311 6005 1549 4157", " 615 5032 7550 9864 5473 6806 5978 7384 5205 8112 ", "6138 6406 983 5057 3951 2240 3354 3232 9353 6297 2", "171 1691 4850 8977 2167 467 1656 5199 8186 9895 23", "10 7322 1013 1657 7199 3687 3579 813 4294 5341 728", "8 8639 1212 1460 6255 6275 8902 1740 6030 4984 445", "9 1994 6048 8662 4375 9933 4303 5975 2527 2703 331", "5 2994 3250 4551 1612 8034 9607 9643 7192 5349 672", "9 7602 6849 1568 5772 344 4166 5456 1498 762 4148 ", "9083 1551 2081 3073 2533 1229 2620 7846 4639 5917 ", "7190 5574 2185 7955 2391 1791 9896 6124 5255 4947 ", "1863 6012 7475 6487 7613 5492 9329 5787 1950 9870 ", "6369 14 3546 115 1364 6731 3448 195 6128 8158 2630", " 7945 6231 81 9262 1488 657 2544 2129 63 121 5611 ", "6404 9343 770 7033 7843 8318 7780 264 518 3228 647", "1 5539 339 4762 5837 4796 2371 9137 1370 9823 2395", " 25 2349 2903 4740"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 609;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> redX = {"3768 2620 8955 1191"};
    vector<string> blueX = {"5622 8528 3043 2527 7570 3256 7171 1929 4371 556 2", "45 3864 1596 8623 7426 1077 4826 2014 8333 6787 13", "09 790 9995 8976 8800 9794 6354 7144 8407 2113 756", "5 20 2133 6438 8778 3712 1351 8153 1361 8650 1809 ", "5739 6369 4357 1714 7079 2936 141 8214 2307 9598 3", "686 1352 8102 191 2061 9586 5683 4579 8064 7235 18", "12 7836 5433 2923 962 4828 277 6470 864 7680 9571 ", "9650 3800 3788 7096 4863 2765 2788 4080 5651 1328 ", "5829 1295 9831 5006 1214 2405 8945 6757 2606 8703 ", "3326 2519 4315 874 1852 7048 4188 2675 8465 2274 5", "108 666 5756 7608 2155 4421 9142 5687 3323 5793 53", "48 3048 6548 4659 9596 7601 9628 732 8946 1500 323", "9 5659 2638 320 1102 1628 8939 9323 7135 6286 270 ", "1745 7298 1747 401 2702 1603 4688 8459 4935 5440 9", "636 830 2575 1136 2198 3037 2949 1790 4950 2104 29", "07 7137 1558 2326 5009 3210 9554 4077 7456 842 839", "4 3184 7203 6589 2112 6630 3199 806 7405 2467 67 4", "583 4894 6741 3258 9662 3147 2301 3405 9591 4968 5", "240 6146 837 3913 4336 7986 7104 7749 586 463 2234", " 9035 2826 777 2695 5838 3166 1913 7935 7536 6493 ", "8181 3089 5533 7548 3264 4616 9856 3133 6476 5861 ", "6902 3746 8045 715 2189 7888 3019 3386 6249 6302 7", "987 3459 9123 2540 4587 3819 1486 4352 7936 8315 8", "56 4955 6702 3667 7545 2250 4283 9263 2971 9689 34", "08 273 2757 659 7381 142 8134 4900 456 3157 3083 9", "503 1738 970 4349 5963 2950 9585 1690 5608 527 707", "7 6638 4192 9460 1752 9133 1992 2291 9205 5824 859", "7 8631 9297 7258 9036 7599 9344 5686 770 7805 1380", " 2047 1346 6512 2811 6381 9935 2459 2645 6907 4809", " 8576 854 8511"};
    vector<string> blueY = {"3102 4146 8911 9913 7035 9597 1893 4885 3862 1640 ", "3273 9361 5727 4646 5251 3965 1503 1787 7434 9018 ", "3920 4060 8851 1988 9481 8015 7284 1532 9188 1330 ", "6196 8558 8477 247 2849 1986 5657 1021 9373 3150 8", "737 330 9877 5336 7417 5652 4815 8808 7906 8175 41", "44 4524 136 8896 6728 4822 7192 6224 2059 1792 322", " 573 8396 8864 8439 9435 4791 4902 5744 4375 8763 ", "1618 5338 5947 6227 8242 1713 8637 1328 5961 6104 ", "2403 2101 9020 851 7425 3854 2837 5825 323 2605 74", "99 6729 9702 3586 4009 3903 416 7591 8538 899 112 ", "7142 1350 5575 2800 7239 4053 8187 4199 2393 6067 ", "9111 8907 8812 6973 5268 2099 8793 8727 9943 8459 ", "5647 7151 4843 1345 5259 7916 8250 3660 1539 4689 ", "9448 6204 815 6606 4988 1628 2644 3205 27 36 110 7", "450 4979 7178 3171 5025 9770 6925 8367 6159 1148 8", "965 8115 4654 145 6858 2703 9867 6594 719 4032 105", "7 1390 9387 4814 3868 9843 559 4869 2197 6361 9828", " 7922 5471 9576 5906 3203 3740 4346 465 7004 4218 ", "3954 1385 4964 2476 5603 2421 4919 3654 177 1114 3", "795 8108 2671 6075 3995 7354 6730 2028 6314 9965 4", "158 79 5205 3417 4897 7098 7334 513 2192 3219 3914", " 9771 2646 114 436 4906 9186 5553 989 1131 7700 51", " 696 8061 1191 2686 3571 1902 7368 2998 5354 3231 ", "6260 2999 3734 707 7008 9871 9043 2009 5202 487 30", "23 3843 621 7276 2910 4243 8666 1853 602 529 7665 ", "4643 2343 6299 8423 568 1765 1178 6849 7285 3086 7", "148 9751 1933 7984 4052 2388 8063 6762 4794 7292 9", "981 2080 8066 3318 3613 3970 9713 304 5377 5129 24", "6 5448 7309 5804 6879 4909 1073 7075 8172 8815 298", "6 7610 7355"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 3608;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> redX = {"4306 6437 319 8402"};
    vector<string> blueX = {"574 4015 6680 7708 1943 6297 6388 1818 5891 5255 4", "076 5371 2221 9078 1669 8614 9862 3773 9989 516 57", "30 333 927 3259 2374 9154 2813 2804 3436 1836 8473", " 3710 8816 247 5256 4828 5995 7893 8243 6553 8681 ", "1630 7747 8716 5993 9118 9689 1142 4720 6429 2200 ", "5128 4763 2267 512 9810 2271 2858 9271 7942 478 27", "58 7333 1355 8553 5423 6364 6286 492 3831 386 4770", " 5339 4887 4413 1144 9415 524 1514 6362 3820 6991 ", "1882 5825 8138 8674 4442 4470 6126 565 9037 5637 3", "485 841 2232 3630 8749 6828 2362 406 1439 1651 658", "1 7658 1670 9357 2659 4564 3804 4133 5245 7159 553", "6 7745 1797 6787 9986 9675 4679 8120 6420 8566 847", "6 5448 9814 9722 4527 7058 6132 5992 3495 6571 843", "2 8788 5314 1726 1991 1905 5850 2219 9107 8747 70 ", "2331 5373 7950 1696 5828 748 3988 254 9239 9422 48", "75 7056 3975 8898 2308 1605 4276 9856 1017 3541 12", "06 325 4671 8917 576 4678 7815 5956 5330 945 7917 ", "8574 7237 1498 4600 6028 4357 8535 7318 7041 537 6", "603 6090 7729 6927 369 6904 4081 8986 9208 6788 13", "08 9360 8104 2109 4778 2871 4467 2382 8219 5892 57", "63 3516 7883 2195 5747 4629 6451 7238 2505 2352 66", "92 8084 4422 1879 8544 9544 5248 4331 6706 9913 69", "41 1813 2298 4961 8347 1035 3910 1325 3004 1451 13", "24 3440 4111 7206 9763 7572 7418 2108 9490 798 302", "7 3088 2048 77 8238 8407 4539 446 2848 7203 8500 2", "927 2691 8710 7479 2462 1442 4805 7800 8701 5860 2", "729 3157 4021 9896 5704 3108 8752 4228 3877 7365 7", "193 2595 5554 2186 9110 806 2995 4472 5838 9403 72", "36 1006 7091 3784 6574 5601 7052 7966 4646 3973 41", "19 1972 6157 1928 201"};
    vector<string> blueY = {"1282 9553 9101 5999 3822 9660 2911 8627 9256 7420 ", "232 7421 2633 2086 6875 4886 1696 8119 3796 1551 1", "53 9158 9661 3230 8508 7669 2810 6195 1216 6965 40", "3 7545 2138 9977 9387 7353 8150 8451 7713 4440 977", "6 9595 3922 2128 6944 6462 3801 9964 3632 4419 566", "9 6108 267 4025 85 8345 4035 6652 7506 9506 7263 3", "542 3513 2629 2799 2242 7796 2794 5486 2588 4372 2", "953 6931 5076 7580 732 7108 8225 61 4703 6168 8690", " 7034 563 9606 2831 2679 9682 3135 5887 8499 4460 ", "5397 5267 9215 7792 6583 8223 1146 167 26 5593 759", "4 2107 7317 602 5977 4933 2057 7505 4266 9315 7515", " 6519 1478 5079 8000 9005 3032 8493 9524 705 833 6", "597 678 8544 248 7838 9619 4693 3154 1748 2814 966", "3 6329 7152 1881 6737 7757 2574 979 7747 5180 5390", " 2982 6879 2078 1867 6469 378 830 7045 5911 6527 9", "248 4230 2224 8729 7716 6218 4343 4752 8197 4558 1", "875 1269 3006 2804 6190 8859 60 5191 8956 9232 255", "9 7749 548 9079 6538 4973 6061 180 6842 4966 276 7", "427 7203 682 1433 2645 2069 3198 490 4888 670 527 ", "855 3297 409 2858 5477 3833 8004 1255 6862 3137 75", "67 9763 9557 3443 2416 281 9671 2071 1956 573 8381", " 367 3568 6005 1998 9728 2389 5844 1618 7277 9826 ", "419 5649 3123 2846 4969 3081 7591 4345 7950 5356 5", "776 4269 8764 3272 4292 7699 5705 9866 6624 4140 8", "662 2024 5563 8819 2287 1576 3775 3250 5061 2742 2", "080 4291 6202 4610 9765 7823 4352 1260 4736 5809 9", "012 487 8455 2110 1496 5129 6576 5909 3406 6066 58", "00 6098 2435 8234 9039 2956 357 2084 6142 6818 427", "0 4649 6835 5231 1961 1283 8106 5570 310 896 6985 ", "4397 2215"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 5143;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> redX = {"8612 4734 7480 84 434 7169 457 7631 9380 4757 9954", " 4255 8024 6301 2167 5049 5095 859 3194 3342 6626 ", "1363 597 4717 2699 3343 147 8712 7469 3708 4892 96", "4 4649 6033 8860 4666 2815 9135 574 5578 9765 1332", " 4074 4368 3431 1322 7384 9838 3627 1245 6767 201 ", "3247 2569 3935 4720 1986 8017 935 1159 9035 4220 6", "708 7010 6442 74 9431 3532 1706 4117 6306 6056 748", "7 2179 6975 9438 9361 9335 8748 8695 1109 9943 970", "3 6820 1477 5576 2257 9912 1083 6085 7474 1767 687", "9 5391 3210 2710 4410 8718 2079 1761 615 6582 7192", " 443 9413 7701 5509 2208 9115 2904 7304 7207 617 6", "333 9236 2579 5382 68 7984 9033 6091 5262 3768 620", "3 9772 2119 225 3635 4638 1025 3159 395 8106 6549 ", "7445 9833 5724 238 2047 9721 600 4065 1423 8594 25", "22 164 123 2442 8056 6768 8976 389 6422 7745 5709 ", "2585 4934 5370 6878 2621 3754 8069 1106 7168 9511 ", "1148 2469 2168 2948 3059 3676 5788 3030 4966 4156 ", "8477 9488 3856 4861 5806 6082 2275 6130 2032 3522 ", "5380 5795 9489 1467 2947 8552 1057 1473 966 7042 4", "402 2802 2769 1252 1308 8536 5476 9582 6731 2716 7", "344 5850 6134 9572 6727 287 6188 845 5279 4915 502", "0 5524 5011 2462 1153 5549 8103 2649 7576 4503 408", "5 3333 3408 7191 2489 8921 9053 5344 9363 7385 374", "9 2850 1743 5480 9077 3844 8597 1830 8533 1432 670", "1 1071 6555 2396 8474 2646 1995 5843 3443 3243 278", "8 5007 916 6107 472 1935 5168 3371 8174 9418 2598 ", "7166 7119 6040 9782 4570 7123 112 5821 7937 7554 7", "148 7116 6789 8422 3953 1961 1077 5419 6661 8578 1", "160 898 8882 7506 4799 6901 8853 1947 3147 1029 19", "39 5587 9627 3055"};
    vector<string> blueX = {"2041"};
    vector<string> blueY = {"876"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> redX = {"5807 8413 271 4363 7998 8472 6328 8651 8144 1643 4", "008 8778 1561 4627 8307 6352 5395 115 4638 175 471", "0 9013 5332 7734 5863 8218 6023 624 2650 7937 6561", " 4090 7637 7782 7301 4322 5075 9762 647 5803 3186 ", "9777 5477 5116 8154 1569 7489 2120 6490 8550 9932 ", "344 6672 538 8592 9525 4068 8658 7882 226 450 5516", " 2818 5157 3986 6948 7064 5606 8022 8357 7437 4224", " 7535 924 5173 7308 9161 7074 8415 2625 6031 1136 ", "6640 3872 6043 3372 8790 3921 4000 4139 6932 481 8", "912 7185 3064 6505 8059 5915 9992 3524 4621 912 38", "35 7488 4766 456 580 2605 2955 376 235 7697 6223 1", "147 5850 3545 333 3692 3281 3834 3965 4081 4502 96", "38 9712 1041 6348 841 6162 2015 5507 7740 1980 393", "0 3040 7362 7945 6277 8899 431 8487 5598 6145 8315", " 7053 1538 42 9799 2269 8329 5346 1749 6310 7595 3", "309 1366 7785 51 3786 7105 2376 1150 1622 5805 473", "0 9056 7953 1708 7820 5683 1006 7652 4962 6989 414", "7 2362 5098 2525 4577 7133 849 9889 8621 1853 911 ", "8056 9629 2022 9054 8895 7502 6381 1736 5066 2578 ", "7125 5390 9488 6567 8910 1637 8515 2306 6300 5594 ", "1947 6251 9327 7559 6351 5970 7108 7213 863 3567 2", "135 8785 2416 7303 8691 5715 2261 1307 2296 2793 8", "630 5306 5848 5728 4198 2846 888 7545 308 283 7846", " 4990 957 9142 8955 7154 9903 6309 725 1513 1822 1", "144 5729 6802 958 3577 2787 9288 6304 5031 6962 56", "41 2326 9266 7442 9727 6009 3271 5095 6006 2631 42", "00 12 6268 6341 6051 2452 9612 6601 5911 2454 2556", " 3315 6286 486 8944 9374 4250 8848 7823 6080 2734 ", "1389 4387 8540 2430 2693 3068 9652 4335 6305 1524 ", "9086 1933 2539"};
    vector<string> blueX = {"317 9041"};
    vector<string> blueY = {"6716 9653"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> redX = {"5351 3949 9926 3874 6989 1493 4754 8133 4127 2538 ", "3366 8004 5099 5413 6579 8968 6420 7984 2863 2052 ", "1845 5281 3968 432 239 20 756 5857 3069 4852 7822 ", "1750 601 8694 8475 1537 5143 2979 2082 5152 1663 1", "440 6297 1768 9448 7099 2116 7629 5824 515 6809 41", "6 6056 9284 1807 9462 5772 6366 9013 2512 1360 437", "0 3311 3468 4118 3561 4458 5208 1949 9376 4385 377", "4 1315 6099 696 8672 7658 2677 9286 5745 2169 1353", " 1520 8206 3209 897 5871 9768 7120 4176 5123 4958 ", "3115 1150 4034 8363 2931 5848 1305 5986 8880 2371 ", "7345 6800 9416 4583 5553 7878 5367 8331 3880 4547 ", "2438 8775 9329 2956 8218 8341 4361 9646 9998 5828 ", "9022 7216 9260 6011 2231 6964 7528 4186 6202 9388 ", "9720 9052 6254 2393 8820 7914 3790 7790 9062 4137 ", "6629 8115 4670 6483 60 7782 5253 8019 7022 5739 23", "64 330 2549 8244 8161 8878 1731 5532 2316 6386 771", "0 990 4428 5809 9176 4035 5001 6516 9258 7719 1910", " 595 7197 8701 613 1752 1749 7721 4470 4639 6187 5", "467 9390 4074 4197 7996 7680 10000 3828 3760 4122 ", "5477 5465 9020 9727 9701 9588 1345 3772 4810 9147 ", "8726 9017 2622 4388 132 559 9146 1184 938 6704 262", "0 2307 817 9591 5047 9892 3965 8772 573 9924 1525 ", "4647 9503 5961 2917 764 438 7784 8529 1152 8964 57", "57 2582 1853 6925 5164 9055 7837 319 9277 4823 604", "3 7234 445 9846 3204 2724 125 5647 931 9066 9168 5", "595 2181 4843 1858 9739 4898 8891 2778 8986 6482 7", "486 4452 3837 6426 3851 6644 1783 7911 8384 6026 2", "631 497 9474 2140 8795 9804 8659 4995 5242 4841 96", "49 6541 2165 3339 4021 4331 3391 3201 4188 5615 53", "03 5271 23 8392 2722"};
    vector<string> blueX = {"9893 9732"};
    vector<string> blueY = {"8333 3610"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1096810;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> redX = {"6510 8515 9787 1842 2955 2779 6140 8584 5060 9174 ", "6853 3971 6906 2429 7789 5083 5988 4734 6117 5895 ", "1956 3497 1113 2242 6276 7914 113 1703 1155 5729 9", "028 9692 6358 686 7194 2075 3501 2311 9963 8378 37", "1 5356 6266 6236 3761 6881 3208 7937 6976 5930 221", "4 5176 6696 3862 7418 7685 1914 7458 9277 4382 386", "3 8319 5584 9711 3451 5997 2360 9325 1738 550 7309", " 2024 8565 855 9738 9785 5416 7017 8706 8443 1507 ", "7486 1216 3222 2531 2999 2936 3078 9708 9250 8672 ", "4938 5798 1201 165 6072 306 6118 3467 1343 5799 42", "6 1316 1236 3004 7709 412 7374 7236 8119 5823 4173", " 5970 5533 8456 8916 1815 6832 1398 5591 3055 2127", " 541 5200 644 3708 6871 5372 7869 4188 341 5890 77", "36 664 2582 2532 6655 209 4834 5358 9305 9696 5235", " 459 7648 4955 4193 7910 1306 6644 9353 622 1862 8", "476 6201 4419 8277 7012 5610 3373 4307 7284 1610 5", "677 5984 7332 6278 7979 9616 4391 1057 7949 4315 8", "408 7075 6009 4449 1053 7008 1713 734 9544 4787 30", " 5206 2541 967 5480 7533 8285 3315 2129 5653 7456 ", "4448 9633 37 2322 6856 5564 403 1428 6732 2592 331", "0 8915 7873 1579 6102 825 6617 984 9600 602 3610 2", "161 8822 7037 994 5728 1931 9300 1195 7593 5494 96", "73 6021 346 6245 4864 6285 2796 3915 536 1419 2741", " 8117 9603 5541 1630 7786 9839 897 1116 4176 6640 ", "6440 6414 1707 8156 2182 5249 2289 5395 7470 739 2", "313 8107 562 6370 3234 7201 5488 6880 6297 9233 31", "58 8257 4524 6098 7933 3431 8206 3918 6348 1035 26", "7 3630 5201 2251 1288 3254 708 7251 1840 3510 8606", " 1590 8151 7459 861 6498 2971 7170 3576 4226 2295 ", "1908 5180 368"};
    vector<string> blueX = {"6273 3001"};
    vector<string> blueY = {"5012 6276"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> redX = {"7475 3138 5351 8350 7127 9911 9291 300 2187 7490 7", "736 6088 5252 9462 3880 690 8558 6143 762 7717 160", "1 87 581 1080 1616 8290 7210 2147 5307 2407 3282 7", "500 8069 7356 9334 8797 6192 4765 62 3300 9123 711", "2 625 8791 781 4792 8347 8801 5668 1067 1805 5630 ", "9606 2546 6621 1071 9889 6502 1198 4298 6718 7009 ", "7467 6913 4151 6480 7085 7901 7305 8803 7388 1702 ", "7285 6797 4066 9378 1489 5007 3259 7657 7324 1388 ", "3273 5745 6670 9896 8116 4890 9277 898 830 4039 55", "96 7067 5028 6519 8894 9473 3952 9120 4104 557 637", "9 1176 565 3269 7185 1535 611 7999 4093 8188 6602 ", "6708 5619 7314 9037 9052 8444 1246 6489 1883 6684 ", "7776 6666 8071 3135 180 6957 5525 3090 4092 3008 2", "480 863 27 3862 7701 8352 1569 3895 4525 9476 2766", " 3779 1640 8783 3173 6855 5954 6523 5567 6824 5877", " 2360 189 2139 1235 3946 4105 7390 1721 419 8965 8", "895 746 8230 812 2415 3428 9852 6976 9676 6452 282", "7 5467 8448 3710 3776 351 6516 5808 4687 8612 8980", " 339 5319 4139 2081 5373 7797 1826 4599 4379 2603 ", "7598 2242 939 8765 760 1008 676 436 6225 1378 8002", " 8725 8611 172 4642 1580 6086 3212 9078 9425 8988 ", "2567 3589 5021 6826 5663 5394 9510 435 737 4823 58", "94 9762 4666 7263 2826 3043 6506 8013 710 6255 894", "4 7180 4838 2435 2389 8787 8815 604 5701 772 211 7", "889 9336 114 324 716 1472 109 5200 7478 8970 5516 ", "6522 3614 2934 2581 6217 7526 6884 3211 4218 9259 ", "5044 6421 6513 2335 9184 23 7165 7252 2262 8176 65", "05 8630 7644 3823 3294 4982 7432 1490 4918 9983 97", "36 6092 4411 8055 5691 2466 6990 1940 5171 1427 52", " 6818"};
    vector<string> blueX = {"1506 5691 4986 9105 8401 9130 2210 832 2108 5542 5", "073 2647 46 3137 1067 4347 2468 1388 5762 8269 226", "9 9661 6528 3596 4746 4700 4656 2794 9048 6696 898", "6 3868 5638 8087 2394 4683 1909 2490 5163 2456 926", "0 9998 2181 9037 4165 7231 975 5246 1880 5847 5491", " 7662 1969 7237 5422 5133 4928 2504 6384 1823 670 ", "1082 9174 6632 8887 5850 9409 1652 4120 5265 3650 ", "3027 821 7270 6133 4465 2327 7182 8407 9300 2977 7", "563 2694 5230 5294 3877 5300 9875 7065 6502 1510 6", "788 5433 3438 2335 7786 8454 8455 2516 3454 2940 3", "683 8460 7172 4619 7986 3238 6296 9736 3456 7937 6", "260 1435 3326 3203 279 7298 9494 4673 9865 8744 36", "24 1822 8189 3528 9081 5684 8650 3411 9255 9918 97", "19 7125 6348 5856 8834 3429 5693 1750 5629 7739 25", "30 5530 4933 7388 6785 7311 3569 1264 2825 4603 17", "63 7365 209 1918 4572 4889 7884 4517 6145 2686 392", "8 6875 6073 150 7881 2061 5716 1548 5967 1352 225 ", "4300 5922 6568 1617 1105 4295 398 3763 4848 8597 8", "541 4959 5035 65 9569 5726 3443 469 700 7126 4605 ", "3327 350 6916 1631 5237 1297 3490 6120 759 1359 82", "80 6521 1645 6448 9502 7828 9887 3139 7536 8767 26", "60 6376 6922 933 7025 7960 9667 9834 163 8306 6150", " 4744 9752 3283 6234 3610 5864 5329 7412 3013 337 ", "8244 4627 1710 4511 770 505 2812 6779 5637 873 487", "5 5882 3675 8859 4586 5767 6649 2253 8530 4955 537", "2 6692 483 6343 2751 9232 4828 7556 5234 9405 3879", " 4082 3533 421 7919 8893 8817 9187 9422 2126 4087 ", "5363 8712 6750 9271 4758 2526 5829 3319 1 4159 385", "6 9790 2020 785 2512 3140 4824 4904 1183 1912 8178", " 5089 878 9677 4340"};
    vector<string> blueY = {"9550 7194 7698 9043 8607 3965 8429 2147 104 8721 4", "947 9902 2116 9919 9670 7059 4102 9766 6780 3947 3", "352 1111 3528 3112 9459 2204 39 3782 2201 5897 144", "9 5603 898 4491 4169 2699 2289 1068 4747 8635 1522", " 8681 4193 1719 4546 4635 187 5272 6731 1473 1529 ", "3469 6939 2655 4397 5858 4256 4336 5282 8574 4034 ", "8950 9491 5718 4476 6178 1849 9263 1768 639 885 56", "33 951 6553 4470 2534 4570 5547 8568 226 5105 3222", " 1786 3101 5005 4781 8361 3948 2339 6925 1582 9917", " 7375 3530 2320 9250 7621 6472 1700 4026 4858 3200", " 7623 2373 2271 7330 8356 5411 6742 5372 2600 8450", " 4752 8179 7685 8463 9608 3841 8937 3582 7400 2118", " 5529 7781 9256 6360 2087 5447 4173 3034 2688 862 ", "1699 9624 9938 6820 1173 8268 4282 7886 6569 624 5", "051 1526 8345 4529 8571 355 7372 8653 7719 9943 46", "27 6073 3591 6597 846 2160 9997 4653 4831 3436 406", " 6965 4119 6250 6963 213 5053 6478 7185 5391 5773 ", "3106 6708 9482 5037 284 2082 5834 1818 139 7900 46", "37 9041 349 2792 1732 1257 6753 5385 4124 6670 301", "1 2928 696 2809 234 60 9037 3514 4794 204 1657 232", "8 5526 2902 8561 5782 8358 5688 6992 5067 2643 280", "6 5222 9007 4310 5340 892 977 9080 6669 9269 210 9", "963 5723 233 2577 4063 4225 1425 5537 6092 7071 53", "3 5504 7668 931 5559 1693 3016 9903 6056 9166 3479", " 7512 3905 6415 6539 9207 6952 4455 8416 8340 1615", " 8738 8675 4285 6311 8832 8277 3203 5538 7433 1951", " 8529 4229 3867 3343 3065 1602 9936 845 5655 6898 ", "1144 3863 6978 1268 1610 5446 6307 5563 5708 21 76", " 5794 2804 9610 7025 9971 3611 6968 7107 630 4147 ", "3873 6363 9157"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1339929806048;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> redX = {"2357 9019 8450 3241 3203 2573 3693 1266 1820 3767 ", "5494 4743 4750 5916 2277 2408 7877 2285 1390 9917 ", "8673 6258 7491 4654 7510 7735 2666 5693 8494 8370 ", "6394 4867 3705 2189 8367 7142 9092 1812 8324 4503 ", "8492 4192 2638 2265 2125 466 8244 7854 3694 8710 7", "465 7312 4412 7042 5251 6347 3238 7113 7873 370 93", "84 1238 1913 3568 6642 3557 9005 6505 2533 2763 88", "57 5423 5161 9254 5500 3008 3502 7502 8113 1964 17", "73 8667 5449 2468 9977 4049 6534 4398 5496 1654 29", "98 8581 3704 9556 2490 4621 4320 1481 7266 5717 65", "64 1531 5016 517 388 2954 6501 2999 5666 1822 6243", " 7986 8334 4431 8849 1569 2079 452 892 2976 5091 9", "60 1482 1333 7062 1115 3589 2937 4303 8938 6876 64", "6 3186 5987 9600 6351 2593 7821 9458 8781 8149 248", "0 357 7108 4055 5221 5195 6962 2863 5273 7387 2340", " 6788 2276 5444 4740 6706 8192 5084 2514 9802 520 ", "626 3646 9987 6190 6033 2784 8222 73 7141 3220 680", "7 7562 7160 2805 7527 8937 1605 2965 5591 2497 743", "8 7126 159 7652 8985 6456 1628 9820 9093 5183 1103", " 2720 1866 8336 2642 9695 3631 1401 4775 9291 5973", " 4490 1449 1093 9920 836 8275 1090 5317 972 367 97", "03 8879 8731 6870 5094 6652 6725 2038 4724 2053 73", "97 9747 1878 7658 497 5028 3624 6235 831 9214 6969", " 4628 5476 8654 5654 8704 6452 6095 6066 2366 4044", " 4347 9407 9345 9863 1710 1084 465 320 2310 4715 9", "679 7173 7703 3566 3669 3653 1052 3197 8172 6566 3", "976 1302 3527 7813 9722 1713 5437 1979 5342 271 16", "36 6296 8335 9455 1177 7454 8987 6476 8156 5293 18", "56 7687 6215 9158 3554 1004 2879 7487 3342 8467 19", "72 9778 3672 7014 1075 7058"};
    vector<string> blueX = {"4337 1514 5354 8859 1973 2108 7339 7188 704 6521 9", "06 9940 6881 6457 3680 2654 3510 4138 9906 4843 31", "1 1061 5660 8115 1375 3630 4263 9271 660 1677 4842", " 4286 7240 7284 9372 4025 5720 8573 263 6949 2353 ", "6754 3352 3997 3331 760 9123 9882 5710 824 6772 68", "24 2937 4251 6576 5813 6145 5330 7050 6761 1294 80", "32 5873 7709 4194 308 6359 2281 3002 3110 3820 105", "4 1959 8893 6489 8349 9878 7819 4152 1698 9467 605", "4 1424 3760 3869 9492 3503 10 378 4354 3504 1772 9", "163 1857 9821 4500 9891 1614 9966 6400 1329 4668 2", "510 1252 7668 8303 7032 686 8360 3347 1852 5489 34", "4 5371 9369 6343 2035 6173 9846 3646 9155 8334 161", "9 1711 6662 4848 4390 4335 7045 901 7823 3487 8017", " 7073 234 2734 4428 1838 5137 4927 5633 7432 2299 ", "8722 7768 229 6666 2508 1631 9420 3023 873 776 560", "4 1134 4993 9072 9831 2107 2318 1873 621 4169 683 ", "7337 5557 5833 3495 2382 3532 6028 491 2436 3786 1", "51 3660 458 9835 2660 8167 2128 2179 1127 4865 510", "5 3259 9144 7471 8876 9034 1388 4326 1453 3683 748", "5 2827 3560 3431 3958 2809 8897 6475 8092 2160 479", "4 9556 4140 4666 2362 319 3277 2522 6982 7885 4962", " 5166 7071 3403 7663 227 3673 1056 4804 8791 1843 ", "5856 9115 121 6183 4142 1642 2269 2623 982 139 173", "0 3047 2580 4455 3146 4424 6925 6508 4019 2258 737", "3 4242 8819 4674 3960 4990 2624 9426 8794 3384 105", "8 3029 5369 8792 7783 6065 6698 2186 7164 7610 510", "0 7809 7631 1368 2420 6663 3006 9722 8262 9601 169", "1 5124 8766 4641 9871 1492 3432 5174 9927 5395 421", "0 3215 4944 8070 572 2139 3284 3896 8901 3821 1010", " 9331 2164 6709 1808"};
    vector<string> blueY = {"8413 8330 6875 7422 7310 5233 8473 4806 1809 6056 ", "4741 9972 5822 7954 1367 7151 3341 9823 2407 6534 ", "6154 9463 9132 6616 241 3268 2092 4112 8617 9017 7", "074 1532 1005 4530 5805 7320 101 9593 84 3452 563 ", "5106 2008 6399 9961 1476 8578 8502 9945 5189 7564 ", "5180 6980 7120 3068 2304 147 4117 6634 7446 1652 1", "102 3330 1819 6076 6682 8869 1321 7163 4408 2074 3", "538 8862 9105 5810 4412 7261 4737 6905 3386 5988 3", "220 6360 6643 7503 2362 7032 658 2431 3014 945 135", "3 9513 3129 752 3490 1630 7093 5543 6595 7077 7057", " 6734 9725 7827 6681 9735 8338 205 6846 255 9536 5", "909 9793 4785 8782 7703 8244 4370 6312 4186 5621 5", "853 2989 4285 2287 3524 6374 7033 4230 5132 613 87", "12 6340 9952 6361 1917 1627 1090 7293 7998 313 369", "2 7629 4208 1769 6257 3801 6558 405 582 2722 661 7", "718 2818 1822 9668 6870 280 7144 3704 5030 448 400", "2 2144 6416 3906 8547 3745 1361 6465 5094 9641 880", "1 6307 5813 8820 4241 2944 7040 3358 4063 4403 399", "4 499 6073 2013 273 8305 9020 8729 3912 1663 6615 ", "3003 2594 3687 7297 7666 9101 6318 196 5420 889 94", "93 5604 2569 5700 9192 2448 9543 1315 3731 2068 94", "68 4719 693 7224 1395 7129 7116 233 429 1163 9280 ", "6258 3544 877 6348 7415 9870 5569 5366 5133 4180 3", "355 2384 425 3555 9888 3383 372 9364 2299 1337 901", "5 1347 6838 8692 6345 7334 2091 2953 4178 551 7622", " 7455 4891 3421 1910 9219 5173 545 6749 7394 764 1", "409 5727 4643 1974 287 5126 2015 8841 5082 1139 74", "37 9612 3860 979 1087 4475 2090 2538 6459 6700 950", "1 9055 1527 6909 1826 3105 7488 6792 2471 2166 546", "4 2606 4820 2264"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1139735057009;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> redX = {"6198 6196 3577 5351 7628 8295 981 8762 3530 3469 8", "24 2046 8903 7994 4677 5671 4815 900 3685 7000 207", "5 7204 3304 2763 5727 3992 6039 5453 2012 4503 960", "5 9977 134 8178 2468 7631 1471 1123 7587 2113 7330", " 6437 9397 5290 5340 6960 8893 5291 1429 4783 1269", " 1652 2077 2544 3470 1035 6705 3495 8322 3212 6268", " 687 5365 1677 8730 9775 874 4604 5496 8516 4674 3", "895 71 2416 8303 5128 1152 4015 5287 795 8561 8114", " 4515 8894 5061 6955 6951 2980 866 4195 5980 1509 ", "988 2363 8009 1942 7847 8749 945 5584 778 4750 203", "7 3632 1822 9026 186 1898 5317 9036 3653 8554 9560", " 6625 1955 1641 857 4456 7445 7977 3527 1120 5929 ", "3566 5408 4477 4244 8440 2337 2657 3595 9601 3896 ", "5171 5936 5999 9723 9583 1689 822 1505 3898 2749 3", "613 2173 6448 808 9228 3564 2683 2558 1039 9380 19", "06 492 1465 780 236 9162 5065 5915 9359 5756 1041 ", "6136 4426 2216 7225 6016 6011 722 335 6935 7037 89", "46 5464 677 4562 424 5416 7282 5209 5718 4202 444 ", "6396 7771 7452 5444 6505 3999 7755 8298 3611 3706 ", "4742 8493 5684 9776 3217 5844 7689 6327 9849 7226 ", "5226 3145 8366 7940 573 8244 4066 6798 374 6527 50", "21 3876 2964 7194 1133 3018 7784 5522 2241 5081 98", "31 1267 1767 8668 6652 7945 9951 6253 4984 9744 46", "45 4373 484 8429 947 9187 4143 8710 8324 2191 9405", " 5359 5516 4679 7096 8937 707 2808 6867 6084 4205 ", "4537 9868 7573 3623 6656 5662 2419 3103 2664 3296 ", "1164 9296 8938 5678 1156 6473 9176 6962 5741 5513 ", "6425 9918 2354 6410 8862 7352 6509 2887 211 5986 2", "553 7579 4289 7174 9809 1639 5937 7019 8567 4751 1", "39 4353 9409 4380"};
    vector<string> blueX = {"5999 1678 2995 2214 3598 9607 2809 5793 6531 6448 ", "9920 1039 8928 8445 986 4110 8019 4002 7670 6694 9", "906 3371 82 4566 1801 5345 8171 3948 3125 5548 180", "8 492 2271 5365 2562 9130 8840 9175 5420 2721 7454", " 5395 9840 5458 6142 5953 1244 9497 5683 8420 8875", " 6601 9708 6808 1143 2964 1324 2442 7708 8440 75 9", "876 201 8345 7514 211 320 7975 3524 7335 1181 8732", " 2143 839 8195 7188 18 5967 5393 537 1809 7735 665", "9 5178 9043 6529 6981 7957 9262 9490 4749 9335 137", "3 7339 5513 756 5569 1300 9594 7567 286 6680 8295 ", "4600 4416 6444 9833 8382 9832 5681 3303 2463 8836 ", "6947 4044 8251 7978 6991 6823 4487 7233 1025 5071 ", "8077 908 5403 3121 1520 8259 9361 2712 6941 1679 5", "889 5223 2157 1922 2417 1957 5015 3025 5057 9254 4", "82 7424 1823 1746 6648 1112 6169 5893 4278 9191 71", "16 8306 6449 8372 7787 5557 2722 5549 3980 4355 74", "74 4351 5981 4400 4833 161 1380 6205 8927 3070 253", "2 91 125 397 1386 8465 5918 270 1223 3237 6184 317", "2 921 9739 7207 4393 2353 5880 6256 914 5689 6481 ", "3890 1777 287 3589 232 5601 9194 931 3659 2161 302", "2 3833 5717 2416 4554 3163 9441 7073 9614 1948 217", "4 2011 1129 6364 3778 336 8223 2027 5848 6748 2949", " 9345 7673 2523 5867 5719 7861 2631 1229 1584 9937", " 947 6358 9374 8349 4838 2901 5076 2401 7374 1279 ", "8258 6291 1707 728 8285 6893 1021 7002 9409 5225 9", "491 9859 1228 1014 6645 7810 3075 2079 6574 5856 9", "967 4008 9956 4107 4504 7172 4964 6238 28 964 2639", " 6236 4891 8650 7355 1836 7682 395 7367 6062 4771 ", "531 384 188 6013 8771 4969 9660 3965 5877 9754 372", "9 6273 8144"};
    vector<string> blueY = {"4519 3313 9525 1239 7435 3361 8364 3883 1234 2812 ", "7580 8897 7376 5859 4534 9327 4305 9230 3504 9791 ", "2702 944 6289 8166 9272 3193 3321 3390 8773 8454 8", "154 8079 3172 2931 3943 6077 3470 6720 7656 4043 5", "931 1009 4759 445 3230 975 4554 5227 5599 6924 402", "9 129 6339 5268 9691 387 5657 2030 665 1598 4627 2", "546 4223 8106 4047 6341 9396 4972 4961 592 4357 41", "35 5584 8815 9121 4482 1562 7733 1716 7269 8980 80", "60 3549 5249 8634 5551 8799 8862 7983 2194 4889 16", "8 6939 9219 3044 5563 44 4734 310 6313 4757 6198 3", "203 3779 9739 574 212 5190 9865 5079 6960 1333 349", "1 8007 7862 7166 5511 8658 6957 2108 4015 392 6611", " 8489 5011 4491 8497 9870 1260 4507 9903 248 9460 ", "4719 9828 1736 9224 7906 7510 9688 3471 3976 9408 ", "2005 8500 8524 1970 1837 6319 8648 5937 2214 8883 ", "9615 8415 4281 7232 5034 473 3608 685 4797 2116 89", "5 2325 9997 1173 4859 8273 301 4099 5963 4058 3914", " 1353 5364 3937 3539 5971 423 5779 6448 2898 8110 ", "5819 9346 4588 3253 2900 6725 867 7285 409 515 721", "6 3387 5004 7026 8828 1816 9983 8701 3595 5266 993", "8 1937 7413 1191 9689 7389 1986 5777 3161 5661 321", "7 9605 496 5680 2662 150 1630 9780 990 7446 3331 4", "388 3853 9574 1704 2593 3026 7568 1882 6276 4054 8", "691 9929 8748 6768 8522 3574 9136 7315 9134 9644 4", "202 7243 4289 4973 267 5414 8939 6791 2799 4384 59", "19 789 4152 4023 4714 7057 4842 6349 1095 4296 555", "4 2620 8065 486 8003 820 6406 3456 1039 6917 7937 ", "1567 6389 7396 5324 7551 5019 6784 2704 153 8135 7", "69 4329 1244 6591 9337 771 2889 5066 2490 4793 300", "0 5681 9998 5014"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1074211300744;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> redX = {"8051 1841 3765 2394 8066 4545 2965 4806 4235 7090 ", "4199 9192 9680 4469 4033 4061 6525 4614 9793 8295 ", "5577 4930 2882 9625 5195 1765 1310 7263 6454 6625 ", "2289 4634 7571 1562 3093 9401 2250 7423 2271 3491 ", "1388 8995 854 433 3103 4473 1259 1113 3751 3422 12", "57 6933 6414 4224 7306 2049 9248 717 6148 7059 290", "1 7494 2031 2582 3195 4258 3203 9118 16 6271 2866 ", "4784 8729 5619 9935 2762 2850 6929 7594 4573 467 8", "982 9370 8955 9786 7027 6725 7803 4939 1846 511 85", "8 9073 7025 2604 6331 6319 8060 7380 9823 1880 619", "4 5936 5719 7526 8616 4279 4604 9967 5299 8781 998", "8 5378 4295 2751 4532 7630 9735 1946 1 6531 7971 7", "158 5614 821 1134 7408 4595 8763 9946 6511 2039 59", "90 2963 4423 8186 6543 8485 956 4338 4201 7770 988", "6 3024 8102 3332 6163 3741 2294 803 2339 262 1481 ", "7924 6205 9265 8134 1175 5446 3835 4276 2171 5761 ", "1360 69 5032 5066 2966 9779 1832 7261 8919 642 403", "4 5732 1129 8390 1061 6173 9131 7277 9022 2137 353", "4 4140 230 6318 9752 7243 436 5835 9835 7578 9339 ", "8520 9943 885 9837 3039 4454 1926 2606 383 4271 22", "24 4018 4420 5589 3454 4448 8114 3513 5692 2369 78", "69 4032 1102 5016 5927 816 7216 5771 5015 6500 754", "6 5392 1362 8398 1792 5827 521 1468 1796 9219 287 ", "7779 5608 8541 5237 72 5892 1535 9300 5022 3632 43", "99 1031 8601 7471 4980 2786 2833 1976 434 9090 488", "2 7266 9203 4515 192 603 4145 9208 7768 4165 2192 ", "4203 962 4893 4520 6881 8643 9738 6928 8824 3966 4", "511 4230 6223 7690 8012 4587 2483 5903 6711 2923 4", "50 3226 1027 6266 62 368 5834 490 512 415 2733 541", "7 8053 4880"};
    vector<string> blueX = {"1204 2951 186 5209 5524 4118 5087 1343 1548 3178 9", "035 3336 1835 7871 6093 6623 8387 3370 2505 3296 2", "466 9240 6231 4531 7443 1250 4356 261 9072 6178 27", "07 2610 865 2288 6116 4768 7398 5989 6223 4180 199", "6 2016 510 3863 8288 9158 4884 5251 4046 6468 269 ", "5208 2260 65 8195 7612 7880 463 2522 1790 7218 739", "2 5129 987 5319 7252 7013 4410 2420 2624 1260 3906", " 7699 8907 8043 3979 7133 3379 476 3969 2588 5405 ", "7792 1013 2652 1496 661 2703 9437 5810 5188 2702 6", "711 7658 5423 4747 8634 7504 6530 9325 601 3115 36", "69 9872 8503 4712 9975 2058 9707 877 7251 7432 253", "5 9933 3085 2723 3266 2032 5928 9138 2631 8712 144", "4 1062 6554 9363 7761 5747 6905 1785 5364 7983 279", "4 5141 2037 8451 246 2177 4627 7166 9538 2249 2629", " 7737 4838 5042 3486 9941 9773 3540 2411 4241 119 ", "9857 6012 1047 4206 7626 2780 5158 2099 4423 2687 ", "6906 1428 3091 5784 9783 61 6260 8885 2087 7835 32", "22 8597 3377 8905 528 7362 1834 7581 9386 1875 665", " 3901 6114 349 6280 3041 437 4612 4488 3670 2114 5", "866 746 7841 5649 1710 7738 2446 290 637 8999 9227", " 6832 188 8901 3320 7774 4670 9499 8397 9215 304 6", "460 2426 3871 6401 324 8996 990 8753 6605 7083 915", "2 3741 9973 276 5758 7569 9445 6585 7071 9384 7485", " 8155 6780 2589 2844 8228 7760 7026 3757 350 5422 ", "1571 2805 6122 8792 5368 4550 7750 3240 2201 699 3", "2 6216 9940 6022 9677 4158 206 4681 5537 2033 4418", " 6272 6011 8611 7016 7081 9821 2871 4217 666 2602 ", "2717 1262 8454 7554 2628 5024 5947 8363 1728 8974 ", "519 2317 7799 906 4907 443 6581 3297 9992 9785 847", "9 708 3990"};
    vector<string> blueY = {"1262 9956 1735 1556 3767 7744 3670 1017 3285 6186 ", "4431 105 5093 8253 512 8003 8955 5876 6142 9895 43", "30 3326 3279 6373 9361 7218 3621 6496 8757 1260 14", "95 8258 7479 2916 2317 6489 770 5088 2072 4543 260", " 9216 9819 1479 4310 5543 8154 1987 8938 9577 3646", " 6835 6976 9952 6018 3496 3637 6073 3246 1382 5880", " 4923 4461 4999 2554 8679 1005 5853 4802 3883 3938", " 3338 7953 1847 6853 2953 7589 9938 6095 6206 1779", " 3395 3343 7270 6222 5161 8759 6170 6334 449 6621 ", "6312 4913 7980 619 348 9122 5867 9922 4858 7126 31", "29 5871 1915 9875 8470 6550 5730 9515 8988 3147 71", "30 1431 3536 6272 9918 7871 1702 2375 4548 2069 91", "3 393 9862 7537 8086 7344 335 327 4380 8239 9759 6", "581 8066 2961 1451 2904 7756 3886 6276 2446 3692 9", "530 7810 8455 4297 7992 1628 6245 7071 3901 7703 8", "946 7090 5950 8345 7984 1504 3803 441 4715 6099 86", "9 181 3051 4735 1434 2990 6022 2846 4114 8916 3858", " 7845 8274 4698 3432 4899 4653 9782 9396 5542 858 ", "167 873 9561 2449 4563 2929 6542 7119 3676 9010 46", "12 6282 9487 4685 6741 926 7545 8335 2399 1781 675", "7 6010 2157 2917 3718 4846 8641 5475 7422 9537 812", "8 1733 7513 4382 1146 6053 9369 9433 3556 2946 878", "2 6353 3172 2113 9090 8094 5720 6992 8110 7753 470", "8 1851 1340 7115 7400 6059 1390 5415 444 6136 7743", " 7873 1376 2096 8805 183 9359 8606 3836 7750 6198 ", "9394 6954 9478 1598 5441 1154 7852 8742 2771 951 2", "960 3832 8621 8008 4949 270 9755 1018 6986 7294 79", "4 6787 2973 5249 9167 2434 343 7441 5288 1533 728 ", "544 1677 7362 5087 2902 4129 2271 1813 3378 5563 1", "997 391 1553 7452 5894"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1106363278602;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> redX = {"4975 3149 652 3175 9694 6876 5814 3921 5896 5258 1", "404 7178 6763 1281 6248 4864 9917 2244 1297 3806 4", "50 9643 3846 4023 9991 3257 8426 4974 3886 7577 98", "04 3720 8838 1751 9153 8714 8037 7819 3168 8268 39", "73 6191 4746 9199 3321 6050 9573 1066 2971 1926 35", "88 5088 1747 5139 292 8686 9038 1732 7968 2056 704", "5 7138 5683 9023 2929 9054 2981 3926 2286 5694 168", "9 458 4694 2654 6294 5285 6777 4481 5503 36 9641 1", "160 4029 2407 7842 1582 4617 6181 8999 7790 7526 9", "882 9799 5809 7418 3870 2383 408 5661 7746 7369 11", "86 8843 8937 2481 9786 4772 385 3336 353 4146 7486", " 7986 4579 1162 8305 3322 72 8971 3098 1606 4682 7", "060 7959 997 5918 5154 9367 2164 9873 3783 3215 41", "6 4512 2614 9160 7509 7876 8603 9876 9301 7272 392", " 3979 2149 7096 3449 8598 2737 280 7641 4615 3440 ", "3214 2206 8995 4466 6365 9423 9469 614 5103 661 40", "1 8919 9566 367 2441 3974 7247 5376 5167 932 171 2", "884 7984 1542 3131 7024 8345 6203 8496 6118 3081 3", "117 5528 1875 1027 2529 564 7158 6551 2148 5181 80", "58 7171 1118 282 2258 4728 2414 3576 9992 7319 638", "2 507 248 7297 6705 9471 3466 6869 3927 6909 3988 ", "7899 3590 138 3210 159 9605 6853 3324 9478 658 225", "7 8424 2868 3930 773 5359 6984 4773 4499 8916 8548", " 144 8514 8108 1426 1755 7604 1754 9040 9709 5111 ", "3548 3500 6141 7517 939 6471 7309 4280 4200 4983 8", "903 2744 805 1636 9479 686 734 9981 6627 1678 3778", " 5256 9895 5619 226 3734 3105 4380 4100 6198 5076 ", "6692 8046 703 6847 616 6270 8835 1745 9487 354 526", "6 6041 7349 6780 8732 5498 5189 7266 7308 3242 262", "0 2630 5492"};
    vector<string> blueX = {"7315 7989 9664 678 6262 4055 8983 8092 5056 3911 5", "840 1012 4117 6107 8317 9100 2009 8669 1574 8102 4", "654 3512 8420 1272 8775 3138 8938 7538 250 3333 91", "35 9965 2068 1003 6342 4925 4935 6790 2335 4386 69", "75 5098 54 6849 9570 5160 7832 7722 4645 6887 1110", " 9014 171 6433 979 3694 4856 9335 3639 7259 1236 8", "818 6053 2812 7368 75 7322 4818 790 6861 3886 3092", " 672 276 3177 3866 3234 373 5938 7961 2242 8264 45", "34 6292 8453 2235 4740 2563 3402 8015 8120 7132 69", "51 4704 7698 9133 8958 162 7250 491 3579 6311 9363", " 3764 8253 2142 2001 6753 5518 2581 456 536 1665 2", "383 8026 1326 1687 3920 9645 2202 7550 4229 6175 8", "52 6279 9792 4614 1452 8002 6977 9033 6071 2744 87", "85 4788 7395 9669 1848 4236 9628 6288 3790 8736 33", "68 9000 9247 7255 1788 2253 6855 4956 7826 967 610", "8 4803 6402 7959 4715 5559 2125 8537 8459 6241 578", "4 5218 6446 5015 4917 2700 8438 2607 4622 3403 582", "8 4814 923 9819 7851 945 8931 4584 2451 3063 8318 ", "3626 7498 4857 1641 7515 2965 3991 3667 9846 5348 ", "8865 9204 1901 9683 5134 238 583 2860 3740 5691 36", "68 3845 102 5486 9417 3835 2726 815 4169 7184 1844", " 393 7474 3156 3149 8246 3265 2427 259 6796 9552 5", "70 2143 8380 1315 9326 4145 8952 7375 8458 4472 75", "1 3381 8139 4332 3142 6924 5193 6596 6157 2428 818", "2 4570 9528 1976 8531 1885 6195 9191 1777 273 8291", " 594 6923 3828 1603 5868 5123 1365 6449 9498 24 47", "83 2600 19 2995 9526 3096 3120 240 7516 5618 959 8", "201 4432 7615 3114 3518 3476 2449 9263 3937 6265 6", "097 188 1838 6937 5062 1626 9160 8737 2471 2034 59", "19 8169 7120"};
    vector<string> blueY = {"3149 5185 4449 8787 8255 74 1421 5933 1089 9199 76", "5 2126 4626 1742 4796 6711 4487 4230 8942 1117 903", "5 846 9153 8125 9172 8176 2006 1494 6753 368 3033 ", "1815 1183 8061 139 7158 1803 6899 3601 6842 6962 1", "659 7253 2550 2148 5568 9930 2035 1990 6830 686 31", "76 7127 3352 1000 4393 3291 326 4160 1593 9299 650", " 2062 4829 4061 8269 4986 5070 3367 5579 179 4570 ", "4527 4808 3691 2072 6806 5837 8607 2039 7828 4339 ", "5301 5522 2229 3403 2334 1377 1136 695 8682 8488 6", "297 907 276 7659 502 7426 2142 551 9158 7446 2321 ", "4941 5962 35 680 1342 2570 2830 8262 8083 5019 965", "5 6425 7338 6247 4091 2472 5720 2393 9629 1684 960", "1 4565 9489 2124 4922 6103 5403 8736 8231 6750 355", "5 6256 2182 7745 1449 6704 9179 9580 1590 7831 169", " 6720 6423 6954 8392 9786 1143 3883 9935 9766 5083", " 5719 9056 5320 1493 7439 4093 9448 7541 7538 2049", " 387 4060 5055 9273 6159 9390 2964 9820 8121 2486 ", "6860 2781 1523 5422 9989 2097 8688 2390 2050 3199 ", "3810 4031 1919 6989 330 3063 9064 5722 6698 6861 1", "77 8999 8117 2200 9759 831 4478 6376 9331 9332 424", "2 2871 7319 4104 6370 6924 1 1222 8649 652 7092 51", "95 8732 1997 8838 1891 6511 408 253 4756 5604 7354", " 6610 3617 2494 840 5591 6908 612 7228 4132 9164 5", "712 9856 1110 2887 486 7104 59 6084 7697 2907 558 ", "6973 1700 9546 2416 9143 3861 3950 1050 9574 8542 ", "3817 1158 2636 5376 5173 8843 1618 9667 6660 5139 ", "6772 2623 4370 6890 5239 1056 8119 5445 1302 8970 ", "5594 1277 906 9833 5391 6071 2632 7842 400 7265 34", "28 4268 6041 922 6739 693 3725 8143 2798 6802 4775", " 190 6706"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1294963613077;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> redX = {"6647 2891 7257 3156 447 4602 9000 1635 9753 7684 6", "955 2726 1183 9576 2507 8708 9556 9335 9292 1778 8", "617 8567 3874 3254 2172 4883 1116 187 9629 7872 67", "53 9694 8734 6522 4597 9924 7143 1996 1304 126 906", "0 2271 8092 2917 6507 9322 210 8128 9357 8551 639 ", "8533 6073 9639 3456 5403 2359 107 1319 2733 1128 9", "475 496 7355 6167 8628 8053 6155 4220 5314 3801 38", "1 13 8430 9445 1595 8497 7864 894 3039 5027 9365 3", "103 4735 5295 635 7752 8164 6124 5578 9219 2857 94", "94 1525 5502 6398 7975 4542 3034 7275 1665 7375 38", "3 7506 9754 708 698 93 245 135 5460 6439 2713 4291", " 6752 7639 912 666 6832 7686 7054 6082 341 866 194", "8 8666 7329 128 4010 714 8570 3035 6152 5886 626 2", "318 2743 8158 2718 42 8410 6840 9466 9203 9719 267", "7 3518 6912 7526 2379 2357 5985 1928 4144 8572 402", "9 8821 92 2981 1095 7661 5785 5819 6637 4800 2378 ", "5136 6445 4810 7811 5028 5158 6030 7549 9797 8915 ", "9394 7946 2770 4148 4269 1700 6185 3664 5976 9595 ", "4062 2954 5202 7250 385 5788 6202 2547 1868 4444 1", "414 1938 12 7393 9283 2622 1993 7742 6906 2099 286", "0 4027 878 4699 343 4025 6937 667 8879 706 6164 39", "23 5582 2249 3684 1089 2905 7425 164 1020 5056 962", "4 8298 3853 3279 8029 4789 1739 2087 4352 8386 2 1", "415 1605 9198 574 5571 4277 4774 5338 2343 241 882", "6 1455 8933 1523 9568 6363 1475 3780 3536 9903 390", "6 7750 1898 6279 4127 1029 5508 3677 8996 422 900 ", "6655 1873 654 6979 5696 6857 6478 9210 1841 4599 6", "226 3285 9129 6131 7905 2243 902 8446 7405 2537 22", "3 3098 2309 8436 6357 5736 2442 5401 3319 5327 644", "7"};
    vector<string> blueX = {"8506 1380 1862 2265 216 7242 6462 5846 1696 6078 8", "927 5770 6787 4037 9742 4612 3733 1343 8295 5487 7", "906 4211 9501 7492 7512 549 1035 3821 6517 8725 11", "8 4741 6638 801 8225 8267 2136 9898 7548 7636 8023", " 3812 8778 1344 7921 8998 2366 4757 222 834 9506 9", "688 7727 7247 8051 7291 6567 6865 1580 2288 7338 3", "674 7341 9435 6449 5898 6407 3925 4279 9042 983 79", "33 8948 3863 6397 7305 2035 3601 57 3866 6385 8547", " 1521 6605 7077 1925 5824 4414 7399 6252 1422 2696", " 7534 3084 2168 2247 6969 6500 1036 7214 3801 9383", " 3364 2083 8010 6875 9948 3368 6317 2906 4081 6550", " 2179 5750 2249 6498 1608 5002 6121 977 1257 7483 ", "7846 8456 5763 8173 1403 1771 378 3218 9012 407 52", "18 1805 988 478 1621 3307 2354 1811 501 2972 8748 ", "2279 7296 2429 2986 2396 1873 6400 9048 2227 865 2", "904 6932 9346 1595 3997 6535 7720 5138 4407 9158 9", "176 7376 1355 1395 8056 9325 5034 5128 4085 206 21", "0 4738 9780 8994 3802 9040 7243 7959 9928 3138 650", "3 3793 3475 2511 9099 2336 8452 4107 4955 4896 333", "7 1739 9912 2819 909 1272 3798 1333 6223 2297 7531", " 2439 6182 5468 9573 5718 1657 8189 2099 6765 8898", " 1368 163 3350 7950 8184 661 510 3762 4190 8763 28", "49 1866 8961 7610 5739 6999 5011 5735 8066 4859 82", "34 1642 2302 7184 4452 1905 138 5470 6726 7663 697", "3 1147 7024 6042 3935 853 13 1758 7211 5308 4975 1", "539 6384 5648 1091 8737 5201 6430 8678 2064 8549 3", "437 5758 5204 3260 2614 1197 8260 5617 3951 9284 7", "798 2236 9923 4374 1014 5076 7725 6860 8626 7826 9", "878 4433 8981 6352 3609 6237 8094 3697 9008 9311 4", "460 874 9021 2756 2232"};
    vector<string> blueY = {"174 5014 6980 7311 6935 9837 1451 2427 800 7083 66", "13 7997 3984 8681 5187 7801 4064 6395 6890 125 508", "6 1865 9706 5855 8346 7611 4748 6499 7821 6241 715", "7 8006 954 5420 7255 8521 3965 5629 9687 9181 6032", " 2279 1369 3784 9852 6339 2215 1794 2748 9425 2817", " 6111 4028 9925 3598 824 9217 5733 9424 3560 8611 ", "9022 1814 1712 1461 9758 363 8359 630 1106 9803 19", "70 5759 5932 8326 4364 2604 5072 3341 4290 5672 37", "55 4250 30 2816 3201 9500 8669 2218 1138 5199 5407", " 3743 6776 9370 1163 5651 271 2546 5148 4166 4017 ", "7884 7036 578 7373 1504 684 8100 9235 4297 3981 41", "68 3663 7768 6734 222 6880 5913 2450 745 7988 6477", " 77 2933 1074 7222 2363 584 9875 6833 3229 1553 11", "97 2622 8721 8941 302 3691 3004 4697 3905 702 5431", " 5154 112 7777 2580 2472 5223 5544 4667 8977 6433 ", "3870 565 9530 8673 2525 2468 1927 6782 4285 3677 7", "16 1436 1267 355 4932 3907 6683 849 9214 3694 7505", " 6820 6264 1843 7400 4275 1844 9738 2669 6044 3927", " 4427 6470 6140 8768 5160 4356 9594 2038 2980 8232", " 5040 6426 6239 2914 7527 171 2544 3748 9310 232 8", "638 2149 4504 7744 671 4517 6300 4958 2312 1839 98", "48 5497 9157 6285 4957 5919 2240 8663 2298 5480 23", "95 6511 1533 5261 3649 981 266 6266 952 9033 52 66", "87 5180 571 3056 4477 3167 7634 7116 8677 5229 282", "7 6555 2036 9525 7474 7553 1100 9743 4083 1439 641", "7 879 3608 2485 7111 4723 3409 6898 3287 1730 8836", " 6416 4152 4345 7856 7063 6495 6302 9445 7797 2152", " 4080 8798 2922 2203 734 8720 3425 6338 6691 5366 ", "8959 6821 3960 7575 1125 7809 461 7041 8374 1796 3", "123 9476 2834"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1247415629542;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> redX = {"8791 1504 2541 9600 4216 5701 8989 3754 6483 8044 ", "3110 9762 5501 1931 4130 3235 5549 1126 9791 6434 ", "7560 8097 2139 8403 1079 1250 1320 2392 6390 1269 ", "5644 9396 9339 5785 6407 8750 5489 9880 4354 4897 ", "9505 2980 9953 512 1836 156 7204 3991 1367 5054 82", "56 4044 5236 7350 8708 8757 3321 9093 2827 4227 73", "91 6829 9534 4475 4488 1688 3875 7782 4734 1945 63", "58 334 837 3722 6626 5945 6604 5316 827 994 9749 8", "701 5915 2850 3198 3068 1944 8654 7627 88 1983 447", "4 4930 14 671 3979 179 3697 756 9706 1538 3420 235", "0 8549 1826 643 5485 4975 704 3912 5372 9960 4601 ", "6921 4935 5207 6793 118 5642 5059 9537 8576 5239 4", "705 2068 4365 9763 664 2302 9406 6592 6738 6758 56", "94 6585 750 9027 5079 6344 1277 8235 1913 4812 713", " 8645 5045 2335 7578 9913 349 8936 1040 9409 3095 ", "4317 4121 6014 5854 9509 2415 3778 1030 8956 7569 ", "8794 2314 8863 9244 4287 4899 3255 550 9266 3303 6", "92 6007 9652 6891 174 6565 5160 8694 4016 3066 616", "0 5348 4769 6068 4724 356 2055 5705 4465 5455 16 4", "404 493 6763 5313 7590 3617 848 1145 8594 489 7516", " 3629 7369 9965 4648 1321 4417 6421 2367 1058 7633", " 682 3939 6137 322 7376 74 4670 9090 7375 1283 779", "7 5137 2287 150 5715 3241 3119 8330 2517 7803 2432", " 3549 5187 7624 9756 8779 3741 388 6964 3988 8401 ", "6495 2673 2394 5624 6657 6278 5381 8357 7791 6861 ", "1349 7883 2379 4094 2883 2567 6963 8942 4546 5335 ", "5764 962 4033 2999 1001 4014 7625 2475 33 4526 951", "0 262 991 1663 8659 581 875 8139 6318 5420 1766 90", "40 3130 2858 7242 2236 3 8747 6288 6871 9418 6235 ", "9853"};
    vector<string> blueX = {"133 3137 6306 5287 3305 3951 5451 3556 5347 5492 5", "1 2361 8640 4316 1434 4818 1695 1813 2395 579 7077", " 6239 8489 6801 718 1824 1572 9606 1102 241 6667 4", "052 9765 7480 9308 2521 8848 6642 6567 9035 7548 1", "949 6544 65 4022 9375 8211 8606 1550 2023 5106 495", "5 3258 7198 3882 9695 2007 2345 7828 2477 4730 910", " 5527 171 5412 8433 3034 5834 9540 2698 3351 1815 ", "2278 6628 8172 7981 4025 3108 8171 2612 655 1284 6", "529 4954 8701 8219 2499 5874 5419 5236 3122 1749 5", "99 3619 6100 2167 5359 3617 6557 2039 3849 8001 15", "95 3076 6526 6232 3183 1565 9582 1796 4647 8628 95", "84 9577 1557 6795 8806 116 4762 9895 4071 6050 206", "3 4643 8646 2544 6679 4789 6917 2046 6341 6600 281", "1 7706 2190 4651 8652 2709 6337 2548 4123 3971 454", "5 3888 6288 8140 1808 8057 8335 2905 1041 3265 301", "5 7610 1835 2242 4117 9053 3353 8440 5276 4417 558", "3 1723 9628 6458 3414 4824 7735 4145 5885 7045 993", "5 537 1658 7535 3792 464 3999 3426 2922 1405 2647 ", "6246 6719 8574 4745 68 3681 1832 8658 6028 1552 51", "03 5043 7568 5447 7365 8083 6981 8472 4445 3165 71", "95 5750 770 8013 2363 8214 3434 1485 9460 5124 541", "8 9219 8094 7921 6257 354 4650 7553 3690 977 1518 ", "7878 7728 6026 2957 2371 665 2334 9561 6447 3504 8", "153 7253 1677 7619 530 9337 963 5926 6085 148 5895", " 1899 9045 2880 968 1712 5859 3471 5342 7892 6760 ", "8565 451 3243 3566 3895 761 4670 5595 9707 5943 66", "55 4075 6399 7364 1850 2249 9333 9870 4854 2122 86", "0 1990 4491 5431 8602 2028 3310 4645 4709 819 3192", " 9330 6881 9889 4341 7405 5235 5510 5511 1525 3078", " 5387 2642 3490 9636"};
    vector<string> blueY = {"3251 1259 5745 5852 2851 9609 9790 7629 2679 8025 ", "8803 6690 7825 2357 6663 3724 6385 7360 5997 6110 ", "5804 8256 8013 852 2671 8851 5935 2320 9341 2720 6", "435 3666 2292 6908 6302 1108 7118 8101 1695 3487 1", "635 2558 2704 7182 6620 1527 1688 5757 1954 6248 4", "349 5133 6933 8458 5334 2231 953 5602 3727 5098 44", "26 2635 2374 3955 3712 7714 872 5405 1617 579 3297", " 4756 7178 436 4355 4116 7070 3773 1498 4225 715 4", "837 5795 5908 965 259 1416 7601 9768 4935 2182 944", "5 3982 6922 9019 9048 3568 7068 3780 674 1182 6965", " 3500 2754 4227 1254 2060 6336 8410 7975 4705 5247", " 7962 7459 7564 7329 7517 7501 210 1894 7838 957 4", "548 9619 2017 9322 4825 3739 5324 5478 806 6637 46", "11 2081 8784 2185 9634 8298 4713 5104 8547 4617 41", "66 6343 3295 3922 2129 1863 2401 1159 9610 3397 20", "86 6622 2216 1289 3777 3369 6142 6093 4315 8248 90", "00 7636 6551 2103 1716 1876 2548 5557 6766 8657 20", "91 7987 9908 8552 1112 6276 5672 6469 9974 2295 76", "84 7169 9507 4702 7447 2363 2403 9307 1054 8706 30", "56 2502 670 6684 6910 5901 3053 3030 5437 7705 475", "2 7049 8327 7848 5999 6917 3434 1964 7861 8813 521", "6 7296 2868 8974 1753 9378 3301 2925 3978 1170 670", "0 3852 399 4421 7514 1353 284 1958 4829 3220 177 2", "426 370 6378 348 6126 9515 8610 1448 96 1435 7380 ", "1714 4118 941 1361 7149 9166 4629 787 2636 8244 83", "98 8401 5996 361 9203 2127 564 7574 6121 2496 4077", " 2841 8729 9099 4488 3532 4230 241 9935 6493 7538 ", "8893 5845 1677 8385 486 9948 5920 4411 9571 1959 8", "757 364 8283 6786 7458 7334 5057 6972 5510 1161 27", "15 8987 4011 5046 7279"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1285260021678;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> redX = {"8440 2902 7140 6398 946 1898 4783 4663 299 7597 14", "21 8858 44 1461 8204 4955 8850 7247 4198 7109 5606", " 4348 8614 1929 6954 6921 5509 7266 9550 6041 2477", " 1557 9187 9809 1935 218 4807 7535 5407 625 3455 6", "824 8557 9860 9235 877 3375 327 3906 889 6345 7022", " 5863 9162 5039 972 6195 7321 9505 3203 586 9736 2", "693 7676 1050 5079 8659 8804 9909 9090 2569 82 510", "3 5259 831 9345 9251 5343 3637 8558 4913 9752 7992", " 5888 8802 4111 387 1550 9996 5867 8786 9937 6048 ", "4570 2898 8296 273 3371 4645 6930 6287 7494 9169 2", "04 2177 8345 7672 8022 1474 3327 4530 9828 5362 58", "39 7478 1358 9565 2280 164 2312 8514 5020 3602 315", "9 7509 3112 3436 9820 2546 2296 4662 6843 3103 197", "9 7859 4489 5591 6555 4888 5810 7490 3562 8939 407", "3 9699 5688 3725 6122 9934 3200 7106 5419 3588 989", "0 5721 3122 9740 1628 2748 4656 9808 2945 8326 721", "1 4193 491 9867 6313 4216 7389 3849 344 3002 4113 ", "777 9050 8759 6337 7122 5806 7072 7345 5018 7930 8", "73 6953 7860 9139 1056 7789 5424 8568 5251 3812 80", "52 3873 6406 6201 1831 7281 7841 1870 7095 4141 62", "52 2210 1850 1889 645 9519 3405 809 1598 9298 4872", " 6099 7924 5032 2962 2991 9241 7186 464 6095 5379 ", "4069 9817 7361 606 4049 3414 2582 9548 331 5717 67", "66 5085 8616 1884 114 233 5929 762 8766 3274 3230 ", "3417 1321 5479 8712 3936 8322 9691 6400 7173 7417 ", "6181 3533 880 7815 9832 7525 2954 2250 2434 3316 1", "412 6625 2377 7810 49 8177 9460 8890 3426 2811 766", "5 1490 7497 6440 383 434 6274 8891 3897 8050 9065 ", "9228 2144 5435 3206 5432 3788 5096 419 7206 4652 9", "977 5050 2181"};
    vector<string> blueX = {"3985 5943 1584 9104 5572 4418 8361 1460 847 6613 5", "542 8632 9279 1083 5714 3003 1108 2443 9892 1132 5", "362 8415 5521 8162 1015 6211 6306 6908 2697 3416 1", "550 547 1771 5368 3700 7451 6076 1123 2967 1224 27", "81 9528 2085 3262 7005 2640 1830 5104 3379 1221 82", "06 5546 9302 5584 2911 7771 3868 6223 1470 6649 48", "14 6197 4735 3848 436 8443 4672 7462 4450 404 240 ", "1565 5278 623 5786 1372 3661 4341 450 6399 9994 65", "8 5978 394 7282 1585 1185 9573 3390 9824 3545 1441", " 3246 4099 6371 6585 5359 5428 5801 7827 4537 6008", " 2120 1990 4663 8556 4585 4870 5331 6574 4506 1610", " 2621 9384 7485 9711 7832 5880 4876 3109 7218 2299", " 2392 3159 4334 6279 237 3336 8720 6952 355 2537 2", "452 274 4228 9655 3803 9813 9093 7585 5827 8271 25", "78 2823 3761 9947 4075 4494 2366 279 6581 4960 694", "0 5683 9774 7235 9925 9521 3723 9340 7082 4274 717", "8 8104 1127 54 7316 6798 9501 5842 9808 7089 5099 ", "1471 1144 4314 1549 4439 9098 1478 8019 1391 2824 ", "222 4124 4400 383 8815 8257 6323 7044 2678 7534 12", "73 7114 3690 9627 3604 881 9349 8617 5862 8408 384", "0 3671 868 6947 459 244 8182 5575 86 783 2818 1166", " 5803 8610 1241 6167 46 1448 4521 802 2952 525 262", "0 7329 6897 18 19 7019 9459 9485 5958 71 9189 7802", " 7768 5699 5707 43 2144 4561 2694 9923 4352 2419 1", "239 625 703 6258 6434 140 7109 7325 4145 5034 7315", " 8798 4161 251 5293 8409 3629 2946 5093 6287 8006 ", "7699 37 9071 716 7927 9481 7915 2011 7869 3590 876", "0 8612 236 7291 2671 7511 179 1011 1472 5498 3201 ", "6483 3927 889 8928 6470 9127 8378 2459 4547 4610 3", "067"};
    vector<string> blueY = {"433 3591 5562 3355 2882 4933 4626 8177 1366 1543 5", "246 4413 509 2143 5977 5561 9441 78 8966 6492 311 ", "5728 814 2283 2677 3059 3543 3772 3549 562 6293 23", "2 3335 1714 4570 9756 4830 1352 9690 6861 7760 957", "2 5274 2149 8201 7503 8694 2606 8873 1340 5825 970", " 2913 3310 5751 1981 7918 9894 8687 9688 8012 7815", " 3580 8962 8699 89 3571 1284 3311 325 5910 4978 83", "37 5763 4463 2977 4979 2510 3768 4041 4497 5313 86", "47 6281 4467 7217 5656 6642 975 4278 7346 8049 471", "5 918 7883 6124 7552 5888 7703 3687 906 3250 3980 ", "8131 9868 344 8353 1525 352 8034 9893 5887 7708 66", "08 1099 1885 8688 8332 7475 8925 8540 8724 4868 76", "28 4015 1875 6742 5593 58 6108 4044 1625 3842 7394", " 4910 5590 3092 1158 9429 5188 8435 4029 4751 6722", " 8654 2685 9666 9657 1117 1397 4637 5397 6793 4678", " 6330 1596 7483 3554 576 6287 9212 5088 6165 2029 ", "7148 1736 9601 9215 6175 9249 1517 7907 817 996 97", "86 9096 6522 5533 5999 7714 9661 8286 6954 1995 54", "66 9952 103 1975 2324 999 9166 4226 3996 6560 679 ", "8376 7932 506 4409 48 6592 9086 815 9174 5022 9244", " 9260 8579 4662 5139 406 2284 2421 8269 6493 7956 ", "9620 4421 2607 4127 2861 9574 9684 9380 4749 1361 ", "5700 5549 501 7306 6553 5086 5546 656 3471 2928 10", "85 5079 7303 281 6261 8596 8171 266 4616 8692 556 ", "133 3657 6745 5127 1928 6715 5538 8102 5610 7910 6", "10 8667 7069 9950 691 6203 1551 8166 9826 8458 278", "4 7597 2155 5587 5251 8081 9963 888 8041 1168 3054", " 4753 7090 9208 4401 4039 3625 6066 3636 4900 6216", " 2595 8471 6228 9027 4078 3428 981 3900 7603 2969 ", "6763 7604"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1117354746464;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> redX = {"9956 9716 9796 9733 9849 9857 9841 9771 9779 9788 ", "9808 9804 9968 9905 9909 9970 9702 9819 9870 9769 ", "9900 9927 9925 9991 9922 9801 9833 9853 9876 9952 ", "9764 9944 9749 9911 9887 9932 9897 9829 9874 9921 ", "9839 9995 9872 9834 9799 9855 9894 9746 9708 9727 ", "9800 9802 9994 9978 9902 9983 9926 9810 9898 9947 ", "9766 9882 9817 9939 9798 9816 9958 9859 9759 9972 ", "9814 9762 9725 9908 9753 9851 9955 9732 9959 9935 ", "9990 9721 9731 9835 9765 9823 9888 9777 9734 9837 ", "9916 9794 9901 9880 9738 9785 9923 9969 9940 9993 ", "9710 9830 9754 9892 9856 9945 9862 9778 9946 9981 ", "9821 9942 9761 9889 9919 9772 9756 9912 9722 9966 ", "9844 9774 9770 9805 9706 9954 9871 9736 9962 9742 ", "9933 9875 9806 9850 9992 9784 9877 9718 9920 9929 ", "9845 9989 9847 9938 9831 9768 9711 9818 9973 9836 ", "9776 9824 9767 9791 9860 9719 9741 9967 9863 9713 ", "9838 9780 9825 9934 9899 9729 9998 9795 9858 9775 ", "9975 9811 9758 9985 9930 9971 9903 9936 9797 9893 ", "9812 9828 9950 9709 9786 9744 9976 9843 9997 9918 ", "9977 9750 9793 9867 9704 9723 9707 9984 9822 9820 ", "9884 9752 9878 9757 9873 9974 9861 9896 9915 9879 ", "9906 9895 9747 9854 9735 9883 9931 9740 9717 9864 ", "9705 9999 9773 9701 9963 9937 9815 10000 9714 9809", " 9890 9987 9789 9953 9827 9982 9792 9881 9996 9783", " 9826 9910 9790 9715 9941 9891 9979 9917 9949 9980", " 9960 9957 9737 9748 9782 9751 9846 9865 9961 9703", " 9712 9781 9866 9720 9886 9848 9730 9988 9813 9832", " 9907 9885 9928 9807 9943 9986 9840 9724 9739 9755", " 9842 9728 9787 9760 9852 9951 9913 9745 9924 9868", " 9904 9914 9803 9726 9964 9763 9743 9869 9965 9948"};
    vector<string> blueX = {"9702 9978 9757 9847 9764 9766 9802 9791 9804 9979 ", "9751 9836 9732 9784 9799 9815 9824 9852 9985 9805 ", "9777 9958 9774 9896 9871 9880 9950 9970 9850 9786 ", "9736 9887 9889 9962 9772 9841 9902 9924 9864 9823 ", "9901 9787 9932 9739 9971 9888 9976 9959 9837 9845 ", "9997 9769 9923 9749 9846 9946 9874 9973 9936 9738 ", "9963 9795 9915 9775 9956 9754 9995 9839 9711 9782 ", "9989 9905 9707 9898 9975 9709 9771 9919 9849 9809 ", "9778 9949 9705 9922 10000 9967 9867 9872 9734 9828", " 9943 9803 9744 9741 9701 9731 9882 9966 9756 9747", " 9999 9728 9710 9840 9713 9742 9977 9718 9817 9816", " 9881 9748 9991 9981 9911 9716 9811 9820 9759 9937", " 9913 9806 9706 9990 9842 9729 9745 9831 9781 9859", " 9848 9822 9996 9917 9814 9993 9834 9719 9833 9737", " 9968 9939 9826 9893 9866 9722 9863 9735 9964 9942", " 9890 9927 9704 9980 9908 9821 9726 9810 9929 9768", " 9717 9941 9785 9801 9856 9796 9832 9835 9725 9727", " 9875 9858 9829 9740 9708 9770 9994 9800 9906 9951", " 9938 9857 9998 9746 9983 9886 9974 9930 9873 9843", " 9914 9818 9714 9984 9763 9928 9892 9844 9885 9870", " 9910 9965 9753 9860 9894 9783 9948 9934 9752 9986", " 9945 9825 9862 9957 9953 9755 9972 9779 9760 9724", " 9808 9926 9767 9954 9884 9830 9773 9903 9807 9935", " 9788 9720 9869 9916 9730 9758 9851 9947 9912 9899", " 9792 9909 9721 9715 9853 9798 9861 9952 9855 9907", " 9961 9761 9789 9776 9960 9982 9733 9920 9904 9878", " 9918 9931 9883 9987 9750 9868 9933 9969 9891 9812", " 9940 9925 9797 9827 9793 9895 9992 9794 9743 9955", " 9944 9780 9790 9703 9813 9865 9712 9921 9762 9819", " 9765 9723 9854 9879 9876 9897 9988 9877 9838 9900"};
    vector<string> blueY = {"158 37 272 215 294 265 204 10 195 61 63 172 193 23", "2 124 47 234 103 35 233 12 89 95 207 110 259 65 11", " 176 140 192 244 300 80 298 31 256 159 105 223 127", " 219 194 43 88 157 130 235 125 9 225 166 56 270 15", "6 69 114 293 149 49 117 67 169 183 237 45 145 150 ", "91 241 279 230 22 101 42 113 243 54 240 111 104 14", "6 220 50 284 231 51 254 76 8 132 128 296 143 100 1", "82 291 217 226 85 173 81 13 40 18 268 174 44 202 1", "90 262 155 73 238 239 267 59 74 164 248 282 168 28", "7 297 82 137 16 260 200 39 266 58 64 112 286 186 2", "05 216 107 38 242 25 178 249 289 236 28 274 167 26", "3 83 136 161 211 77 154 179 271 252 121 55 102 209", " 197 24 221 131 277 227 228 92 98 218 201 147 264 ", "126 96 210 109 288 224 278 292 23 84 280 188 122 2", " 19 276 62 52 129 191 213 93 257 163 119 5 48 203 ", "153 108 34 185 199 198 68 70 151 261 99 26 290 206", " 20 251 170 29 142 255 46 71 118 133 258 41 196 7 ", "4 33 269 60 152 177 27 181 6 78 15 75 116 285 57 2", "22 139 79 189 162 30 17 53 273 106 134 247 144 245", " 184 212 295 90 66 32 187 97 208 115 165 299 175 1", "60 120 3 14 86 283 123 246 180 275 171 1 21 253 87", " 72 135 36 250 214 141 281 138 229 148 94"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1105416661457;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> redX = {"9830 9871 9942 9911 9709 9888 9979 9922 9924 9713 ", "9754 9827 9895 9743 9740 9978 9925 9731 9997 9998 ", "9825 9984 9721 9747 9889 9701 9735 9933 9748 9898 ", "9880 9771 9939 9878 9770 9817 9981 9788 9976 9958 ", "9921 9760 9932 9781 9711 9916 9716 9884 9821 9982 ", "9857 9945 9848 9860 9876 9742 9717 9782 9859 9985 ", "9775 9808 9864 9836 9814 9904 9831 9957 9863 9991 ", "9753 9923 9944 9773 9720 9903 9930 9872 9755 10000", " 9891 9805 9927 9800 9931 9852 9929 9850 9928 9733", " 9920 9767 9846 9729 9803 9946 9727 9885 9875 9712", " 9894 9726 9897 9786 9802 9749 9918 9790 9734 9994", " 9752 9881 9840 9906 9926 9940 9776 9714 9750 9890", " 9793 9965 9912 9983 9969 9822 9728 9763 9966 9902", " 9769 9953 9935 9853 9794 9818 9768 9892 9952 9907", " 9886 9873 9849 9819 9956 9887 9828 9948 9841 9963", " 9961 9879 9738 9745 9811 9908 9845 9950 9737 9815", " 9847 9968 9851 9792 9795 9990 9715 9936 9959 9870", " 9874 9823 9858 9832 9758 9820 9796 9718 9829 9901", " 9862 9855 9759 9938 9774 9960 9951 9834 9766 9910", " 9730 9762 9842 9739 9806 9784 9703 9724 9778 9783", " 9789 9756 9893 9816 9843 9761 9941 9710 9779 9947", " 9949 9764 9722 9791 9919 9955 9744 9844 9964 9988", " 9751 9980 9708 9807 9975 9777 9839 9868 9787 9798", " 9837 9882 9856 9974 9702 9992 9915 9973 9971 9905", " 9869 9865 9954 9900 9835 9999 9772 9987 9725 9804", " 9801 9934 9972 9706 9861 9797 9909 9719 9707 9824", " 9813 9977 9993 9741 9986 9780 9937 9877 9962 9765", " 9736 9723 9867 9826 9967 9883 9833 9704 9785 9896", " 9810 9899 9866 9705 9917 9989 9809 9757 9854 9799", " 9996 9943 9995 9812 9913 9970 9732 9914 9746 9838"};
    vector<string> blueX = {"9946 9757 9777 9806 9915 9861 9942 9717 9715 9891 ", "9969 9963 9893 9720 9965 9724 9999 9874 9796 9705 ", "9889 9776 9752 9823 9857 9887 9836 9873 9854 9934 ", "9943 9885 9703 9816 9809 9768 9702 9811 9781 9785 ", "9839 9978 9774 9856 9745 9945 9847 9913 9995 9820 ", "9973 9713 9872 9977 9956 9989 9868 9940 9860 9953 ", "9835 9828 9910 9731 9964 9990 9993 9732 9817 9830 ", "9848 9791 9734 9959 9735 9818 9822 9725 9704 9983 ", "9815 9984 9733 9871 9928 9936 9917 9877 9937 9807 ", "9709 9738 9975 9904 9767 9841 9750 9790 9882 9921 ", "9876 9985 9754 9723 9825 9783 9903 9933 9844 9957 ", "9708 9968 9728 9761 9743 9778 9727 9881 9763 9855 ", "9970 9751 9803 9740 9930 9775 9955 9988 9884 9843 ", "9994 9726 9925 9802 9782 9829 9826 9739 9923 9712 ", "9905 10000 9741 9744 9784 9907 9794 9952 9846 9924", " 9948 9766 9997 9909 9972 9810 9954 9793 9996 9863", " 9706 9749 9800 9772 9747 9932 9707 9898 9991 9986", " 9967 9858 9947 9927 9755 9730 9701 9870 9746 9840", " 9980 9769 9831 9960 9958 9786 9853 9832 9827 9737", " 9833 9908 9894 9916 9771 9805 9906 9918 9987 9838", " 9819 9799 9710 9760 9878 9821 9974 9798 9902 9721", " 9912 9834 9759 9714 9941 9814 9950 9914 9850 9911", " 9711 9920 9795 9976 9865 9890 9758 9787 9966 9880", " 9797 9992 9748 9939 9888 9883 9867 9879 9753 9892", " 9762 9729 9813 9718 9859 9944 9812 9896 9982 9722", " 9919 9837 9875 9849 9764 9736 9901 9780 9742 9719", " 9851 9852 9773 9864 9789 9935 9716 9808 9779 9951", " 9869 9792 9895 9900 9922 9765 9998 9756 9842 9804", " 9862 9938 9962 9929 9801 9981 9961 9770 9971 9899", " 9949 9824 9979 9886 9926 9845 9897 9788 9866 9931"};
    vector<string> blueY = {"212 83 95 142 44 131 215 117 37 45 269 251 90 8 25", "8 121 234 181 184 195 82 68 191 89 198 164 273 280", " 254 225 6 192 77 156 218 252 179 239 244 201 128 ", "75 299 116 133 232 169 285 113 293 219 85 291 122 ", "65 134 202 296 278 266 246 98 66 36 197 135 214 20", "0 226 188 217 250 127 40 138 147 207 125 4 14 257 ", "46 282 61 140 1 103 159 47 104 283 52 193 178 32 1", "48 132 263 106 28 25 163 139 208 7 9 51 287 123 34", " 59 88 275 62 162 38 33 190 297 71 11 173 119 238 ", "17 161 149 204 12 146 182 24 2 281 22 189 144 48 8", "1 300 150 15 187 108 101 124 42 67 264 292 27 236 ", "102 175 23 276 158 94 118 143 64 20 256 39 21 84 1", "37 41 115 209 271 206 110 168 223 72 157 277 295 2", "20 171 141 114 129 248 185 279 196 242 240 31 221 ", "35 112 91 228 55 109 18 153 261 97 126 247 290 160", " 26 176 5 230 92 274 268 180 80 99 105 243 298 49 ", "227 57 167 86 183 203 63 216 213 222 136 229 145 2", "70 19 120 194 76 10 267 245 43 233 154 255 87 249 ", "260 13 16 186 235 70 29 170 199 58 224 130 79 60 2", "10 100 205 50 241 262 265 166 96 284 56 211 53 69 ", "107 286 155 74 231 253 54 294 30 177 151 93 272 78", " 172 259 237 174 165 288 73 111 152 3 289"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1052446768569;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> redX = {"9803 9717 9904 9969 9822 9807 9736 9952 9914 9711 ", "9878 9944 9907 9719 9754 9755 9973 9851 9733 9941 ", "9983 9744 9810 9844 9991 9966 9896 9780 9750 9967 ", "9747 9909 9812 9849 9998 9985 9910 9740 9732 9735 ", "9982 9784 9980 9818 9988 9710 9856 9816 9903 9955 ", "9713 9972 9959 9778 9971 9798 9930 9715 9811 9737 ", "9834 9958 9779 9720 9723 9704 9892 9919 9860 9951 ", "9865 9876 9962 9867 9777 9830 9881 9992 9781 9824 ", "9979 9751 9805 9875 9902 9815 9948 9823 9776 9929 ", "9912 9772 9787 9937 9859 9925 9793 9792 9808 9975 ", "9760 9785 9725 9797 9845 9862 9726 9707 9796 9935 ", "9756 9842 9931 9728 9891 9984 9727 9832 9738 9897 ", "9950 9767 9794 9802 9847 9709 9995 9800 9885 9782 ", "9809 9894 9994 9795 9918 9739 9775 9943 9915 9757 ", "9916 9821 9863 9702 9762 9978 9953 9864 9893 9868 ", "9936 9960 9786 9938 9752 9934 9806 9986 9843 9933 ", "9743 9880 9831 9928 9712 9742 9996 9887 9997 9974 ", "9920 9848 9923 9889 9790 9989 9858 9870 9895 9746 ", "9956 9965 9921 9857 9855 9758 9820 9942 9764 9753 ", "9817 9765 9905 9947 9977 9799 9769 9730 9873 9773 ", "9724 9976 9901 9839 9813 9722 9869 9771 9783 9763 ", "9705 9759 9825 9749 9890 9939 9791 9883 9829 9745 ", "9957 9861 9999 9804 9922 9708 9841 9884 9833 9766 ", "9789 9906 9741 9981 9987 9703 9721 9770 9854 9814 ", "9729 9990 9886 9968 9734 9866 9888 9774 9964 9945 ", "9932 10000 9874 9913 9838 9714 9917 9768 9908 9846", " 9900 9836 9835 9898 9788 9801 9706 9877 9853 9954", " 9819 9911 9926 9748 9761 9826 9882 9827 9970 9924", " 9879 9871 9993 9731 9850 9872 9963 9828 9961 9718", " 9949 9701 9840 9716 9837 9940 9946 9927 9899 9852"};
    vector<string> blueX = {"9748 9772 9709 9720 9760 9842 9757 9763 9902 9983 ", "9942 9977 9985 9891 9710 9908 9993 9801 9937 9853 ", "9932 9836 9906 9750 9713 9946 9850 9827 9936 9732 ", "9967 9771 9882 9822 9731 9856 9737 9746 9890 9811 ", "9927 9851 9992 9825 9947 9845 9764 9821 9984 9814 ", "9722 9978 9738 9775 9912 9735 9795 9955 9818 9721 ", "9816 9965 9809 9830 9758 9918 9776 9804 9774 9996 ", "9773 9742 9847 9959 9810 9886 9997 9975 9799 9817 ", "9768 9929 9787 9728 9920 9876 9796 9923 9963 9958 ", "9904 9940 9723 9911 9729 9805 9901 9864 9991 9808 ", "9788 9859 9714 9844 9925 9869 9752 9708 9823 9938 ", "9755 9791 9733 9922 9905 9998 9982 9969 9878 9931 ", "9744 9857 9777 9944 9782 9872 9712 9970 9756 9802 ", "9867 9761 9871 9705 9854 9953 9866 9945 9766 9707 ", "9862 9868 9741 9893 9957 9786 9849 9734 9754 9974 ", "9956 9727 9914 9781 9834 9948 9813 9954 9815 9990 ", "9994 9883 9980 9718 9919 9873 9995 9858 9730 9800 ", "9797 9785 9725 9981 9831 9736 9824 9989 9711 9753 ", "9839 9926 9961 9826 9903 9933 9899 9784 9843 9913 ", "9960 9717 9924 9840 9779 9875 9979 9971 9860 9943 ", "9790 9917 9838 9888 9928 9739 9841 9941 9740 9999 ", "9885 9798 9792 9879 9833 9988 9950 9706 9986 9803 ", "9910 9861 9848 9951 9921 9973 9794 9747 9874 9962 ", "9770 9828 9889 9726 9966 9987 9745 9701 10000 9949", " 9892 9855 9806 9832 9907 9749 9819 9897 9930 9829", " 9939 9715 9702 9812 9783 9762 9759 9820 9895 9972", " 9896 9898 9724 9884 9835 9852 9935 9915 9769 9846", " 9703 9968 9807 9934 9837 9909 9880 9916 9793 9976", " 9865 9863 9789 9952 9778 9767 9887 9716 9877 9900", " 9704 9881 9719 9751 9894 9765 9780 9870 9964 9743"};
    vector<string> blueY = {"114 254 277 152 138 16 58 230 70 97 169 50 10 118 ", "14 229 273 172 117 194 86 15 253 197 293 283 24 36", " 112 223 135 246 132 183 110 198 180 244 217 128 1", "53 9 202 72 139 98 21 296 13 181 12 79 257 220 106", " 206 278 40 156 205 276 271 46 196 216 279 275 166", " 289 104 239 227 19 82 5 191 95 266 272 231 207 75", " 267 101 22 151 124 3 211 133 184 247 53 250 298 8", "0 251 281 149 44 200 187 130 57 93 212 91 176 199 ", "145 167 26 232 121 160 188 219 2 134 233 81 23 287", " 171 209 240 213 269 65 175 225 189 87 248 282 85 ", "142 38 27 1 29 99 108 284 286 31 59 297 127 265 12", "0 73 55 43 69 125 203 41 63 164 290 255 228 60 224", " 234 11 39 96 111 84 25 115 131 148 54 163 35 192 ", "258 49 122 119 294 51 6 243 83 37 150 204 245 109 ", "103 261 47 77 144 218 105 45 94 179 291 236 299 10", "0 235 67 17 123 222 237 168 238 30 162 61 210 34 3", "3 185 193 42 186 154 48 260 107 263 32 295 264 252", " 177 259 241 161 268 102 280 116 300 66 215 274 14", "1 90 74 143 137 92 140 71 174 262 76 62 155 88 182", " 214 190 256 208 270 68 285 226 195 89 288 56 113 ", "147 28 159 126 165 136 8 158 18 242 178 157 170 7 ", "146 173 52 292 4 129 201 20 64 221 78 249"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1125856518236;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> redX = {"9789 9838 9823 9732 9848 9791 9919 9822 9802 9832 ", "9999 9825 9981 9858 9869 9886 9857 9745 9942 9747 ", "9969 9716 9996 9935 9748 9840 9868 9956 9830 9763 ", "9949 9849 9799 9772 9881 9719 9973 9824 9982 9790 ", "9887 9970 9821 9944 9922 9856 9948 9861 9781 9828 ", "9774 9835 9738 9827 9780 9741 9704 9945 9749 9984 ", "9938 9943 9829 9937 9865 9862 9839 9826 9888 9875 ", "9750 9917 9991 9726 9773 9992 9783 9920 10000 9931", " 9871 9913 9892 9757 9925 9900 9855 9954 9901 9907", " 9850 9759 9909 9803 9793 9735 9921 9988 9819 9837", " 9899 9873 9805 9845 9971 9924 9897 9976 9818 9939", " 9754 9812 9852 9914 9769 9903 9804 9958 9752 9989", " 9736 9980 9792 9844 9710 9770 9788 9918 9978 9896", " 9953 9810 9959 9708 9756 9940 9977 9986 9768 9929", " 9961 9997 9847 9885 9854 9702 9721 9761 9753 9975", " 9723 9739 9911 9796 9851 9951 9764 9731 9905 9966", " 9766 9882 9912 9714 9751 9926 9983 9860 9904 9787", " 9779 9987 9778 9934 9814 9846 9834 9709 9775 9816", " 9820 9979 9701 9762 9843 9874 9927 9836 9730 9711", " 9767 9742 9863 9870 9776 9916 9962 9817 9720 9867", " 9706 9908 9884 9968 9831 9894 9877 9728 9906 9744", " 9895 9936 9798 9815 9998 9947 9880 9841 9950 9806", " 9724 9777 9859 9743 9910 9941 9891 9842 9952 9866", " 9771 9923 9795 9707 9890 9932 9995 9964 9833 9972", " 9725 9733 9994 9883 9898 9807 9963 9794 9737 9946", " 9878 9808 9727 9955 9915 9755 9712 9740 9930 9990", " 9879 9813 9928 9853 9786 9717 9722 9797 9715 9893", " 9801 9960 9729 9758 9933 9782 9703 9993 9718 9784", " 9967 9760 9785 9889 9876 9811 9902 9713 9705 9985", " 9734 9765 9974 9746 9809 9800 9872 9864 9965 9957"};
    vector<string> blueX = {"9746 9892 9974 9936 9925 9972 9852 9824 9772 9838 ", "9711 9922 9897 9858 9909 9724 9702 9891 9895 9802 ", "9996 9867 9875 9947 9793 9870 9990 9777 9865 9803 ", "9931 9773 9961 9958 9919 9864 9960 9756 9812 9882 ", "9813 9844 9723 9901 9818 9754 9792 9873 9938 9764 ", "9719 9926 9879 9766 9992 9728 9762 9986 9942 9748 ", "9770 9801 9827 9854 9982 9943 9810 9888 9899 9825 ", "9988 9952 9999 9730 9889 9703 9916 9787 9948 9834 ", "9915 9814 9878 9994 9714 9837 9968 9911 9921 9791 ", "9983 9780 9861 9970 9871 9841 9740 9913 9981 9784 ", "9953 9957 9783 9739 9782 9808 9735 9757 9872 9935 ", "9898 9747 9755 9738 9963 9779 9850 9997 9941 9950 ", "9715 9848 9940 9722 9832 9930 9765 9774 9771 9733 ", "9924 9980 9944 9829 9966 9923 9816 9743 9815 9742 ", "9819 9708 9833 9989 9955 9874 9781 9836 9717 9887 ", "9920 9799 9987 9851 9846 9823 9904 9847 9845 9713 ", "9902 9856 9877 9886 9761 9918 9984 9929 9912 9828 ", "9949 9978 9863 9954 9706 9727 9734 9769 9788 9857 ", "9820 9956 9797 9965 9976 9710 9906 9928 9776 9795 ", "9869 9806 9807 9809 9939 9725 9993 9995 9729 9842 ", "9839 9971 9789 9860 9752 9881 9843 9862 9785 9768 ", "9830 9945 9758 9707 9932 9998 9712 9763 9979 9973 ", "9880 9934 9975 9716 9849 9907 9736 10000 9749 9883", " 9835 9786 9937 9927 9745 9959 9741 9759 9962 9767", " 9704 9705 9753 9804 9701 9732 9985 9726 9969 9796", " 9709 9964 9855 9908 9775 9885 9840 9822 9718 9794", " 9750 9905 9900 9720 9876 9831 9894 9744 9890 9991", " 9866 9731 9903 9910 9790 9737 9868 9721 9933 9805", " 9800 9821 9893 9896 9798 9826 9811 9914 9760 9853", " 9967 9751 9917 9859 9951 9977 9817 9946 9778 9884"};
    vector<string> blueY = {"47 158 17 124 215 39 86 223 43 138 230 292 213 285", " 220 160 159 177 291 114 46 181 271 70 175 189 279", " 252 222 127 126 157 240 199 144 226 296 299 99 63", " 72 78 214 202 27 64 204 283 212 219 269 151 65 11", "2 182 85 48 284 183 241 256 274 129 234 13 36 4 91", " 297 233 101 59 288 209 294 115 173 232 6 154 257 ", "93 162 289 275 135 229 52 146 50 278 143 119 277 1", "61 167 193 195 133 208 68 103 235 25 34 249 265 14", "1 201 76 97 28 69 153 298 35 137 20 185 293 254 89", " 57 42 194 5 258 238 247 109 172 32 164 224 184 19", "8 8 53 131 245 87 84 14 259 75 264 31 300 178 253 ", "156 211 96 73 106 122 18 116 290 273 216 142 58 15", "0 191 38 205 110 140 132 152 192 221 170 250 174 2", "76 11 3 262 21 165 243 81 61 166 190 23 145 136 2 ", "244 134 98 121 29 295 100 45 255 95 33 197 51 272 ", "231 90 88 286 266 104 54 125 16 228 24 251 242 186", " 187 237 239 102 74 94 12 15 210 155 218 40 82 108", " 92 169 270 60 217 30 206 203 22 225 80 188 236 26", "8 139 263 9 7 180 105 248 179 261 118 26 19 287 49", " 196 10 246 107 123 111 267 62 171 260 55 149 207 ", "77 41 280 163 168 117 281 200 83 147 113 44 71 56 ", "67 120 282 176 79 148 37 66 130 227 128 1"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1115796915311;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> redX = {"9742 9763 9914 9904 9780 9718 9936 9880 9999 9762 ", "9732 9796 9802 9885 9833 9784 9813 9821 9986 9862 ", "9805 9858 9753 9752 9869 9730 9804 9887 9877 9891 ", "9733 9727 9945 9809 9749 9713 9754 9950 9794 9868 ", "9706 9913 9870 9872 9851 9723 9739 9951 9882 9900 ", "9853 9935 9846 9803 9989 9871 9940 9861 9998 9878 ", "9743 9892 9825 9934 9958 9810 9702 9769 9714 9761 ", "9981 9768 9828 9799 9919 9901 9884 9886 9758 9815 ", "9740 9850 9717 9786 9953 9759 9976 9997 9866 9772 ", "9928 9827 9808 9725 9922 9915 9721 9903 9879 9918 ", "9800 9977 9893 9751 9755 9745 9823 9789 9881 9774 ", "9785 9962 9812 9807 9948 9816 9933 9978 9860 9719 ", "9941 9875 9790 9741 9756 9779 9767 9708 9973 9874 ", "9957 9906 9852 9847 9728 9873 9995 9974 9931 9760 ", "9726 9863 9838 9704 9841 9781 9797 9831 9715 9766 ", "9925 9968 9964 9876 9778 10000 9990 9746 9859 9818", " 9955 9944 9980 9985 9832 9929 9711 9966 9814 9748", " 9837 9712 9979 9912 9724 9707 9972 9947 9731 9791", " 9954 9820 9836 9994 9843 9734 9773 9744 9917 9787", " 9907 9961 9865 9839 9783 9710 9771 9883 9921 9894", " 9982 9824 9983 9736 9829 9729 9888 9856 9988 9795", " 9916 9991 9959 9960 9992 9889 9932 9967 9842 9782", " 9765 9952 9996 9738 9716 9975 9788 9987 9896 9834", " 9776 9830 9864 9798 9703 9845 9939 9909 9963 9709", " 9848 9923 9817 9835 9946 9701 9897 9801 9984 9910", " 9926 9855 9943 9747 9930 9949 9942 9899 9826 9793", " 9770 9890 9822 9764 9993 9911 9956 9927 9849 9895", " 9867 9735 9924 9775 9705 9920 9898 9819 9902 9720", " 9722 9737 9905 9750 9806 9970 9938 9854 9792 9937", " 9965 9811 9844 9857 9840 9908 9757 9971 9969 9777"};
    vector<string> blueX = {"9961 9818 9991 9762 9756 9949 9942 9785 9953 9777 ", "9825 9950 9879 9871 9729 9780 9881 9962 9898 9757 ", "9983 9800 9915 9924 9846 9892 9977 9810 9798 9926 ", "9736 9927 9813 9820 9938 9837 9841 9765 9746 9997 ", "9890 9941 9725 9795 9814 9740 9830 9763 9994 9855 ", "9701 9888 9832 9741 9853 9944 9840 9768 9704 9724 ", "9805 9897 9815 9791 9707 9979 9985 9883 9794 9788 ", "9708 9957 9928 9745 9731 9868 9951 9775 9952 9735 ", "9764 9738 9772 9782 9709 9796 9877 9822 9816 9858 ", "9911 9842 9742 9913 9993 9972 9739 9733 9839 9884 ", "9955 9867 9727 9774 9987 9986 9902 9755 9948 9792 ", "9737 9982 9716 9954 9767 9784 9844 9921 9917 9790 ", "9823 9939 9959 9875 9895 9851 9873 9834 9970 9909 ", "9826 9973 9964 9726 9808 9723 9869 9850 9802 9931 ", "9978 9728 9761 9787 9918 9849 9838 9864 9969 9833 ", "9809 9819 9882 9885 9960 9769 9916 9804 9812 9835 ", "9719 9903 9783 9786 9914 9981 9811 9829 9998 9848 ", "9966 9771 9828 9845 9734 9793 9945 9992 9907 9910 ", "9751 9748 9712 9706 9865 9797 9999 9995 9901 9854 ", "9891 9862 9806 9996 9720 9930 9705 9781 9984 9947 ", "9912 9831 9744 9773 9919 9779 9860 9770 9932 9965 ", "9886 9759 9899 9747 9863 9856 9922 9940 9758 9801 ", "9750 9937 9935 9963 9799 9889 9988 9990 9766 9857 ", "9730 9976 9836 9971 9827 9824 9821 9958 9925 9900 ", "9967 9946 9776 9872 9866 9936 9923 9732 9847 9904 ", "9975 9715 9880 9933 9894 9714 9803 9929 9870 9874 ", "9722 9896 9760 9934 9861 9852 9718 9887 9749 9878 ", "9702 9817 9717 9711 9789 9943 9876 9974 9956 9843 ", "9721 9920 9905 9703 9754 9778 9908 9713 9743 9807 ", "9893 9859 9989 10000 9968 9753 9906 9752 9710 9980"};
    vector<string> blueY = {"177 132 276 254 208 40 44 170 259 242 87 206 190 1", "8 101 158 147 135 117 251 129 22 114 82 71 249 69 ", "9 246 13 3 41 218 273 241 253 112 228 142 175 123 ", "299 53 80 94 199 289 192 292 100 121 58 187 231 13", "4 143 128 256 210 225 61 56 212 169 172 197 35 162", " 150 226 240 83 207 163 99 50 184 23 211 141 52 23", "9 236 277 229 285 97 27 159 48 4 180 171 38 291 54", " 173 115 15 144 66 28 36 93 98 120 73 102 65 72 29", "7 84 155 34 282 119 145 111 81 279 220 157 224 250", " 25 215 176 203 85 257 89 245 110 45 233 261 70 49", " 60 248 283 95 179 151 214 63 217 247 295 146 148 ", "43 178 126 269 149 156 16 287 160 104 265 79 161 4", "6 130 133 74 188 195 51 152 24 252 75 92 193 12 29", "6 204 223 55 168 8 140 131 127 109 205 300 76 166 ", "200 191 103 59 88 19 194 234 64 278 6 139 219 213 ", "154 244 108 11 17 258 280 37 67 238 235 137 272 17", "4 47 288 5 113 268 255 32 262 77 78 91 183 298 57 ", "39 263 196 266 267 284 106 21 116 293 124 290 202 ", "181 107 31 14 105 232 264 138 167 216 237 270 230 ", "186 209 286 90 118 243 10 20 62 294 42 125 281 96 ", "275 221 189 164 33 153 201 182 29 7 86 198 26 274 ", "271 136 122 1 185 227 30 260 165 2 68 222"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1126805550513;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> redX = {"9988 9993 9841 9729 9910 9765 9735 9796 9983 9953 ", "9791 9952 9832 9898 9797 9717 9874 9902 9782 9778 ", "9895 9941 9951 9889 9918 9980 9926 9929 9793 9881 ", "9758 9820 9743 9922 9907 9999 9749 9890 9757 9888 ", "9842 9801 9995 9725 9845 9780 9805 9727 9774 9792 ", "9847 9942 9739 9789 9975 9977 9994 9928 9981 9722 ", "9959 9772 9744 9707 10000 9930 9730 9885 9799 9723", " 9943 9759 9908 9812 9746 9886 9813 9978 9711 9992", " 9883 9783 9732 9966 9728 9998 9795 9798 9968 9836", " 9971 9867 9868 9804 9829 9914 9882 9742 9761 9939", " 9961 9776 9919 9984 9824 9989 9863 9828 9906 9777", " 9877 9900 9848 9704 9903 9854 9818 9752 9887 9963", " 9850 9720 9827 9764 9972 9931 9784 9823 9986 9785", " 9967 9821 9904 9779 9710 9745 9706 9802 9940 9985", " 9775 9741 9871 9718 9846 9808 9838 9788 9731 9767", " 9869 9766 9770 9849 9938 9894 9733 9872 9843 9936", " 9803 9946 9944 9899 9862 9964 9861 9715 9866 9905", " 9837 9826 9976 9933 9956 9768 9857 9819 9738 9955", " 9787 9865 9945 9748 9809 9769 9935 9948 9760 9755", " 9852 9815 9702 9965 9875 9879 9822 9753 9917 9925", " 9835 9747 9859 9901 9712 9891 9947 9893 9734 9937", " 9737 9714 9840 9756 9958 9701 9844 9864 9721 9979", " 9996 9724 9990 9703 9982 9920 9810 9736 9913 9912", " 9950 9924 9880 9807 9781 9771 9876 9830 9909 9932", " 9997 9833 9831 9897 9816 9856 9896 9969 9713 9991", " 9860 9726 9806 9800 9923 9892 9716 9954 9970 9974", " 9705 9719 9708 9921 9740 9825 9786 9973 9790 9811", " 9834 9839 9853 9794 9915 9870 9911 9949 9750 9763", " 9754 9987 9773 9916 9751 9934 9858 9927 9814 9962", " 9873 9884 9851 9817 9878 9709 9762 9957 9855 9960"};
    vector<string> blueX = {"9811 9764 9818 9846 9866 9927 9861 9969 9795 9921 ", "9916 9912 9780 9794 9880 9950 9870 9757 9750 9828 ", "9963 9958 9798 9791 9706 9760 9830 9876 9892 9991 ", "9833 9850 9783 9923 9708 9868 9947 9758 9788 9925 ", "9747 9784 9732 9776 9881 9910 9987 9931 9722 9746 ", "9785 9922 9781 9954 9736 9772 9813 9976 9944 9857 ", "9726 9906 9801 9827 9997 9834 9935 9917 9704 9858 ", "9844 9763 9942 9895 9859 9848 9768 9988 9741 9897 ", "9862 9928 9825 9832 9737 9718 9865 9933 9770 9983 ", "9920 9961 9959 9855 9911 9714 9914 9837 9824 9775 ", "9981 9765 9939 9979 9853 9932 9808 9907 9974 9887 ", "9701 9720 9964 9905 9831 9930 9971 9966 9888 9845 ", "9792 9778 9799 9779 9797 9840 9883 9836 9913 9716 ", "9728 9711 9814 9929 9891 9805 9936 9918 9919 9742 ", "9838 9863 9762 9973 9817 9873 9937 9989 9878 9777 ", "9733 9952 9871 9786 9769 9804 9924 9946 9821 9953 ", "9849 9812 9703 9998 9978 9702 9835 9882 9809 9970 ", "9943 9787 9715 9729 9710 9874 9744 9803 9829 9738 ", "9843 9894 9990 9984 9752 9806 9852 9994 9985 9864 ", "9735 9767 9774 9713 9860 9749 9810 9872 9756 9945 ", "9705 9915 9807 9896 9761 9879 9717 9782 9967 9740 ", "9890 9960 9938 9965 9854 9962 10000 9773 9712 9992", " 9759 9856 9901 9707 9902 9955 9709 9734 9822 9771", " 9815 9755 9819 9904 9926 9851 9972 9816 9884 9977", " 9800 9909 9986 9869 9886 9796 9908 9745 9725 9877", " 9820 9996 9847 9934 9995 9875 9982 9903 9790 9743", " 9957 9899 9841 9968 9723 9754 9793 9948 9724 9802", " 9823 9893 9980 9999 9889 9719 9993 9867 9885 9748", " 9730 9721 9898 9766 9731 9949 9727 9826 9941 9842", " 9975 9940 9751 9789 9839 9956 9951 9753 9739 9900"};
    vector<string> blueY = {"64 126 142 220 20 57 188 277 263 54 256 51 18 56 9", "6 26 1 14 47 13 7 185 157 246 2 228 164 65 248 165", " 244 258 268 261 192 159 299 110 292 269 202 55 11", "2 72 267 179 178 28 8 143 229 225 215 128 241 52 1", "52 91 175 294 116 201 285 195 293 146 252 219 231 ", "186 245 196 29 170 49 71 260 106 58 82 284 265 127", " 226 34 61 197 281 25 105 151 133 107 207 66 44 28", "2 275 224 296 36 132 45 73 124 59 90 235 62 238 5 ", "283 291 262 210 158 230 97 247 236 67 38 300 206 3", "0 75 69 149 24 80 119 242 286 111 253 138 3 216 48", " 115 40 123 155 53 122 68 266 37 86 125 43 108 109", " 88 84 243 227 290 191 144 270 214 203 99 22 211 2", "17 154 21 50 81 70 98 63 130 264 249 135 193 218 8", "9 200 288 208 251 27 76 114 103 77 4 134 12 223 18", "1 234 276 259 162 120 189 16 168 204 240 212 23 16", "0 10 171 182 173 100 232 87 174 33 213 129 46 117 ", "85 287 17 15 198 74 11 205 194 209 278 250 271 131", " 147 254 92 273 233 141 102 19 297 94 190 9 101 14", "8 42 35 298 39 169 274 280 150 166 237 95 6 221 13", "9 121 153 257 161 172 140 222 113 255 32 60 295 13", "7 145 41 156 180 78 183 187 83 79 289 184 31 177 1", "76 118 279 199 239 272 93 136 167 104 163"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1059252925864;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> redX = {"9786 9724 9883 9706 9981 9832 9725 9845 9791 9788 ", "9847 9992 9830 9935 9887 9821 9925 9912 9930 9958 ", "9839 9857 9943 9880 9794 9862 9793 9896 9872 9886 ", "9868 9823 9816 9750 9905 9827 9876 9942 9759 9865 ", "9806 9974 9947 9704 9987 9807 9923 9867 9910 9879 ", "9999 9732 9977 9902 9891 9998 9722 9748 9903 9740 ", "9710 9738 9714 9721 9960 9707 9951 9892 9888 9895 ", "9885 9813 9881 9894 9955 9836 9989 9971 9949 9805 ", "9927 9907 9705 9783 9734 9808 9782 9800 9785 9937 ", "9914 9936 9961 9939 9870 9764 9803 9911 9834 9957 ", "9737 9852 9991 9853 9824 9753 9814 9733 9755 9917 ", "9964 9778 9909 9864 9985 9952 9796 9944 9967 9978 ", "9763 9986 9702 10000 9842 9926 9831 9742 9901 9956", " 9924 9789 9851 9890 9861 9745 9906 9749 9822 9774", " 9934 9736 9878 9841 9982 9922 9983 9703 9744 9916", " 9723 9840 9802 9938 9798 9758 9931 9850 9761 9787", " 9965 9826 9877 9747 9768 9908 9765 9711 9833 9966", " 9869 9854 9727 9810 9897 9713 9776 9828 9933 9709", " 9941 9729 9792 9739 9945 9994 9962 9804 9781 9975", " 9946 9954 9760 9817 9918 9766 9719 9726 9756 9770", " 9837 9871 9846 9819 9969 9899 9720 9921 9769 9973", " 9970 9701 9735 9715 9773 9775 9993 9997 9856 9829", " 9820 9859 9990 9838 9863 9843 9904 9741 9873 9929", " 9784 9809 9979 9780 9972 9915 9913 9799 9900 9772", " 9919 9948 9984 9752 9844 9893 9848 9751 9980 9731", " 9849 9818 9825 9812 9779 9835 9932 9757 9855 9995", " 9746 9976 9728 9882 9860 9940 9730 9898 9815 9996", " 9866 9963 9959 9858 9797 9717 9712 9771 9884 9762", " 9988 9811 9708 9889 9801 9718 9777 9950 9754 9875", " 9795 9953 9790 9716 9928 9767 9968 9743 9920 9874"};
    vector<string> blueX = {"9745 9926 9934 9947 9824 9955 9728 9758 9809 9737 ", "9932 9780 9765 9748 9852 9856 9989 9992 9836 9929 ", "9702 9861 9751 9750 9974 9705 9964 9985 9872 9769 ", "9874 9884 9786 9967 9827 9711 9796 9981 9954 9999 ", "9743 9713 9723 9995 9835 9998 9914 9846 9712 9869 ", "9849 9724 9930 9815 9821 9736 9788 9830 9853 9703 ", "9875 9755 9953 9782 9722 9789 9903 9838 9949 9832 ", "9880 9965 9951 9882 9939 9988 9808 9801 9762 9774 ", "9772 9858 9848 9866 9968 9768 9834 9781 9959 9894 ", "9833 9714 9804 9962 9984 9865 9752 9864 9956 9822 ", "9994 9945 9749 9922 9897 9891 9987 9993 9923 9826 ", "9837 9760 9710 9851 9773 9996 9927 9910 9887 9915 ", "9908 9818 9907 9921 9991 9777 9924 9844 9767 9952 ", "9719 9878 9732 9997 9794 9983 9842 9734 9784 9975 ", "9972 9941 9805 9813 9733 9902 9877 9933 9793 9701 ", "9775 9860 9893 9960 9766 9770 9904 9948 9726 9783 ", "9935 9889 9785 9754 9817 9911 9946 9803 9704 9828 ", "9831 9876 9886 9912 9720 9820 9709 9977 9963 9753 ", "9961 9888 9854 9802 9916 9841 9718 9913 9970 9990 ", "9717 9806 9957 9823 9799 9819 9707 9800 9938 9980 ", "9812 9739 9943 9731 9892 9847 9937 9730 9982 9901 ", "9862 9890 9969 9816 9895 9896 9810 9738 10000 9931", " 9873 9899 9742 9850 9845 9979 9729 9909 9976 9757", " 9919 9708 9771 9744 9917 9925 9763 9716 9825 9883", " 9870 9936 9791 9811 9829 9868 9906 9721 9885 9741", " 9797 9918 9973 9928 9759 9787 9971 9792 9900 9958", " 9779 9950 9761 9747 9727 9966 9798 9871 9840 9756", " 9855 9859 9746 9839 9706 9778 9795 9807 9715 9942", " 9776 9867 9740 9814 9857 9944 9725 9898 9920 9905", " 9881 9843 9986 9978 9764 9790 9940 9863 9735 9879"};
    vector<string> blueY = {"222 109 281 230 277 77 83 297 219 137 265 246 131 ", "27 168 129 169 1 186 241 78 68 147 160 275 233 138", " 243 256 189 61 291 18 56 62 252 170 128 155 59 13", "2 207 97 149 98 179 263 274 53 276 271 70 38 206 5", "1 40 34 174 157 33 247 103 238 65 25 17 11 232 57 ", "245 20 89 30 173 13 74 14 257 7 90 47 217 134 141 ", "165 92 224 161 42 4 93 184 153 210 104 41 235 164 ", "64 208 113 244 118 158 150 279 2 299 163 213 267 1", "90 259 106 9 63 85 46 268 192 154 196 76 162 130 2", "72 182 114 126 175 111 24 234 290 15 105 84 248 22", "8 193 261 133 44 283 225 251 16 121 205 199 177 67", " 143 136 32 66 214 102 8 5 218 117 29 194 108 125 ", "264 273 75 87 295 99 172 43 86 202 82 49 26 60 221", " 258 240 254 298 178 112 197 209 166 19 260 270 21", "1 116 22 107 216 35 10 237 180 239 236 88 185 95 3", "7 167 269 31 289 231 229 278 96 198 81 156 52 284 ", "135 287 159 50 71 242 72 91 21 300 80 58 123 286 1", "83 215 227 101 293 122 120 212 54 100 201 140 200 ", "262 139 195 144 204 294 110 28 115 255 39 285 148 ", "12 253 191 203 220 282 171 152 3 79 55 73 127 23 6", "9 187 6 296 142 145 146 36 119 292 94 249 250 288 ", "176 266 226 48 181 151 280 223 188 45 124"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1080984211657;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> redX = {"9728 9957 9781 9899 9968 9988 9793 9704 9884 9913 ", "9989 9830 9962 9821 9926 9735 9874 9996 9990 9810 ", "9892 9703 9748 9756 9882 9981 9886 9918 9939 9848 ", "9778 9817 9721 9978 9984 9797 9729 9840 9931 9889 ", "9854 9826 9883 9910 9783 9768 9859 9849 9819 9835 ", "9966 9799 9963 9833 9932 9823 9744 9798 9976 9712 ", "9741 9723 9709 9888 9801 9812 9846 9782 9802 9971 ", "9843 9722 9992 9785 9746 9980 9894 9806 9850 9710 ", "9755 9924 9818 9737 9822 9958 9864 9960 9933 9727 ", "9929 9726 9772 9825 9742 9868 9763 9855 9986 9941 ", "9973 9943 9885 9730 9787 9977 9752 9858 9717 9928 ", "9987 9774 9942 9878 9724 9857 9820 9967 9935 9776 ", "9731 9930 9897 9766 9925 9915 9912 9805 9851 9762 ", "9790 9946 9896 9745 9831 9743 9901 9714 9893 9713 ", "9771 9764 9871 9786 9908 9718 9813 10000 9816 9760", " 9895 9715 9937 9815 9999 9961 9753 9844 9911 9842", " 9909 9779 9949 9869 9955 9777 9804 9789 9754 9879", " 9739 9948 9917 9921 9956 9807 9775 9829 9808 9994", " 9998 9905 9795 9750 9769 9923 9863 9780 9725 9940", " 9914 9891 9877 9866 9985 9702 9953 9922 9749 9900", " 9751 9907 9890 9767 9824 9828 9705 9950 9997 9902", " 9845 9916 9875 9951 9814 9738 9834 9983 9847 9975", " 9837 9811 9964 9719 9734 9979 9862 9974 9993 9853", " 9841 9972 9927 9952 9716 9711 9839 9733 9944 9701", " 9959 9965 9856 9759 9740 9792 9809 9838 9794 9761", " 9773 9919 9906 9945 9707 9865 9887 9803 9936 9791", " 9706 9876 9870 9800 9969 9938 9788 9827 9867 9970", " 9991 9832 9765 9904 9947 9920 9995 9903 9708 9982", " 9860 9872 9720 9880 9852 9757 9796 9836 9736 9784", " 9732 9881 9758 9954 9934 9898 9747 9861 9770 9873"};
    vector<string> blueX = {"9986 9977 9849 9740 9922 9749 9790 9712 9799 9914 ", "9815 9924 9854 9903 9800 9770 9734 9958 9843 9855 ", "9865 9918 9859 9792 9779 9896 9943 9893 9952 9919 ", "9763 9949 9775 9875 9725 9965 9954 9951 9834 9884 ", "9895 9888 9744 9794 9866 9966 9939 9796 9751 9841 ", "9925 9827 9879 9853 9803 9962 9948 9970 9825 9955 ", "9729 9967 9824 9858 9982 9835 9787 10000 9760 9730", " 9776 9933 9953 9788 9842 9852 9892 9846 9757 9704", " 9813 9821 9736 9878 9738 9771 9883 9753 9997 9910", " 9772 9984 9718 9752 9780 9886 9839 9920 9701 9921", " 9944 9833 9988 9981 9748 9721 9709 9728 9941 9762", " 9928 9743 9991 9990 9946 9713 9912 9755 9715 9817", " 9995 9844 9950 9781 9847 9864 9869 9874 9932 9909", " 9911 9733 9908 9887 9719 9703 9862 9759 9702 9782", " 9732 9742 9902 9808 9761 9829 9818 9801 9980 9880", " 9973 9956 9826 9999 9706 9802 9899 9791 9798 9711", " 9861 9809 9851 9737 9898 9974 9766 9739 9708 9804", " 9797 9831 9750 9931 9717 9872 9746 9806 9731 9904", " 9976 9726 9735 9894 9937 9720 9758 9901 9957 9784", " 9890 9836 9975 9707 9979 9971 9807 9863 9857 9942", " 9891 9840 9823 9789 9793 9940 9873 9907 9868 9968", " 9745 9727 9783 9936 9945 9985 9938 9838 9767 9716", " 9723 9930 9764 9795 9996 9917 9969 9778 9871 9961", " 9856 9832 9774 9983 9845 9964 9819 9885 9929 9882", " 9747 9814 9768 9934 9959 9816 9822 9848 9998 9989", " 9812 9963 9926 9905 9741 9850 9927 9913 9754 9714", " 9947 9786 9769 9876 9805 9916 9906 9923 9972 9777", " 9960 9765 9994 9837 9830 9978 9860 9710 9897 9756", " 9915 9889 9867 9828 9993 9987 9935 9722 9724 9773", " 9811 9877 9992 9705 9870 9785 9881 9810 9820 9900"};
    vector<string> blueY = {"19 32 204 177 50 105 3 107 28 168 90 299 34 21 136", " 40 5 156 31 284 69 211 277 261 118 155 224 152 15", "8 290 120 114 199 193 72 170 194 18 225 285 94 113", " 195 146 149 174 159 175 237 223 247 148 140 89 19", "8 236 233 251 127 214 249 30 181 22 71 124 51 17 1", "76 82 123 212 278 143 184 74 42 203 49 200 293 163", " 14 46 227 207 98 151 80 100 296 248 182 246 230 1", "66 208 122 10 243 24 130 289 300 190 245 65 217 17", "3 291 35 220 292 169 25 253 57 222 45 216 125 257 ", "73 215 265 141 81 33 26 268 128 111 7 117 164 92 2", "26 87 205 67 83 264 280 48 250 269 63 38 209 106 2", "19 110 256 95 129 202 115 126 254 104 145 15 86 13", " 297 23 150 157 121 244 68 282 60 56 137 96 231 28", "1 267 43 4 108 54 186 228 263 294 77 144 41 275 29", "8 160 229 171 102 66 70 62 79 52 295 154 97 180 16", "5 274 240 206 239 112 213 197 61 8 262 37 75 36 16", "2 279 221 12 85 270 11 183 232 135 101 178 6 192 2", "34 99 1 88 53 109 252 47 16 283 191 84 235 196 287", " 44 276 260 119 188 20 201 241 242 139 29 266 58 1", "87 210 189 91 258 185 286 9 288 132 39 2 259 93 76", " 167 103 172 272 179 133 116 55 255 142 153 218 64", " 134 27 273 131 147 271 238 78 161 138 59"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1125887476018;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> redX = {"1 2 10000 9999 9998 9997 9996 9995 9994 9993 9992 ", "9991 9990 9989 9988 9987 9986 9985 9984 9983 9982 ", "9981 9980 9979 9978 9977 9976 9975 9974 9973 9972 ", "9971 9970 9969 9968 9967 9966 9965 9964 9963 9962 ", "9961 9960 9959 9958 9957 9956 9955 9954 9953 9952 ", "9951 9950 9949 9948 9947 9946 9945 9944 9943 9942 ", "9941 9940 9939 9938 9937 9936 9935 9934 9933 9932 ", "9931 9930 9929 9928 9927 9926 9925 9924 9923 9922 ", "9921 9920 9919 9918 9917 9916 9915 9914 9913 9912 ", "9911 9910 9909 9908 9907 9906 9905 9904 9903 9902 ", "9901 9900 9899 9898 9897 9896 9895 9894 9893 9892 ", "9891 9890 9889 9888 9887 9886 9885 9884 9883 9882 ", "9881 9880 9879 9878 9877 9876 9875 9874 9873 9872 ", "9871 9870 9869 9868 9867 9866 9865 9864 9863 9862 ", "9861 9860 9859 9858 9857 9856 9855 9854 9853 9852 ", "9851 9850 9849 9848 9847 9846 9845 9844 9843 9842 ", "9841 9840 9839 9838 9837 9836 9835 9834 9833 9832 ", "9831 9830 9829 9828 9827 9826 9825 9824 9823 9822 ", "9821 9820 9819 9818 9817 9816 9815 9814 9813 9812 ", "9811 9810 9809 9808 9807 9806 9805 9804 9803 9802 ", "9801 9800 9799 9798 9797 9796 9795 9794 9793 9792 ", "9791 9790 9789 9788 9787 9786 9785 9784 9783 9782 ", "9781 9780 9779 9778 9777 9776 9775 9774 9773 9772 ", "9771 9770 9769 9768 9767 9766 9765 9764 9763 9762 ", "9761 9760 9759 9758 9757 9756 9755 9754 9753 9752 ", "9751 9750 9749 9748 9747 9746 9745 9744 9743 9742 ", "9741 9740 9739 9738 9737 9736 9735 9734 9733 9732 ", "9731 9730 9729 9728 9727 9726 9725 9724 9723 9722 ", "9721 9720 9719 9718 9717 9716 9715 9714 9713 9712 ", "9711"};
    vector<string> blueX = {"4900 4901 4902 4903 4904 4905 4906 4907 4908 4909 ", "4910 4911 4912 4913 4914 4915 4916 4917 4918 4919 ", "4920 4921 4922 4923 4924 4925 4926 4927 4928 4929 ", "4930 4931 4932 4933 4934 4935 4936 4937 4938 4939 ", "4940 4941 4942 4943 4944 4945 4946 4947 4948 4949 ", "4950 4951 4952 4953 4954 4955 4956 4957 4958 4959 ", "4960 4961 4962 4963 4964 4965 4966 4967 4968 4969 ", "4970 4971 4972 4973 4974 4975 4976 4977 4978 4979 ", "4980 4981 4982 4983 4984 4985 4986 4987 4988 4989 ", "4990 4991 4992 4993 4994 4995 4996 4997 4998 4999 ", "5000 5001 5002 5003 5004 5005 5006 5007 5008 5009 ", "5010 5011 5012 5013 5014 5015 5016 5017 5018 5019 ", "5020 5021 5022 5023 5024 5025 5026 5027 5028 5029 ", "5030 5031 5032 5033 5034 5035 5036 5037 5038 5039 ", "5040 5041 5042 5043 5044 5045 5046 5047 5048 5049 ", "5050 5051 5052 5053 5054 5055 5056 5057 5058 5059 ", "5060 5061 5062 5063 5064 5065 5066 5067 5068 5069 ", "5070 5071 5072 5073 5074 5075 5076 5077 5078 5079 ", "5080 5081 5082 5083 5084 5085 5086 5087 5088 5089 ", "5090 5091 5092 5093 5094 5095 5096 5097 5098 5099 ", "5100 5101 5102 5103 5104 5105 5106 5107 5108 5109 ", "5110 5111 5112 5113 5114 5115 5116 5117 5118 5119 ", "5120 5121 5122 5123 5124 5125 5126 5127 5128 5129 ", "5130 5131 5132 5133 5134 5135 5136 5137 5138 5139 ", "5140 5141 5142 5143 5144 5145 5146 5147 5148 5149 ", "5150 5151 5152 5153 5154 5155 5156 5157 5158 5159 ", "5160 5161 5162 5163 5164 5165 5166 5167 5168 5169 ", "5170 5171 5172 5173 5174 5175 5176 5177 5178 5179 ", "5180 5181 5182 5183 5184 5185 5186 5187 5188 5189 ", "5190 5191 5192 5193 5194 5195 5196 5197 5198 5199"};
    vector<string> blueY = {"1 33 65 97 129 161 193 225 257 289 321 353 385 417", " 449 481 513 545 577 609 641 673 705 737 769 801 8", "33 865 897 929 961 993 1025 1057 1089 1121 1153 11", "85 1217 1249 1281 1313 1345 1377 1409 1441 1473 15", "05 1537 1569 1601 1633 1665 1697 1729 1761 1793 18", "25 1857 1889 1921 1953 1985 2017 2049 2081 2113 21", "45 2177 2209 2241 2273 2305 2337 2369 2401 2433 24", "65 2497 2529 2561 2593 2625 2657 2689 2721 2753 27", "85 2817 2849 2881 2913 2945 2977 3009 3041 3073 31", "05 3137 3169 3201 3233 3265 3297 3329 3361 3393 34", "25 3457 3489 3521 3553 3585 3617 3649 3681 3713 37", "45 3777 3809 3841 3873 3905 3937 3969 4001 4033 40", "65 4097 4129 4161 4193 4225 4257 4289 4321 4353 43", "85 4417 4449 4481 4513 4545 4577 4609 4641 4673 47", "05 4737 4769 4801 4833 4865 4897 4929 4961 4993 50", "25 5057 5089 5121 5153 5185 5217 5249 5281 5313 53", "45 5377 5409 5441 5473 5505 5537 5569 5601 5633 56", "65 5697 5729 5761 5793 5825 5857 5889 5921 5953 59", "85 6017 6049 6081 6113 6145 6177 6209 6241 6273 63", "05 6337 6369 6401 6433 6465 6497 6529 6561 6593 66", "25 6657 6689 6721 6753 6785 6817 6849 6881 6913 69", "45 6977 7009 7041 7073 7105 7137 7169 7201 7233 72", "65 7297 7329 7361 7393 7425 7457 7489 7521 7553 75", "85 7617 7649 7681 7713 7745 7777 7809 7841 7873 79", "05 7937 7969 8001 8033 8065 8097 8129 8161 8193 82", "25 8257 8289 8321 8353 8385 8417 8449 8481 8513 85", "45 8577 8609 8641 8673 8705 8737 8769 8801 8833 88", "65 8897 8929 8961 8993 9025 9057 9089 9121 9153 91", "85 9217 9249 9281 9313 9345 9377 9409 9441 9473 95", "05 9537 9569"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1879439250;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> redX = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", " 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 3", "7 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 ", "54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70", " 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 8", "7 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 ", "103 104 105 106 107 108 109 110 111 112 113 114 11", "5 116 117 118 119 120 121 122 123 124 125 126 127 ", "128 129 130 131 132 133 134 135 136 137 138 139 14", "0 141 142 143 144 145 146 147 148 149 150 151 152 ", "153 154 155 156 157 158 159 160 161 162 163 164 16", "5 166 167 168 169 170 171 172 173 174 175 176 177 ", "178 179 180 181 182 183 184 185 186 187 188 189 19", "0 191 192 193 194 195 196 197 198 199 200 201 202 ", "203 204 205 206 207 208 209 210 211 212 213 214 21", "5 216 217 218 219 220 221 222 223 224 225 226 227 ", "228 229 230 231 232 233 234 235 236 237 238 239 24", "0 241 242 243 244 245 246 247 248 249 250 251 252 ", "253 254 255 256 257 258 259 260 261 262 263 264 26", "5 266 267 268 269 270 271 272 273 274 275 276 277 ", "278 279 280 281 282 283 284 285 286 287 288 289 29", "0 10000 9999 9998 9997 9996 9995 9994 9993 9992 99", "91"};
    vector<string> blueX = {"4900 4898 4896 4894 4892 4890 4888 4886 4884 4882 ", "4880 4878 4876 4874 4872 4870 4868 4866 4864 4862 ", "4860 4858 4856 4854 4852 4850 4848 4846 4844 4842 ", "4840 4838 4836 4834 4832 4830 4828 4826 4824 4822 ", "4820 4818 4816 4814 4812 4810 4808 4806 4804 4802 ", "4800 4798 4796 4794 4792 4790 4788 4786 4784 4782 ", "4780 4778 4776 4774 4772 4770 4768 4766 4764 4762 ", "4760 4758 4756 4754 4752 4750 4748 4746 4744 4742 ", "4740 4738 4736 4734 4732 4730 4728 4726 4724 4722 ", "4720 4718 4716 4714 4712 4710 4708 4706 4704 4702 ", "4700 4698 4696 4694 4692 4690 4688 4686 4684 4682 ", "4680 4678 4676 4674 4672 4670 4668 4666 4664 4662 ", "4660 4658 4656 4654 4652 4650 4648 4646 4644 4642 ", "4640 4638 4636 4634 4632 4630 4628 4626 4624 4622 ", "4620 4618 4616 4614 4612 4610 4608 4606 4604 4602 ", "4600 4598 4596 4594 4592 4590 4588 4586 4584 4582 ", "4580 4578 4576 4574 4572 4570 4568 4566 4564 4562 ", "4560 4558 4556 4554 4552 4550 4548 4546 4544 4542 ", "4540 4538 4536 4534 4532 4530 4528 4526 4524 4522 ", "4520 4518 4516 4514 4512 4510 4508 4506 4504 4502 ", "4500 4498 4496 4494 4492 4490 4488 4486 4484 4482 ", "4480 4478 4476 4474 4472 4470 4468 4466 4464 4462 ", "4460 4458 4456 4454 4452 4450 4448 4446 4444 4442 ", "4440 4438 4436 4434 4432 4430 4428 4426 4424 4422 ", "4420 4418 4416 4414 4412 4410 4408 4406 4404 4402 ", "4400 4398 4396 4394 4392 4390 4388 4386 4384 4382 ", "4380 4378 4376 4374 4372 4370 4368 4366 4364 4362 ", "4360 4358 4356 4354 4352 4350 4348 4346 4344 4342 ", "4340 4338 4336 4334 4332 4330 4328 4326 4324 4322 ", "4320 4318 4316 4314 4312 4310 4308 4306 4304"};
    vector<string> blueY = {"1 33 65 97 129 161 193 225 257 289 321 353 385 417", " 449 481 513 545 577 609 641 673 705 737 769 801 8", "33 865 897 929 961 993 1025 1057 1089 1121 1153 11", "85 1217 1249 1281 1313 1345 1377 1409 1441 1473 15", "05 1537 1569 1601 1633 1665 1697 1729 1761 1793 18", "25 1857 1889 1921 1953 1985 2017 2049 2081 2113 21", "45 2177 2209 2241 2273 2305 2337 2369 2401 2433 24", "65 2497 2529 2561 2593 2625 2657 2689 2721 2753 27", "85 2817 2849 2881 2913 2945 2977 3009 3041 3073 31", "05 3137 3169 3201 3233 3265 3297 3329 3361 3393 34", "25 3457 3489 3521 3553 3585 3617 3649 3681 3713 37", "45 3777 3809 3841 3873 3905 3937 3969 4001 4033 40", "65 4097 4129 4161 4193 4225 4257 4289 4321 4353 43", "85 4417 4449 4481 4513 4545 4577 4609 4641 4673 47", "05 4737 4769 4801 4833 4865 4897 4929 4961 4993 50", "25 5057 5089 5121 5153 5185 5217 5249 5281 5313 53", "45 5377 5409 5441 5473 5505 5537 5569 5601 5633 56", "65 5697 5729 5761 5793 5825 5857 5889 5921 5953 59", "85 6017 6049 6081 6113 6145 6177 6209 6241 6273 63", "05 6337 6369 6401 6433 6465 6497 6529 6561 6593 66", "25 6657 6689 6721 6753 6785 6817 6849 6881 6913 69", "45 6977 7009 7041 7073 7105 7137 7169 7201 7233 72", "65 7297 7329 7361 7393 7425 7457 7489 7521 7553 75", "85 7617 7649 7681 7713 7745 7777 7809 7841 7873 79", "05 7937 7969 8001 8033 8065 8097 8129 8161 8193 82", "25 8257 8289 8321 8353 8385 8417 8449 8481 8513 85", "45 8577 8609 8641 8673 8705 8737 8769 8801 8833 88", "65 8897 8929 8961 8993 9025 9057 9089 9121 9153 91", "85 9217 9249 9281 9313 9345 9377 9409 9441 9473 95", "05 9537"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 84010934475;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> redX = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", " 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 3", "7 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 ", "54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70", " 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 8", "7 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 ", "103 104 105 106 107 108 109 110 111 112 113 114 11", "5 116 117 118 119 120 121 122 123 124 125 126 127 ", "128 129 130 131 132 133 134 135 136 137 138 139 14", "0 141 142 143 144 145 146 147 148 149 150 10000 99", "99 9998 9997 9996 9995 9994 9993 9992 9991 9990 99", "89 9988 9987 9986 9985 9984 9983 9982 9981 9980 99", "79 9978 9977 9976 9975 9974 9973 9972 9971 9970 99", "69 9968 9967 9966 9965 9964 9963 9962 9961 9960 99", "59 9958 9957 9956 9955 9954 9953 9952 9951 9950 99", "49 9948 9947 9946 9945 9944 9943 9942 9941 9940 99", "39 9938 9937 9936 9935 9934 9933 9932 9931 9930 99", "29 9928 9927 9926 9925 9924 9923 9922 9921 9920 99", "19 9918 9917 9916 9915 9914 9913 9912 9911 9910 99", "09 9908 9907 9906 9905 9904 9903 9902 9901 9900 98", "99 9898 9897 9896 9895 9894 9893 9892 9891 9890 98", "89 9888 9887 9886 9885 9884 9883 9882 9881 9880 98", "79 9878 9877 9876 9875 9874 9873 9872 9871 9870 98", "69 9868 9867 9866 9865 9864 9863 9862 9861 9860 98", "59 9858 9857 9856 9855 9854 9853 9852"};
    vector<string> blueX = {"4900 4899 4898 4897 4896 4895 4894 4893 4892 4891 ", "4890 4889 4888 4887 4886 4885 4884 4883 4882 4881 ", "4880 4879 4878 4877 4876 4875 4874 4873 4872 4871 ", "4870 4869 4868 4867 4866 4865 4864 4863 4862 4861 ", "4860 4859 4858 4857 4856 4855 4854 4853 4852 4851 ", "4850 4849 4848 4847 4846 4845 4844 4843 4842 4841 ", "4840 4839 4838 4837 4836 4835 4834 4833 4832 4831 ", "4830 4829 4828 4827 4826 4825 4824 4823 4822 4821 ", "4820 4819 4818 4817 4816 4815 4814 4813 4812 4811 ", "4810 4809 4808 4807 4806 4805 4804 4803 4802 4801 ", "4800 4799 4798 4797 4796 4795 4794 4793 4792 4791 ", "4790 4789 4788 4787 4786 4785 4784 4783 4782 4781 ", "4780 4779 4778 4777 4776 4775 4774 4773 4772 4771 ", "4770 4769 4768 4767 4766 4765 4764 4763 4762 4761 ", "4760 4759 4758 4757 4756 4755 4754 4753 4752 4751 ", "4750 4749 4748 4747 4746 4745 4744 4743 4742 4741 ", "4740 4739 4738 4737 4736 4735 4734 4733 4732 4731 ", "4730 4729 4728 4727 4726 4725 4724 4723 4722 4721 ", "4720 4719 4718 4717 4716 4715 4714 4713 4712 4711 ", "4710 4709 4708 4707 4706 4705 4704 4703 4702 4701 ", "4700 4699 4698 4697 4696 4695 4694 4693 4692 4691 ", "4690 4689 4688 4687 4686 4685 4684 4683 4682 4681 ", "4680 4679 4678 4677 4676 4675 4674 4673 4672 4671 ", "4670 4669 4668 4667 4666 4665 4664 4663 4662 4661 ", "4660 4659 4658 4657 4656 4655 4654 4653 4652 4651 ", "4650 4649 4648 4647 4646 4645 4644 4643 4642 4641 ", "4640 4639 4638 4637 4636 4635 4634 4633 4632 4631 ", "4630 4629 4628 4627 4626 4625 4624 4623 4622 4621 ", "4620 4619 4618 4617 4616 4615 4614 4613 4612 4611 ", "4610 4609 4608 4607 4606 4605 4604 4603 4602 4601"};
    vector<string> blueY = {"1 33 65 97 129 161 193 225 257 289 321 353 385 417", " 449 481 513 545 577 609 641 673 705 737 769 801 8", "33 865 897 929 961 993 1025 1057 1089 1121 1153 11", "85 1217 1249 1281 1313 1345 1377 1409 1441 1473 15", "05 1537 1569 1601 1633 1665 1697 1729 1761 1793 18", "25 1857 1889 1921 1953 1985 2017 2049 2081 2113 21", "45 2177 2209 2241 2273 2305 2337 2369 2401 2433 24", "65 2497 2529 2561 2593 2625 2657 2689 2721 2753 27", "85 2817 2849 2881 2913 2945 2977 3009 3041 3073 31", "05 3137 3169 3201 3233 3265 3297 3329 3361 3393 34", "25 3457 3489 3521 3553 3585 3617 3649 3681 3713 37", "45 3777 3809 3841 3873 3905 3937 3969 4001 4033 40", "65 4097 4129 4161 4193 4225 4257 4289 4321 4353 43", "85 4417 4449 4481 4513 4545 4577 4609 4641 4673 47", "05 4737 4769 4801 4833 4865 4897 4929 4961 4993 50", "25 5057 5089 5121 5153 5185 5217 5249 5281 5313 53", "45 5377 5409 5441 5473 5505 5537 5569 5601 5633 56", "65 5697 5729 5761 5793 5825 5857 5889 5921 5953 59", "85 6017 6049 6081 6113 6145 6177 6209 6241 6273 63", "05 6337 6369 6401 6433 6465 6497 6529 6561 6593 66", "25 6657 6689 6721 6753 6785 6817 6849 6881 6913 69", "45 6977 7009 7041 7073 7105 7137 7169 7201 7233 72", "65 7297 7329 7361 7393 7425 7457 7489 7521 7553 75", "85 7617 7649 7681 7713 7745 7777 7809 7841 7873 79", "05 7937 7969 8001 8033 8065 8097 8129 8161 8193 82", "25 8257 8289 8321 8353 8385 8417 8449 8481 8513 85", "45 8577 8609 8641 8673 8705 8737 8769 8801 8833 88", "65 8897 8929 8961 8993 9025 9057 9089 9121 9153 91", "85 9217 9249 9281 9313 9345 9377 9409 9441 9473 95", "05 9537 9569"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 5526217417500;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> redX = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", " 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 3", "7 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 ", "54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70", " 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 8", "7 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 ", "103 104 105 106 107 108 109 110 111 112 113 114 11", "5 116 117 118 119 120 121 122 123 124 125 126 127 ", "128 129 130 131 132 133 134 135 136 137 138 139 14", "0 141 142 143 144 145 146 147 148 149 150 10000 99", "99 9998 9997 9996 9995 9994 9993 9992 9991 9990 99", "89 9988 9987 9986 9985 9984 9983 9982 9981 9980 99", "79 9978 9977 9976 9975 9974 9973 9972 9971 9970 99", "69 9968 9967 9966 9965 9964 9963 9962 9961 9960 99", "59 9958 9957 9956 9955 9954 9953 9952 9951 9950 99", "49 9948 9947 9946 9945 9944 9943 9942 9941 9940 99", "39 9938 9937 9936 9935 9934 9933 9932 9931 9930 99", "29 9928 9927 9926 9925 9924 9923 9922 9921 9920 99", "19 9918 9917 9916 9915 9914 9913 9912 9911 9910 99", "09 9908 9907 9906 9905 9904 9903 9902 9901 9900 98", "99 9898 9897 9896 9895 9894 9893 9892 9891 9890 98", "89 9888 9887 9886 9885 9884 9883 9882 9881 9880 98", "79 9878 9877 9876 9875 9874 9873 9872 9871 9870 98", "69 9868 9867 9866 9865 9864 9863 9862 9861 9860 98", "59 9858 9857 9856 9855 9854 9853 9852 9851"};
    vector<string> blueX = {"4900 4901 4902 4903 4904 4905 4906 4907 4908 4909 ", "4910 4911 4912 4913 4914 4915 4916 4917 4918 4919 ", "4920 4921 4922 4923 4924 4925 4926 4927 4928 4929 ", "4930 4931 4932 4933 4934 4935 4936 4937 4938 4939 ", "4940 4941 4942 4943 4944 4945 4946 4947 4948 4949 ", "4950 4951 4952 4953 4954 4955 4956 4957 4958 4959 ", "4960 4961 4962 4963 4964 4965 4966 4967 4968 4969 ", "4970 4971 4972 4973 4974 4975 4976 4977 4978 4979 ", "4980 4981 4982 4983 4984 4985 4986 4987 4988 4989 ", "4990 4991 4992 4993 4994 4995 4996 4997 4998 4999 ", "5000 5001 5002 5003 5004 5005 5006 5007 5008 5009 ", "5010 5011 5012 5013 5014 5015 5016 5017 5018 5019 ", "5020 5021 5022 5023 5024 5025 5026 5027 5028 5029 ", "5030 5031 5032 5033 5034 5035 5036 5037 5038 5039 ", "5040 5041 5042 5043 5044 5045 5046 5047 5048 5049 ", "5050 5051 5052 5053 5054 5055 5056 5057 5058 5059 ", "5060 5061 5062 5063 5064 5065 5066 5067 5068 5069 ", "5070 5071 5072 5073 5074 5075 5076 5077 5078 5079 ", "5080 5081 5082 5083 5084 5085 5086 5087 5088 5089 ", "5090 5091 5092 5093 5094 5095 5096 5097 5098 5099 ", "5100 5101 5102 5103 5104 5105 5106 5107 5108 5109 ", "5110 5111 5112 5113 5114 5115 5116 5117 5118 5119 ", "5120 5121 5122 5123 5124 5125 5126 5127 5128 5129 ", "5130 5131 5132 5133 5134 5135 5136 5137 5138 5139 ", "5140 5141 5142 5143 5144 5145 5146 5147 5148 5149 ", "5150 5151 5152 5153 5154 5155 5156 5157 5158 5159 ", "5160 5161 5162 5163 5164 5165 5166 5167 5168 5169 ", "5170 5171 5172 5173 5174 5175 5176 5177 5178 5179 ", "5180 5181 5182 5183 5184 5185 5186 5187 5188 5189 ", "5190 5191 5192 5193 5194 5195 5196 5197 5198 5199"};
    vector<string> blueY = {"1 33 65 97 129 161 193 225 257 289 321 353 385 417", " 449 481 513 545 577 609 641 673 705 737 769 801 8", "33 865 897 929 961 993 1025 1057 1089 1121 1153 11", "85 1217 1249 1281 1313 1345 1377 1409 1441 1473 15", "05 1537 1569 1601 1633 1665 1697 1729 1761 1793 18", "25 1857 1889 1921 1953 1985 2017 2049 2081 2113 21", "45 2177 2209 2241 2273 2305 2337 2369 2401 2433 24", "65 2497 2529 2561 2593 2625 2657 2689 2721 2753 27", "85 2817 2849 2881 2913 2945 2977 3009 3041 3073 31", "05 3137 3169 3201 3233 3265 3297 3329 3361 3393 34", "25 3457 3489 3521 3553 3585 3617 3649 3681 3713 37", "45 3777 3809 3841 3873 3905 3937 3969 4001 4033 40", "65 4097 4129 4161 4193 4225 4257 4289 4321 4353 43", "85 4417 4449 4481 4513 4545 4577 4609 4641 4673 47", "05 4737 4769 4801 4833 4865 4897 4929 4961 4993 50", "25 5057 5089 5121 5153 5185 5217 5249 5281 5313 53", "45 5377 5409 5441 5473 5505 5537 5569 5601 5633 56", "65 5697 5729 5761 5793 5825 5857 5889 5921 5953 59", "85 6017 6049 6081 6113 6145 6177 6209 6241 6273 63", "05 6337 6369 6401 6433 6465 6497 6529 6561 6593 66", "25 6657 6689 6721 6753 6785 6817 6849 6881 6913 69", "45 6977 7009 7041 7073 7105 7137 7169 7201 7233 72", "65 7297 7329 7361 7393 7425 7457 7489 7521 7553 75", "85 7617 7649 7681 7713 7745 7777 7809 7841 7873 79", "05 7937 7969 8001 8033 8065 8097 8129 8161 8193 82", "25 8257 8289 8321 8353 8385 8417 8449 8481 8513 85", "45 8577 8609 8641 8673 8705 8737 8769 8801 8833 88", "65 8897 8929 8961 8993 9025 9057 9089 9121 9153 91", "85 9217 9249 9281 9313 9345 9377 9409 9441 9473 95", "05 9537 9569"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 5600896031250;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> redX = {"4295 3313 2036 1500 2953 4325 2936 690 1237 2388 4", "387 3136 4598 847 2054 3245 3846 3323 2432 436 488", " 4741 4999 1318 817 2869 3372 3976 3610 1260 5022 ", "4970 3266 314 3926 1991 3541 1624 5053 3966 4719 4", "833 4806 3402 3208 3089 245 2244 3336 2403 30 4534", " 4427 2427 1527 441 2825 5048 243 4170 1289 566 10", "38 5215 3491 640 744 797 3366 2109 5204 3052 2499 ", "3305 5066 1794 477 212 3590 461 5148 2994 1512 457", "4 1558 1131 4405 1147 1813 2343 1728 3529 2488 256", "6 3114 3023 4516 4460 155 64 948 2633 422 536 1674", " 2361 182 1110 227 3861 3643 620 1973 4904 720 323", "2 3764 3891 5016 1943 4942 4206 2911 1765 3358 318", " 2744 5120 1404 4097 4723 767 2160 3238 3919 5229 ", "4453 2749 3817 1862 2482 3429 3948 3081 3534 3681 ", "4660 4235 520 3640 4488 3784 1926 2457 2223 394 43", "67 1420 635 3660 4118 360 2302 117 4347 1430 4771 ", "3146 978 4199 417 274 1474 334 1927 2413 4261 1568", " 3009 1458 3569 4276 482 3508 3456 2663 2550 4930 ", "3721 125 989 1291 4142 2710 3452 598 668 696 2971 ", "1600 1970 1891 2983 1177 1060 3769 1702 1661 3046 ", "94 3159 3800 3289 593 4071 2893 2897 1395 4002 490", "5 2677 4953 2090 4044 4769 4796 4546 3699 2698 454", "1 4863 2840 2784 4689 51 3876 1211 4642 2174 1336 ", "364 1632 1546 401 4030 2590 2133 1907 5207 4046 28", "19 1802 100 3389 1015 3958 1384 895 1593 4881 4625", " 2802 872 4351 271 3462 982 495 2172 2062 1716 421", "4 2609 2775 530 1360 2274 3186 2199 2330 1203 1090", " 299 5189 2019 5096 2636 3425 1987 3936 1836 1744 ", "925 4622 2520 2720 3757 3749 4835 5171"};
    vector<string> blueX = {"2525 2263 311 2926 1196 1031 834 2891 4003 177 331", "6 880 128 1145 1882 3307 426 573 3798 587 294 197 ", "2412 2037 3764 1840 3580 1409 1168 1997 3435 2115 ", "3951 2869 3866 750 535 1787 4059 3894 908 2149 157", "2 2720 2865 182 2939 1450 54 2229 2320 3249 57 366", " 3624 2049 2797 266 951 2075 2279 4082 3018 2678 1", "627 3452 3566 2790 4055 1987 3225 3377 3273 3410 3", "517 2554 3687 1759 2734 1431 3163 3715 2346 1711 2", "664 1906 245 2024 969 600 2899 1755 796 3976 3926 ", "86 1256 4194 98 493 1878 4234 1847 3974 1485 1670 ", "1644 916 2639 536 1517 386 2553 1455 3961 3587 236", "0 3769 4295 2988 3206 3991 151 1258 3078 3919 292 ", "531 218 2055 1056 3643 3362 1125 1814 1586 1675 96", "6 442 2614 2716 28 4038 1302 1368 2702 3481 2745 1", "917 1048 2458 2235 856 3525 4104 1887 1850 2577 30", "25 512 806 3345 2280 2390 936 650 604 2430 3565 20", "38 4122 343 779 630 1284 3184 2219 2846 3131 1471 ", "1679 2850 141 1712 1740 1716 3153 673 1313 4183 12", "24 730 2468 4267 1253 399 2298 2756 1934 3049 2962", " 1317 2464 3860 1696 1871 4214 1560 3531 2179 1360", " 111 1540 1072 3036 1613 1553 3486 1797 4251 3744 ", "185 4127 1090 2072 2052 1319 2593 1958 1380 1406 1", "009 765 850 802 992 2821 954 3671 2032 1803 353 14", "39 2457 658 720 1147 2735 1832 2198 3718 4153 1515", " 3560 1685 3401 3120 3104 2531 3432 397 3675 3050 ", "571 4242 4031 2766 3510 1295 3285 358 3470 4080 43", "15 2104 2931 2125 1052 205 3601 691 3708 979 238 2", "362 3739 774 3837 2909 3818 882 3472 2496 563 471 ", "2723 1615 1337 1111 319"};
    vector<string> blueY = {"4005 603 778 127 578 3105 1114 3237 3935 130 936 1", "59 2428 1802 1084 3711 349 4263 1149 2389 3283 386", "5 3059 1866 4472 3825 4373 2292 2301 2243 4102 149", "6 4347 1818 2763 1413 3408 2314 1561 1349 3625 238", "2 1465 3206 949 4401 720 2941 2561 3001 545 3239 3", "853 2491 2189 295 2495 3659 1977 418 1195 3380 104", "3 1794 1301 252 2537 2246 2993 1495 1026 1600 2997", " 3350 3485 1677 2041 3209 805 2513 472 2631 2199 1", "199 1964 2398 707 1583 2439 2260 4231 2167 3385 31", "51 3374 1959 2455 2224 2675 2716 4313 1369 4257 72", " 4196 226 3121 2571 3505 1224 1624 2077 46 4574 39", "3 4050 509 1403 1484 2286 3648 999 879 2790 26 172", "1 1567 3814 4288 2663 4675 1985 4720 3305 749 2825", " 3778 971 495 2342 2359 2378 367 198 2350 2864 443", "4 816 2914 4451 4503 1042 314 2582 4647 3539 3594 ", "3210 4485 2586 752 3031 4420 2753 1211 4460 3613 3", "530 595 3895 3218 1251 1672 2734 1735 1838 3682 21", "04 1902 4147 2699 364 4515 2507 2687 88 1828 1171 ", "667 4404 3801 3088 932 2154 4187 4539 543 4118 548", " 3862 1072 4336 2579 3526 4031 644 2820 3570 1765 ", "96 2640 4170 106 3638 322 3975 1241 1833 2133 695 ", "1521 4058 2968 1276 2481 1216 3915 4330 2604 1532 ", "754 277 1425 1578 3976 3410 2957 861 4615 4312 453", "5 1885 3753 2651 2060 2347 3294 3604 4211 908 2718", " 3550 4701 3747 3733 2290 3317 441 94 2884 4041 85", "4 1443 2838 3254 2012 1469 1931 4368 3179 4644 448", " 4083 2262 1234 3422 3473 4604 4569 1129 1900 1701", " 2992 168 3952 1388 1321 2804 530 1652 4576 4590 3", "447 828 1032 121 3685 4354 626 3335"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1524336029258;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> redX = {"47 106 101 130 224 149 283 53 81 267 131 39 200 14", "3 138 139 145 258 248 63 180 197 19 161 88 261 260", " 264 11 84 116 133 91 40 30 87 208 167 56 204 246 ", "49 194 72 207 228 21 187 75 9 250 113 216 86 95 8 ", "71 238 36 147 76 4 288 23 171 205 44 64 213 65 210", " 157 286 191 85 46 80 107 24 263 166 124 14 245 25", "3 190 62 175 99 215 233 284 221 110 35 257 119 137", " 195 42 68 281 141 100 7 184 278 126 43 2 169 140 ", "128 13 206 230 214 189 18 150 199 5 274 12 152 117", " 293 144 134 203 16 160 6 109 55 89 219 78 31 198 ", "223 231 83 41 142 77 164 59 153 22 280 247 244 45 ", "241 183 25 92 57 269 52 61 136 186 188 51 271 34 2", "12 165 155 237 27 146 277 178 292 60 173 90 211 98", " 259 299 129 181 285 67 291 179 93 122 229 170 209", " 227 296 236 82 235 3 108 1 15 176 158 217 255 114", " 234 225 174 20 50 279 148 239 201 70 294 115 202 ", "251 79 132 182 252 254 297 74 168 32 121 226 273 1", "96 94 287 123 104 242 193 276 270 26 185 290 111 2", "65 172 28 249 192 127 17 33 275 135 289 105 298 15", "6 163 96 66 266 118 300 54 48 69 102 268 112 73 17", "7 295 151 222 10 218 97 58 256 125 29 162 272 243 ", "159 103 38 240 120 262 282 37 220 232 154"};
    vector<string> blueX = {"130 45 79 167 48 50 208 270 94 88 6 153 89 93 232 ", "144 91 195 294 128 9 264 141 276 15 113 105 26 151", " 27 209 254 212 159 299 115 188 249 85 177 87 135 ", "21 12 216 96 41 86 171 181 278 59 246 192 84 129 7", "0 231 269 4 103 240 238 133 76 266 137 168 173 290", " 32 214 5 218 46 147 182 78 245 160 282 271 18 215", " 74 179 279 119 292 102 275 127 201 82 22 222 228 ", "62 61 229 29 126 287 25 189 162 248 233 114 145 22", "7 13 142 196 121 31 180 184 131 169 175 107 92 244", " 277 80 176 14 24 235 118 124 185 140 211 207 117 ", "170 10 236 250 37 260 42 165 268 257 58 243 143 17", " 68 225 297 47 221 166 1 286 52 39 122 252 178 283", " 202 65 224 210 7 291 186 258 35 8 247 54 265 71 1", "93 156 190 298 157 2 20 194 134 33 154 109 274 263", " 273 11 150 110 242 81 49 123 204 125 104 64 288 2", "56 158 67 51 293 251 217 77 146 149 267 261 259 34", " 234 44 23 98 199 152 205 112 148 281 111 101 28 2", "80 164 106 138 3 284 219 73 191 253 213 226 66 161", " 60 262 99 100 295 223 198 36 289 19 56 63 108 38 ", "75 203 57 90 83 120 172 183 132 95 40 139 220 43 5", "5 136 300 187 239 206 16 230 200 285 237 69 116 16", "3 296 174 197 97 255 30 155 72 272 53 241"};
    vector<string> blueY = {"111 291 12 70 210 143 18 294 165 102 116 40 109 3 ", "76 282 60 167 154 117 144 87 58 134 170 193 28 276", " 105 214 31 97 274 289 253 115 72 287 202 281 67 2", "28 227 80 260 177 107 1 286 271 183 166 164 44 17 ", "203 50 106 150 133 172 250 142 238 54 283 9 34 169", " 16 26 178 197 32 83 213 248 232 256 288 24 123 78", " 20 127 45 121 132 195 2 239 265 5 219 158 6 226 1", "94 156 180 266 233 181 249 141 252 189 11 224 114 ", "93 49 62 128 191 68 264 125 64 244 159 160 75 55 1", "52 192 201 204 298 25 4 126 247 205 188 51 63 284 ", "245 171 119 206 182 155 47 13 100 237 241 148 234 ", "173 267 33 211 162 157 179 222 79 86 136 146 53 21", "2 29 277 42 38 15 23 30 35 186 251 37 268 269 196 ", "145 65 236 296 243 218 221 122 95 279 273 208 124 ", "151 295 98 209 71 85 187 7 225 10 61 176 163 129 1", "30 88 138 290 262 27 242 280 246 139 73 46 22 261 ", "278 94 270 84 161 199 104 81 77 74 168 292 216 220", " 120 257 198 185 223 175 255 215 113 207 263 48 21", "7 112 149 275 230 101 131 56 285 293 36 153 59 297", " 43 92 99 41 272 8 135 82 254 39 231 96 21 14 184 ", "137 19 174 240 259 140 57 229 147 300 258 103 118 ", "69 235 52 108 91 299 66 89 90 200 110 190"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1176299559519;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> redX = {"7052 2206 3283 2192 9765 557 1095 6566 1091 8277 4", "868 2186 2189 8275 1113 561 7667 8272 8285 7059 38", "23 570 4396 6580 7056 4872 8300 3802 4927 1122 270", "3 48 7636 4902 4899 7632 543 1619 9748 4905 9294 2", "269 4470 7589 7590 8065 7107 3772 8206 1571 6653 8", "211 4930 3202 7128 3210 8225 6603 8707 1546 110 58", "6 4987 7566 9796 8107 8241 2283 1075 9810 4971 372", "6 9334 3244 3166 2611 4543 2609 1218 5628 5013 314", "9 8410 6453 2054 6929 6088 1785 7536 151 3198 6950", " 1252 7496 5595 9866 643 8900 9878 3656 8056 190 7", "515 4493 1278 6971 6503 1155 6502 6036 4606 3643 7", "946 2128 1709 2138 6994 1169 7482 5539 7484 217 83", "51 7960 9974 8884 7002 5547 4576 1722 758 7477 211", " 1721 7435 3613 4573 5521 8362 9927 2644 8367 7426", " 2172 5108 7430 8860 2630 5508 8853 242 2154 7446 ", "7414 9499 817 4071 4070 7418 6326 4616 3529 3005 2", "57 5723 3539 1903 8515 812 2451 5236 814 8523 6847", " 1883 6296 2958 4034 5199 2956 788 1406 5192 5740 ", "7924 9048 8574 2949 7933 1866 772 9998 6282 7367 2", "92 4054 2968 9516 2481 2482 9985 7916 7347 1853 78", "29 1306 339 6877 3463 1308 5178 1288 4016 3476 781", "1 4209 1282 9006 4028 6372 3062 3485 3972 8978 301", "0 3008 6355 7297 6350 7840 5141 8971 4748 1495 475", "1 2035 9620 3950 2851 9202 8661 4257 3394 7766 728", "1 4764 1476 2865 3418 939 934 2334 2030 440 3913 3", "432 2818 2816 5325 8692 2347 4227 915 5868 7251 28", "35 7237 6701 4789 2844 5339 1427 4335 1973 3880 29", "21 4323 1419 4342 7686 9123 1422 4820 5308 9718 38", "52 2887 1951 3844 1467 5262 5265 7726 7180 1921 48", "61 2428 5272 4308 6218"};
    vector<string> blueX = {"3826 8262 2 3825 2749 2205 7044 14 6566 8147 9243 ", "8277 4386 5486 23 8153 8831 3792 1133 7616 3312 37", " 1603 6532 2216 8181 5985 2693 8184 8794 7095 5989", " 5443 5442 9290 5437 1576 78 6631 4455 4450 2247 6", "33 88 4459 90 5949 4436 100 2778 4979 8104 2291 15", "38 595 598 9333 8252 2273 8399 1762 5021 9894 9348", " 2073 129 5012 1225 1773 9908 3690 6451 1782 7544 ", "8411 9364 5603 9365 5613 146 1247 6093 6937 4506 6", "52 6947 2579 8897 8035 6139 1259 9388 8902 9394 50", "39 9406 659 181 2134 1157 7940 5077 8351 6997 3625", " 5058 1724 7000 6527 2670 712 7008 236 8365 8364 5", "116 9929 2172 3601 5108 7428 9460 3115 8863 2148 7", "31 7449 7995 5092 243 1215 727 8533 9499 8535 3524", " 7890 9078 7892 830 2976 9086 827 9058 5247 7399 1", "356 5238 1349 6305 1347 5718 9068 810 7401 811 354", "5 4035 9041 790 6296 5199 4644 4036 6840 6290 796 ", "1879 4046 318 5212 7911 2480 6819 5751 2486 6399 4", "672 6874 4195 6876 5154 7838 3045 4684 895 7835 30", "46 9548 9549 323 7820 1829 4223 5168 2517 1824 517", "5 7818 4704 7314 7316 4709 6359 3498 6896 3980 896", "4 835 1804 7845 3986 2545 845 1319 5143 4748 7768 ", "5825 8670 958 7771 1493 4270 9621 2037 8665 6196 3", "396 6207 7765 1497 940 5843 9605 3964 9196 2324 34", "15 3412 4752 2333 2823 3438 5326 2008 2349 3908 47", "98 6144 429 1989 6689 417 6702 8677 1999 2843 3339", " 2375 3887 6745 469 5775 3879 1438 4806 5780 9668 ", "2389 1003 6725 7213 1007 5300 3893 6731 5309 4336 ", "986 1458 3372 5795 505 8636 5792 5806 1951 7735 97", "22 6234 6781 1927 2420 1442 484 9094 7713 9090 527", "8"};
    vector<string> blueY = {"5501 8261 5497 8271 2197 4413 2737 2199 3809 2177 ", "27 8153 7673 7057 7674 4369 2714 4372 6541 7083 92", "49 1125 2707 8175 6555 7637 528 6557 9264 2215 162", "0 4906 7114 5433 6637 9824 2802 7107 3775 2257 495", "6 8209 86 7135 8082 3755 7127 8091 9847 8762 581 4", "435 1068 8098 9316 1541 1057 6594 2760 116 5931 44", "16 9811 1557 2752 7577 121 5023 8010 4543 5017 142", " 131 1775 1225 6922 8005 5607 8413 157 9919 7536 5", "608 1255 653 8431 6400 3195 7497 8032 8897 5041 12", "58 9390 6964 3183 8446 7516 5039 1279 1754 183 659", " 3647 9414 1701 8872 2140 6046 6511 9419 9417 6507", " 4588 8347 760 6998 6513 3072 9439 6525 7956 9437 ", "4574 2643 5520 9927 2647 7427 230 3127 708 6052 35", "96 3599 7994 8856 2145 2158 7035 3105 5092 2638 99", "48 9467 7415 2990 6808 8541 7899 1906 3530 2979 74", "16 1358 3005 4086 8515 9064 4639 9071 1882 2956 95", "33 4655 6293 1392 10000 316 9025 2975 290 9516 295", " 5746 5750 779 9037 6279 4199 4674 3463 884 6879 4", "679 7348 6392 9562 5637 4214 327 4690 7328 3472 63", "79 4018 1834 1293 7337 5649 6854 4216 878 4027 421", "7 7313 7317 8976 5672 3020 8990 1810 8964 4722 514", "5 3506 8481 2559 8960 3984 4724 4728 8975 1315 179", "7 3515 3994 2544 4187 7768 4750 2855 6193 3938 583", "5 7766 4283 6185 3412 3957 5371 9189 5854 2336 670", "8 1520 5315 4225 4227 4771 6695 3452 1508 4250 393", "3 7779 2363 1519 8675 1973 1427 7710 1020 2916 723", "1 7218 1435 9143 6746 1012 5298 459 1006 9666 2396", " 997 5310 9675 7204 3371 9119 9112 9715 979 5805 4", "288 3365 6234 5800 5815 8617 1443 9701 5811 3390 9", "092 5272 8609 8608 967"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1006186761274;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> redX = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", " 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 3", "7 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 ", "54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70", " 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 8", "7 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 ", "103 104 105 106 107 108 109 110 111 112 113 114 11", "5 116 117 118 119 120 121 122 123 124 125 126 127 ", "128 129 130 131 132 133 134 135 136 137 138 139 14", "0 141 142 143 144 145 146 147 148 149 150 151 152 ", "153 154 155 156 157 158 159 160 161 162 163 164 16", "5 166 167 168 169 170 171 172 173 174 175 176 177 ", "178 179 180 181 182 183 184 185 186 187 188 189 19", "0 191 192 193 194 195 196 197 198 199 200 201 202 ", "203 204 205 206 207 208 209 210 211 212 213 214 21", "5 216 217 218 219 220 221 222 223 224 225 226 227 ", "228 229 230 231 232 233 234 235 236 237 238 239 24", "0 241 242 243 244 245 246 247 248 249 250 251 252 ", "253 254 255 256 257 258 259 260 261 262 263 264 26", "5 266 267 268 269 270 271 272 273 274 275 276 277 ", "278 279 280 281 282 283 284 285 286 287 288 289 29", "0 291 292 293 294 295 296 297 298 299 300"};
    vector<string> blueX = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", " 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 3", "7 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 ", "54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70", " 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 8", "7 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 ", "103 104 105 106 107 108 109 110 111 112 113 114 11", "5 116 117 118 119 120 121 122 123 124 125 126 127 ", "128 129 130 131 132 133 134 135 136 137 138 139 14", "0 141 142 143 144 145 146 147 148 149 150 151 152 ", "153 154 155 156 157 158 159 160 161 162 163 164 16", "5 166 167 168 169 170 171 172 173 174 175 176 177 ", "178 179 180 181 182 183 184 185 186 187 188 189 19", "0 191 192 193 194 195 196 197 198 199 200 201 202 ", "203 204 205 206 207 208 209 210 211 212 213 214 21", "5 216 217 218 219 220 221 222 223 224 225 226 227 ", "228 229 230 231 232 233 234 235 236 237 238 239 24", "0 241 242 243 244 245 246 247 248 249 250 251 252 ", "253 254 255 256 257 258 259 260 261 262 263 264 26", "5 266 267 268 269 270 271 272 273 274 275 276 277 ", "278 279 280 281 282 283 284 285 286 287 288 289 29", "0 291 292 293 294 295 296 297 298 299 300"};
    vector<string> blueY = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", " 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 3", "7 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 ", "54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70", " 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 8", "7 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 ", "103 104 105 106 107 108 109 110 111 112 113 114 11", "5 116 117 118 119 120 121 122 123 124 125 126 127 ", "128 129 130 131 132 133 134 135 136 137 138 139 14", "0 141 142 143 144 145 146 147 148 149 150 151 152 ", "153 154 155 156 157 158 159 160 161 162 163 164 16", "5 166 167 168 169 170 171 172 173 174 175 176 177 ", "178 179 180 181 182 183 184 185 186 187 188 189 19", "0 191 192 193 194 195 196 197 198 199 200 201 202 ", "203 204 205 206 207 208 209 210 211 212 213 214 21", "5 216 217 218 219 220 221 222 223 224 225 226 227 ", "228 229 230 231 232 233 234 235 236 237 238 239 24", "0 241 242 243 244 245 246 247 248 249 250 251 252 ", "253 254 255 256 257 258 259 260 261 262 263 264 26", "5 266 267 268 269 270 271 272 273 274 275 276 277 ", "278 279 280 281 282 283 284 285 286 287 288 289 29", "0 291 292 293 294 295 296 297 298 299 300"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> redX = {"9383 886 2777 6915 7793 8335 5386 492 6649 1421 23", "62 27 8690 59 7763 3926 540 3426 9172 5736 5211 53", "68 2567 6429 5782 1530 2862 5123 4067 3135 3929 98", "02 4022 3058 3069 8167 1393 8456 5011 8042 6229 73", "73 4421 4919 3784 8537 5198 4324 8315 4370 6413 35", "26 6091 8980 9956 1873 6862 9170 6996 7281 2305 92", "5 7084 6327 336 6505 846 1729 1313 5857 6124 3895 ", "9582 545 8814 3367 5434 364 4043 3750 1087 6808 72", "76 7178 5788 3584 5403 2651 2754 2399 9932 5060 96", "76 3368 7739 12 6226 8586 8094 7539 795 570 1434 3", "78 7467 6601 97 2902 3317 6652 756 7301 280 4286 9", "441 3865 9689 8444 6619 8440 4729 8031 8117 8097 5", "771 4481 675 709 8927 4567 7856 9497 2353 4586 696", "5 5306 4683 6219 8624 1528 2871 5732 8829 9503 19 ", "8270 9708 6715 6340 8149 7796 723 2618 2245 2846 3", "451 2921 3555 2379 7488 7764 8228 9841 2350 5193 1", "500 7034 124 4914 6987 5856 3743 6491 2227 8365 98", "59 1936 1432 2551 6437 9228 3275 5407 1474 6121 88", "58 4395 6029 1237 8235 3793 5818 4428 6143 1011 59", "28 9529 8776 2404 4443 5763 4613 4538 8606 6840 29", "04 4818 5128 688 7369 7917 9917 3324 7743 9470 218", "3 8490 5499 9772 6725 5644 5590 7505 8139 2954 978", "6 7669 8082 8542 8464 197 9507 9355 8804 6348 8611", " 3622 7828 9299 7343 5746 5568 4340 5422 3311 3810", " 7605 1801 5661 3730 4878 1305 9320 8736 9444 8626", " 8522 3465 6708 3416 8282 3258 2924 7637 2062 5624", " 2600 2036 3452 1899 9379 5550 7468 71 973 7131 38", "81 4930 8933 5894 8660 163 7199 7981 8899 2996 295", "9 3773 2813 9668 7190 1095 2926 6466 5084 1340 209", "0 7684 3376 5542"};
    vector<string> blueX = {"5936 9107 7445 9756 9179 8418 6887 9412 3348 2172 ", "1659 2009 2336 5210 6342 7587 8206 9301 7713 7372 ", "5321 1255 4819 4599 7721 9904 5939 9811 3940 5667 ", "1705 6228 1127 9150 5984 6658 3920 9224 2422 7269 ", "1396 4081 5630 84 9292 1972 7672 3850 7625 5385 12", "22 6640 6042 3898 713 2298 6190 524 2590 8209 8581", " 8819 9336 7732 1155 5994 8004 379 4769 5273 1776 ", "8850 7255 1860 8142 5579 5884 1993 3205 7621 9567 ", "2504 613 1961 1326 4259 8944 8202 3202 3506 6784 2", "021 2842 868 9528 5189 8872 9908 9958 498 8036 880", "8 7753 6248 3303 3333 2133 1648 2890 9754 7567 174", "6 368 4500 8046 3788 9797 6249 6990 3033 5363 2497", " 253 4892 7686 9125 1152 3996 5975 9188 9157 3729 ", "5436 2460 3414 3921 460 6304 28 8027 8050 6748 755", "6 8902 4794 7697 8699 1043 1039 2002 428 6403 681 ", "7647 8538 6159 5151 2535 2134 4339 1692 2215 6127 ", "504 5629 49 964 8285 5343 6335 3177 2900 5238 7971", " 6949 289 5367 7988 2292 5795 743 3144 2829 8390 1", "682 5340 3541 569 3826 4232 2261 360 9117 8023 676", "1 81 6309 3190 5425 8996 6367 4677 4234 690 1626 4", "524 6057 9614 3168 8205 358 6312 7386 5100 4346 27", "26 4994 4916 6552 5578 3529 8946 2290 2647 6970 90", "51 9080 9631 8593 857 8627 1312 1886 9214 8355 351", "2 90 4412 9479 9610 8969 6189 2274 6355 7641 6620 ", "5433 8987 7888 8338 4566 7770 7284 6856 417 606 22", "60 5849 237 7205 3059 5217 8518 4945 783 6873 8458", " 873 4289 483 6607 478 2757 9314 4471 5729 1100 34", "59 3618 9438 8025 1388 3074 1233 8157 3681 3493 27", "0 699 3417 1839 5569 8363 2622 8794 3173 9847 6431", " 7462 6682"};
    vector<string> blueY = {"9390 4292 5791 5057 5115 1521 6157 8574 1491 1947 ", "2951 9231 5021 537 3740 5054 4030 4098 5325 1081 7", "516 3516 3002 2231 6139 1796 5404 2338 4580 9218 9", "021 3970 9862 4812 5379 4977 2685 1536 4176 3483 9", "207 9759 4857 9744 3499 9911 127 3950 5236 7560 78", "18 5105 563 1244 8711 1805 9934 3291 7375 8955 361", "4 3589 3768 8993 4918 2805 6882 4822 6982 6717 309", "3 1574 126 6593 1486 543 7814 4713 8179 8377 4762 ", "5775 7088 2919 5710 6732 294 1017 346 235 1137 569", "1 5153 3943 2573 6328 9291 6710 4018 7217 6836 696", "3 5055 7090 3858 8130 4904 8571 2661 9633 9685 478", "9 3073 2604 6851 9805 9250 7868 6503 9485 9006 219", "5 4639 2949 1120 967 226 6763 7677 596 3981 865 90", "36 7955 3518 9211 2532 5196 7321 4984 4172 4427 20", "40 7283 72 7398 5830 1063 347 6950 2030 573 3714 6", "059 7522 4047 6924 5082 9435 1232 9204 443 1898 54", "86 5640 4278 9159 262 9262 9683 1041 9848 1723 832", "4 6272 9122 4154 7335 5821 7457 9365 2747 1171 269", " 5218 8701 1703 4653 9933 907 3959 6728 2806 5797 ", "8720 1308 5334 2698 991 6376 8898 2715 1052 5171 8", "189 1559 2506 4010 9016 8224 3109 6539 3378 8109", " 5053 5081 9114 1338 5989 9426 8067 5147 5223 6787", " 6532 2122 1281 3875 4850 179 6590 2254 5350 1131 ", "3813 7857 1494 9181 6081 4603 5720 2433 7982 181 7", "487 9415 9296 8825 8722 6892 551 297 32 9134 3181 ", "8506 415 7057 595 9999 1962 2297 7483 5776 154 897", "7 1309 2587 3382 4266 3563 8860 3682 7685 9086 428", "5 930 5990 4583 7314 1476 4116 5820 1892 7525 5528", " 8839 7490 1136 1360 9618 7643 337 928 6582 6621 4", "310 888 4225 10000"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1054656901668;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> redX = {"1", " ", "2", " ", "3", " ", "4 5 6", " 7 8 9 123 32"};
    vector<string> blueX = {"4", " ", "5", " ", "6", " 7 ", "8 32 43"};
    vector<string> blueY = {"1", " 2 ", "3 4", " 5 88 786"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 964;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> redX = {"4603 5298 9379 8867 1088 6421 6273 6204 9900 143 6", "890 7824 6422 6661 1857 4050 3682 6636 6871 9845 9", "865 7802 2659 7659 4497 691 6552 8799 4747 6948 36", "48 3729 2208 6594 2358 5567 1711 2486 5132 9052 50", "7 8821 4489 6454 2871 5144 7259 7127 3053 6156 491", " 5407 2626 9182 4755 2171 4875 4446 7466 2528 5273", " 7603 8579 6639 1829 336 9273 198 9509 934 4752 31", "0 1477 1254 6694 3285 1681 477 6983 540 4199 2970 ", "786 852 6256 3305 5793 8327 7133 541 6779 2158 753", "3 237 8339 3086 805 4417 9950 5482 6914 2618 9858 ", "370 2011 9884 9237 6476 7213 3352 5318 2353 2929 1", "779 4507 7862 9300 684 8428 3251 5672 1837 49 4466", " 7592 8452 5444 8557 6258 3488 5484 6496 2854 2634", " 2065 7748 3876 6394 9202 9699 8743 1789 9935 4271", " 1199 2526 5664 6501 2688 6667 7919 6286 9400 1939", " 3130 8114 3560 6217 8828 29 9085 9551 3208 5280 9", "013 4299 1351 1343 4022 7892 9652 7042 5415 26 633", "5 4791 1632 8646 8693 7291 7580 5058 4232 8788 669", " 6751 5606 2983 5339 4205 3693 1066 9543 4320 9705", " 2414 8609 8802 6445 3677 8238 4163 8712 1616 3430", " 7308 2541 5985 4557 7915 6359 4014 8143 4147 4427", " 4602 7713 1457 6226 7845 686 9489 8435 8784 5202 ", "8368 5261 9600 6123 5221 2494 6386 4549 8846 9683 ", "2888 566 5945 3812 5898 2399 765 7618 7425 2123 76", "65 6513 9259 5820 8313 4595 6947 6610 9717 2313 83", "7 5999 332 4047 2787 9243 9980 9882 8781 9061 7685", " 5395 717 8549 7988 7869 4816 5771 7755 1185 6269 ", "2868 980 6925 5808 2914 4678 9441 1158 5271 5119 8", "367 2873 6727 5320 8474 7994 1656 4876 7742 3152 9", "252 6637 7633 8810"};
    vector<string> blueX = {"7667 807 9108 2434 9332 6456 5422 1082 2971 8927 4", "490 854 1529 4733 6714 4159 2766 4417 1569 4600 90", "29 2242 6482 9631 3245 1624 7127 9933 5152 6902 81", "00 7186 9233 9306 398 1877 3103 1889 2905 8737 155", "1 6464 5223 3423 2056 5711 6190 1642 80 2123 3020 ", "707 2007 7042 8135 175 6111 4067 214 1912 1805 603", "3 3435 1103 4843 9878 8836 3305 3604 8218 2779 363", "7 5009 6909 9517 2595 7479 8223 2894 8914 6513 373", "9 510 5320 368 4011 7965 4999 5278 8360 4798 2861 ", "1772 3564 8516 5324 3582 6937 1450 416 335 7103 34", "11 8722 4351 5382 2791 347 6328 3419 5823 6627 190", "9 2261 5612 8956 2634 6616 8570 1509 4278 3281 106", "2 8987 9173 8245 5443 5436 512 1460 6883 735 5491 ", "2929 2844 2831 3944 1516 9973 4518 8178 103 8182 7", "883 572 5905 2840 8667 7909 1937 9121 3390 1539 71", "07 5655 5530 9991 8166 4820 9128 8444 702 4851 485", "9 4094 6364 9083 5392 722 3338 2345 8945 8434 7495", " 809 2556 8122 7382 9158 924 4037 4256 5020 3811 8", "34 1672 1628 2266 3336 1164 6855 5122 6194 5163 73", "57 4305 5376 1614 7031 4052 1630 5167 3724 9581 10", "66 6960 6148 2008 9637 3222 3046 9531 4023 6455 97", "04 7430 9119 9493 4506 8550 4013 9813 8153 7943 51", "61 300 9258 9841 667 9206 4182 2164 2730 7017 751 ", "3352 2669 1535 7241 5741 6187 1311 6418 6275 9575 ", "3237 4994 8024 2837 4230 3280 248 9746 9953 1459 8", "838 2381 7535 1974 9316 4063 4009 8515 5269 3342 8", "681 1168 7115 8922 1713 6840 506 3618 4178 6090 47", "59 3938 4075 948 5282 3947 9124 2918 1704 2857 24 ", "7601 9945 4046 3695 2036 4175 7258 3893 2468 9615 ", "7144 6122 3778 5664"};
    vector<string> blueY = {"6303 4870 5503 6858 5850 3162 381 8660 7612 4205 7", "836 3233 8192 2344 6521 5825 8623 1557 4259 1007 8", "848 8316 5750 1432 358 8666 1083 3647 5027 368 232", "5 5537 6531 1971 8242 7168 9923 2015 3563 2968 149", "4 3177 8788 1219 1729 6935 9692 5586 4098 7646 218", " 8116 2618 559 9999 2910 9275 1148 923 7740 2001 6", "263 1515 5838 1303 6542 2041 4839 4693 3808 4875 2", "983 2528 3573 9950 686 2074 8449 8670 5237 4677 44", "40 1699 8194 8382 45 3268 6553 6215 5132 4306 7297", " 8841 6208 83 4173 539 8265 4394 2794 5545 9237 26", "9 5191 6162 1436 2701 8567 9597 8166 4096 8591 292", "8 9464 5729 5496 476 7675 3891 3261 5610 5502 3768", " 2052 958 9678 4550 2723 8802 6650 8861 4396 9952 ", "5145 1995 8860 6800 5662 3120 1998 5936 6209 205 9", "475 9092 2410 9372 8818 8531 9552 478 5140 1497 88", "67 8401 2220 8863 886 8854 6514 2980 3574 1087 451", "1 6242 2537 5817 1188 483 9193 3878 1411 723 3333 ", "2620 1957 8146 3625 5199 4017 1833 3325 9327 3756 ", "994 9109 1674 4692 7349 7527 7365 60 9346 6143 653", "6 6526 5567 6550 4817 139 9437 2597 3991 5042 2707", " 7216 4539 4942 8246 2402 1245 7993 7832 6660 2649", " 567 7654 4369 914 4412 2446 3337 4752 5173 81 553", "6 5754 7864 9760 3 3150 6478 8425 4856 3287 6321 2", "712 2257 9593 3501 1629 4248 5106 5411 1057 5436 2", "042 6278 7119 1129 6960 80 7320 963 1440 9564 2751", " 8973 1553 9573 3713 6766 9276 3270 5706 9300 3439", " 3428 8207 7982 1624 3338 6078 3415 9185 9443 3776", " 1246 4940 7969 7682 5471 7069 4766 2097 3126 9644", " 4349 2329 5014 65 9653 264 3527 209 698 5548 1133", " 3271 419"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1177069322523;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> redX = {"386 394 833 721 938 484 212 646 28 663 759 273 629", " 716 810 374 125 495 654 597 376 772 252 410 228 8", "85 437 439 648 809 189 33 202 21 753 491 504 316 4", "88 531 331 246 156 959 314 965 685 438 811 338 34 ", "186 462 637 947 689 873 383 127 520 543 315 904 96", " 688 657 587 191 324 74 672 229 985 545 1 774 355 ", "690 159 540 151 795 486 19 221 669 538 763 336 441", " 859 23 449 797 213 222 286 778 893 866 94 877 762", " 2 116 136 160 7 638 306 845 829 417 849 861 179 1", "84 389 206 454 537 771 578 408 356 651 626 801 880", " 387 247 881 855 382 393 698 57 199 473 48 234 4 5", "83 239 744 141 693 281 263 270 39 670 977 41 647 2", "72 505 240 757 897 452 946 509 678 319 333 77 905 ", "11 143 80 835 360 413 457 750 435 785 142 81 914 4", "14 466 289 397 166 876 111 369 553 782 701 981 686", " 37 991 828 468 494 15 906 823 928 692 607 421 773", " 521 834 590 161 103 999 558 620 507 433 83 227 33", "7 864 279 901 659 728 134 152 312 916 101 875 12 2", "25 395 167 907 300 165 464 271 248 353 601 936 568", " 879 604 194 615 548 679 118 993 527 909 581 980 1", "35 592 556 789 722 787 440 238 251 710 260 850 415", " 860 786 334 739 741 802 284 962 304 953 330 87 47", "6 886 967 616 106 55 708 765 456 557 694 406 17 71", "7 261 612 66 542"};
    vector<string> blueX = {"530 10 221 52 700 957 423 171 320 605 794 386 929 ", "698 869 705 152 315 770 653 307 808 229 125 974 59", "7 337 578 779 100 348 300 732 498 588 867 783 704 ", "261 467 335 739 894 354 804 317 376 572 470 713 83", "6 342 480 172 142 883 932 99 37 414 789 839 807 27", "4 82 709 292 44 494 819 695 437 43 199 25 90 265 4", "36 995 692 681 964 881 458 643 19 504 668 631 967 ", "840 544 207 374 515 983 862 527 461 569 508 201 55", " 776 72 998 607 373 570 184 472 639 134 762 772 72", "5 809 872 502 471 977 617 855 301 444 18 634 362 6", "71 433 656 810 284 553 215 568 271 946 865 990 262", " 921 952 497 77 192 208 897 675 898 150 832 777 74", "7 83 340 579 204 399 536 560 346 489 818 842 583 7", "66 875 826 59 130 834 825 625 526 858 962 852 174 ", "128 587 141 748 426 820 662 81 649 402 234 608 627", " 122 166 663 163 15 450 69 543 524 325 17 12 745 2", "60 178 213 473 614 287 817 806 196 506 431 209 811", " 61 501 74 853 907 93 888 714 278 459 760 876 54 3", "34 562 708 238 6 622 984 48 126 329 308 1000 672 6", "57 360 333 29 218 710 859 481 723 927 966 922 722 ", "50 22 225 97 381 313 721 39 210 420 58 119 21 940 ", "475 4 259 987 324 648 114 749 938 299 609 846 493 ", "291 979 23 707 849 173 182 823 89 740 244 792 595 ", "744 492 435"};
    vector<string> blueY = {"906 403 249 899 98 590 731 803 297 496 413 67 421 ", "349 394 750 871 555 366 726 75 477 127 185 919 711", " 877 351 282 429 603 14 162 38 305 168 991 757 652", " 950 105 752 438 545 863 535 814 963 790 41 531 71", "6 677 132 910 35 503 248 474 960 235 882 551 994 6", "16 913 233 785 926 193 612 115 577 188 357 298 411", " 908 479 488 918 375 665 669 796 19 108 205 933 66", " 961 532 449 664 715 509 353 365 195 443 318 296 5", "94 623 28 541 866 468 252 30 924 331 788 393 945 6", "55 683 534 441 582 801 62 768 759 988 584 226 610 ", "620 223 148 330 416 490 835 733 363 57 660 40 517 ", "446 730 31 32 644 993 878 563 802 746 227 24 258 3", "06 499 236 958 387 175 452 198 276 189 822 592 674", " 935 139 684 756 200 104 408 460 400 361 289 981 7", "84 451 212 383 751 310 341 659 566 87 131 347 295 ", "971 135 246 547 632 775 202 191 60 186 598 742 46 ", "222 384 923 787 879 799 601 406 970 645 424 891 73", "7 377 219 574 145 314 550 368 117 358 513 505 691 ", "925 942 164 147 378 516 912 155 183 755 629 165 34", " 903 487 158 514 909 179 241 519 561 654 613 758 4", "64 661 552 418 596 110 476 800 538 272 896 118 293", " 268 170 813 371 65 159 160 485 327 782 666 84 269", " 719 404 837 680 982 456 390 328 889 694 693 419 9", "86 311 123 448 507 636 914"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1031467255000;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> redX = {"1", " ", "2", " ", "3", " ", "4 5 6", " 7 8 9 123 32 4343 656 65 66"};
    vector<string> blueX = {"4", " ", "5", " ", "6", " 7 ", "8 32 431 327 3789 432 43 444"};
    vector<string> blueY = {"1", " 2 ", "3 4", " 5 88 786 43 41 6 999 100"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 6867;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> redX = {"42 8468 6335 6501 9170 5725 1479 9359 6963 4465 57", "06 8146 3282 6828 9962 492 2996 1943 4828 5437 239", "2 4605 3903 154 293 2383 7422 8717 9719 9896 5448 ", "1727 4772 1539 1870 9913 5668 6300 7036 9895 8704 ", "3812 1323 334 7674 4665 5142 7712 8254 6869 5548 7", "645 2663 2758 38 2860 8724 9742 7530 779 2317 3036", " 2191 1843 289 107 9041 8943 9265 2649 7447 3806 5", "891 6730 4371 5351 5007 1102 4394 3549 9630 2624 4", "085 9955 8757 1841 4967 7377 3932 6309 6945 2440 4", "627 1324 5538 6119 2083 2930 6542 4834 1116 4640 9", "659 2705 9931 3978 2307 1674 2387 5022 8746 6925 9", "073 6271 5830 6778 5574 5098 6513 3987 3291 9162 8", "637 2356 4768 3656 5575 4032 2053 7351 1151 6942 1", "725 3967 3431 1108 192 8008 1338 5458 2288 7754 38", "4 4946 8910 2210 9759 4222 8589 6423 4947 7507 303", "1 6414 9169 901 2592 8763 1656 7411 6360 7625 538 ", "1549 6484 7596 4042 3603 4351 292 837 9375 1021 45", "97 4022 7349 3200 9669 4485 8282 4735 54 2000 6419", " 7939 6901 3789 8128 468 3729 4894 4649 2484 7808 ", "2422 4311 6618 2814 9515 4310 7617 8936 7452 601 5", "250 6520 1557 2799 304 6225 1009 5845 2610 4990 27", "03 3196 486 3094 4344 524 1588 9315 9504 7449 5201", " 3459 6619 581 9797 4799 5282 9590 799 8010 7158 4", "73 3623 8539 2293 6039 4180 8191 9658 7959 6192 98", "16 2889 9157 1512 6203 2635 4273 56 329 2647 6363 ", "4887 8876 8434 9870 143 3845 1417 1882 1999 323 86", "52 22 5700 3558 8477 7893 4390 5076 713 2601 2511 ", "1004 6870 7862 4689 3402 9790 5256 6424 5003 586 4", "183 286 7089 1427 8618 3758 9833 933 4170 2155 572", "2 7190 9977"};
    vector<string> blueX = {"1330 2369 8693 1426 556 3435 6550 7442 9513 146 80", "61 1719 3754 6140 2424 6280 5997 6688 2530 2550 74", "38 9867 2950 194 3196 3298 417 8287 6106 4489 6283", " 2456 5735 8115 1702 1317 672 5787 2264 4314 4356 ", "1186 54 913 809 1833 946 7757 8322 9559 3647 7983 ", "482 4145 3197 223 7130 2162 5536 451 1174 467 2045", " 1660 6293 6440 7254 25 6155 9511 4746 650 3187 83", "14 4475 8023 2169 4019 8788 9906 7959 7392 203 362", "6 6478 4415 9315 5825 9335 5875 4373 160 1834 8071", " 7488 8298 7519 8178 7774 2271 1764 2669 7193 3986", " 3103 8481 9214 7628 4803 4100 528 2626 1544 1925 ", "1024 9973 3062 4182 1004 7433 7506 7594 2726 3032 ", "8493 143 7223 1287 3065 7901 9188 8361 2414 975 42", "71 9171 236 834 9712 5761 8897 4668 7286 2551 141 ", "3695 2696 1625 8020 2126 6577 1695 2659 6303 7372 ", "2467 4679 2594 3852 5485 1019 8465 1120 3153 2801 ", "8088 1061 1927 9011 4758 2171 316 9577 228 2044 27", "59 7165 5110 7883 7087 9566 3488 9578 5628 5630 19", "29 5424 8521 6903 4963 124 4597 3738 3262 196 2526", " 1265 8261 6203 8117 5031 327 9012 772 6412 5548 1", "154 1521 9791 4925 189 4941 852 8663 3830 901 7714", " 8959 7579 8366 3008 1478 1201 6059 2304 2761 9358", " 2325 5109 1114 4888 9802 2851 4461 2429 2994 7385", " 9406 6541 1112 8705 2836 2357 6073 9351 8824 4486", " 557 3217 1627 8527 3358 9338 3272 3870 9362 2897 ", "3023 9618 113 2718 8697 1586 4042 4424 4130 4230 4", "566 6560 8933 2297 9856 2054 6963 3585 9735 6655 6", "973 1458 4370 2533 2964 2608 2484 912 1636 68 2849", " 4676 2939 2224 2143 3755 6512 2742 176 1460 7826 ", "3222 7871"};
    vector<string> blueY = {"30 60 90 120 150 180 210 240 270 300 330 360 390 4", "20 450 480 510 540 570 600 630 660 690 720 750 780", " 810 840 870 900 930 960 990 1020 1050 1080 1110 1", "140 1170 1200 1230 1260 1290 1320 1350 1380 1410 1", "440 1470 1500 1530 1560 1590 1620 1650 1680 1710 1", "740 1770 1800 1830 1860 1890 1920 1950 1980 2010 2", "040 2070 2100 2130 2160 2190 2220 2250 2280 2310 2", "340 2370 2400 2430 2460 2490 2520 2550 2580 2610 2", "640 2670 2700 2730 2760 2790 2820 2850 2880 2910 2", "940 2970 3000 3030 3060 3090 3120 3150 3180 3210 3", "240 3270 3300 3330 3360 3390 3420 3450 3480 3510 3", "540 3570 3600 3630 3660 3690 3720 3750 3780 3810 3", "840 3870 3900 3930 3960 3990 4020 4050 4080 4110 4", "140 4170 4200 4230 4260 4290 4320 4350 4380 4410 4", "440 4470 4500 4530 4560 4590 4620 4650 4680 4710 4", "740 4770 4800 4830 4860 4890 4920 4950 4980 5010 5", "040 5070 5100 5130 5160 5190 5220 5250 5280 5310 5", "340 5370 5400 5430 5460 5490 5520 5550 5580 5610 5", "640 5670 5700 5730 5760 5790 5820 5850 5880 5910 5", "940 5970 6000 6030 6060 6090 6120 6150 6180 6210 6", "240 6270 6300 6330 6360 6390 6420 6450 6480 6510 6", "540 6570 6600 6630 6660 6690 6720 6750 6780 6810 6", "840 6870 6900 6930 6960 6990 7020 7050 7080 7110 7", "140 7170 7200 7230 7260 7290 7320 7350 7380 7410 7", "440 7470 7500 7530 7560 7590 7620 7650 7680 7710 7", "740 7770 7800 7830 7860 7890 7920 7950 7980 8010 8", "040 8070 8100 8130 8160 8190 8220 8250 8280 8310 8", "340 8370 8400 8430 8460 8490 8520 8550 8580 8610 8", "640 8670 8700 8730 8760 8790 8820 8850 8880 8910 8", "940 8970 9000"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 1040823231429;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> redX = {"3911 6090 4172 1394 8127 7823 9275 7791 9486 5409 ", "5583 6685 2610 2880 4416 7215 8414 374 3560 6546 4", "430 1177 8402 682 7967 3194 8189 4481 6292 4885 58", "92 5504 8184 9617 2680 7692 5533 9447 7022 92 9687", " 5957 9621 6350 5039 6411 6459 8719 1279 6136 4825", " 3578 9493 6588 2048 9792 8519 2352 448 3858 4851 ", "7816 1011 2060 3765 9530 6604 6849 8939 1406 2083 ", "9877 3600 1563 609 7810 5737 852 7456 4081 5036 84", "33 4305 4016 6828 2770 9712 2524 8722 6861 1685 42", "50 8036 8709 3232 4759 7454 3292 5481 9968 9169 81", "53 5718 2652 5206 4672 2301 6884 7993 5999 5804 29", "12 1969 2323 1550 9110 7703 5301 5073 9686 3204 35", "86 9747 6236 6990 771 9911 3059 7493 2860 330 6196", " 2875 5199 3276 5849 7699 287 3386 3852 9775 8570 ", "9974 4453 6257 9598 5096 9702 8984 5632 6865 920 2", "756 9502 9647 9364 1793 4524 6801 4208 6214 8507 2", "472 3527 6617 5756 2773 9751 929 9194 7764 2281 87", "98 6878 5259 2113 5140 5594 100 1957 1576 9408 443", "4 4357 6741 9317 7920 3326 4382 3284 7427 4957 760", "5 8726 8520 3972 3089 1088 728 9211 6831 9678 4180", " 9955 8123 6690 4443 2928 7762 5284 1768 5763 4348", " 6154 7922 3804 6169 6484 3293 4652 556 2651 8536 ", "9720 3903 5297 496 1080 7968 5280 64 1875 3405 640", "2 1308 7202 4974 6116 7966 411 5072 8471 153 6005 ", "9351 3339 7900 2008 8489 9390 7404 4692 7132 1824 ", "715 4029 4125 3571 4867 344 5626 3969 6949 3544 55", "58 8628 9512 6540 1834 7917 2314 7570 8181 9907 18", "91 3973 2299 7500 7038 5806 2162 3701 5859 8579 72", "08 1671 7520 225 7218 9619 2791 2209 5232 307 8512", " 5545 4375 9516 9875 7460"};
    vector<string> blueX = {"650 6047 5326 2604 9468 2495 4769 574 8477 8145 52", "83 9797 1138 1579 6361 8915 1220 6071 6420 5798 85", "80 6059 2225 3419 7246 6308 567 9713 9265 5607 226", "5 8878 1755 2471 3848 8138 2134 8147 8858 1388 132", "7 7391 8064 9818 5805 8803 7737 5919 1091 5371 616", "4 8652 5801 8647 562 810 765 9987 5890 1762 8019 4", "312 9388 4254 8331 2360 4416 5303 9606 7264 6649 5", "411 9825 6727 1435 1669 2808 9556 3741 7456 2252 2", "985 2256 9020 2680 1215 9973 9911 8375 1714 720 35", "00 1004 2850 5896 2108 6454 7812 6849 1807 8198 42", "9 5534 5829 8054 107 5244 7224 1985 7865 4695 7909", " 1967 3016 2024 9307 7333 7480 3806 6371 4443 8670", " 4960 8255 3529 2051 4918 805 7135 8691 7539 5494 ", "7035 1914 4878 589 3403 717 2768 6788 656 3751 684", "6 8082 8060 2011 5289 9149 7551 1309 1201 5007 154", "4 7872 7371 661 3329 7940 7952 1497 5085 3298 6691", " 5012 1377 9378 4723 3728 2387 4032 4952 477 9299 ", "5272 2476 483 2753 1895 1724 8214 8836 1803 6429 5", "323 7383 4319 9163 5133 5343 2891 5750 8901 466 71", "52 9229 1038 2689 6665 5714 2406 9340 2613 1624 17", "36 6044 5813 7350 7703 5438 2684 7031 8186 7483 95", "67 7279 7655 2006 7470 9063 6569 9054 2880 5756 46", "08 9607 7341 400 5909 6332 2112 601 5733 3815 6530", " 1315 4114 8051 1871 3120 5277 5934 2797 6610 7763", " 3775 9447 8890 5093 512 4881 3020 3765 8205 3513 ", "3637 2241 5062 8769 2166 4840 5954 3603 3898 2230 ", "8451 4438 150 3388 401 7281 2460 7885 168 8987 668", "3 822 3225 1159 4218 9978 4091 7911 1277 5990 4752", " 6250 8167 7300 8454 6214 3829 8482 1029 9682 4014", " 1311 5146 5952 1293 2864"};
    vector<string> blueY = {"8729 8620 5927 5234 6376 6893 1618 346 9529 6728 6", "582 8775 5943 2253 7815 1865 92 4229 2778 6274 623", "2 8295 2552 7486 7520 4922 5092 5845 2315 6281 942", "4 6356 5079 2124 472 1029 7853 8333 5812 7976 6535", " 9351 8249 6979 4961 1212 7801 9831 4630 6435 6507", " 8178 1755 380 8726 5525 839 1122 1284 931 8107 75", "35 102 4752 231 390 9933 7620 848 2978 275 4759 73", "31 5988 788 3292 5396 9133 5568 1850 8815 4515 220", "6 8808 148 2007 4015 2957 993 9176 6081 2349 9935 ", "4616 4730 2528 200 1913 3980 7780 6074 9826 4807 5", "941 8655 8549 7259 8773 614 2487 4811 4588 2579 70", "82 9316 5349 3763 9779 906 4477 6384 8042 5472 348", "1 6235 2276 7531 4900 7882 8758 2160 7488 3888 307", "5 9271 8749 7826 6696 8923 9395 2653 1903 5478 821", "5 4793 5405 6199 8881 8085 8767 9401 8920 8175 178", "4 3026 9574 8424 448 4426 654 5900 6227 3850 990 8", "226 2639 3909 8059 6438 227 6851 2419 9528 2645 16", "3 4831 8245 7514 5726 8422 876 3960 6138 3653 1528", " 5438 250 9816 2362 7718 5265 677 7409 6432 1117 6", "528 7596 5261 6222 9719 2699 7543 4600 5290 6588 8", "566 5819 4225 2979 954 279 7894 5376 924 4279 5254", " 7732 2316 258 8089 4564 8289 6769 5370 6277 3662 ", "3270 9870 2117 460 2435 8836 6796 7585 2911 7196 2", "458 1936 4073 4081 9610 8550 4798 3445 6493 3297 5", "14 6656 384 1337 9142 7892 2468 3527 9599 4132 809", " 6806 2998 8116 6453 2417 9330 1206 7447 1978 3234", " 6824 3200 2982 6238 5286 7468 2384 3856 3119 744 ", "1280 5149 9872 9662 172 7395 7597 6078 4199 1589 6", "023 7598 2233 3103 9049 2831 1344 284 7150 9333 84", "70 8687 5130"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 992508373283;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> redX = {"1 2 4 5"};
    vector<string> blueX = {"2 3"};
    vector<string> blueY = {"3 2"};
    Ear* pObj = new Ear();
    clock_t start = clock();
    long result = pObj->getCount(redX, blueX, blueY);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22732328&rd=15180&pm=12156
********************************************************************************
#include <algorithm> 
#include <string> 
#include <vector> 
#include <queue> 
#include <iostream> 
#include <cmath> 
#include <sstream> 
#include <map> 
#include <set> 
#include <functional> 
using namespace std; 
#define pb push_back 
#define INF 1000000000 
#define L(s) (int)((s).size()) 
#define FOR(i,a,b) for (int _n(b), i(a); i <= _n; i++) 
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;i--) 
#define rep(i,n) FOR(i,1,(n)) 
#define rept(i,n) FOR(i,0,(n)-1) 
#define ll long long 
#define VI vector<int> 
#define mp make_pair 
#define pii pair<int,int> 
#define x first 
#define y second 
 
inline pii operator -(const pii &a, const pii &b) { 
  return mp(a.x - b.x, a.y - b.y); 
} 
inline ll vec(const pii &a, const pii &b) { 
  return (ll)a.x * b.y - (ll)b.x * a.y; 
} 
 
int red[301]; 
pii blue[301]; 
int rc, bc; 
 
inline ll solve(pii t1, pii t2) { 
  ll r = 0, l = 0; 
  // right 
  int c = 0; 
  pii v = t2 - t1; 
  rept(i, rc) { 
    if (red[i] > t2.x) ++c; 
    if (red[i] <= t1.x) continue; 
    if (vec(v, mp(red[i], 0) - t1) <= 0) continue; 
    int d = c; 
    if (red[i] > t2.x) --d; 
    r += d; 
  } 
 
  // left 
  c = 0; 
  FORD(i, rc - 1, 0) { 
    if (red[i] < t2.x) ++c; 
    if (red[i] >= t1.x) continue; 
    if (vec(v, mp(red[i], 0) - t1) >= 0) continue; 
    int d = c; 
    if (red[i] < t2.x) --d; 
    l += d; 
  } 
 
  return r * l; 
} 
class Ear  
  { 
    public: 
       long long getCount( vector <string> redX, vector <string> blueX, vector <string> blueY ) 
    { 
      string s = ""; 
      rept(i, L(redX)) s += redX[i]; 
      istringstream iss1(s); 
      int a; 
      rc = bc = 0; 
      while (iss1 >> a) { 
        red[rc++] = a; 
      } 
 
      sort(red, red + rc); 
 
      s = ""; 
      rept(i, L(blueX)) s += blueX[i]; 
      istringstream iss2(s); 
      while (iss2 >> a) { 
        blue[bc++].x = a; 
      } 
 
      bc = 0; 
      s = ""; 
      rept(i, L(blueY)) s += blueY[i]; 
      istringstream iss3(s); 
      while (iss3 >> a) { 
        blue[bc++].y = a; 
      } 
 
      ll ans = 0; 
      rept(i, bc) { 
        rept(j, bc) { 
          if (i == j) continue; 
          if (blue[j].y >= blue[i].y) continue; 
          ans += solve(blue[i], blue[j]); 
        } 
      } 
 
      return ans; 
    } 
  }; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/