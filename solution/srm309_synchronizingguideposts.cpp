/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6242
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

class SynchronizingGuideposts {
public:
    long minCost(vector<string> guideposts, int C);
};

long SynchronizingGuideposts::minCost(vector<string> guideposts, int C) {
    long ret;
    return ret;
}


int test0() {
    vector<string> guideposts = {"6 -1 5", "2 10 4", "10 0 5", "8 6 5", "20 -6 4"};
    int C = 1000;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> guideposts = {"59 23 13", "9 8 28", "91 18 50", "32 10 80", "110 61 120", "54 45 18", "73 24 118", "30 8 73"};
    int C = 5;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 479;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> guideposts = {"79 4 114", "68 41 102", "80 80 68", "48 1 50", "59 17 34", "118 59 17", "29 3 11", "31 26 48", "74 27 2"};
    int C = 46;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 5731;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> guideposts = {"61 -55 20", "35 -25 6", "53 -14 78", "52 -16 78", "71 49 21", "80 71 72", "70 61 7", "23 68 125", "20 -16 9", "99 44 82", "78 -58 100", "56 -16 70", "14 9 3", "86 63 99"};
    int C = 735;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 207977;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> guideposts = {"109 -99 82", "23 9 62", "104 39 88", "64 17 86", "100 -96 23", "101 -86 87", "11 10 5", "58 -24 25", "34 -26 65", "26 21 113", "110 -25 116", "42 9 10", "57 14 105"};
    int C = 908;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 39432;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> guideposts = {"126 31 35", "122 -116 17", "21 18 4", "32 2 11", "92 -98 35", "110 115 106", "82 -67 98", "101 43 77", "63 -46 2", "45 -26 54", "122 115 15", "50 89 109", "78 -67 90", "113 89 87", "22 19 17", "76 -44 117", "82 19 40", "22 104 32", "55 2 73", "54 -46 5", "15 -12 12", "27 -13 43", "100 -12 74", "80 18 7", "77 32 53", "108 -52 76", "80 -16 37", "61 29 94", "54 -122 10", "93 74 46", "78 14 100", "9 -4 95"};
    int C = 386;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 320706;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> guideposts = {"108 -22 119", "13 -2 7", "3 1 9", "1 0 0", "18 -3 121", "107 -33 52", "4 0 0", "4 1 123", "27 -4 25", "4 -4 106", "6 4 18", "117 -50 7", "96 -13 10", "77 -22 92", "109 -55 67", "4 2 2", "19 -16 65", "2 -2 0", "99 7 68", "22 -20 82", "44 14 6", "83 33 59", "108 28 59", "11 -9 66", "32 -103 119", "63 39 39", "59 23 58", "61 -14 71", "82 -26 10", "63 -34 45", "66 -15 85", "74 -2 95", "78 -58 84", "38 -30 104", "14 -1 7", "21 -1 111", "51 35 11", "70 -4 91", "84 -64 110", "9 3 84", "111 -41 6", "85 -75 84", "69 39 126", "32 -13 26", "48 43 45", "16 -42 111", "41 -115 4", "34 20 15", "25 -19 11", "32 10 19"};
    int C = 462;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 267034;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> guideposts = {"66 40 47", "37 25 50", "6 -3 59", "88 85 110", "31 -31 1", "84 6 36", "52 1 6", "1 0 106", "107 56 109", "64 -52 37", "51 -31 89", "76 25 117", "81 40 42", "121 34 48", "117 90 90", "126 -60 26", "98 -31 85", "31 -5 120", "106 83 110", "121 -92 50", "79 -12 51", "67 -80 30", "77 21 116", "58 -6 48", "85 -75 55", "17 -3 2"};
    int C = 26;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 9212;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> guideposts = {"914 -586 752", "215 -40 1782", "3282 -1317 429", "3513 2972 2189", "1771 1169 1778", "3478 -424 3568", "3014 1464 780", "1261 644 862", "3106 -1570 2075", "157 90 111", "1504 1131 71", "3604 -2492 3245", "1789 -958 168", "2686 226 363", "2053 -1649 2491", "2485 2228 809", "2310 1367 2265", "3269 124 911", "3665 -1524 3283", "316 96 2696", "3714 -2822 3179", "3489 -1241 1531", "2477 3579 1240", "1216 -3658 3737", "2464 1914 833", "2239 3743 2223", "1436 133 3080", "3 1 3035", "4080 -2088 1849", "376 -273 172", "599 -467 1239", "2746 285 975", "3605 -2414 3369", "2605 -1235 3415", "1819 1114 1619", "2061 46 74", "1469 -729 2651", "1264 571 590", "193 499 459", "2399 1666 783", "2511 -1830 137", "358 -341 7", "141 115 1457", "2129 935 836", "3301 904 1154", "3052 1237 788", "3914 3670 446", "3075 -1715 3394", "1532 -554 778", "503 -272 460"};
    int C = 693;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 24433960;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> guideposts = {"2519 2284 3482", "540 -61 3943", "328 227 4030", "1914 1477 630", "312 -134 9", "744 234 227", "2159 462 2844", "2532 -2498 1335", "3430 523 3851", "2868 1741 3784", "3013 1381 4018", "3748 165 293", "232 92 2415", "3807 284 53", "2223 -2045 611", "2695 -2579 610", "26 -25 2711", "1286 220 3728", "2432 -1597 643"};
    int C = 485;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4314813;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> guideposts = {"655 219 1638", "3458 -1985 2795", "261 -17 1349", "2528 -2432 3426", "1202 811 3510", "833 -136 2074", "1891 -1077 993", "2078 2519 181", "3851 -3307 3112", "2715 -2534 1988", "800 -282 2652", "3686 -1024 66", "931 -724 3074", "553 290 2927", "3965 -1780 886", "2218 1283 3365", "1825 16 366", "4036 3102 103"};
    int C = 861;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 7326648;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> guideposts = {"2661 162 4060", "4030 3268 3319", "2111 -1747 3218", "1436 -1071 1041", "1149 846 143", "2135 -1822 2243", "2406 -2114 2406", "1098 947 2218", "3476 -1436 1614", "1652 787 2287", "658 -278 3913", "1239 -249 1414", "443 79 773", "3763 2881 2875", "3447 21 83", "3900 3542 1130", "74 21 1605", "2949 1056 1721", "90 41 79", "1193 -412 468", "1351 116 2188", "2435 2318 365", "3992 -2700 60", "1907 -65 230"};
    int C = 870;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 14747172;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> guideposts = {"4068 -2164 4093", "1260 -970 63", "3257 2079 332", "3091 411 3849", "820 54 2517", "1493 -1048 508", "1042 -914 516", "2744 2060 2355", "3255 -3091 654", "1335 -471 274", "3920 -3335 3775", "1200 5 205", "3697 3646 2975", "2416 4 512", "1711 460 616", "3987 2191 387", "1471 -3583 3596", "1724 -1560 1051", "3614 -588 2882", "3850 3752 3261", "3930 -1681 3125", "4006 -3214 710", "3683 -2944 2358", "2527 887 1914", "1693 -1679 2031", "3003 -463 1738", "896 711 475", "1876 11 2472", "1033 -580 210", "2180 1871 466", "1108 -573 653", "2226 773 2232", "3848 -1571 3796", "2229 62 3323", "1924 1416 1413", "804 525 730", "1776 2926 214", "1440 -640 977", "2458 1435 1890", "3525 -2702 3255", "1865 -726 2300", "1774 205 1825", "2157 1676 676", "2038 -90 466", "2898 1586 2433", "1168 -1166 3454", "1986 -967 753", "3060 -582 3630", "1216 -528 715", "1778 1427 1794"};
    int C = 461;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 13122982;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> guideposts = {"1495 -911 423", "449 12 2502", "685 3724 37", "92 -63 90", "165 34 1470", "2057 45 582", "822 -780 780", "3754 -52 3072", "3902 -3080 3875", "3423 2362 1016", "1249 167 2399", "1140 -976 563", "3457 1164 3019", "2231 319 295", "175 -34 464", "1643 -858 1716", "3145 -491 2585", "630 623 3312", "3866 -1165 1283", "131 49 89", "693 -214 2914", "1318 -606 551", "2163 -791 2194", "3400 -877 3939", "3751 -667 2826", "2151 -1388 3577", "3726 -1496 769", "2413 1270 315", "2186 97 1363", "2600 1711 1344", "927 -128 3565", "1960 1554 722", "3670 -1328 574", "2581 738 2750", "613 -598 355", "2236 -1058 213", "2519 -1669 644", "2898 1346 3199", "2952 -544 3134", "3029 -1087 2665", "1579 559 3334", "105 63 70", "3134 1361 3522", "2843 2087 1345", "2188 234 1512", "1408 -427 1100", "563 -1570 1063", "2175 1941 917", "78 -38 1563", "3277 -2277 208"};
    int C = 491;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 12630335;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> guideposts = {"593 298 3802", "2715 249 553", "561 226 332", "177 -148 2780", "2889 161 2872", "4009 -480 698", "241 -173 945", "294 -109 1962", "3283 2402 623", "1338 428 1095", "3384 2064 1434", "881 3587 626", "1259 -724 1782", "3724 3418 3010", "48 41 41", "1457 1017 3388", "3952 -1634 756", "3619 -1967 271", "3967 1334 2576", "699 55 2074", "2216 2795 2709", "2746 2644 3719", "2281 -950 205", "4013 -1308 460", "768 2288 2723", "632 172 958", "2870 -1603 2277", "2500 -1797 1449", "1042 620 1875", "101 -90 3972", "84 -82 80", "2161 -182 2747", "3307 1647 2857", "2078 1401 1320", "3263 2931 1244", "1960 676 2090", "396 -163 1875", "3014 2620 1506", "2079 1776 1674", "3706 3557 733", "944 -806 298", "63 -1 50", "818 -509 1234", "1508 847 2142", "1230 -329 1050", "920 -77 4004", "3819 1548 3334", "1000 436 2813", "865 2292 2222", "2504 -216 1622"};
    int C = 457;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 14481872;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> guideposts = {"1020 -3395 3803", "279 -240 1893"};
    int C = 649;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2414;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> guideposts = {"4006 -1387 1711", "1643 -1022 2460", "618 199 257", "3377 2102 2782", "2711 -1148 3492", "3910 -1978 2980", "1121 364 431", "3756 -2678 3733", "56 25 3953", "1361 930 949", "790 86 644", "1406 3638 2251", "2010 10 1077"};
    int C = 822;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2394939;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> guideposts = {"552 -187 33", "405 147 3399", "387 1 1927", "1243 -2422 1088", "465 -435 3760", "3277 -91 1013", "2252 -2169 1544", "2391 554 449", "874 -677 3046", "2986 2912 3068", "2169 1565 2086", "2250 1146 1655", "2626 1938 491", "3876 -726 351", "709 -100 3376", "1427 -839 1158", "3136 3008 3749", "3951 3758 1937", "40 -11 3772", "168 -115 78", "186 -69 3470", "1530 1315 543", "3532 1708 1968", "2229 -172 723", "905 -3741 3271", "694 278 484", "573 -292 1666", "3713 -2249 3326", "92 35 3588", "154 6 2815", "3170 -2833 3774", "658 90 1649", "2635 -910 328", "3429 -1561 756", "171 1983 3527", "19 1 3834", "942 610 886", "2213 -2412 142", "2186 1560 1760", "2293 311 3498", "2606 -895 1563", "3575 -1960 984", "2086 -789 2668", "1875 -497 1014", "2842 2199 2177", "3726 990 575", "3661 -2342 3188", "2073 -1145 1486", "1022 486 1188"};
    int C = 945;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 22101742;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> guideposts = {"253 -206 680", "2477 327 304", "357 114 879", "2938 -404 1566", "919 825 1588", "3376 1173 2576", "455 226 3627", "1467 -632 1676", "3111 -669 2544", "3142 -1209 1705", "1099 -909 3169", "3329 -3228 754", "1151 532 4050", "706 -550 1248", "678 -827 844", "896 297 1257", "3494 -3003 2558", "2051 -804 212", "3434 2479 3846", "825 3815 1273", "251 83 3128", "3083 -2071 4034", "842 -364 153", "3251 2856 3801", "1687 534 920", "3285 1532 813", "1950 -1374 1112", "4079 -3992 2269", "1266 -486 2175", "2018 -2009 3809", "3112 2614 1134", "920 -772 1850", "3528 2308 2465"};
    int C = 769;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 11873011;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> guideposts = {"3765 1545 1969", "378 -315 3704", "2924 -2303 3131", "676 -267 4029", "1599 1457 1611", "2633 -784 1841", "3481 -2352 2108", "3191 -670 3834", "37 -37 3289", "1752 1123 3628", "1176 -1167 806", "1572 -1537 1596", "1946 -907 4049", "1098 2739 1484", "531 -118 427", "2434 -187 3366", "1649 865 1341", "3499 857 3302", "420 190 190", "1178 -94 1437", "3284 -1540 928", "1872 1173 3956", "3886 -2652 1280", "3369 -2413 795", "818 507 623", "896 -45 6", "2412 644 1621", "1894 488 3653", "2681 -707 3555"};
    int C = 476;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2537025;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> guideposts = {"3386 -1125 1223", "3619 1363 1027", "1550 1005 3715", "74 2 3800", "3014 2407 623", "3711 -1419 2711", "617 293 3795", "3825 -8 893", "2021 -2528 4005", "401 -250 3197", "495 115 106", "2044 915 646", "4087 2186 341", "1742 -480 1495", "1056 462 1145", "3227 -2001 3246", "3926 2335 1885", "1817 -610 702", "4085 2031 216", "3396 1781 2362", "4000 1337 1893", "1405 -1189 2590", "1088 -690 252", "257 -10 4090", "2360 482 4005", "2587 -1073 36", "341 -240 1831", "2311 316 977", "1802 1171 1129", "2913 1779 26", "4074 2545 2616", "1162 -323 3622", "397 -342 2370", "2427 -1960 462", "2362 1276 3998", "2254 431 2772", "1292 1247 1112", "12 -10 2223", "1135 118 842", "384 -256 303", "1831 324 3603", "543 432 249", "3392 -1977 106", "3398 -2134 4012", "3990 2839 3970", "1115 766 3472", "2007 1120 1172", "2708 -2389 1219", "2095 1290 416", "2421 -1124 1481"};
    int C = 491;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 15757037;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> guideposts = {"854 486 406", "2020 -628 2088", "872 761 672", "1900 -1685 349", "2837 -1936 341", "3823 860 3744", "2882 -674 1373", "353 -140 136", "2989 1555 1698", "1701 -316 91", "3372 -2561 3223", "149 -36 497", "3483 -446 3261", "708 627 3276", "207 7 123", "1958 1583 2437", "3903 771 3370", "3663 82 472", "592 1488 1806", "3560 -2303 3253", "1886 1409 4005", "130 47 2519", "3573 -2902 3185", "3322 2394 2242", "2788 -1766 1395", "5 0 348", "2308 1719 822", "3738 -1127 3969", "2540 -2021 3915", "2143 -824 3640", "3053 2605 3107", "3767 1637 1662", "2052 -989 103", "1452 983 95", "426 46 74", "1479 -568 1396", "939 2339 2516", "2704 -323 60", "101 75 1862", "3929 -2404 912", "286 -22 523", "1134 -233 978", "3930 370 2963", "237 183 13", "3155 255 3268", "468 295 131", "3581 773 116", "1281 -478 3769", "1604 -657 1801", "3896 1644 3763"};
    int C = 8;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 260614;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> guideposts = {"130501868 -78439607 410738284", "627713394 294343512 698237294", "914629404 -660218913 525045223", "603475360 -449940104 268744491", "707180251 582029971 351078386", "335101517 206044276 156524955", "456653143 -25753898 319781179", "473635774 35966201 776955574", "925084666 662053272 809403408", "55154043 39129892 266375903", "286792625 -207089366 168271375", "623149211 677621814 374629080", "204548201 182930704 70041669", "135889147 -46315858 608959456", "619959457 -390281852 326449263", "558301399 282518712 78839957", "356522574 -307779852 125330815", "298671649 -247213626 130199385", "871980382 815529172 686230419", "553237371 433798217 492573857", "818633114 783130959 278886523", "966566606 -857087545 572862687", "747743425 312205650 71450124", "285729229 -32235813 484491490", "939607817 -375921357 585530059", "189745892 13482070 447557859", "12572011 8506879 1012019", "637846375 520254471 988673431", "84702826 -55043477 306164688", "490276858 -479829112 381346810", "356471082 43866050 221408017", "104817289 -72161798 199751609", "830343199 -657735767 2078436", "675168590 -572027392 414947675", "330456984 -232619399 68844258", "340739245 -178689531 732049568", "651892198 -257994553 680338665", "225509882 128350418 197620398", "805971460 787817126 782810814", "474739547 346366422 456870632", "994137817 993174413 433483298", "458778985 -281261243 335245040", "83387027 72807462 748516305", "94069053 963755484 471163028", "875781809 353377283 954124352", "80638474 76140921 593232627", "354706600 56938275 182196338", "191178613 169585875 837828210", "696556625 -543933061 336972991", "461709893 -164022074 598419623"};
    int C = 478;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 3583006828654;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> guideposts = {"53936489 40535521 497372971", "349394190 169721143 227386994", "488133577 -274062128 2554796", "202668443 -178878251 86009894", "511537370 192131136 752655212", "205369098 -315848449 645287415", "361712707 -251412314 437763189", "375484971 109287658 3660158", "943502852 312779740 40109874", "373887435 36891874 490856350", "169160539 -156030932 148457256", "27093590 5219036 7249936", "558250354 -352554401 660499390", "888897984 -457835601 896915986", "965137465 702791575 554386579", "968336271 -778844107 921378326", "392806165 -148810008 11385131", "898831620 838378160 780557161", "780758090 39699353 655250437", "426083241 -265761209 292634994", "372900172 92607809 53427015", "474512596 197090678 45652535", "579240287 426564628 424041913", "376707813 -35611867 58718152", "978791719 -8722971 48349851", "162542911 -571759707 103820248", "130550039 656747133 6230416", "18778190 1580276 337034851", "752397803 -185875436 644794828", "733966111 -657160529 546525654", "78500225 31095288 11688443", "430372425 -82029337 792167820", "819309527 -422608841 388307748", "745080903 -731150616 865523683", "168413948 146440863 68698975", "444371303 259300480 683470706", "219341351 -218498677 84611541", "803612156 -307873418 246064812", "245035873 -192713872 423350048", "58720635 -2178002 30817241", "734507097 -89573774 127976207", "345064871 98422220 555541298", "430335586 -627787403 24190916", "594591988 294709823 614499251", "713788078 -227255865 846932546", "107829195 5794067 71518912", "649090867 -527435662 898985132", "26445410 -16470887 56765278", "878751218 390617211 80229320", "407222579 -253501540 519828590"};
    int C = 155;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1293777711499;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> guideposts = {"683284131 -338824445 778947674", "542951223 137377931 534362749", "209871405 657570447 879697518", "543349341 86271352 810651425", "795739898 -578438009 856741763", "877082885 702184469 728210043", "724150950 -918126516 388810111", "849649388 -845584305 847071843", "230502449 -956713697 78102760", "48848422 48792129 4891270", "600124206 341304821 615481807", "507271232 219053952 421855176", "659233596 -275117268 364844882", "94456815 -761554298 276087524", "934819012 -68022984 213448294", "742825398 -426404245 676590681", "680559899 -576940589 367793226", "496569846 363121341 444667550", "247014253 219789558 232526425", "11535161 7960755 777117882", "119713057 36025699 145939666"};
    int C = 569;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1710002948986;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> guideposts = {"621542837 365433207 99505048", "925283426 -854137623 270979999", "122366235 -92589629 438145653"};
    int C = 132;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 73213745045;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> guideposts = {"617031436 83873563 236931774", "449881855 -202617042 156643779", "883767924 -856822653 892011923", "641067240 937971701 266094980", "985918272 -489468537 602073217", "852311191 241923662 902871173", "884416868 -13687786 230279093", "150130721 52178763 479018797", "959279507 -887928390 609164848", "755950492 321522844 290385187", "101617659 -85181302 190871696", "195393359 -46398496 603128146", "331909439 271752631 637041767", "747905705 -1132539 180138435", "46490147 26290875 16257952", "842831840 -416424123 224387162", "394363784 -150504568 949856701", "266629154 -199404720 413617223", "969234346 899510029 627790075", "104892094 -93061913 73790496", "345573054 976453742 140156822", "37071789 17302879 908065724", "248390756 -48194177 56256455", "740181096 -214328233 223736085", "652946564 963815645 628951864", "3952614 -3437590 558505521", "294466962 255588231 537338610", "387765569 -277273490 953467560", "375131985 101191095 854705952", "539386959 422381366 30278642", "366473348 212956181 130632220", "39078951 10612930 10006244", "694266678 -674118011 492445845", "289017732 -62319414 154804850", "923135612 -356736515 406474967", "300286279 204274909 927106905", "598423008 -245132582 482237820", "623074742 347954058 608809695", "275413460 27617558 871744017", "448894766 -41869261 357935935", "183456223 97136064 584824428", "308740951 -145039358 72864065", "351260769 -108591395 898780622", "958717986 -474968964 223633111", "735166759 393146308 941340932", "75512851 -1323608 286344999", "265252633 -133918320 312903452"};
    int C = 894;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 5413998293033;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> guideposts = {"861387829 -231552827 955316948", "503976572 495638932 100916737", "307490216 -89740579 946727666", "576687375 -334537615 41542791", "543719196 392258855 497305881", "15787589 -8536669 308248346", "368120740 -260560822 224462696", "832887592 133800159 635045510", "723857797 -866774699 22301955", "121552095 86505298 20840681", "986343539 -328523936 977541137", "531863430 -75961203 48338195", "861828386 -662596308 214703856", "48397346 20999928 495654531", "627517932 -254156315 92394715", "701372784 -665757915 791108526"};
    int C = 768;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1056176643628;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> guideposts = {"983809722 575306120 865916527", "60942667 1103396 25636832", "700661755 -45465538 597203671", "112809582 111516144 167712988", "403405467 -645642740 31765912", "845843470 453090825 4796000", "859961211 -929550113 476457121", "348318242 -188180920 292080908", "149060117 -101822238 118027856", "101565203 33511978 3773876", "761454410 692427540 748626470", "785471489 -635861932 850844738", "430287688 -294874622 428250296", "705404872 600719935 365347139", "199333522 -78599883 88976378", "231795666 -102879880 172410325", "754529393 492388507 373890649", "569203911 207385151 35068797", "332773720 177257615 2945004", "911318150 4162177 14345167", "636945918 -113115749 498214721", "774406173 201335778 808129136", "789707834 -210902403 729224270", "950131606 -97393065 91791260", "19191014 17176780 541582229", "495665867 -416809870 816242005", "724058715 -162717943 667286646", "34078123 23339203 308388", "40232760 34045701 34930085", "549612428 -355345635 958768109", "369820060 -282319327 405197954", "689717378 384164967 183171924", "456764661 -279828733 256796354", "436715735 405411786 21730927", "173050127 -171431664 943648353", "61433871 -47391492 819223777", "125617946 101821318 716511094", "48920103 -31355802 671401571", "487718312 359834243 372401680", "290061540 -103535911 773096625", "149458687 -147827641 38378709", "574044281 -277218774 896936699", "64247603 -30852219 151661348"};
    int C = 317;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2464566848176;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> guideposts = {"154607897 10473421 25487843", "643749388 230521699 738541075", "227794127 -61281552 95532940", "429001430 -373152036 43271864", "548428110 220361519 872051914", "186472007 -126878020 98499982", "723657492 -381493014 638393868", "687395524 45337759 630682341", "313379356 186861929 114828418", "290055163 -34200195 151646221", "35998582 -390226648 553806145", "350019192 45624964 223294276", "23141416 389143070 781334019", "5823229 5476220 22689995", "450599854 587749407 627023074", "215224700 294198058 588800475", "361032162 -4463467 973997311", "522678191 242291569 599759841", "488546068 405978724 568644096", "15403415 14538716 580288575", "109502088 26108805 661573303", "649924210 145866140 316954172", "308659913 103780274 377773951", "217426658 -172618584 494017054", "550625383 -293895395 31821581", "514736476 163038332 838981873", "14461210 8649193 390355141", "578892828 -438504164 206445298", "70806115 -179697016 103200217", "891170860 -681946563 432467385", "221656610 -217803121 93110417", "325488449 -209383197 265833299", "880670904 -581667790 796518527", "73436796 -22201456 754694836", "738746288 390428515 240467667", "56756310 -55093074 799160862", "905948417 522227608 795591616", "406490168 181545386 631948147", "675594858 -522735168 701332690", "65610890 -49551605 857362965", "276958584 -134455536 10201447", "617094222 444420396 195295462", "684905521 407526629 483877424", "949255034 230216247 631748037"};
    int C = 11;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 58215174062;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> guideposts = {"84990973 70743938 16426404", "714685026 -69142912 61870532", "679200268 410771048 205120721", "816497697 232163842 204242268", "526264261 575090722 381383249", "485262247 133680648 701412780", "734238674 609422703 312135706", "445131114 -36002507 615372618", "161711978 -122178668 447705351", "861355399 -635196663 302328399", "630406811 -491243275 474942672", "472586399 -458677549 895053743", "17533748 3544254 33379020", "636793707 592739797 858904933", "23155568 20706663 498757813", "20884655 15241115 320965289", "481523917 -114773864 693444342", "536095557 487734117 829488787", "658316481 80190596 110778980", "319791673 58308511 934996175", "864040992 355410256 998768460", "525055847 628656696 202445651", "284811118 -131006230 205095976", "810056949 599608241 658781493", "58820479 46152665 265483917", "554122388 -156243873 890081811", "762796808 -192682673 138730252", "106371957 -13247400 202518191", "638550283 -580959028 196982553", "473768022 -14943946 933715616", "202151250 -144060849 775409205", "410070801 -73253034 43528280", "922428239 -203015279 121412764", "765481873 719875137 176014387", "705845517 -448790033 963889774", "701169182 -700376767 94961461", "56046891 -47544763 79072712", "900705623 350997621 915265068", "478874612 -317156951 367973891", "4207710 815336 429159378", "82915579 -54449765 134069941", "193612285 92665913 518364303", "804274180 -557603982 629506257", "238904767 173214060 579242839", "343849712 416019560 41581486", "107078253 21033804 54442033", "941171711 -939266046 603004061", "842319167 -672634670 383697465"};
    int C = 894;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 5989129778178;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> guideposts = {"904557639 505033228 65996218", "119281304 99744711 112838201", "334889514 10885637 600572459", "80234679 -13424693 57054724", "784021823 -436076696 254619388", "297369386 163308120 994796659", "396419864 -256721463 983122323", "65003244 20859468 27833013", "681515125 -360340764 631069014", "668679597 -160582718 467232880", "222974851 -28478880 605952505", "12483957 -9655099 254204939", "382870611 3072632 54895699", "622347563 317923685 216573734", "540805126 -339122519 969645894", "131783594 -61722264 628376970", "658024524 387118578 826121850", "739226488 70674925 641914030", "41844254 -19166613 614735105", "556681064 29301326 81644222", "613034978 -53860313 14578205", "187335851 -150276394 153851199", "785919570 -617999294 544936641", "327103261 -177961544 82517134", "916242662 -742512483 362588278", "721423566 239926498 422377582", "601857425 -9273208 282707680", "736938011 -37540563 49711815", "986431745 -86411410 393096944", "408210387 266600406 889123770", "138129369 135484258 964625268", "176270130 -148633722 116141230", "243555954 -40902094 367521985", "465465288 -292860673 160677958", "6379550 -3877054 209965434", "828846461 9683949 53813270", "99527704 71529601 937941695", "820255052 -863549493 140224155", "78479725 75300108 538560083", "951368058 -445266241 846920844", "683180210 -85881084 32097649", "258225732 -205124736 822431072", "485530951 -455660057 39218546", "686038111 -258227540 788332749", "788486499 -339844652 889174375", "391218889 198499375 246125857", "758612817 -528851064 506947670", "501476266 -485848349 31980580", "408362875 91253027 5568966", "324509795 171116646 25848214"};
    int C = 443;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2368569095689;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> guideposts = {"165288958 87935564 58974978", "878993744 503710816 385512818", "746441157 -9798691 578683770", "800515838 -596258298 551952831", "190143121 13842250 639014426", "843972463 428787004 688779063", "320825994 -69227192 998774539", "600630558 111672209 546051661", "611835449 -37923564 248042341", "88743222 -51732067 437213610", "861509121 -631049046 469147290", "324725172 -93098671 34030950", "259739756 -195826301 164401736", "412789941 276472958 106722661", "739103800 -354334829 346947175", "430434083 -81461136 18812327", "914170955 -413818404 474005026", "471427419 250182430 450840770", "905872105 571396907 103899619", "800254596 -582393928 728339429", "281458412 11584381 373394771", "151980 103543 101496", "938454227 -865328777 49335906", "153353716 50813941 283176847", "674856663 -347412396 710804627", "33380152 -15728027 31003415", "735804010 696091857 181255188", "31401771 -992740351 765460562", "550973136 -360340823 497641089", "430868163 59726807 392067957", "61994417 -48538149 774895409", "506918480 62685084 918286594", "13837781 -2137861 308970365", "24187079 -8924918 5648919", "954100582 987879013 282458994", "69275401 49560250 339585974", "878679658 -235061023 259169722", "137489955 -118645955 309081143", "214784863 -895457589 405831623", "279979481 123478511 842875700", "596506387 165135964 101340557", "48917258 12041001 42330021", "716823090 494651821 989714500", "136024997 20749198 41099184", "442744352 192675155 948294154", "903023167 869947788 793210410", "779897369 66606778 49183838", "142184854 -502669782 752036876", "385805999 -333734279 58268112", "957574788 -232402162 866159302"};
    int C = 101;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 927830808646;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> guideposts = {"792320984 693232850 990786341", "594906668 40041962 997879020", "86950002 68584927 348802636", "129316592 64881257 57397331", "521561227 -99394899 180371431", "866294169 -227010071 12381596", "99623781 -91792669 520806842", "726171754 903462762 739033296", "201960711 -170167901 974936790", "824482614 -556898526 554382557", "780260757 117896010 756579014", "365652000 320355000 922400568", "236272913 -513255853 161838523"};
    int C = 662;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 919923287020;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> guideposts = {"422511993 -304419774 183707882", "946081634 303838428 452240081", "425247357 419038020 41465342"};
    int C = 5;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 3678392855;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> guideposts = {"827018986 -272385941 543969750", "532034341 -378799100 894907823", "474071025 290373599 52908991", "196482073 6131238 339959277", "139125498 -677612213 117758695", "638150603 288019715 693099050", "34950314 -26383571 13631853", "15231485 12634428 466302325", "32606299 21339225 727671065", "799091018 303508371 775199040", "419855139 -313889023 334656078", "187226674 754016819 800105779", "752812810 205146240 54977460", "853136664 587025545 73916781", "62108776 35020625 236419", "735416464 -313549095 534202660", "324033666 32899805 166210414", "101862784 57429769 154434759", "716344267 -576456166 18679087", "533856470 -617633073 271210003", "792123276 -677162872 4024082", "651452126 68726377 62514104", "458820539 -129401196 198661392", "976606853 199029488 569864576", "73151805 65407211 18435919", "949180171 -312993091 597623566", "559609842 -411871903 463162877", "405228 228010 845679295", "508019003 -50088778 130684734", "755966740 -536282656 667961135", "37984980 4801490 222830122", "674011015 -128738671 404502882", "178733889 -105300786 520807279", "676824881 -534376187 225521327", "626246677 299205434 274077979", "40052867 29395072 702833883", "635044836 148351404 309898964", "309085428 267676815 60939050", "214754460 124427390 941756483", "242701220 -58218808 949565787", "865765526 797615749 481116133", "679396287 -639662174 77069980", "209089446 33571341 619261128", "470510410 -407760969 102346240", "499673833 -398459193 345604109", "70993273 25546002 70716168", "20218668 16906888 12109465", "51559374 3043507 593633326", "324136727 240759935 97792977", "206553476 -45836957 116544648"};
    int C = 203;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1458182107969;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> guideposts = {"44030090 22538844 820399381", "164643839 20759818 557759937", "210124380 65300030 478259176", "70083155 31263257 143199828", "423497770 -315427124 125930078", "731752456 -315440070 71277301", "403756865 709794204 494714580", "750217431 356005934 166219710", "28741438 -11113201 13190108", "591564690 530998614 771490934", "822151354 553105909 405688390", "407085183 -210164772 362516890", "858429356 893096120 553522573", "217039366 56042945 126060336", "19892234 -19481497 979521030", "894311288 652576169 941634588", "376912953 -450532841 584562369", "466604535 -347846897 193960997", "318629939 315662067 174543272", "987264457 -504348290 187552048", "728083869 -178295474 13154810", "298278553 -132351612 20110895", "273838113 -235923245 474361847", "12211056 6128659 10634843", "39228096 -6260726 910762366", "819428212 480751115 983374722", "682657289 -556668180 733538229", "647399085 -569847927 42773892", "156084290 918913460 63352484", "941609561 467265972 139282447", "678851602 -70143845 93863558", "728437405 -590166784 320389899", "24081206 2984854 633268219", "511792020 10516416 739739475", "724634164 -547400327 436642087", "935624201 -28205266 64853685", "951358258 -571793123 794920956", "484411489 40041082 88573269", "857497951 852263298 405989142", "15851645 4607930 12886715", "1585034 936326 905284160", "973200290 -782864983 8804080", "263701470 -72147806 11924549", "679551903 528657560 763031"};
    int C = 920;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 7900972072264;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> guideposts = {"633932316 462742044 706145488", "471437785 -382456675 23817507", "600736579 248427822 373430967", "900472053 -507194097 198270915", "408541277 360120399 869613873", "862091847 -719004147 148808167", "344179392 125964152 889586325", "508547011 -498719701 754814457"};
    int C = 322;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 151179806757;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> guideposts = {"10605091 6444555 756516427", "860921294 -838815175 788927448", "832513567 -129455233 820703568", "304372438 129878684 917545500", "887376924 129552189 784094135", "929190258 -339232829 71042333", "991538986 418371522 324026031", "815025280 -104571159 681733058", "102025534 -97546845 738744974", "5409240 3698424 142572", "405165940 -265838575 96077875", "611369923 -87465846 457678616", "98579440 874854388 616914721", "588489963 -365099643 123337232", "568973163 -653463244 271273305", "120050716 -85598253 82332836", "67541887 -63682818 15987788", "692816206 -411315594 3110793", "43667996 -20204275 90526244", "64705489 49702118 966842220", "620932064 421571157 190987751", "125530513 50974567 776268435", "626525719 -542606960 260793174", "420569545 -105873172 286490512", "288416437 -25524357 466575338", "985483684 85526297 214139910", "52973457 1609763 3023600", "118087579 -79865800 49330871", "303738773 -500649166 58577517", "2650763 1551821 288001979", "923500494 414629296 187934355"};
    int C = 928;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4537090554826;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> guideposts = {"450018916 -17418350 400630662", "29737712 -13383351 14705985", "930361612 259408452 591187391", "66339420 56401709 891087066", "856984540 331001657 13079501", "387139151 112990206 628377153", "790447860 105754147 294183913", "335806891 -934742364 401472295", "804715982 -595091867 484070377", "380935678 336023179 166700884", "458770389 174244557 415780744", "965475574 -917154962 233827570", "195307206 236044152 129788636", "244005289 78557370 162225552", "968991251 -850544088 830067955", "111954160 -36081186 17491768", "998750936 -372537686 311355307", "391457064 -347962830 152786046", "47652909 -604777165 58518849", "155892996 -87288734 978731878", "619439062 -179608895 402471207", "346201192 -497955098 213757663", "674132374 646023717 384397611", "240738138 77649919 750649120", "20805568 -13360458 5146476", "45527180 10742715 10116788", "154935738 98285439 839726386", "67319834 -63103719 610208863", "602793340 -385317664 8761256", "421715544 241021699 597636974", "114429793 90771881 243538691", "295665653 -263806090 26924006", "871787461 -536932613 703756448", "679164869 -20577525 390777944", "824932924 350744244 795925530", "464190431 -133581706 4044652", "183987815 -61951745 529396335", "53883639 27194177 224890633", "909585594 42708564 47747492", "335759392 196899232 78807639", "201162154 -174260720 843129615", "363222104 298693579 216779850", "284028956 -74276290 404602281", "170317964 128047425 154495159", "601875470 -210270459 499144988", "984242682 -531693075 8880107", "926943436 406570723 362305896", "423355408 39902523 522879338", "88493624 -74351405 386749525", "904469058 -420888370 187422645"};
    int C = 475;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 3410948711807;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> guideposts = {"903861718 572806610 748296559", "751331624 -360224223 306700585", "401808580 -89398335 959231942", "749343007 -966419956 527152932", "764395709 -442797563 275974988", "556509169 197195815 95376056", "46549018 -29805206 54528116", "589150668 567264433 105504720", "21227060 -13854938 2257130", "300218996 -136568120 232446009", "819608802 -504214690 596590072", "568212332 -320083982 322124491", "96982255 858591399 126143794", "723411966 -228018897 725647228", "346022280 135235413 148210007", "99007212 10560218 362956842", "100060788 -8456433 59231604", "174399629 99708953 76400125", "964985730 260259072 721691614", "978203031 934286088 866194906", "873008031 -632360697 641510770", "25801718 -14491074 14798433", "231222380 709526554 875891520", "856644695 727953461 416053229", "242352463 -73973138 732090136"};
    int C = 393;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1846173484155;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> guideposts = {"819556532 -428688193 854183765", "835734143 -290484498 133491261", "605010767 492946064 771443547", "476922119 148197415 18735485", "678717670 306393284 239638900", "292806887 -137418417 161631810", "461565432 -352976913 233212872", "402655632 -125097043 364360770", "20348397 954660654 924530803", "284795134 166301765 180312142", "133825069 60181947 464559161", "548489351 327442420 190237233", "437197280 432709302 305442700", "115871534 56262927 926906745", "714813542 -166189804 7562663", "699705028 -281790373 584159537", "89955701 -55823255 89675288", "744301909 453660011 869095312", "670575996 224591587 233686228", "752013995 -173076436 867979289", "906132942 107770184 29681501", "422476286 169876029 103225819", "636503948 -631190128 419466739", "571949565 20659774 308167313", "579457913 -24349921 925546718", "128760278 -127286157 816867608", "648320023 459316264 205490235", "69707757 -52167740 522816569", "470536376 -432568664 942146769", "302335836 75397748 174621907", "177648493 -108231220 461532538", "590484341 231658498 35995032", "831995134 -843895997 988682700", "994350298 936884876 51377619", "64908619 -32776636 865028506", "679537129 -553595271 312456967", "901522364 -561736688 359892234", "905350291 -696164892 491493871", "612739777 -480355093 523585871", "212578763 -125894335 202620835", "540432989 180055207 428969450", "980065084 547582592 99818756", "302223704 -255427110 470699408", "577331680 -69405974 297398538", "632668558 -65936804 325081552", "513061038 252596128 409307974", "131416946 -66844140 954221894", "939698306 649578291 765083400", "70261697 -876657778 51088602", "26168027 -23598253 22393531"};
    int C = 925;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 6748448040269;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> guideposts = {"195263132 -20634494 828694325", "268095706 34025296 251424869", "785458708 -740232951 19043583", "97429737 -7274161 302082848", "849706543 505082779 483499647", "7082804 -3114825 547958699", "34577321 25669741 747386139", "458521327 -410272729 55113687", "3741541 2578579 1169417", "113625386 -62864935 65516357", "474508828 249016683 47614367", "357190152 -99189327 858075038", "807597148 -708399815 487263374", "14379188 4534874 3534807", "527153973 185396122 887458150", "764447746 -602323868 663021", "145686324 140871073 420146501", "292806043 -32782243 771663091", "531616418 -890125207 923991013", "379428904 -561310980 61246835", "149386528 -83038155 960332766", "151079137 -118357277 37339573", "159626265 113695495 403287972"};
    int C = 548;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 990892984494;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> guideposts = {"487915759 460699331 920285857", "665793290 -600129460 806529", "600021087 -722542138 608534201", "18387873 -2156809 46295634", "27828519 6337211 731556624", "742149323 420854571 254928736", "720815471 661516051 444141492", "932217010 647534965 669651035", "106516254 18201529 46316546", "2305416 -371409816 979344761", "405587778 294256554 757538347", "195960673 -130114258 62312441", "711766751 513928734 676759572", "701978848 -393010429 1458269", "708255740 -138077552 475175000", "238885723 -199881570 292758558"};
    int C = 216;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 629480533965;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> guideposts = {"879766919 403027495 100240985", "310121366 -42396915 939662889", "485940788 385190808 213192093", "782844086 780182140 931423538", "177685885 65151533 865308685", "143882604 9850713 690231633", "74235274 -875867358 325054274", "408591827 -191490744 73440053", "310242764 -75283589 728884870", "905830511 467612446 823271110", "164502806 105118517 536918400", "882287388 201203600 154730127", "560546274 303540497 211445222", "655392625 -324751759 132137807", "942801378 -347265759 446882028", "490881151 -353140537 960882840", "452551698 -285686149 132905034", "94889240 -55767143 872712618", "115174623 -89682720 12744263", "233516285 -31514416 509718117", "35518504 -34517266 886337902", "598771878 567405871 315104700", "820337950 -619195404 23558893", "522211976 216541550 25829363", "844122693 -13284253 959147922", "835965433 586727366 949667020", "745641019 -225007952 84326012", "921565994 893865088 104927654", "62749155 10553246 49586165", "10728143 -7038550 4667104", "866152732 -328662229 940352626", "410370921 185130492 635907054", "600490297 -50098571 211053187", "663583566 -237526531 703615493", "822375642 333155236 397244169", "480843241 -354616713 53031753", "974445766 -719849256 164841956", "131447747 -61335276 447727078", "29967869 -3423199 24956886", "42625617 15993630 1808929", "633976614 93666701 178559694"};
    int C = 46;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 384234242676;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> guideposts = {"273553955 -265553737 527812077", "61514119 -4570443 36213105", "283814479 57444953 770992423", "844731239 -721026129 371548649", "624167245 362749218 592317607", "486741017 -357054698 682819748", "471172548 -262662101 101244451", "869043815 665694356 53753960", "777741112 -221160244 116915062", "786128623 -695688942 767229554", "453657684 40782886 662162055", "618372974 -92883073 380460225", "589503733 -588416883 417919300", "452676975 -418182195 92739192", "878997024 -798293353 37972145", "266396398 105334875 656952395", "20334393 505974 689082585", "685774257 -258309755 506342027", "65930558 12176544 131675652", "53727849 -9044341 134205278", "178706378 25772884 911998402", "582236882 695344212 271163161", "537474358 -79692549 779653685", "875135597 705627004 87061466", "387855893 -49699912 20307224", "47844235 -43101734 135606482", "557315532 -405522534 894309092", "69133504 48440657 28144293", "138718498 125467294 615812179", "874787072 -561873093 327546758", "633783551 -576598313 86139250", "448604383 -104658688 237759477", "87222444 -39397260 505510893", "111346139 -30233916 7885540", "731470928 643420658 860121359", "600964259 -566248794 371703569", "178656137 -975912111 31733346", "454725019 20081297 403532631", "974128454 951858443 125715219", "685498179 437373424 261269074", "952063313 -166580379 288246625", "655397929 533983596 248532610", "907440432 31001182 581230481", "304626817 -201018395 347895470", "64388414 -27198486 675137732", "327245227 274169440 14960451", "441071660 213176858 130702888", "86963742 -54039728 441323511", "309894736 234091836 706315861", "405808795 -308649874 141641379"};
    int C = 120;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1160058845223;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> guideposts = {"563560765 -196084042 821307792", "946813138 8546152 847356083", "17661533 15300384 9254100", "449402610 266871739 356700082", "663071013 -229677119 369823735", "831362317 304397675 794037348", "197920695 105821504 62840007", "323594904 -967033949 512732417", "476804442 -319729517 10256970", "421716564 128894269 859214097", "577806382 85497219 172380212", "18331527 3065639 12899063", "215610564 43082900 665762777", "291962471 205103248 36652351", "39114777 -24293200 744705732", "891092672 -121867635 124696483", "670033913 120729820 73487087", "462088751 295181304 430352050", "215892195 129081540 10449286", "611192678 -498559010 184563522", "966063068 -488284796 981540822", "642482764 -306952142 454266376", "128216018 -97153916 133552769", "637468925 594474511 112218116", "802345347 640349863 983021055", "59383280 -36383919 3252725", "756667910 -225184995 860375969", "836344280 -723052002 765132277", "894402396 -818256569 961852287", "136269294 -82298123 946669525", "592867266 225250376 767106925", "933005261 599347554 967765862", "182843282 728990624 104280072", "877141517 -133068581 161751086", "318759665 -202933900 849052165", "23260972 -1620191 57935953", "711077803 448477666 396724844", "750660256 -358893356 139723829", "945192162 -879430473 183396", "837448690 -375543644 664716848", "475751797 403523878 306122818", "543645786 -384372291 561847108", "677175125 -36730441 989505848", "206257977 85902984 164359496", "187333922 55748354 25474166", "541011036 -237534846 327788365", "606264506 -602742413 103516976", "493286130 -288156625 750791249", "23964335 23034933 73179959", "172788370 -139020868 640183057"};
    int C = 447;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2832951604757;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> guideposts = {"739067683 517595123 853508563", "360806112 274204536 339886796", "954052479 -524760483 624062525", "304836686 -246747657 638328297", "928420905 -588256781 895144340", "336110082 -999512799 748889464", "426180354 -109224057 777946835", "150521004 -102264613 636134893", "24744289 1231790 381662552", "441425932 150124795 416424876", "449234155 131561648 123003184", "283252013 -585219844 242546849", "918587189 -972999420 35282536", "823135407 -250301948 184928059", "132727176 -9850693 987554849", "954199188 -828359936 682657190", "607284472 239248672 521983782", "870416247 20011202 296964535", "972699808 734473292 395528089", "925531931 862967922 907051817"};
    int C = 143;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 413938068806;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> guideposts = {"230231804 -155063589 171581866", "677146071 -77950148 907054965", "53109912 -16912342 192736494", "485160060 -94832496 480763620", "983300601 103842930 740316706", "173819762 4866545 16328206", "3370943 1673584 586578658", "937828957 232832257 668448682", "658185670 -371177319 333920021", "44479660 -15762119 589303734", "203144056 66481545 262034782", "145391121 -29226174 31175581", "543729747 453321062 535970612"};
    int C = 891;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 662412213864;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> guideposts = {"315823142 275228304 576530768", "307544386 994198741 68163285", "594994364 36020105 740202889", "309123778 -202220956 789577598", "688890797 -404071636 877250385", "547409379 471754424 956900160", "315970496 -254521664 558793881", "288353872 -69718885 804307621", "802088347 -602699102 27106911", "59433072 -36989290 25362826", "691291166 -550428693 110324821", "201432590 -4243743 604434479", "76424716 -75268526 38316386", "374865666 166335335 931886959", "267679521 150040620 843217811", "384919285 205141646 234063321", "911836361 486557533 688544394", "353760811 -330844646 213984769", "981014280 -316232669 76195586", "347643637 -34492450 929446945", "614222943 -931432173 132384443", "208987713 -93350929 67450404", "839516082 -632498782 96464104", "492363097 25010512 58173433", "882065777 -917698725 985579430", "856028 175509 148496601", "894767514 -65900442 518980747", "37192299 18341161 481441468", "63165515 -16135196 668654609", "638311332 127430310 292438033", "496132868 160751671 222133789", "989915228 475568513 816732256", "984952506 584276270 18914871", "760293703 -92626005 721053842", "457368439 -105502557 15667126", "563310430 -76508059 190376940", "43644441 29535430 849369837", "163852743 -21990638 69546911", "16415595 13635772 7708097", "220628753 -886882034 64111147", "659806639 -62391067 840929277", "448332540 -306936848 411779390", "258359879 100414450 241735281", "813751079 275830513 217172640", "39528246 10474236 20893206", "689244759 -839449358 796910828", "283315333 -904702657 182692530", "149502272 63500717 459816635", "463146943 -446079159 87665893", "368659686 -308913079 169585287"};
    int C = 121;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1009214935708;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> guideposts = {"11115214 -5779597 111373846", "271482960 -86708303 111778243", "32591207 13264613 32562373", "539176705 -292321412 777486763", "773862549 -501776691 344516577", "291185753 -521006433 395588922", "539004330 197506712 98304190", "895718608 135776588 615467634", "752330814 -645191823 147055092", "716044301 -534567539 243232195", "57050834 18072453 972980187", "897264620 -842764424 488047745", "58986394 53467988 682139047", "137060129 81093634 46490073", "525855224 213681735 555763864", "800204534 -92040680 347028401", "995758437 -829304101 162458745", "337461420 89665983 211423807", "456910581 -263169109 903922705", "958797452 561866554 600952173", "235909256 -187344805 965545843", "805044651 -619524348 41568568", "177432926 -477529067 124175838", "25476331 -5780520 85511850", "150529467 8931570 27053423", "125428419 17491830 49827597", "993350578 -453816624 141636148", "988180178 -944357326 973029399", "18438482 -4022984 677246173", "933913927 266228754 972545363"};
    int C = 78;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 203506020053;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> guideposts = {"40503960 157116198 516310439", "52862046 -8803155 58605397", "327040007 -266298861 609262459", "620264954 -220055161 396522412", "217959719 -17004876 975152863", "412356548 -165315951 539506645", "396169570 -129020393 101410133", "522346165 -494328315 952765765", "72498386 20627030 33581814", "810902887 -315507000 798801269", "516011594 514204435 369324307", "405266912 38182026 429621457", "571147452 172747462 387611532", "855419202 -556509431 354489934", "800177319 -795207355 827247002", "361396427 -49426453 545764922", "27472943 20073874 22660314", "359737027 -356762993 488500984", "888231158 -266097434 50534238", "193379664 -92944918 960801484", "30323458 -11613375 205397221", "368015945 126181648 273623887", "734118970 -548747545 238596827", "508836472 -76315714 335156661", "504182824 -89175581 783993880", "66748911 -50810546 57115021", "818292788 -112233017 68527168", "511398497 -350685815 657807", "40679035 38501647 794207911", "705503632 500549466 502863125", "11064277 4157357 47242795", "173016415 72777225 931650339", "6622174 -5463853 14104130", "257174530 113762482 916725471", "237043 -148544876 596612149", "49501279 29153658 853778384", "11192454 -9032890 986736838", "833172388 -137406792 931548243", "953623610 -698203043 838593361", "537921683 422466789 288903312", "417389207 -174258370 668764894", "730990622 -272160817 364934073", "632779877 -232773164 614145739", "682283594 443031059 613543304", "37616109 -22020718 519700457", "604575589 314881962 779221098", "914821548 -516149636 930333261", "556212509 122515441 49487544", "887975994 -761620006 838990621", "12947455 12335693 8945633"};
    int C = 664;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2732381579451;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> guideposts = {"739228413 387754918 844962642", "437342175 366475949 66589526", "398907872 97177236 279229062", "176296545 -31893249 101091952", "239797738 192707305 153158801", "883942968 -630760459 180638109", "101888802 36510163 137770608", "893611600 719251763 279276663", "19522356 14348576 454343521", "145723498 -4007059 35143635", "486330220 -273829914 174384656", "526646381 -368733989 435435348", "377553366 -23729862 708173599", "250325540 11533059 188773840", "19815090 -139976897 390026712", "721333091 315166162 179012176", "121464172 -50369163 627208593", "245776808 803819325 344286040", "457911446 -16977743 451173088", "733499822 618043446 353923112", "33716946 338541178 270061", "504521876 -517979927 442607428", "965128847 -815338649 915154090", "135574910 -58584834 15556690", "508987121 -480200681 943207090", "788407265 -617487159 446785337", "418456682 48087716 35017763", "804656599 78594829 10778175", "974206417 -396344035 230834623", "27112235 -24584135 39902350", "576076021 -175218555 22804976", "305445116 -820268820 463584618", "566835189 130685255 137081286", "930301745 651867438 69062016", "274071799 72705170 48106485", "458802188 -383179550 253491941", "569011175 -468672844 805192674", "542807966 -270306121 170742998", "260847205 -67174092 213770698", "661872620 105498269 735648762", "40208400 21590992 145963140", "1531399 826630 276572511", "642571729 381499601 33966961", "823848807 335470231 726617625", "251951308 -245604306 119889970", "128367672 982493384 166008048", "369626661 14262140 383058409", "662919826 -30802045 150571015", "777512637 -578457605 627593177", "412785579 -382828754 476100549"};
    int C = 485;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 3948561079036;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> guideposts = {"46130197 41662953 24921572", "302587726 -278597584 693049693", "231115495 48643035 82574703", "305269771 -15639953 963893950", "262970328 -229586922 620574692", "855399992 -798579251 627419608", "212546843 18197788 65225391", "245359619 -146474650 851897677", "842146251 -261886432 607614132", "220383067 -33860711 863386139", "342751975 -561735933 432080108", "405798755 -278372565 109105279", "791722073 -313886171 513314318", "256091103 167497990 892216359", "133287814 74718341 157255557", "611504410 -530438550 524344620", "478935366 -399614349 247953367", "19431392 -2118504 991810986", "689701163 20681275 694522111", "711664745 -210623280 355282937", "720493188 -360588299 7467759", "490954875 164097794 2616148", "118797180 61213661 305403627", "235431944 186684263 448277710", "145911111 -9665139 852664472", "545076493 -962756147 824468307", "774262849 -404048417 29845034", "448667273 -37659586 855623811", "455972187 -296972133 759415962", "169748409 8031480 133439849", "725844572 55244225 472117364", "390215680 345968889 64040155", "820636852 -396980651 683337091", "634761514 -96709509 702698883", "354979578 3567414 501116186", "476240098 -307714538 894012084", "775931718 476199278 263111126", "434705305 416541668 573211577", "756654345 -321373491 986149129", "956551724 725955562 823766654", "380734229 221633322 378735917", "326639888 32518189 90843210", "155835115 -373065692 45376017", "221662919 -10423138 862333676", "886755470 -611214428 863171230", "183234798 -126723192 786623420", "450478699 126060540 107604326", "645102121 438016171 416723903", "50495254 -2182995 41169573", "981264557 -776234639 70170076"};
    int C = 328;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1206573869999;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> guideposts = {"332864044 556198379 116827198", "891690770 -156098333 374102497", "963751291 741234902 14629857", "899768628 788705160 51886059", "638176279 -141298541 574137992", "312053585 109071699 156930662", "550640091 196927594 168642435", "784118648 -110612826 201043497", "316171345 -168118644 948309636", "32609363 23144094 750529237", "350812627 -236090304 241006792", "828957540 533375712 754683391", "192716938 171279622 465391950", "366718908 -312381211 302078304", "888894289 -376981307 648465705", "67704907 800986906 34541092", "978347196 -852151459 119934087", "220227014 43012239 158044254", "576832724 -457300681 20517606", "870989720 -821752819 980968086", "647754824 -612418407 342694005", "326591634 420689074 181095077", "963149856 213635763 156736969", "13499183 188970 938633059", "57506111 46997893 935096171", "74306724 70434601 553014104", "768896816 -362802382 59491436", "431022358 120899588 445813673", "749933574 -675133149 217460330", "772327594 -269246400 481502921", "23407979 -11572470 654247586", "782135891 -233232843 274201856", "820040980 -263044272 537867015", "737274494 -295024071 529678080", "128061210 812389497 25577567", "88547093 -77083423 631383986", "793408284 348963111 981998221", "817763181 -371165712 929873911", "86972696 20504576 529621636", "421090840 -664124893 521730924", "655692626 342075058 537372261", "928740281 370551150 625883002", "584596170 774901147 297988184", "209431877 -159094838 119964210", "13017094 4306170 3385750", "915909979 -43384044 696542404", "3145807 2694289 894488150", "354822040 161689557 555894168", "343646585 -18728592 242533068", "281806348 95183799 710172748"};
    int C = 279;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2036110737191;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> guideposts = {"492608705 -14991817 765320260", "332752622 324240698 649200872", "820692950 -716774031 430445700", "206222793 -139154062 524649982", "164002781 557802028 902660890", "289653361 -246103395 63169515", "795130947 -448030459 739773699", "494757684 375872121 612220267", "111788454 -9903447 213920297", "993024528 946145609 905077251", "16556614 -1594998 710086927", "65119821 -24494170 28528010", "411565346 -71119889 226105506", "685332011 -828920224 1825902", "277616187 -192795627 570664575", "318772272 189404818 513228641", "673345755 360249743 955622142", "873449633 -732967415 58021440", "68282587 39208286 781171127", "789081878 -419700523 325895250", "502005293 -467081097 424506932", "321249627 -25599237 192434865", "104550973 -38524663 327569204", "176713717 -14109532 367831074", "370867428 143988364 966037823", "485926406 -96282331 125646761", "931556611 -193680225 690374730", "122246502 -34159690 58025051", "794555141 -580945550 670635838", "823120161 -750767311 53144765", "16766413 14793307 352968490", "71851978 -8661842 681319292", "371319018 -11190546 594869853", "503069754 -228525880 44399613", "984433397 -443375028 686833193", "47268526 600004059 637894095", "245011859 -19481744 130768724", "68366194 -512191601 976673672", "260038773 48552209 564713022", "750178158 -226379349 351161405", "524271417 517278323 909116221"};
    int C = 338;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 570743352649;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> guideposts = {"895237262 -307095265 923165225", "910368778 -698196161 632249622", "673451920 -163977661 503786533", "655698291 -22287650 59314582", "512190219 -866079384 304077617", "494801874 116515247 835400079", "928548632 -690978572 37220290", "34669854 -18765823 11488097", "276654208 94458423 371036639", "630207876 186287876 454291450", "338539934 -151026916 20846063", "244902815 223800117 24760878", "362114865 -116195188 905603638", "535204259 207417603 5881523", "36321477 28313223 969252506", "157602646 -31800198 104918680", "893983636 -561975242 600284055", "195796798 -89788794 378676328", "749824016 -190094220 190817162", "21539191 15257485 5324908", "51595127 11518085 264908533", "999943432 -147258045 147877339", "231357475 48377306 585136762", "940846776 283915626 972334812", "303074918 -146772639 409177496", "40674986 12136409 29638563", "889943364 921524367 390670701", "749533770 -499098980 400026163", "866961734 -804241415 655614736", "133441110 -3238812 762983593", "144958759 73623202 486044478", "523268359 208978589 391520250", "294068036 51326951 186289515", "147130014 -140730090 395406756", "981991402 629960611 802810488", "481758956 454483108 481211013", "107729395 -1114484 60888549", "579627142 -70458556 338792382", "196483164 -109879353 305662055", "79091400 50098114 206930920", "67197618 33440221 203405917", "788554198 -646728308 157353364", "396815236 -104376530 176836842", "436468788 -399695362 47660566", "772347725 -699125052 450133711", "259180467 225153212 42200710", "30531424 18827277 667199385", "292658117 -192463143 252164267", "280318950 6739558 653271040", "721635696 -711589625 342517331"};
    int C = 74;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 383340964089;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> guideposts = {"791893760 89950449 806884734", "96638289 41031749 42672361", "363396281 272443236 24219551", "705232384 -453795281 383274340", "486023619 -402296660 724786570", "835316687 -420524008 788319562", "571355457 -529013616 344904557", "867803312 -788450487 272888525", "680804868 -222740545 463820586", "50801032 29505462 438389885", "768465346 -666985683 172925486", "248943559 152291195 41547868", "335438155 -59780076 253512533", "332393111 -228131075 663859457", "653125088 403852115 159105334", "776651857 -268615731 804932136", "744003352 -107387404 549773596", "693524184 602530953 241261235", "506129919 -430397541 349992939", "694516225 -450378581 638166558", "411853127 350125870 63632765", "824131902 157587516 500259163", "987810762 -68221363 972895765", "593328671 -391848539 776209106", "16909745 -2274763 154861882", "924021605 -633932323 160133970", "957674996 -20950222 7993981", "946931904 -276947375 378752923", "981295381 283244554 465061402", "372283754 -148247512 553265505", "731759423 -239971013 484572601", "44751931 699137 811274225", "41557303 -21248102 179686898", "98370041 30201018 19195953", "477198525 118796766 94976315", "675337946 -140630257 692426410"};
    int C = 380;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1468834634154;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> guideposts = {"599176050 210572957 98084516", "184242603 76013108 84592468", "981463865 217857772 93854414", "252859709 -12340962 425095048", "709595508 -90086381 181219453", "334961277 534594605 955817094", "841848973 -454807381 619039848", "883481357 -264740987 811405098", "600397090 -547185886 163223484", "59183507 45478681 15179889", "355806000 310200173 359831173", "259942727 -112227342 7562101", "961063096 -902753993 52075653", "49653440 7313872 15179988", "358558651 107474118 343622984", "872815942 204861330 103115245", "682246852 -294965169 24811241", "704362556 -971381897 604938963", "123624021 34874318 431164174", "903874143 390209970 541547333", "857612016 -535849056 778167239", "711072992 -520429308 570697276", "572820121 262976609 963003292", "721986230 1792337 127677332", "936488448 818634265 18734332", "457633938 -91229642 632186633", "862107832 -726875358 775637404", "329973843 -198396156 246808201", "347463965 -141562666 853143192", "368637693 -234122570 525519975", "857629664 -842745437 16443465", "680982130 451550351 775127472", "124499026 29616687 91924969", "914368644 -912273991 110041719", "7139806 758760815 26674025", "843852569 255033446 279632864", "676076630 358537876 295506550", "834485623 -469409752 203730846", "827236353 -615803159 532821882", "716396783 -614280308 228972718", "966097802 639036830 703772678", "321538949 -989515158 844351958", "67992383 -30645942 49004724", "191465802 -522312860 468955386", "615481924 -12475653 82275970"};
    int C = 601;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4991615621727;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> guideposts = {"533658663 -7331822 463700884", "414836351 193320345 474630949", "815568602 174372163 91102374", "598571384 -295568925 515515371", "67951990 -25964601 2204601", "171287306 -667164126 29851213", "208139292 -146251006 904530354", "885721830 -283339214 850713861", "782867639 -146493948 69306236", "881478513 110503869 514209173", "5260028 1952846 776956795", "579051114 420020370 225570334", "316252117 123622728 269739419", "824295688 629650171 390210561", "682677737 -624646902 249765418", "367217168 -77718074 566671045", "604600060 118286726 317859676", "416760187 189661979 242577702", "731175470 -652867609 301046561", "525736088 447413602 392944030", "285645668 28317468 459584332", "950106837 -34973092 725956852", "905640037 -483271775 182136043", "354886294 -303121775 239320630", "695258728 -363712054 121588147", "744143552 321264989 281967568", "716524333 -704686355 630326700", "823471325 -24285526 69736375", "237405912 -1876244 62901966", "430923021 -129403724 691498211", "351125534 15348457 366096505", "923865117 657586263 2244848", "173828750 140014846 15635506", "622976373 -223010570 557948080", "273069818 113835072 448982320"};
    int C = 554;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2969191443775;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> guideposts = {"738216964 -559555539 390776900", "534192188 235701522 456765599", "179897956 93016834 949777190", "933619387 909090385 471692859", "519508641 423113074 227259142", "936852740 214817605 667600997", "686931470 -127908557 325563227", "905811966 -690362105 977781789", "963879452 537144530 517911975", "2112909 -641582 1525053", "713867441 -401708268 79791001", "322808343 -269029944 772280577", "110997080 19779599 806669073", "599413799 486976682 784639854", "4758314 -1947646 33693019", "584248967 370401224 780552018", "920679586 -800803404 283614046", "411285819 -33764101 18320955", "220667322 56312808 115166293", "952205377 -723471705 353580399", "456337403 -3095357 26596822"};
    int C = 105;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 298158125590;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> guideposts = {"533197174 -507119457 143187823", "456187737 123341639 479764989", "791672600 -527030299 679849112", "40155931 12862192 1793809", "169470401 -397552765 291904202", "519731703 505502840 755103955", "438064061 992930316 491194025", "335633775 451791414 170009475", "54705080 -10415633 480864153", "718252785 89081342 905221891", "8884998 6372648 7225658", "257786412 -165606871 488323975", "915088794 -796897009 145298980", "483161710 150082514 461933329", "81958079 21461995 645712660", "790547656 -677195962 549883633", "862276581 -561419635 207446955", "11118667 -10724578 459728665", "857581300 670077506 55924237", "348129448 336779870 715172578", "956948471 112309717 873652094", "592059617 -323266145 115045471", "794057267 -639636171 549954563", "452004613 -358983708 611066455", "916734169 -773340617 508578548"};
    int C = 425;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1279043462481;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> guideposts = {"398517652 -365898868 906568183", "652160948 -23051625 218904079", "160826813 -47953672 96492632", "958262910 742006366 641126723", "856223269 -826495347 61056869", "876891485 -643286477 766615889", "33579115 -9855469 69170262", "175482278 138390599 86943450", "219602074 133744641 334715956", "892091003 -319354474 377695063", "36909589 -317798841 13816314", "512963356 322394963 34235290", "240997270 190631735 659483625", "66482912 45769389 452688013", "227691065 -833281486 669032839", "399329122 12760284 495512710", "389764911 -330404932 136038428", "933335968 245610415 946414441", "364969104 264518747 228638304", "211750691 21623324 624723587", "714382681 476330758 626755092", "222294631 337012788 24074186", "345031584 68192682 227080754", "992775711 120788293 62139304", "831506310 79133074 744028902", "168124681 -636307919 809771938", "396561522 -316986618 553786299", "39835749 -568353 58015655", "40536460 -15632035 10245503", "402329945 231954574 235068792", "975952800 22447948 373781896", "850312642 -130459524 423612878", "880280009 -360605279 923131695", "62489405 -41332554 119274579", "20673428 -8736154 394901382", "679197560 -508817436 953741387", "725272196 -172331175 770366857", "46214400 -284738303 957799068", "271215118 92885808 800877595"};
    int C = 819;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4263522011864;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> guideposts = {"577891407 -800270718 2687045", "734122628 -656388614 570951146", "513798601 -73418346 253858021", "966664175 -726827037 593743413", "953725084 -862604653 641993541", "374821254 246710995 556725005", "6406768 5328169 36375569", "854881692 -678752916 420767705", "919752027 -805270225 42186617", "917146626 92850379 475220576", "685356388 -563424155 201359081", "654310849 -454877484 227717690", "660535457 -195012569 971505678", "209259872 144650510 68932624", "920407894 -245785787 854188712", "774783515 -475716647 561924650", "778616826 330090224 636362111", "93234593 -12752180 47375475", "695838484 498394752 668174388", "871316319 -867602704 432981865", "939064644 -44099628 317290188", "343191907 88722186 300207617", "221902845 -157826766 594758433", "120503894 -35455943 55547325", "201781180 28683605 182018733", "221789476 31048506 15850419", "546899637 -457855235 388656113", "166604358 -872097917 493219431", "149810519 104696448 766276515", "39200714 -25283303 145027258", "546104855 -480439150 175222688", "167753874 98170042 45019286", "645554262 -156556697 224486208", "2678368 1062268 132010172", "715045482 -296934735 979661406", "752819620 -635084094 40983326", "60753171 55025818 3799875", "35248933 22573689 236039803", "112660183 248598 107276732", "950881033 -755790848 12613149", "549985312 70216019 300018890", "400472513 -6032068 29858254", "175673624 144870974 217272653", "608651996 399526220 571799356", "147391633 -61689773 397766186", "451912408 -439718798 733704804", "675628916 24168142 394567781", "948227175 298082658 671268932", "175305367 -53957246 518589968", "671765700 -532729116 182467219"};
    int C = 482;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1872028884486;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> guideposts = {"895258645 558929946 747457029", "445158517 395413776 79771215", "655256655 -456619839 980975515", "353460329 -77719877 112041897", "302047969 -50339080 123048013", "4447597 3431657 666060507", "302663890 164355190 567857785", "951505689 -656730575 764931530", "25204983 11727880 809052780", "32170875 -3956353 733382065", "310888105 229695392 134752251", "19146914 -853663958 714067000", "329318609 -138234845 951252945", "917583141 307030189 566160946", "37913948 -25948187 556643849", "390516935 -310986589 61690862", "647204693 -437515470 154627854", "5799206 2278083 502441341", "256085543 -158811008 47524924", "991322629 -304170267 972366180", "3057897 -1889676 992956924", "51269059 -45537144 520330884", "431608995 -87995249 662712622", "942779892 157001606 28807753", "56942287 -425997178 55122306", "826531647 -433710694 874104414", "763546055 132732115 377634278", "328793833 -370691728 915610996", "5030575 -3671472 631311436", "257906092 227455485 57339102", "592230164 -672130177 588806325", "478380766 78868197 24956693", "115204718 109731134 255587975", "568167911 34890390 862510435", "518981645 -116831596 81686048", "710911893 -645107124 604439347", "943391304 -854492222 207631152", "60778460 2985843 412507120", "3343847 356636 2176889", "837348345 -57396889 926457938", "10998043 3058847 406986336", "509030929 117209583 195053676", "886860162 300848264 375412873", "996240071 371776470 370738289", "471649028 -335154311 40466315", "923292257 -738678429 505641614", "977110423 496063544 919894664", "602874477 119929843 70586429", "64367654 -32601116 689542521", "784002566 -210784360 71057662"};
    int C = 354;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2103018533736;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> guideposts = {"498970700 -43060216 873774639", "753201895 -437625720 775146448", "228733710 249719250 725800667", "668110935 -50796700 631729757", "876487914 225271364 894002322", "981807144 848231032 421471169", "883630184 -2251708 96662498", "316531414 51184823 62969638", "380236297 219942218 280252149", "37266569 -34626823 180185028", "87151423 -51482999 63193741", "378011382 -237995097 392135360", "903537819 221083534 554184315", "542147051 -70203301 52428163", "765447078 -185457744 8542228", "643149284 179482971 354930940", "356280114 -260005051 24879664", "583420243 57787349 539976856", "32759091 -19095267 4611266", "33845386 -3229563 88465410", "658073431 82684421 65159786", "1986920 -1210575 345930982", "977553399 -508860143 329871332", "943636273 -923930400 644471877", "307349276 -797590858 93732433", "142209084 -225901062 259696936", "652087212 -605912353 278233237", "477861475 241824455 872618671", "550162163 -63776338 225247573", "180055118 -114490867 375407049", "738895150 -66466578 45591015", "972330260 -663637380 8817438", "23497150 3269311 6292782", "131209422 -47508571 877235188", "930035246 667761991 443745872", "767700995 -640492505 290103571", "12598058 8359627 962728807", "774258977 -417757111 57269997", "17807140 14257219 122453641", "840253021 572221239 235849383", "450566201 -266109151 244930352", "924796839 -909060378 356626850", "166755205 -897361847 502216023", "76506018 -68090266 907652544", "693125660 -104322029 282845313"};
    int C = 152;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1169076836281;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> guideposts = {"697983213 -629350591 12488519", "425580967 -115472505 834640586"};
    int C = 98;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 241475840;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> guideposts = {"50173894 -45890035 11441317", "608511348 781637129 296887852", "163486458 -103606206 70273815", "151575519 -50454537 60884168", "996758309 -427540238 48294746", "912933933 818179388 306083679", "228671716 -20008934 55962793", "296156860 19410639 187253172", "837769952 670621143 317447682", "145285797 143564165 299246867", "533708196 231592677 98753695", "938734780 -899160870 802352153", "90982331 -24912183 33633858", "910487631 471935299 508641690", "595809980 -410348534 11795100", "62721695 -33649572 165945021", "562067268 109327079 222038190", "839691366 -353701585 906575409", "870943456 -551432868 419384181", "934199533 506985314 531233195", "224637561 90194679 688108397", "703291516 -148960257 64344594", "162758848 -928688389 828149925", "938822698 552690511 253208567", "440493994 243370929 432408951", "488074068 -321745894 971712858", "19006213 -16344921 175772713", "8390475 3655712 7496845", "917472672 -412873226 683517440", "115920883 39359662 969884975", "3877279 -1924736 7227532", "484614250 -286324854 875200381", "290159614 734492185 285542965", "541572339 138051507 321967150", "883771457 -744628121 648491332", "869820343 -103434003 807374192", "342992103 39166189 806616354", "432128025 45386229 92533200", "98341412 20048966 22403686", "409139377 -15703864 357811836", "622402527 20120249 7099899", "272079401 -49005411 143708365", "890246930 -204879673 343166390", "848319893 -21407106 687773470", "785237493 215028812 231913598", "506783480 47086393 263907780", "55603621 -21004649 132664138", "836454677 -547046261 551436727", "650612512 -390458511 283907213", "198872513 -6359731 137649370"};
    int C = 487;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4602919209426;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> guideposts = {"413787664 -48152596 42155066", "711004718 -196176748 271163623", "214097804 90954832 208580490", "372056275 180866605 646393488", "638349256 -495427602 612277998", "884489114 -736381422 727062087", "531820078 238064982 817822440", "274268514 138871609 716973080", "205027375 195121008 807147462", "264610468 -101424670 178769453", "31853353 -14518072 8699698", "17437310 -6147338 132944106", "766245795 331665244 428295004", "6382158 1939431 618943249", "680673557 -285517756 927626164", "55397709 36038896 313157491", "436992149 136653028 636887797", "869109784 -670031363 608322613"};
    int C = 220;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 185018477453;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> guideposts = {"566445846 -506563452 136088820", "687526524 614220580 562023270", "215824919 135297686 116105420", "991482727 -827365658 346178591", "118463965 50992086 41732743", "371291536 11074918 118117890", "216866313 -89478134 839643547", "195857010 -124268594 856394683", "220477611 -200334672 750317269", "356108525 168175750 382283278", "177225290 110070808 459237736", "24373288 -895641418 833423114", "942340822 870892183 975149119", "578529366 559265979 425881838", "137383728 -99175108 15371074", "965705552 -46988939 91463497", "269357611 -56520173 137971241", "133896546 -34687788 355128393", "867215667 -571602075 333310935"};
    int C = 50;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 141888844771;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> guideposts = {"843536830 635955315 217529352", "23395399 -10344521 494754949", "670211310 661994298 60832295", "170960952 -94283116 977858582", "459594652 -170198144 125695027", "744964204 656481106 786863725", "782294236 -309401820 975745485", "65724332 -51457831 342842530", "746860662 387187863 912216699", "312814524 -180590589 726812050", "15884478 -5631732 67845000", "469830803 -330775769 446636198", "619527848 -315623153 610539403", "350684500 216268563 165114547", "461394549 -156559276 332826475", "516850741 460685065 422186176", "64551408 -37591498 659436326", "159075379 -52331717 409073045", "188158241 -62355370 758016122"};
    int C = 426;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1007469774513;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> guideposts = {"991312251 653139066 48272580", "601101673 418600988 421353918", "85788441 -60263374 233167390", "853992054 260955183 272132829", "349896132 -104591564 420642274", "467230806 137976651 906160004", "710466721 608568842 173480502", "247589534 151328624 132153875", "88509057 470621279 144776744", "337935265 23999045 654646334", "129197589 -21175155 364023055", "639583196 -245274456 667814881", "785102299 -347784300 423037605", "679779316 -207681782 15369241", "498298787 -37561323 383514853", "676167276 48624752 109910682", "998895837 -644943942 15310575", "65548467 -981071503 131045431", "5468692 4195930 359916669", "474827093 -293936005 484332012", "408630590 -390549129 499626934", "545153328 365579082 313702769", "283440573 -193381767 645733207", "42350651 -9145631 3446519", "66878047 -3499937 34596247", "829539864 -122827022 723337823", "385544338 -64773448 144577573", "588742007 519451988 60643998", "207066518 -201564152 889102387", "240472368 835215163 49091740", "143802773 -105240713 570396026", "180915303 134757819 912104241", "871213484 338897010 709091714", "203282755 -187061733 164225081", "625373048 292297051 835908805", "413063169 74972227 879622417", "425789859 143261971 303098212", "425898076 115030623 260000961", "843235455 562694661 661646207", "503980461 129639589 236727121", "455062203 135743419 63883639", "245158450 -17263121 128640817", "69574567 -17359177 823885473", "867994706 -188407387 24635464", "288014774 201079165 627837231", "537512163 342094811 467519387", "496902921 196217505 879027291", "85583793 -35845782 285756159", "386172761 185729370 290705953", "53369827 -2226498 10131470"};
    int C = 743;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 5721820980777;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> guideposts = {"235964881 22097902 877094895", "232157192 112073281 69031474", "434699701 214663563 972512564", "640067827 -466857774 34999150", "613060259 -131014507 417447288", "418474551 -408649864 353487213", "60112613 23575469 360491226", "832901489 389520278 856366897", "414767851 -184218721 994853122", "397532819 -370155192 715144729", "156464165 -107756569 107499034", "413298095 154555843 14773450", "696322841 -280498864 245671918", "39154840 23127773 850463380", "65376564 274840860 282885535", "926430749 683876116 193247632", "647131107 -312996184 190084310", "674061524 -589180581 407519090", "32421875 -26369428 10740634", "758581738 -654509581 411895896", "210613584 -178644170 742463586", "307541068 -302617375 175094230", "334507662 -160637147 109792063", "762766103 -350931904 302071366", "525505780 311254162 290414953", "941569600 -715196212 523368418", "827880662 288166093 314657249", "197677773 -81782728 37662709", "13397370 -11806980 611205894", "823374359 -589968500 402006351", "650730224 -646798407 468769223", "730397165 -239071912 347696761", "65527658 14060214 292678826", "975776658 -828223770 25662750", "292421426 56141152 789869221", "282276327 -153763245 106395713", "859277092 -282683401 452789617", "57633092 -17981382 133487016", "352979275 153091873 14648013", "911317455 456007005 367584065", "666682410 189450851 641360247", "351638855 66020411 913986931", "362455204 -357278051 790951656", "699431852 -564913630 159485517", "702132646 235503351 286940445", "960590375 -431414125 49624764", "973843460 64117793 231996391", "279854610 -231756760 957251115", "871180328 -857198983 434929568", "91919905 -545121373 30371386"};
    int C = 976;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 5826594998531;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> guideposts = {"989747686 27675443 416339440", "85999044 18754314 320534704", "664771332 69126579 724181647", "510427841 179141548 422172020", "668501774 -315228166 867462317", "503933813 -240052480 445745390", "173170864 -97892975 691428771", "786761890 -690020416 816434230", "62199336 -47770125 570371697", "288890526 -216895553 230826026", "968552292 -720022694 216120406", "468016026 463004542 184723562", "127436781 68428407 787772607", "214943748 127073925 120313624", "911365525 375509777 812776091", "623256418 -275465361 35087377", "15604740 7130962 513982795", "120294410 -117230869 99173318", "597115038 -285797113 158160343", "280538790 95617503 850794661", "853165896 396791592 817478921", "675666536 -934409855 160173283", "103208996 -47478150 947928468", "167168343 57574328 389263223", "26714946 -5410253 972664706", "52131357 -2330706 470528341", "854848190 -579136795 754781810", "823619393 -516379612 168692761", "671996155 124492579 910697069", "844449706 359477397 217617033", "430319572 112444996 234826592", "492654304 287668964 842678149", "192089334 -5335458 358524284", "108919671 15186395 745994102", "873431750 778884278 992708875", "871092334 -73782634 473229236", "716522105 -379532574 606004853", "502292119 -302303069 394695400", "80337743 79683705 387284885", "355996991 119930576 537359759", "39769102 -34213882 344199556", "307457971 -232261125 477198589", "787257130 -989523075 758969992", "52077392 -13545517 671770447", "983904072 -770422349 104213966", "290753089 -145483392 290383855"};
    int C = 185;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 485494034882;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> guideposts = {"518358706 -835546053 25276699", "979717134 74556891 428865480", "825600539 -252374831 292534773", "482907604 -407838900 747561044", "565066027 -50110225 331531695", "931068642 206885168 323253634", "391351659 232774090 273273981", "396977100 -222555584 101326680", "585768306 115666720 411934975", "596589964 550158231 249476272", "290471758 -60972702 750251368", "656944339 -112810403 71026977", "192036164 -74805306 645701753", "987314186 -977222193 852093526", "811749833 660682156 241170534", "728210987 -278437486 6820801", "60219111 352948566 3547398", "313154842 -191948651 131151055", "5564522 123629662 3317199", "640804907 -371187536 817592163", "829541754 -161841518 798635583", "196890607 -108056216 105649849", "178353575 177403036 691111129", "719924876 -515853097 869719211", "289585768 975967003 24854398", "540614690 407580914 558265534", "447312266 -25196521 153934221", "253621511 -215634870 764845150", "671463995 603771860 661176756", "62876137 -8991089 822500071", "756026764 20513183 178622200", "498826270 -21294615 954775108", "605479578 500904368 503727905", "145454222 -102853922 94294796", "339028416 825438998 481543458", "786350648 218732112 475731275", "697827210 -575595506 40789042", "418189593 157385634 193418468", "3392818 132451764 858387624", "642096370 98766065 171794159", "593067513 -126242868 723890654", "983034703 719038051 697012166", "362984338 -43150186 93979821", "979476147 -865004078 836099032", "769964413 521529021 296477749", "737805022 -901740024 721736443", "425757196 -145917321 737652499", "101301376 77248056 196902340", "380064087 339106429 246346037", "218165975 95280370 606877947"};
    int C = 773;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 5269993617863;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> guideposts = {"35912234 -23718469 114092047", "168216866 -105548543 154822844", "687588992 76625177 647058781", "964868022 664529669 267038648", "837042272 -332166637 165843489", "690520617 43603913 617608791", "545987994 -370280473 496116126", "265584849 172200586 34830943", "874718158 41110312 700500236", "146654764 -15583163 330925832", "584960952 -428491503 59430914", "990853071 -879122143 41135249"};
    int C = 592;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 957038035111;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> guideposts = {"676277144 557625486 25459523", "153546666 72418794 109845400", "49686120 30172014 557153197", "92206835 -47852089 933076081", "6120594 -3528497 3178386", "204581323 107642272 74238854", "971484660 -329836101 238216436", "769689628 -737164593 187489876", "592436344 193301291 181482216", "146973200 143757263 281921019", "12725213 8435874 91204675", "166716132 -10717601 107922195", "979311946 736377184 145499035"};
    int C = 872;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2781346405312;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> guideposts = {"4662764 3599791 213520566", "49250068 -17972417 22452245", "640320805 -522090971 2603438", "373192770 -246092023 313039116", "341140621 -205789642 867287555", "116607848 482055096 886818275", "794004786 -840687267 750982233", "677656757 63728462 152355929", "566191912 4268405 161593791", "854684202 -807843242 643179148", "103464049 -32586783 855949484", "281174953 182263408 96028636", "412082948 -8208903 2398490", "82124992 -40766468 610016220", "270706751 104842273 141035485", "342927962 -137206432 40766865", "456049738 362019250 35639942", "57655738 23734265 33761373", "472267309 125637532 345383887", "443951987 228645397 294587743", "566159796 -921172344 630017779", "233729075 217722981 630494843", "193579599 -37576721 971918356", "221248151 73460667 889544935", "153213577 13587669 148850740", "35463793 -32352516 540612413", "194860502 -12668901 525261551", "37736735 15053786 650056347", "67109062 365254610 900703092", "41249239 -23941541 921800627", "568247776 -213597655 115903625", "71406117 47120918 154259922", "554631585 -169854059 60603093", "60452339 52174208 46875871", "751499917 653451708 883000276", "880964544 9256793 253245751", "887617067 -605162095 333610264", "822235383 -505880019 845810744", "458264148 155353002 992791531", "620367759 -597783329 224916249", "529938002 -258354659 555287665", "212356946 42332349 35050299", "21511061 -20985089 709169850", "508567674 -95971474 769759745", "967994385 726817467 11694955", "394349716 -273341934 532663813", "740974195 -485323118 134783201", "798925750 -156513139 71616905", "515937504 133839649 832920307", "729122711 657634160 40348301"};
    int C = 879;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4732791364999;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> guideposts = {"81364514 -57440881 12303112", "931847454 -840209242 630308717", "961495442 305941369 746439646", "893770866 597824017 17723109", "62799103 4367147 480656973", "454959368 432258864 339993488", "583118386 206692019 450407487", "277981116 -255700232 285812069", "59187797 33366225 235724857", "593333506 -437404095 31893628", "761596291 -378715659 812118720", "44607076 25920422 859454651", "42631848 -13295568 133827166", "674630606 360175066 935111986", "148717758 126183583 321450430", "109422423 -37723581 715284969", "125275692 -29838806 882758767", "115550552 69099933 68986681", "864470466 -659500452 114250323"};
    int C = 530;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1193829210039;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> guideposts = {"531681812 -33042837 330045610", "962250350 -903789778 405314906", "158583611 -130134558 353107882", "809474693 245471682 973908356", "259977174 63866284 685546011", "38265603 3891903 29717509", "163280094 -24474581 19738218", "248181162 -394324243 402121686", "534991483 -885657188 487445582", "128931554 -83596580 111285039", "37786625 -17492635 495952361", "555500146 6488530 597734889", "257810005 -35543244 251498512", "902959536 793946923 174469413", "382282703 -226121767 192153468", "872127685 -732965933 581532605", "926246922 -440343090 520498024", "451437265 -989801767 893248252", "28467532 -613162629 28198296", "33940196 9511321 11134743", "819143790 273800749 74819356", "239874100 -40397486 807806728", "782113116 -285401968 895188575", "653595621 900431766 474766907", "272505266 30467842 588737950", "31968620 -29535227 383097169", "26808832 155002865 7387989", "108500571 823370282 514983108", "498144701 -362857612 394532558", "514318593 128798699 597778224", "202686179 37244288 538365524", "515814743 -367513403 180447892", "408448472 -36287231 2337416", "160093703 31395911 380865513", "71652115 211932647 54717718", "311887253 126154447 717122785", "740920208 -663638693 35349180", "324423152 43772638 946659989", "603607571 46132233 456849654", "550131953 -66161743 126778479", "618597078 -204083354 92357999", "887572125 875655398 14104900", "500291088 144889610 446281814", "427626010 -949211850 91916114", "135359850 -47165224 25253433", "438560953 -257215193 239239522", "676211057 -163984181 492263744", "523508361 -429246519 400693891", "544221048 391675101 227357168", "495825480 846041504 393479952"};
    int C = 504;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4294183871439;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> guideposts = {"816914683 802998489 628302514", "265534064 -190405339 606013826", "435172408 245878693 913666427", "540225020 -296300527 327317714", "169121103 -143284238 57109113", "311641252 -119256928 2902911", "555897401 349367213 3078600", "812956526 48834709 97864654", "718662056 -388048530 768374764", "994274478 339384775 858537284", "477357241 -389457240 32523066", "91235297 -18530017 1971174", "271155996 215075711 107276838", "962122457 -712185778 16015394", "91352385 64586958 18278147", "540990033 -39743881 251515657", "99995540 17049533 21936201", "391639584 -10054755 695430607", "261339859 229740924 985558110", "561691050 -235800980 772291757", "374208753 139703396 854950512", "295937855 278436378 749473929", "470123316 434351474 21380436", "220495231 -34955835 11216800", "134888812 107221471 665206350", "66138120 6002533 97570935", "496229231 54493953 2602798", "572671223 -329023102 297233401", "914567490 810603321 939086398", "257513210 570152793 662338128", "112391064 -5000159 621353466", "929264650 -275796837 456999161", "745336208 552716932 88029159", "990494478 -825752799 587432769", "978895 425211 82134620", "815859436 739376786 327102963", "198045818 -129225723 614291198", "832013267 -322808045 84225546", "584960136 675162145 332006061", "19390919 5655689 815161118", "756789905 -225958989 65746943", "485728699 258740028 283997546", "222020616 117562501 760092024", "802961071 179344723 415961239", "64514931 46610744 3959878", "49797814 -26265957 35274547", "281021233 -143430804 230346420", "718488530 -396719126 94352419", "334794679 -204874716 39118711", "614271743 -117280161 902799327"};
    int C = 587;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4959599648614;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> guideposts = {"46249437 22389643 580918253", "950938205 -338714139 507197954", "269715023 41255822 30155316", "605937609 99887978 44329045", "49996079 28535384 959459077", "477585495 -303450870 335061372", "563645187 -172674558 63845547", "734394104 -721781529 183317876", "564713260 359728080 406643241", "960535890 207870439 900711274", "704889573 -482809332 811686146", "683012581 436692424 338011339", "323594705 -133530399 733898373", "758623826 -387687985 713774610", "99692058 -87644205 661112311", "934922838 -160508618 303419253", "444438447 284477898 185534236", "129549884 -38356448 962347748", "465734441 -351653786 222127225", "919807957 540072755 695427581", "121180245 6035739 485272630", "130062127 -112224638 145815002", "747127167 -606171696 598067710", "901303463 -533454131 21726182", "595818478 -951756332 774421880", "587315216 -484761159 806307358", "57730352 33596371 862015253", "6305530 3076435 378352233", "860616746 477417164 804609346", "395528806 -190627193 72383468", "519765506 -847901374 140359229", "918818913 838870490 196162175", "291938913 137533307 69709605", "709071975 -308138845 689420216", "170812326 90503296 579311351", "3943804 -3382276 243662369", "329672436 319749171 723113110", "327877457 -242890696 292667026", "102232391 13514960 490635544", "310956026 77845931 236507341", "1385974 -699786 623653859", "25362427 4453494 965242824", "927585864 -253981233 795151459", "410017986 -91076359 448870219", "28644105 -465602914 26274107", "303927215 37744019 58779597", "891402823 -760241541 101894229", "765184110 947516114 709412528", "134100621 -46974819 918627061", "65790770 52386210 24384600"};
    int C = 449;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2649935286936;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> guideposts = {"493896466 -20408930 7975929", "956485428 328274358 393248245", "100433941 93468810 94037538"};
    int C = 711;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 430230017207;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> guideposts = {"548577166 -243748451 513233632", "502913329 79374 443900739", "666897953 -584119467 839328289", "349833224 -336424161 48159976", "72766740 -45638997 22622282", "236873473 76927038 603982928", "64077076 -29294974 603628954", "92321080 80246701 392614830", "393182596 -376899209 909213077", "716568717 381863292 8003692", "509001506 -73752243 38944967", "722398262 429582141 192382374", "621627305 -778789450 769867421", "771334735 545013776 44638972", "605854727 -136281796 229971065", "546721506 -63585457 263563054", "744936684 -650762260 792494722", "63252473 -30209809 223896659", "185711036 -407186938 888186820", "675050931 -583613861 416414128", "788891172 92079145 300573831", "624699004 -52578288 369557886", "982022889 -265594534 892424976", "682675923 119183947 31931671", "422791337 401075732 202226227", "177846599 -97962578 608073825", "353670044 -241633672 977723474", "432726667 -57278947 484334975", "627757481 -302516423 458615996", "756530899 -287348012 259900417", "907290682 585170115 480712341"};
    int C = 420;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1612375958522;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> guideposts = {"696482254 -487658524 409585084", "658023222 -438554483 197131558", "606695743 151642322 348916404", "606951208 8217895 142974075", "98987753 -3625475 400900285", "268429341 94713190 68679411", "343698502 141212149 179256759", "253154790 -182592590 415061712", "915861475 -151839087 37627857", "642754523 -737147 37255093", "539413437 144063247 503856125", "54739492 -5415199 31064442", "137561817 45951194 712622028", "869863647 -175726159 996358484", "23263889 -22933064 18160059", "573948616 112719343 467179748", "228700466 21857177 919153077", "980768162 518487129 377476318", "627462870 192778241 855584936", "386262125 3570360 303110080", "876361381 -474891763 163927973", "48686109 -10144206 234088380", "106516964 -96329296 943007614", "297673093 -89929498 22061889", "370772854 -307058492 842829782", "356426624 819455019 906685689", "477315519 154235065 23839034", "55057577 -6222790 4414754", "74998274 7036398 121603066", "752634912 -640090427 668896199", "808721338 -609799021 810414934", "530109226 685472144 194168234", "608653181 88938066 825273035", "437136816 -127775045 644090174", "935176285 778307466 811315060", "115521000 -639987852 460087247"};
    int C = 608;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2847620536872;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> guideposts = {"165768555 -129584790 592967601", "552468856 -364598716 156016773", "317451668 978567568 227560254", "722270926 -511467653 142931366", "807440263 130756148 407820333", "719942805 369615938 215339980", "619020956 -113095888 770493469", "475836637 -370124868 534851426", "558634532 -5344066 673252515", "960719743 133316174 918296619", "474943639 -305502313 717780495", "367813087 -10961892 645796460", "793330481 -769473668 766837053", "761425884 745266432 139204352", "693547584 -278770939 295206047", "168875615 -804209437 641123186", "861494645 -704579720 57326151", "889048695 581314343 496945796", "948900081 340063855 294705055", "141908970 637011005 59237122", "599031535 -378763558 276841442", "311194770 618151393 970752656", "635175723 -465130927 74472616", "144381449 28086253 93372460", "843197569 -135519741 571560950", "240802166 463269337 32974439", "695783000 -230697689 34691504", "704449904 -511175892 41023747", "510999247 438263823 28953192", "305719374 -302679405 71079069", "958672846 636796342 647692248", "3426160 3233953 975228647", "71517283 67997117 467229579", "298851893 123605888 62177657", "929665302 409726481 760500868", "46691764 -28737422 44531917", "306197780 -111197381 49497778", "26398860 3675798 104247794", "722275180 -643895020 571936431", "807945773 -556500448 868840144", "819572392 505808272 565449702", "45352335 -9623655 26891215", "412262024 -502615188 190791295", "407876421 -302080185 57398147", "78432950 60155032 252508044", "660625706 552705142 620071722", "938032798 -107230375 251587862", "554494041 -27036567 828433767", "369458640 -366258067 335246187", "226594823 200580237 152167983"};
    int C = 232;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2147402077823;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> guideposts = {"871928733 -817219489 863404650", "617067520 -221791870 124985311", "170000664 -418331226 943745769", "939938235 413020086 599479246", "845036422 -200820329 655150356", "648499408 152509010 629693904", "255083785 365341035 94651949", "687141833 428376896 217208734", "715609075 332319014 919933882", "818434733 -668744120 149308867", "161135328 143515240 21819571", "186027039 -94430177 360223679", "438448987 -339521509 237135108", "827935627 -199611169 707163283", "312354746 -309588281 701447554", "26803012 -8928465 349011829", "61116434 16356261 519150729", "865876981 755417034 287023226", "333821817 -322408382 343569488", "105635548 76360988 977875459", "591567339 348043727 334546638", "838153889 -631547226 350524021", "830689418 -355473935 169918523", "315370195 234550417 316702841", "623640859 974396142 270349168", "580756545 151243377 727270598", "941215460 -394284086 75123084", "557790422 458273158 260445358", "698560095 -469429635 235358623", "553180060 41611984 306983623", "690621011 -385120931 471108220", "917964297 -451256754 808167604", "1716319 -694290 280195789", "897614299 -38044479 656939853", "528305142 14416877 432290724", "154470134 -40284455 83525433", "594125395 178966827 941436838", "509404966 -340012918 665209934", "631969540 -165138994 218898292", "860543426 179629304 772430461", "556634086 -447971498 727231298", "445764465 -229749585 95124416", "952756437 -885014271 95058084", "123467430 -73913802 71705981", "910006874 -707578747 710205592", "433354642 -230948838 406745540", "288445470 -187629828 357528841", "880893596 -17532069 778749117", "172483308 -125067445 960276020", "318338710 492501971 11342188"};
    int C = 586;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2995127108063;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> guideposts = {"925546182 324574973 252377174", "972256754 935867721 344555127", "792111371 822285956 587938643", "365344829 206432192 725036855", "275179179 39835921 782265205", "7484195 6603653 329938526", "56347952 37708631 922259008", "784761637 -20396117 314356288", "406532514 65535532 872713722", "48448808 37529618 582458022", "742844197 370857186 568893316", "665723442 -76233839 667740795", "681257806 537066792 678868983", "950106841 -299034281 356198753", "756327211 616059200 573274443", "287257119 -352117469 22036546", "440942454 -105526630 146084234", "869896529 621156268 611815250", "398797744 -197490100 919375455", "995534611 -701562266 382808359", "548297441 -437522507 217044009", "860468686 -439181565 398509516", "509682768 473745215 130472181", "803930646 458613736 203807226", "48096638 -45096474 611487617", "579610049 -452719538 838341084", "937380887 513170587 47332806", "87026885 -2283001 322436109", "463737286 375322565 683200859"};
    int C = 38;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 208283696578;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> guideposts = {"306450210 -910140263 408203244", "465503018 -340787811 121363097", "454257242 264281013 460559210", "20920672 11678040 14949488", "230465077 -147575330 888231317", "903916257 179862387 244770641", "14114284 -4776059 6377225", "34898464 28100639 29092199", "322640242 3012231 278915418", "490438396 -433956671 839709172", "703094950 676231802 891486861", "300509609 -922814289 367766188", "750133662 -565990568 727103045", "696638847 -575401739 24403048", "194193351 109624816 347703147", "614689632 -322218805 182610154", "613804510 -65967131 84361494", "228188832 -663224966 906503106", "786657057 -540606358 270823403", "604366983 -483239249 360883688", "56206883 -52466085 643415939", "32356846 4147215 15089787", "913466918 -794719827 327775607", "913821569 93438000 553401347", "612338662 -117428596 298290009", "774665393 755750341 207744920"};
    int C = 485;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2006956940397;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> guideposts = {"882003002 -446807604 636453462", "166507535 -35302378 285075219", "439360106 234959694 468855186", "825387345 216352067 802164572", "348044364 -206790369 16670840", "782564474 -403872125 929903945", "835065538 817864803 480633214", "314704261 -711610364 600048595", "149410670 -16172791 804591559", "917057219 37287115 767933762", "651857220 -373860447 745543110", "694751585 456416191 205784165", "701556896 -570887455 406134993", "132777625 -67244136 308086927", "733908000 -770510118 12548490", "612481685 -459766512 283562909", "731050968 642877915 127208029", "428321167 -282594255 165182058", "672468625 -475837441 763648088", "826262715 -776449773 652103517", "901778746 710079326 32340008", "34632181 34472928 756672386", "747099825 245970761 662797326", "333043288 -261003026 791301048", "52772490 -37050456 717322480", "679708428 190460013 149614912", "857144202 520804258 332364806", "248764711 -559267586 197246900", "992705248 -836324203 621320113", "509424725 358994369 477484461", "772546414 145211515 678648691", "308850067 -151630159 28462630", "383406237 -183831214 589024301", "316400200 191683125 130393658", "126812811 11072768 69388925", "236261763 -149727157 17758778", "58403229 -22641194 12267185", "592811565 165692649 344812260", "332555704 141418263 323341929", "507567709 -318465636 32043509", "349777324 110368401 557486868", "911134531 -804718904 767221769", "401207700 -313596966 247256669", "805765699 -242697156 547250833", "958634812 187996355 734785282"};
    int C = 14;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 115912967016;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> guideposts = {"215267125 182277501 12251184", "143866122 89469176 354736289", "60070987 634956412 7416406", "576351513 368661980 476015475", "280897498 -134630995 965350602", "300633952 226097930 269645451", "105851247 -61106697 702598608", "790432745 -521519469 895663269", "464063573 685284484 2090332", "597576976 -214422336 264911522", "815445941 -392821159 140306112", "403970853 -113903458 258476023", "215401969 52503098 24468213", "368055315 -166588282 285137266", "748618016 -324753241 821706288", "609776713 63262257 919475256", "30104002 2025707 29311914", "189468284 225187648 85491059", "933817908 360991017 83876114", "967173626 690248075 413723018", "576775780 -256652871 204660641", "828585894 -421099903 207829366", "211719894 -171961097 159480436", "17754073 -4639560 531651625", "853682942 -558606773 435541349", "435460017 -420421704 25117210", "536652403 348137230 514353142", "676111006 -505060080 195233666", "744661388 -688295859 38587271", "489358638 -166572583 19558425", "317394275 212071884 143705210", "28590179 -979542270 982066162", "790835804 673547238 862190754", "396312855 -72505754 499485434"};
    int C = 168;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 801164239513;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> guideposts = {"55171095 -28049637 9859137", "336835172 8018711 213219030", "631229035 -464803886 905560323", "556061638 -111977517 537092175", "394401318 162462292 290852884", "461610202 29432509 44280194", "349519897 198149818 540523418", "592729478 -576826149 328180632", "391586011 277368275 147550710", "547026100 454272223 994177350", "782069010 258773824 915000133", "328209644 180288721 562547798", "185024560 127682138 635205633", "54855413 -3495224 244231152", "562861607 -377710033 273327362", "810303576 398363357 241229845", "432483252 -125801777 14605275"};
    int C = 559;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 721210345731;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> guideposts = {"217959716 -445281471 532368410", "178990619 -107317010 50237811", "101261372 -44687136 67611797", "320520499 -64781447 128464976", "791001006 -416855097 389867717", "448549256 7431502 188372680", "71849667 -22305056 675172579", "249795910 150492289 836842969", "29266822 15635965 163238271", "96671985 41703828 851912881", "552703148 5975106 131046930", "467230549 392075055 285613647", "842011986 -798280394 221201082", "815393294 355071855 559934374", "802563229 -31746129 639182529", "64471435 38199613 433582", "314478982 -300048893 532523247", "110374069 875040483 867933019", "10129229 1300201 89527", "871742377 -778316277 183140808", "173960567 55312150 414173884", "38528541 10915693 869170991", "60247608 -60112036 390467638", "941725037 -159566268 808423074", "723822772 689377465 545933389", "914969443 378415462 611542538", "308029583 -240662263 668768619", "534368820 -464044455 70783957", "291222162 -19090687 978072571", "827254604 -827224969 50474218", "231771763 -25798294 126210369", "906310109 635227596 59056988", "221380615 117306479 130435121", "855658316 725560336 461526462", "603457124 288697939 57850978", "368083695 -318553657 784623542", "957289915 583209551 320175765", "330326981 -263424846 293036663", "793903350 -491562878 967439221", "124176893 -79529285 77974602", "48803930 16686089 121310310", "277358482 -420240 525887578", "31172293 11893205 116481961", "736690760 871918326 996389972", "735724848 616925589 568002594", "458341062 -222766008 782274458", "229897386 149909683 517405303", "655162277 522008209 534663198", "474823918 432121539 135478379", "639788208 179279952 176157476"};
    int C = 388;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 3459537497174;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> guideposts = {"39528455 -19777453 200415647", "919245616 718024954 349584079", "737326675 -87007873 86251808", "51884722 37291337 764988987", "203828541 88859457 155730667", "978039590 -792646431 396346850", "314915341 -269394571 545365230", "570612138 -342858463 452464155", "105662421 -57032711 838744011", "790489158 -733449109 270015135", "594556064 364974270 275590587", "586671933 459203190 888076958", "591057742 214014562 271383403", "339365001 -308679778 430150334", "977889948 -171312858 491540721"};
    int C = 893;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1446615640903;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> guideposts = {"496365688 272479275 291491880", "789739704 -645167397 468664039", "412968043 -11683955 438955638", "509286575 -87004393 318431389", "304623142 259364734 580454202", "267728814 103044423 566980576", "832060449 -306031432 234055547", "861466332 467272154 708680392", "72360387 51518497 61429184", "767257920 102105016 178549052", "545729786 137989744 799897350", "558592735 229495798 176877777", "448439792 -283913526 34238153", "512566021 156521854 147057933", "43163218 -35970236 659345392", "135502979 -695565748 108711281", "453719757 -268006355 217693207", "324663034 -168775184 506587132", "394864801 -217437211 319935558", "289752677 -127747607 699696652", "936168065 -203416289 565284261", "760490614 -330941405 387691203", "530166556 -126860308 730516800", "70665614 43989652 992517462", "175855355 -74519348 383226023", "958058329 -900746279 375484151", "472727197 112597040 355963248", "884171079 -775276556 174605110", "390347512 -189370884 264574445", "561260421 -127300690 775703306", "38164420 -22813373 835333432", "776986407 58094285 304109033", "324134982 -162777431 50740392", "196446865 -96523022 128042093", "698366562 -181630331 587882880", "509122415 90987269 431319144", "590822730 -544541492 225774690", "801203642 699705913 910206910", "517920781 341396007 290720935", "510117273 -282438222 536515085", "729248191 -885995052 279073261", "497756700 -349075949 660633401", "686941207 -237490867 666816953", "563317037 381556416 957254515", "758135487 -722317618 31036300", "49888546 24969521 23877119", "629836453 -614313623 400200162", "641845973 583576786 693361821", "149228038 -74761769 486669552", "562478905 -322857487 18503680"};
    int C = 559;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2388218735888;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> guideposts = {"531311037 -334307438 781908402", "561963277 -310270270 560565362", "5325913 3817371 168082633", "332594027 4017898 866026927", "332252418 140194227 563762415", "535632881 298480049 954780624", "559926684 315728230 203201895", "993760301 -249775987 642978929", "785129088 754881154 381728150", "79601027 -78378781 34674645", "65466899 556459 55082613", "652754050 -220841633 248925512", "424548120 -49058531 778505378", "971093434 -766473787 92136624", "648202122 -164451646 516758766", "984824147 -293324777 657184617", "864750420 681405712 86277632", "5992196 -1853396 713440044", "949974311 -940450626 830894896", "428638739 -248494443 237997563", "911334693 -344752456 219749320", "342476159 -227281590 39808049", "320635989 -285771395 111438083", "86610578 27358499 972071414", "137708778 53342403 71581173", "423997541 -227864578 22305194", "847604968 388832632 887044514", "173469973 78384093 254434634", "550849971 54627671 134622768", "48859077 -11061693 595271960", "8857726 -5344123 371881968", "5247652 -776182050 131861314", "877207749 651591406 148660409", "823812220 -499353864 164649448", "961679654 65322625 642714812", "509073317 -118042657 856148522", "11109472 -656104 131224728", "167452762 -92022822 586601251", "770262847 -292645225 143053386", "98337449 -1342334 931678766", "934916542 -699436530 896698187", "207584421 -14026020 43884154", "329580706 149477285 391199777", "156859268 -82175687 604814723", "514942557 402471133 593226287", "631347398 -706060818 856866542", "617293570 -167869484 719143099", "197014689 -9556004 909278667", "505992320 238866068 151316616", "12905280 7073401 95000151"};
    int C = 903;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 5888227203336;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> guideposts = {"215604617 -449950642 42315412", "423939331 -419193527 47974894", "872801197 804337434 529774301", "212668344 -49340579 243506660", "566300665 524566459 476646900", "35311262 11191651 439127051"};
    int C = 57;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 111465415561;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> guideposts = {"22171353 18583239 176245540", "703483791 -330260442 515396285", "973855927 -554077911 10287330", "211337720 -145926589 229596932", "748198716 300960628 550694745", "899020572 346785025 196721603", "713875898 117622362 169878618", "488890752 -187911591 307621707", "529159088 -237962345 119418755", "815594838 -561145472 124482043", "826743103 145431084 265238617", "438290681 -369900114 759408383", "632411841 141491742 203600911", "31635347 -20531793 692301929", "704733935 381051107 225333366", "760505542 -13873812 154128422", "9418813 2219948 130373081", "585908299 -452028275 30970973", "126326093 -41699054 156438074", "421079779 -151816688 67977066", "65583027 5326546 577809253", "459448848 136028579 860248831", "63733083 51406772 436451096", "577515123 417667370 977301404", "567686724 -400560098 66005761", "37347519 29065319 31006378", "952600448 -11615109 37350558", "899568539 -840856989 201429982", "21558164 10588800 14761909", "376370422 -14965145 739999725", "140755880 -70896233 305062637", "665442193 -469942386 63938174", "6593057 -264269016 351888444", "560729544 -539957533 618120918", "598009515 -190035908 477026150", "371335406 200720030 722175620", "316247735 -315390579 182678305", "889924782 -12107472 315393903", "349990641 -147699703 912751012", "130419786 60939694 887593234", "538122049 19625835 144532479", "926248895 184340737 105891462", "446497364 703726650 277216432", "263366921 -33831204 171934289", "333338820 -323084805 171572392", "220601890 118798429 509155862", "10320199 -2105551 462419569", "355703409 -337913658 848537488", "449604774 -297504497 421146723", "407882434 -40401374 567271818"};
    int C = 934;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 6263051763485;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> guideposts = {"876952411 -790710150 37163262", "957947932 364569552 589146933", "716451545 -673879875 383263041", "821535091 491499436 162122942", "556618734 -215597043 422657035", "38355718 2432439 936139111", "949844079 565422001 432025906", "589156217 562223027 432417733", "70210213 31641323 481424198", "607429839 -400402282 800349662", "682415045 -71976994 581094274", "442025766 371471693 373584168", "819009043 -323369324 18699113", "831472102 77766747 182509870", "550325425 -259720439 454477365", "45063358 42188522 362664094", "199671849 -170592610 159209018", "275752440 -215084971 938638689", "255299111 -25387585 934394457", "176701908 -119597819 33902661", "51242501 46991797 654495926", "979995933 -969947202 464183481", "45478173 -30503462 950734902", "609070866 -56198840 526401820", "71099123 -54041619 43004569", "166482764 683743926 345507767", "94410934 70888221 438070724", "483215959 -368764351 124656612", "815937712 -783091562 31170823", "631406609 103678225 350024282", "32345497 6252051 635558753", "572743434 190627978 666265544", "638363371 147440075 230230533", "393661568 255103671 203028651", "511064737 16591686 447379489", "15199915 2716941 446164702", "880683024 381654639 35534839", "20117355 -12127582 997859960", "424292539 -310954819 795257896", "945866664 -63761530 581610209", "929524551 684742891 551652741", "12909522 12852851 769402462", "214370313 -26020992 90873302", "55763056 -2360274 35102834", "789494713 -496224160 50888618", "907935131 -699609429 773485579", "674225228 -921598489 628179393", "393603788 -41304483 283817180", "779762964 -607992581 776885252", "18593408 16936095 896986563"};
    int C = 448;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2887356196108;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> guideposts = {"5 -6 4"};
    int C = 315;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> guideposts = {"311224442 253687678 450418301", "276313349 251882970 324260326", "488809225 14778667 681507939", "459278767 166016063 751066584", "749366094 -178409871 96627476", "641120073 193038938 291092695", "288721120 -210853848 126964531", "57708188 33223557 284726299", "9154139 -6839684 438111252", "462155333 -262383202 391694110", "248741336 446861 462603560", "364643056 295742327 179504088", "931255733 -892568212 189876090", "472268468 73282951 44189825", "317578703 -562271432 118936163", "151770214 9806940 91099232", "74034007 -53754309 237609246", "893316366 568019224 523712616", "387562968 -472910086 42880799", "761186546 -721276380 590942210", "680226370 -231513738 528213584", "996412107 -280914888 49562274", "64429798 54774205 28846189", "41900323 880451254 751904200", "822477773 -571067278 770407052", "6554347 634529 2502243", "8084680 -46329 1053566", "760770505 78162654 99265886", "847008056 -645279824 941847071", "861219253 421377845 177468246", "273654104 -49770299 41867055", "349146324 121024289 682744656", "600157061 571053885 909175303", "616690621 -51202440 885749530", "290651118 23492491 278908395", "733862271 146912364 75950585", "893574018 280413771 402546969", "149927978 -121205536 724776745", "245297433 162350457 52860818", "302657965 237425521 664145845", "650914345 -554867815 48961128", "843948600 835720513 320957768", "906136207 -242396935 882075844", "384099985 -23836215 468721887", "44850987 3446384 411545828", "503035386 385560819 854121618", "624904036 -447589128 410243995", "102645395 -97044554 622063097", "550906826 -163861012 812495936", "208833635 159832559 149140736"};
    int C = 417;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2947929185199;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> guideposts = {"323015330 -292496023 178550383", "890744387 502663622 816587749", "992653299 -656055862 5450374", "188599889 735741741 454834996", "412792066 -126978896 270256034", "468794253 -292645905 830232407", "178356377 -85534673 491493403", "778218135 44735336 845277816", "461315117 -343438075 764884993", "58648208 51387094 9746979", "43688607 34073454 19110213", "451926467 -431128786 896220622", "574895145 -808127878 58046121", "233745639 162773168 195276405", "232524785 184358588 50963360", "517400187 555681664 587876067", "579836450 163904581 374917662", "724833485 122087391 340038271", "796972413 290500761 338314817", "335549601 -221286079 32234806", "969546168 -870587267 289493933", "268210081 -264050386 851158396", "31400489 21151598 411053513", "788748532 -325040002 698054673", "237958806 -144924485 741819", "682863021 -478306618 312393845", "280068109 -178417352 82004593", "16915960 -5642941 153458359", "444479045 -194608737 963976547", "642301225 6326635 113060291", "20052952 -7559008 902568730", "916691481 -674990785 112636100", "106012225 -61706503 457309730", "494339708 117334419 26038949", "25976469 -9355749 539916540", "42987788 21160997 682441052", "218913356 -732301316 69857718", "775063493 -410576747 567160060", "131135891 -27975106 237844912", "515205754 -132435322 515384614", "359333633 -26040294 334107136", "221159321 -17057821 929341046", "473564320 -166284652 918688307", "714125271 343691184 358504569", "2003625 -573253 47875655", "696973068 259854224 749586068", "963378806 -447251172 100196877"};
    int C = 529;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2644981560885;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> guideposts = {"435509140 -269097946 816010836", "690693116 -432123242 144419571", "275326578 -476798177 334380920", "963606188 107491950 560785280", "964535341 920126379 782610723", "734841966 223353253 299193450", "27254516 -10760877 967756960", "810631405 -747502971 300865633", "72041365 -56788714 673189858", "895255088 -303025553 617862291", "416364400 -349780553 925173939", "57974936 18270718 995716328", "758282122 -514443705 805965533", "643039496 -764713581 864487329", "536558141 -343069337 336779190", "331941381 -320030875 211555784", "685396488 -45309581 61204976", "223192286 122596806 981222163", "363050895 147761149 71454997", "212804123 30877945 395555618", "297109970 -103980850 410691299", "982222004 95318967 289915715", "277823256 -186585659 68082712", "974573040 -548254475 424031014", "403029042 236680192 349612477", "421161943 -315421130 755919904", "647792367 -624988821 671262950", "455654551 -188264462 758820341", "463360514 -126210041 52783779", "529417557 103156799 254804281", "549389232 528080860 330935239", "926432567 -61672325 905233099", "674194925 464661896 59142892"};
    int C = 590;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1948763872392;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> guideposts = {"216766947 21096443 639120866", "986663909 928559878 363854681", "978302816 -57162485 162634224", "617400355 236894496 223499951", "239538846 216629808 195218275", "223927052 100956551 916863877", "608013283 315271159 317636647", "698676826 76048337 783182403", "520759746 -66298368 457896879", "188576560 183915092 235964432", "151024428 -204743168 120227737", "62131467 200055419 451704217", "486164413 -102266339 504119674", "928154659 925366179 596836910", "539813701 307161688 532795422", "170957608 41225730 694267183", "473361377 -100685079 783566806", "972334475 -945511522 418663246", "898133535 -496726445 200518012", "408423087 -98897499 483287321", "868937982 926740864 909858116", "730867627 -629608597 959199909", "11017163 7160681 472590390", "483651731 5673388 373915733", "215925295 -811545884 351840513", "189635423 45918791 303780617", "473290469 -119464995 92202395", "540035038 254075001 185034308", "378221554 148286461 111759094", "4189029 -3654047 987213058", "248296275 -690118613 959652812", "269364758 130785795 330632794", "541750653 274965737 780576532"};
    int C = 889;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 3601414933052;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> guideposts = {"52476241 -48940790 931198765", "88719446 -81922056 50256770", "871478443 694994661 23987276", "116443002 -288420012 323949866", "968313177 -935624004 268312061", "814707453 116707623 214088927", "228136196 223752406 819600386", "278231465 -174100570 302318256", "828381175 -427526060 374074923", "493716022 -406942564 376744937", "181863686 -643435595 7487332", "412455742 -846796282 362539875", "228380442 -89102481 271348914", "286456572 19828197 527810644", "808245116 552576589 810160090", "576299099 -58623507 305576393", "56774990 45526961 10163433", "778003736 -332171861 909871019", "852710364 384749917 835559364", "136378639 -91343727 104869262", "76592292 48441072 336579481", "932923629 -800431344 697233035", "669543241 -66454620 5647235", "415669964 -350662228 580282872", "216876242 -982431272 60804615", "19554195 13381379 168036295", "565500120 -349399451 337339555", "253853716 199364380 936347325", "909728411 -654070201 862688418", "948299562 236633650 446052558", "890917137 -218737191 419189344", "889730677 66657087 812341945", "493833327 984551598 569680553", "36008806 -6107599 979373904", "18556088 8780365 562441429", "602968758 265766827 53349398", "52198485 -6460932 458068476", "935776882 -427171385 829899805", "847575756 690576698 414626615", "892635985 451095308 659793735", "819513095 223346260 647682643", "522848754 486583829 719597392", "498664910 -21379147 475864505", "334618914 89050193 114442579", "232970334 -138303789 944527518", "623775847 -291486533 96350635", "681236549 -596249818 616817331", "42733151 -6948305 684181845", "752494831 -179329504 102852337", "936956601 -856781716 124081987"};
    int C = 518;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4269570392655;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> guideposts = {"256785987 87855388 97604553", "935291536 -425982898 16572147", "333162284 -152224967 547739151", "692422894 467869619 683783068", "318326396 834386955 129562660", "531554153 -229224853 640212079", "888381692 -448792278 534324197", "102103019 81801152 71335880", "34154289 26608203 600182243", "34782782 547269387 32009356", "243484541 -72761324 108052056", "613049774 -399584394 201750553", "30795746 18281651 789435175", "115685438 95345562 767128134", "681154856 -594997865 136001434", "604181377 -203718024 203701812", "268222512 -249403147 768770025", "71071577 -5635891 778206795", "104340416 62646091 594317453", "424470318 -335929767 353479437", "72997892 52265431 1465964", "396297298 190641734 637805091", "530501276 107866460 235877286", "251590835 216758434 868426729", "338036466 104534247 872417815", "72684813 -51731559 163020431", "347261991 -300826042 290526947", "25246262 13687427 905920394", "499775198 373381025 425054234", "367409 -22289 541236013", "831258278 -96142233 335664505", "145395258 18098592 669010969", "701384158 -404738395 950316784", "635098858 -539024353 236893306", "58769978 58009695 48488783", "17162258 -43826458 956738478", "89727840 80243823 80746733", "6260748 2487137 28386429", "972709417 685834187 321260063", "649138837 -356447449 199051408", "465963663 -357881539 983553465", "99586912 2996571 50307663", "693004120 -350307310 141913644", "870471953 -589794667 218618045", "425804273 -323924895 583811268", "626661945 -229046835 818777503", "802623002 3938018 755745042", "889671299 670071006 753521836", "21014612 3083025 664345852", "698323015 310906855 788314758"};
    int C = 489;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2098457691616;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> guideposts = {"742038353 -525937515 612982534", "78698327 -9017591 4068073", "801259269 -754674386 742141870", "943723994 527179219 77651972", "713657939 -874874500 2938764", "310400046 240973183 655540400", "479597394 154089398 1804119", "555050529 26858653 293129793", "618405513 191323009 706097099", "447552281 195637457 361637653", "212768472 592664892 74841130", "978873471 -844339774 195521157", "57752615 -37113409 124412537", "53886607 -33656400 15932379", "64471802 49456361 479815860", "54925338 38755376 747263", "39673929 -25566646 781182906", "752647166 -682417798 527441976", "697643605 -283370067 729886348", "582508393 186880459 110399078", "630928982 266253122 387098071", "503967254 120259097 582635840", "344084531 -145063186 168148265", "9177131 838302 628343638", "139137186 -68432839 488991794", "107930468 -6919258 89611809", "535102300 -416197983 494077850", "38353312 15385243 172329001", "822979669 -638874226 180571257", "925871905 -38504874 27475966", "525752851 222895608 702333368", "425482993 -364861131 239541506", "857078929 -563327958 946988568", "357513802 -144756986 896847910", "773959006 -572576031 679860796", "989769714 593800650 584628844", "140250320 351621536 91925267", "656589554 -356445671 375952501", "858970502 420416118 155847185", "766978571 -486390503 950150725", "156861069 40825859 414731347", "442648533 302791449 389970916", "790542816 -556494303 9570110", "34919282 -17871797 907918470", "669060134 -459077807 381830906", "81499184 52263683 842051460", "239897549 -23136965 505295639", "661742236 745259308 440332101", "924451071 653108649 304578127", "29728718 2012090 619857613"};
    int C = 855;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 6601418586100;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> guideposts = {"183664293 178169002 173216755", "787435863 705044670 714749672", "858408547 684442493 766457700", "36652156 127769994 24157946", "763985897 -663439807 242179531", "109772976 -51628478 50122419", "790072532 -714104236 588456225", "932485459 -420510443 96766437", "115599282 -68833811 374035090", "899528727 111927260 459606625", "54497635 19350521 965357953", "426230104 408782835 88580218", "875360588 497152886 712951110", "365959329 244308969 95176108", "706454765 -559826982 698123361", "927090301 457862525 145641691", "775779055 -248332054 848757803", "946262730 -316759970 239361290", "38546079 36295938 3843104", "271358749 -84705491 428696965", "769119332 -450114433 295157179", "919622407 -246671361 47120127", "556553410 287125092 615447104", "239158318 -114419979 476230701", "989758180 46751843 404546527", "98098844 56495262 26777362", "326664892 28475488 277808923", "569132471 482871344 341412780", "829564482 -221854289 505160030", "763188401 739290066 311527411", "162739797 46571877 70619158", "785261955 -371983676 407399374", "608705355 -262691560 302127689"};
    int C = 423;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1968617855083;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> guideposts = {"921759303 223859479 151797303", "206426264 139482990 473864212", "199725260 -35125572 116409606", "89435931 84035190 96723605", "260452850 244994563 131739108", "905755403 788245402 997010396", "873043048 299889349 194217258", "299026443 108129884 628019025", "829467040 -627585569 899866592", "491072139 353520159 354748074", "306705282 81902225 138949074", "528896237 -385664861 197824588", "73654947 45203892 916921246", "394333775 -47773823 288196962", "39396414 31649549 706854238", "23606806 -6354763 871334660", "7413126 -5426921 722239324", "760935083 -40454294 156036592", "22200332 -8449941 4262875", "299339525 -73397309 741506706", "841790275 -88590077 32000957", "514210295 62934466 971584380", "525372792 -72260284 445412238", "28587874 -655447245 20388949", "677689008 -509234682 92931490", "56272562 1947830 575368416", "97470019 -4432976 169609768", "35377483 15099473 12214215", "596624441 -124020232 288565100", "867154661 -378400551 109167961", "781938609 -411662105 922239509", "37384914 18517954 199890519", "851965395 433803804 57995134", "22229195 -17342463 618712956", "285018914 -216670934 189132286", "13246144 3233088 11528882", "335995182 126423490 37394446", "734335153 409670543 287666794", "636095718 -374414398 486390217", "768030879 -348629801 337385119", "141176362 -138360267 35089897", "433268762 -279171596 121014598", "550999884 -193183755 124605836", "238227446 121407862 374979001", "169075598 -29787031 716211614", "36660774 21769590 3463737", "523038202 -293182057 82663325", "67301075 -27396783 447619390", "900529655 174455267 922228050", "221045042 -124621342 790773702"};
    int C = 954;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 6500067309634;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> guideposts = {"481471367 -41900165 298189713", "827428480 117063072 428156173", "111355009 -38499815 429427137", "275550504 -201557490 946590516", "803167085 -573107345 777948626", "366370880 280570076 12437754", "696565712 -310670874 783568541", "897826461 -109242287 262013233", "340037132 -211580114 55907532", "182123899 -664217461 47547556", "539068270 520530302 89011768", "920974294 -557038187 537651904", "215972362 -45662785 624981708", "473286519 -240129508 300102912", "467178549 11517919 371596579", "686982482 -209642211 610346211", "714299289 -476967203 65488886", "64846878 -7830950 1942142", "821946939 -307667402 444508914", "390325598 4598090 151590698", "116494314 -507953997 720150092", "703034403 -612812496 95019089", "170710251 -751362506 2365780", "854220377 -783020035 301902025", "680915684 49351374 681048305", "33273439 552132932 19645353", "440093523 -233049610 159061129", "954268725 3055610 121456103", "590022420 458977220 348055213", "396478593 -395783203 255094844", "784994495 -663587851 352237047", "714213696 -716891708 164884792", "621594598 279237457 298962866", "696586469 -668571556 273742178", "628622725 77178867 56326987", "310723107 -174613963 328717773", "76146196 -50880725 33785503", "664518082 212132986 74766743", "632511520 -8560531 610956953", "790963498 -689581756 58068265", "53023836 21986161 177505477", "917803402 -522920726 643199020", "556508802 -19596856 222576062"};
    int C = 891;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 5815418785768;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> guideposts = {"755066174 -427343350 976583288", "286130554 254041877 584070283", "645762822 -444017605 21636515", "36708469 4832741 32217216", "611341180 -378846414 53790281", "38389135 48736 150440411", "516296198 -264633522 619140449", "234889295 -81808918 834952712", "127906532 90769612 6434586", "13825784 -11615866 7027406", "507716095 184056369 240235653", "346024920 -70514707 53422489", "564297807 422139806 584043636", "806133101 -643869992 499349408", "798189832 -637759517 33292062", "21110989 -176429737 124471476", "335381237 122936317 694569924", "15735858 -12854055 135741839", "443362211 -652345705 930327836", "188557212 -115884036 469020279", "612223313 -128267726 254601444", "431576040 -338218327 30596428", "550288831 -14685390 29347608", "365013199 934573294 62043359", "137770824 133499062 239986015", "171833506 -170015162 489181912", "171543292 -79328657 168248189", "826798278 325103582 60963537", "362162567 -69090737 693732711", "249204793 -22359065 132164578", "926118447 -335686104 230777231", "713766826 106215390 727623798", "665285164 -37785267 315011781", "67849443 -58830987 636398790", "381244455 250679521 166866765", "19753375 -3322171 321702660", "476230312 43515196 437517839", "211204097 84716859 346409665", "938965425 -434688236 672517676", "402555708 -175771743 103093373", "942724834 -13616239 814387739", "207872312 32775923 468573378", "302888152 -11965793 947506287", "684854839 40733146 444152361", "410826142 -374979166 933391795", "971769281 -386139623 49320825", "6395759 -55230 227535993", "873263203 -637757652 98345305", "64573470 25287869 721319816", "676062211 -206052463 384551592"};
    int C = 197;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 852352883753;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> guideposts = {"528271656 -6694813 935445213", "923809563 -673715296 584989449", "455321870 -257598731 200617824", "361127440 -292977799 186100972", "939860513 882899072 604985219", "814032642 150792826 135651979", "659114491 126359156 469915726", "694764623 -4854117 50246771", "444415732 -169084976 50428852", "38393028 -995256889 4324372", "131218198 36492391 304454825", "507079833 207129562 62240890", "278289868 -55038135 175321401", "896391948 -157089297 788232516", "45107168 -10860791 725521478", "681494676 -37398620 984558377", "182154423 -41328393 297408497", "43512838 -465381412 8302826", "294890733 -74854406 123917297", "65984292 -3215487 807446468", "548045257 -365238576 72367058", "123029871 61900501 87541843", "908694045 610551387 24399804", "312107047 194132416 299331571", "122818692 46986863 48023635", "437095659 -145099563 679220810", "244333608 -155524417 504041943", "471577692 -366315009 632507971", "172472438 -112038123 3187677", "513019033 -90263793 770913623", "501037919 -567427363 34587299", "11363234 981431906 5131753", "780278050 456642349 484542906", "492386275 -73057478 221335376", "643878319 156827581 615099717", "243130217 189818978 337981384", "183834402 -93483132 72882705", "60980889 3292635 39529902", "242242024 -10566985 12047253", "238186340 463600408 786582197", "2842252 2209740 819300", "805438528 562601280 898781938", "89176639 -828379730 297898096", "929465981 -953166452 516324088", "419262100 -99048243 356095867", "157108646 -22462383 3287887", "37708304 15908265 34929006", "986617357 568112000 439584020", "47540337 -42375948 805917523", "145350329 30527067 757488264"};
    int C = 452;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4428455235935;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> guideposts = {"241885597 177663392 872018762", "720421367 555937859 145484675", "270129530 -179128785 825897623", "546595769 -183776030 876053694", "906941842 473479436 884089602", "627832314 -531734823 387346613", "845568359 -647883906 491489255", "220788276 157433489 213206409", "803488933 710605068 203283172", "405092298 113438018 965609247", "512760818 -333140710 529873769", "19588040 3805470 119206899", "833875319 -520737193 181726448", "246159389 60854180 102252497", "786215760 808518647 930945739", "956161205 -52969257 578480482", "396958030 296489328 674664310", "482853723 -269488627 196396935", "457029797 195214233 57511539", "192997199 -175958379 884666176", "544113533 -501269411 121256001", "57127921 26120052 7128658", "649857929 315493410 816718662", "353463794 131683228 947960699", "979851781 -752235042 544685135", "641237223 172181919 485544017", "251823311 -178732575 61266056", "3054390 -1335749 2258531", "201775994 -18503543 18037697", "332676275 557610587 99094384", "939933831 -788948764 375964832", "35606116 -26696708 726450996", "21911082 -53708853 839716569", "43227214 38498046 236339974", "768697155 -472614365 25485985", "517505580 263268946 240365390", "140774522 56167196 931842205", "67223175 8530004 838746192", "913178265 -275748169 915369986", "578234256 -111266297 354332467", "122667667 -113677105 233695707", "283909014 -240168505 272330659", "233699560 -113559055 598002982", "678127394 358564739 982218648", "886176060 308712808 49123798", "806913267 -13426927 733416663", "110599261 493174637 329231100", "473153140 27970542 629512111", "509581833 197668981 278276759", "428995943 13342712 972510489"};
    int C = 366;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 2028415667614;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> guideposts = {"922375248 372337934 157147084", "570912151 -473727018 87857330", "873645923 -791381775 412963169", "803095144 -450674451 22824775", "835409960 582012476 730030618", "569015669 -134487383 481578439", "926974401 -683855877 239855500", "29056129 9647741 440144573", "439110842 357228023 298095213", "453685686 -883175240 326340229", "267085137 35687545 380412321", "13697864 -2905886 13534905", "865466239 -757231793 518231055", "72219756 28064131 839173634", "268048251 -74163912 45044488", "82784390 7620540 70621597", "814728347 -683005225 31429460", "209525713 108192946 946312080", "964371896 -644381380 943654501", "17092403 14132624 12990555", "350865794 132922658 553483488", "483245781 459426340 80458334", "724388447 -418110126 738440896", "885105059 -265846904 73192464", "588547290 -422246138 426733350", "639377912 -516490153 761966176", "422275233 -506545698 73763268", "90705911 -23409096 21172325", "513712033 360509037 272860930", "884652637 -804499894 394504818", "733258704 -95295923 976526747", "884558551 766933374 827372766", "231453586 58950497 34520720", "813593885 -408379137 83117725", "41708517 -18729102 663463352", "494043746 -276099459 1859206", "72309443 18118742 911099758", "164444378 -143314562 82412043", "398190916 -99247764 392240486", "185243491 -84681129 4958180", "556207250 -502991221 607627065", "290842518 195717103 240502549", "424466873 178666450 129485472", "493999304 476772063 987193085", "160795585 140223493 468130782", "475763909 -411830136 233275947", "939647172 62707976 7554338", "645222222 632235616 510322837", "188475870 -522803160 120125011", "934142879 407683555 705475355"};
    int C = 598;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4605745218645;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> guideposts = {"942632189 518617687 314638207", "630283028 142695088 163580114", "912281395 554547506 188105144", "798278153 -131966028 260154214", "124231592 -94508189 276949472", "53316696 -107642697 48105483", "503573335 -151567190 808251860", "532119716 -478171521 474613189", "483707395 260732423 94792037", "857774 380053 685864309", "484612999 -67089373 468163319", "299493908 -371084692 949767159", "156862982 64081358 130248744", "820150038 516630193 66341222", "311485472 238496115 558976955", "66727657 466867760 345398732", "414395796 398804112 663900761", "505823084 -497556026 426198052", "627145208 -465519529 720683494", "31048241 29881127 8886051", "600872040 494023288 35057527", "71558971 53460195 27931126", "135557219 -19627743 800396857", "255585255 236676943 874287557", "139178801 -48987531 694046143", "235371727 -156386815 419898778", "899555960 -581502249 68914316", "331895213 -27969219 39779404", "788904954 -628520935 384039907", "705432714 362766234 60018521", "487750543 -335902881 172781593", "445417916 14301341 102588328", "736047054 -203461008 965692670"};
    int C = 765;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4218415485648;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> guideposts = {"557890090 -353523988 397214476", "600101320 -373934008 388041753", "889029841 -628179218 546561434", "739233514 -516503829 896888874", "833080673 -249826074 587157345", "31967263 -1390264 40310284", "399565990 -291093357 350301614", "846216724 -168637980 451733688", "367764090 -185354309 959792208", "30819535 30621204 15520717", "737822249 -271739702 347569756", "700875773 -673584565 672288039", "460218807 327565679 25346160"};
    int C = 723;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 610021407738;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> guideposts = {"477687807 349987645 267314095", "397827020 -191974542 5806640", "232650318 -199078619 108852566", "861545625 -415960689 49323367", "888361981 294958726 184041356", "636139475 -447407407 342491594", "32246339 -22658302 677807250", "977620095 542531392 499741315", "202600653 -34877856 109599780", "388869264 -273479312 236989585", "802221547 602271558 791987776", "941266586 -182404336 47526883", "666102041 258342340 640334917", "53855307 -28152278 48898809", "67801118 4891385 643165146", "826505606 -2966231 648569060", "710528149 -107130302 538369971", "583145497 -36802643 581096832", "11259035 10423804 9630957", "557669983 -242831918 6159692", "358439681 -75204561 408956930", "341623634 -247358591 352654902", "558663719 -346661810 250156540", "133062867 40463346 95978623", "691212911 303560719 550244778", "716905789 -316730042 722584096", "96251890 3250345 30397271", "362174325 98663494 213254618", "500673736 -17921662 524258647", "381865231 -298928667 639762170", "205740603 -128165290 368702566", "392124499 -539317782 4858968", "223867020 -2378426 20609918", "522783766 125408183 935717416", "49676341 -30030141 723725965", "647114185 143764313 305910141", "175929560 -171328351 529214521", "934718000 -912396892 150191551", "500213547 -485008331 533210635", "13477269 3668931 202912620", "32968363 -22729187 278441291", "707242112 244122978 793567426", "306458337 168970388 15484657", "746173486 -324092442 257123416", "22396268 13674678 291356803", "581959267 314728780 176817835", "67006780 -48940300 524435940", "668307024 -559176371 679533860", "436040869 824712566 16160841", "303783070 -68324651 604422700"};
    int C = 20;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 137342371042;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> guideposts = {"253428869 -233799721 179194585", "999952348 -900288817 6420754", "217375628 -78706216 62715050", "334395906 216110249 584550055", "723652819 142088804 380510939", "917805012 -706236333 457796322", "7085228 -2576525 2554185", "187057749 157722753 67332962", "537029385 -90238936 468375016", "663530360 -643395383 550508339", "502508788 -81466528 686149841", "676358722 203153452 28045850", "748003550 -883223639 98418645", "528635928 -136019971 972387041", "54269104 8455900 90804943", "97770860 895850879 752920240", "26803636 10213580 109396952", "781162595 -60980560 574729348", "675571160 341022368 35929088", "634320428 -11203304 4832054", "56336606 19481120 425594617", "984438815 589338787 496220596", "695069039 -41329229 255872761", "789154784 705356638 159503707", "422469416 173072576 950838283", "47182359 -6025144 40810896", "139696678 -125840405 367836456", "982103422 -261106591 339965711", "14958995 -6917563 245655281", "66335314 44036038 336172674", "740454978 -892357750 260336646", "868161646 -588918147 390316387", "109339487 -9501771 212585801", "862123661 -304452325 40761659", "655497918 195372518 340356237", "761035672 110331842 237775023", "336721230 189435691 313754244", "478785250 -306803588 281841411", "721584051 629599775 332183786", "750981818 -487480294 716447225", "923638821 464163231 354751547", "445149382 17822746 904177974", "925961719 152081219 149785717", "236598781 40209049 178685338"};
    int C = 436;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 3536879497002;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> guideposts = {"638075384 -281014094 961270332", "219920436 142768076 29685093"};
    int C = 165;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 5627222;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> guideposts = {"321015831 -40934532 687311633", "590224913 559204348 287738490", "560043118 21729139 8683830", "194762957 -116065208 64986371", "249182872 -199881532 594700561", "855622016 -162766117 284652366", "607411544 226222757 428572983", "192385964 -75146873 633992804", "840477562 -237155759 143269884", "310799414 -45345330 3925041", "365101293 -51579956 776688809", "562321749 -331731928 194836131", "66579922 63585376 52853849", "60521771 -27707931 187792645", "675464636 596313634 273791230", "467837841 318535605 603594179", "864570477 644217460 738417462", "332896727 -52918419 294230515", "167641814 112786726 624794987", "754501516 -297915551 79771995", "6328880 -993848415 369595343", "268863880 -137522856 528731343", "926843986 -511379812 572073445", "955430092 109599672 31259670", "73563075 -5752067 15924959", "272039160 264218927 136777661", "911700752 -758360073 210001161", "149279331 50993662 3840633", "579764335 -309177986 736440872", "510408221 247636106 178074899", "936207291 -356149631 43548744", "898731618 166083501 114980485", "144394309 -139697576 878769216", "435340354 -94711617 212588672", "883192083 162585950 73195936", "2632078 168639204 561229537", "202001795 -71846991 115139545", "424626261 -1836192 340677997", "80086379 -67845217 72445096", "206821722 -101539162 699533201", "677918514 -414163165 455821225", "752055681 -746669438 175179426", "126760816 104557469 32919485"};
    int C = 479;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 3330986557578;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> guideposts = {"1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1 -1 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0", "1000000000 1000000000 0"};
    int C = 1000;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 50050000000000;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> guideposts = {"1 -2 10", "2 -3 20", "3 -4 30", "4 -5 40", "5 -6 50"};
    int C = 333;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> guideposts = {"20000000 0 10", "40000000 10000000 10", "60000000 20000000 10", "80000000 30000000 10", "100000000 40000000 10", "120000000 50000000 10", "140000000 60000000 10", "160000000 70000000 10", "180000000 80000000 10", "200000000 90000000 10", "220000000 0 10", "240000000 10000000 10", "260000000 20000000 10", "280000000 30000000 10", "300000000 40000000 10", "320000000 50000000 10", "340000000 60000000 10", "360000000 70000000 10", "380000000 80000000 10", "400000000 90000000 10", "420000000 0 10", "440000000 10000000 10", "460000000 20000000 10", "480000000 30000000 10", "500000000 40000000 10", "520000000 50000000 10", "540000000 60000000 10", "560000000 70000000 10", "580000000 80000000 10", "600000000 90000000 10", "620000000 0 10", "640000000 10000000 10", "660000000 20000000 10", "680000000 30000000 10", "700000000 40000000 10", "720000000 50000000 10", "740000000 60000000 10", "760000000 70000000 10", "780000000 80000000 10", "800000000 90000000 10", "820000000 0 10", "840000000 10000000 10", "860000000 20000000 10", "880000000 30000000 10", "900000000 40000000 10", "920000000 50000000 10", "940000000 60000000 10", "960000000 70000000 10", "980000000 80000000 10", "1000000000 90000000 10"};
    int C = 500;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 6387749750000;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> guideposts = {"79 4 114", "68 41 102", "80 80 68", "48 1 50", "59 17 34", "118 59 17", "29 3 11", "31 26 48", "74 27 2"};
    int C = 46;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 5731;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> guideposts = {"59 23 13", "9 8 28", "91 18 50", "32 10 80", "110 61 120", "54 45 18", "73 24 118", "30 8 73"};
    int C = 5;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 479;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> guideposts = {"1 -2 10", "2 -3 20", "3 -4 30", "4 -1000000000 40", "5 -6 50"};
    int C = 333;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 333999985348;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> guideposts = {"1 0 0", "1000000000 0 0", "1 -1000000000 0", "1000000000 1000000000 0"};
    int C = 1000;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 4003999997998;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> guideposts = {"6 -1 5", "2 10 4", "10 0 5", "8 6 5", "20 -6 4"};
    int C = 1000;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> guideposts = {"1 -2 10", "2 -3 20", "3 -4 30", "4 -5 40", "5 -6 50", "1000000000 1000000000 1000000000", "58245425 24569456 3281452", "54864654 48454512 18152584"};
    int C = 1000;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 1166886088110;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> guideposts = {"123123222 12321323 500", "1 1 4", "1000000 10000000 20", "123123222 12321323 500", "123123222 12321323 500", "123123222 12321323 500", "123123222 12321323 500", "123123222 12321323 500", "123123222 12321323 500", "123123222 12321323 500", "123123222 12321323 500", "1 1 4", "1 1 4", "1 1 4", "123123222 12321323 500", "123123222 12321323 500", "123123222 12321323 500", "123123222 12321323 500", "123123222 12321323 500", "123123222 12321323 500", "123123222 12321323 500", "123123222 12321323 500", "123123222 12321323 500", "21312 1232 400", "21312 1232 400", "21312 1232 400", "21312 1232 400", "21312 1232 400", "21312 1232 400", "21312 1232 400", "21312 1232 400", "21312 1232 400", "21312 1232 400", "21312 1232 400", "21312 1232 400", "21312 1232 400", "21312 1232 400", "21312 1232 400"};
    int C = 333;
    SynchronizingGuideposts* pObj = new SynchronizingGuideposts();
    clock_t start = clock();
    long result = pObj->minCost(guideposts, C);
    clock_t end = clock();
    delete pObj;
    long expected = 817848649440;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21229740&rd=9989&pm=6242
********************************************************************************
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define ll long long
#define ABS(a,b) (a)>(b)?((a)-(b)):((b)-(a))
 
class SynchronizingGuideposts {
  int n;
 
ll calcCost(vector<ll>&p, vector<ll>&l,ll x, int C ){
  ll result=0;
  for (int i=0;i<n;i++){
    ll cha = ABS(p[i],x);
    result += cha;
    if (cha>l[i]){
      result += C*(cha-l[i]);
    }
  }
  return result;
}
  
public:
  long long minCost(vector <string>, int);
};
 
 
long long SynchronizingGuideposts::minCost(vector <string> gps, int C) {
  vector<ll> p;
  vector<ll> l;
  n = gps.size();
  p.resize(n);
  l.resize(n);
  
  int t1,t2,t3;
  for (int i=0;i<n;i++){
    string s = gps[i];
    const char * ps = s.c_str();
    sscanf(ps,"%d %d %d", &t1,&t2,&t3);
    p[i]=t1+t2;
    l[i]=t3;
  }
  
  
  ll minC = calcCost(p,l,0,C);
  for (int i=0;i<n;i++){
    ll r;
    if (p[i]>0){
      r = calcCost(p,l,p[i],C);
      if (r<minC) minC = r;
    }
    
    if (p[i]-l[i]>0){
      r = calcCost(p,l,p[i]-l[i],C);
      if (r<minC) minC = r;
    }
    if (p[i]+l[i]>0){
      r = calcCost(p,l,p[i]+l[i],C);
      if (r<minC) minC = r;
    }
  }
  return minC;
}

********************************************************************************
*******************************************************************************/