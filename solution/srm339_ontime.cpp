/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7423
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

class OnTime {
public:
    int minCost(int N, int T, vector<string> buses);
};

int OnTime::minCost(int N, int T, vector<string> buses) {
    int ret;
    return ret;
}


int test0() {
    int N = 3;
    int T = 8;
    vector<string> buses = {"0 1 0 4 3", "1 2 5 3 4"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 3;
    int T = 8;
    vector<string> buses = {"0 1 0 4 3", "1 2 6 3 4"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 3;
    int T = 7;
    vector<string> buses = {"0 1 0 5 1", "1 2 6 1 40", "0 1 1 2 5", "1 2 4 2 5"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 3;
    int T = 8;
    vector<string> buses = {"0 1 0 5 3", "1 2 5 3 4"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 3;
    int T = 100;
    vector<string> buses = {"0 1 0 1 1"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 9;
    int T = 100;
    vector<string> buses = {"0 3 1 6 15", "0 6 0 23 20", "6 2 25 15 30", "6 1 30 15 40", "3 1 15 35 10", "3 2 30 80 40", "1 5 55 25 25", "1 2 49 31 10", "2 8 85 10 10", "5 8 83 15 5"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 2;
    int T = 1;
    vector<string> buses = {"0 1 0 1 123456"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 123456;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 50;
    int T = 5027;
    vector<string> buses = {"1 5 2182 217 76476", "5 3 2399 223 826966", "2 1 2008 44 804374", "4 8 619 358 877165", "8 2 1593 138 909667", "7 49 4663 365 243435", "0 4 410 110 152520", "3 6 3367 122 85662", "6 7 3777 56 207278", "34 23 708 8126 868437", "42 5 2998 2231 852858", "38 19 1686 280 813233", "36 12 3559 1437 316151", "29 26 2191 5182 421340", "29 1 4953 645 829486", "23 27 1670 1605 843224", "25 30 67 3613 558469", "23 18 670 3437 434222", "38 26 2174 6692 303570", "38 0 6560 1096 355087", "11 24 7210 1191 127384", "47 32 3303 2388 623920", "28 31 1962 6062 276929", "38 39 713 2612 605216"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 50;
    int T = 1855;
    vector<string> buses = {"6 2 1140 35 457108", "7 9 331 136 977561", "5 8 1497 24 488134", "9 1 660 37 992699", "2 5 1224 10 811244", "3 6 995 81 846237", "0 7 187 110 998240", "4 3 923 12 931014", "1 4 803 93 833843", "8 49 1639 26 505691", "24 44 76 1602 410933", "19 13 596 383 295648", "44 36 107 1409 566782", "13 41 563 441 913290", "31 27 801 666 990195", "32 15 1082 383 904537", "33 27 91 818 981022", "0 44 1256 286 995366", "35 14 310 54 627211", "26 32 320 1435 244534", "25 27 360 526 562018", "23 45 589 475 403950", "4 30 552 1248 728519", "9 28 160 1009 34262"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 7841771;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 50;
    int T = 5993;
    vector<string> buses = {"2 49 4766 153 246165", "1 2 2103 2344 639551", "0 1 118 1013 248923", "31 3 4605 607 387316", "34 30 2501 1287 610417"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1134639;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 10;
    int T = 5747;
    vector<string> buses = {"4 9 40 8080 1886", "5 1 305 7627 2042", "8 0 1496 2844 3229", "4 0 3035 1497 6538", "2 6 5086 267 4256", "2 5 2620 7283 5405", "7 8 2814 6313 6645", "8 0 5826 1037 4473", "0 1 952 3101 8975", "0 2 5695 623 2227", "5 7 9486 384 1746", "1 2 2591 5600 4713", "2 9 1891 1645 6498", "2 3 2019 6981 2571", "2 9 2062 333 4428", "9 2 1049 6399 5098", "6 8 242 8713 9460", "2 0 6618 959 2020", "2 8 7099 2178 8033", "3 9 420 2022 878", "6 1 3019 3579 7671", "4 8 1785 678 4516", "2 7 635 3307 7028", "4 9 4792 3622 3277", "8 6 3534 4137 5837", "9 6 2635 2571 370", "4 0 7096 24 2986", "0 7 5560 777 3378", "4 8 4343 4183 6671", "3 0 2733 3171 4318", "5 0 279 4431 2301", "1 0 2155 6212 3770", "0 9 5659 1134 7609", "8 2 1419 4615 4726", "5 4 4761 2930 5563", "5 9 6886 908 3945", "0 7 3578 4230 2970", "7 1 1439 297 1520", "5 8 1123 8239 870", "8 4 6476 3154 311", "5 1 2107 6952 5526", "4 3 6654 35 8230", "8 7 1810 7497 9427"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 20;
    int T = 2678;
    vector<string> buses = {"17 11 3389 351 1931", "16 5 7395 2070 1066", "14 5 1166 1878 7307", "1 8 2943 2290 9221", "1 13 295 4529 4694", "5 1 612 4515 3186", "4 18 4551 3395 387", "2 12 2714 968 791", "7 8 2037 4690 6361", "16 3 6784 1816 2148", "10 7 4128 3090 3996", "13 8 9369 271 8602", "12 14 2570 3119 4764"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 25;
    int T = 6584;
    vector<string> buses = {"2 24 443 4002 9899", "15 1 960 6758 9197", "12 21 4462 2553 7308", "2 11 719 4896 7459", "14 24 183 9099 1806", "19 17 5000 4247 8320", "13 4 486 4609 1102", "17 15 2322 4156 3149", "0 19 1272 5505 5290", "5 1 6553 3157 6693", "16 11 2016 1189 8190", "18 19 2396 2584 1499", "2 15 1790 3231 4465", "13 2 2066 5618 386", "3 1 298 4026 2160", "7 1 1715 387 2567", "11 3 5270 2006 7834", "10 16 1412 7032 2610", "19 10 6086 1343 9564"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 30;
    int T = 5291;
    vector<string> buses = {"17 8 2174 1791 748", "22 25 1917 2797 6646", "25 29 2585 1772 2433", "7 25 3526 551 5862", "17 16 6239 1672 5452", "6 14 2506 209 412", "1 4 1242 626 7947", "15 4 2611 2554 3210", "7 22 4882 2894 275", "27 8 1518 5875 1260", "14 25 2164 3644 9257", "0 2 6899 46 7209", "18 7 1067 3718 9138", "7 3 1818 1009 2539", "2 27 698 6119 4845", "25 0 3428 493 347", "18 1 2299 4752 7086", "26 14 6387 329 3904", "20 17 338 8056 7596", "7 9 3330 3661 2202", "18 28 7825 55 684", "27 21 5285 1619 5034", "27 21 941 7670 8735", "23 4 7069 720 3925", "17 10 3124 6547 5067", "26 7 1197 8176 1945", "27 8 425 2050 5638"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 35;
    int T = 9119;
    vector<string> buses = {"26 16 1851 4500 1770", "5 0 5752 1312 4988", "19 16 1915 7559 7273", "10 16 5382 3820 8085", "12 29 4239 1963 1338", "16 32 2702 3179 1974", "26 0 1435 7635 4136", "24 0 2328 5149 9875", "21 0 1648 1951 8810", "11 8 3542 2130 7773", "15 17 3764 1846 1596", "14 6 1814 1517 6866", "14 21 1850 4407 1391", "20 29 411 2158 3050", "5 4 5926 3233 3982", "2 34 1825 7984 9232", "24 17 1924 3662 4771", "2 8 6755 2965 1758", "0 1 1483 5741 3818", "26 8 5079 1291 9917", "13 15 605 5476 9796", "16 23 1016 7145 5579", "14 25 7817 1568 6255", "26 20 589 9345 4253", "33 9 3538 4099 8291", "17 11 431 8131 7656", "32 9 5411 1809 9121", "17 7 4902 825 8363", "2 7 3142 5146 4456", "33 5 7222 1758 9808", "28 16 1971 4809 5272", "27 3 1393 2380 5443", "20 4 817 1727 7979", "18 26 6282 1514 1473", "28 4 1636 5049 1265", "15 6 918 5809 5", "17 15 2574 5562 9771", "21 2 4817 241 4223", "22 27 6327 3400 8442", "17 21 1702 4272 8134", "3 5 3991 5084 4265", "14 23 2998 1372 832"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 45;
    int T = 2041;
    vector<string> buses = {"8 21 9654 267 5873", "23 16 1085 6765 862", "28 8 4777 2051 5020", "19 38 1142 5499 4150", "5 41 941 5068 5086", "13 4 865 7047 4742", "12 37 3500 1237 635", "37 41 1684 6800 3228", "43 38 884 570 129", "1 40 4340 5350 1911", "38 44 729 3808 8534", "29 39 2108 1568 5925", "5 2 1910 2615 6950", "38 24 2804 6367 3404", "11 6 754 8247 9084", "36 19 4621 94 2891", "8 10 1450 3830 2094", "34 43 2553 1969 5121", "36 35 5625 81 4318", "5 12 4113 535 3342", "24 31 1833 5375 3903", "30 29 503 3518 3161", "25 37 807 1014 4740"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 50;
    int T = 3298;
    vector<string> buses = {"45 40 1618 7368 5540", "12 24 7032 680 7886", "44 14 5258 4669 4322", "31 14 7800 545 8006", "38 5 272 38 4664"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 50;
    int T = 10000;
    vector<string> buses = {"0 11 199 11 742413", "15 16 2305 1957 601136", "11 15 796 1457 737871", "16 49 6493 403 911995", "41 49 9035 582 19707", "1 35 5465 81 831366", "24 6 6235 424 96015", "9 22 2051 11 217894", "21 1 4130 723 106464", "26 46 2272 203 547820", "22 26 2133 81 26806", "35 24 5793 325 674817", "46 21 3374 509 746827", "6 13 7104 400 607650", "0 33 135 105 392760", "2 41 8121 857 23691", "33 9 732 480 68019", "13 2 7756 234 604138", "11 28 8989 39 975439", "2 4 7174 105 31002", "42 46 3334 471 227458", "4 38 7329 158 839421", "9 42 2510 579 729546", "29 18 8424 5 47462", "33 45 993 301 300871", "46 16 3820 90 316720", "35 20 6090 536 107639", "20 2 6944 40 246027", "30 37 5380 21 24176", "16 22 3942 539 237059", "37 35 5525 441 702709", "28 49 9063 44 553252", "38 29 7656 520 291496", "22 30 4792 379 942270", "45 26 1648 140 520809", "26 9 2125 347 911778", "0 33 195 508 321082", "18 11 8469 303 718636", "11 44 861 602 256078", "2 4 3706 1020 340138", "44 27 1636 184 660739", "0 11 202 360 204094", "4 49 4853 1815 90075", "27 2 2254 460 759267", "4 0 918 5424 402792", "8 0 2684 2404 762290", "4 24 1199 3744 611271", "15 49 847 32 884539", "47 39 2891 634 238259", "13 19 1440 7854 358892"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1732785;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 50;
    int T = 10000;
    vector<string> buses = {"3 49 4922 631 280323", "0 17 236 1985 313692", "17 3 3296 1469 183794", "0 5 276 766 656683", "5 4 1260 32 756814", "4 30 1838 679 961975", "30 49 2806 3486 203112", "46 42 4990 870 662405", "42 49 6977 435 615782", "0 39 752 1124 29768", "39 46 2449 912 931738", "0 29 790 658 929240", "29 32 1950 600 868025", "4 11 5363 326 94373", "32 4 3039 1319 581175", "11 49 6446 508 851900", "38 49 3067 862 893450", "0 38 1439 322 848644", "9 5 1972 532 7011", "0 27 365 154 448695", "32 49 5234 3232 689239", "5 32 4148 817 441196", "27 9 784 759 983964", "1 33 2431 1238 233950", "33 27 4339 358 765851", "0 37 451 87 900252", "44 1 1012 1275 765560", "27 49 5635 1158 634533", "37 44 904 96 883885", "43 39 3493 680 288831", "14 43 3104 174 539599", "40 14 1951 512 50331", "39 49 4420 2250 127455", "3 40 1700 169 395045", "4 3 1335 178 600516", "0 4 400 639 53980", "0 32 395 2876 419915", "32 49 4356 2170 15559", "0 34 1783 310 104168", "34 49 4170 1322 682608", "26 41 1103 7872 524865", "14 32 2329 2629 401805", "8 24 8454 954 717255", "46 47 2315 6671 387175", "43 1 4634 3885 949008", "48 1 2739 894 498114", "39 7 5148 4235 319800", "5 4 6893 623 301492", "14 21 1219 7572 207714", "16 2 198 3763 478371"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 157223;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 4;
    int T = 217;
    vector<string> buses = {"2 1 22 7 465907", "1 3 136 12 699992", "0 1 46 74 577415", "2 1 52 8 880483", "0 2 1 13 985920", "1 3 64 41 7476"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1277407;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 5;
    int T = 7004;
    vector<string> buses = {"0 3 1183 303 450930", "3 4 1341 847 181773", "0 1 916 156 232816", "2 4 4249 678 60317", "1 2 3441 66 131121", "0 1 1015 2474 101110", "0 3 176 161 88690", "2 4 4223 2375 350264", "3 2 1729 1545 681171", "3 1 1796 1472 676396", "0 1 1027 2058 905156", "0 3 1585 57 834488", "1 2 4010 93 69881"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 231308;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 6;
    int T = 10000;
    vector<string> buses = {"0 3 644 1083 530790", "4 5 7638 134 539450", "4 5 4247 513 777113", "3 5 2149 418 375225", "4 0 1581 143 734557", "0 4 848 689 468620", "0 4 2144 48 500990"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 906015;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 7;
    int T = 7190;
    vector<string> buses = {"1 6 2742 1023 678845", "0 1 305 1857 151481", "0 4 722 647 111310", "4 6 1439 3357 967442"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 830326;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 8;
    int T = 4807;
    vector<string> buses = {"7 4 2618 472 85072", "4 5 1463 779 597041", "2 7 1191 1833 659691", "1 7 2637 1530 624638", "4 7 3339 422 756880", "4 7 3692 524 189497", "4 2 581 440 568710", "0 2 1780 390 123409", "2 4 705 207 523621", "3 4 1152 56 602903", "7 4 2410 37 769868", "5 7 2255 903 525938", "4 0 1621 26 74207", "0 2 140 511 540506", "0 4 1135 781 181596", "0 2 212 1236 248338", "0 4 32 171 439582", "2 4 639 26 344011", "2 1 1178 1192 541706", "4 7 1223 876 89302", "0 4 1856 37 998506", "4 7 1926 29 508721", "0 4 539 896 428217", "2 4 2627 341 733620", "0 3 67 749 69126", "0 4 809 1165 374915", "0 2 119 356 818469"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 371093;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 9;
    int T = 9754;
    vector<string> buses = {"5 4 1272 1091 839493", "1 0 2293 9 213501", "0 1 2147 324 848691", "1 8 2652 2229 34292", "1 8 6619 279 124883", "0 1 427 4692 187027", "4 6 2954 776 277758", "1 8 6756 1101 800973", "1 8 6331 1609 461753", "6 7 4376 124 748805", "0 5 994 225 650298", "1 8 5390 1477 494493", "0 1 275 2481 348723", "0 1 2438 3578 13843", "1 8 3574 637 248679", "1 8 4378 1363 31385", "1 8 4146 1100 254312", "0 1 506 2259 684357", "0 1 903 2510 302239", "0 1 600 4584 704745", "0 1 1880 390 901883", "0 1 1193 1405 315970", "1 0 2283 111 514977", "7 8 4701 9 804871", "1 8 4294 1830 942864", "1 8 2745 2993 591004", "1 8 3428 535 119466"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 138726;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 10;
    int T = 6266;
    vector<string> buses = {"3 5 1958 509 172794", "5 9 5887 119 865082", "2 7 3226 291 593232", "5 3 4045 27 735745", "3 8 4533 149 126609", "4 1 1297 26 780266", "2 5 3858 19 807975", "8 5 5524 116 850231", "2 7 2940 25 558900", "1 7 1444 21 534612", "1 7 2463 628 556129", "5 9 3096 1259 186277", "2 3 1296 574 99747", "3 8 4874 29 861649", "2 5 3312 560 907709", "8 9 5181 138 905645", "0 4 140 198 514724", "7 2 3571 225 549640", "7 6 3479 34 800521", "6 3 3672 753 940953", "5 9 3136 536 296060", "5 3 4341 310 792697", "4 7 1565 98 964251", "4 1 1103 307 334958", "0 2 141 726 427357", "2 1 931 35 156154", "3 5 4100 116 74611", "0 3 289 18 188506", "0 4 248 438 860022", "3 5 2658 312 58566", "3 5 2554 198 513407", "2 3 1534 154 687369", "0 2 1175 16 999086", "7 2 1832 786 82391", "8 9 5185 353 654296", "3 5 2811 109 702109", "3 8 4301 842 332291", "1 4 1233 242 170069"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 433349;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 11;
    int T = 9792;
    vector<string> buses = {"0 3 1446 920 469164", "9 5 1747 840 923947", "3 8 4873 1155 824154", "8 3 4303 484 916050", "0 7 394 777 265471", "2 10 7456 367 370353", "9 8 1764 1295 354408", "2 1 7149 195 210346", "7 5 1538 288 373579", "0 7 1278 145 67465", "7 9 1494 38 104442", "7 9 1356 368 727224", "9 6 2109 1822 593662", "0 7 495 821 369587", "2 10 8433 698 251856", "10 2 7828 102 83729", "0 7 644 21 134412", "6 2 4454 1183 7391", "1 2 6652 363 743270", "8 10 6781 71 959497", "3 7 918 144 110508", "9 1 5614 134 53860", "9 5 2388 519 625522", "7 8 2140 741 994860", "10 2 8054 64 141075", "9 5 2340 484 487364", "9 1 2180 3353 376016", "8 1 6237 383 807439", "2 10 7287 486 582206", "5 3 3098 1583 512798", "6 8 6194 147 489819", "0 6 1972 536 309326", "7 9 1566 263 564878", "0 3 15 120 468314", "1 2 8050 357 696249", "3 8 3959 236 660949", "5 3 2995 472 615350", "9 1 4923 304 1568", "8 1 5928 1889 247035", "1 2 7389 222 565689"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 568573;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 12;
    int T = 4946;
    vector<string> buses = {"2 11 3296 953 708389", "0 9 30 308 176609", "0 4 365 252 269667", "7 11 4055 478 307056", "9 2 1907 490 215686", "2 11 3194 1717 879130", "9 4 577 586 345121", "4 7 2776 195 890817", "9 4 595 15 971541", "7 11 3820 690 12006", "0 9 69 364 128590", "9 2 2096 109 634769", "4 2 1321 998 304469", "4 7 830 1880 828911", "4 7 1004 2092 229215", "0 4 685 670 56004", "7 11 3148 724 585062", "4 2 1846 331 551964", "7 11 2944 246 995674", "9 4 564 574 451064", "9 4 928 360 451446", "0 9 95 334 250776", "7 11 3138 752 787379", "4 2 758 1828 753047", "7 11 3536 545 643612", "0 9 88 367 315426", "2 11 3393 1248 30906", "2 11 3280 1655 946229", "4 7 944 2095 877008", "2 7 2966 137 452183", "4 7 723 674 384978", "2 7 2422 715 256110", "9 4 1054 122 125710", "2 7 2653 246 133468", "4 2 1413 1000 123795", "4 7 616 1392 699529", "9 2 650 1579 344321", "7 11 3713 95 557839", "0 9 357 174 651779", "4 7 2793 238 542646", "2 11 2842 347 787787", "9 2 1663 75 603415", "9 2 550 158 7705", "9 4 735 383 685469", "0 4 256 897 27733", "9 2 1138 466 904894", "2 11 2632 1957 447856", "2 7 2476 303 256326"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 167201;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 13;
    int T = 526;
    vector<string> buses = {"8 9 92 117 396380", "11 9 146 113 702836", "8 9 254 9 772472", "0 11 9 229 189460", "11 8 105 47 294417", "0 8 16 27 806012", "0 11 108 40 579458", "0 11 36 71 388820", "11 8 138 11 55304", "11 9 323 19 840143", "9 12 312 9 488176", "9 11 241 27 866014", "8 9 86 177 507366", "0 8 17 102 436060", "8 11 212 66 567400", "8 11 81 64 695050", "9 12 354 50 863925", "8 11 126 178 675839", "0 8 46 102 628217", "0 8 35 48 611480", "11 12 397 88 915449", "8 11 69 8 438784", "11 9 144 156 107488", "8 11 66 163 853385", "11 9 243 21 151005", "0 11 208 6 429188", "8 11 154 16 756681", "9 12 374 32 91782", "11 9 95 45 563322", "0 8 18 16 256471", "0 8 6 45 921080", "9 12 354 25 3742", "11 12 232 237 908832", "8 11 156 1 280407", "8 11 268 29 782074", "8 11 103 28 653266", "0 8 66 88 534151", "8 11 125 149 299979", "8 11 284 6 536350", "11 9 189 60 764967", "11 12 167 146 772554"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 344207;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 14;
    int T = 1268;
    vector<string> buses = {"5 4 301 131 172236", "5 2 366 376 689752", "5 4 422 101 618778", "5 4 708 5 378759", "0 7 54 32 179235", "12 3 409 49 807733", "3 4 696 103 248894", "3 2 979 25 657914", "2 10 915 107 638419", "10 13 1024 27 493762", "7 13 824 19 582095", "0 6 4 145 333865", "6 5 236 1 168259", "3 13 1055 44 266938", "3 1 536 16 545628", "2 10 1017 6 514516", "9 6 177 81 707568", "2 13 962 221 475930", "7 11 87 21 169731", "1 5 625 80 444395", "6 5 246 1 277239", "6 4 329 184 38583", "4 2 759 69 708275", "4 2 535 225 849097", "4 2 573 142 720730", "6 12 308 20 710622", "0 6 27 207 350182", "9 12 113 192 566650", "0 5 100 200 266771", "5 2 330 28 538423", "4 1 497 105 339569", "4 13 947 45 289651", "0 9 8 3 271753", "0 11 152 87 993265", "11 9 118 36 80383", "2 13 765 40 892855", "5 4 314 218 567058", "0 5 136 240 952355", "4 13 665 484 613064", "5 4 292 175 336773", "0 6 57 178 567936", "5 4 293 98 881209", "1 6 631 88 65483", "0 6 43 40 654790", "11 3 305 4 966937", "5 2 254 463 708892", "5 4 398 43 117973", "6 7 743 63 356635", "12 4 379 87 814425", "3 1 526 44 80173"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 662099;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 15;
    int T = 446;
    vector<string> buses = {"3 1 248 100 336715", "5 10 74 214 886898", "5 10 102 42 272958", "7 14 224 57 569911", "12 14 379 43 602725", "12 14 423 4 500797", "11 4 48 1 585483", "0 5 3 7 397606", "4 11 44 3 295332", "11 6 48 10 782629", "13 7 182 34 583916", "11 14 150 75 661559", "2 5 129 20 351896", "1 12 378 33 194125", "4 11 50 29 571094", "2 13 84 84 930610", "0 9 2 9 863680", "0 11 114 28 716889", "10 12 314 7 987744", "0 11 86 52 236500", "10 3 145 6 524018", "8 7 273 5 893419", "0 9 1 7 248335", "3 10 183 38 165350", "9 4 14 24 520630", "11 6 90 12 657162", "11 14 146 127 346723", "10 3 162 7 696210", "13 8 214 30 522574", "7 1 316 12 5745", "1 12 343 33 704184", "8 7 246 25 434757", "10 12 256 86 35384", "5 8 123 44 391035", "7 1 278 61 290162", "12 14 383 12 346614", "6 2 108 19 30701", "7 3 130 19 547647", "5 10 158 1 125355", "5 7 68 59 137241", "9 4 31 14 200492", "6 2 83 4 696953", "3 13 176 26 384015", "0 2 6 17 816917", "13 8 205 35 11386", "12 14 344 12 783634", "2 5 90 6 500464", "3 13 186 10 163776", "0 11 109 32 670490", "8 1 282 35 242377"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 583223;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 16;
    int T = 830;
    vector<string> buses = {"13 7 441 38 693588", "1 4 609 13 789594", "9 5 378 39 716330", "2 6 127 31 188551", "4 3 632 9 229591", "13 7 485 13 70288", "11 2 174 20 932351", "2 6 203 35 390228", "9 5 279 9 408262", "2 6 213 68 661653", "1 4 593 30 776453", "0 11 24 138 599594", "0 11 0 144 726174", "1 4 442 109 782815", "11 2 39 60 130389", "7 10 487 10 430501", "9 5 346 3 477083", "6 2 186 12 315704", "14 15 792 11 375613", "0 11 3 2 872760", "7 10 532 40 256089", "5 13 380 10 364238", "4 3 693 16 355061", "4 3 605 15 704087", "7 4 369 260 319533", "14 15 685 48 665612", "12 9 313 15 582873", "10 13 470 7 416273", "5 13 314 25 71963", "3 14 712 10 716922", "5 9 299 19 393187", "13 7 354 57 311412", "12 9 254 20 380728", "5 13 467 2 85231", "12 9 350 18 963562", "6 12 261 14 25154", "6 12 204 30 906370", "10 1 457 116 19899", "6 5 331 101 726526", "10 1 424 6 570019", "13 7 346 3 595519", "7 10 389 27 487715", "10 1 516 32 159122", "3 14 663 11 777004", "10 1 588 8 184580", "2 9 174 99 554589", "3 14 646 5 766064", "6 12 306 41 56038", "11 2 166 16 390819", "14 15 738 33 721672"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 4275141;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 17;
    int T = 6575;
    vector<string> buses = {"7 16 4703 705 75027", "0 7 408 955 746750", "13 16 777 3177 342281", "0 13 514 1215 13499", "7 16 3739 2136 98814", "13 7 3078 399 751198", "13 16 758 4505 86696", "7 13 2774 56 974511", "4 6 2619 392 531305", "0 13 676 597 249203", "0 7 2151 105 157450", "7 16 4213 651 992716", "1 4 1422 1039 63051", "7 13 2007 466 791289", "3 15 4008 414 483359", "13 16 847 594 283376", "0 7 807 542 760338", "7 16 4496 71 543964", "0 7 79 4340 886008", "0 13 247 191 661479", "13 0 498 158 341215", "0 13 1660 202 976135", "0 7 1490 320 514554", "13 16 4972 1138 345176", "13 16 1459 4091 359997", "13 7 1859 2265 48348", "0 13 1478 58 853532", "0 13 642 275 45423", "7 16 5885 294 536612", "7 16 4631 466 693675", "6 3 3224 669 366989", "0 13 1707 529 250159", "13 7 455 4029 427032", "15 16 5808 250 414797", "13 16 3775 1215 738021", "0 13 1313 812 239024", "13 0 471 12 814263", "13 7 4478 44 454246", "7 16 2458 4001 917684", "13 16 3107 731 923402", "0 13 1371 81 662269", "0 7 3742 729 351467", "13 16 2130 4214 293833", "13 7 1117 763 97865", "7 13 1995 26 708286", "13 7 586 2166 456136", "7 13 2345 313 623340", "13 16 686 2692 267281", "0 1 519 571 256864", "13 16 879 379 453323"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 136874;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 18;
    int T = 3317;
    vector<string> buses = {"15 9 770 645 212016", "10 7 1716 37 375426", "5 15 599 310 313528", "15 16 887 368 414924", "12 4 1499 5 976415", "15 9 1203 263 448543", "2 3 2556 4 770222", "10 14 1706 78 670638", "1 17 2429 71 601512", "13 11 2772 81 31138", "3 13 2671 97 468202", "5 8 357 24 664399", "15 9 539 955 137225", "1 17 2306 44 891480", "12 14 1709 182 252385", "4 10 1657 44 14837", "0 15 532 252 170596", "14 13 2501 184 252031", "8 15 616 72 623933", "9 1 1516 623 990471", "7 14 1789 190 240688", "0 5 124 183 260651", "0 5 40 61 924857", "15 12 735 158 639724", "5 15 188 347 922068", "16 4 1514 45 696247", "17 1 2362 112 442944", "9 1 1751 378 19252", "5 12 217 171 307144", "16 12 1307 180 57263", "10 3 1859 153 686528", "1 17 2721 258 551927", "9 1 1628 75 654534", "3 13 2621 111 132693", "11 17 2998 221 915264", "0 5 149 202 761122", "5 15 608 113 631241", "11 17 3034 140 11439", "14 2 2222 83 648441", "5 15 343 543 347292", "8 12 594 727 948453", "0 5 26 127 760330", "12 10 1629 81 387677"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1189776;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 19;
    int T = 1468;
    vector<string> buses = {"0 9 3 39 829940", "0 1 333 160 663801", "0 13 51 39 980015", "16 11 1038 29 891487", "3 17 255 321 375695", "2 17 643 3 616554", "10 16 306 43 757065", "4 12 1026 60 528487", "1 2 626 31 586305", "16 10 357 30 479080", "12 13 1117 88 388496", "13 18 1260 97 249848", "17 2 595 43 40940", "1 17 518 135 905171", "17 2 672 3 362765", "12 4 1107 9 551527", "13 18 1303 74 269450", "8 18 1156 55 235694", "10 16 344 6 967350", "10 1 405 108 862618", "11 8 1098 11 665367", "16 2 261 238 625300", "0 9 8 115 398178", "13 3 154 35 444226", "10 16 291 42 537900", "9 16 241 3 902491", "9 16 151 14 876944", "14 12 801 156 785759", "0 1 197 46 573906", "10 16 327 12 722374", "1 17 528 9 173201", "17 16 900 116 186923", "16 9 217 2 644331", "2 14 646 227 937575", "2 14 705 89 745659", "12 13 1194 108 303119", "10 1 397 72 829253", "14 4 854 62 598016", "9 17 92 48 525014", "16 10 198 74 186054", "9 16 92 138 220817", "13 18 1233 155 125878", "12 4 1087 3 685437", "0 1 45 349 688233", "16 9 229 9 978872", "4 18 954 420 942155", "14 4 909 90 558066", "1 17 647 23 466532", "4 12 1118 69 860484", "1 2 613 7 821349"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1105893;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 20;
    int T = 5948;
    vector<string> buses = {"15 9 2566 38 907585", "0 14 3 498 931833", "0 14 25 795 500243", "4 8 1560 298 493918", "9 19 4221 45 7190", "9 13 3191 1206 788749", "0 11 17 361 566768", "14 4 410 930 638283", "4 8 1846 165 705052", "9 19 4929 18 501972", "11 6 1143 138 174441", "4 14 1021 130 790711", "8 13 2164 969 390605", "4 9 1170 3021 258289", "8 13 1863 92 671774", "0 14 12 121 18450", "13 8 1946 540 737182", "4 8 1311 267 88230", "9 19 4122 606 434749", "0 1 2202 571 913899", "13 8 2040 471 806118", "4 8 1354 413 811279", "8 13 2541 1799 79162", "14 19 2109 3565 137792", "13 8 2046 209 913656", "0 14 1656 1236 189651", "14 4 874 120 172983", "6 2 1425 314 728429", "13 9 4431 137 66132", "14 4 1163 568 272932", "8 13 2030 47 363209", "4 19 3709 230 381084", "9 19 2756 558 549637", "19 9 3919 999 213928", "13 9 3791 132 856014", "0 14 138 716 268492", "13 9 3781 34 523148", "14 4 1240 55 929716", "14 4 905 125 8544", "9 4 2893 516 905536", "4 8 1064 1354 407928", "13 9 2667 27 59833", "13 9 2409 334 875074", "0 14 170 326 256283", "1 19 2924 238 814708", "0 14 664 1369 617052", "14 19 3309 838 735904", "9 19 4749 691 908329", "8 13 1893 43 577194", "2 15 2145 231 9962"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 156242;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 20;
    int T = 358;
    vector<string> buses = {"7 2 147 5 967947", "7 18 78 12 575942", "9 8 291 12 168323", "8 19 269 2 39369", "2 7 98 73 674997", "0 12 26 15 766775", "12 2 18 55 544848", "9 8 244 13 906320", "13 10 207 21 28973", "5 9 234 13 638668", "12 2 52 14 731693", "5 9 283 7 362480", "11 14 175 5 373018", "9 8 254 11 970375", "14 5 210 14 475149", "2 7 65 8 75039", "8 19 331 12 754024", "8 19 278 13 495223", "5 9 228 12 644580", "18 11 203 7 47401", "18 11 132 27 3582", "8 9 259 14 240192", "18 11 119 26 832922", "9 7 49 69 887805", "0 9 4 11 953094", "14 5 231 6 953466", "0 12 6 11 513508", "14 5 182 33 298629", "2 7 78 10 752631", "2 13 170 30 289826", "7 18 97 11 767678", "7 18 176 7 257393", "11 14 173 34 82852", "11 14 226 3 341886", "10 19 265 9 398737", "12 2 56 4 577305", "0 12 5 6 790577"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1775892;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 21;
    int T = 704;
    vector<string> buses = {"9 1 120 193 963895", "1 20 475 53 329210", "8 9 128 9 350820", "1 20 380 40 389257", "0 8 16 81 368538", "0 8 31 63 989599", "1 20 386 108 755340", "0 8 66 5 751279", "0 8 48 32 323917", "1 20 202 15 262562", "8 9 124 56 868109", "0 8 74 98 515141", "8 9 178 34 820718", "8 9 183 132 912122", "9 1 345 105 210489", "9 1 241 134 300497", "8 9 43 38 381731", "1 8 147 18 813820", "0 8 51 23 593181", "9 1 241 133 310508", "0 8 14 17 347471", "9 1 269 61 741921", "9 1 186 298 290763", "0 8 219 34 815998", "9 20 333 321 677863", "9 1 105 31 80300", "9 1 172 19 717958", "0 8 66 74 534437", "9 1 409 25 781312", "1 20 522 7 57324", "1 20 376 38 50131", "1 20 436 46 560481", "8 9 87 6 16821", "8 9 203 22 682677", "8 9 96 11 612451", "8 9 266 77 815459", "1 20 554 7 921474", "1 20 557 76 480296"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 471169;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 21;
    int T = 3042;
    vector<string> buses = {"8 6 2269 135 766135", "19 6 2335 327 338752", "0 1 138 152 575933", "4 6 2159 214 391567", "8 19 2215 73 512274", "0 2 188 169 970719", "9 20 2145 23 655734", "2 11 763 36 904268", "13 4 1931 204 183081", "2 11 742 164 311588", "11 14 1033 354 71105", "10 2 88 153 106449", "14 13 1505 26 966554", "1 2 489 35 564566", "0 10 27 54 851656", "3 14 1259 121 612142", "0 2 102 55 808186", "14 13 1474 301 538781", "11 3 1071 135 870183", "14 19 1565 128 990696", "11 19 1046 306 936493", "6 18 2714 126 427789", "14 19 1586 308 296266", "10 17 102 182 473835", "10 17 173 22 864704", "10 2 425 104 221444", "17 1 366 89 832164", "0 2 28 144 370336", "12 9 1912 212 256809", "1 14 693 290 488476", "8 6 2397 30 419797", "18 20 2013 540 23123", "18 20 2921 55 292681", "4 8 2152 47 159165", "6 20 2727 250 25980", "3 14 1287 169 938547", "19 12 1832 68 913624", "2 18 186 101 811782"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1205241;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 22;
    int T = 1819;
    vector<string> buses = {"13 21 1703 29 723743", "0 16 38 27 393081", "10 21 1431 117 999047", "9 13 359 67 595858", "17 3 1364 140 434548", "16 19 108 6 909034", "14 6 426 62 220069", "14 17 586 596 287243", "0 16 29 64 455600", "5 1 799 141 647152", "15 5 958 38 565866", "5 11 1041 41 423832", "19 1 257 104 185498", "19 1 634 315 181770", "5 3 857 567 21728", "3 13 1556 29 739994", "6 10 541 13 130105", "14 12 720 118 727648", "19 14 237 180 812676", "2 1 577 51 66107", "19 6 169 83 493875", "16 14 99 90 899137", "13 7 1646 58 991021", "6 10 680 727 908950", "16 2 524 26 823870", "1 10 1003 249 213043", "1 17 1031 304 396835", "12 15 934 23 889768", "0 6 94 125 965271", "11 19 1200 150 410105", "17 10 1357 41 829734", "5 3 1457 67 149477", "7 21 1718 21 953616", "16 5 386 308 922306", "10 3 1470 85 871760", "16 19 102 27 415047", "6 9 293 10 608290", "13 21 1643 148 433479", "3 21 1661 34 185112", "1 14 630 22 228241", "7 16 495 6 600287", "13 7 449 33 475525", "17 13 1356 21 255186", "19 21 1438 114 269286", "0 16 27 76 424346", "6 5 688 21 701199"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1077414;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 22;
    int T = 3785;
    vector<string> buses = {"11 21 2629 544 595992", "11 21 2463 99 380418", "2 11 1389 71 918554", "2 11 1252 222 798732", "11 21 2418 105 863164", "2 11 2794 2 774024", "2 11 2529 56 588101", "16 2 392 692 991456", "16 0 575 225 994735", "11 21 1763 713 978431", "0 16 488 459 554688", "16 2 1411 71 974136", "16 2 1089 167 507769", "16 2 1021 159 182809", "11 21 2970 237 730185", "2 11 1974 141 117646", "16 2 826 247 915540", "15 13 1761 180 953338", "0 16 158 532 84841", "0 16 155 158 611696", "11 21 2047 357 739288", "16 21 2790 78 778567", "0 16 239 1128 559773", "19 15 1376 96 596100", "0 16 336 978 259472", "2 11 2628 40 951390", "11 21 2059 660 224777", "0 16 12 460 403418", "11 21 2316 140 928628", "16 2 1020 405 802708", "16 2 502 562 359230", "2 11 2033 597 119853", "16 2 1591 337 381956", "0 20 686 179 599372", "20 19 951 287 505553", "2 11 1695 67 57459", "13 3 2379 122 46029", "2 11 1834 101 822491", "16 2 2052 643 509093", "0 16 954 237 194054", "11 21 2644 576 414928", "3 16 2640 143 320052", "16 2 1435 386 88851", "0 16 920 29 727300", "11 21 2908 215 974482", "2 11 1793 144 875343", "0 16 607 320 646297", "0 16 148 386 690539"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 549886;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 23;
    int T = 10000;
    vector<string> buses = {"20 3 1729 45 678309", "17 8 5980 343 744285", "0 20 692 329 658538", "18 16 470 37 860795", "10 15 5677 195 321322", "20 22 5896 1119 410655", "2 9 3602 308 19772", "10 17 5825 70 552269", "16 5 639 194 668262", "15 6 6789 615 351683", "12 17 5005 774 661619", "15 14 6804 383 896945", "15 13 7163 694 654618", "19 10 5447 191 952303", "18 3 630 589 708992", "14 13 7678 386 566576", "19 13 1094 1517 991909", "21 20 5205 467 694373", "5 21 1315 476 589466", "21 2 2893 24 75096", "0 4 89 149 730636", "7 1 2346 260 207257", "7 1 2268 24 303110", "3 1 1878 1014 192478", "7 1 2218 266 832009", "5 20 881 13 597256", "11 13 8587 74 739130", "6 11 7487 622 572186", "14 6 7356 103 839739", "4 18 331 116 427627", "9 12 4463 77 949627", "8 13 7372 256 599987", "3 21 1976 24 970805", "13 21 3692 851 92821", "21 7 2134 69 634518", "3 21 2015 24 388431", "15 11 6794 1184 778519", "1 2 3046 547 460599", "7 2 2322 659 29089", "21 9 2097 2319 975014", "12 19 5283 41 959011", "4 5 494 293 176752", "13 22 8742 410 37427", "8 15 6535 226 843635", "0 16 254 226 321853", "16 19 582 225 181262"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1069193;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 23;
    int T = 10000;
    vector<string> buses = {"8 12 3439 778 506277", "13 22 8558 975 410721", "6 8 2318 42 423488", "9 4 5139 13 804091", "0 7 304 254 832851", "11 9 5759 893 80498", "4 11 5418 282 691873", "21 8 2647 35 589464", "6 8 1429 69 145167", "13 6 764 531 717852", "21 4 5289 108 434778", "0 2 604 83 589394", "21 4 2866 84 98404", "11 9 5366 2 248221", "2 22 7456 803 783817", "9 1 7714 529 532367", "0 7 32 234 236990", "2 6 912 245 138939", "4 11 4836 26 536994", "13 6 1842 42 258528", "1 2 5964 608 55854", "8 3 2325 18 736914", "13 6 2034 201 787601", "2 9 7246 272 658777", "0 7 106 323 571791", "11 9 4872 26 79864", "7 8 2083 847 977315", "10 13 8366 190 986927", "6 21 1634 3300 630074", "12 11 5115 427 211712", "1 2 7250 14 757031", "3 21 4076 129 784809", "21 4 4320 283 132698", "7 13 375 177 625714", "4 11 3510 829 51300", "3 21 2526 66 618533", "9 1 6313 895 278163", "8 3 3202 732 806914", "18 10 6939 863 879212", "7 13 752 212 415005", "2 22 6624 91 481387", "8 3 2452 1579 124025", "6 7 1797 251 639154", "3 21 4273 704 6441", "11 18 6003 570 207878", "2 22 8943 516 40527", "9 1 5056 596 948717", "7 13 719 561 550280", "1 2 8312 276 179628", "6 8 2144 22 410788"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 629921;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 24;
    int T = 6770;
    vector<string> buses = {"21 15 3651 1146 540363", "14 9 4177 243 500261", "21 5 527 126 632337", "17 14 1792 424 398057", "19 14 2696 90 996047", "0 1 184 300 392150", "14 19 2802 204 663432", "1 6 962 711 392172", "21 10 3713 73 342000", "0 17 26 712 546700", "14 21 2394 91 239555", "19 21 3069 311 898006", "1 17 762 417 332973", "10 13 3509 887 998079", "19 21 2769 327 71216", "5 23 6253 94 791778", "9 5 5133 389 463132", "15 9 4539 635 997382", "17 13 2414 376 395912", "5 23 5368 605 885762", "15 9 4711 37 44649", "14 13 2437 538 488792", "17 14 1399 1059 164655", "10 13 4117 251 785485", "14 19 2788 71 192754", "5 23 5438 131 958", "13 5 4537 759 819189", "14 19 2425 202 853005", "9 23 4510 156 379119", "1 17 1162 360 253994", "13 23 5139 1009 537030", "0 1 462 26 802834", "0 21 49 44 884541", "13 9 4682 58 348505", "15 13 4575 296 980431", "13 15 5004 130 595472", "13 15 4422 114 579608", "14 10 2692 1072 951257", "13 14 3742 74 513806", "15 5 5600 1 542100", "6 14 2262 332 677748", "15 9 5160 246 594085", "9 5 5041 220 171903", "21 10 3208 218 32673", "9 5 5441 183 395214", "14 19 3684 72 401646", "5 1 809 125 418859", "0 13 2462 485 160236", "13 9 5326 9 934593", "19 23 5291 336 257960"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 681602;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 24;
    int T = 8882;
    vector<string> buses = {"12 1 2694 303 40280", "21 19 4672 495 214624", "3 14 4701 486 576391", "16 23 8436 30 89076", "13 19 5345 6 259294", "1 21 3170 821 873364", "12 13 6223 80 833972", "1 16 1978 93 620117", "18 14 4377 151 796546", "0 20 873 335 121362", "20 12 2488 155 588958", "5 18 2991 1024 784564", "14 13 5233 3 782355", "3 10 4880 33 93429", "7 19 5107 237 167419", "20 1 1342 465 776245", "17 22 6245 471 748585", "8 5 1167 54 289926", "21 9 4068 146 805205", "20 12 2592 71 55408", "5 20 2028 402 113243", "19 10 5566 200 761762", "14 7 4934 124 246403", "21 9 4144 276 326401", "2 23 6037 1295 844821", "2 17 6182 40 764794", "12 1 2836 94 194268", "10 2 5842 127 644589", "1 14 3817 13 310710", "10 12 6078 78 112415", "22 4 6746 884 579660", "6 1 843 135 549592", "6 8 915 113 571262", "19 10 5728 43 405673", "13 23 6363 2060 677772", "4 16 7664 567 28219", "9 3 4530 153 670832", "0 7 577 31 773445", "3 14 4966 149 498322", "16 5 2117 291 958957", "3 13 4606 128 181761", "7 6 615 226 296201", "0 5 142 1095 999070", "9 3 4526 14 163766"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1606800;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 25;
    int T = 1743;
    vector<string> buses = {"5 12 1065 214 425973", "17 15 262 42 667248", "5 23 1070 44 319393", "17 14 348 146 521923", "14 8 578 124 610881", "17 9 237 647 395528", "8 1 1429 79 80882", "0 22 3 20 412097", "3 5 600 29 719502", "22 6 42 35 870185", "18 24 1548 84 970037", "22 17 144 103 384347", "12 19 1337 64 568893", "15 14 537 16 711561", "9 12 1114 43 699546", "1 12 1251 50 679723", "0 7 39 118 582909", "15 5 366 138 283186", "0 21 118 70 491073", "8 9 755 8 182415", "6 17 114 99 154316", "6 3 80 28 124659", "8 1 1097 143 328348", "14 9 531 81 664422", "9 1 897 163 253152", "11 8 1381 22 464482", "8 9 716 141 1985", "19 18 1469 70 977513", "14 16 980 35 376003", "3 7 129 13 338956", "18 3 415 45 766925", "17 9 534 328 540249", "7 14 887 85 19385", "7 14 311 70 312965", "5 7 735 20 137879", "22 15 194 65 26515", "1 24 1534 30 906444", "12 24 1430 206 528225", "21 18 215 162 867525", "6 7 86 60 199788", "16 11 1057 317 679384", "19 24 1456 61 102353", "14 1 471 439 813482", "21 14 443 21 263631", "9 5 899 115 904831", "6 3 98 20 900859", "23 1 1124 21 513315", "15 21 324 94 911779", "9 19 922 506 630044", "7 17 170 7 2863"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1675996;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 25;
    int T = 2782;
    vector<string> buses = {"17 21 961 86 907707", "17 21 963 343 3787", "21 5 742 120 268664", "8 1 412 14 19230", "21 23 1046 234 183129", "22 19 1826 25 713074", "16 2 1878 77 715964", "11 5 520 182 711361", "22 19 1422 378 881607", "11 5 728 45 620831", "0 8 60 248 277659", "23 22 1352 20 357387", "23 22 1546 105 26008", "8 1 458 31 316680", "12 6 2429 127 783586", "1 11 489 14 221377", "19 9 1890 86 653385", "23 22 1519 89 122987", "19 9 1974 21 648162", "22 19 1628 56 977589", "9 16 2146 100 536695", "0 8 152 247 625624", "5 17 800 111 860976", "5 17 659 23 300784", "2 12 2392 23 664281", "6 24 2381 214 427909", "9 16 1794 44 882085", "16 2 2337 7 270408", "6 24 2604 85 256830", "1 11 528 5 377009", "6 24 2559 81 917478", "2 12 1976 18 601938", "21 23 1118 192 950666", "9 16 2152 2 905154", "17 21 732 4 872715", "21 23 1354 1 587029", "1 8 297 66 2785", "5 17 872 4 190774", "0 8 204 1 962649", "2 12 2357 35 118087", "8 1 277 13 13835", "21 17 752 199 711189", "1 11 579 95 505384", "16 2 2304 39 774371", "19 9 1718 54 80090", "12 6 2417 16 929013", "11 5 577 46 741251", "12 6 2159 88 996999"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 5066959;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 26;
    int T = 2359;
    vector<string> buses = {"16 20 597 290 765330", "3 25 2170 99 467448", "16 9 565 156 196305", "23 6 1113 198 374517", "1 3 1950 69 571099", "23 5 863 34 766152", "4 16 479 7 686150", "5 19 1450 106 372041", "9 23 747 39 103102", "9 23 760 52 946514", "14 1 1827 107 502325", "9 18 806 3 660870", "0 23 357 354 348763", "14 1 1819 95 245362", "1 21 1989 78 58961", "14 25 1519 171 169255", "9 24 1285 85 793488", "10 25 1280 91 391898", "0 23 234 596 854380", "11 16 358 98 225426", "23 24 1165 112 705243", "16 9 588 138 794001", "5 20 1018 113 430029", "24 6 1447 31 533629", "3 21 2028 7 939890", "21 25 2091 58 521709", "0 4 89 327 213355", "19 21 1675 379 925519", "3 25 2021 121 504071", "3 25 2079 277 379943", "10 14 1277 118 646335", "6 19 1507 93 881456", "5 10 1075 84 361788", "16 9 600 13 775236", "19 14 1654 127 286466", "4 5 421 294 250465", "0 11 158 77 56554", "0 10 522 25 563997", "20 24 1246 28 475405", "18 5 1007 52 218459", "6 3 1638 177 903782", "14 25 1789 205 77147"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 955895;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 26;
    int T = 3174;
    vector<string> buses = {"1 25 2785 225 824391", "14 1 2351 79 757388", "14 1 2439 102 58499", "10 4 1214 10 27053", "11 20 2121 67 296235", "17 16 1587 368 504490", "5 7 595 53 341883", "8 16 1422 86 229317", "7 10 557 120 210036", "17 23 1078 32 172160", "0 15 278 254 201666", "13 8 1878 8 441390", "10 23 716 50 505951", "20 14 1896 170 930876", "16 11 1509 142 844350", "11 20 1772 17 693381", "8 16 2000 87 42246", "10 22 818 41 209034", "15 17 416 357 507264", "22 17 933 48 14591", "4 13 1153 103 46017", "7 10 698 56 520398", "23 4 1121 17 750953", "17 23 985 129 244485", "0 15 29 178 321591", "13 8 1345 29 67591", "16 11 2093 26 662364", "10 22 814 80 161554", "1 25 2607 333 263920", "4 13 1298 564 603118", "16 25 2015 232 726716", "15 0 244 26 936781", "15 5 548 41 233919", "17 8 1687 246 399234", "20 8 1884 85 365873", "15 5 282 14 924875", "22 17 919 58 975122", "15 22 354 208 901074", "20 14 2206 30 917925", "5 7 329 26 903095", "23 8 1481 380 246373", "10 7 685 12 293917", "1 25 2573 84 244885", "23 4 1134 98 955013"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 2060061;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 27;
    int T = 7324;
    vector<string> buses = {"15 7 768 305 36053", "13 9 1691 131 891188", "9 5 1965 60 595244", "13 5 2344 28 75522", "8 11 3595 73 793517", "7 13 1293 225 242691", "23 8 2726 632 372101", "13 1 1843 1102 110476", "23 1 2780 61 140812", "0 2 64 64 38370", "10 23 2550 89 244203", "9 10 1916 404 723328", "15 22 1058 32 660475", "9 1 1958 580 345190", "13 23 1860 381 277451", "13 10 1790 435 820887", "1 8 3050 39 224246", "11 17 4050 1372 841737", "23 1 2917 19 476890", "9 1 2178 426 774215", "13 1 2348 261 690436", "5 10 2406 52 172502", "5 8 2030 1218 157390", "19 26 6225 516 159937", "11 26 3990 2325 115381", "0 25 313 86 58009", "0 7 256 254 497679", "23 11 2773 738 164173", "15 22 840 163 558357", "25 15 620 39 404200", "2 25 342 185 871488", "25 13 565 900 29405", "5 1 2532 344 459326", "0 22 148 908 473813", "17 26 5744 18 731356", "17 19 5846 192 375004", "13 9 1682 45 608388", "5 1 2247 35 845834", "25 15 594 8 509877", "22 13 1512 83 630536", "0 25 345 131 669822", "9 8 2715 457 389588", "22 5 1063 504 17319", "22 7 1211 30 703477", "13 10 1957 207 716272", "22 7 1183 4 843859", "22 7 1163 95 606778"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 644419;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 27;
    int T = 9711;
    vector<string> buses = {"15 1 6321 26 640984", "24 19 3780 429 371913", "23 19 252 309 96533", "14 26 6668 2230 245489", "8 25 7584 600 805712", "25 17 8549 418 251629", "0 11 682 920 433585", "23 3 370 756 633939", "22 8 3516 2345 391005", "14 16 7660 971 142180", "8 11 6502 187 292627", "15 1 6150 163 361543", "11 16 7049 1867 915933", "17 16 9015 228 399414", "0 23 54 4 908206", "18 13 2471 126 178651", "11 14 6895 316 240114", "16 26 9287 70 673365", "3 13 1133 690 543901", "2 24 3388 152 255170", "11 14 1805 798 854986", "3 24 1296 482 869159", "24 18 1807 652 109595", "19 3 4475 35 655246", "0 23 47 25 407177", "19 22 660 2182 701129", "4 11 4389 1725 108240", "4 12 4687 61 772959", "15 11 6366 40 56874", "17 26 8214 306 293135", "14 25 7392 182 21495", "19 13 1171 1056 176628", "3 22 3402 243 374126", "22 9 1551 17 90184", "14 16 8520 657 101626", "9 2 2355 566 144652", "13 15 3874 1366 239243", "11 14 3639 1051 504527", "19 3 682 279 376226", "3 21 5242 1125 810155", "12 15 5098 1050 512408", "1 11 6707 93 366698", "13 22 2606 794 6025", "21 17 7402 611 332531", "0 22 1392 49 647506", "22 4 3941 184 791175", "1 8 6387 13 25441", "19 13 1321 376 216648", "14 26 5329 715 932140", "11 16 7001 1792 704441"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1183601;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 28;
    int T = 1264;
    vector<string> buses = {"7 1 1020 20 312814", "17 26 697 126 528942", "19 4 642 21 949701", "26 20 759 278 374421", "1 4 393 22 316971", "18 9 139 1 795093", "13 11 329 21 295065", "18 13 189 73 981839", "17 4 618 29 454395", "17 26 698 57 554251", "12 23 449 15 462395", "4 16 436 8 992844", "0 18 42 31 646921", "4 26 701 55 299655", "16 26 527 13 617582", "9 3 210 20 426442", "26 6 790 63 149083", "18 12 130 80 462826", "6 27 1077 150 68708", "26 6 862 31 33224", "12 4 589 71 609679", "11 23 439 22 396565", "3 13 274 17 259894", "1 20 1077 68 488415", "0 16 19 5 853317", "20 27 1166 51 40390", "13 11 416 12 701207", "13 11 386 41 559932", "16 13 323 1 335869", "25 27 1184 3 874044", "0 9 13 101 752634", "26 7 847 105 298010", "11 4 530 154 113362", "23 17 515 45 577847", "9 3 162 46 349544", "4 1 660 342 273188", "22 25 1108 63 754747", "19 17 534 48 130480", "7 1 1045 3 449199", "19 26 507 336 432503", "11 12 437 3 755227", "16 18 77 4 973184", "21 22 737 243 625330", "15 7 933 35 953858", "26 21 625 103 392557", "23 19 468 2 476924", "0 1 355 13 792508", "4 15 693 215 304939", "0 3 90 166 978704", "6 15 920 2 451782"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1321313;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 28;
    int T = 408;
    vector<string> buses = {"23 12 183 3 217634", "6 1 357 8 843143", "26 14 274 24 654786", "16 15 274 8 24161", "3 18 111 19 696587", "2 7 119 25 832677", "16 26 260 1 39944", "1 10 382 3 893648", "4 10 384 5 33918", "12 9 209 14 896330", "16 17 254 2 130131", "17 26 258 1 481839", "9 26 239 24 459150", "13 20 201 6 228999", "24 3 65 11 139999", "7 23 149 21 386689", "23 20 198 3 113610", "15 10 358 12 719772", "15 6 320 20 660888", "25 12 130 62 692315", "1 27 381 11 371130", "20 9 212 26 534977", "25 12 105 75 152776", "2 7 121 8 933647", "9 16 243 2 478696", "7 18 149 8 368284", "26 14 264 23 509979", "18 23 161 16 765710", "0 8 7 45 709479", "9 16 242 9 953090", "25 2 101 7 502515", "14 1 334 8 866407", "18 13 169 18 546988", "10 27 398 3 504124", "13 9 218 11 877900", "2 7 127 8 995238", "17 26 260 1 958034", "8 24 56 4 741761", "1 4 371 3 897632", "12 13 194 5 357037", "14 15 304 3 350916", "3 25 87 3 631645"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 4998743;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 29;
    int T = 7234;
    vector<string> buses = {"4 20 4647 1218 28393", "12 21 1471 493 904273", "19 2 3283 468 9377", "2 4 3340 926 503214", "19 2 3401 302 203946", "27 28 5984 1126 645335", "14 19 2716 208 17645", "11 28 4877 197 952201", "21 14 2138 124 690242", "12 21 1518 33 695168", "16 18 3893 984 365109", "0 10 234 147 644974", "20 28 5886 5 946900", "4 20 5136 93 596095", "4 20 5711 467 474225", "21 12 1575 370 526341", "21 14 1683 372 184838", "2 4 4015 995 869976", "20 28 6045 205 605875", "28 20 5995 134 858233", "11 16 3448 321 988313", "14 19 2568 23 352074", "19 2 2723 336 94888", "18 27 5019 177 784446", "0 12 1315 511 492054", "10 12 398 1066 61508", "12 21 2028 212 297029", "19 14 2671 129 642524", "27 28 5935 667 941215", "2 5 2014 434 141768", "14 19 2883 8 400865", "19 5 1967 389 978273", "19 11 1830 535 651354", "20 28 6211 128 266216", "21 14 2480 168 40907", "10 12 1397 9 124478", "5 11 2647 631 323263", "0 22 8 259 930411", "4 20 5039 101 541334", "2 4 4048 103 674391", "8 2 1634 158 914747", "22 19 317 81 405562", "18 27 5181 713 838574", "0 10 496 616 143257", "14 2 2899 665 477854", "19 8 912 603 283318", "8 2 1593 134 758157", "10 12 1488 232 843981", "0 10 28 287 329938", "10 12 836 501 734343"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1601693;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 29;
    int T = 812;
    vector<string> buses = {"15 28 588 3 572004", "0 10 63 50 939913", "12 19 324 113 274986", "4 12 174 42 432643", "8 15 475 27 903111", "10 4 119 7 369737", "8 19 400 20 983498", "0 4 59 42 687806", "22 27 288 39 770421", "0 11 16 4 881280", "5 8 372 15 674457", "27 19 394 4 522744", "10 4 105 51 416370", "11 10 45 43 296281", "22 12 119 31 949123", "15 28 745 45 624210", "11 22 43 32 492401", "4 27 141 193 906383", "0 4 20 38 154596", "27 8 286 27 736469", "12 19 412 43 29130", "0 10 70 39 925923", "20 15 509 44 647174", "20 15 514 48 605046", "4 5 130 138 225775", "5 19 413 42 648387", "22 10 92 10 88066", "22 12 206 35 98805", "8 19 427 25 806403", "19 15 469 97 986445", "12 27 235 77 454967", "10 27 116 157 585766", "27 8 341 43 784202", "5 20 382 40 335417", "4 8 167 36 804041", "8 28 436 314 225387", "8 28 466 180 482627", "19 20 459 11 892998", "27 5 348 11 584203", "4 8 139 172 718955", "0 22 19 22 324600", "12 27 254 5 388997", "27 20 316 131 947972"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1098938;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 30;
    int T = 8480;
    vector<string> buses = {"24 8 3103 8 777731", "12 29 5065 1699 745746", "21 6 5463 181 114687", "12 22 1132 469 398745", "9 10 4705 79 732807", "12 21 5145 368 487338", "4 26 1272 29 291199", "8 7 2439 16 133429", "6 21 5670 166 766948", "6 21 1373 327 294916", "13 6 5053 172 788322", "6 29 6110 105 800381", "18 7 4429 114 526390", "20 4 444 269 255419", "8 24 3349 63 918493", "0 27 47 661 662820", "24 13 3699 625 987096", "2 29 6360 652 797506", "14 6 938 3 37493", "21 26 1939 72 375480", "10 5 5275 40 743407", "12 21 5148 21 333159", "8 21 2684 165 343246", "26 16 2452 160 256000", "13 12 4553 163 592738", "12 22 2250 21 739909", "0 20 15 228 346841", "13 8 4391 175 908711", "6 29 6195 826 394025", "27 13 3747 342 16347", "5 29 5780 227 114400", "0 12 396 205 895436", "26 7 1931 254 702215", "0 14 526 206 809201", "24 13 3449 1196 838574", "0 20 555 487 50557", "21 6 5837 349 243399", "7 8 2259 53 259739", "20 4 1078 58 751066", "7 2 5726 498 179942", "22 18 2527 195 401992", "8 9 4584 110 652616", "7 8 2519 26 58201", "8 24 2522 526 605997", "4 26 939 78 74687", "26 7 1762 448 800950", "16 27 2748 686 346759", "13 12 4972 73 169962", "27 29 2212 4952 253673", "26 4 1155 110 190876"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 916493;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 31;
    int T = 7130;
    vector<string> buses = {"17 5 3133 3 249092", "21 17 2146 3 951635", "24 20 4199 265 830531", "22 24 3915 67 474410", "20 16 4181 557 938987", "0 26 546 9 71435", "9 30 5494 162 778371", "16 9 4994 422 289174", "1 15 3477 691 204584", "5 9 3129 5 820590", "10 13 1091 116 110535", "10 13 936 302 813635", "17 5 2740 145 869080", "16 7 4815 621 804124", "9 16 3324 621 347215", "5 9 3410 96 936804", "26 10 766 164 817985", "18 25 1713 851 622928", "17 9 3474 21 426932", "20 16 4520 108 907888", "13 18 1373 213 300682", "16 7 4742 1086 390577", "26 10 564 145 626862", "25 17 2175 179 443948", "17 1 2452 262 652399", "9 5 3258 92 327720", "22 24 3729 36 271347", "0 11 542 127 806001", "25 17 2910 81 659053", "26 10 506 538 612269", "0 26 196 53 263394", "10 18 780 19 617091", "18 25 1963 109 261787", "9 22 3682 176 509252", "4 21 935 915 747830", "15 16 4215 373 555704", "7 30 6363 111 633490", "7 30 6066 280 763009", "13 18 1316 368 327311", "24 16 4082 288 893115", "24 20 3951 41 754757", "9 22 3330 322 637467", "11 30 754 313 18105", "0 4 304 517 886522"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 824106;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 32;
    int T = 890;
    vector<string> buses = {"26 5 280 44 748339", "2 18 547 52 790070", "12 18 498 36 461445", "20 7 661 1 267776", "12 15 496 2 998694", "0 21 24 23 433318", "21 0 70 1 203080", "21 4 134 154 442514", "4 26 147 41 153604", "23 30 733 42 164392", "30 31 841 23 220581", "4 12 141 349 310454", "18 7 606 28 298700", "12 15 472 2 528245", "18 7 612 41 732487", "7 20 666 11 685234", "7 31 667 142 3940", "0 21 103 5 667554", "5 12 352 95 820297", "23 30 753 4 360879", "15 2 499 30 108721", "4 5 302 81 828577", "7 31 729 20 536048", "4 15 362 99 343960", "2 20 610 14 570611", "21 4 66 67 47200", "30 31 782 3 561755", "4 26 303 34 998082", "7 20 646 14 295397", "2 18 561 35 506691", "5 26 339 5 325044", "26 5 351 62 406704", "20 23 716 10 667315", "5 12 456 10 9329", "20 23 680 63 671803", "15 2 505 39 987917"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1555057;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 33;
    int T = 6435;
    vector<string> buses = {"0 6 104 605 471152", "7 21 2977 1547 375199", "0 6 76 298 778745", "10 16 947 419 122306", "7 21 3011 26 209506", "0 6 268 385 48994", "21 30 3679 533 171395", "30 32 4463 856 55576", "10 16 1429 292 758814", "6 10 840 401 4324", "3 7 2491 484 3160", "3 7 2622 844 48483", "21 30 5056 83 658238", "6 10 1120 59 633756", "30 32 5228 87 519282", "16 3 2520 30 943167", "21 30 4711 45 196265", "30 32 5247 109 185183", "16 3 2123 446 287223", "7 21 4092 480 481136", "6 10 793 79 273912", "3 7 2781 122 503293", "16 3 2014 247 78052", "3 16 2458 12 98642", "10 16 1440 74 216424"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 787431;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 34;
    int T = 6000;
    vector<string> buses = {"29 0 574 71 818774", "16 33 4279 373 950288", "6 16 2990 534 692605", "23 19 1400 809 543858", "6 16 3905 3 462500", "19 23 863 406 804814", "6 16 3430 111 224374", "29 19 576 44 293197", "28 23 1967 178 581888", "29 19 378 1801 182709", "0 29 204 29 525709", "28 6 2718 517 766877", "19 23 1523 208 332362", "19 23 1823 28 727140", "0 29 735 8 811083", "28 6 2693 17 822074", "16 33 4182 257 158813", "16 33 3977 925 509272", "0 29 107 477 925092", "6 16 3445 145 956898", "29 19 1133 227 247649", "19 0 709 16 608906", "29 19 775 834 763849", "28 6 2307 271 881845", "29 19 1386 884 177968", "23 28 1756 233 860929", "28 16 3139 516 240131", "23 19 1337 490 568170", "28 19 2097 326 957876", "23 28 1583 289 982675", "19 0 627 48 707837", "16 33 3982 777 341253", "0 29 460 263 91440", "19 23 2429 85 70445", "23 28 2090 504 557462", "28 23 2302 172 63586", "23 28 2600 157 877551", "28 6 2848 488 921461", "28 6 2642 1254 562345"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1616348;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 35;
    int T = 7889;
    vector<string> buses = {"12 10 1958 167 468491", "24 29 3971 52 597608", "19 10 2412 121 516199", "14 13 6568 78 987374", "8 21 5015 96 192870", "22 18 6028 14 436326", "25 21 5342 69 224591", "1 25 4777 22 414473", "27 19 2069 293 438246", "25 22 5391 534 631300", "3 30 1401 220 480030", "4 22 5806 84 199222", "8 21 5211 117 470434", "18 14 6089 170 101987", "4 14 6131 122 652805", "13 31 6697 127 575352", "28 32 4225 62 717710", "7 24 3677 231 755112", "6 23 925 98 135963", "12 19 2243 24 509741", "28 32 4104 184 837811", "4 31 6145 425 942242", "30 12 1653 105 137272", "6 23 762 324 21507", "9 6 688 18 289301", "1 25 4748 53 827809", "16 28 3498 690 369102", "25 21 5104 197 448137", "31 11 6848 32 182332", "4 14 5950 79 869240", "3 30 1389 13 271480", "12 19 1999 340 577771", "23 3 1227 6 203353", "4 22 5796 19 297571", "20 9 563 118 442677", "17 20 117 307 51937", "23 15 1128 13 745338", "0 17 28 28 876591", "11 34 6899 388 974012", "29 28 4050 37 464941", "8 25 4974 85 53043", "21 4 5460 321 53786", "8 14 5425 295 35833", "15 3 1172 165 381525", "16 7 3258 336 220105", "10 16 2598 599 516659", "32 1 4588 149 367660", "12 27 1791 72 235267", "1 8 4743 24 12173", "22 14 6007 437 346216"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 7091155;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 36;
    int T = 7457;
    vector<string> buses = {"23 9 5608 129 548448", "18 9 3803 160 601322", "31 29 1080 51 536007", "26 9 5373 151 365363", "21 31 561 73 549067", "18 28 3766 737 78939", "7 29 2002 147 739978", "0 31 43 658 16396", "0 29 398 774 700240", "20 18 3565 148 820946", "12 18 2478 373 439915", "9 15 5793 464 992086", "26 35 5681 1451 522395", "20 23 3961 1363 468828", "26 35 5718 614 691313", "9 15 5772 621 640266", "26 23 5198 367 223797", "32 20 3177 260 696851", "23 35 6337 456 985756", "28 26 4669 285 376685", "32 26 3513 988 387884", "29 32 2405 190 722055", "28 23 5134 415 171769", "31 7 1551 16 468551", "15 35 6499 394 110630", "26 15 5621 802 200255", "31 12 1412 1107 437619", "29 12 2208 78 935297", "28 26 4630 361 534653", "7 29 1761 378 816443", "7 29 1917 163 484371", "15 35 6277 354 24840", "21 12 1600 33 369809", "32 20 2742 325 158061", "12 32 2643 92 939919", "18 23 4076 1489 572416", "0 21 105 441 121314", "26 23 5150 41 360927", "18 28 4320 176 117756", "0 21 16 313 672567", "20 23 4067 740 513133", "32 18 3319 849 101822", "0 21 212 57 194173", "23 9 5695 51 836571", "0 31 908 73 334522", "32 20 3036 469 345369", "0 7 1952 41 514714", "32 20 2942 461 468475", "31 7 1152 601 146679", "31 32 1051 988 168548"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 883713;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 37;
    int T = 5591;
    vector<string> buses = {"13 22 1323 61 96873", "11 34 359 214 376307", "31 19 2988 3 325146", "27 23 4527 312 652090", "3 36 5408 21 300237", "21 7 2256 85 726934", "2 11 195 110 76049", "9 19 2981 124 762048", "33 27 4389 62 466694", "9 19 2988 96 99677", "6 18 4010 103 712140", "7 31 2372 155 598340", "11 22 718 101 881637", "35 21 2093 143 559763", "6 15 4009 10 905341", "30 13 1029 241 237439", "28 1 1806 88 149176", "35 9 2183 791 100756", "24 3 4422 241 26559", "6 23 4247 218 442317", "26 6 3874 117 538187", "15 3 4222 277 449291", "5 2 155 4 185349", "7 10 2438 116 412451", "21 7 2247 26 395304", "31 10 2549 30 111188", "15 18 4056 40 496957", "23 3 4938 63 252326", "32 8 3363 20 784708", "2 11 169 40 179834", "0 30 166 289 752176", "22 28 1512 40 668564", "34 1 862 787 655376", "1 35 1961 100 165149", "3 36 5029 30 205040", "24 33 4264 84 716587", "26 24 3979 96 604835", "29 26 3091 293 313956", "8 24 3425 830 699386", "10 29 2599 3 827948", "5 17 29 437 917008", "34 17 638 84 669937", "17 30 735 120 849732", "18 24 4150 59 577115", "19 32 3121 172 856260", "0 5 14 5 201740", "29 9 2617 254 407241", "8 26 3425 386 549367", "27 23 4866 16 267599", "19 18 3611 282 273945"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 2943062;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 38;
    int T = 9173;
    vector<string> buses = {"2 37 7996 277 703021", "24 7 5291 266 654901", "36 13 5531 1431 491656", "35 27 2312 22 638735", "19 24 4092 13 805711", "9 14 1847 786 650639", "9 35 1790 304 441486", "14 36 4584 282 562430", "13 12 7213 27 290393", "0 17 936 98 515427", "13 12 7164 154 310810", "17 19 1424 2194 359251", "9 19 1805 547 72242", "22 12 6218 1030 692912", "20 36 5067 119 12045", "24 7 4492 162 893086", "0 14 119 1797 139800", "0 9 380 227 249930", "13 37 6785 1059 879265", "17 9 1315 151 546473", "12 2 7449 167 690161", "20 12 6220 480 751695", "22 13 6476 169 625309", "0 27 1021 163 250702", "35 24 3017 1018 395237", "7 22 5740 47 800077", "14 19 3227 148 108943", "14 19 2865 367 82640", "2 37 8229 355 134447", "35 24 2170 973 549129", "17 27 1167 29 941961", "17 14 1925 238 451979", "36 7 5405 294 105076", "27 36 3448 1844 801147", "19 22 3535 1088 9015", "24 13 5501 755 716154", "14 7 4922 666 831496", "24 22 4675 464 551771", "17 14 1215 138 209928", "24 36 4335 50 606348", "13 12 6971 291 384100", "7 13 6315 19 275290", "24 20 4834 59 647450", "2 37 7957 311 819270", "27 14 2409 441 711616"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1736029;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 39;
    int T = 4601;
    vector<string> buses = {"11 31 2725 45 82019", "20 9 3068 202 692756", "9 25 3886 176 848441", "0 7 25 373 484282", "36 29 919 220 410424", "20 9 3720 95 617518", "31 11 2084 472 140194", "25 34 3534 1 893795", "34 20 3547 165 66661", "27 31 2345 186 27008", "34 20 2829 71 777546", "25 38 3761 58 215262", "31 27 2091 195 87907", "36 7 435 2 596968", "13 15 1435 7 298756", "7 36 271 137 527104", "27 31 2422 303 915764", "25 20 3503 156 768774", "2 15 1637 5 137538", "13 15 1428 104 925373", "38 25 3942 107 48726", "27 34 2890 437 316113", "20 34 3210 171 96754", "9 34 3300 3 405460", "29 13 1354 16 199151", "25 9 3637 222 71648", "27 11 2665 58 327422", "9 20 3549 103 26735", "27 34 2683 133 667314", "36 29 611 384 734723", "31 27 2775 29 826970", "2 11 1802 203 641620", "27 31 2429 58 272421", "20 34 3113 261 553343", "9 25 3390 88 733731", "31 11 2329 154 34130", "38 9 3846 37 85438", "25 38 4064 8 467336", "15 2 1514 102 36691", "0 7 10 74 675855", "11 31 2018 18 27880", "7 36 460 70 856430", "2 11 1669 551 957523", "36 7 432 20 507651", "25 20 3505 173 802786", "27 34 2745 546 892007", "29 13 1041 277 755541", "15 2 1648 27 556415"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 5221457;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 40;
    int T = 6125;
    vector<string> buses = {"15 19 268 533 615978", "3 39 4524 48 841894", "15 11 589 283 844905", "24 3 4768 202 177239", "11 19 404 121 961345", "15 11 258 308 957946", "24 3 4381 98 79097", "33 24 3643 240 730756", "0 15 217 29 393789", "11 19 1007 46 500799", "14 26 2180 551 645588", "11 19 439 148 874457", "26 12 2793 365 498616", "3 39 4388 664 609489", "24 3 4277 6 218904", "19 11 645 301 70897", "14 26 2478 252 220372", "19 31 1287 381 533817", "3 39 5426 51 210478", "31 14 2304 35 396280", "11 19 662 237 846079", "24 3 4561 218 323681", "12 33 3495 176 989178", "12 33 3542 74 364814", "15 11 149 198 377665", "14 26 1988 108 994629", "14 26 2515 212 558609", "19 31 709 57 745372", "12 33 3153 337 153540", "31 19 1179 20 841886", "15 11 173 130 90416", "26 12 2789 250 657488", "33 24 3790 349 696146", "14 24 2385 2267 382447", "26 12 3041 284 163520", "0 15 89 423 156452", "0 15 72 22 916186", "31 14 1696 149 738464", "12 39 4590 350 808329", "19 31 1168 143 298443", "0 15 10 148 439881", "3 39 5526 216 507164", "15 31 536 576 926013", "33 24 3940 101 419072", "33 24 3636 649 419563", "26 12 2877 73 489634", "31 14 1752 438 185049", "31 14 1397 257 171114", "19 31 1277 13 199658", "12 33 3173 430 886022"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 2023743;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 41;
    int T = 5379;
    vector<string> buses = {"25 13 500 1490 56242", "36 11 4250 20 126045", "18 15 95 585 274121", "11 26 4361 135 831656", "36 26 4236 654 428", "25 14 460 14 31285", "38 13 940 814 178027", "13 27 2575 36 273430", "24 13 1561 137 956561", "13 27 2323 95 288447", "38 24 1436 249 647577", "15 38 1337 48 38570", "18 25 141 387 287030", "15 38 698 109 680616", "36 11 3929 292 442910", "26 40 4980 88 95367", "14 15 581 71 844199", "36 5 3737 1 902330", "5 16 3145 244 212853", "33 5 2640 270 348235", "13 24 1847 36 720415", "27 33 3121 65 521093", "16 36 3447 284 696390", "5 16 3748 1 2777", "27 33 2600 15 813991", "24 13 1952 29 989681", "0 18 4 97 844884", "14 15 1270 50 454886", "16 36 4206 39 922682", "26 40 4519 59 28146", "38 24 1152 262 649105", "0 14 112 639 37098", "11 26 4280 109 561695", "0 18 9 67 728176", "33 5 3247 386 936148", "25 14 588 633 296272", "18 25 224 191 559679", "25 24 751 77 975072", "33 16 3366 230 178587", "0 25 25 552 846637"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 3799808;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 42;
    int T = 6121;
    vector<string> buses = {"4 41 4806 89 564360", "5 35 1608 98 693864", "25 5 890 58 772174", "32 29 4505 134 818161", "4 41 5265 213 679813", "5 35 1151 5 962084", "7 19 2388 125 275132", "35 33 1664 171 645497", "5 7 1079 188 338706", "40 27 3462 6 976401", "33 7 1901 327 430030", "0 35 282 1282 644759", "29 4 4656 190 52405", "40 27 3612 14 878906", "32 29 4234 373 373758", "19 7 2356 14 725342", "25 5 645 146 674478", "5 35 920 560 494822", "40 29 4040 151 488937", "0 25 272 338 40468", "7 19 2307 46 877358", "27 32 3959 167 937278", "27 32 3687 792 406209", "19 12 3118 81 59222", "19 12 2886 174 42639", "29 4 4728 64 736443", "12 19 3079 6 111804", "12 40 3240 88 920686", "33 7 2143 144 769320", "35 33 1711 411 586785", "35 5 1510 48 469964", "12 40 3264 5 193739", "0 25 244 73 908943"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 2786317;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 43;
    int T = 9591;
    vector<string> buses = {"20 41 3479 568 487184", "17 2 3075 683 48576", "0 17 845 1423 843868", "10 38 4041 950 275813", "20 17 1896 843 494809", "40 10 1113 1519 764755", "28 37 7002 183 418687", "41 38 4128 893 517629", "41 28 6158 503 691184", "23 17 1718 369 553554", "33 21 8778 111 440314", "21 42 9185 123 13491", "28 21 7524 303 182774", "38 28 5107 1633 141245", "28 21 7050 1518 213471", "41 33 8676 95 180906", "41 37 4345 2966 7076", "37 42 7290 2161 118238", "10 2 3084 791 294354", "40 23 348 595 172431", "41 38 4585 310 361900", "10 41 3192 298 876883", "20 41 1606 908 396696", "23 20 1184 376 882512", "40 23 414 31 699809", "20 17 1664 15 632722", "10 38 4682 416 595129", "17 38 2952 1353 66437", "28 21 7954 545 547639", "28 37 6788 258 424799", "20 10 1711 244 702877", "28 42 7531 597 146820", "37 33 7730 419 126132", "40 17 832 1461 785208", "2 41 3974 78 286925", "33 42 8943 112 923599", "17 41 3047 954 103932", "40 23 688 435 782188", "28 42 8025 109 226952", "37 33 7828 315 27154", "0 40 243 34 508825", "0 40 200 49 827626", "41 38 4113 49 41342", "10 2 3347 620 464015", "17 10 2893 121 608437", "40 20 1502 197 415620", "28 21 8279 611 364184", "38 21 5260 1544 643737"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1198370;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 44;
    int T = 2415;
    vector<string> buses = {"1 27 384 134 839111", "1 27 408 9 75141", "40 37 1489 30 812255", "37 20 1116 156 818634", "20 35 853 283 810877", "13 40 1483 2 69050", "27 20 755 365 646716", "0 42 275 4 958031", "37 13 1545 36 858542", "30 43 1944 83 251174", "0 42 92 96 603911", "23 30 1852 134 513125", "30 43 2052 92 858715", "13 23 1377 215 898625", "1 27 635 60 52592", "35 40 1207 122 719818", "42 1 214 123 895991", "42 1 290 293 896305", "23 30 1836 107 502971", "23 30 1841 105 165972", "20 35 519 44 690319", "13 23 1726 18 538285", "37 13 1228 252 895481", "37 13 1598 46 830292", "35 40 958 32 603480", "23 30 1787 191 356253", "27 20 542 95 225767", "37 43 1143 1043 880391", "1 35 473 70 559933", "40 37 1028 1 331144", "0 42 9 27 857810", "20 35 1303 79 107384", "27 20 470 239 822704", "20 35 725 124 663456", "27 20 701 105 447297", "30 43 2257 50 18928", "0 42 9 33 281474", "42 1 300 17 2317", "13 23 1686 126 760282", "1 27 601 102 813140", "37 13 1094 109 273340", "27 20 435 44 634967", "30 43 2014 10 366798", "35 40 1403 53 932826", "40 37 1367 22 274006", "40 37 878 3 346523", "30 43 2075 78 867669", "35 40 728 34 446930", "13 23 1573 14 988", "42 1 157 193 481319"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 2081026;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 45;
    int T = 8275;
    vector<string> buses = {"11 42 1798 1415 451955", "17 35 3063 527 584208", "43 1 6978 60 802863", "38 42 3997 110 286994", "20 14 1127 409 861153", "3 8 4714 105 725813", "9 44 7919 54 988128", "39 3 4449 166 881982", "41 37 7437 56 817110", "28 35 1573 1253 417316", "38 3 4017 589 128286", "21 5 1204 37 907524", "24 14 1463 17 644234", "7 43 6845 31 347974", "0 28 976 219 667588", "5 28 1293 15 933994", "11 17 2841 200 880841", "1 37 7174 438 382800", "3 12 5047 393 965623", "14 38 1571 1215 545084", "20 14 1245 198 175834", "38 3 4048 288 525636", "40 28 966 140 588978", "20 21 1139 61 263489", "20 5 1041 134 489437", "37 30 7613 80 613755", "0 40 539 211 806270", "1 41 7205 158 98236", "28 24 1312 91 593822", "17 42 3444 794 879445", "35 12 3947 962 421262", "40 20 928 50 293079", "14 35 2611 909 240290", "36 37 7253 209 366050", "12 27 5445 241 956426", "39 36 4736 793 635537", "8 12 5145 99 893665", "27 36 6025 201 177050", "36 7 6246 311 514549", "14 11 1646 124 641156", "3 8 4754 215 70409", "42 39 4239 156 701012", "35 38 3747 228 846338", "40 24 994 159 665491", "35 39 4122 52 911094", "30 9 7861 46 82312"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 4681780;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 46;
    int T = 1429;
    vector<string> buses = {"0 36 298 144 400862", "0 36 252 160 351191", "0 36 566 390 300654", "37 36 923 30 781250", "26 37 470 24 288418", "22 40 710 103 754288", "45 36 547 374 454154", "23 37 718 31 81733", "37 36 879 16 68122", "36 45 1018 78 691373", "36 45 528 422 413343", "21 23 464 339 439477", "26 23 657 8 485366", "8 22 445 257 309187", "45 29 1165 10 780994", "0 36 12 333 485080", "36 37 898 23 598914", "44 25 181 71 77845", "37 29 1101 69 653200", "0 21 99 36 964791", "26 23 508 24 382365", "23 37 818 15 721981", "19 45 1229 61 510597", "25 8 282 145 861275", "26 36 880 138 807935", "23 26 559 59 945653", "21 26 425 74 969343", "36 29 1042 40 699962", "36 45 663 180 654327", "38 19 986 160 179004", "0 36 750 180 809941", "36 29 1017 72 206868", "29 45 1091 34 421675", "40 38 948 31 866665", "0 36 222 417 626767", "21 26 275 212 318599", "40 38 825 24 669270", "29 45 1194 24 586592", "0 21 107 163 615002", "0 44 35 30 735586", "0 36 607 264 555472", "0 21 77 271 962303", "26 23 488 44 342338", "36 45 426 19 603474", "21 26 362 106 823245", "36 45 804 457 970054"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 764534;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 47;
    int T = 3916;
    vector<string> buses = {"27 2 2142 360 108801", "38 37 582 22 2203", "33 44 166 29 895703", "21 41 2498 203 919161", "38 1 593 64 337427", "2 46 3723 91 297883", "33 19 483 541 780827", "44 38 437 100 917676", "34 2 3501 173 972809", "23 34 3377 59 916802", "19 6 1186 10 652697", "41 23 3076 23 343075", "1 39 1117 320 574692", "44 37 547 64 129908", "33 38 149 56 23975", "1 19 999 19 790987", "44 37 489 156 990486", "6 41 1651 738 657968", "6 39 1294 68 179444", "6 39 1433 4 57738", "37 1 778 197 79069", "6 41 1786 1278 728803", "37 19 715 296 909535", "19 41 1213 958 566471", "0 37 501 84 819859", "27 41 1844 457 974657", "6 41 1713 760 268468", "44 6 780 136 864810", "44 19 387 717 904640", "0 44 39 72 610735", "19 21 1732 151 281295", "1 19 1016 89 804341", "0 33 41 74 709591", "27 23 1830 834 777752", "33 37 184 343 538847", "23 34 3208 10 653166", "39 27 1528 62 945405", "41 46 3031 135 162946", "27 21 2064 414 854396", "37 6 1067 62 736424", "19 27 1488 4 958253", "41 2 2820 221 751653"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1903607;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 48;
    int T = 7634;
    vector<string> buses = {"19 36 2073 5 674441", "0 19 1181 427 887625", "36 29 2733 412 661562", "29 37 3331 1040 880168", "7 47 5478 1546 358890", "17 29 1874 831 917569", "5 47 6921 267 756462", "29 4 3654 578 494642", "0 15 200 317 528997", "15 17 636 657 776468", "29 4 3416 860 88100", "36 7 2094 1888 691880", "15 36 671 1931 530898", "29 37 3489 73 471973", "17 29 1582 1092 396044", "7 4 4063 504 842854", "17 36 1520 244 122044", "4 37 5011 491 499788", "17 19 1355 15 684428", "5 47 7036 330 638273", "29 4 4635 163 475659", "0 15 113 462 909218", "17 7 1946 422 350544", "37 5 5632 942 825851", "36 37 4159 557 318435", "36 29 2140 622 428406", "19 29 1404 664 44762", "0 15 100 209 355407", "19 29 1920 151 494437", "17 7 3106 815 740560", "15 29 566 317 732508", "36 37 2064 2179 168650", "7 5 5261 162 607319", "7 4 4056 896 506333", "7 37 4221 308 888960", "7 37 4980 161 520291", "15 19 1331 421 203777", "36 29 2545 185 289643", "37 47 5550 1520 391967", "17 7 3668 135 110289", "19 7 1442 2554 847308", "29 7 3427 508 890507", "15 17 1191 144 344593", "37 47 5553 1763 510633", "19 36 1915 103 15926", "15 17 755 215 880681"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1135727;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 49;
    int T = 7406;
    vector<string> buses = {"23 48 6176 770 409214", "7 46 5039 540 655371", "16 2 1144 18 523357", "2 7 4464 131 892220", "46 48 5773 449 426777", "0 45 526 28 765785", "39 41 1549 393 31488", "45 48 3367 2953 174867", "41 16 1267 431 322178", "6 43 5260 167 956248", "16 42 2778 561 860268", "41 15 2618 102 732919", "46 48 5286 933 244447", "47 21 566 278 783218", "45 48 1867 1045 946329", "39 41 839 216 257979", "21 16 1009 77 813000", "16 42 3103 181 742221", "41 16 2470 408 174503", "0 45 1667 187 149752", "42 2 4200 148 518661", "39 41 2022 373 662615", "2 7 4359 113 308827", "42 2 4389 119 958980", "0 45 1031 3117 439339", "7 1 4384 88 224550", "39 41 1231 1229 538845", "0 39 29 491 58427", "38 6 4724 398 692700", "0 45 661 754 452373", "0 39 234 801 33070", "45 48 1303 570 942280", "0 45 1715 1239 554776", "2 7 4547 532 585770", "17 39 1890 24 98092", "7 46 5443 773 78261", "43 23 5605 74 756369", "2 17 1297 374 621754", "41 16 2176 169 907770", "42 2 4032 92 733490", "0 39 746 189 764534", "15 11 3697 147 680341", "7 46 5125 44 686719", "11 7 4158 209 850874", "1 38 4548 89 282837", "45 48 4330 628 872206", "46 48 6257 28 507329", "48 45 3254 120 211377", "0 47 122 28 55719", "16 42 2931 846 705277"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 324619;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 50;
    int T = 1020;
    vector<string> buses = {"24 47 284 119 390940", "15 14 316 3 838995", "0 14 128 135 172177", "37 49 729 23 260468", "24 20 225 89 530521", "8 49 729 111 780372", "14 15 130 440 27456", "0 14 48 32 96963", "47 49 397 556 748539", "47 15 282 4 790259", "15 37 619 102 796164", "14 3 117 39 896135", "8 49 816 81 460979", "8 49 535 63 154959", "8 15 574 85 945108", "24 20 234 42 641144", "37 49 873 123 57899", "14 3 114 207 284801", "3 47 338 128 927236", "24 15 236 67 167423", "47 15 419 109 502419", "15 8 355 304 984520", "15 8 676 13 690169", "14 3 171 148 905180", "3 47 335 42 76825", "3 47 353 5 317054", "15 8 648 130 437273", "0 24 31 110 147426", "47 15 393 50 933266", "24 47 295 23 495240", "15 8 457 12 235435", "0 14 1 4 477990", "20 47 352 30 63327", "15 37 544 197 806898", "3 47 162 50 937853", "0 14 21 128 455082", "14 3 322 18 859490", "47 15 562 81 5659", "47 15 405 97 454164", "8 49 799 127 477684"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 705243;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 50;
    int T = 3580;
    vector<string> buses = {"32 49 3137 227 71022", "44 49 3070 67 881983", "20 25 1491 101 256716", "26 37 1928 59 245456", "37 41 2100 162 248478", "0 33 152 91 31850", "9 28 2504 192 877243", "41 46 2720 18 220999", "46 49 2841 58 471591", "45 31 803 295 438594", "13 30 1897 101 161593", "17 37 1448 3 645796", "20 25 1488 43 16618", "19 24 1539 28 419796", "30 32 2194 46 149717", "31 17 1295 105 710858", "29 34 747 75 696517", "46 2 2819 50 329663", "27 11 366 107 478970", "45 29 459 38 175728", "20 25 1363 290 362498", "40 43 946 131 228156", "16 19 1380 13 24734", "33 45 297 32 58716", "20 30 1603 288 901557", "34 20 1279 33 386939", "11 32 571 165 176783", "28 46 2700 14 228091", "32 44 2580 215 878695", "45 20 351 84 778440", "13 30 1992 151 330066", "43 16 1139 27 428187", "30 32 2148 382 908225", "0 27 37 283 946517", "30 44 2469 470 579120", "25 13 1656 95 610578", "32 44 2868 32 49216", "13 30 1832 310 147714", "2 49 3029 72 441637", "30 32 2261 274 177952", "17 26 1793 77 941386", "45 34 544 253 78590", "45 20 482 256 526514", "32 40 776 84 138556", "44 49 2812 558 243200", "24 17 1614 113 881262", "37 9 1522 66 329879", "45 20 444 157 717437", "0 45 252 139 599011", "45 29 569 54 905979"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1551744;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 50;
    int T = 9658;
    vector<string> buses = {"37 36 3115 99 461947", "40 12 728 330 969191", "24 25 1655 300 394122", "41 3 3529 33 291932", "2 10 7992 48 909820", "29 14 1045 45 161890", "25 5 2407 112 318902", "39 4 7716 124 207077", "14 40 1099 181 551288", "12 24 1530 46 664556", "23 30 4253 41 912692", "12 24 1170 185 361058", "5 47 2479 53 956555", "30 26 5145 254 962865", "0 29 479 76 323478", "4 2 7902 80 37172", "37 36 2904 153 400746", "0 29 18 32 253201", "3 23 3768 250 750355", "29 14 59 44 134636", "40 12 1299 173 859812", "23 30 4439 206 117942", "24 25 1478 30 874766", "47 37 2683 144 49386", "19 27 5855 767 290129", "2 10 8325 69 370907", "47 37 2935 99 468986", "5 47 2539 293 173148", "19 27 6980 2 74642", "43 19 5379 378 295257", "36 41 3273 81 46911", "27 39 6761 484 118606", "25 5 2072 392 101710", "30 26 4333 292 524877", "36 41 3262 42 472448", "14 40 255 410 645431", "43 19 6452 515 357183", "39 4 7283 288 802666", "33 44 8837 35 941372", "27 39 7285 154 472153", "26 43 5410 120 172374", "44 49 8970 446 885976", "3 23 4064 46 414004", "44 49 8746 326 885667", "26 43 4825 234 511222", "4 2 8265 50 858575", "10 33 8287 113 64958", "41 3 3332 423 93827", "33 44 8498 102 848087", "10 33 8583 131 691567"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 9826217;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 50;
    int T = 1299;
    vector<string> buses = {"26 49 777 86 446742", "12 24 497 49 393415", "26 11 1003 67 951697", "12 16 597 164 79618", "46 37 370 20 317945", "29 21 277 38 91141", "16 26 665 223 22021", "29 16 414 242 901762", "46 29 211 22 922341", "37 12 382 48 471298", "26 49 729 94 482098", "46 29 220 34 677654", "21 29 331 2 874403", "37 24 361 21 467016", "42 49 1139 8 657517", "26 12 746 61 312202", "16 12 766 4 796245", "11 42 1009 120 116460", "16 24 484 93 144227", "26 49 781 207 23683", "37 21 353 42 115860", "12 26 821 139 611218", "12 26 608 95 927713", "24 12 703 81 146017", "26 11 918 20 131276", "26 12 723 6 333821", "0 46 2 33 246541", "0 46 3 34 562417", "24 16 409 64 423970", "11 42 1127 8 442528", "26 16 704 49 187279", "21 37 425 43 692223", "42 49 1253 5 322906", "16 24 581 7 833290", "37 24 485 173 853417", "16 24 538 100 742139", "11 26 961 37 671843", "29 21 365 44 715801", "16 12 482 12 736971", "12 49 514 348 257054", "21 37 318 18 646747", "0 46 145 38 92168", "16 12 578 62 310420", "46 0 61 30 326062", "26 42 1167 8 773412", "24 16 683 61 492459", "24 21 388 29 131927"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 2236062;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 50;
    int T = 240;
    vector<string> buses = {"35 49 100 40 906586", "47 35 86 21 843148", "35 47 69 34 879608", "35 49 94 45 86888", "35 49 187 20 598639", "0 35 166 21 611618", "35 49 170 10 246334", "0 35 21 77 659484", "0 35 53 120 848385", "47 49 47 171 127301", "0 47 3 46 597734", "47 35 37 55 319749", "47 49 114 29 896488", "47 35 97 69 261215", "0 47 75 16 450675", "0 47 22 3 148249", "35 49 139 53 120278", "35 49 121 78 866034", "35 47 102 10 702529", "0 35 32 31 171722", "0 35 30 76 856109", "47 35 94 38 294616", "0 47 15 24 5201", "0 47 27 24 391082", "47 0 34 26 452348", "47 35 66 7 943799", "47 49 178 23 205749", "0 47 10 22 737231", "47 49 135 70 405739", "49 35 152 23 689176", "47 0 39 10 991688", "0 47 21 53 324858", "47 0 29 1 141842", "49 35 126 7 376935", "35 49 190 14 447951", "0 47 6 26 758820", "47 49 156 57 372829", "35 49 119 3 667928", "47 35 45 36 63723", "47 35 159 17 982816", "47 35 38 29 112404", "47 35 122 7 483280", "35 47 76 3 683861", "0 47 26 3 142731"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 132502;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 50;
    int T = 1718;
    vector<string> buses = {"6 13 931 10 17556", "12 41 1007 187 487114", "0 2 33 112 631830", "7 25 679 33 755227", "42 48 1226 24 672110", "43 49 1510 11 638922", "2 12 472 142 212486", "2 12 698 92 470484", "41 49 1451 75 839304", "2 12 478 109 970689", "11 15 332 50 353953", "41 49 766 68 825151", "48 12 1312 100 815706", "13 10 1002 25 460032", "41 49 979 301 98467", "0 2 19 19 791003", "41 49 908 166 570893", "0 31 30 194 838105", "41 49 878 317 538194", "20 33 581 8 55356", "12 43 1475 10 950934", "12 41 876 195 230530", "41 49 1082 158 847681", "12 41 486 123 981107", "0 2 145 265 259751", "0 2 102 40 318368", "9 20 457 118 183042", "2 12 396 237 990682", "12 41 686 57 701144", "0 2 20 281 94584", "2 12 425 228 202075", "0 2 82 174 40213", "0 2 70 258 186868", "41 49 1201 238 480685", "2 12 277 187 592104", "12 41 705 64 307858", "12 41 577 65 587954", "12 41 879 570 899758", "15 44 433 4 593012", "37 6 819 97 362300", "31 11 265 53 446524", "44 9 439 12 498495", "2 12 665 167 574673", "25 37 748 39 44725", "2 12 199 160 591866", "12 41 838 12 909073", "33 7 607 45 41178", "41 49 944 60 988658", "10 42 1069 20 658626", "0 2 15 168 992878"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 648613;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 26;
    int T = 10000;
    vector<string> buses = {"0 1 0 1126 630", "0 2 0 1202 672", "1 2 1127 75 983", "1 3 1127 155 826", "2 3 1203 79 22", "2 4 1203 231 108", "3 4 1283 151 59", "3 5 1283 218 582", "4 5 1435 66 318", "4 6 1435 258 415", "5 6 1502 191 784", "5 7 1502 341 691", "6 7 1694 149 654", "6 8 1694 654 123", "7 8 1844 504 534", "7 9 1844 871 109", "8 9 2349 366 808", "8 10 2349 752 811", "9 10 2716 385 307", "9 11 2716 1106 119", "10 11 3102 720 803", "10 12 3102 731 312", "11 12 3823 10 496", "11 13 3823 1901 400", "12 13 3834 1890 810", "12 14 3834 2280 580", "13 14 5725 389 549", "13 15 5725 504 902", "14 15 6115 114 533", "14 16 6115 304 917", "15 16 6230 189 839", "15 17 6230 250 593", "16 17 6420 60 213", "16 18 6420 229 300", "17 18 6481 168 635", "17 19 6481 1078 763", "18 19 6650 909 677", "18 20 6650 1162 959", "19 20 7560 252 379", "19 21 7560 299 703", "20 21 7813 46 760", "20 22 7813 276 252", "21 22 7860 229 768", "21 23 7860 251 832", "22 23 8090 21 718", "22 24 8090 1037 159", "23 24 8112 1015 224", "23 25 8112 1609 107", "24 25 9128 593 651"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 6089;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 26;
    int T = 10000;
    vector<string> buses = {"0 1 0 92 956", "0 2 0 894 916", "1 2 93 801 220", "1 3 93 879 543", "2 3 895 77 899", "2 4 895 598 170", "3 4 973 520 857", "3 5 973 933 493", "4 5 1494 412 511", "4 6 1494 856 393", "5 6 1907 443 327", "5 7 1907 606 690", "6 7 2351 162 27", "6 8 2351 478 146", "7 8 2514 315 788", "7 9 2514 519 828", "8 9 2830 203 838", "8 10 2830 585 33", "9 10 3034 381 307", "9 11 3034 1105 70", "10 11 3416 723 997", "10 12 3416 1238 226", "11 12 4140 514 157", "11 13 4140 998 476", "12 13 4655 483 454", "12 14 4655 561 690", "13 14 5139 77 684", "13 15 5139 192 872", "14 15 5217 114 730", "14 16 5217 400 718", "15 16 5332 285 353", "15 17 5332 538 452", "16 17 5618 252 497", "16 18 5618 345 146", "17 18 5871 92 361", "17 19 5871 103 473", "18 19 5964 10 293", "18 20 5964 40 747", "19 20 5975 29 508", "19 21 5975 335 895", "20 21 6005 305 72", "20 22 6005 1069 765", "21 22 6311 763 895", "21 23 6311 1990 694", "22 23 7075 1226 831", "22 24 7075 2924 213", "23 24 8302 1697 266", "23 25 8302 1697 173", "24 25 10000 1 308"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 5124;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 26;
    int T = 10000;
    vector<string> buses = {"0 1 0 436 943", "0 2 0 641 391", "1 2 437 204 701", "1 3 437 492 882", "2 3 642 287 694", "2 4 642 663 299", "3 4 930 375 824", "3 5 930 574 662", "4 5 1306 198 46", "4 6 1306 895 586", "5 6 1505 696 602", "5 7 1505 728 128", "6 7 2202 31 612", "6 8 2202 533 923", "7 8 2234 501 90", "7 9 2234 575 945", "8 9 2736 73 119", "8 10 2736 179 948", "9 10 2810 105 551", "9 11 2810 453 284", "10 11 2916 347 43", "10 12 2916 676 523", "11 12 3264 328 133", "11 13 3264 1495 716", "12 13 3593 1166 682", "12 14 3593 2413 166", "13 14 4760 1246 71", "13 15 4760 1430 408", "14 15 6007 183 309", "14 16 6007 779 40", "15 16 6191 595 727", "15 17 6191 969 789", "16 17 6787 373 177", "16 18 6787 715 237", "17 18 7161 341 924", "17 19 7161 784 787", "18 19 7503 442 600", "18 20 7503 750 744", "19 20 7946 307 524", "19 21 7946 523 371", "20 21 8254 215 428", "20 22 8254 946 130", "21 22 8470 730 218", "21 23 8470 758 79", "22 23 9201 27 92", "22 24 9201 57 54", "23 24 9229 29 49", "23 25 9229 770 370", "24 25 9259 740 640"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 3269;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 3;
    int T = 7;
    vector<string> buses = {"0 1 0 5 1", "1 2 6 1 40", "0 1 1 2 5", "1 2 4 4 5"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 26;
    int T = 10000;
    vector<string> buses = {"16 18 4696 271 78", "2 4 472 595 563", "17 19 4813 313 379", "1 2 412 60 543", "10 12 3062 318 878", "12 13 3380 451 172", "20 22 5603 1497 991", "16 17 4696 117 565", "17 18 4813 154 752", "8 10 2268 794 38", "21 22 6244 856 89", "14 15 3914 329 514", "11 12 3289 91 984", "8 9 2268 493 920", "22 24 7100 2352 367", "4 5 1067 645 93", "9 11 2761 528 306", "5 6 1712 98 280", "2 3 472 340 438", "24 25 9452 370 23", "6 8 1810 458 714", "22 23 7100 1342 753", "11 13 3289 542 137", "10 11 3062 227 342", "3 4 812 255 355", "7 8 1904 364 720", "9 10 2761 301 854", "19 21 5126 1118 71", "0 2 0 472 326", "13 15 3831 412 608", "15 17 4243 570 92", "1 3 412 400 241", "23 25 8442 1380 245", "4 6 1067 743 98", "13 14 3831 83 374", "18 19 4967 159 691", "19 20 5126 477 616", "23 24 8442 1010 520", "7 9 1904 857 886", "21 23 6244 2198 414", "6 7 1810 94 144", "12 14 3380 534 755", "18 20 4967 636 983", "5 7 1712 192 531", "15 16 4243 453 66", "0 1 0 412 900", "14 16 3914 782 395", "3 5 812 900 63", "20 21 5603 641 162"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 3;
    int T = 7;
    vector<string> buses = {"0 1 0 5 1", "1 2 6 1 40", "0 1 1 2 5", "1 2 4 12 5"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 2;
    int T = 100;
    vector<string> buses = {"0 1 0 1 1"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 9;
    int T = 100;
    vector<string> buses = {"0 3 1 6 15", "0 6 0 23 20", "6 2 25 15 30", "6 1 30 15 40", "3 1 15 35 10", "3 2 30 80 40", "1 5 55 25 25", "1 2 49 31 10", "2 8 85 10 10", "5 8 83 15 5"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 3;
    int T = 1000;
    vector<string> buses = {"0 1 0 4 3", "1 2 5 3 4", "1 2 5 4 3", "0 2 0 1001 2"};
    OnTime* pObj = new OnTime();
    clock_t start = clock();
    int result = pObj->minCost(N, T, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22658346&rd=10663&pm=7423
********************************************************************************
#include<string> 
#include<vector> 
#include<queue> 
 
using namespace std; 
 
int Cost[10001][50]; 
queue < pair<int, int> > q; 
 
#define INF 1000000000 
 
int a[51][5]; 
 
class OnTime 
{ 
  int l1, l2; 
public: 
  int minCost(int n, int t, vector<string> a_) 
  { 
    int l1, l2, l3; 
    for(l1=0;l1<=10000;l1++) 
    { 
      for(l2=0;l2<n;l2++) 
      { 
        Cost[l1][l2] = INF; 
      } 
    } 
    for(l1=0;l1<a_.size();l1++) 
    { 
      sscanf(a_[l1].c_str(),"%d %d %d %d %d",&a[l1][0],&a[l1][1],&a[l1][2],&a[l1][3],&a[l1][4]); 
    } 
    Cost[0][0] = 0; 
    q.push(make_pair(0, 0)); 
    while(!q.empty()) 
    { 
      l1 = q.front().first; 
      l2 = q.front().second; 
//      printf("(%d,%d) : %d\n",l1,l2,Cost[l1][l2]); 
      q.pop(); 
      for(l3=0;l3<a_.size();l3++) 
      { 
        if(l2 == a[l3][0] && ((l1 == 0) || (l1 < a[l3][2])) && a[l3][2] + a[l3][3] <= t && Cost[l1][l2] + a[l3][4] < Cost[a[l3][2]+a[l3][3]][a[l3][1]]) 
        { 
          q.push(make_pair(a[l3][2]+a[l3][3],a[l3][1])); 
          Cost[a[l3][2]+a[l3][3]][a[l3][1]] = Cost[l1][l2] + a[l3][4]; 
        } 
      } 
    } 
    int sol = INF; 
    for(l1=0;l1<=t;l1++) 
    { 
      if(Cost[l1][n-1] < sol) 
      { 
        sol = Cost[l1][n-1]; 
      } 
    } 
    if(sol == INF) sol = -1; 
    return sol; 
  } 
};

********************************************************************************
*******************************************************************************/