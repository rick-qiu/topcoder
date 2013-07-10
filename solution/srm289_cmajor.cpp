/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5903
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

class CMajor {
public:
    int getLongest(vector<string> fragments);
};

int CMajor::getLongest(vector<string> fragments) {
    int ret;
    return ret;
}


int test0() {
    vector<string> fragments = {"2 2 1 2 2 2 1", "2 1 2 2 2 1 2"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> fragments = {"2", "2", "1", "2", "2", "2", "1", "2", "2", "1", "2", "2", "2", "1", "2", "2", "1", "2", "2"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> fragments = {"2 2 2 2", "1 1", "5 -4 12 -11", "0 2 -2 5 -1 -4 2 -2 7 -2"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> fragments = {"2 0 2 0 -2 -2 -1 5 1 2 2 2 1"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> fragments = {"5748 -4385 -790 5294 3349", "-3279 -1783 3768 -2459 6066 2556 -8138 -4982 1435", "2951", "-2405 2104 3756", "5578 -5040 -9497 -4868 7407 9305 -6701", "-3339 9514 -787 7209 7467 -4467", "7496 3011 9941 -8340 3012"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> fragments = {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> fragments = {"1161 -9234 -7549 190 8139 -3082", "883 703 3890 7292 7111 2981 -6185 -5938 -926", "9482 4870 3681 6843 -238 7073 1166", "-4699 -920", "2973 -4610 9509 -9668 3420", "-9329", "9219", "-1786 7568 3761 -3125 5522 9266", "-6441 -9337 -9456", "-3189 -428 7100 1200"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> fragments = {"1543 -8441 -7821", "-380 -9268 -2868 1588 6577 -3010 -4786 -2458 -1626", "-6423 -8229 8270", "-2242", "1265 -2110 -4812", "4183 9511 -2806 1868 -1647 1351 3288", "-6175 -4621 4721 3170 5400 862 -8270 9364", "1802 5424 1594 -4970 8234 -4106 -5777 9334 1859", "6955 8947 2362 -4774 7119 4239 -2365", "-8588 4538 4964 2832 9778 -7090 -3631", "2669 -8456 7181 5069 -8040 -3948", "-6945", "6660 -9493 6598 790 276", "-7718 -6448 8063 -4223 -888 -5276 -4114 6989", "7491 -6672", "-9039 3540 8182 -7459 -1281 -3936 4651 9568 -5323", "-9607 -8114 -7232 9922 -4152 -1432 5527 -3622", "6732 -5959 2582", "4482 5196 -9906 -7938 -9538 -4553 6631 -4540 906"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> fragments = {"-9516 5679 1867 4001 9798", "-4455", "2479 6062 3877 -85 168 -9563 -668", "-8898 1165 -2139 9034 -6749 4003 -593 -3557 -4180", "-3689", "1332 1608", "5836 -5433 -4802 554", "175 -8436 -2539", "9564 -4401 6647 -256 -1634 -800 -5170 -8500 -7260", "4137 7236 -7086 6978 -7694 -4504", "-1983 8456", "8708 4666 5920 -1054"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> fragments = {"-3211 -879 7128 -2990 2395 -7234 -6979 9089", "8524 -876 9444 5256 1930 -5184 3668 -2348 -2352", "-7371 -5741 -3904 9280 -1091 45 -9029 4082", "-2527 -6796 -8071 2207", "-7599 4037 -6863 9384", "-1255 2778 -6026 9300 761 2129 3832 -4903 -6100", "-7965 -8333 -9672 4754 -6950 -718 2580 -736", "4896", "8528 -2489 8044 6123 7315 -8872 1552 5959", "3533 -563 -325 6070", "1170 -5518 -915 -705 -4395 -1809 -812 -2284 1600", "8479 4469 9667 -4823 -555 1517 7166", "48 7212 -7013 -5258 7936 608 -5014", "9384 -9594 1382 -8251 -5818 4519 7856 3093", "1968 -1165 8331 5482 3328 -8088", "-1773", "-1093 5000 8040 8375 -3352 1941 -8469"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> fragments = {"-2222 8803", "3619 -5505 -746 -7338", "7683 -255 -6286 9469 -9613 -90", "-4815 -3636 -4445 -4144 -421 9222", "-3493 -5133 1517 8448 9720", "6028 -9840 2585", "5452 708 2281 9878 5726", "5880 8052 -7266 -1903", "3131 3728 1342 6273 6514 -979 4317 4015", "1190 4372 -4377 4450 -2914 -3511 -1406 6119"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> fragments = {"6075 1723 -2122 6993 -1999 -657 3338 8587 -6823", "-7533 9360 4733 -1536 -8838 -6751 4042 501 -5676", "7448 2378 -4966 5804 4593 -1625", "5594 -3119 2428 -8152", "-4143 -8285 -1617", "8752 -4723 -1200 -5388 7884 9145 -474 -588 665", "7655 685 2251", "6038 -4373 7133 -3592 -4057 2526 -7400 4224 -1396", "-3978 -7158 -1234 -977 -6972 -5290 -7883", "8693 -6862 -7466 -2005 -4020 -3000 893 725 9867", "162 1008", "-4480 -3838 6926 9584 -9338 6527 1018 -8172 3321", "-8974 -326 4156 3209 4418 -425 -9151 6677 847"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> fragments = {"-2278 1500 -9780 -9654", "3495 -2621 2835 7752 5860", "-7013 -7572 -2516 -5448 -4397 6517 -180", "8386 -3857 -1788 -6494 5481", "3211 -110 4111 310 -8201 1346 1206 8214 -4903", "1103 6953 2 -268 -3327 -197 -5510 -113 -7919", "2356 -4680 -8695 -8920 -1897 -7367 -1543 9456", "-4611 7057 8652 7955 5761 8772", "-5328 -9953", "4124 -3872 -7128 -3962 2391 2992 6135 -6156 -1299", "-96 541 -848 2228", "-7760 -9095", "-461 -9753 7807 2232 2467", "1019 6387", "7615 2285 5001 5578 2875", "-6188 3224 -2648 3241 -5405 -2458 6797 -4438", "-7737 5042 -3751 -2818 -2586 954"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> fragments = {"-72 2481 -7349 -177 -2208 -3672 712", "6276 5722 -3754 4768 9752 5083 -5177 2420 7526"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> fragments = {"-2986", "-8992 -2950 2902"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> fragments = {"-7548 -2166 8095 1864 -7812 8309 -6461 6051", "1620 7841", "611 -2718 -6142 4968 -5338 -3946 -9960 -2934 -2319", "9343 -304 8669 -9603 -8695 9537", "-7727 4", "8843 557 -8668 -8705 -4851 2006 8667 6254 1726", "509 6456 5330 6240 3159 -9226 -2148 6202 6873", "9057", "-1568 -125 -2759 2027 -8400 -444 9574 9094 -6776"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> fragments = {"-2397 -7327", "1214 -1795 7459 -2698 4928 2135 -1985 7441 -5782", "-4687 3861 -5457 -5837 2566 -1025 -2876 -8524", "-4905 -4771 -377 8693 -8650 5936 -2794 1989 3031", "-3178 -5828 4678 -7509 1454 -9429 -5811 7827 -5137", "-6651 -5690 -7591 2487 -4196 9082", "-4964 -412 4665", "4049 1773 -9583 -5760 7382 8789 -7005", "4214 -2891 537 -9569 2417 -3398 -344 4760 86 -5849", "240 -2672 -1726 -1158 5700 1386 1194 8212 4046", "1174", "3947 -3081 -3081 8388 1576 9260 -209 9924", "4158 -4373 6825 6500 4415 -6115", "9199 6326 -1644 9350 8935 4896 6877", "2364 -1579 -7341 5817", "-2153 -6609 5179 -6631 1089 -1838 -3591"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> fragments = {"5410 -1381 -6266 2532 -2434 -2736 2708 8397 -6976"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> fragments = {"-8745 2922 3348", "4572 -9079 -6612 -5288", "-2689 -5877 8069 -2875 1879 6494"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> fragments = {"-972 -1512 6136 -3679 -8092 -8202 7635 -3331", "-9665 9847 1783 4327 -650 -3353 5912 1344 5049", "-2936 1674 7614 -1543 -1332 17 -7279 -418 -7771", "-977 -2290 4982 -6863", "4148 9009 1644 5313 -4048 619", "-1239 3514 1500 -9771 -8704 3009", "-1097 -4181 7090 6670 6580 -4271 -6949 -2592", "2531 -9414", "-3989 -5549 -6240 4048 3694 -211 -1234 483", "-3396 6064 -1007 5923 -2955", "-5177 -3672 5251 9715 9938", "-286"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> fragments = {"-6758 4017", "1085"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> fragments = {"6514 7478", "7968 8475", "134 -9502 -5026 872 -7520 1596 6822 -6543 -3888", "1313 5770 6235 6240 8328 -2297", "2318", "284 -8048 8511 -3533", "-3739 -8484 2093 -1402 3969 4522 7210 -1037 -3737", "-484 1034 8438 3056 -956 9250 9547 -7301 -3220", "2488 -8587", "9730 -9173 1812 3041 3631 -2896 576 8364 7593 3862", "4070 -1116 5481 1937", "-1963 899 -8291 -6115 -8701 -9456 2820 6204 4349", "-1564 9993 -5503 -4786 -2783 -3987", "3640 -9506 4399 7023 9626"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> fragments = {"-7164 4765 -5955 5114 3274 -9312 9041 -1815 -2222", "-2857 2540 -5390 6484 1152 3039 -9824 -8839 -4582", "530 6543 1452", "-3566", "-1612", "-5575 -868 -7952", "-7222 -3285", "4675 -1139 -169 7459 7736 1828", "-9129", "-218 -2403 -8270 7389 -4970 -9686", "140 6261 -9682 -2829 -4555 273 440 4437 3353 -2698", "211 -3367 2578 -2616 -5722 -8913 -5221 -7464 -6143", "639 -8815 4250 -2428 6964 -5172 2110", "-9870 -6504 576 -6946 -5837", "-7522", "-4998 -5490 4884 4404 1631 6673", "8706 9001 -6327 -6473 -8037", "-7032 7509 8331 5038 -361 1443 -2030"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> fragments = {"-8078 -1386", "-792", "7997 -240 -1435 7444 -532 9189 -4723 6396", "-3677 8976", "1947 -1812 -4057", "3763 9459 5482 -4685 -5194", "867 8506 4384 4460 -4632 -5009 1353 132 8581", "-8001 -1332 -5364 -5941 -4687 -3766 -4168", "-6787 3828 4497 4393 6398 -591 8065", "-1958 -1280 -2585 7717 -1361 -6178 -2359 -3535", "-5932 2196 -1472 7887 815 -9882", "8235 -2369 2655 -1935 6727 -5587 -7474", "3216 658 4936 -3462 7994 -9031 6081 -2983"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> fragments = {"1934 -2167 -8628 -8569", "-5511 -6910 9310 -9753 1279 8942 3408 1334", "-444 -9055 7352 -2820", "-828 -1228 -8852 1453", "6739 4700 -3699 -1233 -9248", "-1851 -7082 9523 -1159 -9617 -2919", "-4701 -6855 -9498 -330 6749 1789", "2292 4913", "-9926 -4543 -6380 1512 2046 -1760", "3773 24", "225 -2443 -7776 4561 6455 -8750 8050 1675 7788", "-8040 9667"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> fragments = {"4663 2501 8438 -5818", "6355 2873 -4056 -6655 -9365 5355 69 6027 -5686", "-1853", "6417 -1739 -2439 -8151 -222", "2539", "-3711 -435 -8697 -7344 158 -3974 2733 2297 8554", "9921 -1267 -5129 3029 -1243 -7023 -705 4500 8733", "-8002 -4096", "4363 574 6910 4147 -3489 8370 4054 -5170 5093"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> fragments = {"-7979 2519 9343 375 9603 -61 -7502", "-9180 -2372 2439 -1200 1116", "268", "-9295 6537 -8966 -9084", "-2230 -7610 -7243 3590", "785 -1965", "-8570 -1203 357 6169 3287 -3739 4284 5530 8211", "8950", "7890 5977 1852 4287 -6521 7425 -4036 -3236", "6214 -6394 -4363 -2796 -279", "-5588 6187 985 2825 -3106", "426 -9602 6461 -2940 8837 4034 -3876 6509 2707", "-4084 -4947"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> fragments = {"3773 7958 -4622 -9188 876 5322 1812 -5322 -9947", "3272 5688 -9109", "9918", "1378 3343 -4088 -8097 -8991 7114", "-6920 -3837 -516 2256 -7284 -5376 -8804 9404 7627", "4750 -9216 403", "4000 -5356 8795", "6210 4639 3890 4104", "-8609 6454 -6901 5206 -2109 43 -3310 3454", "6732 -824 2358 2346 -9983 -4297 4270 8378 -594", "9192 -8370 -8131 3711 988", "-9761 2887 -5536 766 -6044 9914 7776 2309 -6456", "7179 4703", "2338 7022 9824", "-8926 -9370 3930 -5905 2035 9313 -992", "-4428 -1395 -3521 3468 -4730 9526 -4453 -5118 7953", "5474 -202 43 5405 -6895", "-644 -4641 -8319"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> fragments = {"816 4235 -3530 125 403", "-6571 -9725 -6555 -6247 -1982 6477 8739 -329 -2950", "3383 3075 -7306 4791 -6046 5415 3590 -7497 -8271", "6034 -5976 1783 -4339 -3077 2311 1756 -1341", "-4892", "2424 7884 6841 3288 2309 -1342", "-8399 7382 -9802", "-4977 -9372 768", "-5661 3931 -3924 501 -1008 -6333", "7233 -9167 2203 3993", "2383 -8855 5308 13 4274 -3651"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> fragments = {"-839 -2230 1085 5815 9861 -5712 -4473 -3547 4396", "-996 2390", "-521 -9103 7495 -8353 7870 252 -886 -2496", "199 8443 -8807 4934 -4020 4863", "355 8098 -8926 -5587 -5093", "-2416 5978 3969 2504 5354"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> fragments = {"6799 -7615 4733 1927 235 327", "-2038 1632 -6585 3043 -7375", "9881 8024", "-4226 -7074 -741 2709 -5915 525 -7289 7980 2803", "3230", "-5857 5664 128 7675 9552 5997 6833", "-1068 -2402 8421 6397 -3785 -7682 4627 -411 -3151", "4870 -7848 -1950", "5191 924 5844 -6600 -8321 2701 -7915", "-7748 -7394 4337 8863 -2184 165 7174 2870 5485", "5796 -207 -4265", "-8601 -3956 3843 -488 -8498 9298 496 848", "254 8581 -5187 -8596 -2672 2024 -9046 4022 -9453", "-804 8037 -4065 -2520 -6617 -2969 -4689 -6442 9722", "1752 -2165 -4918 3386 190 6530 7548 9761 9308", "4015 2897 -7349 3432 -5015 9695 5525 4913 -7224", "-3887 -3920 -4459", "2020 -7209 6245 -1466 5001 8527 -6125 4868 -4327"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> fragments = {"2332 2439 -8679 4771 485 5765 -8835 5981 -7067", "2613 -1790 -2263 -6245 -41 -1769", "-540 5849", "-6429 -480 5883 -3644 -5057 6643", "-6340 232 -2225 -3929 5549 -7821 1790 5592", "-8450 -2191 7171 5901 288 -172 -1601 -8038 -5704", "-2697 -6762", "1985 4352 -7652 -8045 -7458 7302 -9856 2558 7411", "-8336 7579 8727 561 3867", "9482 4534 -5806 -8215 -789 -9891", "-7754 3609 -4816 -3065", "-4464 8981 5248 744 6699 -3562 8885", "-2611", "5685", "-3435", "4126 1426 6132 7387", "-7709 7275 -8201 4598 -7576", "9907 -127"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> fragments = {"-1347 1248 2964", "372 7204 -3396 -3072 3473 5072 2109 1411 8717", "-5772 -2970 -2901 7793 2836 -6232 -5273 6221", "-6334", "6423 3144 9777 4202 -7685 4779 -9369", "1622 1177 7493 -8592 1800 -1764 2032", "1879", "8268", "8472 7008 1788 -8736 -3706 2324", "7781 7997 3614 -6276 -6663 -9009 9391", "-6511"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> fragments = {"-1440 9821 3528 -9458 -2964 904 8741 -1725", "-7829 5899 9471 8099 -3180", "-3831 5523 573 -1098 -8616 -5266 1418", "-1467 -7161 -9416 5832 -5038 958 9276 3163 2026"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> fragments = {"694 5009 5559 7615 -9274", "9470 -1448 5626 -8045 -6208 -3171 -6730 1093 6110", "1613 6105 2041 -745 5072", "570 -231 -6442 5515 -3568 715 6250 -4467 7964", "-7573 113 -3665 3151 3613 7291 6182 -8812 -2898", "-8447 2309 -9166 8176 -4554 -1340 -2457", "-9737 -9859 -8362 6257 -7551 5669 -499 7464", "-7831 276 8232 -8887 -653 2410 8498 -7572 -5047", "-9057", "811 -7140 -6409 9831 -3127 -6972 1092 -1253", "-5759", "7983 9011 -6071 5474 -8993 -2930", "3588 7654 1764 8002 2095", "8829 8892", "3556 -3502 7524 3156 -7226 7356 -6701", "4058 1732 8163 -4639"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> fragments = {"-3581", "3103", "5545 2738", "-7598 -7072 5880 1770 -1272 5468 6082", "5757 5825", "-9874 -2239 -1460", "-1528 2714 2043 -7489 5880 -5747 2579 -7697 -4320", "9339 1500 -9558", "-1027 -3917 8803 2618 9846 6693 -6015 4940 4555", "-3803 5831 7676 7948 -9395 5452 1543 6259 1275", "3749", "-5964 232", "-7356 1556 3703 1433", "-8855 5435", "9928", "8511 -5141 5746 -3367 -5959 -9666 -739 559"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> fragments = {"-2750 322 4999 -8681 -1838 9290 -2254 1116", "6133 9995", "-6019 -3714 -7135", "-4692 3361 -7021 166 -8289 -96 -1114 -8076"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> fragments = {"-5700 -5908 -4875 -1769 8103 -2180 -9371 -6589", "-8045 9319 -6502 6048 6785 -96 1183", "-6655 -9688 7878 5701 7718 -2071 -7232", "7992 3312 6084 8956 -5042 6295", "715 5530 580 -1398 5116 8422 8933", "-2320 722 -3972 1102 -127", "6491", "-7838 274 -7580 8028 -3245 -924", "127 -460", "-5191 -5030 4190 -4828 4833", "-3861 1992 9946 -9857 7588 -6127 5391 -3744 -883", "1625 6348 3498 -9751 7537 -7650 -9467", "-2213 3684", "-1699 941 2471 -276", "8888 -1563 -7331", "-5296 -781 2211 -4378", "-3939 -933 4906 -1767 3542 1208 -6149 5779 -8318", "2245 6062 -5991 7147 7736 665 3019 5229"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> fragments = {"-6287 4701", "-8302 389 -3688 1140 -7306 -5897 -3818 -2398 271", "4184 3930 7340 -5360 -9696 -4567 -6791 -9161 9760", "-1325 -2430", "7519 5345 -7528 7939 -557 -9262 2801 127 -5606", "3516 -2774 -7906 -6934 8438"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> fragments = {"-2246 3676 5573", "-5078 -6866 6826 -704 4111 7159 4774 -5392 6822", "-120 -4916 9853 -6235", "-1265 -8650", "7737 6418", "-2476 9114 2552", "-3494 -9454 -5734 8264 6768 -1551 -7728", "-3746 2066 2612 1521 5246 -9088", "-9488 -6943 7580 -9706 6819 2004 -5768", "624 5741 3917 -6039 -115 382 2556 5532 -2534 -3471", "-4818"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> fragments = {"-5074", "-365 6132", "-1394 -9186 -7932 281", "3828 -961 -4912 797 -8228 9963 -8736 -7203 9278", "8980 3908 -5167", "-5088 1121 1538", "751 -7841 1694 -2596 6525", "-2397 1908 -3891 159 1134 3144 -763 1171", "-4716 -4612 7658 8122 -9490 -3413 1236 -3741 7178", "6505 6991 5207", "7354 4749 1507 5864 -445 -1125 -2535 -7722 5623", "-8044 -1580 -3331 -4356 -5459 8568 5188 -7003 6665", "7942 -9632 5095 293 9953", "-6068 -798 -7453 6574 6247", "3964 2904 -8116 -6166 2892 -4298 -5564 -1739 895", "-420 -2596 -2310 -4298 -7579 2913", "1822 7293 -7574 8966 -822 -7059 -2667 9272 -9715", "6832 -1930 -9756 -5988 -5433 8722"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> fragments = {"6089", "-6236 2038 5210 -374 2642 -6672 6987", "5827 -3442 2436 -6607 2616 1250 -7114 3881 -6775", "2910 -4329 -6166 -6746 -2873 -201 9302 1305 -5409", "-7396 -2813 4579 -9060", "9453 1555 6185 8830 9940", "-9727 3545 -6950 1528 426 6779 -7598 3818 -9110", "3176 -5516 -5743 -4469 -662 -4752 -6573 -8477 4929", "-6451 3033 1037 -5477 -8957 5402 -3551 2104 -2044", "6691 -6566", "1257 -6170 9960 -6963 1196", "3164 1483 -5131 9741 -7235 -2113 1003 -5301", "-6569 980 -8429 2711 -7826 -2839 8242", "4656 -8934 5784 -7339 -1185", "-7118 5909 -8782 701", "-651 5331 566 6734 -7713", "9017 8700 -1517 4899 -4577 2580 2463 -3905 3417", "4534 -6078 -1236 -1919 9587 -8484 -2742 -1782"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> fragments = {"-1205 -6612 -4184", "7440 5367 7094 348 2924 -9180 -6067 1363", "681 -9235 9665"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> fragments = {"5490 -8165 1925 -3618 -846 -1368 1866 210", "-3660 -1574 -579 -1291 -1214 4409", "555 9700 -7505 -2726 -2863 -7569 2042 7617 4755", "9968", "9924 -7494", "-6065 -1828", "-2188 -2168 2503 903 5085 4575 2613"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> fragments = {"-967 -8031 6826 -8647 1831 9624 9518 -5635 300", "-3310 -411 -7838 -4114", "4206 8562 7463 1476 677 -2213", "708 -7464 -1714 -6588 6055", "1992 1553", "-2468 -9048 -2323", "2138 8820 4023 -7174 -8656 2539", "7068 -4666 -1564", "7663 -7498 -3526 571", "9802 -3610 -5527 -6295 595 -3285", "-6855 -163 -2428 7701 5191 -917 -2116", "-9207 4253 -4450 -5767 -2529", "2109 -5410 -7809", "-9149 -4039 -8153", "-9438 1853 -9053 -8015 1727 -9691 2623"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> fragments = {"720 -5062 3140 4569", "-7690 1486 -7460 -8764 -3243", "6194 5722 3645 5155 7555 1837 1835 -9018 5699 3972", "-7346 1426 -5249", "-5933 -6288 -7231 -8419 2358 -815 -9181 1453 -7944", "-9445", "8249 -4315 -4860 -8441", "612 -6043 3837 2250 -4565 -6476 -5615 -533 4833", "-9070 754 9473 8889 -8217 4269 4608 -5702", "-5765 -7673 -223 -1288 -4906 -1548", "3324 -5577 8844 7566 4098 -401", "-5196 409 -5530", "-6451 9996 -1812 -5793 -1506 -1771 -1274 1869", "-7495 -5133 3710 3130 -3571 4492 -3569 9367 1402", "-9746 -7800 -1821", "3131 2400 3049 3064 -5498 -3670 -1699 -1413", "-5282 -109 5180 -9735 -3955 4107 2676 -1386", "-2023", "742 3648 -6718"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> fragments = {"4135 1049 5083", "9965 1456 7606 -7646 -4157 621", "6580 -2575 -2443 6677 940 -6456 -5116 -8681 8990", "4252 6788", "6679 -1997 5119 300 -2433 -8849 3806 -3453 -5750", "7774 -8948 1136 3191", "5906 499 -6521 -2035 3410 4896 -5628 -6912", "-5511 3175 -4303 -3103 3926", "1143 113 -6260 3910 178 -5887 681 7073", "-5343 -2422 -786 8325 1992 -9703 -2307", "-7963 2196 1154 -5100 -5780 4671 -7915", "4373 6231 -7757 3503 -4010", "8044 454", "-9449 -6271 7598 -5666 -2066", "-3075 9343", "-1400"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> fragments = {"-6794 -2526 -3398 1918", "9672 -3266 2547 -4721", "-7413 -3800 9104 5006 6646 2062", "3744 3310 -5036 -6292 -257 -2066 -5168", "-1139 4001 -4880 -4781 -3653 5031 7572 6403", "-3170 -7349 6444 -1445 867 7564 1542 -4712", "4737 3538 -3293 -5434 3068 -5798 -5280", "6027 7240", "-9365 -6551 3251"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> fragments = {"8645 513 -6156 7095 -622 -2822 -9893 7798", "1507 6770 -8855 5068 -5650 -8383 -772", "8704 -9038 -6410 -1922 8872 -9624", "3660 -5220", "8659 -3739 -4011", "-927 -1331 -9365 -6999 1438 1971 8995 -6380 -2565", "-9444 2370 1708 -7461 5486", "-9994 -2902 -7483 -8997 -6370 -4349 2707 6689", "-4728 3674 2794 8963 -784 -7339 -4933 -2874 -2422"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> fragments = {"-9929 -1757 4810 -4798 6584 1056 2462 1711 259", "9273 6552", "1411 1120 3471 981 -1082", "7176 -2126 8378 -2531 -3744 -4200 -9006 2052"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> fragments = {"1657 1418 2712 -5575 -6187 1089 9072", "-1315 3487 9380 -3505 4580 -2268 -3780 -8007 5105", "-6936 7787 1114 1517 -965 -6338 -535 7636 -7622", "7903 -4762", "-5959 3761 -3941 2470 -7575 3814 8827 -6256 -1896", "7984 4973 6634", "4694", "4171 -8112 6986 -9839 2599 3578", "2037 3980 -4548 -677 -279 -1289 5228 -6307 -6325", "3462 4118 -8823", "-4928 7774 -3118 84 7486", "-1553 -8271 -4218 357 9435 6362 8810", "6543 4999 -8960", "-6956 2326 3353 -2556 3376 -3384 -5102 5246 8550", "9681 -4826 -8468 -3830 -8205 -5053 4186 7867 -6369", "-552 7398 3629 -2515 -8870 7577 -1045", "4380 8311 -9857 5186 4440 4615 -4272 9855", "-5398 9968 3479", "4398 5534 6343 -7428 6231 -2317 -4485"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> fragments = {"-1339", "-8772 -4975", "-4188 51 -9243 -1591", "-3545 1279 9874 -1064 -4401 -106 -4810 -6570", "3916 -9679 -1402 5192 396 -5204 -6828 -8793 9403", "8169 3809 1021", "-4527 -4174 -1147 -7274 -6000 9621 2893 -9934 9957", "6192", "5897", "-334 -633", "-6697 -7014 4507", "4487 5425 -8244 -9948 -792 739 -2215 8455 -867", "-9896 3838 8551 3876", "-3915"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> fragments = {"8373 9644 -5991 9481 5925 -4407", "-8393 -4530 4235 -1797 -12 5998 -6521 -8967 -9142", "-8821 -2838 -5074 6797 -2676", "-2234 -3991 5782", "-8293 514 1815", "1539", "-6230 3753 -5846 -2722 3134", "-6433 -3306 -1409", "-2309 9560 5993 5467 -264 3725 -34 -5979", "9574 4891 -8242 -2819 -1645 -9317 -5539 -3389 6666", "-5731 5510 -7173 6823 5871 3316 -4080 4836 8400", "-1354 5685 -294 -1980 3955 2908 6159 -5052 -6314", "-5304 -4306 -1787", "6879 -1092", "-9218 -8033 88 -2337 -1119 6221 7676", "746 5904 -3528 4147 -7967 5325 -4908"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> fragments = {"4990 4577 7468 1950 3978 -7233 -9367 -4644 7540", "-6830", "2016 8005 -5761 -7773 -7627 -6109 -2704 -4891 9573", "-1275 -182", "-4970 -9099 9953 -1649 3138 -6900 -4366 -420", "-6836 -472 -516 -7995 7376 2366", "7051 -875 -5578 -8321 -4046"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> fragments = {"-4378 3969 -7212 6617 8609 3576 -7656", "9611 -5620", "-1834 379 6324 2854", "-5681 5148", "-728 1037 -8033 8166 -1928 5859", "-5748 -7704 2350 4346 888", "3068 -9500 4930 -4702 -4754 986 -1240 -3953 9847", "6782 -4211 -1896 4039 1658 9195", "6130 -1412 -64", "-5585 6850", "-5676 -9845 -7454 -1207", "3074 6464 7697", "670 -2288 4798 4980", "-456 8475 751", "5045 1910 -5231 -8902 -432 -6557 9941 247", "4800 9800 -2871 7368 4764 783 -5847 -2589 3199", "7567 3889 -5785 -8198 9356 -1030 3727 9766 9432"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> fragments = {"1368 4798 -5714 5554 6120", "-9787 -8093 6284 4519 -6979 8441 -6222 -2162", "4080 -7204 9487 -111 -6000 -458 6031 5948 8056", "-9444", "-7535 2114 4881 895 -3549 -1082 3665 -7028 -273", "7339 7407 -1935 6014 -6043 3764 -2643 9811 -6979", "-6310 5962"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> fragments = {"3717 7191 -3324 823 -2756 2715", "1819 -1956 8953", "5510 -2049 6624 2601", "-5635 -4738 3015 154 2789 -2338 -146 -593", "-9872 -3370 -4943 4125 2124 2309 3581 9331 1311", "7322 -6693 1812 -9168 -8780 -552 5424 -5097 -3139"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> fragments = {"9330 3951"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> fragments = {"6026 -8981 -9026 5775 -6008 9146 -2592 -9016", "5244 998 -5996 18 -9058 8947 8494", "-4066 -434 650 8616 3632", "-8263 6398 -7506 5824 6154", "-5755 -6688", "3936 5976 6862 3326 -2374 5713 8483", "-357 -3531", "-6770 -8050 9427 -1644 1066", "3144 -7858 -4932", "-7536 -4263 768 9694 -4081 -7475", "-371 -7647 -1030 382 1690 8224"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> fragments = {"1509 4927", "-9400 -7944 6652 -9441 7233 240 -9088 4485", "9133 4456 6651 -2780 8161 2342 3458 -3658", "467 -2045 -5611 -3249 -7354 3507", "4927 7606 4596", "4774 7877 7248 1442 -4013 -5502", "5484 6308 3573 -2654 -8743 -1390 4606 3876 702", "6451", "-6144 1379 -5796 -9995 -9072 7543 -4584", "4697 1099 -5663 -5144 -6304", "2183 6248 5762 2919 -1232 -1444 -2525 3525 1313", "-9389 -6710 -1618 9034 5431 -1599 -9758 2383 4066", "8862 9900 3770 -2054 -241 1039 -8611 -705 3266", "1243 1114 259 -619 -2440 211 3504 -2227 2452 -7552", "-6907 480 -5537 -4608 -4776 -9913", "-104 -7644 6538 -3302", "-3164 4035 -8600 -2270 -8237 -7049"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> fragments = {"-1374 -4430 -3352 2906 -7166 9321 4291", "-1501 617 -8063 9314 -4286 -8268", "5089 9369", "-5102 9 7669 -3013 3723", "9084 5818 -6619 9070 8990 -9581 -7894 2026 -5878", "-9238 4153", "7092 1963 3034 -5232", "4908 -1633 6961", "9408 5429 -2278", "1950 3674 -3221 614 -8275 9564 5671"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> fragments = {"111 2793 -1086 -9509 8606 -4010 4569", "-1140 7637", "2225 -5899 3216 -6258 9144 -9019", "896 743 1625 -9312 3454"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> fragments = {"-1175 -2166 3678 -6800 -2741 -2567 8550 -1530", "2595", "1300 -5085 -4306 -5157", "9812 23 9687 -2835 -5548 1951 9873 2856", "-8213 367", "7548 6694 -1630 3233 -8589 8690", "-5703 -1726 -3376 -4087 -8100 -2965 1438", "9998 -6663 -8414 -2253 -5384 9713 -1468 3734", "8734 551 7945 -1887 5686"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> fragments = {"-4541 -4685 -9348 9053 -3602 7173 -953 2134", "6536 -1243 1188 2466 7450 5852 -6636 -7752 4977", "3307 -3178 9164 -6759 4901", "6989 172 -6940 8609 -8182 4210 -5050 -4382 -5148", "5237 -1985 -2422 7788 3946 8726 9010 -8954", "8298 6791 -760 5699 -1048 -3919", "6404 -4407 6055 -8598 6412 -4212 3943 2768 -6430", "2114 5877 -2860 8354 1826 -8145 2704 -3343 5432", "-5264 -1836 4913", "-630 7246", "7229 -4522 7659 179 6550 -4246 -8241 -1191 1913", "413 -1149", "-2406 2948 9852", "-98 -5137 -3124", "6146 8559", "-8002"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> fragments = {"5781 9967 7909 -7374", "4346 -1704 3550 -8869 9298"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
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
    vector<string> fragments = {"-6348 -79 3624 3934", "4219 -1130 9024 -1303 4930 6544 3060 8095 4256", "-3175 -8284 2448 6302", "6166 -2707 4212 -4863 2120 -3881 2560 -4427 -9824", "716 981 -9108 -2460 7099 3245 7479 1192 -1470", "7048 9200 3885 5489 3272", "-6627 2811 -4092 -8705 1147", "-6968 -6905 2977 5318 -1210 -7786 2453 7544 -2084", "-2458 8827 2605 2889 -4701 -7933 113", "-7216 -7047 -5512", "7508", "-8816 -6626 -3744 -1112 -1776 3828", "-8496 3149 -2644 4504 2654 -1338 42 5778", "-1591 295 -8292 411 -9341 -3357 -1755 -7190", "5777", "4401 -9878 9730 290 -9816 -1179 -7590", "-9841 -2565 6850", "-726 3028 3027 9957 -9897 8342 -2290 3696", "4207 -5021 -6453"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> fragments = {"7497 -182 -267 1534 -8256 6485 3506 2762", "9118 2717 -5972 -1123 3612 6463 -9422 1836", "554 2887 821 -1089 4859 2681", "-1207 8091 -3862 2786 -775", "-3370", "-8439 -9463", "8303 3956 -7008 8942 -9658 5847 6213 -1833 -5722", "-91 -4193 -7389 -9197 3401 3232 2103 -6540 7565"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> fragments = {"9734 -561 -3267 4426", "-2945 -714 1423 -883 129", "7447 6624 2400 9713 -5021 3744 -8093 4002 1679", "-7029", "-5290 -5152 2647 -583 6801 -3581", "-7586", "4228", "-7136 -1543 9175", "-4819 -500 8904 7495 449", "4413 -1843 -3475 -7123 -4002 4083 5743 -7768 -9510", "-9317", "-6428", "4885 -3900 -2305 2309 -6465 9064", "2083 -7565 5438 7772 7685 9477 -9364 6575 1335"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> fragments = {"-9792 5148 3771 -9994 581 2685 2144 -5868", "8904 1245 1728 -6616", "3854 7680 8028 -5860", "-7965 -9056 -9941 9265 2802 552 -7106", "6650 -9248", "-4095 2461 1440", "7449", "5388 -3223 -747 6031 -1584 3406 8402", "-4723 6276 4245 -2177 -4648 7833 4052 5625", "7250 8432 -9187 7823 8031", "-6951 -3732 9958 2037 -741 1391 -3285 1548 6194", "2494", "8022 8201 -8606", "-5453 -22 -6285 3583"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> fragments = {"-8206 -2099 8915 8072", "3066 8139 9235"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> fragments = {"9483 1552", "3258", "150 -6284 7659 4907 9017 -5529 -7032 -1034", "5213 7532 2147 4647", "-1446 3776 2530 -6500", "-7903 -1651 8627 4080 7867 6389", "-5348 -1147", "1319 9415 4875", "384 5952", "2940 4197 -7908 2167 -3780 -1067 4350 3444", "7690 -1262 -1781 -6850 -1284 -5035 -1721", "-9529"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> fragments = {"-7280", "-9437 8068 670 6562 1540 351 -5120", "-1413 3931 1162 -2569 7892 -7131", "-7663 1209 -6492 5689 2397 3744 -1548", "1289 -5607", "8023 -9993 -7284 -5379 -6331 -5333"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> fragments = {"-4951 -3098 5830 -2741 -9989 6365 -2203 -5719 6700", "-4560 3376 -8345 3697 5462 -7241 -2542 9058 -2918", "4443 -4452 7672", "3228 -1165 -6834 5166 -7980 -5251 -2450 2208 -1747", "2000 3045 -95 -7721 -8155 5039 869", "-3282 -3937 -1115 5335 4571", "-1334 -5947 -2451 -964 -545", "-4008 5897 -5380 -8321 3324", "7253 7881 -5786 -775 2574 7304 -9200 6586", "7191 -3356 -7493 1325 -8741", "6202 2962 4862 -2923 4522 -1656 -6096", "-1997 -9765 -8609 1317", "-2579", "-6120 6240 7621 -4287 -8784 -9473 6317 -5203 -4373"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> fragments = {"1925 -7265"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
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
    vector<string> fragments = {"1459 -9266 8880 7872 1121 7338", "-2472 -5827 2351 -8045 7443 3043 -9948", "2731 -1161", "9041 352 -9129 -7094 9455 8281 7788 -8863 -6430", "8646 -2995 7865 2264 7650 -2100 -4243 7933 6254", "-2223 7282 4187 1450 -850 -9559 8599", "1102", "5693 6388 -333 -7195 3340"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> fragments = {"2688 -7380 8067 -4693 -4754", "-4368", "4387 2272 4705 4236 7252 9511 505 -462", "-331 3941 3682 8397 -8021 -3710", "-2764 6168 5282 4479 -5096 228 2235 9093", "-5919 7697", "-4206 -6667 -7485 -6627 2647 8694 2512 7889 6286", "-8275 3766 902 -9758 6929 -6473 -1738 -8836"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> fragments = {"-4349 2364 -4176 -9847 -7072 -7296 9480", "-4394 9655 5247 1422 1436 -6557 -1901 722 -2867", "3296 4053 -5390 -6783", "-8657 -235 -8504 7681 -860 -1677 2416 4177", "-3988 -4087 1751 -5606", "8256 -4854 -1994 -4108 -1920 6907 7855 6321 -9770", "7965 8376 3202 8846 6805 4691 509 2304 -1150 6024", "-444 -4957", "-3535 5297 -2913 -9397 -4219 5645 -9211", "-6233 6185 8105 -5716 -4872 -5010", "2701 3199 1084 5580", "-5130 -973 -8169 -8156 6459 -6132 4423 2871 7622", "-2792 -295 -3419 -3576 -4359 1171 7238 -5299", "-2054 5887 178 214 -6044 4937 -1152 3974", "3259", "5148 -9851 6388 9139", "3817 -6804 2258 8040 -1246 1952", "-1588 -1945 -7250 -422", "-8998 -6348 -1497 2296 1205 927 9047"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> fragments = {"-5379 6308 -6634 -5121 7572 -9754 8376", "4623 -41 6501 2210 -2291 -3156 525 -8273 -2525"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> fragments = {"-9774", "9125", "-4989 9393 -7420 7896 3586 -2413 3199 -5759 5987", "-6308 6862 6547 435 7406 -1385 -151 -1272 -4185", "-9852 7692 -3857 9679 2590 840 -8302 -3341 -4091", "4447 7687 1711 1860 5424 -7082", "1774 -9938 6527 -6679", "-2086 -1543 -3881 1087 -5316", "-3310 -8171 4084 9553 8406 -8392 1548 6576 6532", "-8653 -1305 7510", "9684 8998 8391 -180", "-4718", "6447 3105 3418 -4683 2333 5173 -7464", "-6219 -3494 -975 -4190 -6276 3362 -6117 -6430 4464", "5780 -7880 1851 -6368 -3993 -3178", "6432 -4052 9934 -2372 -7951 8005"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> fragments = {"1636 -5004 6084 3538 -3749 -2628 -6945 2157"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> fragments = {"-390 2749", "-5632 -3962 1668 -7596 -7921 9193 -5274", "811 1308 -3355 -6002 2486 6151", "-3823 2879 -2628", "-4154 3134 -5991", "3040", "-7270 -9962 -579 -4744 -6857 5834 -9206 8805 8835", "6495 6290 7370", "2047 -5692 7625 2454 -453 -3286 -5570 -8546 8087", "1608 5406", "-8593 649 9314 2907 -4820 1959 9761 -5014 2613", "4723 7961", "-5706 53 -8117 9948 -1915 -1432 8133 2275 6367"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> fragments = {"1621 -8491 -6802 3616 -5075 -5988 -346 -5369 -7915", "5831 -7691 -6346 -2059 -2540 -19 -144 -9886 6274", "-5844 -9717 1387 -614", "-4838 -8177 3051 1716 7041 -7641 8805 -2517 9436", "-4707 -4583 -7925 311 -599 7677 -9408 -2328", "-1164 9152 -9548 5441 -8503 6247 44 -6015 357", "-585 8482", "-4743 2271 -1154 876 -293 -1633 -2135 5258 -9489", "9875 5900 -9706 310 9991", "7138 338 2116 -1302 -1956"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> fragments = {"-927 1359", "-8251 -8638", "3814", "-2602 5582 6060 -6072 -2939 6216 1034", "-7308", "-439 -5472 -391 -684 -6053 5095 5006 -6753 -5134", "-3066 -7248 3237 2114 7393 -8880", "-2901 3645", "8479 -3758 9834 7964", "2594 5510 -4442 4041"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> fragments = {"1763 8448", "-1654 -1692 2134 5323 -9739 6951 1015 8808 2273", "-4341", "-2227 8604 6759 -6433 812 -5770 -3230", "-2321 3690 -3896 -1576 3419 -689 -9189 -415 8568", "-1593 4792 -9011 -8031 7815 -5127 -4167 -3167"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> fragments = {"3127 -1699 -2499 7848", "-1596 -9521 -8175 -7240 2020 5511 4872 -560", "-9444 -9662", "-4786 8443 -9725 -5507 -15 -3842 -8028 3667 6737", "-492 -1350 -8647 6588 1071 9619 -5366 2032", "9863 -2786 -60 6118 3917", "-5736"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> fragments = {"3509 -5537 9225", "9164 2107", "9060 -9006 317 -5716 -504 3943 3984 5282", "9269", "-7492 -4124 -4454 -1361 -1459", "-3050", "7682 -514 1520 -3020 -8023 8443", "-7799 -8400 -6601 9560 -979", "-5820 -3513 -6245 -3115 447 1790 8093 -5703", "-2763 -6076 -711 -2187 -1070 9631", "-7494 -4592 -7322 -3725 8774 5628", "8248 2084 3302 -2638 -6012 9320 7665 -2318", "-8 -8531 -2249 4961 -8929", "7986 6573 -8097 2745 490", "-9739", "4752 -4795"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> fragments = {"-6840 -9879 -6070 -5558 7239 5174 -2527 -744 -4244", "7647 -3939 -165 -3228 4827 2160", "-639 -9833 634 -2427 4872 -42 -1890 -6506", "1531 8263 3859 5041 8789 1159 8675 8043 5914 -9137", "-1725 -4069", "9571 -3245 -4527", "-2563 -3874 -8748 -2712", "3718 -6854 -3879 -2397 1806 -9511 5883 7557", "-2819 1716 -2811 -3211 2428 4167", "6511 -7179 6651 1010 3523 -7202 4498 8959 -2384", "7939 -1188 -7258 3913 -454 -7039 2167 4795", "3902 -8714 6492", "9336", "5169", "-2717 -8734", "574 7615 2450 -5243 -8321 6256 -5279", "-6007 2073 -9357", "-9119 -8845 3627", "5481 8358"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> fragments = {"2849 8877 -9612 5869 3623 1042 -8995 7541", "852", "-8577 1644 -1793 7120 9816 -5491 -7577 4446 8023", "5874 -8096", "-6930 -5776", "-8673 -9818 6612", "-8909 523 -1790 -3737 8153 -7117 -7554", "-727 -5944 -3300", "-9614 9461 -9797 -4639 1852", "871 -1576 9213", "8436", "9314 9250 4390 -6313 -1163 2287 -7879 -9937 5235", "2287 1106 -4764 -19 -7850 8875"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> fragments = {"-2553 5986 -130 -3749 1234 -8854 2628 8047 4419", "-6129 1821 3710 7460 4929 -7548 -4972 6532 905", "3470 -9595 9983 -2205 9029 -427 8498", "-6317 3547 9581 9957", "-2954 -1981 4563 6811 -838 5154 7005 -2621 -5911", "-1605 4798 -6390", "-180", "-2764 2236 -3743 9379", "-4377 540 -6572 -1401 -3399 -8121 -3446 -7885", "-6675 8446 1064 -5538 3792 1671 -2877 -850 8656", "2926 -9298 6608 2930 53", "6802 -576 -5746 -9058", "6763 9509 6399 -7045 -9724 -2028"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> fragments = {"8179 1858 3074", "2470", "8028 4366 7680 -9718 6905 -9963 -4050", "-4926 -886 9737 8567 7601", "-5510 -3286 -651 6982 -2997 187 6358 3612 9640", "-4040 -6890 -4037 -3195 -3223 -8455 4339"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
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

int test90() {
    vector<string> fragments = {"1521 5042 2119 -6170 -2335", "5790 1525 -8100 -2244 7487 1410 5958", "-1824 970 8347 7368 821", "-2075 6988 2120 -6123 6338 5422 -7865 -285 -1351", "-3849 -828 -9202 -5767", "4170 1552 -5323 1359 -1150", "1136", "-7596 643 -1807 -1620 6427 3590 2998 -8976 -2545", "-7287", "5278 9603 -8185 1654 -3844 8906", "4097 -4287 -1492 -3576 5412 5987"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> fragments = {"-1015 -8666 9456 1922 -6573 7752 8441 -528", "-8705 -9570 6139", "-4757 6422 1608 -2306 8177", "-2715 -5925 4240 -3014 6509 -5863 -3883 -7198", "9888 -7701 281 9324 -7419 7959 -2948 66 8901 -110", "3447 -7908 -792 -8883 -3809", "216 2806 -313 -2390 -8424 -6221 -1982 3223 -7749", "-7912", "-9405 2342 -7516 -56 -9864 -9211 7243 6679 -7713", "667 9993 -4087 7006 -5666 -3536 -7063 6785", "-4408 3852 -6318 -5916"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> fragments = {"-6280 -4020 -4162", "6987 -6241 5348 -8480 -7231 -3727", "-4817 -716 -1229 -1231 -8339 -54 -8520", "8791 -5973 2578 1929 607 2245 8580 -7729", "-2772 7115 -1603 2158 -548 1464 1949 9560 5851", "698 4483 -1548 1587 6734 -6540", "-502 7094 2684 3535 -8990", "-6062 -4925 -9053 9831 5177 9731 5178", "7617 1666 -3696 278 8707 -9458 -8681 -7325 7608", "6007 6308"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> fragments = {"6741 -1401 -4090 -8376 9662 -9002", "5949 -2205 -1284 2724 5297", "-6432 -6924 9423 -8309 5817 3243 8555 5326 1935", "-1301 -6794 998 -1099 1315 8058 -5593 -1229 7260", "6606 -6906 -6984 -7352 -2596"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> fragments = {"572", "302 4896 3300 4159 6492 -4203 8298 -6816 6875", "-5961 -6212 -4567 7483", "-4255", "6075 9707 6641 -8572 120 -8430 6106 6410 1676 7137", "-5348 862 -3895 5580 5244 5841 2648 174", "1793", "-2097 -406 -261 -8355", "6320 7266 -4608 -1674 9232 8124 392 4339 597 2040", "-4610 809 -8384 4642 6274 8371", "416 9043 8260 7030 960 -6225 -4880 -6057", "-1354 5481 -9513 -7133 -3461 -3180 6142 -6732 6885", "-617 -2356 3924 -3869 6079 -4416 -5172 2244 3327", "2 7003 -5906 -4157 7930 -1302 9253", "29", "-8928 3324", "-7921 994 -7749 2939 4719", "8220 749 -2563", "2794 5659"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> fragments = {"9293 6110", "1539 -5511 -1255 -7538 -770 -101", "-6462 -1237 -5880", "855 357 -8242 -9052 -1522 -765 1754", "-8964 4618 2304 -243 2330 -4415 -8914", "7735 -7248 8916 4354 7313 444 -2166 -6551", "9932 -2342 8051 6596 7922 3715 -9490", "-2223 619 8818", "8837 -4599 8887 8809 6347", "-6658 8001 -9977 8357 -4288 -3415 6794 -9840 8129", "-5062 8785 -3665 -1716", "-8698 -2299 9211 272 -891", "4436 -7107 -9441 8265 -2323 -8585"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> fragments = {"6746 1945 -421 9197 -7541 -1085"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> fragments = {"-314 2227 6302 6598 4063 387 6113 -2496 6069 9413", "7725 -4822", "8618 -2429 -5867 3218 -2991 3733 -9144 -4134"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> fragments = {"-1972 -276", "-1925 -3163 -781 2000 -4899 6620 209 7214 8419", "6156 8558", "-1811 -2835 2193 8898"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> fragments = {"7416 -2839 -4122 -1879 -2897", "-9422 288 -2940 -7462 -5330 -1649 -8354 -1594 346", "662 -8594 8798 -8784 -7599 -7092 -9103 9043 2017", "9444 -2499 -5723 -2722 2356 1683 6000", "561 7342 1894", "7824 2765 -2628 1258 -7152", "-4521 7370 2362 -6081 -5650", "-8296 7540", "-1038 -8946 9529 -3555 -6053 6672 -3374 3170", "3679 1304 -6905 -4642 7819 5965", "8815 7587 3458 7131 -6334 4733 4272 6375", "-3953 -7977 1248 -4711", "-2087 6400 2388 2710 -2055 1964 1883 6596", "74 -6239 7156 4908 -4816 6868", "-1764 -9129 5409 -4803 8607", "-7510 9951 8398 5687 -3422 6588 9766 -9373 3212", "9646 8188 2866", "6788 -2400 4144 5372 -1949 -8081 -7296 -8851 1113", "-2881 -9914 5352 -8074 4369 7327 9850 -4962 882"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> fragments = {"-7265 -3095 -7606 -3924 2500 -7727 6813 -5218", "-7629 -872 8842", "8314 5536 9713 -1576 1303 -459"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> fragments = {"-663 2703 1098 387", "-482 -4887 -9117 8279", "-5537 -5637 5411 7873 -5790 -3264 8669 2204 -7140", "5974 276 4843 -2882 -3764 7338 4836 -4652 -808", "-9992 -3564 -3724 -7464 6192", "7013 -6296 8693 -9268 -9886 -2969 -6420 -8678", "-1500", "3932 -1022 5334 -3475 -5105", "-4460 -520 9839 -7082 5429 8613", "552 -4910 -3470 -2904 7420", "4964 -7666 -8487 -7656 9066 -6204 -6008 4771 6555", "9785 -4121 1996 -2954", "-1200 7140", "1712 4434 -3129 7922", "-6547 -4219 -8150 -5959 3295 4216 6322 675 2820"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> fragments = {"8812 7872 -4418 -4522 -286 6010 3668 6395 -6081", "7241", "-385 -290 -62 4661", "912 -5641 -5760", "-9110 5141 9828 -3877 8557", "-8988 1512 -9202 -4000 7458 -4158 -8497 6819 -4507", "481 -8705 1855 -1591", "-5799 -8093 -3544", "6724 4263 2892 -5197 -3753 -2565 2100 8234 -5338", "530 6668 7703 2871 -5589 -7527 5719 8741", "-3799 -8343 -2942 6585", "-8294 4771 -8635 8790 1729", "-6014 -3982", "-6621", "-8241 6859 953 9122 4663", "6655 3101 6999", "5103 6977 -6010"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> fragments = {"-5180 -825 -3094 6746 -3866 -4882"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> fragments = {"2 2 2 2", "1 1", "5 -4 12 -11", "0 2 -2 5 -1 -4 2 -2 7 -2"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> fragments = {"9912 -7107 991 6157 5529 581 -118", "1744 -7464 -8724 7537 -5857 -9240 1897 -1793 5741", "-5047", "4634 -900", "-6055 -9248 -8993 5784 8744", "7762 -8656", "-4454 6408", "7787 -7154 3293 4188 -3963 5120 5035 4358 9344", "-1510 6250", "5595 1927"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> fragments = {"9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996", "9996 -9996 9996 -9996 9996 -9996 9996 -9996 9996"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> fragments = {"9996 9996 9996 9996 9996 9996 9996 9996 9996 -9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 -9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 -9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996", "9996 9996 9996 9996 9996 9996 9996 9996 9996 9996"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> fragments = {"12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12", "12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> fragments = {"72", "1872", "8916", "-288", "2208", "-4716", "2328", "9516", "-5472", "9840", "6420", "3492", "-1608", "4176", "264", "-6264", "1176", "-684", "3984"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> fragments = {"2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> fragments = {"2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 5"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
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
    vector<string> fragments = {"2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 6"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> fragments = {"2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7", "2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 7"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> fragments = {"2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2", "2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2 2 -2"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> fragments = {"72", "1872", "8916", "-288", "2208", "-4716", "2328", "9516", "-5472", "9840", "6420", "3492", "-1608", "4176", "264", "-6264", "1176", "-684", "3984"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> fragments = {"1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> fragments = {"2", "2 2 2 1", "2 1", "2 2 2 1", "2", "2 1"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> fragments = {"72", "1872", "8916", "-288", "2208", "-4716", "2328", "9516", "-5472", "9840", "6420", "3492", "-1608", "4176", "264", "-6264", "1176", "-684", "-1 -1 -1 -1"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> fragments = {"2 2 2", "1 6", "-2 -2 -2", "-6 -1"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> fragments = {"0", "1 1", "0", "1 1", "0", "0", "1 1", "0", "0", "1 1", "0", "0", "1 1", "0", "0", "1 1", "0", "0", "1 1"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> fragments = {"2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> fragments = {"229", "-244", "224", "343", "391", "108", "-177", "193", "-264", "274", "-78", "-123", "-218", "74", "86", "-54", "-298", "-171", "-3"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> fragments = {"72", "1872", "8916", "-288", "2208", "-4716", "2328", "9516", "-5472", "9840", "6420", "3492", "-1608", "4176", "264", "-6264", "1176", "-684", "3984"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> fragments = {"1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2", "1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 2 2 2 2 2"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
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
    vector<string> fragments = {"2", "2 2 2 1", "2 1", "2 2 2 1", "2", "2 1"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> fragments = {"72", "1872", "8916", "-288", "2208", "-4716", "2328", "9516", "-5472", "9840", "6420", "3492", "-1608", "4176", "264", "-6264", "1176", "-684", "-1 -1 -1 -1"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> fragments = {"2 2 2", "1 6", "-2 -2 -2", "-6 -1"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> fragments = {"0", "1 1", "0", "1 1", "0", "0", "1 1", "0", "0", "1 1", "0", "0", "1 1", "0", "0", "1 1", "0", "0", "1 1"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> fragments = {"2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2", "2 1 2 2 1 2 2 2 1 2 2 1 2 2 2 1 2 2 1 2 2"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> fragments = {"229", "-244", "224", "343", "391", "108", "-177", "193", "-264", "274", "-78", "-123", "-218", "74", "86", "-54", "-298", "-171", "-3"};
    CMajor* pObj = new CMajor();
    clock_t start = clock();
    int result = pObj->getLongest(fragments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=270505&rd=9810&pm=5903
********************************************************************************
#include <vector>
#include <string>
#include <cstdio>
using namespace std;
 
#define V(x) vector<x >
#define vs V(string)
#define vi V(int)
#define vd V(double)
 
#define fr(x,y,z) for((x)=(y);(x)<(z);(x)++)
#define fo(x,y) fr(x,0,y)
#define fir(n) fo(i,n)
#define fjr(n) fo(j,n)
#define fkr(n) fo(k,n)
#define fi fir(n)
#define fj fjr(n)
 
#define pb push_back
#define sz size()
#define cs c_str()
 
#define fk fkr(n)
//#include <map>
//#include <set>
//#include <algorithm>
//#define ll long long
//#define flr(n) fo(l,n)
//#define fl flr(n)
//#define ins(x) insert(x)
//#define df double
//#define srt(f) sort(f.begin(),f.end())
vi tki(string t,char *d)
{
  vi ret; int temp;
  char *buf,*s;
  buf=(char *) malloc(t.sz+1);
  strcpy(buf,t.cs);
  for(s=strtok(buf,d);s;s=strtok(0,d)) {
    sscanf(s,"%d",&temp);
    ret.push_back(temp);
  }
  free(buf);
  return ret;
}
 
int t[50][7];
 
int b[524300][7];
 
int back[12]={0,-1,1,-1,2,3,-1,4,-1,5,-1,6};
int fore[7]={0,2,4,5,7,9,11};
 
int go(vi &t, int s) {
s=fore[s];
int i;
fir(t.sz) {
s+=t[i];
s%=12;
s+=12;
s%=12;
if(back[s]==-1) return -1;
}
return back[s];
}
 
int bc(int x) { int r=0; while(x) r++,x&=x-1; return r; }
 
class CMajor { public: int getLongest (vs f) {
int n=f.sz;
int i,j,k;
fir(7) if(back[fore[i]]!=i) puts("!!");
fi { vi u=tki(f[i]," ");
fjr(7) t[i][j]=go(u,j);
}
 
fjr(7) b[0][j]=1;
fir(1<<n) fjr(7) if(b[i][j]) {
fk if((i&(1<<k))==0 && t[k][j]>=0) b[i+(1<<k)][t[k][j]]=1;
}
int ret=0;
fir(1<<n) { fjr(7) if(b[i][j]) break; if(j<7) ret>?=bc(i); }
return ret;
 
}};

********************************************************************************
*******************************************************************************/