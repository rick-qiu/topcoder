/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3923
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

class SalesPromotion {
public:
    int bestPrice(int points, int halfPrice, int discount, vector<string> items);
};

int SalesPromotion::bestPrice(int points, int halfPrice, int discount, vector<string> items) {
    int ret;
    return ret;
}


int test0() {
    int points = 500;
    int halfPrice = 1;
    int discount = 10;
    vector<string> items = {"150 500", "350 1000", "500 600", "450 800"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 940;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int points = 500;
    int halfPrice = 1;
    int discount = 10;
    vector<string> items = {"150 450", "350 700", "500 1200", "450 800"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1320;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int points = 15000;
    int halfPrice = 35;
    int discount = 10;
    vector<string> items = {"1000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000", "2000 5000"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 110000;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int points = 1000;
    int halfPrice = 0;
    int discount = 0;
    vector<string> items = {"200 500", "300 700", "400 900", "500 1100", "600 1300"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 2200;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int points = 0;
    int halfPrice = 0;
    int discount = 0;
    vector<string> items = {"100 100", "100 200", "100 150", "150 300"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 750;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int points = 6820;
    int halfPrice = 36;
    int discount = 31;
    vector<string> items = {"9444 969", "4876 4580", "568 9181", "7986 4510", "5497 2737", "4793 4171", "8772 8636", "2420 7814", "766 6388", "464 2278", "4085 8795", "8647 4021", "2482 5229", "6974 8652", "2254 7417", "8391 2960", "6158 7721", "3937 9449", "9808 9918", "405 3366", "588 2482", "497 2234", "9055 4368", "5477 7882", "2847 3288", "332 977", "3087 6496", "1424 8054", "3292 4068", "6649 1052", "776 4684", "8094 9338", "560 3909", "7189 4243", "1775 4973", "2368 6092", "6570 2055", "9221 3737", "1519 6060", "3156 6585", "1523 2905"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 93172;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int points = 10947;
    int halfPrice = 0;
    int discount = 14;
    vector<string> items = {"7267 4262", "954 9721", "1269 9954", "3286 7004", "9080 39", "4976 8599", "6809 1817", "7253 1436", "1785 8922", "2337 9490", "215 8360", "2336 7054", "7340 36", "659 4527", "87 8788", "5921 6694", "2233 8914", "8346 3502", "2055 1210", "8678 3349", "2487 2495", "9583 8860", "3779 7644", "9557 5169", "8652 4122", "9334 704", "9952 9012", "790 460", "811 8547", "8348 1792"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 101099;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int points = 7963;
    int halfPrice = 16;
    int discount = 30;
    vector<string> items = {"5276 8004", "177 9458", "3590 7146", "2997 2760", "904 6046", "6270 5519", "7385 4829", "7748 112", "9029 6128", "7650 1502", "4070 5871", "6324 4273", "1883 6556", "4399 2158", "4393 3034", "5447 72", "9978 791", "1132 8644", "9881 6731", "8873 1245", "7108 2452", "1994 3523", "7844 34", "2387 5433", "5349 313", "5662 5767", "6373 3670", "8807 9185", "57 3305", "344 5749", "9340 1023", "2983 2954", "4869 5514", "8779 254", "1399 3134", "6792 6100", "6704 1185", "3238 7468", "2983 3698", "4148 1890", "763 9715", "522 1987"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 75548;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int points = 7924;
    int halfPrice = 36;
    int discount = 49;
    vector<string> items = {"5528 662", "6965 9812", "5374 8253", "5296 4002", "7760 8736", "3431 3350", "956 7918", "2068 1387", "7503 8806", "314 6415", "5615 7385", "8342 3545", "3084 897", "2543 9226", "3691 8629", "3186 8274", "6108 5189", "4575 3409", "5307 6287", "7700 7279", "6464 7019", "5399 6996", "1366 2647", "12 1168", "7319 1880", "3536 9427", "8552 2655", "283 4460", "124 421", "2037 6545", "4331 8916", "5707 577", "9611 3449", "3486 5602", "1951 6686", "5506 6847", "8793 6925", "4996 254", "5440 8881", "5936 9507", "3963 6967", "3214 5566", "4607 1073"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 103560;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int points = 14402;
    int halfPrice = 3;
    int discount = 8;
    vector<string> items = {"9316 3007", "42 6489", "8864 3467", "3849 2005", "4011 5453", "8119 1013", "4028 6770", "2560 5017", "2536 2186", "5991 8185", "5155 465", "5248 631", "9663 3895", "6591 4201", "8655 321", "9612 746", "4694 7675", "3637 2913", "7972 1009", "6635 7418", "6462 2026", "6624 831", "8578 1109", "5578 7858", "8330 1855", "5832 2120", "2979 8106", "8987 9435", "3195 3477", "7319 3600", "5711 3392", "7685 4673", "8482 9611", "7927 9750", "8341 7264", "5780 6252", "1151 4382", "278 7703", "4468 3927", "5659 2010", "2691 8324", "7774 2249", "4722 6491", "2991 9940", "4121 3374"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 140091;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int points = 6509;
    int halfPrice = 22;
    int discount = 33;
    vector<string> items = {"1727 3191", "994 7877", "5726 8561", "5285 6295", "9098 5069", "8392 1585", "1893 3190", "7011 9287", "616 4035", "5931 654", "4632 134", "5695 9683", "5075 8709", "2755 2648", "6252 7465", "2125 126", "9551 2864", "2541 1537", "9845 911", "4116 2164", "4400 431", "8497 2696", "4282 8855", "1519 1250", "8260 497", "8363 7908", "9216 7338", "1213 1745", "3049 2305", "9409 362", "83 5055", "2108 1916", "8969 254", "3436 9652", "3097 8360", "148 8934", "9500 8901", "1778 6778", "257 6261", "3305 3880", "6405 7957", "300 9149"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 78813;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int points = 4395;
    int halfPrice = 45;
    int discount = 0;
    vector<string> items = {"4728 7290", "4395 5578", "3906 5167", "7025 1402", "7794 1924", "3992 1285", "8296 2472", "8691 668", "2210 7042", "8548 2894", "2631 6970", "7682 1239", "2863 2978", "2053 3440", "2816 5952", "7127 8728", "7922 226", "8027 7360", "534 9364", "2189 2649", "3838 4437", "4521 5498", "8252 4809", "5059 1427", "342 1415", "9119 107", "4217 2545", "9961 7390", "5446 2122", "3936 9842", "7457 487", "8150 1774", "445 7677", "616 4769", "2781 9208", "2912 9719", "4914 4354", "5336 1355", "5780 6933", "4564 5275", "1708 8584", "3804 7478", "7827 4548", "5455 6395", "1967 1953", "6260 7419", "1074 592"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 103644;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int points = 10482;
    int halfPrice = 21;
    int discount = 44;
    vector<string> items = {"6797 1928", "4192 6302", "7644 7476", "5784 9321", "7701 2463", "7848 4558", "207 2800", "5775 6463", "9932 9799", "8754 8093", "5837 2203", "3682 9386", "6228 719", "1565 7947", "6414 5047", "6426 2331", "8861 3412", "6714 7818", "5849 4597", "9206 4700", "4631 2472", "5417 9058", "5085 3027", "503 6047", "9873 3901", "4671 5674", "7096 6415", "7081 1084", "5450 105", "2255 9333", "1885 9748", "8983 4679", "1757 4898", "1728 4356", "1489 1916", "4535 6858", "3723 8500", "7432 2720", "4976 717", "5342 7800", "5803 2536", "9487 9059", "3445 7856", "1293 2843"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 101458;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int points = 12945;
    int halfPrice = 16;
    int discount = 8;
    vector<string> items = {"5024 3943", "5556 7479", "5799 5449", "2048 7479", "9876 3495", "9583 2359", "5287 9608", "6705 7108", "5192 9934", "8103 8287", "8034 4768", "6014 9810", "197 589", "4130 1226", "1156 4587", "4005 8500", "1144 1696", "3958 7293", "1298 4127", "486 8748", "6321 3397", "2162 7764", "9637 4859", "6049 3783", "1045 4738", "6599 4069", "6880 9659", "7065 9489", "2664 8676", "3405 2795", "8266 7808", "689 9405", "5558 7069", "2001 684", "8567 9996", "9854 9727", "6138 5684", "86 9637", "7085 3316", "8276 4309", "7847 9194", "8642 1709", "2651 6270", "5453 9658", "6159 6179", "6931 4112"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 147897;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int points = 10250;
    int halfPrice = 6;
    int discount = 8;
    vector<string> items = {"3577 4123", "7498 4214", "7919 2116", "2964 1978", "4639 4419", "1167 4540", "7943 4041", "6199 247", "912 7363", "2045 7770", "5661 3666", "3989 1881", "5994 7161", "2520 1741", "2562 1523", "9738 1671", "515 6922", "8260 4446", "9666 9552", "2629 7063", "7137 3664", "3217 9035", "2525 6096", "2630 3160", "5552 3308", "4620 8813", "6222 907", "5487 7720", "7482 5685", "7984 2242", "372 143", "7728 6158", "1684 9529", "2102 7941", "4120 1365", "1663 6546", "8944 7482", "4048 9684", "1142 8545", "382 4611", "7078 1091", "4181 1402", "4648 7058", "2759 8737", "5936 5812", "1136 2180", "2375 8686", "8445 4964", "2397 6004"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 155817;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int points = 6753;
    int halfPrice = 26;
    int discount = 26;
    vector<string> items = {"2876 1988", "5372 9935", "1474 3051", "4108 449", "2268 6162", "805 4776", "8538 2098", "1249 1179", "8617 6494", "6667 1606", "9789 8117", "8881 6216", "4702 9650", "7965 413", "270 975", "2401 4374", "9082 4952", "1735 5085", "3307 5698", "1734 871", "1099 9375", "2043 8423", "5506 7465", "6339 2334", "5874 2555", "4989 7130", "1754 6615", "205 1796", "9310 1781", "3702 6815", "222 3639", "6853 3694", "3093 7000", "3344 6997", "7359 4187", "4334 8874", "9688 5814", "6106 6097", "2896 4065", "231 9586", "7342 8481", "6214 6444", "4846 4236", "6658 4487", "5084 2918", "4920 9275"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 108714;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int points = 0;
    int halfPrice = 46;
    int discount = 0;
    vector<string> items = {"2876 1988", "5372 9935", "1474 3051", "4108 449", "2268 6162", "805 4776", "8538 2098", "1249 1179", "8617 6494", "6667 1606", "9789 8117", "8881 6216", "4702 9650", "7965 413", "270 975", "2401 4374", "9082 4952", "1735 5085", "3307 5698", "1734 871", "1099 9375", "2043 8423", "5506 7465", "6339 2334", "5874 2555", "4989 7130", "1754 6615", "205 1796", "9310 1781", "3702 6815", "222 3639", "6853 3694", "3093 7000", "3344 6997", "7359 4187", "4334 8874", "9688 5814", "6106 6097", "2896 4065", "231 9586", "7342 8481", "6214 6444", "4846 4236", "6658 4487", "5084 2918", "4920 9275"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 117098;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int points = 0;
    int halfPrice = 0;
    int discount = 0;
    vector<string> items = {"2876 1988", "5372 9935", "1474 3051", "4108 449", "2268 6162", "805 4776", "8538 2098", "1249 1179", "8617 6494", "6667 1606", "9789 8117", "8881 6216", "4702 9650", "7965 413", "270 975", "2401 4374", "9082 4952", "1735 5085", "3307 5698", "1734 871", "1099 9375", "2043 8423", "5506 7465", "6339 2334", "5874 2555", "4989 7130", "1754 6615", "205 1796", "9310 1781", "3702 6815", "222 3639", "6853 3694", "3093 7000", "3344 6997", "7359 4187", "4334 8874", "9688 5814", "6106 6097", "2896 4065", "231 9586", "7342 8481", "6214 6444", "4846 4236", "6658 4487", "5084 2918", "4920 9275"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 234172;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int points = 15000;
    int halfPrice = 48;
    int discount = 49;
    vector<string> items = {"1 30106", "73 58443", "285 8241", "61 98186", "390 26081", "212 39994", "707 18166", "1269 11572", "234 26563", "213 62998", "8 27372", "941 5390", "47 55420", "966 42290", "2173 16059", "563 68459", "1997 93772", "1649 14867", "42 24793", "454 21355", "2186 90932", "125 45592", "1205 49135", "2658 97237", "2720 16148", "721 77553", "3773 72249", "3314 36702", "3933 42863", "4852 91919", "3309 60048", "4259 10550", "4485 12793", "3339 1932", "600 98008", "6731 3950", "1110 23666", "749 81799", "4160 47926", "3849 84554", "3864 26712", "3534 81115", "2029 407", "6099 96986", "8538 23216", "1607 85596", "1021 50897", "2133 61972", "4829 6243", "8269 45332"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1112449;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int points = 15000;
    int halfPrice = 48;
    int discount = 3;
    vector<string> items = {"1 96977", "45 61684", "84 5546", "254 34419", "127 14872", "418 72562", "492 99292", "117 39774", "930 74483", "1608 23218", "224 72192", "1552 92419", "484 13661", "1184 68967", "1072 8459", "515 21404", "1699 90065", "2993 77306", "3343 92668", "588 84656", "2064 95498", "2726 21628", "1130 37834", "3960 94130", "3311 16694", "4457 41286", "3192 30466", "2061 68482", "2894 77129", "1402 56401", "4947 67549", "579 34783", "6283 14794", "964 28348", "762 5520", "106 13868", "5436 58504", "5243 46534", "6773 31860", "7628 74271", "6413 53417", "1678 24323", "3679 90321", "423 16406", "3604 20893", "8639 63834", "8066 21061", "3175 91328", "6361 47407", "172 89843"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1233907;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int points = 15000;
    int halfPrice = 48;
    int discount = 32;
    vector<string> items = {"1 50957", "41 11414", "275 79809", "421 23841", "56 97883", "189 78924", "1185 42771", "775 8941", "1006 93922", "1049 64754", "261 52108", "1163 59088", "1462 73165", "2481 74774", "682 38264", "696 47053", "1908 62252", "1690 10478", "1091 68779", "1662 16972", "446 86930", "3740 23998", "510 32280", "1783 19169", "4736 18558", "1753 25821", "3533 98306", "5204 77640", "2909 82772", "5799 6898", "4898 83643", "738 50476", "3607 97082", "2645 68798", "263 55402", "2702 39366", "4516 60958", "2255 93681", "33 19460", "606 9679", "1531 13653", "7145 78968", "3385 40964", "166 57894", "8462 74065", "7453 61319", "7547 29629", "7935 32569", "3674 97909", "8495 96129"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1299618;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int points = 15000;
    int halfPrice = 48;
    int discount = 47;
    vector<string> items = {"1 3543", "13 98083", "231 85997", "163 16618", "67 30978", "805 3358", "704 24669", "442 16510", "1347 59644", "838 97472", "1259 71297", "909 22097", "1048 85232", "2037 14128", "343 93075", "561 60249", "62 1567", "218 29394", "2600 57698", "3176 54576", "3735 35629", "1262 15509", "3925 62811", "3806 40639", "1631 37492", "4640 80437", "3956 50945", "3893 46225", "5092 58361", "3 31198", "3547 52160", "1087 61694", "2257 95279", "276 61071", "3295 63176", "1115 19639", "6042 81104", "1687 58347", "7116 83901", "3264 78068", "2382 60353", "6836 68016", "7777 87115", "5548 44066", "950 36011", "1757 42892", "784 33415", "211 13829", "3549 2453", "7223 15705"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1170466;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int points = 15000;
    int halfPrice = 48;
    int discount = 5;
    vector<string> items = {"1 99447", "71 83894", "56 1739", "64 3532", "3 60570", "680 19615", "77 76745", "378 64557", "341 56125", "1374 44522", "364 58353", "1108 80922", "1507 80647", "438 75068", "2674 84324", "2240 70252", "2192 37360", "1272 45882", "3507 90445", "3489 85138", "3946 30500", "2585 75922", "580 97151", "3192 58179", "3481 63404", "2080 5708", "1584 89651", "5343 33209", "4115 41601", "3397 23771", "3119 80221", "3305 52053", "2683 24475", "1811 21135", "5980 64975", "2847 25779", "509 43292", "6255 72746", "5059 80835", "3199 61495", "5911 10178", "287 6133", "3256 34269", "675 75466", "5855 20568", "2604 54640", "8036 19062", "9089 23909", "6568 85336", "2994 7563"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1284151;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int points = 15000;
    int halfPrice = 47;
    int discount = 32;
    vector<string> items = {"1 87478", "200 14192", "263 13964", "366 15786", "148 34865", "225 37510", "713 7673", "584 51178", "1353 27472", "1482 77863", "420 86877", "1364 49493", "541 38409", "825 76251", "2025 18246", "2526 58354", "604 25784", "3362 33734", "13 67031", "3560 2438", "2606 19764", "2315 23371", "2395 9717", "2444 97742", "2558 33497", "1324 7382", "2924 35029", "2101 64529", "4566 83756", "1259 60577", "2118 13739", "3366 73273", "3725 44245", "1549 60569", "3792 51659", "6483 30002", "6212 69765", "6429 19897", "6225 90330", "5946 89214", "6221 74791", "4388 86248", "6459 51739", "8094 2506", "4429 73336", "5617 99491", "7539 12422", "9291 89536", "9047 99584", "132 93165"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1149618;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int points = 15000;
    int halfPrice = 47;
    int discount = 3;
    vector<string> items = {"1 10397", "5 58958", "375 99435", "210 8377", "209 90539", "104 93805", "1081 14621", "1110 18189", "1227 22295", "1561 13201", "1107 24565", "1621 12082", "1077 26194", "2572 16764", "2388 86762", "285 99705", "2076 5228", "2547 5083", "430 30802", "1514 53006", "2654 57410", "842 64999", "2853 76664", "1250 42561", "431 8206", "3433 40821", "5092 46103", "1341 57156", "3765 8938", "329 81371", "1001 53800", "3876 16195", "1722 14418", "3968 83928", "2652 88574", "5808 1768", "3782 22728", "6990 35782", "5495 92060", "4538 73183", "6783 70566", "2660 40424", "2711 91177", "7056 67978", "1863 11076", "8445 78069", "8683 73634", "4132 17904", "7332 24412", "5127 63344"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1083317;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int points = 15000;
    int halfPrice = 47;
    int discount = 25;
    vector<string> items = {"1 94188", "177 92866", "280 68492", "22 41857", "516 83193", "81 2255", "84 93851", "780 17386", "18 67505", "1715 75588", "1178 88805", "184 80421", "620 88051", "427 46167", "2302 23908", "1161 30748", "178 7554", "1690 46930", "3051 51503", "2767 39888", "2844 84147", "1261 69248", "1942 95631", "2205 4578", "3984 71826", "7 44892", "3263 30650", "4152 6145", "2111 37870", "1514 56503", "4518 63474", "188 83836", "4494 23075", "5385 82513", "4190 89973", "1921 34769", "6804 14870", "2522 85203", "5212 4444", "976 20273", "4666 29277", "6966 58329", "4402 20340", "3855 709", "2480 96118", "5986 86043", "6865 79563", "100 46077", "189 83774", "7853 4921"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1264270;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int points = 15000;
    int halfPrice = 47;
    int discount = 19;
    vector<string> items = {"1 51843", "164 25110", "158 24307", "482 46105", "443 89671", "44 80350", "555 88559", "917 57638", "1190 38501", "1481 10228", "1885 31419", "1337 52771", "1418 61043", "1777 39097", "1023 55763", "1376 2502", "1034 71859", "1685 38405", "2655 2773", "1081 28634", "1222 99443", "3919 97796", "128 78055", "2805 75211", "4285 71076", "3672 9004", "3860 50319", "3106 32010", "2264 28580", "5268 11949", "547 63949", "5780 23064", "1561 28303", "671 42808", "1498 28417", "4162 65090", "7098 88773", "3688 29315", "6959 22428", "134 76010", "6415 55292", "6610 64242", "5654 58485", "3491 85678", "2420 49758", "4334 60839", "7333 27930", "533 84492", "4162 43291", "4567 38908"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1166776;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int points = 15000;
    int halfPrice = 47;
    int discount = 0;
    vector<string> items = {"1 17120", "187 66254", "326 10992", "466 91153", "184 27692", "635 74380", "665 48503", "812 43491", "906 76431", "176 63012", "595 40287", "734 10443", "994 68134", "1829 59646", "2325 60579", "1370 49184", "3114 59425", "1354 95107", "1129 82258", "3321 95530", "3264 15468", "783 20329", "270 30706", "2208 66069", "4694 69365", "2695 58263", "1550 25846", "3948 77819", "3932 6016", "1422 74142", "492 68206", "3285 25552", "5418 73920", "6298 66281", "5556 61533", "1438 95891", "2531 98888", "1825 20072", "4872 86272", "2876 92750", "7374 53920", "7569 25033", "3534 91564", "1146 97607", "6119 47079", "127 20742", "1081 55255", "6215 50092", "4995 75683", "436 89499"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1342798;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int points = 15000;
    int halfPrice = 46;
    int discount = 34;
    vector<string> items = {"1 4897", "1 96620", "281 80632", "278 97110", "198 8713", "936 53266", "287 60691", "335 33953", "1020 75180", "1652 15036", "609 36837", "2033 57436", "1864 82638", "1632 96609", "1615 30424", "2269 75594", "16 5507", "266 72285", "2573 46577", "897 17786", "3480 98545", "2913 89141", "2849 54657", "174 53053", "4246 70594", "4761 324", "4328 85294", "3620 1302", "524 35615", "586 60906", "5758 92524", "5059 27370", "6345 46147", "5447 12623", "370 38218", "4135 1863", "4036 59696", "1870 51080", "7226 24891", "1283 40427", "1244 75240", "4794 10267", "7097 49875", "4446 89473", "855 73371", "4771 6306", "1152 99471", "7626 14378", "249 36518", "7006 60472"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1086293;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int points = 15000;
    int halfPrice = 46;
    int discount = 49;
    vector<string> items = {"1 23889", "189 40270", "99 64936", "436 87507", "546 58746", "632 28838", "424 2268", "1149 40501", "743 33038", "813 50364", "220 35384", "683 96731", "624 1599", "2479 85448", "26 73015", "925 78736", "407 57414", "1349 76052", "907 98183", "3767 53334", "1316 47862", "1614 63741", "3217 68198", "3442 30701", "2295 95783", "3075 71568", "3618 92784", "4909 11016", "2646 32444", "4833 60539", "386 4993", "2672 26918", "3514 80786", "5795 20375", "3707 1863", "1187 79258", "4298 82114", "953 90473", "5878 65488", "6264 49945", "1829 39928", "6640 45131", "4251 17429", "111 16706", "1864 94485", "4239 99678", "5267 57496", "3803 61819", "6989 48317", "6508 34179"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1208048;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int points = 15000;
    int halfPrice = 46;
    int discount = 4;
    vector<string> items = {"1 17937", "146 26835", "176 41569", "442 36922", "420 75944", "312 66741", "876 3391", "9 27732", "1130 3373", "1729 21092", "618 49181", "2186 2772", "524 96523", "1035 54572", "1648 36947", "729 52083", "2958 28595", "3368 24269", "1940 95444", "1856 90034", "2466 14003", "714 48036", "226 45929", "900 25412", "697 84114", "4862 76148", "2930 50269", "3526 2101", "5448 8820", "2583 53697", "2191 15184", "4835 31173", "156 58878", "6045 20377", "1312 36213", "6075 22432", "3375 27719", "3764 44457", "6016 47858", "2505 53932", "7679 59736", "1077 59730", "3433 9202", "3829 45973", "7493 21058", "8578 52374", "5706 9926", "6808 77615", "9026 80788", "238 6112"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 904124;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int points = 15000;
    int halfPrice = 46;
    int discount = 39;
    vector<string> items = {"1 33374", "9 21284", "286 91404", "48 51840", "122 50186", "14 36613", "727 19167", "22 12609", "1351 7015", "1737 95265", "1264 86765", "1785 68318", "685 79753", "284 12645", "123 62972", "2933 6819", "2548 6545", "3019 4314", "2066 72405", "3068 74591", "3937 33995", "3751 98916", "112 84802", "884 3757", "2099 41418", "3544 63320", "3576 69912", "4138 81390", "1653 81978", "5583 76448", "1055 18025", "3739 29392", "3298 16187", "3993 60709", "5095 53975", "1209 5738", "1662 3522", "3596 53862", "3530 47478", "1830 68346", "354 30705", "1640 18247", "4274 70143", "2509 6357", "8762 65132", "8522 15083", "2343 64809", "2215 43718", "747 59678", "527 73181"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1040862;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int points = 15000;
    int halfPrice = 46;
    int discount = 0;
    vector<string> items = {"1 81351", "47 36419", "216 61447", "188 15936", "297 82515", "21 47407", "902 36453", "503 39499", "476 52000", "1701 28245", "396 26394", "1482 93076", "1194 60545", "1800 43919", "165 75259", "2670 7862", "2921 24329", "677 57607", "2727 95221", "3038 5639", "2241 71194", "1236 27391", "3142 97549", "3727 72105", "2758 32556", "2938 51974", "955 83562", "2749 58582", "511 43606", "4327 3269", "660 51364", "706 89025", "2385 16043", "1667 5453", "5245 56794", "3718 6480", "1992 4757", "6157 60562", "1027 98006", "5551 62275", "7063 45681", "6822 89787", "5575 52507", "5490 32502", "6544 98869", "3239 85735", "3943 77620", "6515 26938", "2282 27747", "1910 20810"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1119813;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int points = 15000;
    int halfPrice = 45;
    int discount = 47;
    vector<string> items = {"1 71462", "17 82093", "23 22032", "246 1035", "651 75446", "184 79792", "219 95149", "971 17487", "218 57878", "1096 99819", "805 9752", "1810 45564", "2191 89536", "1089 71648", "2017 82079", "162 82591", "956 15192", "1576 87823", "575 55645", "2603 73061", "30 35301", "2235 24222", "57 71080", "556 69664", "2539 32062", "1643 20393", "5069 47771", "1826 31913", "1099 53357", "107 90848", "2542 63137", "6180 30232", "2880 9795", "1406 21152", "6084 75094", "6155 44701", "5347 24834", "5922 23472", "4149 40050", "1946 33372", "3133 57269", "2660 27524", "3181 45223", "3931 273", "3258 55850", "6310 60492", "6195 44365", "5207 56447", "5077 89383", "2463 12410"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1061943;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int points = 15000;
    int halfPrice = 45;
    int discount = 17;
    vector<string> items = {"1 65911", "24 66079", "348 53688", "587 119", "796 59858", "815 79713", "1055 46315", "1059 85885", "213 32755", "1727 49884", "1412 36147", "1276 45732", "167 13612", "509 37548", "2560 70095", "1184 93177", "1120 10487", "2257 24735", "2027 24569", "3732 21462", "1482 24834", "2779 40995", "300 31180", "3460 86706", "2596 49246", "1791 5366", "4782 78221", "1569 63691", "431 98320", "3210 60003", "3667 95486", "203 6595", "3461 84438", "6268 81945", "2856 40385", "2629 34950", "1426 10441", "6974 80698", "1743 77277", "553 6153", "7481 53920", "4443 62399", "2590 11025", "463 1777", "2099 44950", "3372 38136", "1146 7187", "3048 43429", "310 38668", "6937 56199"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 974620;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int points = 15000;
    int halfPrice = 45;
    int discount = 27;
    vector<string> items = {"1 85066", "40 62521", "198 89123", "71 68901", "121 39647", "400 19228", "195 93296", "316 34316", "458 81343", "1327 26544", "1361 77915", "1838 37914", "2358 61802", "811 91996", "770 11021", "1551 38711", "3002 13427", "1313 397", "2579 58290", "3315 22916", "914 33482", "1698 50795", "3346 87372", "4139 70054", "3638 39821", "538 56548", "4204 39526", "3209 15383", "4845 21678", "1876 76819", "4220 56009", "2115 5121", "5264 63724", "3034 99108", "3931 7129", "5180 87763", "4910 92703", "2872 51764", "2767 86816", "4708 51354", "3845 48731", "3915 19274", "3371 30187", "8214 47066", "8699 26660", "8250 84103", "9185 8695", "5050 28399", "1184 14450", "6629 19574"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1029344;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int points = 15000;
    int halfPrice = 45;
    int discount = 43;
    vector<string> items = {"1 59277", "151 81519", "251 28832", "143 57122", "618 43019", "507 54157", "188 19699", "941 23726", "1189 9958", "1182 57116", "1093 54485", "165 54879", "1279 48659", "1928 95651", "2190 51767", "153 87791", "2210 76205", "841 49571", "1596 37032", "1140 89077", "2986 99858", "400 89453", "3277 11433", "526 55400", "3698 48660", "4303 27581", "4058 6101", "4182 84388", "4284 25745", "1219 35832", "3097 13225", "2801 29633", "2534 30985", "6326 86491", "1504 21997", "3848 95405", "5323 13268", "7081 5537", "40 40958", "147 8098", "2625 88414", "981 116", "134 3279", "3953 4599", "4835 64560", "6828 55468", "5142 57398", "2372 15450", "8036 61142", "3875 42801"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 963465;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int points = 15000;
    int halfPrice = 45;
    int discount = 49;
    vector<string> items = {"1 5313", "107 52950", "137 48440", "282 88686", "225 86905", "805 132", "189 13612", "837 77324", "196 73824", "1475 68260", "283 21997", "195 6524", "261 95145", "2290 85613", "984 12020", "117 42663", "1585 78232", "317 28220", "3323 42749", "1706 91320", "2406 68438", "3359 7756", "886 33672", "2255 63846", "1843 47377", "4911 28457", "2903 82503", "4307 18580", "503 10716", "5253 82889", "1305 48514", "5978 25193", "3765 47123", "2936 69351", "4816 56476", "1402 87225", "4947 54582", "2337 8740", "5553 76397", "4298 40442", "4304 53537", "5491 8670", "6323 29072", "1362 16297", "4133 44931", "8044 74534", "3720 95159", "7617 9684", "778 65985", "2734 83721"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1025625;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int points = 15000;
    int halfPrice = 44;
    int discount = 21;
    vector<string> items = {"1 36888", "154 13768", "254 74540", "399 48798", "84 37749", "81 6053", "829 12482", "145 78937", "1174 85399", "1566 10398", "1302 73558", "803 95991", "336 15289", "2292 78418", "2423 9573", "729 44494", "2443 83094", "2169 90024", "2106 58510", "987 93850", "1293 23255", "4173 55494", "700 98113", "4143 76926", "3594 88991", "4758 75211", "335 87270", "1066 74642", "1125 97374", "1201 34261", "4892 2920", "1696 44579", "4218 79345", "100 12815", "3369 74899", "77 98647", "4464 3037", "1928 23857", "1745 95928", "4118 65809", "1631 40590", "6872 81701", "7752 94094", "3883 79058", "3042 42430", "3268 75085", "5861 52866", "2684 78297", "9235 84741", "6899 83314"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1215858;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int points = 15000;
    int halfPrice = 44;
    int discount = 10;
    vector<string> items = {"1 60974", "81 4813", "100 43222", "551 16031", "513 87586", "708 22931", "680 85544", "416 27304", "1187 65153", "1712 24610", "1853 66926", "1855 97442", "226 87890", "1278 10898", "1405 39785", "889 83302", "2425 99726", "547 79427", "2073 90542", "1483 23717", "3638 93201", "892 78994", "1374 64542", "2218 78220", "891 13130", "3656 4035", "2044 87452", "3636 1668", "736 91311", "4991 71114", "4386 977", "5236 87214", "3804 44959", "5621 65793", "4554 69085", "4888 39864", "6103 64600", "4488 27531", "3896 43269", "803 88953", "437 72619", "3826 98837", "1692 96519", "1121 97320", "7532 22252", "3717 89201", "211 73419", "5686 75526", "7137 44700", "7745 75096"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1212294;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int points = 15000;
    int halfPrice = 44;
    int discount = 31;
    vector<string> items = {"1 72182", "137 79090", "77 78314", "366 83378", "375 65051", "39 32920", "1012 44521", "975 42188", "186 28858", "463 62239", "969 68896", "2163 19819", "2333 63078", "2157 78259", "434 96986", "473 88121", "652 23565", "2833 5039", "2286 12970", "2 51793", "1797 36799", "2269 89957", "56 13678", "1321 74662", "2469 9404", "2078 17252", "2732 11427", "4829 59732", "5403 68663", "3355 73201", "5738 68451", "718 17233", "735 39896", "2083 20530", "6399 97189", "5256 18687", "3477 61461", "4267 50114", "541 59565", "7633 42586", "3491 65642", "2381 12553", "6294 23083", "1499 98941", "1499 13760", "1133 14339", "9155 39306", "6984 57840", "8452 30869", "7698 61694"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 982346;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int points = 15000;
    int halfPrice = 44;
    int discount = 31;
    vector<string> items = {"1 28811", "194 16433", "375 61803", "564 77830", "304 12114", "680 95773", "570 74201", "718 69696", "305 15526", "1160 70696", "1466 50078", "1058 13590", "28 94006", "2601 83406", "2722 56656", "418 5919", "109 78907", "223 50281", "2068 13981", "1232 93541", "3067 12083", "3394 52527", "691 90092", "2682 27793", "3057 29822", "3948 12875", "2369 73307", "3589 60147", "3921 67148", "1094 2725", "566 48582", "3564 9210", "5759 74128", "5239 41780", "2985 87286", "5830 79562", "2082 99989", "5582 22424", "3191 43496", "5369 15138", "6147 92617", "3752 93991", "2500 26280", "5096 92810", "6846 11785", "2691 35771", "8923 87677", "2986 72292", "6700 94154", "2446 99684"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1098111;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int points = 15000;
    int halfPrice = 44;
    int discount = 37;
    vector<string> items = {"1 24156", "131 66801", "236 74571", "204 84139", "188 94201", "437 68797", "82 42920", "323 78084", "647 75918", "396 13771", "622 62682", "2101 33509", "2398 94062", "299 23", "2356 53303", "268 86086", "2695 48675", "1748 64093", "792 64948", "1411 7598", "1117 36306", "3922 73909", "4105 61221", "3416 5447", "3844 63607", "2120 91018", "2644 9468", "501 8101", "4537 75854", "486 6318", "5208 56042", "5375 93586", "3151 59438", "4017 60797", "10 77055", "6507 15459", "2102 66732", "5650 90889", "2245 82643", "5095 41532", "59 9409", "4001 59031", "3605 58231", "6521 8968", "23 94078", "7815 87488", "4700 72357", "3181 76382", "1637 97327", "695 86925"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1177548;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int points = 15000;
    int halfPrice = 40;
    int discount = 23;
    vector<string> items = {"1 39538", "112 77345", "324 30748", "579 45178", "206 28830", "714 78793", "216 32265", "485 86738", "1171 91129", "983 67563", "1974 47332", "1466 31985", "1206 30785", "1472 19018", "1786 92116", "1745 52728", "3138 46371", "2569 21200", "1662 6370", "193 75083", "1127 75269", "2558 78340", "2881 13109", "804 75933", "480 78698", "423 84633", "2364 42134", "2293 93267", "5182 54201", "5467 58337", "4420 44706", "567 55537", "5220 33241", "4220 90535", "5701 7739", "2687 87826", "3307 14847", "5092 95600", "1899 70757", "5191 34197", "2227 2907", "5291 13436", "2525 4399", "1394 27786", "5299 72064", "4350 90965", "1079 31936", "6420 25494", "7298 59861", "7975 62521"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 866753;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int points = 15000;
    int halfPrice = 40;
    int discount = 43;
    vector<string> items = {"1 35448", "94 51626", "180 90171", "113 98848", "143 81738", "719 79552", "876 32088", "1106 67041", "943 88913", "65 27366", "1798 95420", "2102 90774", "1363 40909", "2087 53462", "2650 98072", "215 71070", "2208 95204", "58 60431", "2297 38463", "3552 515", "1713 30040", "63 30985", "4381 96940", "3032 17246", "1699 76088", "2781 21456", "2754 52716", "3660 73331", "4552 95713", "4046 38768", "4630 81969", "4327 29808", "5022 26923", "833 16094", "2627 55789", "2870 40117", "1735 4515", "1904 63159", "7287 57755", "5736 6129", "7392 56272", "4770 60732", "6909 56142", "1983 57782", "3082 62652", "1823 41610", "5119 84940", "5273 69931", "6991 5648", "8270 57315"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 962246;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int points = 15000;
    int halfPrice = 40;
    int discount = 24;
    vector<string> items = {"1 46017", "67 96823", "336 80189", "127 98692", "751 77725", "169 74697", "109 92416", "1186 36359", "968 83023", "216 94186", "1126 16298", "406 15495", "64 21057", "481 70344", "1197 45485", "1726 54983", "2251 59752", "1105 58103", "1577 82191", "3542 94210", "3140 27415", "73 67867", "3477 53549", "303 62646", "1854 44702", "4700 61294", "2117 29988", "1680 41869", "2398 7837", "5111 58843", "2011 39694", "4837 18874", "986 35118", "1748 99071", "3716 62852", "2590 44085", "1285 13898", "6902 4531", "2480 69734", "3262 42615", "4540 37525", "3419 81570", "1714 26640", "2486 92857", "6146 40522", "3305 34459", "2881 54551", "2225 49590", "9182 44826", "6641 26099"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 911698;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int points = 15000;
    int halfPrice = 40;
    int discount = 27;
    vector<string> items = {"1 85944", "31 42697", "285 24851", "57 82764", "372 5021", "368 62460", "645 90297", "260 15173", "887 10032", "1756 36096", "1102 88628", "1721 87498", "1574 29155", "2435 40524", "1507 67982", "1090 91873", "1768 57193", "37 11605", "737 64071", "2491 77231", "1342 9730", "867 54740", "2651 12162", "305 74903", "465 72300", "1518 84185", "2724 79210", "4395 76034", "3783 60020", "807 21085", "5302 60649", "6164 7986", "1537 20786", "3174 38257", "3521 1382", "3307 40162", "5314 88979", "3198 99195", "3741 16915", "4581 77091", "488 59773", "1487 22840", "2006 87064", "7540 8591", "1114 70519", "5094 52849", "7441 30547", "8293 73547", "5097 12577", "375 76700"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 859612;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int points = 15000;
    int halfPrice = 40;
    int discount = 30;
    vector<string> items = {"1 62838", "88 26292", "9 27186", "63 45741", "207 67863", "923 43538", "152 85603", "929 92659", "1221 1380", "531 43397", "418 41374", "476 57858", "716 65967", "1123 72882", "2680 59216", "1938 98583", "2192 35765", "1356 77033", "927 11779", "1120 92240", "105 45250", "1567 8391", "2477 26199", "32 99601", "1541 96643", "1415 9168", "3420 76895", "2612 28350", "5419 3798", "4357 76633", "5652 76425", "286 707", "1628 13271", "1724 87253", "6406 38853", "1746 12738", "2628 29406", "5049 31733", "1061 77024", "6589 94724", "4839 47073", "126 84299", "1524 76679", "5215 84860", "6188 1833", "5792 53477", "4499 59191", "4617 77002", "3213 67892", "7491 41669"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 889230;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int points = 15000;
    int halfPrice = 35;
    int discount = 27;
    vector<string> items = {"1 1995", "93 82699", "22 50954", "103 86037", "772 11671", "27 53310", "188 7549", "1044 38201", "1079 47314", "468 9106", "1269 30643", "1437 39373", "877 96297", "447 99112", "2083 33351", "2811 35176", "2362 62485", "986 65073", "1666 29662", "2490 53417", "155 69303", "3151 24016", "1402 16363", "4594 21615", "548 67265", "4968 39953", "4942 61447", "502 30421", "1579 45126", "1976 28450", "2592 84028", "552 78068", "785 61365", "5172 4651", "3995 74862", "4460 92342", "4006 22388", "1686 2153", "4522 30077", "4541 93495", "2029 78552", "5866 42277", "3348 49294", "8126 59255", "3675 66915", "6176 37648", "373 79960", "3006 35824", "1080 65705", "546 71766"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 659144;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int points = 15000;
    int halfPrice = 35;
    int discount = 41;
    vector<string> items = {"1 82466", "106 96295", "354 254", "509 87357", "413 34193", "503 47584", "167 68767", "1109 51049", "288 90969", "1407 7307", "247 33298", "125 51602", "1953 48949", "1728 86365", "1365 75996", "1121 85176", "581 14545", "2617 44294", "1341 91962", "1936 51596", "3898 25874", "1656 59665", "1391 37176", "3727 49951", "4045 30243", "4090 62347", "2315 93758", "4810 48762", "5055 53605", "2019 99765", "2920 18402", "4023 22180", "4573 39511", "5102 40574", "6283 67941", "4281 67677", "1227 85561", "981 81666", "3666 16941", "776 23761", "5664 67350", "2966 33829", "7017 33391", "2380 21173", "3922 92749", "2570 32677", "1357 76028", "6681 89670", "7466 1503", "5935 21657"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 736075;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int points = 15000;
    int halfPrice = 35;
    int discount = 3;
    vector<string> items = {"1 79799", "7 97149", "250 39707", "548 83993", "718 89374", "877 6500", "988 68457", "1286 95729", "793 73449", "504 52235", "1472 56317", "257 36246", "1613 21556", "1894 41758", "28 81663", "926 52226", "2481 6800", "1154 53087", "2232 92743", "1333 77078", "1529 37065", "560 96078", "1884 26868", "847 47770", "1422 32942", "4672 36928", "648 62833", "4977 7206", "463 30392", "4064 37377", "7 55030", "5769 36562", "4805 62230", "3095 12541", "6795 21714", "1557 22910", "5029 55973", "409 728", "5428 29907", "7767 10388", "4488 67601", "2318 44170", "5575 72207", "484 96953", "8668 18826", "2481 32257", "655 57815", "7247 50066", "6157 62493", "513 91878"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 658840;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int points = 15000;
    int halfPrice = 35;
    int discount = 10;
    vector<string> items = {"1 21220", "119 82884", "265 98077", "304 74992", "583 66843", "429 79126", "108 81161", "477 79918", "155 23928", "1273 51398", "781 18978", "1986 85538", "747 19783", "1818 8380", "163 77167", "1543 12982", "2919 2967", "1105 53302", "417 7743", "2900 70655", "1522 37362", "3891 48946", "2294 95063", "3263 72988", "1319 10679", "2919 69749", "2209 31233", "5 56901", "3359 78948", "3444 44617", "1766 25505", "1582 78586", "3391 49792", "635 92068", "2280 32863", "5849 7586", "663 24874", "7205 98930", "3794 92124", "938 11774", "1380 93922", "1283 30269", "7006 50878", "6212 32946", "7646 42835", "5886 40712", "3424 7100", "2773 62373", "4810 75522", "966 24673"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 684869;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int points = 15000;
    int halfPrice = 35;
    int discount = 40;
    vector<string> items = {"1 14223", "3 78490", "371 93039", "412 64089", "89 8655", "863 87621", "550 86167", "505 41861", "606 69854", "1606 66536", "498 6799", "1975 62076", "1417 58691", "1111 66637", "2418 56175", "2949 32318", "387 16240", "2788 11011", "462 6470", "1240 63359", "1108 88853", "1886 93854", "2443 89280", "3307 36879", "3032 23327", "2842 86719", "4670 65737", "2909 55320", "3129 44284", "2932 43324", "3929 5053", "995 36041", "5828 44179", "2175 3812", "197 28708", "6211 61477", "2084 71204", "6775 93667", "7485 94881", "4010 81291", "4200 99947", "6776 9552", "6143 22102", "5805 17870", "3134 44203", "4767 14794", "1538 98611", "7587 8615", "9353 3418", "3387 8480"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 704531;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int points = 15000;
    int halfPrice = 30;
    int discount = 9;
    vector<string> items = {"1 14802", "161 55521", "313 25233", "343 76358", "479 99860", "572 52674", "188 48141", "686 41644", "531 30019", "1789 26196", "1046 7740", "1228 69392", "1563 3538", "745 40093", "2577 28099", "806 53215", "203 83304", "1808 11117", "2641 65188", "487 47832", "3103 99435", "3134 79140", "1236 88102", "4568 83255", "274 81648", "302 50331", "939 21964", "1965 35368", "934 60936", "2091 17737", "5839 44273", "1738 83512", "5486 39744", "5709 31740", "3404 47163", "3245 87050", "973 38662", "3076 70516", "2 41", "2991 35844", "4672 31799", "3022 61422", "5444 2023", "6782 74111", "2052 8413", "8619 10067", "471 70247", "6432 60995", "1328 70373", "2233 56018"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 595090;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int points = 15000;
    int halfPrice = 30;
    int discount = 32;
    vector<string> items = {"1 24138", "133 83855", "42 99327", "326 31813", "158 91439", "137 1172", "371 61577", "214 8272", "1550 33772", "1558 63233", "743 82689", "89 61420", "196 39019", "1706 58316", "2569 64265", "2310 6305", "1976 77745", "1336 4276", "3341 13552", "2101 99570", "522 65492", "3467 12767", "3451 25787", "3110 64569", "1411 94867", "3139 23202", "1504 54888", "3593 1144", "15 84835", "1088 4176", "1408 85582", "5247 71885", "5322 88126", "4695 88085", "1140 25714", "4884 18603", "4369 71292", "4338 59844", "7108 65945", "2866 49057", "2389 74524", "5620 81294", "3268 61310", "2079 27376", "2999 36458", "8066 6599", "5689 37183", "8019 52502", "3587 53134", "2982 51156"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 666680;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int points = 15000;
    int halfPrice = 30;
    int discount = 27;
    vector<string> items = {"1 43907", "178 64233", "376 35615", "386 69497", "124 98103", "816 90799", "790 16606", "237 6025", "1175 66957", "1144 13305", "525 44492", "1321 70981", "1672 53644", "1975 25568", "181 38478", "376 84296", "456 11966", "3297 55667", "3512 55050", "308 76114", "1811 5343", "2489 1816", "2864 78257", "422 31642", "2059 73014", "4124 32612", "2883 54487", "2299 74555", "5299 66678", "1444 93304", "3377 3776", "3001 15014", "4732 88807", "5864 760", "2159 73508", "772 96032", "4385 78339", "5424 70222", "3160 12408", "96 69559", "7829 13691", "5166 23158", "6039 6985", "3364 60163", "1394 37668", "2294 22995", "251 67974", "8614 91092", "4837 25476", "8401 67187"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 579721;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int points = 15000;
    int halfPrice = 30;
    int discount = 36;
    vector<string> items = {"1 77449", "131 23955", "300 93347", "540 64444", "357 33715", "626 47663", "1185 19238", "1314 96262", "112 72743", "1129 43703", "66 49400", "1242 82728", "528 96912", "301 87358", "826 89032", "951 8445", "673 65956", "1272 58892", "2398 11801", "2186 92642", "16 14228", "3860 79768", "950 88271", "1056 56857", "3335 171", "1862 58780", "2496 18015", "5051 78322", "3991 56899", "5294 64386", "5105 94382", "3268 39082", "5611 32864", "5031 40518", "5837 77063", "3901 81584", "207 95767", "2657 19219", "4870 95155", "4533 50138", "2466 37142", "7761 98950", "2854 21955", "5276 64086", "7829 20325", "1202 49180", "5693 74725", "8584 31398", "6460 99581", "9667 21613"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 758161;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int points = 15000;
    int halfPrice = 30;
    int discount = 29;
    vector<string> items = {"1 40793", "179 16553", "243 32173", "113 22103", "610 43944", "261 64380", "761 88706", "647 23322", "1246 20287", "432 81498", "903 99457", "1678 31715", "2070 9168", "83 25555", "2559 35379", "2500 48965", "1250 98382", "2900 13735", "519 80506", "234 77862", "630 48923", "1153 84388", "4002 1628", "1528 8600", "4689 51721", "918 51476", "2562 28405", "4130 36624", "3033 72702", "429 3181", "1250 45079", "3242 49615", "1027 49706", "2942 52059", "307 67749", "4972 36213", "6693 70639", "3480 88688", "231 85277", "2106 78424", "7872 83447", "7195 11023", "7431 46498", "6248 96827", "8023 93852", "7462 12567", "207 68807", "3675 37172", "5985 95857", "981 40248"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 623201;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int points = 15000;
    int halfPrice = 25;
    int discount = 15;
    vector<string> items = {"1 42356", "95 38780", "192 62524", "227 51467", "665 39956", "167 40338", "209 31993", "250 55444", "618 82244", "412 52763", "1084 11841", "1715 8871", "1523 24268", "1314 98331", "503 88979", "2047 32215", "2435 62178", "1803 25729", "2442 52379", "705 76338", "2190 78278", "3300 44774", "3018 34135", "189 56650", "1561 73664", "670 27522", "5038 52055", "3468 75800", "1308 68629", "4368 37035", "2191 29616", "2960 79957", "2689 96900", "4283 13633", "114 33089", "6474 33797", "998 34634", "2291 25632", "6865 89433", "7303 52071", "3280 88687", "1901 65493", "507 58166", "434 68433", "1689 3184", "5667 52833", "4126 30201", "4192 57806", "2120 62134", "3634 49194"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 660652;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int points = 15000;
    int halfPrice = 25;
    int discount = 38;
    vector<string> items = {"1 87216", "145 98200", "243 85207", "254 30280", "274 8422", "163 69782", "819 41665", "544 57060", "1531 25487", "1164 75444", "812 44552", "216 66793", "1159 18598", "2153 12130", "2037 40742", "1901 23302", "1190 77340", "2072 64217", "1549 60911", "118 20225", "946 46627", "1725 29061", "603 79863", "489 1310", "828 45753", "3208 88412", "3306 16282", "3026 39014", "5333 68546", "2623 44394", "2193 44826", "2471 32342", "1094 60000", "3445 29745", "2484 23840", "6143 65918", "394 6985", "2920 93595", "3765 3300", "3152 14675", "7680 60200", "4352 53699", "546 38682", "416 89112", "3482 38858", "5679 37107", "4852 53812", "2488 64630", "1572 61741", "3366 55401"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 584447;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int points = 15000;
    int halfPrice = 25;
    int discount = 18;
    vector<string> items = {"1 70378", "157 82602", "400 77045", "493 60817", "624 52253", "926 38327", "1177 83437", "556 67204", "242 17160", "271 13274", "1452 66635", "1249 96603", "47 36767", "1311 56496", "1973 84480", "2004 44219", "957 96857", "1366 91738", "2233 35276", "1401 54245", "1805 65890", "2039 25969", "1339 89772", "4369 71645", "4453 45480", "1398 41419", "747 99508", "5225 66278", "4943 21304", "1769 19693", "2525 50619", "6069 22880", "4420 77585", "3691 68613", "4387 16296", "5964 72307", "444 79527", "7138 78548", "5621 91944", "2532 43790", "816 24567", "8057 86942", "7853 58645", "1030 57722", "7373 50962", "7585 41565", "5737 54348", "6475 64237", "9574 48410", "7078 65585"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 857464;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int points = 15000;
    int halfPrice = 25;
    int discount = 38;
    vector<string> items = {"1 45295", "15 54722", "395 44105", "434 54925", "576 44723", "572 75224", "619 97629", "633 13943", "348 76517", "1081 95923", "1653 31579", "1031 65598", "838 11403", "2183 89592", "143 35787", "440 17331", "1934 98572", "2247 94168", "3565 48120", "390 79824", "2878 68763", "2757 28832", "84 52411", "42 20103", "4432 67781", "841 20632", "1613 84901", "39 82084", "5328 24133", "2661 53166", "3796 38092", "1189 37342", "4362 18231", "1553 82303", "1540 55246", "2923 34529", "1152 95683", "44 59297", "5878 4643", "4459 35674", "2376 24475", "5169 39951", "1258 15560", "3935 94662", "5957 7752", "1471 35745", "1460 72690", "3468 98781", "885 40527", "2524 26627"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 572848;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int points = 15000;
    int halfPrice = 25;
    int discount = 11;
    vector<string> items = {"1 3639", "7 93401", "376 85548", "342 36726", "453 70661", "75 91110", "603 27965", "1367 67334", "42 62554", "759 89991", "53 29115", "987 68121", "1429 36934", "1476 69235", "130 59970", "1992 81485", "3061 4249", "1048 67419", "1164 74588", "751 22726", "2210 84119", "3434 28429", "3642 33428", "2533 57656", "3215 15588", "4665 91790", "406 33213", "145 79191", "843 65589", "4710 42244", "1600 87467", "1001 64655", "1949 54464", "1154 85249", "3748 6748", "2420 84848", "1897 39318", "7185 62111", "3034 63264", "175 14025", "2985 62285", "7921 26976", "3593 38674", "3291 54292", "5765 68545", "5110 86297", "6070 81062", "3362 20476", "7733 56944", "1145 13092"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 679364;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int points = 15000;
    int halfPrice = 20;
    int discount = 11;
    vector<string> items = {"1 61831", "172 30078", "197 90873", "543 14205", "497 26475", "391 91066", "510 78577", "101 22158", "287 11727", "287 86776", "1579 33959", "1014 1598", "2123 65187", "2245 74913", "943 43457", "700 65910", "1349 6037", "19 1569", "571 70761", "3551 5252", "3513 8396", "786 46396", "3032 56790", "1047 9681", "2145 84788", "666 86701", "777 6922", "4567 10377", "87 60008", "5451 48699", "1821 98951", "2994 68423", "2109 93036", "1055 49997", "1828 15129", "3683 5633", "4856 76322", "5974 28458", "4913 82223", "448 85608", "1434 15246", "1326 34398", "8259 33454", "7848 56483", "6941 1825", "6919 23140", "6239 21163", "7009 85563", "4808 12432", "7209 79586"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 509156;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int points = 15000;
    int halfPrice = 20;
    int discount = 1;
    vector<string> items = {"1 39519", "14 30282", "203 54400", "462 67473", "126 76307", "72 93798", "340 79622", "750 41126", "732 77911", "1046 36886", "1760 55072", "1168 23040", "1664 71676", "2298 49295", "2695 74896", "1716 231", "2917 83729", "3187 13362", "714 67153", "902 10769", "3721 75897", "3216 51472", "724 46276", "2835 3851", "1253 35504", "3843 38481", "5153 28875", "2214 94237", "2159 30480", "3090 46700", "3623 93904", "4785 73324", "1142 68871", "4947 64384", "4820 79716", "6976 55641", "2301 61366", "3099 62142", "1281 53386", "7388 43564", "89 3518", "5421 40111", "2183 57176", "286 53688", "5716 78593", "2585 58768", "5317 20183", "3654 6634", "5093 58401", "6972 94459"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 869547;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int points = 15000;
    int halfPrice = 20;
    int discount = 24;
    vector<string> items = {"1 22894", "130 80902", "27 32493", "285 59117", "750 69645", "376 58106", "754 9772", "552 9428", "1286 6916", "939 95458", "214 89014", "1979 58036", "2272 5449", "422 50215", "597 43492", "2692 62963", "1555 95914", "1993 67844", "2420 32367", "1166 96939", "2209 61382", "2596 23427", "1835 92314", "1448 30245", "1784 46660", "2088 77191", "1626 88483", "1961 39102", "4648 85605", "205 1059", "3228 87066", "405 85457", "2219 38980", "1429 16833", "11 90036", "6729 26729", "3626 87251", "3718 65776", "1981 28016", "6641 64450", "299 21911", "1337 29881", "2905 54660", "1483 85102", "6621 84302", "8205 74533", "8691 61566", "1482 644", "5793 17853", "5006 6856"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 702854;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int points = 15000;
    int halfPrice = 20;
    int discount = 32;
    vector<string> items = {"1 97723", "58 98678", "121 8359", "36 35424", "236 42291", "701 20905", "1173 68669", "617 99852", "608 40059", "492 50925", "225 92978", "226 56800", "1153 55466", "662 88963", "2238 53745", "1086 75648", "3144 48852", "2808 92336", "2981 75301", "753 28444", "1275 68176", "406 1872", "3679 24403", "2061 29372", "816 77024", "852 96973", "4256 1644", "2466 61476", "2422 55040", "2000 4934", "527 77219", "230 84165", "6377 51402", "4974 20955", "829 34759", "3836 85240", "4911 94909", "1400 6416", "6152 45382", "2971 97814", "2559 55712", "7528 14180", "3621 53372", "1682 48646", "1024 38403", "1868 38628", "3401 42048", "3631 88677", "7755 85933", "9754 6882"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 663561;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int points = 15000;
    int halfPrice = 20;
    int discount = 22;
    vector<string> items = {"1 42914", "83 73844", "329 63969", "303 20134", "138 21798", "886 99435", "1195 89418", "895 45092", "202 13139", "923 65987", "705 27807", "1039 18466", "1412 48881", "510 30843", "2632 1163", "1629 36874", "2522 55163", "624 59583", "174 92010", "3624 9647", "1056 30075", "1471 99771", "145 89597", "4320 7717", "890 4507", "2933 73628", "1006 41266", "1257 21510", "1410 93727", "5464 8855", "1080 69251", "5911 72898", "987 65451", "5814 87869", "429 77208", "4807 95443", "5504 87236", "6238 28598", "860 13195", "4462 33921", "5856 66133", "3904 83429", "7847 15803", "2374 67601", "3680 77717", "8865 83521", "6540 36750", "5628 75512", "9490 33008", "5820 46827"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 690714;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int points = 15000;
    int halfPrice = 15;
    int discount = 45;
    vector<string> items = {"1 64282", "11 77602", "3 37546", "354 34683", "298 84145", "392 653", "802 61828", "6 85870", "1459 79228", "1653 44504", "791 47689", "376 45242", "519 18563", "1448 23019", "1063 18379", "1599 86728", "3128 1864", "1595 73922", "888 78336", "2477 5584", "723 82435", "714 15577", "2211 74940", "1432 8285", "1845 78304", "2310 44284", "2028 49395", "1945 39088", "2582 58566", "5655 83716", "2104 12842", "2056 27777", "3038 78517", "5914 792", "4792 13553", "5747 41096", "5353 1556", "6025 30321", "897 74553", "1894 67615", "3456 5403", "2132 9561", "1403 50396", "2830 68725", "1186 4909", "1548 49222", "3569 89450", "8975 16837", "5477 99860", "2057 5541"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 558574;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int points = 15000;
    int halfPrice = 15;
    int discount = 3;
    vector<string> items = {"1 68843", "33 49496", "61 22171", "245 90198", "483 2655", "471 37620", "350 37730", "886 55196", "1390 86284", "1124 76232", "1819 74766", "877 96339", "1987 19973", "2074 62371", "284 55003", "1498 12597", "1078 7568", "419 63030", "832 36994", "3015 39304", "1081 81218", "2443 99149", "2419 36351", "2386 44872", "4254 56216", "2713 72999", "22 9326", "2395 61928", "3283 67216", "1840 76866", "3752 46354", "2731 54218", "1364 23", "5582 66022", "5587 53606", "1250 54492", "6478 14870", "3041 93492", "5681 3840", "2026 49349", "1511 49956", "474 47232", "6018 12086", "8290 16262", "6052 3154", "8363 45307", "4594 91390", "839 84835", "5074 48585", "873 80473"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 803660;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int points = 15000;
    int halfPrice = 15;
    int discount = 47;
    vector<string> items = {"1 48631", "4 91229", "73 39242", "422 9290", "440 24587", "991 68950", "561 29507", "973 51720", "416 76252", "144 48743", "1338 6616", "1005 11420", "853 18608", "1474 75524", "1004 82903", "2604 36931", "1668 1963", "2973 68800", "2465 23759", "606 7052", "1732 32337", "4106 60227", "1249 45650", "3415 50754", "50 69821", "1567 85768", "864 26099", "4552 90359", "2505 66370", "3530 30167", "1807 36228", "5460 38366", "565 2519", "2691 97374", "4064 44513", "3557 2944", "1431 47004", "41 99101", "6510 64190", "6514 28100", "3584 4643", "3308 86935", "4970 51982", "4578 50918", "3937 49028", "6135 91267", "2774 84423", "858 2413", "3538 93052", "2465 90220"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 678115;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int points = 15000;
    int halfPrice = 15;
    int discount = 33;
    vector<string> items = {"1 59343", "38 11572", "116 13773", "551 14752", "515 33984", "852 8914", "85 56180", "257 62501", "1329 84639", "554 49150", "1951 34505", "281 70738", "1574 54924", "561 69293", "942 64391", "1453 53504", "2105 61658", "676 54596", "2459 64617", "1527 95867", "2119 41755", "2158 96619", "2469 89029", "418 57917", "3748 74819", "2546 75638", "4648 62672", "411 6709", "5171 13883", "4779 14946", "1379 50607", "5637 31514", "806 33328", "5702 89119", "2940 93421", "5617 45225", "6908 98094", "4217 71422", "3415 14387", "255 27919", "6719 58502", "1838 52088", "2361 96266", "3533 28143", "3118 26892", "11 2646", "2722 69163", "6135 84883", "5452 67389", "5736 78901"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 859193;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int points = 15000;
    int halfPrice = 15;
    int discount = 47;
    vector<string> items = {"1 80362", "80 6333", "193 53532", "162 28846", "120 86911", "738 9774", "291 70023", "1080 87249", "1116 5384", "1284 14899", "155 46472", "103 52291", "860 7386", "2023 26684", "1303 27750", "2745 56308", "619 90881", "1834 72264", "2874 73712", "3432 86031", "3737 27596", "803 18224", "1791 66177", "50 98261", "4178 40554", "775 93404", "214 76175", "4521 80889", "1690 33439", "3296 79434", "1247 31885", "5620 82923", "6027 50962", "1490 63304", "4787 81528", "2592 69120", "6217 34809", "3858 61645", "3300 74242", "2378 55800", "3725 16556", "3402 25259", "4151 57559", "1898 31234", "2668 85343", "2352 34508", "4264 32571", "5270 77819", "6229 89843", "2822 18158"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 750502;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int points = 15000;
    int halfPrice = 5;
    int discount = 14;
    vector<string> items = {"1 41612", "193 1137", "114 51805", "221 30374", "88 9110", "29 86465", "160 26578", "469 47923", "688 26967", "1170 21461", "1800 63890", "1064 32051", "577 5546", "1089 75474", "2657 23389", "31 52745", "74 9220", "2981 49598", "2148 59645", "742 1454", "3352 82717", "3106 21504", "1133 46705", "1039 71117", "1425 53850", "2712 71561", "4333 86896", "4063 25828", "1423 13154", "1127 31395", "3304 4759", "4423 2848", "132 35491", "477 44233", "6214 85604", "2920 61181", "5048 66132", "5098 92419", "5303 25058", "379 97066", "2182 20841", "6229 62382", "5397 84680", "1779 33513", "3833 67054", "4591 70155", "6177 69737", "2637 40532", "2727 55868", "2472 34144"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 945814;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int points = 15000;
    int halfPrice = 5;
    int discount = 40;
    vector<string> items = {"1 47079", "161 53051", "355 83577", "492 34843", "312 54062", "971 37137", "485 80903", "1081 10451", "674 12603", "1555 70205", "1014 29064", "744 37198", "1346 6667", "1209 19731", "801 5790", "1736 75345", "662 37521", "993 25462", "1985 32527", "1027 36593", "298 24151", "4102 85729", "2672 52286", "1629 40250", "3193 74158", "326 96142", "2390 63573", "2221 30465", "4084 59437", "3456 29711", "5852 7365", "5680 28976", "4838 24635", "3229 93901", "6679 76790", "5631 97019", "2552 79494", "5398 70036", "2858 78871", "1677 24929", "5273 29279", "5737 2918", "8254 82930", "815 34658", "5577 68471", "7433 29965", "955 95223", "5319 69020", "3618 1250", "8120 35744"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 800448;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int points = 15000;
    int halfPrice = 5;
    int discount = 16;
    vector<string> items = {"1 39224", "167 37154", "193 14438", "563 68352", "73 75340", "734 26500", "31 20287", "408 15455", "768 90243", "151 27489", "1089 18656", "608 11113", "1482 84055", "2407 76626", "614 86854", "1618 26764", "2004 71826", "1596 1482", "3048 7701", "3653 20812", "441 82424", "2350 2072", "1431 27484", "2101 42535", "3452 13990", "3423 2051", "4204 52325", "4687 99421", "4424 99136", "3930 49742", "4667 34396", "4288 86326", "2767 84533", "3995 66603", "5772 24251", "3904 59000", "807 13982", "6312 34476", "7224 60591", "2932 24362", "420 52819", "1829 67611", "7852 72815", "1955 46453", "6991 62981", "8314 7793", "3524 20555", "1287 14214", "3282 45651", "6261 722"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 841704;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int points = 15000;
    int halfPrice = 5;
    int discount = 26;
    vector<string> items = {"1 74176", "85 56769", "44 64314", "115 5856", "473 10197", "955 10684", "1127 34490", "580 19288", "541 59363", "1168 13192", "756 74100", "1146 66856", "1827 51296", "163 90691", "1215 26620", "2650 42840", "1581 67763", "2623 91176", "2278 78152", "179 21091", "2484 30699", "3051 45366", "1912 2749", "2765 53478", "2122 75610", "3250 47100", "304 68017", "2599 66753", "1510 81089", "4363 29132", "5361 74647", "4975 59212", "1592 974", "90 24824", "492 69178", "1033 66807", "145 95807", "4986 27426", "1786 18592", "7575 55007", "5072 5601", "5673 199", "6409 40407", "3662 80633", "6432 33549", "8268 82874", "8211 23712", "2876 94885", "9124 58807", "2408 29469"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 801739;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int points = 15000;
    int halfPrice = 5;
    int discount = 45;
    vector<string> items = {"1 83519", "201 66778", "400 63380", "167 72572", "718 2037", "442 18081", "185 28214", "624 60955", "314 98065", "950 48543", "290 51957", "1310 32121", "476 47459", "131 87389", "699 16484", "1120 69733", "529 37033", "3133 15115", "1872 6891", "1760 8162", "2220 34428", "2879 98339", "527 92275", "3077 62684", "1123 78180", "4663 67987", "721 43766", "2122 33886", "4668 29790", "3561 39516", "4660 74433", "2610 76402", "6032 62428", "3346 77336", "1819 96981", "1402 68965", "4220 90521", "2822 13013", "1408 73267", "4818 41085", "6568 99013", "5489 88786", "5528 67458", "1402 53095", "6190 46396", "3476 54067", "3789 17348", "910 85531", "7397 43102", "8587 94153"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 791353;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int points = 15000;
    int halfPrice = 10;
    int discount = 32;
    vector<string> items = {"1 55267", "175 70705", "245 42812", "384 45829", "117 87674", "684 38926", "748 15001", "954 29290", "695 73402", "770 44513", "977 75648", "1868 24064", "4 39247", "1760 26619", "1663 61243", "1647 85189", "1253 6499", "1811 24849", "1477 32488", "2231 4117", "108 80701", "1804 47992", "2394 91356", "1723 60629", "552 67049", "3259 61833", "3564 82950", "2288 79745", "855 48918", "5381 86469", "5958 28078", "3197 41114", "5280 35877", "1945 40273", "392 96013", "3718 26964", "5461 55457", "6400 40951", "2967 65102", "7736 19852", "4770 47469", "5032 17544", "7765 36572", "1648 48078", "8120 85601", "2290 59481", "5192 72400", "1936 88070", "3910 89914", "1817 56144"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 844045;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int points = 15000;
    int halfPrice = 10;
    int discount = 43;
    vector<string> items = {"1 39987", "27 44284", "92 5617", "372 19187", "191 98836", "342 44339", "571 71051", "1218 18480", "1156 6865", "955 69117", "1957 26822", "1365 65961", "1582 57795", "543 58057", "1085 98366", "751 75874", "892 40895", "1412 95185", "33 42289", "998 60639", "668 26747", "2979 86503", "3146 56260", "1905 38473", "759 78780", "1013 7503", "5117 97541", "764 54499", "810 71967", "1964 12540", "792 59748", "4495 14340", "2026 81668", "6455 44100", "5577 75271", "6533 82463", "3177 36246", "2300 39451", "5703 7520", "2826 82759", "3466 27521", "3610 50323", "7858 95659", "162 45681", "4422 99883", "7031 86094", "6589 99434", "7804 82627", "8017 4505", "2180 88732"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 790751;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int points = 15000;
    int halfPrice = 10;
    int discount = 6;
    vector<string> items = {"1 16258", "98 70624", "254 79562", "405 50191", "597 78817", "960 8222", "1090 33747", "1006 41626", "172 79956", "881 78790", "380 42245", "929 50775", "2097 9508", "842 64076", "1551 66611", "1466 93886", "1918 56009", "2179 80456", "1112 70877", "1896 10102", "3236 84755", "1702 16513", "1531 22113", "2171 65571", "2486 14705", "2598 10588", "2054 33282", "3154 36514", "5584 88913", "4820 13031", "4927 89699", "4237 86260", "3 76307", "712 3885", "3242 44364", "6392 74872", "6993 2118", "4738 6456", "2510 80099", "7196 24526", "2853 84937", "6913 20118", "5043 51210", "2010 41748", "735 93860", "8588 14625", "8719 47446", "593 98026", "7539 88558", "3086 21820"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 876027;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int points = 15000;
    int halfPrice = 10;
    int discount = 39;
    vector<string> items = {"1 47654", "10 77645", "142 11225", "25 44615", "205 55110", "284 33838", "123 803", "171 23919", "963 70558", "1159 62708", "1454 44988", "910 89519", "59 40559", "1965 26596", "1013 43403", "2220 8173", "1620 83161", "2853 36791", "703 86667", "221 8657", "3117 79021", "2455 53504", "3597 46389", "912 22613", "1763 90995", "3944 67236", "3821 85794", "731 91726", "4737 53340", "3101 73181", "829 4277", "1488 24184", "1022 11049", "1571 60474", "1664 89257", "2827 12713", "5718 59930", "1870 98713", "2310 56434", "2416 71811", "1364 20986", "2751 92448", "4162 27074", "826 25758", "3819 3679", "5931 89861", "3307 85707", "1607 89524", "1401 62113", "6136 57255"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 760148;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int points = 15000;
    int halfPrice = 10;
    int discount = 44;
    vector<string> items = {"1 66862", "103 73487", "149 47762", "411 32721", "723 97990", "952 13504", "1058 70305", "1224 18051", "1205 56827", "438 43339", "138 11763", "502 16122", "631 21497", "856 47165", "1848 8904", "1664 27229", "1425 35540", "1897 87221", "3151 78552", "3085 27233", "1686 24883", "2187 30271", "4304 34933", "2108 62287", "3507 98366", "1091 27664", "5173 64376", "4658 15074", "4605 2515", "4062 95219", "4770 19696", "1268 11468", "3078 89736", "1954 14231", "4563 6823", "4495 97401", "2920 1399", "3701 87609", "5247 87180", "4343 80076", "331 25480", "1016 97948", "5236 48074", "3284 10861", "5396 23608", "2435 44175", "1393 31813", "2335 9683", "8197 78408", "7220 58271"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 703478;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int points = 15000;
    int halfPrice = 0;
    int discount = 30;
    vector<string> items = {"1 38738", "41 81284", "248 12764", "330 61831", "725 61932", "982 8510", "1196 25928", "1019 60141", "819 38920", "356 52385", "1995 23635", "1 37261", "2284 45372", "2159 54270", "2468 65526", "472 96708", "445 37718", "2467 63085", "867 77202", "1069 31443", "68 57725", "3977 43190", "1402 61676", "1564 11013", "3524 97702", "2668 19185", "5027 19359", "4756 62855", "114 42209", "4153 1568", "4724 52169", "779 51411", "1736 76902", "4301 93612", "2933 44591", "1644 54812", "2456 21911", "1808 71846", "5680 12287", "952 38190", "4967 82863", "645 76546", "6122 61072", "3111 11625", "2729 58158", "7591 82109", "6451 50096", "7560 19330", "6220 24489", "8491 43848"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 881365;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int points = 15000;
    int halfPrice = 0;
    int discount = 39;
    vector<string> items = {"1 95022", "56 90009", "153 89097", "595 984", "436 7093", "161 61479", "389 96775", "857 15711", "393 52372", "965 98039", "841 39273", "1934 82987", "98 95779", "2418 27498", "2361 34958", "1102 53926", "1254 54187", "615 97007", "3003 83080", "2440 86167", "3958 75469", "1040 31545", "376 16456", "4215 35370", "2058 99960", "2319 50778", "4746 51639", "3854 64939", "5518 5195", "712 94039", "350 17740", "609 73508", "724 35591", "4001 20697", "673 13080", "6897 64627", "4412 63834", "2240 48527", "5378 86378", "6692 78669", "4925 8027", "5092 16607", "6642 40339", "3963 63907", "7250 27783", "4202 11952", "6800 90184", "1529 88376", "6661 30031", "3398 70392"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 801513;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int points = 15000;
    int halfPrice = 0;
    int discount = 46;
    vector<string> items = {"1 37799", "45 63937", "377 76864", "500 89186", "592 43580", "759 5045", "208 27660", "1080 12106", "1196 25196", "280 49801", "1726 92150", "1971 26423", "1704 79583", "789 50140", "1948 27507", "2178 62038", "1151 25942", "1155 65029", "81 37487", "1680 32252", "2018 32763", "2873 32725", "473 2183", "427 35543", "4435 67521", "861 36150", "3959 60007", "4493 29930", "2838 32136", "1542 44581", "5456 25157", "5581 14974", "5448 80526", "865 46375", "1901 59399", "2376 41707", "6215 64836", "6089 37988", "4096 14488", "6439 52681", "7360 39358", "3421 37146", "8128 7813", "5397 30722", "7896 99272", "4776 19863", "321 48368", "9031 1050", "7405 37381", "1642 18633"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 588059;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int points = 15000;
    int halfPrice = 0;
    int discount = 46;
    vector<string> items = {"1 46473", "36 81322", "302 19175", "85 57657", "584 43132", "467 73975", "298 37908", "24 76310", "977 54621", "343 35704", "281 46915", "1962 77476", "2075 54046", "1592 37297", "2328 83584", "114 89250", "643 44258", "992 11926", "359 31672", "2274 55346", "2056 76885", "289 23927", "378 48274", "1503 30047", "1647 34808", "4805 35071", "3430 7579", "2491 28390", "4116 66814", "806 99390", "2122 19047", "1902 48965", "617 28288", "5119 99087", "5317 43255", "4989 90295", "3072 14066", "1974 40917", "1856 88595", "3986 53290", "5072 74270", "4604 93496", "1246 74498", "1655 79228", "5665 57795", "5036 75716", "3716 54159", "1374 64850", "5474 85184", "5127 13314"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 767068;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int points = 15000;
    int halfPrice = 0;
    int discount = 42;
    vector<string> items = {"1 85296", "137 56647", "67 72994", "231 60841", "492 79669", "196 22658", "178 77696", "1293 46080", "1413 99071", "1159 34362", "303 31054", "454 12160", "902 19186", "2344 45765", "1795 96839", "428 95326", "2822 3175", "1011 70483", "52 23247", "1215 23342", "3241 19509", "1688 95870", "3891 92031", "2329 92893", "627 96086", "4644 76074", "2628 78216", "2308 74099", "1412 93346", "737 83762", "5426 98384", "2261 75545", "2851 17060", "542 72776", "3561 80138", "3612 73577", "4015 7972", "3633 50913", "4982 26427", "5512 66022", "400 46727", "6044 42647", "6337 63614", "2961 81269", "4206 7637", "7108 51167", "780 5327", "7002 10080", "8934 54284", "4563 64075"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 822790;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int points = 500;
    int halfPrice = 1;
    int discount = 10;
    vector<string> items = {"150 500", "350 1000", "500 600", "450 800"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 940;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int points = 0;
    int halfPrice = 50;
    int discount = 0;
    vector<string> items = {"300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100", "300 100"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int points = 15000;
    int halfPrice = 25;
    int discount = 0;
    vector<string> items = {"600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 1", "600 2", "600 3", "600 4"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int points = 10000;
    int halfPrice = 0;
    int discount = 0;
    vector<string> items = {"5000 1000", "5000 2000", "5000 3000", "3000 60", "7000 10"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1070;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int points = 12342;
    int halfPrice = 25;
    int discount = 23;
    vector<string> items = {"512 325", "532 325", "32 325", "942 325", "852 325", "762 325", "672 325", "582 325", "512 325", "532 325", "532 325", "552 325", "562 325", "2572 325", "82 325", "12 325", "32 325", "942 325", "852 325", "762 325", "672 325", "582 325", "512 325", "532 325", "532 325", "552 325", "562 325", "2572 325", "82 325", "12 325", "32 325", "942 325", "852 325", "762 325", "672 325", "582 325", "512 525", "532 425", "532 25", "552 325", "562 323", "2572 355", "82 376", "12 322", "32 321", "942 335", "852 345", "762 355", "672 325", "582 325"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 4840;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int points = 4000;
    int halfPrice = 5;
    int discount = 5;
    vector<string> items = {"50 100", "50 100", "50 100", "50 100", "100 100", "100 100", "100 150", "100 150", "100 150", "100 150", "100 150", "150 150", "150 150", "150 150", "150 150", "150 200", "150 200", "150 200", "150 200", "200 300", "200 300", "200 300", "200 300", "200 300", "200 300", "200 300", "200 300", "200 300", "400 600", "400 600", "400 600", "400 600", "400 600", "400 600", "400 600", "400 600", "300 400", "300 400", "300 400", "300 400", "300 400", "300 450", "300 450", "300 450", "300 450", "400 600", "500 750", "500 700", "500 750", "600 900"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 9405;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int points = 500;
    int halfPrice = 2;
    int discount = 0;
    vector<string> items = {"300 200", "200 200", "500 200"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int points = 15000;
    int halfPrice = 32;
    int discount = 13;
    vector<string> items = {"1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10", "1500 10"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 232;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int points = 0;
    int halfPrice = 0;
    int discount = 45;
    vector<string> items = {"1 2"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int points = 12000;
    int halfPrice = 5;
    int discount = 5;
    vector<string> items = {"50 100", "50 100", "50 100", "50 100", "100 100", "100 100", "100 150", "100 150", "100 150", "100 150", "100 150", "150 150", "150 150", "150 150", "150 150", "150 200", "150 200", "150 200", "150 200", "200 300", "200 300", "200 300", "200 300", "200 300", "200 300", "200 300", "200 300", "200 300", "400 600", "400 600", "400 600", "400 600", "400 600", "400 600", "400 600", "400 600", "300 400", "300 400", "300 400", "300 400", "300 400", "300 450", "300 450", "300 450", "300 450", "400 600", "500 750", "500 700", "500 750", "600 900"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int points = 10000;
    int halfPrice = 20;
    int discount = 0;
    vector<string> items = {"1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 30000;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int points = 15000;
    int halfPrice = 48;
    int discount = 0;
    vector<string> items = {"7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999", "7500 99999"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 2400000;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int points = 0;
    int halfPrice = 0;
    int discount = 49;
    vector<string> items = {"10 2"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int points = 15000;
    int halfPrice = 48;
    int discount = 10;
    vector<string> items = {"1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "1 1", "7500 10", "7500 10"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int points = 25;
    int halfPrice = 0;
    int discount = 1;
    vector<string> items = {"1 100", "1 99", "1 98", "1 97", "1 96", "1 95", "1 94", "1 93", "1 92", "1 91", "1 90", "1 89", "1 88", "1 87", "1 86", "1 85", "1 84", "1 83", "1 82", "1 81", "1 101", "1 102", "1 103", "1 104", "1 105", "1 106", "1 107", "1 108", "1 109", "1 110", "1 111", "1 112", "1 113", "1 114", "1 115", "1 116", "1 117", "1 118", "1 119", "1 120", "1 121", "1 122", "1 123", "1 124", "1 125", "1 126", "1 127", "1 128", "1 129", "1 130"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 2319;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int points = 300;
    int halfPrice = 4;
    int discount = 10;
    vector<string> items = {"100 250", "100 250", "300 500", "300 400", "100 250", "100 250", "300 500", "300 400", "100 250", "100 250", "300 500", "300 400", "100 250", "100 250", "300 500", "300 400", "100 250", "100 250", "300 500", "300 400", "100 250", "100 250", "300 500", "300 400", "100 250", "100 250", "300 500", "300 400", "100 250", "100 250", "300 500", "300 400", "100 250", "100 250", "300 500", "300 400", "100 250", "100 250", "300 500", "300 400", "100 250", "100 250", "300 500", "300 400", "100 250", "100 250"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 12835;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int points = 0;
    int halfPrice = 0;
    int discount = 30;
    vector<string> items = {"2 2"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int points = 14592;
    int halfPrice = 39;
    int discount = 5;
    vector<string> items = {"1 100", "2 100", "4 100", "8 100", "16 100", "32 100", "64 100", "128 100", "256 100", "512 100", "1024 100", "2048 100", "4096 100", "8192 100", "1 99", "2 99", "4 99", "8 99", "16 99", "32 99", "64 99", "128 99", "256 99", "512 99", "1024 99", "2048 99", "4096 99", "8192 99", "1 98", "2 98", "4 98", "8 98", "16 98", "32 98", "64 98", "128 98", "256 98", "512 98", "1024 98", "2048 98", "4096 98", "8192 98", "1 97", "2 97", "4 97", "8 97", "16 97", "32 97", "64 97", "128 97"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 1928;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int points = 12312;
    int halfPrice = 40;
    int discount = 23;
    vector<string> items = {"213 123", "413 725", "513 823", "26 193", "217 123", "218 123", "2134 15", "213 123", "2534 146", "2345 134", "213 123", "413 725", "513 823", "26 193", "217 123", "218 123", "2134 15", "213 123", "2534 146", "2345 134", "213 123", "413 725", "513 823", "26 193", "217 123", "218 123", "2134 15", "213 123", "2534 146", "2345 134", "213 123", "413 725", "513 823", "26 193", "217 123", "218 123", "2134 15", "213 123", "2534 146", "2345 134", "213 123", "413 725", "513 823", "26 193", "217 123", "218 123", "2134 15", "213 123", "2534 146", "2345 134"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 4096;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int points = 15000;
    int halfPrice = 20;
    int discount = 0;
    vector<string> items = {"1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000", "1000 1000"};
    SalesPromotion* pObj = new SalesPromotion();
    clock_t start = clock();
    int result = pObj->bestPrice(points, halfPrice, discount, items);
    clock_t end = clock();
    delete pObj;
    int expected = 25000;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=6521&pm=3923
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
vector<string> tokenize(string s, string ch) { 
  vector<string> ret; 
  for( int p = 0, p2; p < s.size(); p = p2+1 ) { 
    p2 = s.find_first_of(ch, p); 
    if( p2 == -1 ) p2 = s.size(); 
    if( p2-p > 0 ) ret.push_back( s.substr(p, p2-p) ); 
  } 
  return ret; 
} 
 
vector<int> tokint(string s, string ch) { 
  vector<int> ret; 
  vector<string> p = tokenize(s, ch); 
  for( int i = 0; i < p.size(); i++ ) 
    ret.push_back( atoi(p[i].c_str()) ); 
  return ret; 
} 
 
vector<vector<int> > tokmat(vector<string> s, string ch) { 
  vector<vector<int> > ret; 
  for( int i = 0; i < s.size(); i++ ) 
    ret.push_back( tokint(s[i], ch) ); 
  return ret; 
} 
 
int spent[15001][51]; 
int spent2[15001][51]; 
 
class SalesPromotion { 
public: 
int bestPrice(int a, int b, int c, vector <string> D) { 
  int i, j, k, x, y, z, n; 
  int ret; 
  VVI d = tokmat(D, " "); 
 
  for( i = 0; i <= a; i++ ) 
  for( j = 0; j <= b; j++ ) 
    spent[i][j] = 1000000000; 
  spent[a][b] = 0; 
  for( i = 0; i < d.size(); i++ ) { 
    for( j = 0; j <= a; j++ ) 
    for( k = 0; k <= b; k++ ) 
      spent2[j][k] = 1000000000; 
    for( j = 0; j <= a; j++ ) 
    for( k = 0; k <= b; k++ ) { 
      if( j >= d[i][0] ) 
        spent2[j-d[i][0]][k] <?= spent[j][k]; 
      if( k ) 
        spent2[j][k-1] <?= spent[j][k] + (d[i][1]+1)/2; 
      spent2[j][k] <?= spent[j][k] + (d[i][1]*(100-c)+99)/100; 
    } 
    memcpy(spent, spent2, sizeof(spent)); 
  } 
  return spent[0][0]; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/