/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7847
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

class PlatformJumper {
public:
    int maxCoins(vector<string> platforms, int v, int g);
};

int PlatformJumper::maxCoins(vector<string> platforms, int v, int g) {
    int ret;
    return ret;
}


int test0() {
    vector<string> platforms = {"3 10 7", "5 15 7", "8 9 12"};
    int v = 2;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> platforms = {"0 0 1", "1 1 1"};
    int v = 1;
    int g = 2;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> platforms = {"0 0 1", "2 4 1"};
    int v = 1;
    int g = 2;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> platforms = {"0 0 1", "2 4 1", "4 0 1"};
    int v = 1;
    int g = 2;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> platforms = {"0 0 1", "2 4 1", "4 0 2"};
    int v = 1;
    int g = 2;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> platforms = {"0 0 1", "2 4 1", "4 0 2"};
    int v = 2;
    int g = 9;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> platforms = {"0 0 1", "2 4 1", "4 0 2"};
    int v = 2;
    int g = 8;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> platforms = {"0 0 1", "5000 5000 10"};
    int v = 100;
    int g = 87;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> platforms = {"0 3919 29", "0 4802 53", "0 4518 19", "0 2990 77", "0 1018 95", "0 2554 75", "0 1754 43", "0 4175 47", "0 3451 3", "0 4917 23", "0 3509 37", "0 3158 62", "0 4244 38", "0 533 75", "0 3140 98", "0 2251 36", "0 1563 19", "0 2246 46", "0 3787 8", "0 4476 47", "0 4015 5", "0 366 17", "0 2489 58", "0 812 72", "0 2471 26", "0 1826 62", "0 4852 67", "0 3357 69", "0 2853 89", "0 474 41", "0 1831 68", "0 638 23", "0 4062 5", "0 3830 65", "0 947 67", "0 1218 97", "0 2314 30", "0 763 21", "0 1735 86", "0 165 51", "0 4682 30", "0 1123 4", "0 746 92", "0 3003 53", "0 4784 41", "0 374 62", "0 4035 17", "0 2375 23", "0 433 16", "0 1142 41"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2328;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> platforms = {"1 2674 13", "0 4811 78", "1 3548 40", "0 4400 45", "1 1007 15", "0 2264 90", "0 1813 98", "1 4946 41", "0 4210 39", "1 2424 81", "1 4311 78", "1 3367 63", "1 1064 60", "0 3768 15", "1 3122 53", "0 797 34", "1 4675 15", "0 2367 48", "1 555 60", "0 3569 62", "1 632 62", "1 813 22", "0 3952 75", "0 1999 60", "0 2908 32", "1 721 43", "1 1631 0", "0 1176 45", "1 998 93", "1 2873 20", "1 4028 85", "1 939 43", "1 518 50", "0 931 16", "1 1073 69", "0 3226 35", "0 2118 47", "1 271 89", "1 3742 23", "0 4644 74", "0 1097 95", "0 2089 57", "0 329 77", "0 4221 82", "0 226 5", "0 356 80", "0 1332 19", "1 372 92", "1 812 17", "0 4456 62"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2597;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> platforms = {"1 4842 8", "2 4769 36", "0 4480 53", "0 2571 88", "2 3621 11", "0 3134 57", "0 4928 17", "1 2665 36", "2 1001 71", "1 2742 51", "1 4668 27", "2 4689 27", "0 4933 52", "0 2524 79", "1 3614 21", "0 12 86", "0 1352 22", "1 1611 67", "0 408 49", "1 875 77", "0 3117 12", "0 2011 76", "0 96 54", "2 3996 97", "0 2289 98", "0 4037 26", "2 815 20", "0 3546 28", "0 3188 61", "1 219 98", "0 397 86", "1 671 87", "0 693 40", "2 124 22", "1 2380 77", "0 614 77", "0 2982 68", "1 4297 40", "0 4686 77", "0 4694 31", "2 4596 61", "0 1537 41", "0 4046 53", "0 484 56", "1 1899 23", "1 2553 6", "0 2109 32", "2 2525 10", "1 877 4", "1 1064 74"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2470;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> platforms = {"2 584 42", "3 535 22", "2 318 72", "2 2480 60", "1 565 45", "3 1421 17", "2 1796 24", "3 2502 7", "3 333 64", "0 4287 25", "2 4776 13", "0 3903 1", "1 2082 26", "0 864 1", "1 882 4", "1 4056 72", "1 2951 89", "3 3347 20", "1 2830 19", "1 1002 64", "2 3748 83", "0 972 56", "3 3341 70", "1 3550 25", "1 4434 78", "2 2494 51", "0 1975 44", "3 2644 8", "2 4756 7", "0 857 87", "0 4161 54", "3 3479 90", "1 3141 64", "2 27 4", "1 1849 97", "0 2122 54", "1 4113 24", "0 4151 38", "0 1881 56", "2 798 22", "1 3884 5", "0 4907 37", "1 800 33", "0 615 16", "3 4601 81", "3 3320 53", "1 1584 65", "3 4397 30", "1 1676 53", "3 2988 15"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2087;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> platforms = {"3 3381 8", "3 4690 71", "3 2084 10", "2 1354 56", "0 2395 63", "0 190 36"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 244;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> platforms = {"993 4003 29", "977 3956 53", "977 3710 19", "992 4859 77", "986 4542 95", "1025 4291 75", "995 4655 43", "1005 4451 47", "995 4715 3", "1018 3984 23", "1019 4394 37", "980 3998 62", "990 4247 38", "984 3784 75", "1013 4101 98", "996 4910 36", "982 4614 19", "984 4328 46", "1014 4188 8", "989 4736 47", "1022 3728 5", "975 3967 17", "1021 3841 58", "978 3778 72", "1016 4193 26", "996 4687 62", "985 4555 67", "1020 4483 69", "1008 4784 89", "991 4018 41", "1011 4499 68", "1023 3555 23", "1005 4753 5", "981 4103 65", "1010 4247 67", "1021 4228 97", "978 3553 30", "986 4506 21", "979 4002 86", "985 4485 51", "1008 4402 30", "976 3438 4", "1012 4094 92", "1023 4043 53", "1023 4226 41", "1015 4450 62", "1015 3916 17", "977 3800 23", "1009 4141 16", "977 3636 41"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 1852;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> platforms = {"1000 4407 13", "986 4446 78", "991 3961 40", "1011 4724 45", "993 4922 15", "980 3967 90", "995 4969 98", "1018 4598 41", "1018 4647 39", "1006 4262 81", "1013 4350 78", "998 4212 63", "1015 4063 60", "979 3687 15", "997 4300 53", "980 4220 34", "993 4173 15", "1010 4431 48", "993 4661 60", "1009 4346 62", "1017 4217 62", "975 3786 22", "975 3701 75", "1022 4123 60", "1003 4641 32", "996 4514 43", "979 3857 0", "1009 4567 45", "984 4631 93", "1005 4498 20", "982 4574 85", "977 4452 43", "1012 3999 50", "986 3910 16", "998 4548 69", "995 4247 35", "1000 4874 47", "996 4060 89", "1008 4683 23", "999 4213 74", "994 4320 95", "1007 4180 57", "982 4139 77", "982 3797 82", "1006 4806 5", "1018 4465 80", "1022 3878 19", "980 4374 92", "991 4155 17", "985 3952 62"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 1890;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> platforms = {"982 4214 8", "1013 4480 36", "1005 4072 53", "996 4814 88", "1022 3898 11", "1020 3771 57", "1005 4160 17", "1018 3881 36", "998 4872 71", "988 3946 51", "1021 3585 27", "1001 4936 27", "984 4218 52", "975 3557 79", "985 3907 21", "996 4604 86", "1008 4243 22", "976 4126 67", "1008 4402 49", "991 4857 77", "990 4862 12", "987 4661 76", "981 3746 54", "980 4102 97", "996 4508 98", "1014 4398 26", "989 4863 20", "999 4303 28", "1005 4420 61", "982 3870 98", "1020 3985 86", "994 4335 87", "1017 4100 40", "992 4283 22", "991 4530 77", "1002 4079 77", "993 4523 68", "988 4757 40", "987 4160 77", "1008 4785 31", "1016 4661 61", "993 4429 41", "990 4742 53", "1011 4301 56", "1009 4544 23", "1003 4489 6", "978 4446 32", "983 4482 10", "1024 4358 4", "985 3976 74"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 1900;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> platforms = {"985 4758 42", "1000 4588 22", "976 3945 72", "1009 4062 60", "978 4032 45", "1022 4446 17", "1009 4338 24", "981 4132 7", "1001 4066 64", "1018 4369 25", "1025 4089 13", "993 4387 1", "1004 4017 26", "1021 4052 1", "992 4761 4", "993 4557 72", "1021 4004 89", "1022 3963 20", "1024 4349 19", "1005 4361 64", "1016 4148 83", "1010 4158 56", "1016 3834 70", "1003 4085 25", "1005 4298 78", "1009 4702 51", "993 4412 44", "985 4629 8", "981 4085 7", "1013 4100 87", "1006 4153 54", "981 4310 90", "989 4269 64", "985 4030 4", "1020 4060 97", "1023 3628 54", "1025 4130 24", "1015 4460 38", "1005 4430 56", "1020 4088 22", "975 3816 5", "978 4299 37", "987 4764 33", "977 3638 16", "995 3992 81", "1024 3955 53", "977 4315 65", "999 4987 30", "984 4651 53", "998 4105 15"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 1548;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> platforms = {"1004 4420 8", "1019 3861 71", "981 4583 10", "1010 4017 56", "1005 4629 63", "1017 3999 36", "1020 4064 86", "1006 4075 83", "1014 4084 65", "978 4385 17", "977 4385 68", "1004 3988 66", "988 4493 37", "981 4626 85", "988 4083 33", "1000 4518 18", "1019 3656 6", "1007 4331 50", "988 4756 82", "1008 4867 68", "994 4584 73", "1002 4354 81", "1008 4518 35", "1000 4842 45", "1019 3760 11", "979 4375 81", "998 4279 26", "978 3885 65", "999 4433 79", "1025 4330 24", "1003 4447 66", "1001 4921 53", "991 4774 47", "990 4433 82", "1015 4767 59", "987 4027 6", "1025 3709 76", "1004 4919 15", "984 4565 86", "1011 4746 58", "1005 4598 84", "982 4481 4", "1004 4884 9", "1012 3998 6", "979 3696 64", "1017 4625 66", "1014 4558 9", "1025 3764 90", "1017 4498 6", "980 4239 71"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 1794;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> platforms = {"163 3039 15", "124 3116 61", "154 3132 77", "167 3133 62", "154 3059 84", "74 3134 20", "83 3111 24", "138 3111 60", "79 3133 92", "153 3053 45", "4659 2275 25", "4724 2201 35", "4653 2267 55", "4714 2235 91", "4691 2226 12", "4718 2234 77", "4673 2247 7", "4717 2232 37", "4706 2277 87", "4681 2275 58", "4771 4623 58", "4720 4620 72", "4747 4625 26", "4743 4559 62", "4714 4565 67", "4726 4598 69", "4777 4592 89", "4749 4628 41", "4736 4614 68", "4772 4589 23", "882 2598 36", "879 2593 53", "879 2589 31", "842 2602 63", "837 2644 98", "816 2638 57", "820 2595 90", "802 2610 34", "803 2579 86", "808 2611 62", "485 4374 49", "543 4308 10", "492 4302 94", "496 4287 11", "566 4336 77", "548 4313 71", "507 4305 86", "474 4380 57", "511 4346 16", "524 4293 75"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 598;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> platforms = {"3178 788 15", "3121 772 90", "3135 695 98", "3183 764 41", "3180 718 39", "3110 718 81", "3144 722 78", "3191 725 63", "3149 732 60", "3178 694 15", "3242 3011 80", "3282 2952 78", "3312 2943 69", "3238 2999 90", "3239 2931 73", "3302 2929 94", "3247 2918 89", "3255 2916 74", "3293 2958 93", "3299 2970 50", "4017 4895 14", "3977 4860 26", "4012 4902 5", "4007 4875 48", "4018 4868 46", "4004 4897 26", "3964 4855 72", "3970 4878 35", "3945 4903 94", "3982 4866 88", "771 1954 47", "830 2023 89", "756 1980 23", "757 2029 74", "796 1958 95", "839 2023 57", "784 1968 77", "844 1960 82", "788 2010 5", "760 1988 80", "4799 267 26", "4848 205 64", "4869 198 23", "4873 235 62", "4864 212 51", "4797 269 3", "4863 267 70", "4836 268 18", "4832 247 29", "4837 245 15"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 658;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> platforms = {"4349 4259 86", "4329 4281 35", "4384 4274 40", "4368 4281 20", "4375 4298 67", "4395 4266 84", "4373 4320 23", "4404 4282 41", "4397 4261 54", "4350 4321 56", "4524 909 49", "4457 932 77", "4536 905 12", "4475 937 76", "4486 923 54", "4530 969 97", "4450 995 98", "4453 973 26", "4446 967 20", "4457 904 28", "411 710 6", "393 718 15", "441 671 29", "479 680 11", "454 657 53", "458 708 89", "418 715 17", "420 640 28", "437 661 99", "431 668 71", "4116 3748 1", "4073 3746 77", "4070 3737 4", "4049 3778 89", "4108 3749 7", "4103 3784 35", "4123 3817 3", "4097 3747 81", "4094 3737 39", "4125 3784 65", "4601 165 42", "4649 221 22", "4580 146 72", "4606 197 60", "4564 221 45", "4597 164 17", "4583 210 24", "4560 144 7", "4587 162 64", "4620 179 25"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 718;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> platforms = {"2024 2061 64", "2048 2055 67", "1962 2057 7", "2009 2043 75", "1974 2004 94", "2046 2061 55", "2001 2080 53", "2046 2073 75", "2010 2060 14", "1994 2040 96", "641 3775 69", "611 3831 7", "624 3851 23", "631 3790 39", "669 3812 55", "616 3810 43", "631 3870 33", "602 3872 45", "595 3787 81", "614 3823 81", "2575 4405 64", "2489 4408 4", "2543 4419 97", "2507 4394 54", "2546 4434 24", "2496 4417 38", "2574 4480 56", "2511 4395 22", "2544 4469 5", "2477 4426 37", "699 3287 33", "687 3310 83", "636 3317 69", "699 3259 56", "698 3307 12", "640 3265 93", "627 3242 91", "688 3297 64", "682 3283 78", "720 3305 56", "3991 442 0", "3907 371 75", "3911 402 54", "3975 435 51", "3922 417 3", "3930 370 59", "3992 368 36", "3959 429 19", "3954 401 8", "3981 458 49"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 576;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> platforms = {"1711 4439 33", "1728 4434 18", "1776 4379 6", "1730 4430 50", "1713 4377 82", "1782 4404 68", "1791 4395 73", "1799 4417 81", "1724 4428 35", "1791 4420 45", "3865 772 84", "3823 812 17", "3802 802 31", "3824 777 66", "3784 815 45", "3822 800 44", "3800 789 78", "3784 765 45", "3841 781 67", "3876 747 8", "1800 4172 25", "1817 4245 11", "1776 4232 86", "1834 4218 9", "1790 4247 3", "1775 4178 87", "1810 4229 45", "1827 4196 30", "1844 4189 57", "1806 4211 89", "2972 1397 9", "2977 1443 90", "3001 1465 6", "2978 1378 71", "3049 1374 13", "2996 1467 94", "3026 1378 76", "3032 1417 46", "2967 1426 3", "2952 1397 93", "792 562 90", "753 569 63", "804 569 5", "713 573 31", "716 493 66", "717 489 91", "734 511 14", "716 479 31", "765 569 46", "745 479 80"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 368;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> platforms = {"2359 3218 61", "2367 3268 57", "2363 3207 93", "2370 3201 13", "2358 3205 67", "2383 3212 16", "2357 3234 56", "2385 3263 91", "2341 3194 90", "2418 3202 81", "515 4589 54", "589 4565 82", "517 4578 79", "569 4513 61", "590 4574 75", "577 4548 8", "499 4529 5", "547 4506 40", "575 4588 56", "539 4582 45", "769 3522 57", "821 3523 39", "838 3548 99", "840 3613 73", "814 3577 23", "807 3607 79", "810 3545 49", "796 3540 3", "750 3551 22", "791 3532 56", "3434 1593 87", "3424 1638 11", "3499 1602 60", "3408 1691 38", "3489 1680 62", "3408 1662 29", "3465 1601 88", "3454 1650 84", "3422 1621 46", "3463 1627 29", "629 3252 38", "637 3294 71", "660 3263 72", "668 3247 98", "700 3232 73", "676 3279 63", "644 3290 30", "648 3265 75", "678 3317 14", "701 3308 77"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 553;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> platforms = {"2323 4795 39", "2318 4794 83", "2398 4782 85", "2395 4731 52", "2352 4741 67", "2378 4746 55", "2313 4745 36", "2322 4801 92", "2332 4797 40", "2329 4750 4", "1881 3868 27", "1900 3821 26", "1906 3821 32", "1915 3879 89", "1884 3899 29", "1909 3811 83", "1891 3850 81", "1848 3801 87", "1836 3843 26", "1880 3823 69", "3211 2832 24", "3169 2812 10", "3138 2837 69", "3173 2869 64", "3130 2877 79", "3193 2836 42", "3207 2823 78", "3152 2840 59", "3182 2816 22", "3192 2838 81", "660 3424 99", "640 3436 0", "608 3420 43", "640 3362 1", "634 3368 59", "647 3442 32", "606 3379 2", "615 3421 38", "611 3440 58", "661 3362 12", "3443 3935 77", "3410 3886 55", "3418 3893 67", "3402 3860 93", "3420 3876 88", "3479 3872 77", "3474 3912 77", "3479 3932 42", "3468 3842 20", "3432 3845 37"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 324;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> platforms = {"3157 958 68", "3084 886 9", "3086 943 70", "3145 925 16", "3091 933 4", "3153 914 69", "3127 901 31", "3111 897 89", "3131 872 94", "3104 948 53", "1911 2194 58", "1871 2152 66", "1897 2154 65", "1865 2107 60", "1891 2141 56", "1886 2148 96", "1869 2183 52", "1916 2126 61", "1892 2110 14", "1938 2120 59", "247 1582 25", "236 1492 52", "205 1546 15", "242 1533 8", "196 1558 51", "202 1570 83", "200 1548 1", "175 1514 83", "191 1536 71", "169 1541 80", "2860 2112 47", "2889 2113 65", "2947 2086 98", "2885 2105 93", "2941 2061 89", "2892 2078 33", "2928 2123 93", "2956 2105 55", "2886 2098 13", "2944 2071 44", "4144 3943 51", "4206 3979 33", "4192 3989 20", "4185 3913 41", "4181 3981 63", "4167 3936 66", "4135 3910 33", "4214 4005 93", "4207 3966 91", "4206 3999 51"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 581;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> platforms = {"1974 4597 4", "1892 4693 94", "1922 4642 71", "1981 4643 51", "1976 4670 37", "1887 4665 18", "1965 4633 59", "1967 4666 21", "1948 4663 71", "1893 4641 60", "3561 1275 36", "3563 1209 46", "3535 1239 59", "3569 1280 68", "3539 1279 38", "3582 1301 89", "3536 1270 53", "3627 1239 31", "3549 1293 80", "3554 1219 44", "1102 4869 58", "1133 4914 93", "1169 4858 6", "1148 4901 15", "1086 4870 91", "1132 4921 44", "1118 4905 3", "1157 4897 43", "1088 4895 46", "1103 4935 30", "4802 3841 13", "4750 3855 68", "4809 3831 26", "4742 3810 49", "4755 3885 3", "4803 3859 65", "4756 3815 27", "4815 3859 68", "4802 3879 13", "4816 3867 11", "1483 3755 31", "1502 3723 75", "1499 3700 28", "1514 3703 69", "1496 3778 51", "1553 3774 2", "1495 3760 7", "1494 3764 96", "1533 3732 45", "1562 3764 71"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 342;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> platforms = {"3721 2988 51", "3646 3017 82", "3659 3000 52", "3732 3040 75", "3665 3021 3", "3723 2958 42", "3724 2962 90", "3665 3032 13", "3651 3007 50", "3675 3011 6", "3460 3477 5", "3456 3444 68", "3414 3425 6", "3436 3451 64", "3459 3408 57", "3443 3406 57", "3457 3435 32", "3466 3388 61", "3424 3383 0", "3409 3383 95", "4649 3843 69", "4655 3854 86", "4598 3928 9", "4645 3923 7", "4654 3845 72", "4640 3861 35", "4600 3861 14", "4686 3868 14", "4650 3903 39", "4608 3900 15", "2270 1731 23", "2202 1758 16", "2229 1747 91", "2235 1724 1", "2216 1677 82", "2241 1705 20", "2179 1737 71", "2172 1664 1", "2206 1735 99", "2183 1725 21", "979 849 90", "971 890 37", "963 890 66", "974 872 33", "986 886 91", "1008 873 9", "1037 863 63", "995 893 10", "1005 906 24", "1036 895 2"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 273;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> platforms = {"2082 1280 72", "2072 1290 98", "1999 1239 94", "2000 1293 95", "2038 1267 80", "2008 1238 48", "2084 1273 79", "2061 1238 5", "1991 1276 70", "2010 1298 10", "1675 1108 0", "1636 1073 94", "1677 1050 5", "1706 1071 76", "1709 1072 93", "1705 1077 27", "1644 1039 77", "1697 1107 6", "1715 1062 81", "1635 1108 68", "4498 801 70", "4519 733 58", "4531 772 57", "4480 753 87", "4498 784 5", "4487 815 33", "4472 735 3", "4508 820 77", "4505 803 5", "4461 832 97", "3627 2311 71", "3654 2368 38", "3684 2377 59", "3692 2315 77", "3653 2375 40", "3596 2376 2", "3687 2324 61", "3613 2295 53", "3668 2313 38", "3614 2308 25", "1944 4693 25", "1949 4711 50", "1896 4658 87", "1901 4681 89", "1964 4678 44", "1900 4735 82", "1955 4750 33", "1968 4720 60", "1967 4737 9", "1902 4691 3"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 544;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> platforms = {"3721 4396 25", "3801 4409 77", "3738 4433 5", "3721 4419 31", "3772 4432 50", "3731 4422 82", "3743 4390 37", "3755 4391 44", "3807 4446 44", "3738 4403 76", "3922 1887 35", "3910 1863 80", "3964 1923 68", "3912 1874 16", "3932 1865 0", "3965 1884 36", "3968 1922 8", "3947 1855 11", "3889 1883 48", "3938 1878 40", "2514 2851 7", "2560 2840 50", "2558 2915 14", "2581 2914 43", "2554 2876 6", "2551 2904 22", "2592 2879 67", "2597 2864 71", "2605 2895 9", "2587 2888 14", "1940 2141 25", "1977 2133 36", "1975 2170 61", "1940 2186 65", "1947 2098 11", "1952 2173 23", "1932 2172 89", "1978 2171 37", "1931 2103 84", "2021 2105 95", "2162 790 73", "2161 794 62", "2110 759 86", "2151 772 89", "2188 813 56", "2185 740 91", "2097 735 74", "2111 734 45", "2131 756 11", "2154 774 31"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 350;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> platforms = {"3317 2799 84", "3301 2861 12", "3302 2791 40", "3252 2812 60", "3223 2806 45", "3296 2799 34", "3228 2861 94", "3224 2825 51", "3311 2787 80", "3291 2839 69", "4713 4276 24", "4695 4233 5", "4740 4260 20", "4713 4279 92", "4664 4224 44", "4745 4236 25", "4674 4274 33", "4705 4247 79", "4746 4225 97", "4748 4227 34", "2470 1750 66", "2500 1743 97", "2488 1712 31", "2514 1699 64", "2502 1688 48", "2450 1734 82", "2522 1726 0", "2448 1713 29", "2492 1694 76", "2448 1710 78", "986 4140 19", "973 4120 70", "1047 4093 15", "1002 4049 69", "986 4063 87", "963 4091 99", "963 4065 34", "991 4132 85", "1038 4097 15", "1035 4141 92", "2883 176 57", "2951 183 86", "2920 184 8", "2897 149 93", "2949 124 25", "2875 139 83", "2884 204 96", "2899 146 43", "2920 187 12", "2906 213 69"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 359;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> platforms = {"4557 2457 46", "4637 2444 42", "4607 2411 72", "4606 2441 24", "4633 2411 27", "4621 2480 22", "4620 2420 37", "4588 2456 30", "4560 2455 1", "4578 2419 13", "4578 4862 44", "4570 4925 37", "4597 4875 57", "4564 4944 57", "4574 4943 49", "4527 4925 40", "4578 4901 9", "4571 4948 96", "4591 4941 80", "4524 4898 47", "230 454 5", "204 409 88", "202 503 24", "137 466 72", "163 493 46", "171 487 69", "211 437 56", "150 418 3", "220 459 75", "202 488 72", "3154 1256 11", "3150 1253 7", "3203 1280 61", "3220 1224 54", "3239 1268 70", "3248 1220 58", "3189 1199 86", "3203 1282 24", "3234 1194 24", "3204 1279 19", "548 1548 52", "574 1555 77", "508 1537 56", "568 1592 6", "573 1560 78", "534 1599 49", "505 1610 96", "565 1588 3", "500 1598 10", "585 1524 18"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 429;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> platforms = {"3036 850 38", "3112 809 43", "3055 782 72", "3128 867 25", "3073 814 10", "3056 841 44", "3041 844 45", "3037 862 65", "3049 815 13", "3123 841 90", "4668 2217 59", "4715 2244 1", "4660 2224 10", "4668 2294 94", "4697 2275 53", "4689 2284 30", "4704 2300 14", "4652 2263 36", "4701 2271 52", "4669 2302 14", "1828 4113 69", "1785 4114 38", "1819 4135 30", "1779 4155 77", "1835 4159 32", "1857 4091 55", "1784 4109 37", "1800 4111 24", "1872 4097 65", "1875 4179 80", "3197 2298 82", "3147 2379 51", "3224 2360 84", "3187 2344 31", "3157 2384 94", "3217 2376 15", "3211 2315 32", "3206 2308 59", "3206 2307 11", "3170 2320 89", "2017 1448 33", "2027 1499 40", "2054 1466 20", "2074 1434 19", "2055 1443 12", "2028 1475 19", "2068 1497 7", "2062 1479 76", "2006 1482 6", "2044 1477 60"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 516;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> platforms = {"4119 1747 15", "4129 1747 61", "4121 1747 77", "4117 1759 62", "4126 1759 84", "4115 1765 20", "4116 1748 24", "4126 1747 60", "4121 1764 92", "4135 1759 45", "2979 3898 25", "2982 3891 35", "2982 3900 55", "2982 3894 91", "2987 3888 12", "2968 3888 77", "2988 3893 7", "2978 3891 37", "2977 3897 87", "2987 3894 58", "4627 3012 58", "4617 3024 72", "4634 3024 26", "4620 3018 62", "4621 3017 67", "4620 3016 69", "4626 3025 89", "4621 3013 41", "4617 3020 68", "4623 3021 23", "223 3336 36", "226 3347 53", "223 3337 31", "235 3336 63", "221 3338 98", "236 3343 57", "232 3328 90", "217 3327 34", "222 3337 86", "225 3331 62", "2767 4388 49", "2775 4387 10", "2778 4400 94", "2764 4396 11", "2769 4397 77", "2774 4392 71", "2775 4388 86", "2762 4403 57", "2763 4383 16", "2766 4397 75"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 425;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> platforms = {"4636 3088 15", "4629 3097 90", "4647 3090 98", "4637 3082 41", "4631 3081 39", "4628 3089 81", "4629 3086 78", "4638 3084 63", "4646 3094 60", "4631 3089 15", "1689 11 80", "1689 18 78", "1701 20 69", "1696 12 90", "1690 19 73", "1704 12 94", "1688 24 89", "1690 27 74", "1689 29 93", "1693 10 50", "1289 271 14", "1296 273 26", "1303 262 5", "1299 268 48", "1296 268 46", "1287 270 26", "1291 268 72", "1305 279 35", "1304 274 94", "1287 264 88", "3387 4396 47", "3377 4406 89", "3368 4409 23", "3386 4408 74", "3378 4413 95", "3379 4400 57", "3369 4404 77", "3375 4411 82", "3375 4412 5", "3384 4398 80", "2657 2397 26", "2663 2393 64", "2663 2408 23", "2655 2393 62", "2665 2394 51", "2661 2395 3", "2651 2407 70", "2661 2400 18", "2665 2398 29", "2648 2401 15"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 547;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> platforms = {"1179 4371 64", "1190 4379 67", "1186 4378 7", "1190 4382 75", "1176 4383 94", "1192 4372 55", "1173 4376 53", "1185 4378 75", "1191 4365 14", "1173 4370 96", "2558 4715 69", "2572 4712 7", "2574 4716 23", "2561 4730 39", "2577 4725 55", "2574 4728 43", "2559 4717 33", "2568 4728 45", "2578 4713 81", "2564 4723 81", "367 3432 64", "369 3423 4", "362 3427 97", "374 3421 54", "364 3432 24", "363 3437 38", "368 3435 56", "365 3432 22", "371 3431 5", "380 3425 37", "2780 4955 33", "2767 4949 83", "2769 4954 69", "2779 4952 56", "2778 4965 12", "2780 4959 93", "2772 4955 91", "2777 4958 64", "2776 4958 78", "2780 4953 56", "464 312 0", "461 324 75", "455 317 54", "474 320 51", "454 326 3", "462 315 59", "458 320 36", "469 307 19", "461 312 8", "456 324 49"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 510;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> platforms = {"152 2164 33", "146 2168 18", "156 2182 6", "162 2179 50", "158 2166 82", "154 2176 68", "146 2170 73", "148 2165 81", "145 2182 35", "149 2169 45", "1607 1232 84", "1594 1233 17", "1591 1234 31", "1607 1222 66", "1598 1218 45", "1606 1232 44", "1604 1233 78", "1603 1220 45", "1611 1216 67", "1600 1232 8", "2095 41 25", "2096 46 11", "2098 38 86", "2094 47 9", "2095 43 3", "2095 36 87", "2090 49 45", "2099 29 30", "2083 31 57", "2095 30 89", "3916 4124 9", "3921 4131 90", "3928 4137 6", "3915 4124 71", "3933 4136 13", "3928 4127 94", "3922 4131 76", "3923 4122 46", "3928 4120 3", "3920 4137 93", "4577 4104 90", "4570 4119 63", "4573 4103 5", "4571 4104 31", "4564 4109 66", "4560 4108 91", "4559 4113 14", "4560 4113 31", "4561 4111 46", "4562 4108 80"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 385;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> platforms = {"4774 4957 61", "4768 4945 57", "4782 4944 93", "4774 4947 13", "4773 4950 67", "4769 4962 16", "4770 4959 56", "4772 4954 91", "4767 4958 90", "4773 4954 81", "4101 3413 54", "4100 3405 82", "4107 3397 79", "4111 3400 61", "4106 3404 75", "4110 3399 8", "4117 3402 5", "4117 3410 40", "4105 3412 56", "4108 3411 45", "127 210 57", "126 206 39", "136 206 99", "124 205 73", "129 207 23", "122 213 79", "131 218 49", "136 214 3", "132 210 22", "123 209 56", "3827 1845 87", "3824 1857 11", "3821 1848 60", "3833 1860 38", "3825 1859 62", "3831 1843 29", "3823 1850 88", "3817 1856 84", "3834 1849 46", "3822 1843 29", "4528 1193 38", "4533 1179 71", "4524 1199 72", "4527 1195 98", "4524 1179 73", "4535 1194 63", "4530 1184 30", "4530 1198 75", "4536 1183 14", "4534 1190 77"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 804;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> platforms = {"4509 2756 4", "4514 2755 94", "4519 2757 71", "4507 2766 51", "4519 2761 37", "4521 2763 18", "4509 2765 59", "4516 2765 21", "4506 2761 71", "4510 2761 60", "2748 4868 36", "2744 4867 46", "2738 4874 59", "2751 4855 68", "2748 4872 38", "2736 4869 89", "2743 4867 53", "2754 4866 31", "2753 4855 80", "2754 4870 44", "2835 4023 58", "2823 4023 93", "2820 4024 6", "2824 4013 15", "2818 4012 91", "2825 4019 44", "2828 4014 3", "2832 4007 43", "2831 4012 46", "2817 4016 30", "4771 4108 13", "4771 4107 68", "4768 4110 26", "4774 4103 49", "4773 4107 3", "4778 4110 65", "4769 4114 27", "4771 4103 68", "4767 4112 13", "4779 4108 11", "3674 2747 31", "3674 2750 75", "3687 2759 28", "3678 2756 69", "3679 2757 51", "3688 2758 2", "3679 2752 7", "3672 2754 96", "3686 2758 45", "3677 2752 71"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 479;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> platforms = {"278 3613 51", "273 3621 82", "271 3612 52", "277 3620 75", "266 3618 3", "284 3622 42", "282 3610 90", "274 3618 13", "267 3612 50", "278 3611 6", "823 1934 5", "837 1929 68", "837 1925 6", "835 1935 64", "823 1928 57", "826 1923 57", "821 1927 32", "822 1934 61", "824 1922 0", "821 1929 95", "2568 1250 69", "2568 1235 86", "2564 1231 9", "2570 1241 7", "2565 1244 72", "2561 1244 35", "2563 1234 14", "2569 1244 14", "2567 1236 39", "2567 1246 15", "448 3131 23", "454 3132 16", "434 3127 91", "451 3127 1", "454 3120 82", "442 3117 20", "448 3135 71", "442 3126 1", "438 3131 99", "441 3120 21", "3310 2293 90", "3312 2300 37", "3309 2308 66", "3321 2298 33", "3312 2297 91", "3301 2296 9", "3302 2292 63", "3302 2289 10", "3308 2298 24", "3311 2300 2"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 318;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> platforms = {"382 2111 25", "380 2110 77", "378 2104 5", "386 2110 31", "388 2107 50", "373 2107 82", "384 2101 37", "389 2111 44", "382 2094 44", "384 2095 76", "362 4357 35", "354 4358 80", "356 4355 68", "349 4358 16", "366 4370 0", "347 4364 36", "351 4356 8", "351 4375 11", "365 4366 48", "365 4373 40", "4639 3079 7", "4646 3073 50", "4635 3076 14", "4630 3065 43", "4633 3079 6", "4628 3066 22", "4642 3074 67", "4632 3079 71", "4635 3084 9", "4636 3065 14", "26 810 25", "29 823 36", "28 816 61", "31 822 65", "24 821 11", "39 822 23", "38 818 89", "26 822 37", "40 808 84", "42 819 95", "1521 3904 73", "1514 3910 62", "1502 3906 86", "1507 3915 89", "1514 3898 56", "1519 3901 91", "1522 3914 74", "1521 3901 45", "1517 3907 11", "1505 3914 31"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 582;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> platforms = {"84 3501 46", "92 3509 42", "86 3498 72", "97 3495 24", "97 3500 27", "82 3507 22", "93 3502 37", "94 3509 30", "86 3495 1", "85 3507 13", "4979 2816 44", "4991 2818 37", "4986 2811 57", "4988 2820 57", "4992 2815 49", "4978 2814 40", "4992 2820 9", "4983 2817 96", "4988 2825 80", "4977 2819 47", "541 393 5", "549 390 88", "541 390 24", "530 386 72", "538 382 46", "548 382 69", "532 402 56", "547 401 3", "542 383 75", "537 385 72", "2014 1893 11", "2023 1903 7", "2014 1903 61", "2007 1902 54", "2027 1893 70", "2024 1897 58", "2013 1891 86", "2022 1902 24", "2017 1903 24", "2014 1906 19", "137 795 52", "129 803 77", "144 801 56", "139 786 6", "137 796 78", "126 786 49", "128 801 96", "137 786 3", "126 798 10", "134 786 18"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 513;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> platforms = {"1280 3030 64", "1281 3035 40", "1282 3036 74", "1286 3031 10", "1290 3038 44", "1297 3031 81", "1297 3033 17", "1291 3026 16", "1281 3019 85", "1293 3027 25", "2302 3811 13", "2302 3812 98", "2311 3827 62", "2301 3808 87", "2309 3814 55", "2297 3826 19", "2314 3826 94", "2304 3813 2", "2297 3818 3", "2294 3819 35", "1607 2739 68", "1619 2724 52", "1622 2730 4", "1619 2737 3", "1615 2729 85", "1623 2739 76", "1620 2725 99", "1610 2734 26", "1613 2740 14", "1619 2726 64", "3808 4614 29", "3796 4607 46", "3801 4600 79", "3798 4607 80", "3799 4615 62", "3794 4605 31", "3793 4614 18", "3790 4609 72", "3801 4614 50", "3791 4607 27", "722 4346 12", "724 4344 31", "727 4358 37", "719 4362 17", "738 4346 75", "720 4349 46", "724 4363 77", "730 4361 68", "721 4349 63", "729 4348 21"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 394;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> platforms = {"4722 1449 93", "4722 1464 84", "4730 1450 88", "4723 1464 11", "4724 1449 60", "4727 1457 72", "4730 1451 20", "4733 1454 42", "4734 1468 45", "4734 1454 18", "4906 2781 8", "4897 2775 32", "4914 2781 57", "4917 2770 60", "4898 2774 64", "4898 2779 14", "4908 2786 33", "4913 2780 61", "4902 2771 56", "4899 2784 9", "3978 2021 29", "3973 2014 40", "3981 2012 24", "3976 2011 60", "3982 2008 36", "3989 2022 94", "3978 2026 62", "3974 2025 63", "3971 2024 89", "3976 2015 3", "2458 1398 92", "2462 1397 44", "2462 1402 84", "2458 1405 74", "2472 1389 83", "2469 1398 22", "2459 1389 46", "2465 1392 6", "2457 1403 78", "2467 1388 24", "638 3565 5", "632 3554 40", "639 3564 38", "636 3559 2", "645 3556 6", "625 3555 64", "633 3564 54", "634 3567 11", "641 3569 36", "638 3564 3"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 383;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> platforms = {"2265 426 52", "2263 414 15", "2280 422 93", "2275 425 7", "2278 410 77", "2269 415 23", "2266 423 88", "2277 407 88", "2280 420 78", "2263 409 87", "4336 1762 14", "4335 1776 30", "4350 1780 24", "4331 1778 37", "4347 1779 66", "4341 1769 20", "4346 1767 23", "4347 1766 48", "4344 1772 73", "4339 1771 27", "3957 2458 49", "3968 2454 61", "3959 2457 38", "3967 2457 28", "3956 2464 18", "3969 2468 43", "3968 2462 25", "3968 2473 6", "3955 2467 44", "3963 2460 57", "4768 2520 3", "4771 2531 0", "4765 2537 69", "4764 2532 38", "4768 2537 95", "4763 2537 58", "4783 2529 55", "4763 2528 98", "4764 2535 89", "4779 2532 61", "794 4458 31", "804 4463 30", "799 4469 90", "797 4460 70", "809 4458 46", "798 4458 84", "791 4470 63", "807 4452 12", "798 4466 63", "792 4456 48"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 385;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> platforms = {"4201 4524 95", "4202 4530 13", "4199 4525 5", "4200 4528 95", "4198 4524 27", "4203 4523 35", "4201 4523 28", "4206 4530 87", "4209 4533 87", "4196 4519 7", "2480 4994 21", "2481 4979 25", "2478 4987 27", "2466 4994 20", "2472 4981 91", "2465 4998 75", "2478 4990 16", "2473 4993 71", "2481 4995 52", "2483 4998 45", "3119 4226 57", "3117 4225 24", "3131 4221 10", "3124 4215 0", "3124 4219 87", "3128 4214 83", "3127 4210 27", "3137 4207 72", "3132 4208 38", "3120 4222 89", "1792 4969 67", "1780 4964 68", "1790 4959 71", "1792 4964 46", "1773 4961 54", "1789 4950 93", "1776 4953 61", "1778 4958 19", "1793 4966 2", "1783 4969 0", "4574 2035 79", "4560 2042 6", "4567 2043 26", "4569 2037 90", "4560 2050 57", "4575 2053 71", "4560 2052 27", "4573 2048 80", "4559 2050 30", "4564 2044 98"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 412;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> platforms = {"3872 429 5", "3864 438 92", "3869 429 0", "3861 441 59", "3864 440 90", "3871 433 39", "3865 443 40", "3872 443 70", "3868 434 64", "3864 434 16", "1890 3657 67", "1888 3656 93", "1889 3641 55", "1884 3647 80", "1880 3656 81", "1880 3643 59", "1872 3650 33", "1883 3640 96", "1890 3643 59", "1890 3646 53", "3909 1505 68", "3899 1507 49", "3906 1511 28", "3908 1509 56", "3916 1518 17", "3913 1505 66", "3911 1514 73", "3916 1514 84", "3901 1502 92", "3910 1517 8", "4609 1467 54", "4608 1470 85", "4615 1480 7", "4614 1480 82", "4602 1470 95", "4607 1468 60", "4598 1474 36", "4600 1485 22", "4607 1474 73", "4606 1479 37", "3355 322 78", "3362 327 28", "3348 330 35", "3360 336 23", "3350 321 38", "3354 335 45", "3347 327 70", "3346 339 66", "3359 322 11", "3351 323 74"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 655;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> platforms = {"1612 2024 16", "1621 2023 99", "1623 2037 14", "1625 2020 49", "1617 2026 19", "1623 2020 89", "1612 2034 15", "1620 2037 84", "1607 2032 3", "1613 2023 96", "3512 2786 29", "3500 2773 30", "3512 2773 10", "3503 2780 51", "3505 2772 89", "3498 2783 37", "3517 2770 4", "3504 2781 40", "3510 2778 67", "3503 2768 10", "3850 2203 23", "3838 2210 56", "3853 2211 60", "3857 2210 6", "3837 2206 34", "3856 2209 31", "3855 2210 8", "3838 2203 6", "3857 2206 57", "3845 2213 62", "2573 2578 40", "2582 2582 95", "2562 2585 84", "2579 2584 61", "2562 2573 50", "2575 2590 73", "2582 2584 68", "2571 2580 57", "2576 2572 11", "2565 2590 73", "76 4244 78", "62 4246 52", "65 4247 25", "71 4245 1", "72 4242 14", "76 4250 6", "79 4241 43", "72 4247 59", "79 4240 79", "69 4242 51"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 291;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> platforms = {"998 632 1", "39 35 1", "618 743 1", "783 198 1", "211 387 1", "112 93 1", "277 364 1", "941 357 1", "944 791 1", "274 535 1", "997 515 1", "142 422 1", "650 908 1", "751 433 1", "595 528 1", "870 868 1", "452 500 1", "829 630 1", "486 288 1", "525 880 1", "276 266 1", "258 232 1", "215 420 1", "734 588 1", "616 531 1", "468 614 1", "830 157 1", "262 109 1", "947 737 1", "14 446 1", "405 573 1", "425 629 1", "195 187 1", "157 766 1", "115 455 1", "69 332 1", "247 118 1", "522 605 1", "525 976 1", "971 657 1", "800 393 1", "712 732 1", "800 231 1", "139 872 1", "59 776 1", "916 681 1", "714 623 1", "230 45 1", "650 219 1", "365 247 1"};
    int v = 61;
    int g = 49;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> platforms = {"608 402 1", "790 389 1", "989 766 1", "60 942 1", "972 985 1", "464 989 1", "729 428 1", "958 770 1", "308 597 1", "873 794 1", "833 967 1", "284 809 1", "783 725 1", "93 509 1", "446 745 1", "536 262 1", "272 87 1", "883 706 1", "986 460 1", "270 287 1", "921 58 1", "471 275 1", "199 54 1", "825 823 1", "923 825 1", "936 679 1", "950 1 1", "252 8 1", "907 678 1", "660 165 1", "977 191 1", "804 286 1", "307 447 1", "16 717 1", "873 498 1", "179 200 1", "4 498 1", "222 37 1", "310 163 1", "269 683 1", "196 150 1", "187 409 1", "522 564 1", "425 509 1", "572 393 1", "141 142 1", "334 652 1", "681 603 1", "748 711 1", "777 302 1"};
    int v = 20;
    int g = 54;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> platforms = {"114 52 1", "570 611 1", "689 490 1", "28 519 1", "751 856 1", "830 38 1", "246 195 1", "986 292 1", "211 134 1", "837 647 1", "179 565 1", "420 641 1", "616 836 1", "207 171 1", "875 189 1", "30 625 1", "60 23 1", "397 324 1", "340 187 1", "153 709 1", "667 167 1", "307 757 1", "614 225 1", "820 625 1", "124 53 1", "268 293 1", "810 591 1", "672 989 1", "741 64 1", "105 359 1", "574 410 1", "155 210 1", "605 265 1", "137 851 1", "686 376 1", "778 88 1", "231 679 1", "186 709 1", "567 509 1", "979 996 1", "243 292 1", "471 628 1", "534 911 1", "607 624 1", "725 91 1", "92 432 1", "901 840 1", "95 423 1", "45 831 1", "867 475 1"};
    int v = 39;
    int g = 91;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> platforms = {"213 921 1", "627 118 1", "242 405 1", "913 940 1", "653 595 1", "89 590 1", "171 199 1", "674 981 1", "5 123 1", "740 413 1", "980 507 1", "593 741 1", "398 755 1", "705 682 1", "971 153 1", "551 913 1", "334 20 1", "208 607 1", "411 873 1", "421 78 1", "467 51 1", "374 911 1", "423 796 1", "565 191 1", "878 424 1", "274 966 1", "100 941 1", "327 233 1", "762 952 1", "89 366 1", "119 246 1", "233 937 1", "141 347 1", "283 653 1", "619 140 1", "508 439 1", "11 923 1", "162 373 1", "340 907 1", "584 828 1", "909 218 1", "719 133 1", "639 402 1", "430 699 1", "946 980 1", "748 710 1", "362 685 1", "653 553 1", "768 486 1", "582 446 1"};
    int v = 13;
    int g = 4;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> platforms = {"209 522 1", "420 501 1", "994 120 1", "759 869 1", "431 55 1", "531 345 1", "517 452 1", "2 998 1", "496 98 1", "444 349 1", "932 409 1", "549 327 1", "132 59 1", "758 493 1", "906 487 1", "454 643 1", "710 415 1", "811 796 1", "575 629 1", "242 886 1", "449 236 1", "27 44 1", "401 477 1", "778 614 1", "800 849 1", "79 268 1", "444 400 1", "847 909 1", "465 319 1", "881 281 1", "610 67 1", "347 307 1", "945 983 1", "699 448 1", "803 963 1", "413 962 1", "28 503 1", "702 340 1", "238 975 1", "735 342 1", "610 767 1", "906 546 1", "529 445 1", "990 650 1", "847 81 1", "589 466 1", "444 853 1", "496 371 1", "425 406 1", "991 764 1"};
    int v = 50;
    int g = 29;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
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
    vector<string> platforms = {"83 562 1", "497 278 1", "639 140 1", "842 676 1", "800 797 1", "369 794 1", "482 784 1", "607 869 1", "313 2 1", "522 898 1", "99 217 1", "734 850 1", "347 429 1", "860 381 1", "755 195 1", "580 344 1", "331 790 1", "334 271 1", "594 546 1", "605 191 1", "448 49 1", "779 726 1", "78 163 1", "317 369 1", "47 421 1", "899 814 1", "349 561 1", "788 248 1", "383 754 1", "982 431 1", "220 718 1", "166 202 1", "613 980 1", "112 890 1", "166 708 1", "177 385 1", "619 938 1", "990 174 1", "488 593 1", "75 130 1", "936 665 1", "467 335 1", "636 232 1", "577 718 1", "480 586 1", "157 109 1", "694 819 1", "279 478 1", "111 444 1", "906 68 1"};
    int v = 39;
    int g = 97;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> platforms = {"745 875 1", "120 52 1", "688 839 1", "223 461 1", "105 999 1", "599 512 1", "736 67 1", "81 510 1", "531 365 1", "203 332 1", "0 950 1", "703 744 1", "402 377 1", "61 617 1", "801 98 1", "575 67 1", "879 433 1", "175 32 1", "754 398 1", "701 128 1", "597 443 1", "197 775 1", "957 668 1", "907 384 1", "169 356 1", "337 166 1", "836 816 1", "989 693 1", "789 299 1", "298 977 1", "212 730 1", "61 444 1", "605 659 1", "910 53 1", "490 114 1", "286 861 1", "560 170 1", "140 876 1", "709 300 1", "251 227 1", "389 61 1", "109 260 1", "300 98 1", "175 786 1", "695 99 1", "642 658 1", "420 523 1", "353 330 1", "661 105 1", "458 114 1"};
    int v = 1;
    int g = 47;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> platforms = {"781 992 1", "210 770 1", "744 952 1", "833 16 1", "779 734 1", "105 550 1", "427 599 1", "359 772 1", "149 602 1", "659 751 1", "181 407 1", "388 607 1", "21 645 1", "215 669 1", "155 893 1", "244 464 1", "453 191 1", "951 171 1", "748 925 1", "673 26 1", "135 901 1", "806 759 1", "38 979 1", "687 666 1", "870 119 1", "879 375 1", "408 746 1", "895 690 1", "139 552 1", "817 365 1", "415 80 1", "54 854 1", "522 119 1", "980 730 1", "107 304 1", "351 818 1", "912 188 1", "748 479 1", "174 474 1", "431 536 1", "207 40 1", "393 427 1", "244 779 1", "617 330 1", "30 317 1", "3 968 1", "30 681 1", "110 799 1", "418 130 1", "714 988 1"};
    int v = 87;
    int g = 80;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> platforms = {"55 554 1", "284 892 1", "839 328 1", "558 33 1", "8 793 1", "593 938 1", "670 246 1", "607 8 1", "456 993 1", "851 469 1", "40 50 1", "203 18 1", "640 585 1", "182 114 1", "839 669 1", "92 66 1", "510 696 1", "388 611 1", "400 521 1", "675 704 1", "96 684 1", "236 617 1", "550 630 1", "805 382 1", "356 212 1", "436 719 1", "768 35 1", "862 19 1", "417 150 1", "480 774 1", "498 510 1", "464 43 1", "614 687 1", "66 913 1", "300 953 1", "41 435 1", "417 625 1", "610 674 1", "50 597 1", "918 513 1", "132 236 1", "471 353 1", "612 414 1", "630 43 1", "449 502 1", "783 266 1", "858 929 1", "41 955 1", "570 535 1", "289 430 1"};
    int v = 68;
    int g = 43;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> platforms = {"856 973 1", "524 317 1", "439 134 1", "591 482 1", "934 586 1", "418 924 1", "125 934 1", "980 440 1", "393 524 1", "531 851 1", "821 990 1", "736 392 1", "547 803 1", "106 858 1", "70 600 1", "413 406 1", "362 175 1", "573 95 1", "256 354 1", "865 469 1", "111 61 1", "983 133 1", "951 518 1", "300 385 1", "111 165 1", "314 494 1", "375 32 1", "9 839 1", "371 959 1", "712 202 1", "237 910 1", "304 858 1", "213 123 1", "584 809 1", "299 385 1", "971 516 1", "627 602 1", "496 743 1", "170 134 1", "594 400 1", "640 266 1", "14 122 1", "585 525 1", "611 340 1", "95 284 1", "373 291 1", "850 400 1", "186 905 1", "844 194 1", "133 734 1"};
    int v = 89;
    int g = 59;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> platforms = {"9 13 1", "16 13 1", "12 5 1", "10 21 1", "7 23 1", "18 15 1", "16 1 1", "27 2 1", "18 23 1", "19 4 1", "12 30 1", "8 5 1", "15 14 1", "21 20 1", "5 23 1", "17 20 1", "23 29 1", "29 0 1", "6 16 1", "28 10 1", "13 21 1", "2 25 1", "10 20 1", "26 15 1", "28 3 1", "24 9 1", "15 23 1", "22 20 1", "27 25 1", "8 17 1", "5 15 1", "12 3 1", "19 19 1", "30 12 1", "29 21 1", "16 29 1", "13 26 1", "19 25 1", "13 12 1", "21 27 1", "5 8 1", "18 21 1", "13 1 1", "11 5 1", "6 27 1", "17 7 1", "24 15 1", "5 27 1", "3 22 1", "3 20 1"};
    int v = 61;
    int g = 49;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> platforms = {"22 28 1", "17 11 1", "23 15 1", "18 14 1", "8 0 1", "11 23 1", "22 9 1", "26 12 1", "3 8 1", "20 18 1", "9 11 1", "2 3 1", "27 17 1", "25 30 1", "11 10 1", "4 29 1", "0 29 1", "11 29 1", "22 30 1", "0 10 1", "14 0 1", "26 26 1", "23 8 1", "6 15 1", "26 21 1", "28 2 1", "7 24 1", "9 8 1", "8 17 1", "11 5 1", "14 19 1", "10 14 1", "4 27 1", "14 26 1", "13 8 1", "24 0 1", "7 18 1", "12 30 1", "28 15 1", "16 4 1", "14 18 1", "29 20 1", "3 16 1", "14 22 1", "22 8 1", "21 3 1", "16 0 1", "7 26 1", "25 6 1", "8 11 1"};
    int v = 9;
    int g = 42;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> platforms = {"11 7 1", "4 7 1", "30 16 1", "28 26 1", "4 2 1", "9 21 1", "16 13 1", "17 20 1", "16 17 1", "26 13 1", "9 29 1", "30 27 1", "6 21 1", "9 6 1", "15 22 1", "23 11 1", "14 30 1", "30 11 1", "20 16 1", "12 9 1", "5 25 1", "1 23 1", "5 30 1", "0 12 1", "12 21 1", "18 0 1", "30 10 1", "25 8 1", "11 27 1", "21 28 1", "29 24 1", "28 30 1", "18 12 1", "2 8 1", "7 23 1", "3 7 1", "22 0 1", "10 29 1", "30 29 1", "18 15 1", "19 12 1", "21 7 1", "16 19 1", "19 23 1", "8 12 1", "19 2 1", "19 22 1", "13 29 1", "3 3 1", "17 2 1"};
    int v = 20;
    int g = 71;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> platforms = {"6 0 1", "4 12 1", "3 25 1", "17 2 1", "22 7 1", "17 25 1", "9 7 1", "20 13 1", "8 22 1", "10 28 1", "17 26 1", "0 0 1", "27 8 1", "14 30 1", "2 26 1", "23 9 1", "11 28 1", "24 7 1", "30 14 1", "6 16 1", "10 22 1", "16 21 1", "9 9 1", "6 4 1", "2 0 1", "26 1 1", "4 9 1", "2 3 1", "18 4 1", "1 29 1", "16 26 1", "0 9 1", "20 24 1", "7 12 1", "23 6 1", "27 4 1", "1 24 1", "8 0 1", "3 20 1", "7 6 1", "19 28 1", "0 29 1", "19 23 1", "11 3 1", "6 26 1", "6 8 1", "3 21 1", "17 6 1", "7 2 1", "14 11 1"};
    int v = 79;
    int g = 99;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> platforms = {"30 15 1", "1 0 1", "26 14 1", "20 30 1", "25 16 1", "10 25 1", "28 20 1", "22 28 1", "13 28 1", "0 24 1", "26 8 1", "3 8 1", "27 3 1", "2 10 1", "19 18 1", "14 27 1", "10 4 1", "18 22 1", "9 17 1", "3 27 1", "23 0 1", "4 3 1", "3 21 1", "24 14 1", "29 19 1", "6 3 1", "30 10 1", "4 25 1", "19 15 1", "11 10 1", "6 2 1", "26 28 1", "23 23 1", "11 13 1", "29 1 1", "14 6 1", "22 22 1", "5 18 1", "6 6 1", "1 25 1", "23 24 1", "4 4 1", "19 14 1", "29 18 1", "30 24 1", "25 4 1", "20 16 1", "27 16 1", "2 2 1", "10 18 1"};
    int v = 26;
    int g = 36;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> platforms = {"2 9 1", "1 28 1", "0 17 1", "3 2 1", "4 30 1", "15 5 1", "26 24 1", "17 16 1", "24 15 1", "14 5 1", "29 5 1", "28 8 1", "5 29 1", "8 4 1", "0 7 1", "23 8 1", "14 4 1", "18 11 1", "22 28 1", "30 7 1", "7 26 1", "3 23 1", "12 8 1", "5 8 1", "24 24 1", "29 23 1", "5 9 1", "12 23 1", "2 24 1", "9 20 1", "7 7 1", "27 9 1", "7 13 1", "6 16 1", "25 13 1", "10 26 1", "23 2 1", "4 0 1", "28 3 1", "28 7 1", "6 12 1", "6 10 1", "13 6 1", "16 8 1", "6 17 1", "28 2 1", "10 9 1", "9 0 1", "7 20 1", "7 24 1"};
    int v = 100;
    int g = 6;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> platforms = {"4 15 1", "9 11 1", "0 1 1", "8 9 1", "12 4 1", "3 9 1", "0 3 1", "19 2 1", "1 6 1", "30 28 1", "13 11 1", "8 18 1", "6 19 1", "24 14 1", "9 3 1", "17 3 1", "27 1 1", "14 20 1", "3 12 1", "10 8 1", "19 7 1", "5 25 1", "5 26 1", "6 27 1", "19 19 1", "28 27 1", "15 0 1", "19 29 1", "2 2 1", "20 13 1", "2 3 1", "27 28 1", "15 18 1", "23 21 1", "30 14 1", "28 6 1", "5 8 1", "5 18 1", "29 16 1", "23 16 1", "19 15 1", "11 7 1", "14 11 1", "15 16 1", "29 2 1", "13 1 1", "29 24 1", "18 2 1", "24 17 1", "11 8 1"};
    int v = 53;
    int g = 6;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> platforms = {"3 29 1", "5 28 1", "11 1 1", "24 10 1", "27 19 1", "6 21 1", "18 12 1", "15 28 1", "1 10 1", "3 5 1", "9 6 1", "11 6 1", "8 28 1", "29 7 1", "0 28 1", "16 0 1", "16 5 1", "3 2 1", "15 0 1", "25 29 1", "13 28 1", "2 8 1", "13 14 1", "29 14 1", "20 21 1", "15 14 1", "5 11 1", "12 23 1", "16 28 1", "8 20 1", "12 21 1", "13 17 1", "27 21 1", "2 29 1", "29 28 1", "5 13 1", "25 17 1", "20 20 1", "4 7 1", "18 4 1", "11 9 1", "30 23 1", "30 20 1", "8 6 1", "13 8 1", "8 27 1", "21 25 1", "7 12 1", "10 27 1", "9 16 1"};
    int v = 95;
    int g = 14;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> platforms = {"19 19 1", "26 19 1", "14 18 1", "4 20 1", "26 16 1", "24 24 1", "28 20 1", "10 29 1", "18 1 1", "29 28 1", "19 10 1", "29 20 1", "2 5 1", "9 16 1", "17 14 1", "6 25 1", "22 11 1", "7 10 1", "0 16 1", "8 19 1", "13 23 1", "17 29 1", "9 28 1", "20 9 1", "27 17 1", "27 5 1", "25 6 1", "11 14 1", "17 4 1", "16 15 1", "12 26 1", "15 16 1", "5 12 1", "25 26 1", "16 8 1", "0 1 1", "8 4 1", "25 9 1", "24 10 1", "19 4 1", "13 17 1", "21 11 1", "4 25 1", "16 21 1", "3 7 1", "24 25 1", "22 13 1", "27 1 1", "17 16 1", "17 27 1"};
    int v = 98;
    int g = 8;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> platforms = {"28 1 1", "15 29 1", "4 0 1", "25 25 1", "25 14 1", "20 30 1", "25 22 1", "30 13 1", "12 4 1", "0 23 1", "21 15 1", "9 15 1", "26 5 1", "2 11 1", "21 4 1", "21 30 1", "0 29 1", "1 29 1", "23 30 1", "22 10 1", "26 9 1", "13 22 1", "29 2 1", "10 16 1", "13 6 1", "16 24 1", "22 2 1", "27 24 1", "13 9 1", "14 13 1", "17 15 1", "1 16 1", "20 17 1", "25 24 1", "16 7 1", "19 9 1", "22 26 1", "27 0 1", "1 23 1", "18 17 1", "6 18 1", "26 19 1", "14 18 1", "30 15 1", "10 9 1", "14 25 1", "0 13 1", "10 14 1", "2 26 1", "14 6 1"};
    int v = 58;
    int g = 24;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> platforms = {"9 13 1", "16 13 1", "12 5 1", "10 21 1", "7 23 1", "18 15 1", "16 1 1", "27 2 1", "18 23 1", "19 4 1", "12 30 1", "8 5 1", "15 14 1", "21 20 1", "5 23 1", "17 20 1", "23 29 1", "29 0 1", "6 16 1", "28 10 1", "13 21 1", "2 25 1", "10 20 1", "26 15 1", "28 3 1", "24 9 1", "15 23 1", "22 20 1", "27 25 1", "8 17 1", "5 15 1", "12 3 1", "19 19 1", "30 12 1", "29 21 1", "16 29 1", "13 26 1", "19 25 1", "13 12 1", "21 27 1", "5 8 1", "18 21 1", "13 1 1", "11 5 1", "6 27 1", "17 7 1", "24 15 1", "5 27 1", "3 22 1", "3 20 1"};
    int v = 61;
    int g = 9;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> platforms = {"22 28 1", "17 11 1", "23 15 1", "18 14 1", "8 0 1", "11 23 1", "22 9 1", "26 12 1", "3 8 1", "20 18 1", "9 11 1", "2 3 1", "27 17 1", "25 30 1", "11 10 1", "4 29 1", "0 29 1", "11 29 1", "22 30 1", "0 10 1", "14 0 1", "26 26 1", "23 8 1", "6 15 1", "26 21 1", "28 2 1", "7 24 1", "9 8 1", "8 17 1", "11 5 1", "14 19 1", "10 14 1", "4 27 1", "14 26 1", "13 8 1", "24 0 1", "7 18 1", "12 30 1", "28 15 1", "16 4 1", "14 18 1", "29 20 1", "3 16 1", "14 22 1", "22 8 1", "21 3 1", "16 0 1", "7 26 1", "25 6 1", "8 11 1"};
    int v = 9;
    int g = 2;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> platforms = {"11 7 1", "4 7 1", "30 16 1", "28 26 1", "4 2 1", "9 21 1", "16 13 1", "17 20 1", "16 17 1", "26 13 1", "9 29 1", "30 27 1", "6 21 1", "9 6 1", "15 22 1", "23 11 1", "14 30 1", "30 11 1", "20 16 1", "12 9 1", "5 25 1", "1 23 1", "5 30 1", "0 12 1", "12 21 1", "18 0 1", "30 10 1", "25 8 1", "11 27 1", "21 28 1", "29 24 1", "28 30 1", "18 12 1", "2 8 1", "7 23 1", "3 7 1", "22 0 1", "10 29 1", "30 29 1", "18 15 1", "19 12 1", "21 7 1", "16 19 1", "19 23 1", "8 12 1", "19 2 1", "19 22 1", "13 29 1", "3 3 1", "17 2 1"};
    int v = 20;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> platforms = {"6 0 1", "4 12 1", "3 25 1", "17 2 1", "22 7 1", "17 25 1", "9 7 1", "20 13 1", "8 22 1", "10 28 1", "17 26 1", "0 0 1", "27 8 1", "14 30 1", "2 26 1", "23 9 1", "11 28 1", "24 7 1", "30 14 1", "6 16 1", "10 22 1", "16 21 1", "9 9 1", "6 4 1", "2 0 1", "26 1 1", "4 9 1", "2 3 1", "18 4 1", "1 29 1", "16 26 1", "0 9 1", "20 24 1", "7 12 1", "23 6 1", "27 4 1", "1 24 1", "8 0 1", "3 20 1", "7 6 1", "19 28 1", "0 29 1", "19 23 1", "11 3 1", "6 26 1", "6 8 1", "3 21 1", "17 6 1", "7 2 1", "14 11 1"};
    int v = 79;
    int g = 9;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> platforms = {"30 15 1", "1 0 1", "26 14 1", "20 30 1", "25 16 1", "10 25 1", "28 20 1", "22 28 1", "13 28 1", "0 24 1", "26 8 1", "3 8 1", "27 3 1", "2 10 1", "19 18 1", "14 27 1", "10 4 1", "18 22 1", "9 17 1", "3 27 1", "23 0 1", "4 3 1", "3 21 1", "24 14 1", "29 19 1", "6 3 1", "30 10 1", "4 25 1", "19 15 1", "11 10 1", "6 2 1", "26 28 1", "23 23 1", "11 13 1", "29 1 1", "14 6 1", "22 22 1", "5 18 1", "6 6 1", "1 25 1", "23 24 1", "4 4 1", "19 14 1", "29 18 1", "30 24 1", "25 4 1", "20 16 1", "27 16 1", "2 2 1", "10 18 1"};
    int v = 26;
    int g = 6;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> platforms = {"2 9 1", "1 28 1", "0 17 1", "3 2 1", "4 30 1", "15 5 1", "26 24 1", "17 16 1", "24 15 1", "14 5 1", "29 5 1", "28 8 1", "5 29 1", "8 4 1", "0 7 1", "23 8 1", "14 4 1", "18 11 1", "22 28 1", "30 7 1", "7 26 1", "3 23 1", "12 8 1", "5 8 1", "24 24 1", "29 23 1", "5 9 1", "12 23 1", "2 24 1", "9 20 1", "7 7 1", "27 9 1", "7 13 1", "6 16 1", "25 13 1", "10 26 1", "23 2 1", "4 0 1", "28 3 1", "28 7 1", "6 12 1", "6 10 1", "13 6 1", "16 8 1", "6 17 1", "28 2 1", "10 9 1", "9 0 1", "7 20 1", "7 24 1"};
    int v = 100;
    int g = 6;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> platforms = {"4 15 1", "9 11 1", "0 1 1", "8 9 1", "12 4 1", "3 9 1", "0 3 1", "19 2 1", "1 6 1", "30 28 1", "13 11 1", "8 18 1", "6 19 1", "24 14 1", "9 3 1", "17 3 1", "27 1 1", "14 20 1", "3 12 1", "10 8 1", "19 7 1", "5 25 1", "5 26 1", "6 27 1", "19 19 1", "28 27 1", "15 0 1", "19 29 1", "2 2 1", "20 13 1", "2 3 1", "27 28 1", "15 18 1", "23 21 1", "30 14 1", "28 6 1", "5 8 1", "5 18 1", "29 16 1", "23 16 1", "19 15 1", "11 7 1", "14 11 1", "15 16 1", "29 2 1", "13 1 1", "29 24 1", "18 2 1", "24 17 1", "11 8 1"};
    int v = 53;
    int g = 6;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> platforms = {"3 29 1", "5 28 1", "11 1 1", "24 10 1", "27 19 1", "6 21 1", "18 12 1", "15 28 1", "1 10 1", "3 5 1", "9 6 1", "11 6 1", "8 28 1", "29 7 1", "0 28 1", "16 0 1", "16 5 1", "3 2 1", "15 0 1", "25 29 1", "13 28 1", "2 8 1", "13 14 1", "29 14 1", "20 21 1", "15 14 1", "5 11 1", "12 23 1", "16 28 1", "8 20 1", "12 21 1", "13 17 1", "27 21 1", "2 29 1", "29 28 1", "5 13 1", "25 17 1", "20 20 1", "4 7 1", "18 4 1", "11 9 1", "30 23 1", "30 20 1", "8 6 1", "13 8 1", "8 27 1", "21 25 1", "7 12 1", "10 27 1", "9 16 1"};
    int v = 95;
    int g = 4;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> platforms = {"19 19 1", "26 19 1", "14 18 1", "4 20 1", "26 16 1", "24 24 1", "28 20 1", "10 29 1", "18 1 1", "29 28 1", "19 10 1", "29 20 1", "2 5 1", "9 16 1", "17 14 1", "6 25 1", "22 11 1", "7 10 1", "0 16 1", "8 19 1", "13 23 1", "17 29 1", "9 28 1", "20 9 1", "27 17 1", "27 5 1", "25 6 1", "11 14 1", "17 4 1", "16 15 1", "12 26 1", "15 16 1", "5 12 1", "25 26 1", "16 8 1", "0 1 1", "8 4 1", "25 9 1", "24 10 1", "19 4 1", "13 17 1", "21 11 1", "4 25 1", "16 21 1", "3 7 1", "24 25 1", "22 13 1", "27 1 1", "17 16 1", "17 27 1"};
    int v = 98;
    int g = 8;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> platforms = {"28 1 1", "15 29 1", "4 0 1", "25 25 1", "25 14 1", "20 30 1", "25 22 1", "30 13 1", "12 4 1", "0 23 1", "21 15 1", "9 15 1", "26 5 1", "2 11 1", "21 4 1", "21 30 1", "0 29 1", "1 29 1", "23 30 1", "22 10 1", "26 9 1", "13 22 1", "29 2 1", "10 16 1", "13 6 1", "16 24 1", "22 2 1", "27 24 1", "13 9 1", "14 13 1", "17 15 1", "1 16 1", "20 17 1", "25 24 1", "16 7 1", "19 9 1", "22 26 1", "27 0 1", "1 23 1", "18 17 1", "6 18 1", "26 19 1", "14 18 1", "30 15 1", "10 9 1", "14 25 1", "0 13 1", "10 14 1", "2 26 1", "14 6 1"};
    int v = 58;
    int g = 4;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> platforms = {"29 16 3379", "19 27 1355", "24 12 9500", "20 23 7501", "25 4 9144", "26 12 5202", "8 26 760", "25 30 33", "25 22 6403", "12 16 8539", "0 3 5159", "26 11 9913", "2 17 7591", "18 14 7411", "29 5 8434", "10 26 135", "9 8 1797", "16 1 8272", "20 3 2770", "20 10 7412", "6 20 6618", "28 16 2293", "18 18 4087", "28 1 2110", "6 14 5481", "30 5 5287", "27 3 2845", "1 9 2547", "14 17 847", "11 12 297", "27 8 9058", "20 25 5860", "3 24 1020", "7 29 1097", "5 10 1259", "0 12 1167", "14 6 8166", "29 21 7661", "4 1 2557", "29 8 3297", "24 25 4353", "10 18 9462", "5 22 7615", "6 22 9360", "11 4 7043", "18 5 5591", "5 9 4629", "13 21 7514", "22 6 3948", "13 13 2602"};
    int v = 61;
    int g = 9;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 156557;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> platforms = {"17 2 4279", "10 11 2307", "5 10 7144", "1 12 6837", "27 30 5716", "5 8 8840", "0 7 5379", "4 1 3695", "5 26 7179", "26 0 888", "30 1 7826", "14 12 1812", "29 29 3773", "17 7 1091", "16 24 5992", "20 2 5173", "3 3 6135", "24 4 3542", "2 16 6219", "23 26 8167", "11 26 9111", "20 19 794", "12 6 8791", "9 4 5338", "27 29 467", "20 9 34", "22 27 2792", "2 10 910", "25 21 3164", "18 0 9511", "26 25 7325", "11 16 8603", "2 9 1657", "18 9 5994", "8 25 2750", "2 0 3652", "21 22 2488", "19 26 781", "17 15 5654", "17 22 6193", "0 17 3479", "30 26 5606", "21 0 8212", "8 30 5967", "5 14 4457", "9 26 9993", "29 6 2067", "23 1 5037", "10 14 2475", "17 19 5481"};
    int v = 93;
    int g = 4;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 152148;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> platforms = {"4 30 4401", "0 4 1837", "3 25 5409", "2 22 2812", "17 25 8049", "7 20 9041", "8 22 5912", "28 17 5579", "0 0 7977", "8 14 4950", "2 26 3152", "9 11 9969", "24 7 3480", "14 6 1631", "10 22 3205", "21 9 3249", "6 4 6467", "0 26 1056", "4 9 6151", "3 18 6451", "1 29 9401", "26 0 3235", "20 24 609", "12 23 6249", "27 4 687", "24 8 8658", "3 20 9534", "6 19 2337", "0 29 4574", "23 11 2163", "6 26 387", "8 3 5590", "17 6 4257", "2 14 2092", "7 5 3775", "15 1 5846", "26 14 4212", "30 25 6732", "10 25 3334", "20 22 6536", "13 28 9791", "24 26 3018", "3 8 2997", "3 2 7573", "19 18 2824", "27 10 6822", "18 22 3447", "17 3 727", "23 0 6591", "3 3 8833"};
    int v = 78;
    int g = 9;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 156847;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> platforms = {"16 10 6078", "24 9 7269", "12 8 2764", "6 12 8622", "1 25 8481", "15 9 4268", "12 9 8190", "11 0 9008", "1 1 165", "19 6 3867", "21 9 4184", "15 27 1521", "6 7 2858", "12 7 893", "0 22 1444", "20 13 3436", "23 24 4484", "7 16 1306", "26 24 2517", "16 15 1326", "19 12 4401", "22 28 3914", "6 13 8884", "5 1 1492", "29 16 369", "11 8 5280", "3 25 6030", "25 30 4041", "25 26 6925", "9 28 9961", "24 2 3937", "26 23 5495", "9 25 8663", "0 25 1464", "18 13 9390", "27 24 9104", "5 30 6073", "8 1 3959", "27 29 192", "22 23 3089", "11 14 7970", "20 14 5636", "25 27 6147", "30 13 3852", "28 13 3746", "4 11 7741", "7 15 137", "8 5 8519", "14 19 6062", "3 30 3186"};
    int v = 25;
    int g = 7;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 129255;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> platforms = {"10 19 239", "3 10 590", "17 13 7023", "12 21 9435", "27 28 3955", "24 19 1092", "26 23 423", "14 30 4173", "4 6 9473", "26 15 1302", "18 30 8804", "6 14 8615", "11 10 2006", "17 24 963", "24 29 8637", "18 1 7768", "14 16 1178", "3 7 1356", "29 15 6645", "29 19 2570", "27 26 5161", "28 29 3281", "5 23 9025", "10 7 8726", "16 14 8262", "23 2 114", "30 2 8747", "2 2 2522", "15 15 1633", "13 2 6701", "1 4 8652", "8 9 7856", "21 3 8240", "23 7 4023", "7 18 7920", "9 18 1476", "30 18 7058", "16 27 274", "10 27 715", "14 20 1657", "15 30 4918", "21 13 1796", "10 28 3857", "16 17 1137", "8 17 7155", "23 28 3495", "8 2 3867", "17 2 5360", "13 9 1194", "28 11 9145"};
    int v = 39;
    int g = 7;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 158240;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> platforms = {"12 3 1953", "24 13 793", "26 17 857", "14 5 5603", "25 24 9462", "8 29 164", "8 14 9922", "5 2 5646", "9 18 9170", "7 15 1024", "14 18 5864", "24 23 9141", "19 25 5187", "6 19 7388", "28 19 1544", "30 8 7979", "22 13 2591", "9 5 4313", "12 9 3791", "26 0 5784", "28 27 7277", "22 21 1665", "24 1 966", "6 7 8189", "4 16 9246", "11 15 8010", "1 8 5506", "16 15 9709", "3 29 654", "2 18 7710", "28 29 6234", "18 22 7873", "30 0 9484", "8 16 4064", "9 8 9780", "1 27 1294", "16 2 3537", "19 19 1141", "17 16 7682", "30 28 1423", "21 23 3269", "9 10 7956", "11 18 9358", "13 29 81", "19 13 1748", "5 14 3348", "6 1 9662", "23 21 9544", "28 9 3367", "2 12 6313"};
    int v = 57;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 173589;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> platforms = {"18 18 7338", "30 11 477", "27 0 2406", "17 30 3389", "21 21 1625", "13 11 9311", "6 22 3521", "23 4 5595", "10 29 3013", "19 1 7743", "21 12 5874", "3 20 1137", "26 20 1989", "3 7 9490", "7 9 3231", "23 12 3463", "13 5 9672", "10 9 160", "29 22 7650", "27 23 7828", "23 25 4186", "27 16 530", "19 6 8031", "22 8 6094", "13 17 2582", "7 17 1366", "9 11 4093", "7 19 773", "27 8 4371", "17 27 2739", "18 15 4665", "5 21 6532", "22 29 610", "1 24 338", "30 18 141", "7 0 2925", "25 26 1179", "16 1 4227", "8 19 5159", "3 0 3513", "19 18 2960", "0 0 4079", "10 1 7934", "14 7 913", "2 18 1794", "4 25 3145", "22 4 9719", "12 19 7444", "26 11 8184", "15 13 4547"};
    int v = 97;
    int g = 6;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 139384;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> platforms = {"25 7 9541", "11 27 3976", "23 17 8867", "26 4 9708", "5 11 2396", "19 23 9417", "17 22 7095", "16 12 1469", "20 1 3807", "3 29 4887", "13 19 5357", "24 18 6139", "15 5 3108", "24 7 2194", "23 4 4043", "9 18 5762", "25 26 5845", "23 28 7207", "13 26 6302", "19 22 6680", "10 23 6413", "25 6 4575", "27 22 1374", "3 6 7018", "29 3 633", "1 20 1694", "15 7 1209", "15 14 2186", "8 9 1987", "20 13 9313", "23 30 1795", "6 21 9695", "8 4 4499", "26 7 8171", "8 26 3971", "9 6 9776", "21 26 7847", "6 6 6069", "21 5 1392", "24 21 3622", "0 27 8571", "2 25 6953", "21 0 7602", "14 4 1910", "2 15 1754", "4 11 1827", "11 21 4029", "14 7 2384", "1 4 8074", "30 16 9980"};
    int v = 47;
    int g = 5;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 158784;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> platforms = {"0 2 2628", "21 7 9667", "4 25 6548", "5 24 40", "4 4 7023", "19 15 6934", "10 20 7267", "24 30 2986", "21 29 3447", "27 2 7840", "8 18 4261", "21 12 2046", "22 29 3634", "18 28 1445", "2 13 8800", "10 23 2765", "16 11 6987", "3 2 2136", "1 19 5578", "4 2 5174", "21 9 8692", "0 9 1615", "6 17 1079", "1 4 5146", "24 1 6852", "9 4 5468", "6 15 4263", "22 1 6383", "26 11 6628", "8 22 2065", "11 1 8607", "19 7 4391", "28 11 8444", "25 13 3109", "25 1 5282", "28 18 2836", "9 7 4260", "10 6 6880", "20 28 272", "20 24 6723", "27 4 5629", "9 3 7560", "3 18 1748", "26 16 8794", "21 22 1126", "0 8 9776", "0 15 3315", "15 13 5304", "1 5 6354", "17 18 1683"};
    int v = 23;
    int g = 7;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 120488;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> platforms = {"3 25 5376", "30 11 7229", "10 28 1072", "24 29 9622", "11 4 4041", "9 25 5834", "13 19 4520", "0 3 3185", "11 27 1864", "17 11 6672", "4 28 3833", "3 16 6698", "3 6 8406", "15 21 4763", "14 11 4305", "26 12 3364", "5 5 1793", "12 4 2303", "14 25 4169", "0 25 8460", "20 26 2782", "5 8 770", "10 12 2472", "16 18 4805", "26 2 5074", "5 15 283", "1 18 4925", "11 5 6824", "29 2 7718", "23 11 3667", "10 22 9444", "23 29 9935", "8 0 4096", "23 25 3247", "23 26 6217", "12 27 9957", "10 7 6325", "9 6 4815", "30 29 9312", "14 28 9061", "20 23 7652", "23 21 1726", "5 2 5085", "19 11 7509", "26 17 2901", "30 0 7854", "4 13 472", "28 24 3158", "12 29 5672", "17 0 1351"};
    int v = 44;
    int g = 5;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 139183;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> platforms = {"2877 0 1", "0 3322 1", "2203 0 1", "3655 5000 1", "0 4923 1", "5000 2871 1", "0 4608 1", "0 2801 1", "438 5000 1", "5000 3942 1", "5000 300 1", "5000 537 1", "5000 1116 1", "0 1558 1", "5000 354 1", "3320 0 1", "0 4312 1", "5000 397 1", "0 3819 1", "5000 3426 1", "5000 4622 1", "3711 5000 1", "4315 5000 1", "2438 0 1", "5000 3912 1", "0 4453 1", "1008 0 1", "0 2266 1", "0 4010 1", "5000 4233 1", "0 3810 1", "4802 0 1", "818 0 1", "0 4764 1", "4481 0 1", "5000 165 1", "981 5000 1", "949 5000 1", "413 5000 1", "0 2231 1", "412 5000 1", "0 1519 1", "2758 5000 1", "2431 5000 1", "1075 0 1", "0 1631 1", "1643 5000 1", "0 1867 1", "4360 0 1", "687 0 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> platforms = {"1751 5000 1", "5000 1618 1", "1865 0 1", "3279 5000 1", "4353 5000 1", "5000 893 1", "0 772 1", "1100 0 1", "5000 1225 1", "5000 4778 1", "5000 2319 1", "5000 2840 1", "2453 5000 1", "1794 5000 1", "636 0 1", "0 383 1", "5000 3074 1", "3155 0 1", "4651 0 1", "3327 5000 1", "2743 5000 1", "0 3526 1", "1219 5000 1", "4520 0 1", "5000 4317 1", "4974 0 1", "5000 924 1", "1452 5000 1", "1867 0 1", "5000 113 1", "0 3046 1", "1158 5000 1", "2163 0 1", "4351 0 1", "2133 0 1", "2673 5000 1", "428 5000 1", "5000 1811 1", "5000 541 1", "4402 0 1", "5000 478 1", "1508 5000 1", "2370 5000 1", "0 1019 1", "1414 5000 1", "1307 5000 1", "0 857 1", "5000 4417 1", "5000 3085 1", "0 1706 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> platforms = {"1856 0 1", "0 3605 1", "760 5000 1", "0 1779 1", "5000 1168 1", "4394 5000 1", "4197 5000 1", "5000 3889 1", "3363 0 1", "4291 0 1", "4940 5000 1", "916 5000 1", "5000 3902 1", "2825 5000 1", "0 1870 1", "1403 5000 1", "0 2531 1", "5000 4232 1", "6 0 1", "282 5000 1", "3975 0 1", "5000 1068 1", "1036 5000 1", "230 5000 1", "740 5000 1", "3173 0 1", "0 382 1", "2752 5000 1", "5000 4397 1", "0 968 1", "0 3185 1", "431 0 1", "1482 0 1", "1622 0 1", "5000 3260 1", "1165 0 1", "178 5000 1", "2134 5000 1", "5000 2225 1", "5000 1144 1", "3395 5000 1", "0 3399 1", "0 2403 1", "1646 0 1", "2887 0 1", "5000 1442 1", "4791 0 1", "5000 780 1", "1904 0 1", "4616 0 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> platforms = {"2629 0 1", "2144 5000 1", "5000 1713 1", "5000 795 1", "5000 1959 1", "5000 265 1", "5000 3782 1", "0 654 1", "5000 4005 1", "162 5000 1", "0 1038 1", "921 0 1", "0 2570 1", "5000 12 1", "5000 123 1", "5000 4002 1", "4459 5000 1", "895 0 1", "0 4551 1", "4055 5000 1", "0 1214 1", "2812 0 1", "0 1218 1", "5000 1234 1", "0 4327 1", "0 2437 1", "2481 0 1", "5000 2204 1", "3624 0 1", "598 0 1", "0 174 1", "66 5000 1", "785 5000 1", "2905 5000 1", "5000 4916 1", "2864 0 1", "5000 107 1", "0 2958 1", "4699 5000 1", "2582 5000 1", "0 1904 1", "0 1624 1", "0 424 1", "3706 5000 1", "4612 0 1", "3308 0 1", "0 1023 1", "4075 0 1", "171 5000 1", "4249 0 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> platforms = {"620 5000 1", "3140 0 1", "5000 1186 1", "2770 5000 1", "5000 2854 1", "5000 103 1", "3905 0 1", "5000 1295 1", "5000 2322 1", "1627 0 1", "615 5000 1", "0 4233 1", "1965 5000 1", "0 2327 1", "0 3614 1", "5000 3315 1", "5000 3919 1", "0 2515 1", "2104 0 1", "5000 4266 1", "5000 530 1", "3532 5000 1", "5000 2345 1", "0 19 1", "3812 0 1", "0 3899 1", "3971 5000 1", "0 1856 1", "1046 5000 1", "0 327 1", "3949 5000 1", "439 0 1", "0 698 1", "2031 5000 1", "2916 5000 1", "0 1671 1", "0 4466 1", "3852 5000 1", "0 3429 1", "3468 0 1", "0 1579 1", "5000 828 1", "712 5000 1", "5000 858 1", "5000 3985 1", "2946 0 1", "5000 2603 1", "0 3477 1", "4211 0 1", "2522 0 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> platforms = {"0 3601 1", "3159 5000 1", "0 4209 1", "1405 5000 1", "5000 3288 1", "0 4065 1", "4157 5000 1", "4561 0 1", "2179 0 1", "4860 0 1", "0 131 1", "0 4361 1", "5000 3251 1", "0 1907 1", "4833 0 1", "3890 5000 1", "0 49 1", "2934 5000 1", "0 2009 1", "5000 1594 1", "2654 5000 1", "4255 5000 1", "5000 2331 1", "2774 0 1", "1652 5000 1", "0 1638 1", "0 3568 1", "0 1029 1", "0 107 1", "0 406 1", "300 5000 1", "0 3938 1", "5000 2597 1", "5000 4916 1", "5000 1150 1", "2077 0 1", "2005 5000 1", "4051 0 1", "5000 2559 1", "5000 4057 1", "0 614 1", "5000 1128 1", "2493 5000 1", "0 3479 1", "5000 3077 1", "0 2724 1", "2025 0 1", "5000 2366 1", "3527 5000 1", "3128 5000 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> platforms = {"0 3382 1", "4797 0 1", "3176 0 1", "5000 3423 1", "0 4548 1", "0 1006 1", "1938 0 1", "2542 0 1", "5000 967 1", "3300 0 1", "2766 0 1", "1189 0 1", "1742 0 1", "888 5000 1", "5000 741 1", "0 2108 1", "2393 0 1", "5000 4306 1", "2034 0 1", "5000 2832 1", "1576 0 1", "2773 0 1", "0 1 1", "0 2413 1", "4417 5000 1", "0 921 1", "5000 1276 1", "2314 0 1", "1140 5000 1", "2200 0 1", "0 2839 1", "3855 5000 1", "5000 4648 1", "691 5000 1", "0 794 1", "5000 2836 1", "3858 5000 1", "5000 4613 1", "4203 5000 1", "4590 5000 1", "0 2014 1", "1912 0 1", "5000 1646 1", "3545 0 1", "5000 1998 1", "0 4211 1", "5000 280 1", "5000 1864 1", "2181 5000 1", "5000 1098 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> platforms = {"3482 5000 1", "1608 0 1", "0 607 1", "374 5000 1", "5000 458 1", "1590 0 1", "0 2919 1", "0 1782 1", "5000 724 1", "4059 0 1", "3633 5000 1", "4745 5000 1", "0 2854 1", "4489 0 1", "2877 0 1", "5000 3412 1", "5000 368 1", "456 0 1", "0 3468 1", "4304 0 1", "2836 5000 1", "3795 5000 1", "2814 0 1", "5000 1171 1", "4487 5000 1", "3203 0 1", "1224 5000 1", "0 1374 1", "3504 0 1", "0 887 1", "5000 47 1", "1169 0 1", "5000 4235 1", "4503 0 1", "4306 5000 1", "2710 0 1", "0 4244 1", "0 4953 1", "0 4637 1", "5000 4078 1", "1435 0 1", "0 951 1", "3053 0 1", "4790 5000 1", "992 5000 1", "253 0 1", "4170 0 1", "5000 1253 1", "0 1635 1", "0 4913 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> platforms = {"5000 2285 1", "5000 396 1", "4011 0 1", "1297 0 1", "3430 0 1", "842 5000 1", "2410 0 1", "1680 0 1", "5000 3804 1", "1123 0 1", "5000 3012 1", "0 4029 1", "5000 1276 1", "3500 5000 1", "417 0 1", "0 2493 1", "607 5000 1", "448 0 1", "2768 5000 1", "4379 0 1", "2466 0 1", "5000 2890 1", "4752 5000 1", "3252 0 1", "172 5000 1", "0 2726 1", "5000 1414 1", "2339 5000 1", "0 3203 1", "123 5000 1", "2120 0 1", "0 2093 1", "3869 5000 1", "570 0 1", "2355 5000 1", "0 2765 1", "5000 738 1", "0 3767 1", "0 9 1", "0 631 1", "0 4406 1", "897 5000 1", "1933 5000 1", "2844 0 1", "5000 3887 1", "5000 1051 1", "5000 3307 1", "0 4755 1", "3439 0 1", "1360 5000 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> platforms = {"0 1204 1", "5000 4233 1", "5000 1743 1", "0 3838 1", "0 1138 1", "1250 5000 1", "5000 1328 1", "0 2486 1", "4302 5000 1", "1759 0 1", "317 0 1", "5000 4877 1", "2372 0 1", "4229 0 1", "2715 5000 1", "5000 2121 1", "511 5000 1", "3017 0 1", "5000 192 1", "838 0 1", "4439 5000 1", "0 2657 1", "5000 307 1", "4896 5000 1", "5000 3975 1", "0 967 1", "0 1213 1", "5000 2497 1", "2160 5000 1", "3136 0 1", "5000 1063 1", "5000 3059 1", "16 0 1", "4393 0 1", "4455 5000 1", "0 3157 1", "0 4733 1", "3170 0 1", "4508 0 1", "5000 4042 1", "5000 980 1", "1107 5000 1", "5000 4808 1", "0 4652 1", "1364 0 1", "2610 5000 1", "5000 4329 1", "0 2516 1", "0 2464 1", "389 5000 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> platforms = {"13 0 1", "44 0 1", "24 50 1", "50 48 1", "0 48 1", "0 10 1", "50 45 1", "50 15 1", "22 0 1", "8 50 1", "50 0 1", "50 7 1", "31 0 1", "50 38 1", "50 25 1", "36 50 1", "12 50 1", "46 0 1", "16 0 1", "50 8 1", "48 0 1", "50 6 1", "0 6 1", "43 50 1", "19 50 1", "0 24 1", "0 2 1", "50 47 1", "0 35 1", "33 50 1", "50 46 1", "50 17 1", "45 50 1", "50 27 1", "0 41 1", "50 4 1", "1 0 1", "49 50 1", "0 0 1", "50 24 1", "50 29 1", "50 32 1", "30 50 1", "0 29 1", "23 50 1", "50 22 1", "39 0 1", "0 38 1", "32 50 1", "40 0 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> platforms = {"28 0 1", "50 18 1", "14 50 1", "0 36 1", "47 0 1", "44 0 1", "50 39 1", "33 50 1", "12 0 1", "50 19 1", "27 50 1", "0 0 1", "50 9 1", "0 18 1", "0 44 1", "13 50 1", "50 32 1", "5 50 1", "3 50 1", "0 42 1", "50 42 1", "0 6 1", "27 0 1", "36 50 1", "50 27 1", "37 0 1", "48 0 1", "0 45 1", "50 1 1", "0 32 1", "0 41 1", "40 0 1", "32 50 1", "0 43 1", "0 19 1", "2 0 1", "50 26 1", "0 8 1", "0 49 1", "50 16 1", "0 23 1", "50 24 1", "39 50 1", "23 0 1", "24 50 1", "50 49 1", "42 50 1", "50 28 1", "0 16 1", "50 41 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> platforms = {"0 35 1", "0 18 1", "50 21 1", "39 0 1", "0 3 1", "29 0 1", "0 23 1", "18 50 1", "14 50 1", "0 29 1", "50 16 1", "24 0 1", "50 8 1", "37 50 1", "35 50 1", "37 0 1", "50 3 1", "0 6 1", "13 50 1", "50 20 1", "50 32 1", "50 11 1", "38 0 1", "41 0 1", "0 21 1", "21 50 1", "50 19 1", "0 13 1", "0 30 1", "22 0 1", "50 22 1", "20 0 1", "16 50 1", "39 50 1", "0 9 1", "31 0 1", "0 4 1", "50 7 1", "0 42 1", "15 50 1", "50 37 1", "50 45 1", "38 50 1", "50 28 1", "0 1 1", "46 50 1", "25 0 1", "0 2 1", "24 50 1", "27 0 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> platforms = {"10 50 1", "40 50 1", "33 0 1", "7 50 1", "41 50 1", "0 45 1", "9 0 1", "50 13 1", "50 18 1", "0 40 1", "2 50 1", "0 37 1", "50 37 1", "0 2 1", "0 48 1", "0 27 1", "14 0 1", "33 50 1", "48 0 1", "15 0 1", "17 50 1", "35 0 1", "50 46 1", "50 9 1", "45 0 1", "4 50 1", "26 0 1", "8 50 1", "7 0 1", "1 0 1", "50 27 1", "40 0 1", "0 22 1", "0 4 1", "50 43 1", "50 36 1", "50 16 1", "50 25 1", "2 0 1", "0 16 1", "5 50 1", "50 24 1", "50 22 1", "21 0 1", "50 30 1", "44 50 1", "0 49 1", "35 50 1", "0 30 1", "50 38 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> platforms = {"0 40 1", "50 50 1", "50 45 1", "20 50 1", "49 0 1", "23 50 1", "42 0 1", "50 20 1", "33 0 1", "0 42 1", "0 11 1", "3 0 1", "42 50 1", "40 0 1", "50 31 1", "14 50 1", "50 37 1", "12 0 1", "6 50 1", "13 50 1", "27 50 1", "1 50 1", "31 0 1", "50 9 1", "0 7 1", "18 50 1", "0 34 1", "50 36 1", "0 33 1", "50 46 1", "24 50 1", "17 50 1", "8 50 1", "11 0 1", "5 0 1", "48 0 1", "26 50 1", "0 30 1", "0 37 1", "0 49 1", "43 50 1", "15 50 1", "0 15 1", "0 35 1", "50 5 1", "34 50 1", "3 50 1", "39 50 1", "50 29 1", "27 0 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> platforms = {"50 16 1", "26 0 1", "0 37 1", "40 50 1", "0 50 1", "4 50 1", "11 50 1", "50 11 1", "0 44 1", "0 14 1", "0 34 1", "50 38 1", "34 0 1", "44 50 1", "50 41 1", "50 7 1", "22 50 1", "50 0 1", "50 33 1", "24 50 1", "31 0 1", "50 49 1", "29 50 1", "50 47 1", "15 50 1", "50 26 1", "0 21 1", "43 50 1", "49 50 1", "0 29 1", "0 17 1", "50 37 1", "50 8 1", "0 46 1", "50 1 1", "17 50 1", "50 22 1", "50 29 1", "50 30 1", "50 27 1", "48 0 1", "37 50 1", "26 50 1", "39 0 1", "0 8 1", "0 27 1", "50 28 1", "0 2 1", "12 50 1", "50 20 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> platforms = {"0 28 1", "29 0 1", "39 0 1", "50 22 1", "50 36 1", "9 0 1", "43 0 1", "50 33 1", "35 50 1", "22 50 1", "0 20 1", "50 35 1", "3 0 1", "25 50 1", "4 0 1", "50 2 1", "50 50 1", "28 0 1", "0 32 1", "5 50 1", "0 6 1", "50 29 1", "26 50 1", "50 1 1", "7 0 1", "23 0 1", "0 36 1", "50 39 1", "50 19 1", "0 44 1", "0 43 1", "50 7 1", "47 50 1", "37 0 1", "50 8 1", "50 44 1", "50 18 1", "50 42 1", "50 9 1", "50 11 1", "0 34 1", "0 12 1", "40 50 1", "36 0 1", "50 26 1", "32 0 1", "26 0 1", "0 18 1", "0 25 1", "22 0 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> platforms = {"0 34 1", "50 44 1", "27 50 1", "50 35 1", "31 50 1", "0 0 1", "49 0 1", "35 0 1", "50 13 1", "3 0 1", "10 50 1", "0 29 1", "21 50 1", "50 18 1", "50 43 1", "6 50 1", "24 0 1", "50 28 1", "50 45 1", "0 28 1", "0 27 1", "0 17 1", "50 7 1", "4 50 1", "0 30 1", "22 0 1", "18 50 1", "50 39 1", "50 37 1", "0 42 1", "32 0 1", "15 50 1", "13 0 1", "0 15 1", "0 5 1", "50 11 1", "50 30 1", "33 50 1", "50 9 1", "22 50 1", "50 0 1", "0 18 1", "50 26 1", "50 34 1", "32 50 1", "0 39 1", "0 31 1", "50 40 1", "47 50 1", "0 6 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> platforms = {"4 0 1", "0 19 1", "0 34 1", "50 17 1", "0 9 1", "50 13 1", "3 50 1", "9 0 1", "0 35 1", "0 27 1", "50 44 1", "1 0 1", "45 50 1", "37 0 1", "0 23 1", "26 0 1", "38 0 1", "17 50 1", "23 50 1", "22 0 1", "27 0 1", "21 50 1", "50 25 1", "44 50 1", "0 43 1", "50 49 1", "0 12 1", "50 4 1", "50 32 1", "29 50 1", "18 50 1", "50 28 1", "27 50 1", "17 0 1", "50 48 1", "32 0 1", "0 15 1", "50 31 1", "34 50 1", "50 45 1", "50 23 1", "50 46 1", "0 46 1", "0 42 1", "0 26 1", "1 50 1", "0 47 1", "41 50 1", "0 6 1", "15 0 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> platforms = {"43 50 1", "50 48 1", "32 0 1", "45 0 1", "50 11 1", "26 50 1", "49 50 1", "0 30 1", "33 0 1", "44 0 1", "50 46 1", "47 50 1", "45 50 1", "46 0 1", "50 38 1", "0 15 1", "50 47 1", "31 50 1", "50 12 1", "50 18 1", "35 0 1", "27 50 1", "11 50 1", "5 50 1", "22 0 1", "43 0 1", "6 0 1", "50 49 1", "50 23 1", "50 1 1", "23 0 1", "0 47 1", "0 49 1", "0 0 1", "23 50 1", "0 38 1", "50 43 1", "34 50 1", "27 0 1", "0 13 1", "50 20 1", "30 50 1", "38 0 1", "12 50 1", "48 50 1", "0 37 1", "21 0 1", "29 0 1", "2 0 1", "1 50 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
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
    vector<string> platforms = {"4741 1076 3516", "3344 3128 9762", "2127 2255 1078", "4133 2069 4263", "3194 1811 85", "2964 3059 7321", "1075 510 4525", "3935 1700 1261", "3525 2287 4693", "1262 584 5246", "2168 3797 1603", "3092 1725 5654", "4582 3231 961", "1840 332 5731", "754 2463 2075", "4558 1156 2063", "3091 3867 8417", "2991 1023 1617", "1093 224 5144", "4882 2177 789", "4918 2091 7409", "3918 1951 1719", "559 3354 2739", "1720 755 8552", "2111 2208 2298", "3243 118 5221", "4075 4095 5118", "2431 4857 7153", "1930 1534 8902", "3898 297 2381", "4515 405 7917", "2617 747 1223", "3570 1104 4537", "885 2051 654", "1731 3271 2332", "4704 1413 9964", "103 1160 3299", "2695 3190 7558", "3072 34 8291", "3426 4149 6535", "710 3541 6987", "698 568 2763", "2239 795 6429", "4472 1836 2246", "1648 1576 1326", "4913 79 6860", "2890 692 2672", "2966 4822 6779", "417 4514 3836", "1841 4621 4594"};
    int v = 61;
    int g = 49;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 43277;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> platforms = {"4811 3672 2617", "3548 1715 1076", "4400 1797 8509", "1007 3350 9276", "2264 3223 3442", "1813 852 2233", "4946 2166 6068", "4210 3327 3792", "2424 3169 8478", "4311 4942 2902", "3367 4817 590", "1064 2681 8374", "3768 3619 9014", "3122 4621 5603", "797 829 735", "4675 1396 3783", "2367 4310 3439", "555 4961 5917", "3569 3484 9655", "632 3000 7129", "813 3224 4160", "3952 1816 9491", "1999 3512 5318", "2908 2552 9873", "721 4248 9815", "1631 221 4127", "1176 3063 5906", "998 3981 4249", "2873 3723 547", "4028 842 6827", "939 3009 9873", "518 4727 6936", "931 3156 3795", "1073 4907 8089", "3226 1465 5097", "2118 2976 8325", "271 1221 2644", "3742 1279 6293", "4644 3480 6156", "1097 686 5247", "2089 1100 9585", "329 183 4035", "4221 3942 1001", "226 618 4453", "356 898 9787", "1332 4128 1752", "372 2958 1686", "812 4110 4917", "4456 2803 9616", "4842 701 4142"};
    int v = 14;
    int g = 58;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 35235;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> platforms = {"63 4480 5754", "4761 2571 9189", "983 3621 7712", "3090 3134 3358", "2031 4928 818", "4420 2665 3537", "3407 1001 5472", "298 2742 52", "3526 4668 8628", "3236 4689 1728", "3288 4933 6653", "2487 2524 6280", "2053 3614 6322", "3846 12 5787", "3573 1352 5523", "946 1611 5368", "792 408 150", "3592 875 2378", "2076 3117 2613", "531 2011 4077", "1434 96 155", "4313 3996 6498", "2550 2289 6899", "168 4037 1527", "629 815 7821", "3270 3546 4529", "1296 3188 5362", "2215 219 9099", "1242 397 3187", "2134 671 6288", "207 693 1341", "4337 124 3923", "1237 2380 4278", "3309 614 8078", "507 2982 5169", "34 4297 41", "2379 4686 8978", "1851 4694 2732", "2660 4596 3262", "255 1537 3242", "3033 4046 9554", "297 484 8257", "2071 1899 8624", "3874 2553 8907", "2979 2109 1633", "4595 2525 4211", "1957 877 805", "2326 1064 8675", "181 584 8243", "4405 535 6823"};
    int v = 52;
    int g = 37;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 50599;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> platforms = {"3821 697 4858", "2552 3792 3485", "2667 3890 7071", "3460 4051 3582", "3300 2034 4508", "2787 4562 2934", "2574 784 4308", "3369 3251 2287", "685 4236 565", "4440 1013 5968", "4109 3097 5508", "855 3545 5176", "3472 2541 6395", "281 3724 556", "3229 4427 4554", "223 4555 9076", "1474 3531 615", "2779 4298 8597", "2246 3614 2743", "344 2603 7911", "812 2455 2907", "2217 3483 3678", "4499 1252 9218", "1953 1695 3540", "2670 2761 9147", "2686 3126 7555", "171 2057 5732", "1215 2092 3812", "4477 4905 7330", "129 611 611", "2803 4579 2746", "122 3375 8541", "3061 4083 7844", "3051 4997 1246", "3296 436 6316", "147 4644 6546", "2233 3660 1513", "4530 2376 1560", "2034 75 1218", "3472 4791 8068", "3152 3413 6834", "2815 398 3984", "1944 3262 5470", "3319 4505 6157", "2781 4734 13", "3317 1503 9094", "1647 3908 8892", "53 4313 3565", "3268 2918 4779", "128 174 3057"};
    int v = 90;
    int g = 80;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 64549;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> platforms = {"1354 128 901", "2395 3143 2576", "190 1777 8255", "1352 541 4552", "3246 3430 3604", "1412 3311 5960", "1843 2449 4037", "3081 3351 2720", "3820 29 7009", "1880 2384 8850", "1573 2418 5880", "1953 3853 553", "448 1412 7323", "3012 4416 1166", "4413 3905 5436", "2849 1122 6485", "4218 3859 9553", "4791 2076 7907", "526 3542 4389", "582 452 2517", "1556 970 8602", "376 3409 4668", "2578 1593 3771", "2135 1197 1182", "4691 2155 3190", "3367 3172 4501", "450 1140 372", "1956 1453 7999", "1561 2604 3003", "350 188 1071", "2599 528 308", "1206 4001 9908", "1586 1482 7026", "3003 4547 5812", "3194 4500 7687", "1042 2154 610", "2447 1211 6104", "2270 3292 6688", "1671 743 1846", "4971 411 6231", "4631 2678 2858", "971 4363 390", "2964 42 7711", "4718 4128 7478", "3009 1302 5855", "1728 4562 8707", "1532 925 6007", "4853 4108 4644", "2348 3949 6226", "4266 1964 5467"};
    int v = 11;
    int g = 28;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 24511;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> platforms = {"1560 952 8604", "2290 4350 5594", "4247 1406 7222", "4489 1216 402", "2275 2735 7299", "4011 969 8033", "3421 4453 9978", "159 296 1171", "1247 3159 1048", "3022 2125 1710", "880 1249 7697", "3836 4650 7597", "1001 2816 3307", "2808 2513 8583", "4492 1469 7969", "3136 3325 6190", "4308 3479 9353", "3378 2161 4168", "2734 84 9065", "2242 2920 2722", "843 2346 708", "2271 2926 7352", "359 2755 7610", "1284 3744 4562", "4036 4892 1555", "3192 3981 4483", "706 2128 3180", "1685 2659 7662", "66 4655 6476", "3295 4173 1309", "3464 2817 8406", "3653 1706 5441", "4646 2254 8457", "50 2151 9846", "3732 1022 7359", "1293 1003 2536", "800 1934 4542", "1367 3147 1400", "1213 1848 2681", "3633 3683 2982", "4287 1616 4817", "2948 2779 6369", "2680 4838 9781", "2178 2727 9455", "4271 521 8587", "3093 3976 3798", "399 1084 4073", "1413 1972 6071", "4482 787 2644", "3741 2384 1118"};
    int v = 86;
    int g = 47;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 56595;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> platforms = {"2277 2686 4623", "1606 4018 259", "1963 4778 5067", "414 4138 3147", "1587 2775 2132", "3000 863 198", "2480 3652 3835", "3921 349 1149", "2863 3337 9453", "411 4306 6372", "4352 4836 9594", "3429 2239 1276", "3297 853 4023", "1609 2815 293", "1380 2717 4436", "450 4166 3167", "1675 3954 2340", "1812 1407 3884", "2679 4281 6686", "1802 3587 4753", "269 3770 168", "241 198 6156", "2422 2366 2537", "1792 27 9193", "3176 29 3641", "3343 245 3505", "4711 405 8362", "3892 1965 1248", "2788 239 5510", "1594 4356 3311", "2335 248 2799", "2874 43 4774", "4772 2070 1472", "2424 4779 1522", "272 1984 931", "3827 1522 1402", "4966 4206 8815", "43 786 3131", "165 4882 1690", "1216 2277 9692", "4982 2578 1331", "4119 4643 2090", "3445 676 7728", "1903 3112 490", "3163 1767 5748", "2323 4794 2741", "1727 2905 3379", "266 609 1355", "4424 4038 9500", "2233 245 7501"};
    int v = 63;
    int g = 53;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 42306;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> platforms = {"3432 3793 8513", "402 4528 1515", "2759 3370 5127", "1505 453 7757", "3634 1101 4193", "1659 3387 4691", "3732 1752 6387", "1457 275 8362", "1639 3197 6678", "3196 3212 256", "288 4661 9068", "1536 2863 3594", "63 4813 8589", "1845 2131 7278", "3413 3288 3378", "1213 4003 6543", "3474 2266 2521", "660 4151 1638", "1111 2655 8515", "2063 2031 2047", "573 97 518", "3605 4477 6905", "4873 2867 1433", "1987 414 6069", "4967 1555 8144", "1232 2986 4558", "3269 2537 78", "2399 4992 5804", "1910 3245 1035", "2276 4213 5345", "4984 4480 4768", "4713 2281 3184", "2220 794 5092", "3188 3416 5937", "4263 4387 1447", "3665 4858 3371", "1946 3715 7085", "3079 4894 6830", "3184 2547 8077", "1389 3127 7537", "4325 2372 2926", "3601 3010 5653", "4651 3580 916", "3881 438 209", "4593 2789 4752", "2654 327 4784", "2586 1854 602", "2953 4862 7184", "89 1152 9772", "2617 1953 2181"};
    int v = 85;
    int g = 81;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 43272;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> platforms = {"3816 4694 4248", "568 3803 8366", "4743 1457 2599", "570 989 7194", "3516 1605 5290", "1411 2578 6034", "2655 2599 4094", "4902 1191 9156", "2789 1773 1914", "3980 4377 645", "2439 2089 1255", "3436 4319 6741", "1541 2823 2590", "1289 2887 3765", "626 2581 7240", "2464 3604 9250", "1826 4961 1120", "1695 4198 6948", "2970 4836 5062", "2918 2816 3748", "212 3501 9935", "68 1184 5898", "2674 4855 9754", "3638 1989 1123", "533 3999 1381", "2979 4209 2003", "1522 1694 3386", "4075 3734 4339", "3309 741 1598", "1574 4871 1097", "640 2175 7884", "1235 2704 9717", "4089 1408 5937", "2480 1359 247", "3653 4315 5660", "2175 1251 5269", "3975 1499 1839", "3753 3392 6690", "4096 177 7254", "4377 2204 532", "3614 3066 4881", "3657 3678 3245", "4450 3009 567", "4012 2330 9226", "2914 1973 8711", "3641 1177 7969", "651 3489 918", "137 2927 8145", "4746 3346 915", "4186 1671 7102"};
    int v = 26;
    int g = 44;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 32983;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> platforms = {"1881 3095 8347", "3904 2646 9231", "2260 4517 6361", "1196 3444 7537", "2014 1434 7679", "3283 1144 707", "867 4531 5788", "961 2826 2702", "1003 1429 4513", "2477 1250 4180", "4299 52 6618", "3357 2752 7443", "2765 2449 7212", "4072 2521 5158", "2484 1897 7289", "4328 1469 6451", "2157 2909 2070", "3276 465 2175", "1491 3018 6042", "4193 2394 5681", "2294 2678 9081", "2784 4096 7927", "2191 3331 8063", "92 2192 5993", "577 2619 452", "1865 3275 4883", "960 797 1153", "1548 4051 3776", "4879 344 904", "409 2313 7543", "1661 303 1591", "3744 2096 3014", "2882 2990 9351", "1792 2491 9407", "4404 4034 8970", "405 1702 6862", "1483 4946 3310", "3357 3752 2337", "4360 2782 381", "537 674 1616", "4576 1055 9564", "1031 3351 202", "1257 2241 1489", "1179 1014 8052", "52 4705 8228", "813 1680 6299", "1656 1971 462", "2193 1385 7539", "1313 3938 8661", "204 2112 9639"};
    int v = 82;
    int g = 44;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 51673;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> platforms = {"4069 4554 5379", "1242 412 3695", "3277 3061 7179", "3302 2517 888", "3744 3438 7826", "414 3971 1812", "1547 3029 3773", "4617 2571 1091", "3276 3305 5992", "449 536 5173", "4867 2087 6135", "2181 3035 3542", "4203 3233 6219", "3417 4462 8167", "1066 664 9111", "335 1080 794", "3174 1237 8791", "2537 4775 5338", "545 3625 467", "554 1857 34", "1160 3323 2792", "1437 2755 910", "3883 468 3164", "3676 4170 9511", "4477 3987 7325", "3565 59 8603", "1833 3173 1657", "2431 427 5994", "904 4175 2750", "4505 1889 3652", "3285 1273 2488", "1662 3771 781", "261 912 5654", "3200 3168 6193", "4793 1032 3479", "1989 969 5606", "4795 1961 8212", "2032 4627 5967", "4950 564 4457", "389 948 9993", "4290 1922 2067", "91 584 5037", "4876 3885 2475", "1036 1489 5481", "641 1492 8259", "1777 772 8748", "151 3981 9182", "1805 3083 5028", "1058 72 6471", "1796 596 3259"};
    int v = 73;
    int g = 40;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 55324;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> platforms = {"2338 1978 9595", "4601 3890 5430", "4593 703 7056", "3495 4282 2241", "2752 4590 2726", "3891 2953 4537", "231 340 3859", "2628 2887 2794", "3968 4933 2572", "3758 1543 5739", "3867 4761 5360", "568 3995 3578", "1484 3669 1041", "2778 3196 7303", "880 2553 1062", "3765 2661 3254", "1387 3348 7939", "2012 4454 226", "4170 1218 6725", "3138 4715 1547", "3896 4801 8710", "3606 4062 1098", "3724 2091 9224", "367 3878 5992", "570 1294 9328", "3538 1489 8258", "1625 4188 7354", "4981 274 1374", "3381 2274 5196", "3743 379 2517", "3011 4820 8232", "4180 3276 9054", "3127 1187 2370", "2427 3127 7118", "321 4627 622", "2834 4092 3110", "4455 1478 444", "3032 769 3353", "3956 4641 6085", "332 2356 8591", "2416 2858 1036", "434 3573 6081", "1495 4776 369", "1587 4146 7117", "26 1839 4401", "2665 2151 1837", "3071 4591 5409", "1328 1223 2812", "2260 1541 8049", "1081 2733 9041"};
    int v = 65;
    int g = 17;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 65049;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> platforms = {"1505 3995 7008", "498 905 151", "4207 692 7915", "1736 2214 7144", "2816 4637 707", "4131 4021 3123", "3461 3546 68", "3658 3470 1972", "2866 2026 8810", "1187 2871 2115", "3497 3180 445", "4494 4895 6404", "3763 3128 2663", "2625 4263 8930", "4404 3944 1437", "2279 528 7554", "462 3367 7163", "662 3915 4302", "3879 3877 1017", "3724 1408 8109", "3024 3395 5213", "4189 4642 8174", "4229 1818 3420", "26 1515 6529", "1788 374 1906", "1947 4743 3081", "47 2963 3116", "3107 851 4136", "2186 1510 4494", "1150 777 8408", "4033 2334 3073", "3836 3668 5896", "4293 3069 3985", "569 4901 5313", "1008 783 2041", "3133 3861 8161", "1218 2314 6246", "2343 3848 3735", "3829 245 9295", "4597 2912 1752", "4526 1692 3581", "3336 4153 5370", "3765 712 401", "763 2486 1597", "3034 4538 64", "1777 143 7344", "2580 1998 9400", "2576 3989 1981", "85 1129 763", "4717 3460 7686"};
    int v = 38;
    int g = 45;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 29102;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> platforms = {"1225 245 2098", "4909 1325 6735", "4788 4148 3490", "3765 3162 9362", "4076 3173 4704", "1360 1518 8940", "660 2162 5814", "3351 2850 8219", "2124 935 8358", "1942 1710 5828", "447 310 3300", "1083 3418 6115", "3614 3495 742", "2534 3421 5177", "981 4763 8388", "4590 1861 8067", "334 699 433", "4821 2670 463", "536 3689 4728", "1837 4206 9634", "141 1039 809", "2293 558 5113", "280 4891 3042", "4188 310 9008", "1931 3246 7558", "4679 3186 5387", "3535 1666 9309", "1576 3 6394", "3371 1360 226", "4792 1539 6484", "776 2704 4097", "2558 1398 9844", "2726 1601 2313", "3034 3777 3870", "2419 3445 3751", "3719 2311 1444", "625 3344 7392", "3533 953 7229", "2357 1460 7732", "3898 1914 2121", "4037 438 8271", "1890 541 3497", "1441 290 1738", "2273 3784 143", "1616 2793 3346", "171 1502 2224", "4608 4931 1586", "3971 1821 5429", "3556 4133 9201", "2869 309 5812"};
    int v = 54;
    int g = 80;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 37287;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> platforms = {"1773 3690 1746", "4206 4553 9525", "4056 3793 7356", "2132 4564 2975", "4685 1949 6840", "1588 4404 7303", "3884 3335 7105", "3217 1797 6595", "1388 4198 1330", "3166 4533 2367", "3648 2146 2448", "3304 1236 7281", "3339 4236 2444", "2614 2716 4557", "4697 908 8519", "1867 1380 5415", "2134 4774 5612", "4840 1400 6208", "3706 3095 8462", "1788 2476 2155", "3338 1927 7671", "86 3443 1859", "3630 152 3687", "2697 775 4525", "1705 2225 4725", "4570 3788 1020", "1933 2174 3226", "2246 579 8706", "3592 3367 7640", "1319 1337 8475", "1130 3932 9221", "1200 4283 5443", "833 1629 8435", "3434 3832 3029", "2459 4441 4056", "3215 3133 520", "2195 1683 8334", "1066 521 6452", "714 3447 374", "782 3364 3277", "553 3841 430", "2496 182 9988", "1358 4420 5167", "2815 799 7831", "3675 1193 2985", "1352 4634 7028", "4972 3607 2834", "2411 2362 650", "2997 2010 8560", "500 2509 302"};
    int v = 50;
    int g = 22;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 64533;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> platforms = {"2274 3572 7651", "747 3794 4458", "201 4754 9828", "4413 2500 7575", "1366 4587 4887", "3029 1437 1123", "3268 1640 1473", "976 1546 8764", "64 1970 1570", "4955 4704 7439", "8 195 4331", "4931 384 7378", "3264 3652 3733", "3436 2177 9156", "1436 1064 3138", "4132 183 7125", "2268 103 2066", "1504 3421 9781", "4683 1504 697", "4965 4718 8007", "1787 1665 2441", "1630 1803 8925", "3454 3596 5626", "239 1275 3611", "2169 4655 9799", "3670 1511 8509", "2276 4139 7266", "2262 1576 6824", "474 2460 1635", "529 1381 1994", "3111 2012 2895", "3510 4890 9378", "3464 4619 6379", "2716 584 8847", "117 1046 781", "4660 1934 7934", "373 2923 6323", "1087 454 9012", "1226 3413 5831", "4782 388 7818", "650 1791 8295", "3970 4726 9681", "2954 148 9714", "1199 2042 3150", "1720 1839 8222", "2167 530 1146", "2733 1256 6509", "4157 934 8172", "3881 2195 8807", "1272 435 4384"};
    int v = 51;
    int g = 26;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 49786;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> platforms = {"2569 332 9081", "2214 1982 89", "1502 4603 6389", "4406 1633 5455", "4074 3647 5403", "4519 376 4008", "1748 2957 6642", "3398 102 1708", "2977 259 7008", "312 4405 7528", "341 3094 1572", "1440 1634 7442", "2402 945 6210", "3727 4288 1089", "4977 3050 964", "2999 4181 4690", "2171 4878 5789", "4677 1959 5518", "4399 3508 8824", "3301 3113 9886", "2940 2407 8368", "2002 3790 3059", "3588 2743 124", "1373 459 3942", "3866 2813 9481", "4959 4536 8324", "1511 2667 3015", "1686 1019 3100", "2628 3927 3158", "3035 1204 8551", "548 1183 1537", "1331 1750 7560", "3187 851 1358", "2657 1563 1966", "1874 814 9817", "170 4541 1041", "4777 639 8870", "567 2031 4716", "3155 4753 6556", "897 3510 6945", "1207 3237 4089", "330 1838 1291", "1339 2059 4729", "2909 4516 1019", "4012 1719 9143", "4913 2786 9886", "573 3112 9002", "4993 1315 9637", "2913 1470 4023", "4616 4096 4977"};
    int v = 30;
    int g = 67;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 30483;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> platforms = {"7 627 3486", "2611 3359 9526", "1828 1858 3597", "3567 1129 196", "4225 1112 9572", "4744 1665 2855", "3561 2482 5907", "3474 4064 1991", "2595 4025 8194", "459 2674 4714", "3785 338 3259", "2395 4849 6282", "2111 2272 4006", "3014 4517 6143", "2090 1115 4206", "2512 3971 1081", "771 4625 6247", "1873 2431 1540", "4539 1443 6989", "3089 2598 4576", "3609 3332 7248", "1985 3758 7676", "3867 1547 8767", "195 362 8405", "2599 3516 7830", "4672 2681 1047", "1077 4441 3180", "1338 1730 281", "412 2050 1863", "3296 4191 3232", "4885 4197 719", "4429 3220 373", "381 4107 9051", "4775 4019 2128", "1912 1244 9315", "2442 2923 598", "3139 200 4943", "4914 1549 7190", "4891 2372 1995", "1335 2607 3677", "2088 123 7045", "4841 3259 8297", "3087 654 9165", "4959 129 4029", "3338 1779 16", "1921 1523 8451", "2780 1175 5296", "3102 4222 4362", "655 0 1219", "2658 4015 9651"};
    int v = 78;
    int g = 17;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 81322;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> platforms = {"44 39 4184", "2993 4196 1521", "4319 2727 2858", "349 1595 893", "2756 3581 1444", "1054 4950 3436", "3259 2007 4484", "4006 3173 1306", "3943 2492 2517", "4547 4351 1326", "4863 3511 4401", "3455 2141 3914", "4059 406 8884", "2591 89 1492", "3800 4940 369", "397 4773 5280", "1905 3458 6030", "4540 3517 4041", "567 2351 6925", "127 3271 9961", "1405 4597 3937", "3245 2169 5495", "3873 3190 8663", "1823 540 1464", "2078 3314 9390", "2116 4721 9104", "3432 2141 6073", "3085 1974 3959", "249 4679 192", "2513 4780 3089", "4439 4007 7970", "1147 909 5636", "4096 1265 6147", "1624 994 3852", "1450 2360 3746", "1482 4871 7741", "3177 2003 137", "878 1474 8519", "539 2818 6062", "4325 3101 3186", "4806 1463 3902", "1381 3512 2781", "2848 282 102", "324 1034 4846", "3598 2226 6036", "3408 2128 6103", "4283 2632 9148", "179 1914 6329", "1370 4645 6001", "1579 2031 6544"};
    int v = 61;
    int g = 67;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 40374;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> platforms = {"699 1044 469", "3976 929 8163", "2292 611 1504", "246 988 9179", "2327 3054 7488", "1760 3312 3470", "3161 3640 4792", "683 2168 3898", "1183 2364 471", "4666 4886 2886", "2188 360 4681", "2482 2106 6319", "112 2900 3267", "2627 4824 2864", "1689 3377 1972", "2629 2960 5353", "1376 1301 1809", "934 2862 9579", "1965 572 5099", "1776 4926 7711", "2162 3171 1001", "3317 2079 6990", "4989 1226 2172", "4274 3152 4713", "1925 3071 3922", "1660 3291 2297", "1639 2523 9507", "3100 3838 3379", "1747 3921 8042", "1511 3775 7709", "1911 1261 1968", "554 2986 7416", "1635 3601 7402", "3006 1480 1345", "4382 4201 2863", "4302 754 6624", "1121 244 8654", "2583 1200 7116", "4554 3366 4398", "1734 4778 8814", "2861 4413 523", "606 2051 9777", "4329 3215 9537", "1950 214 7568", "1853 2657 2449", "3675 970 99", "2127 2039 5945", "3934 393 2412", "4478 2978 40", "2473 1075 5517"};
    int v = 11;
    int g = 22;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 33940;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> platforms = {"1664 1313 752", "4848 4277 9566", "1675 1596 1874", "56 3641 7067", "3164 2265 8301", "1133 4135 9964", "2745 4378 3012", "3468 929 5448", "3718 3346 3861", "4627 169 5888", "4701 294 3498", "1905 3681 2045", "3941 1880 5611", "2258 3856 2574", "963 864 7388", "1951 1798 1069", "4872 3275 882", "4098 1734 1008", "549 2966 1905", "2999 758 768", "1879 381 1123", "2231 2631 982", "2544 2349 2119", "4424 1099 3213", "1381 3336 2198", "3376 2473 8096", "2692 886 6677", "3181 3549 3608", "960 1345 193", "1831 244 8370", "4701 868 7637", "614 2740 9265", "812 4862 3460", "1358 670 9692", "3911 1277 9320", "3686 2473 9937", "4777 407 9870", "2162 3847 1580", "2421 158 5610", "3198 2476 6522", "3195 912 8113", "2560 1289 2154", "4845 2007 5259", "2493 4080 1954", "4681 161 9416", "414 3418 3463", "1860 2616 503", "4895 1493 1107", "904 3022 6241", "1779 3330 9097"};
    int v = 80;
    int g = 66;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 47235;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> platforms = {"4839 1697 8249", "2105 1201 5984", "901 393 3237", "2743 257 3169", "4423 3694 9701", "4893 4654 1200", "4950 4414 4687", "4881 1134 7503", "2624 4362 7058", "4711 3954 6482", "2391 4390 8795", "604 959 6499", "41 3796 1030", "3371 3009 5153", "4644 2441 2034", "441 2069 3409", "3380 3973 8562", "3571 3479 5354", "3372 4727 5943", "4814 1774 1351", "4835 4652 1372", "4644 641 7355", "740 3609 8273", "48 93 5203", "2254 445 4750", "930 4788 8162", "4734 3153 539", "4100 915 4329", "4242 955 6019", "4933 2264 5144", "2208 620 2926", "2745 3973 4807", "188 2812 7945", "2014 441 7458", "4409 2120 5256", "1337 4740 1375", "3175 621 8761", "4459 56 4379", "4694 982 9326", "4486 4880 8680", "3424 4037 5146", "881 2855 6391", "2650 750 7780", "1538 3027 4106", "1496 2846 8427", "814 4971 7840", "4856 2752 2213", "1252 119 7340", "3424 3168 2408", "4152 2733 4750"};
    int v = 93;
    int g = 30;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 79127;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> platforms = {"124 1465 4546", "3889 4831 1455", "2263 3424 6530", "4482 2490 13", "599 397 7088", "4583 2435 5135", "3860 4538 4273", "3070 2689 7299", "2864 468 9104", "1371 2838 3758", "392 2085 4230", "2354 4582 6701", "4310 2554 2496", "3818 372 1591", "2347 3527 5905", "2538 2647 9763", "3940 2757 9193", "1599 4932 8995", "2230 4786 6906", "2892 2746 4983", "1702 4951 833", "4587 4574 871", "653 460 264", "3874 3916 8882", "1812 2361 179", "3166 2556 5636", "2767 2965 8881", "191 4246 5987", "182 3464 8594", "3236 2807 1537", "1659 1251 6874", "2774 564 1452", "3512 2781 9155", "1637 636 9760", "1215 3567 5521", "3115 4142 3073", "3029 1205 4832", "2805 2573 8915", "794 2428 6668", "1974 4310 5093", "1432 3081 4689", "702 4473 6562", "731 1415 3518", "1801 1508 3451", "1177 4587 4318", "788 2952 6611", "3768 1798 3432", "2549 1594 4910", "846 547 5240", "82 1735 190"};
    int v = 47;
    int g = 68;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 34076;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> platforms = {"4289 726 6717", "1534 268 3981", "4341 4887 4017", "4454 988 5769", "895 4973 2284", "797 1580 2853", "1689 2071 6485", "1827 3252 5010", "4152 1908 8996", "3391 3768 6814", "1228 3937 1206", "1463 2536 5196", "2154 4296 9528", "1811 3989 3736", "4935 980 2629", "4673 3447 9788", "2954 2715 8588", "1315 3145 6608", "277 1950 4343", "454 442 1294", "676 2725 5827", "1278 1574 4266", "1516 3972 8330", "744 2665 5934", "2549 2217 3292", "3162 1577 8787", "3732 2542 2537", "1934 3492 7758", "410 1763 4478", "2156 4205 7289", "1823 4800 4392", "361 4094 5613", "241 1645 5803", "3735 4783 7216", "4389 3395 5970", "1040 1141 24", "2183 4457 5049", "2581 2844 380", "3942 1668 1623", "4530 1422 4471", "865 1760 3668", "3892 2379 7469", "1523 139 6572", "2398 3558 6847", "441 2562 2055", "2245 1756 1794", "4050 4180 7762", "3188 2964 4520", "3899 644 2403", "2086 1715 9701"};
    int v = 29;
    int g = 39;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 32924;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> platforms = {"1023 1717 8080", "538 3485 3107", "722 717 6927", "2683 975 7991", "4579 3274 1558", "2011 3085 3372", "589 3870 1128", "4958 2114 7781", "1548 502 2631", "1193 2704 2999", "4540 4536 5738", "57 859 3662", "1577 4350 733", "2482 4498 1174", "2621 3863 2638", "2039 4491 6991", "2097 4018 6246", "4436 3862 3824", "4352 2439 9006", "139 376 5218", "571 748 1060", "412 1684 2882", "109 2961 4952", "736 3139 4003", "2329 2970 6726", "3427 3100 4393", "1246 4834 9747", "3500 4993 3019", "4098 3629 6140", "3438 2750 9926", "1301 630 1244", "2552 220 8943", "3417 422 6528", "2914 2890 1750", "3335 4396 3826", "2651 3008 9455", "1058 382 6857", "1756 446 3380", "1982 880 1124", "2578 1391 3663", "1251 3374 7441", "4614 3388 1924", "1390 2222 9220", "3378 1784 6476", "3529 969 4911", "1504 575 1125", "2184 4973 604", "3226 4419 3253", "189 4061 6424", "4532 683 5340"};
    int v = 6;
    int g = 63;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 20847;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> platforms = {"3426 3387 3505", "1473 4109 3609", "3293 2820 88", "3313 778 9238", "3720 3505 6719", "640 1710 1796", "3291 508 7719", "1880 172 9390", "2221 271 9264", "3813 2879 6760", "2267 3291 944", "1700 3756 9356", "498 3949 7378", "4639 4344 2573", "2019 4291 7820", "3361 495 1159", "2889 3727 8528", "3453 250 9485", "201 4406 8433", "3099 2675 2805", "3728 2973 8904", "2826 869 2979", "2873 2866 7812", "3602 2251 5638", "291 2427 1068", "1159 1133 2394", "2288 3407 1156", "1491 1712 4181", "1427 4625 3282", "3419 3895 360", "2763 4355 8634", "686 3247 1397", "1701 4990 8960", "3063 2170 7454", "4447 3850 5876", "1832 3034 1404", "3763 4648 2216", "998 4891 7141", "2883 2342 8008", "1728 496 4151", "3119 1753 1802", "4730 4924 2144", "1514 57 5501", "4079 2903 8866", "2636 370 8335", "3697 4286 2017", "123 1207 4509", "2308 2885 7257", "2472 3985 8074", "586 1975 1698"};
    int v = 89;
    int g = 72;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 68680;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> platforms = {"1005 4109 4107", "2436 478 715", "4952 4744 4542", "4551 1515 2412", "3098 3591 6057", "4812 1249 4555", "2294 3437 9349", "2173 4941 1802", "3914 2997 1276", "3206 1949 7291", "999 765 9131", "2447 3407 1093", "65 3235 9052", "3957 23 3187", "2834 639 7794", "3167 4830 5627", "181 2071 617", "739 4179 9400", "2262 1961 3715", "4247 4068 6850", "2484 2991 1220", "3216 3207 3790", "589 4529 7716", "4536 4391 8185", "3497 4602 2304", "3491 951 6097", "794 2867 3776", "2491 1534 7619", "2196 1039 2057", "3090 1830 6408", "3520 4428 5609", "749 3891 7591", "2857 2211 3789", "3630 2421 5198", "4823 3968 2464", "938 3262 9199", "2593 1049 8209", "143 4414 1877", "1868 2701 6205", "191 859 6835", "2395 2765 834", "2377 3096 832", "998 1639 1602", "643 630 1289", "4312 3004 8740", "4975 839 7380", "2690 1703 9281", "3794 4965 8803", "4109 239 2241", "3779 3642 8596"};
    int v = 96;
    int g = 48;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 63255;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> platforms = {"1769 3992 1976", "2311 2715 5843", "4003 4606 9505", "2269 4085 2556", "2785 3102 2824", "850 3698 1765", "4398 336 4755", "3309 1910 1775", "3533 4963 3479", "1806 1026 6753", "2568 3652 6526", "2940 2027 3302", "718 3416 5215", "1691 2113 5607", "1664 715 1044", "2593 2473 4860", "4151 2142 8080", "4534 3998 4752", "4419 3543 1866", "1845 4077 928", "1196 3648 5795", "1730 1536 3725", "3626 3447 4063", "3530 154 4502", "1529 1954 961", "2733 1063 6935", "428 1926 4336", "1653 1083 6803", "3525 1166 1835", "2094 4550 8619", "2399 3667 9298", "2398 1636 4619", "2874 2608 5499", "1466 2116 5176", "831 2939 1361", "3362 2727 2289", "149 4111 6095", "2407 142 7072", "1296 1500 4910", "1686 383 6386", "1780 4392 8590", "3891 2155 8640", "3785 2299 2285", "4663 2157 8294", "2083 2160 7340", "3760 2014 7573", "4221 4324 675", "1182 3354 7052", "2415 1836 5473", "3170 2306 3061"};
    int v = 29;
    int g = 75;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 34131;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> platforms = {"111 1681 6293", "535 10 3189", "0 4033 9638", "720 2745 64", "2846 4853 7074", "4823 4109 3795", "1421 2654 3511", "1661 935 7949", "3773 77 2817", "398 4688 7225", "3084 3327 6559", "4945 3255 6228", "2590 3135 8437", "2223 1772 7364", "993 230 4009", "3088 2606 612", "741 1119 5893", "4628 3938 2970", "2674 1030 4525", "3418 3847 590", "2951 2720 1517", "1541 4018 9603", "3398 2550 779", "4996 888 3090", "3311 4806 3315", "2204 1278 5483", "1909 2131 6382", "64 3313 5055", "1977 4662 7571", "4973 1621 606", "4747 3362 6735", "139 3969 2015", "4362 1448 3885", "4344 2448 3288", "3199 4102 3250", "184 1028 7413", "4283 4786 2114", "4075 3012 1631", "1300 454 7254", "1359 1805 8220", "3252 665 9046", "3156 3908 4629", "3865 4390 6910", "1448 3866 6982", "1526 3311 8551", "3436 1321 5687", "1989 4305 6852", "4579 653 822", "1206 4382 2101", "443 4070 8916"};
    int v = 13;
    int g = 41;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 28399;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> platforms = {"1870 552 7858", "4611 2905 7580", "1156 1425 1617", "3726 2394 2766", "4978 3870 4768", "1669 3195 9774", "506 1783 343", "2992 4049 9760", "3708 3645 2170", "2926 4789 9096", "1807 1564 3014", "80 4143 863", "3755 3362 8920", "3409 1833 2366", "4494 4657 5497", "248 1044 4231", "4012 154 8637", "1454 4276 5769", "341 2967 3831", "4255 2847 7076", "4735 4707 6847", "2588 4805 2399", "4970 153 5590", "80 1063 8906", "2282 4202 1116", "3825 49 3385", "450 163 9252", "1277 1933 5194", "4449 3048 6800", "4513 557 2346", "1905 1651 9614", "2050 3587 3099", "3924 2966 3931", "4351 2128 3265", "3239 1882 1953", "1550 2356 793", "1949 2293 857", "4791 2957 5603", "2978 4599 9462", "931 2749 164", "1835 888 9922", "2530 4149 5646", "2286 2223 9170", "576 2174 1024", "3533 2136 5864", "3911 2413 9141", "158 1332 5187", "3187 155 7388", "732 1533 1544", "460 170 7979"};
    int v = 72;
    int g = 93;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 46808;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> platforms = {"4013 945 1391", "4827 2687 2865", "1796 2104 9755", "807 2309 3638", "1157 3708 3083", "2603 4688 8972", "4382 147 8667", "2813 712 267", "4946 2622 5111", "825 3646 2192", "2086 4131 6044", "1081 4975 4527", "1286 3062 4115", "311 345 5155", "3006 3962 7648", "2034 4234 5956", "2339 878 5979", "939 2971 1830", "2329 3678 2706", "3215 2894 7270", "4826 2653 1670", "1498 3401 4185", "126 2815 6266", "1230 4157 7624", "2641 1490 2673", "3063 1564 2470", "2596 1185 6913", "244 4428 4083", "4083 1236 1218", "4070 3956 7185", "3262 739 6940", "2906 4126 7442", "3068 3419 7536", "2934 1095 66", "112 4035 3309", "1878 4333 5892", "3088 3248 2390", "2299 1121 2424", "3193 575 8253", "219 2367 7495", "809 2573 8030", "3478 4943 9555", "710 1562 4893", "3282 3606 2741", "4014 6 5810", "3864 2333 6693", "277 4883 6067", "3885 4316 1878", "2901 4874 1094", "490 406 4397"};
    int v = 76;
    int g = 86;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 51043;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> platforms = {"2878 4958 9041", "3886 2739 995", "3902 3586 4862", "2197 351 5649", "3286 44 9504", "4974 4873 3273", "3953 2900 2351", "385 2697 2941", "2549 3807 9419", "1438 964 2445", "4377 2017 3869", "672 1623 249", "2165 4705 1974", "1732 265 7530", "1399 4456 8042", "264 859 9988", "3380 1926 4264", "4328 4604 5159", "3032 918 3998", "4663 2462 5219", "3366 289 4532", "4291 1080 1826", "3901 519 8279", "1700 3138 7838", "2762 4968 1870", "4237 1287 5185", "1203 702 2101", "4149 187 8719", "3214 2152 5164", "1709 4635 2446", "3009 2624 4619", "920 3761 4016", "1539 2795 4", "2087 3624 2853", "3379 980 4728", "1479 4458 9752", "2129 4537 3869", "3089 4962 8821", "2261 820 2670", "1261 1623 2394", "2649 4722 2902", "1454 1807 2136", "1267 4289 2338", "1935 94 3938", "400 4443 4348", "3677 2681 3736", "2774 1795 4793", "3596 4207 3349", "1263 2232 7584", "277 3351 1431"};
    int v = 58;
    int g = 65;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 37588;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> platforms = {"2421 3079 9227", "861 3677 9678", "2601 1506 8820", "2921 3935 6034", "2744 3774 5005", "1115 1223 4797", "3200 4917 607", "1642 2273 8670", "4976 1558 2095", "1407 3822 4417", "543 3766 4599", "994 1859 1769", "4079 3198 5039", "2910 803 3045", "4824 2413 4086", "2684 1094 9544", "1353 4342 8652", "3278 1703 5834", "1843 2486 2489", "4886 4129 8448", "1126 4262 7307", "1393 19 38", "1348 391 6510", "3085 883 4327", "708 1349 6908", "4142 4022 4338", "2183 1667 208", "3306 2668 577", "2830 1584 1569", "1584 1460 9927", "2838 2327 7933", "3097 3094 6203", "4286 566 3847", "332 1528 9549", "2338 4725 6006", "4445 3345 2464", "655 1966 7158", "1239 4607 809", "3352 4119 1326", "486 4314 1278", "3496 566 1723", "2590 3409 8009", "173 1370 3782", "2930 2920 1819", "332 2197 8798", "3281 3291 1270", "3338 4605 284", "2161 2094 1041", "681 1996 7717", "4890 854 5246"};
    int v = 72;
    int g = 48;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 50291;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> platforms = {"4445 4462 9206", "1502 2423 2263", "791 476 6332", "2401 3686 7526", "4025 4187 4338", "2694 4922 5435", "1712 1275 858", "4238 2784 8017", "192 2540 6715", "1430 3422 4846", "1184 756 8729", "356 4903 9144", "4297 976 3442", "3650 2736 369", "3590 4706 197", "2898 2304 7262", "3340 358 6179", "211 2823 4233", "3083 2395 164", "3661 1103 4864", "4020 3490 414", "1395 595 9484", "1876 1890 880", "3937 3044 9516", "3725 529 1944", "1640 4804 9357", "1299 4469 2343", "1967 4717 6484", "438 357 1112", "2702 2155 3229", "2391 4109 4838", "2440 115 2309", "1504 2238 4615", "4034 1377 8742", "3280 4455 4349", "3455 4080 2497", "1705 967 2439", "4927 4013 2334", "215 2079 3187", "2203 1049 7261", "287 2265 4189", "1588 3449 9390", "2213 2120 7649", "3642 3316 4304", "1978 66 6610", "4550 732 7637", "4275 2700 6852", "2982 4577 3521", "3126 2427 4107", "4384 225 662"};
    int v = 38;
    int g = 51;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 35109;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> platforms = {"2576 2181 3243", "2254 542 3692", "1440 3853 4022", "3495 2498 9719", "3609 4706 9474", "889 2671 7294", "4877 3829 2160", "2241 2623 6418", "3836 3583 9323", "395 3329 6347", "548 1060 2949", "1717 2100 4647", "2691 3730 531", "1107 2567 6675", "3380 2360 7448", "4024 3368 8843", "1948 194 5482", "1626 3724 5975", "2990 1460 4053", "2430 679 2399", "2753 3427 35", "4197 3059 7683", "2469 162 52", "1579 533 9915", "4924 3298 7587", "671 3602 1662", "1686 4762 9824", "3509 2111 686", "1326 863 8729", "3295 4013 2056", "655 1111 4095", "2819 1217 3303", "4205 1806 9541", "3258 2189 3976", "3994 2716 8867", "4698 4275 9708", "3288 3489 2396", "815 4491 9417", "161 1532 7095", "3308 3615 1469", "3267 405 3807", "4082 2185 4887", "1436 428 5357", "1166 1195 6139", "622 2475 3108", "675 4053 2194", "35 4745 4043", "4653 2739 5762", "3995 2792 5845", "3383 2358 7207"};
    int v = 35;
    int g = 8;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 66076;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> platforms = {"489 510 3508", "771 3612 2359", "3850 3602 770", "3821 4347 8659", "1121 408 448", "941 812 3805", "3889 3750 2181", "2792 256 8904", "4862 1275 1916", "504 1585 7916", "2794 3622 1535", "445 2580 8544", "167 4785 3047", "3609 419 876", "3368 3272 7430", "2312 3342 9952", "3709 3323 9600", "718 1823 1120", "3529 712 128", "1321 355 8785", "163 1197 9684", "1895 4913 5797", "1387 1511 4991", "296 3938 240", "3199 4789 1053", "2930 81 6573", "3057 1948 2834", "1012 1818 9197", "3698 2580 3438", "2487 3103 9086", "2680 222 3294", "959 2114 7367", "27 4831 2628", "3058 1887 9667", "665 4893 6548", "582 2884 40", "132 2766 7023", "780 776 6934", "4886 357 7267", "646 3631 2986", "1957 4834 3447", "2400 4240 7840", "1839 1720 4261", "3414 3105 2046", "9 4078 3634", "3344 4013 1445", "4773 507 8800", "1623 2429 2765", "3807 836 6987", "1645 4403 2136"};
    int v = 69;
    int g = 45;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 46113;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> platforms = {"91 1043 5823", "2380 199 3963", "3360 2095 2630", "638 3184 5864", "681 4724 2451", "4501 2982 8471", "4727 1963 3932", "2537 4173 7619", "4932 597 8845", "3709 566 2077", "4488 4575 7837", "3504 4683 9322", "4782 4704 5191", "1427 478 8884", "4382 1271 164", "1024 3266 359", "1439 3816 7846", "302 1471 748", "1155 517 7661", "132 3163 902", "1436 3730 7801", "1607 342 1606", "3322 1369 3450", "345 2801 2927", "2146 1347 9802", "2333 1981 8906", "2695 2194 791", "4133 2758 9548", "657 2756 5972", "1781 4213 1580", "557 2026 7120", "115 4609 6305", "1980 4292 6379", "1721 2703 4115", "4252 631 2729", "1859 2572 3931", "1044 814 8481", "1528 2040 1087", "3142 3765 8789", "3193 1619 559", "3388 4649 3388", "4009 520 3628", "4334 3713 8872", "2177 4362 8632", "4233 1178 5726", "928 565 8000", "1616 3670 7599", "2193 1196 772", "1938 2003 37", "1806 4577 6663"};
    int v = 65;
    int g = 12;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 83744;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> platforms = {"3398 3497 4347", "1535 1404 9924", "2974 4857 4277", "2609 3508 2922", "835 1030 898", "223 2655 9078", "3736 4544 9661", "4903 2686 9661", "4827 2067 6944", "834 198 4005", "3775 3151 5861", "3197 4901 852", "4115 3881 5309", "3054 1311 2193", "4439 4595 2155", "2989 3410 5846", "2265 518 5568", "431 2532 1707", "1316 1747 6566", "1798 2565 4247", "104 1626 7472", "4877 1281 7173", "4348 4241 6305", "2683 4824 9334", "2222 4489 3342", "46 4543 4688", "1360 3762 8186", "3237 995 2734", "581 295 280", "4282 1724 1242", "1994 4795 2400", "208 741 7264", "3082 484 8815", "3827 4544 6187", "1757 1898 2066", "1003 4667 5681", "468 1556 7088", "4890 2595 1828", "1769 231 4076", "2104 1625 1005", "778 4699 5239", "3829 3439 6076", "2957 730 7621", "2966 4083 2352", "4584 2154 6440", "1410 1414 7887", "4259 1272 843", "1341 1832 7780", "2184 2715 1200", "3872 208 3693"};
    int v = 25;
    int g = 92;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 25606;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> platforms = {"845 777 9466", "4152 808 9370", "1428 226 2329", "120 3356 10", "3406 2087 969", "3457 3058 8910", "2313 3002 4048", "2884 1023 3244", "2550 2253 7239", "182 2227 4902", "2063 3568 1762", "1980 2097 9800", "100 2062 6134", "3768 2604 3184", "4224 3756 2486", "186 2545 5082", "371 3234 882", "2335 2884 9432", "3397 3106 3975", "2615 4133 5672", "4377 3691 2311", "96 2893 488", "1237 31 9230", "865 2063 575", "2195 3795 401", "4384 3766 8645", "750 26 7241", "3118 2017 9152", "3249 4250 5386", "2288 4895 9210", "3089 1805 8621", "3406 2980 4708", "3615 4517 1674", "1314 3888 3148", "2846 3750 8350", "1605 943 5682", "1762 2336 5550", "1727 2311 2642", "2969 349 8407", "1807 4305 3281", "1927 1813 4307", "4703 4073 6456", "4542 107 8893", "610 1407 1302", "3996 1758 1269", "4075 1334 2328", "4524 1113 7125", "4947 3902 627", "2564 543 2201", "3456 1531 3517"};
    int v = 8;
    int g = 50;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 18642;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> platforms = {"2672 3706 8094", "608 3478 3693", "33 3717 3419", "2454 311 4975", "4484 270 2483", "1717 58 2686", "2658 4864 4448", "943 3746 3036", "3509 733 8631", "850 1435 9259", "2167 337 48", "2167 4410 5560", "2128 4423 8879", "1039 804 4345", "3512 4389 882", "2669 622 4220", "325 3376 453", "1486 4236 3065", "906 2876 4620", "4330 4818 6854", "1109 3560 4317", "3891 919 1475", "4323 4299 8066", "1052 1544 2266", "460 1838 2652", "503 2000 4967", "2978 3024 7604", "1150 3692 5082", "4928 396 4173", "618 91 7528", "1927 4631 7272", "919 3320 1804", "4856 3173 183", "3795 1565 7150", "525 1195 2463", "4566 1842 8815", "1285 2651 6977", "4418 3976 5792", "4854 2108 7530", "24 2803 9376", "4646 621 4894", "2700 2901 4035", "439 4813 5060", "3709 4765 2568", "4735 3252 6508", "595 2450 4603", "1453 4598 2002", "2530 450 8578", "3586 1956 3870", "3571 2623 5940"};
    int v = 46;
    int g = 12;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 51592;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> platforms = {"4138 4780 3612", "4333 2645 408", "2778 4204 2710", "598 2386 2431", "2075 4286 1439", "1752 1417 444", "649 3825 2521", "4329 3991 456", "1027 3848 6280", "3402 3917 8087", "143 4953 4204", "4756 4693 9539", "2559 926 1144", "743 2172 3166", "4306 53 8717", "2888 4981 5374", "3603 391 1776", "2820 4825 6908", "969 4171 3143", "3088 2026 3402", "4129 4987 9349", "1506 4875 8544", "4276 3401 7198", "4507 723 7797", "1 3256 2187", "4495 3530 6174", "2468 2745 3517", "3929 3789 3326", "2002 151 3414", "1610 4988 2298", "1 4223 8916", "2812 4713 3308", "2228 4535 3155", "1450 3118 9124", "1651 150 743", "670 4192 8275", "4062 2091 2526", "4286 220 8092", "3470 2460 8714", "3260 750 3789", "4516 4395 4502", "2872 1544 2570", "4695 2485 5056", "1362 207 4281", "438 4296 9876", "4867 2375 8257", "4824 2025 4570", "420 1222 8987", "3536 4495 8753", "3755 3690 185"};
    int v = 6;
    int g = 5;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 37376;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> platforms = {"4035 1275 3565", "1134 4654 4160", "4803 1363 4569", "3588 2269 9686", "2716 721 3772", "3510 4244 860", "3420 3120 6971", "3573 901 353", "4409 4388 7236", "562 1596 6107", "2082 3986 1510", "4610 1981 9583", "632 3357 8373", "3821 3337 7051", "473 3257 5319", "2286 160 1757", "3923 4620 3103", "3200 3707 2329", "222 351 7384", "3123 25 8515", "2193 2037 451", "3615 4809 998", "1373 4722 7778", "3284 1337 7766", "3912 1346 4777", "3569 2413 4639", "934 2230 6231", "1244 4303 1685", "689 4229 1594", "3181 2183 7791", "1841 49 2773", "4282 4680 8278", "3127 880 1567", "735 2765 251", "2200 2676 5790", "1389 1690 9429", "3370 2310 3182", "4009 1668 8576", "3864 129 9196", "1093 3568 3632", "1029 2134 1741", "2798 863 2772", "964 4905 3001", "2586 2356 3482", "1857 333 7783", "1393 2255 2463", "1357 325 5988", "4078 3513 9618", "3187 2720 3796", "4963 2499 2572"};
    int v = 63;
    int g = 54;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 47681;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> platforms = {"3596 1004 2472", "2954 697 4805", "1281 2840 5074", "4986 869 283", "3897 2151 4925", "4292 2802 6824", "3313 671 7718", "1694 2609 3667", "4025 2638 9444", "1584 2653 9935", "147 1259 4096", "3716 1476 3247", "834 431 6217", "2712 1787 9957", "4536 4606 6325", "909 385 4815", "3824 4354 9312", "1756 2485 9061", "1166 4459 7652", "4755 1316 1726", "3166 1177 5085", "4862 3719 7509", "4520 1716 2901", "4074 2652 7854", "4267 2274 472", "2758 160 3158", "945 4965 5672", "3585 4617 1351", "1597 4756 2113", "4180 2686 7810", "1621 367 419", "1061 3371 9236", "2265 3832 313", "4240 3119 4730", "4192 4227 3066", "5 4611 5811", "1475 1745 9338", "2848 4847 610", "1588 1760 9434", "1622 2125 1455", "31 2791 726", "148 599 5186", "1487 1924 7816", "232 1230 5571", "2821 3392 1602", "2497 4615 5474", "1874 1602 4364", "3183 3101 5670", "4992 2766 4350", "1592 3922 4058"};
    int v = 28;
    int g = 70;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 33679;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> platforms = {"0 0 1", "5000 5000 10"};
    int v = 100;
    int g = 87;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> platforms = {"0 0 1", "2 4 1", "4 0 1"};
    int v = 1;
    int g = 2;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> platforms = {"1 1 50"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> platforms = {"2061 1876 1573", "4534 1152 4041", "941 3763 4582", "892 3247 2734", "1684 3046 569", "1225 2322 337", "4437 3364 5757", "1130 376 6691", "936 1598 3224", "677 2432 7876", "4447 2421 9385", "96 3849 8808", "536 362 2650", "2783 690 7907", "4765 1095 7426", "2956 1118 1084", "904 1179 4223", "2821 3277 5191", "755 2959 7945", "1578 2652 7275", "4181 3861 7813", "1119 4343 1702", "428 1777 5259", "761 3251 8715", "3692 266 5192", "3755 416 7504", "77 748 2753", "4327 184 6667", "4667 1984 5199", "990 3801 5702", "1455 1279 7408", "1819 560 9620", "3947 3477 7488", "4821 3126 9205", "488 917 1561", "4016 4497 7961", "778 3071 726", "1802 2551 5097", "981 2453 8222", "4264 880 9858", "3222 3144 6218", "4109 672 6122", "4848 4545 4032", "2215 4401 248", "1718 1336 9418", "4130 1094 970", "1067 1735 7907", "2747 3178 8916", "1356 586 8425", "3614 4391 6293"};
    int v = 100;
    int g = 9;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 100719;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> platforms = {"4999 1 10000", "4998 2 10000", "4999 3 10000", "4999 4 10000", "4999 5 10000", "4999 6 10000", "4999 7 10000", "4999 8 10000", "4999 9 10000", "4999 10 10000", "4999 11 10000", "4999 12 10000", "4999 13 10000", "4999 14 10000", "4999 15 10000", "4999 16 10000", "4999 17 10000", "4999 18 10000", "4999 19 10000", "4999 20 10000", "4999 21 10000", "4999 22 10000", "4999 23 10000", "4999 24 10000", "4999 25 10000", "4999 26 10000", "4999 27 10000", "4999 28 10000", "4999 29 10000", "4999 30 10000", "4999 31 10000", "4999 32 10000", "4999 33 10000", "4999 34 10000", "4999 35 10000", "4999 36 10000", "4999 37 10000", "4999 38 10000", "4999 39 10000", "4999 40 10000", "4999 41 10000", "4999 42 10000", "4999 43 10000", "4999 44 10000", "4999 45 10000", "4999 46 10000", "4999 47 10000", "4999 48 10000", "4999 49 10000", "4999 5000 10000"};
    int v = 1;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 500000;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> platforms = {"1334 3467 41", "724 4169 6500", "1962 4358 1478", "3145 705 4464", "4961 1827 3281", "1942 2995 491", "2391 436 4827", "153 3902 4604", "2421 2382 292", "4895 4718 8716", "4771 1726 5447", "4912 1869 1538", "2035 1299 5667", "3811 3703 9894", "2673 333 1322", "2711 141 4664", "547 1868 8253", "2757 2662 7644", "3723 2859 37", "778 2529 9741", "2190 3035 2316", "106 288 1842", "4264 3942 9040", "3805 2446 2648", "4370 1729 5890", "1101 6 5350", "4629 3548 4393", "4954 4084 2623", "4966 1840 8756", "1308 3931 7376", "4626 2439 6944", "1538 537 1323", "2929 2082 6118", "1115 4833 6541", "2704 4658 4639", "2306 3977 9930", "21 2386 1673", "4072 1924 8745", "1777 829 6270", "1512 97 5573", "4161 3290 3986", "4767 2355 8636", "4031 574 3655", "1150 2350 2052", "3966 1724 6941", "191 1107 3430", "457 1337 8007", "383 2753 2287", "2209 3909 4945", "3588 4221 9758"};
    int v = 4;
    int g = 6;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 20753;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> platforms = {"1096 710 8122", "4946 3130 7927", "3543 915 8751", "738 4312 9440", "1090 994 5369", "4304 4721 8981", "4948 4039 9614", "154 3841 4575", "50 4994 7971", "1624 2528 3041", "1032 3389 2813", "3687 4212 3707", "2354 4165 7041", "4351 829 9432", "3184 1045 8789", "1001 520 2508", "1511 2077 1530", "4116 2064 4096", "4679 671 9841", "4444 4752 8485", "3561 211 2851", "4962 3891 7654", "2810 1639 2688", "3720 3971 9673", "2528 2730 7077", "4726 223 5798", "315 3314 468", "3085 1769 1617", "4829 1195 397", "4250 2963 4411", "1354 1881 4684", "2110 745 5036", "3518 1665 1624", "794 1030 569", "1762 2452 1534", "3979 278 1404", "843 3725 7834", "501 1279 4945", "3857 4545 4202", "1781 3082 2086", "3121 4680 8299", "3176 3806 5051", "967 1086 5905", "1244 2620 3651", "2470 1509 1617", "1268 4530 5686", "2338 654 1968", "1182 4124 7571", "3761 2663 201", "2570 3712 7658"};
    int v = 84;
    int g = 95;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 45951;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> platforms = {"0 0 1", "23 45 10", "12 34 56", "22 33 12", "45 6 7", "13 25 3", "17 7 7"};
    int v = 17;
    int g = 30;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> platforms = {"890 2722 1", "905 2913 1"};
    int v = 6;
    int g = 56;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> platforms = {"0 0 100", "5 5 100"};
    int v = 100;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> platforms = {"1 100 1", "2 1 1"};
    int v = 1;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> platforms = {"0 5000 100", "1 0 100"};
    int v = 100;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> platforms = {"3 10 7", "5 16 7", "20 9 12"};
    int v = 2;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> platforms = {"0 0 2", "0 1 2", "0 2 2"};
    int v = 1;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> platforms = {"1334 3467 41", "724 4169 6500", "1962 4358 1478", "3145 705 4464", "4961 1827 3281", "1942 2995 491", "2391 436 4827", "153 3902 4604", "2421 2382 292", "4895 4718 8716", "4771 1726 5447", "4912 1869 1538", "2035 1299 5667", "3811 3703 9894", "2673 333 1322", "2711 141 4664", "547 1868 8253", "2757 2662 7644", "3723 2859 37", "778 2529 9741", "2190 3035 2316", "106 288 1842", "4264 3942 9040", "3805 2446 2648", "4370 1729 5890", "1101 6 5350", "4629 3548 4393", "4954 4084 2623", "4966 1840 8756", "1308 3931 7376", "4626 2439 6944", "1538 537 1323", "2929 2082 6118", "1115 4833 6541", "2704 4658 4639", "2306 3977 9930", "21 2386 1673", "4072 1924 8745", "1777 829 6270", "1512 97 5573", "4161 3290 3986", "4767 2355 8636", "4031 574 3655", "1150 2350 2052", "3966 1724 6941", "191 1107 3430", "457 1337 8007", "383 2753 2287", "2209 3909 4945", "3588 4221 9758"};
    int v = 100;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 79433;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> platforms = {"1 100 100", "2 1 100"};
    int v = 1;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> platforms = {"0 1 10", "5000 0 1000"};
    int v = 1;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> platforms = {"46 18 729", "90 95 917", "91 83 948", "93 0 1632", "48 78 860", "42 58 520", "18 89 304", "58 55 115", "1 68 649", "81 39 1164", "75 43 478", "83 10 1399", "28 21 1862", "62 88 835", "36 49 652", "77 12 578", "0 98 87", "67 89 788", "20 33 103", "53 15 400", "15 72 1262", "77 32 1925", "85 82 1200", "57 32 1851", "2 22 1186", "72 8 466", "56 95 1781", "40 25 858", "52 71 1919", "70 31 1199", "43 3 56", "73 44 1648", "12 51 1488", "77 72 1070", "42 26 1712", "97 18 1780", "6 50 1790", "1 60 422", "57 80 1348", "65 65 395", "45 96 111", "60 87 1640", "60 47 925", "38 65 1712", "63 79 164", "73 21 1496", "90 69 367", "15 26 292", "89 2 1046", "29 13 1979"};
    int v = 100;
    int g = 100;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 29650;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> platforms = {"0 0 1", "1 1 1"};
    int v = 100;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> platforms = {"1 2 1", "2 1 1"};
    int v = 10;
    int g = 5;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> platforms = {"0 0 41", "0 1 8467", "0 2 6334", "0 3 6500", "0 4 9169", "0 5 5724", "0 6 1478", "0 7 9358", "0 8 6962", "0 9 4464", "0 10 5705", "0 11 8145", "0 12 3281", "0 13 6827", "0 14 9961", "0 15 491", "0 16 2995", "0 17 1942", "0 18 4827", "0 19 5436", "0 20 2391", "0 21 4604", "0 22 3902", "0 23 153", "0 24 292", "0 25 2382", "0 26 7421", "0 27 8716", "0 28 9718", "0 29 9895", "0 30 5447", "0 31 1726", "0 32 4771", "0 33 1538", "0 34 1869", "0 35 9912", "0 36 5667", "0 37 6299", "0 38 7035", "0 39 9894", "0 40 8703", "0 41 3811", "0 42 1322", "0 43 333", "0 44 7673", "0 45 4664", "0 46 5141", "0 47 7711", "0 48 8253", "0 49 6868"};
    int v = 100;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 266218;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> platforms = {"0 0 100", "0 100 100"};
    int v = 100;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> platforms = {"5 1000 10", "6 1 10"};
    int v = 100;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> platforms = {"2 3 1", "3 4 1", "4 5 1", "5 6 1", "6 7 1", "7 8 1", "8 9 1", "9 10 1", "10 11 1", "11 12 1", "12 13 1", "13 14 1", "14 15 1", "15 16 1", "16 17 1", "17 18 1", "18 19 1", "19 20 1", "20 21 1", "21 22 1", "22 23 1"};
    int v = 2;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> platforms = {"11 11 10", "1 2 10"};
    int v = 9;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> platforms = {"1 49 1", "1 48 1", "1 47 1", "1 46 1", "1 45 1", "1 44 1", "1 43 1", "1 42 1", "1 41 1", "1 40 1", "1 39 1", "1 38 1", "1 37 1", "1 36 1", "1 35 1", "1 34 1", "1 33 1", "1 32 1", "1 31 1", "1 30 1", "1 29 1", "1 28 1", "1 27 1", "1 26 1", "1 25 1", "1 24 1", "1 23 1", "1 22 1", "1 21 1", "1 20 1", "1 19 1", "1 18 1", "1 17 1", "1 16 1", "1 15 1", "1 14 1", "1 13 1", "1 12 1", "1 11 1", "1 10 1", "1 9 1", "1 8 1", "1 7 1", "1 6 1", "1 5 1", "1 4 1", "1 3 1", "1 2 1", "1 1 1", "1 0 1"};
    int v = 100;
    int g = 100;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> platforms = {"1 1 5", "2 2 5"};
    int v = 10;
    int g = 3;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> platforms = {"3 10 45", "5 15 4564", "8 9 12"};
    int v = 97;
    int g = 45;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 4621;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> platforms = {"1516 1442 8833", "231 4251 8464", "3600 4194 4012", "2319 3016 9204", "3360 3753 3255", "1131 4076 6834", "973 2296 9770", "4004 4576 7293", "4832 1123 5124", "1728 1326 199", "1273 642 2016", "316 4542 3495", "2548 4328 4856", "4051 3620 2007", "3755 4580 7714", "2954 1649 9602", "4960 1576 9363", "3277 987 2979", "2823 634 2171", "1422 165 6154", "1484 734 4492", "3587 679 6481", "534 1230 1719", "3619 4794 7411", "66 208 3095", "4133 3417 9429", "2794 963 9070", "528 3096 3637", "3376 4323 9738", "2602 1472 788", "4880 4434 4932", "1020 4913 8366", "286 3179 8393", "4744 1941 6853", "674 2418 5885", "2537 1208 9212", "2286 1764 7343", "216 795 9246", "2093 865 6037", "2928 869 7502", "1044 3826 276", "3302 1072 3992", "2 846 4028", "4164 3967 2004", "78 1854 6313", "2794 2947 2179", "2895 1875 1900", "1943 4194 2011", "2646 2266 8529", "2271 3493 5327"};
    int v = 4;
    int g = 93;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 17710;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> platforms = {"1 1 10", "2 2 10"};
    int v = 1;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> platforms = {"1110 54 8051", "107 11 1436", "115 66 6158", "1317 48 6932", "1008 6 509", "1425 65 2988", "664 24 6486", "753 92 5591", "554 68 2231", "999 24 910", "862 2 951", "443 57 3364", "855 84 6554", "838 82 7439", "1793 68 9860", "1536 86 167", "1808 21 4734", "991 82 6990", "1012 7 973", "297 71 3428", "807 61 8087", "1252 48 4203", "912 37 5821", "743 53 326", "667 79 1072", "645 46 900", "1370 37 3169", "817 31 4746", "908 90 5270", "924 50 76", "996 99 1802", "1006 50 8939", "401 25 5767", "1179 69 9932", "391 54 6150", "1438 33 9375", "279 6 8188", "1492 36 1422", "542 98 5675", "1934 97 7570", "1917 71 36", "426 86 2936", "1462 60 2629", "397 74 1986", "525 97 2002", "1047 82 1319", "1700 29 6498", "328 21 5003", "732 48 8249", "733 6 3117"};
    int v = 100;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 47330;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> platforms = {"1 1 1", "2 2 2", "3 3 3", "4 4 4", "5 5 5", "6 6 1", "7 7 2", "8 8 3", "9 9 4", "10 15 5", "11 11 1", "12 12 2", "13 3 13", "14 14 4", "15 15 5", "21 21 1", "22 22 2", "23 23 3", "24 24 4", "25 25 5", "32 32 1", "32 22 2", "33 33 3", "49 49 4", "500 500 5", "100 100 1", "200 200 2", "300 300 3", "445 445 4", "545 545 5", "101 1 1", "82 82 2", "83 83 3", "84 84 4", "85 85 5", "81 81 1", "27 27 2", "37 73 3", "74 74 4", "57 57 5", "61 61 1", "62 62 2", "63 63 3", "64 64 4", "65 65 5", "10 10 1", "20 20 2", "30 30 3", "40 40 4", "50 50 5"};
    int v = 100;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> platforms = {"2 1 4", "1 2 5"};
    int v = 1;
    int g = 2;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> platforms = {"5 5 5", "4 4 5"};
    int v = 100;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> platforms = {"0 24 1", "9 0 1"};
    int v = 2;
    int g = 2;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> platforms = {"5 5 1", "4 4 2"};
    int v = 3;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> platforms = {"10 10 10", "9 9 10"};
    int v = 100;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> platforms = {"0 0 10", "15 5 10"};
    int v = 10;
    int g = 4;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> platforms = {"2 2 2", "2 4 2", "2 6 1", "2 18 2", "2 25 1"};
    int v = 1;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> platforms = {"0 0 1", "1 1 1", "2 2 1"};
    int v = 100;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> platforms = {"99 100 1", "101 100 1", "98 99 1", "102 99 1", "97 98 1", "103 98 1", "96 97 1", "104 97 1", "95 96 1", "105 96 1", "94 95 1", "106 95 1", "93 94 1", "107 94 1", "92 93 1", "108 93 1", "91 92 1", "109 92 1", "90 91 1", "110 91 1", "89 90 1", "111 90 1", "88 89 1", "112 89 1", "87 88 1", "113 88 1", "86 87 1", "114 87 1", "85 86 1", "115 86 1", "84 85 1", "116 85 1", "83 84 1", "117 84 1", "82 83 1", "118 83 1", "81 82 1", "119 82 1", "80 81 1", "120 81 1", "79 80 1", "121 80 1", "78 79 1", "122 79 1", "77 78 1", "123 78 1", "76 77 1", "124 77 1", "75 76 1", "125 76 1"};
    int v = 100;
    int g = 100;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> platforms = {"3 10 7", "5 15 7", "6 9 12"};
    int v = 2;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<string> platforms = {"2 18 1", "4 14 1", "5 7 6"};
    int v = 1;
    int g = 2;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<string> platforms = {"0 0 1", "0 1 1", "0 2 1", "0 3 1", "0 4 1", "0 5 1", "0 6 1", "0 7 1", "0 8 1", "0 9 1", "0 10 1", "0 11 1", "0 12 1", "0 13 1", "0 14 1", "0 15 1", "0 16 1", "0 17 1", "0 18 1", "0 19 1", "0 20 1", "0 21 1", "0 22 1", "0 23 1", "0 24 1", "0 25 1", "0 26 1", "0 27 1", "0 28 1", "0 29 1", "0 30 1", "0 31 1", "0 32 1", "0 33 1", "0 34 1", "0 35 1", "0 36 1", "0 37 1", "0 38 1", "0 39 1", "0 40 1", "0 41 1", "0 42 1", "0 43 1", "0 44 1", "0 45 1", "0 46 1", "0 47 1", "0 48 1", "0 49 1"};
    int v = 10;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<string> platforms = {"1 50 50", "50 50 49", "50 49 5"};
    int v = 1;
    int g = 100;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<string> platforms = {"5000 5000 1", "3789 1323 1"};
    int v = 72;
    int g = 26;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<string> platforms = {"1 1 1", "2 2 2", "3 3 3", "4 4 4", "5 5 5", "6 6 6", "7 7 7", "8 8 8", "9 9 9", "10 10 10", "11 11 11", "12 12 12", "13 13 13", "14 14 14", "15 15 15", "16 16 16", "17 17 17", "18 18 18", "19 19 19", "20 20 20", "21 21 21", "22 22 22", "23 23 23", "24 24 24", "25 25 25", "26 26 26", "27 27 27", "28 28 28", "29 29 29", "30 30 30", "31 31 31", "32 32 32", "33 33 33", "34 34 34", "35 35 35", "36 36 36", "37 37 37", "38 38 38", "39 39 39", "40 40 40", "41 41 41", "42 42 42"};
    int v = 100;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 903;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<string> platforms = {"3 10 0", "5 15 7", "1 5 7"};
    int v = 2;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<string> platforms = {"1 0 1", "1 1 1"};
    int v = 1;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<string> platforms = {"0 0 1", "1 1 1"};
    int v = 100;
    int g = 2;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<string> platforms = {"2315 3439 1640", "3139 4477 8384", "2417 592 1497", "158 3336 2471", "3601 4947 4066", "2306 3474 4925", "1540 3118 9209", "161 4720 3433", "2828 1811 7817", "1813 1759 5862", "253 3400 8130", "1082 3136 5445", "1674 4633 9936", "10 2104 7354", "1309 2522 3864", "1135 2447 8817", "4253 3008 1123", "326 1442 9015", "2137 611 529", "3897 1474 8357", "3649 956 170", "1785 1401 6775", "2770 1337 2857", "1226 43 5883", "3748 3907 7245", "1195 4076 9906", "4204 200 1042", "1998 4215 1647", "2609 1096 3325", "435 4453 5463", "1391 976 5712", "2792 2751 5713", "482 609 3850", "1877 2844 1620", "2137 90 7846", "1213 1348 6594", "1413 2390 9141", "1981 390 8345", "3077 3715 343", "2531 530 9305", "3507 2594 4740", "2610 3307 1132", "3219 3509 276", "2416 129 2110", "3858 4327 3988", "206 2273 6125", "3949 1415 7338", "4339 1112 5104", "4406 2808 2085", "1289 2113 1514"};
    int v = 2;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 22383;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<string> platforms = {"5 15 7", "3 10 7"};
    int v = 2;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<string> platforms = {"10 0 1", "9 10 1"};
    int v = 100;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<string> platforms = {"1 1 4", "2 5000 4"};
    int v = 1;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<string> platforms = {"5 5 5", "4 4 5"};
    int v = 1;
    int g = 100;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<string> platforms = {"1218 2784 4390", "4191 4526 1132", "313 4576 1352", "2257 566 427", "3001 2383 1217", "995 2729 3778", "3940 342 3136", "4841 3991 3736", "1969 2903 155", "1688 1114 2161", "818 4370 26", "3429 1371 1563", "4945 1864 870", "3509 893 3535", "2981 3361 838", "2235 2151 4664", "98 4354 1035", "666 4671 1290", "2705 3453 1168", "4892 2734 4447", "3418 53 4074", "2750 2406 811", "2644 362 4294", "1652 999 4992", "3271 4882 4057", "2702 4321 2326", "1208 3299 3342", "28 4679 811", "760 2101 1630", "2656 1239 4811", "2483 2890 3616", "3079 318 3965", "2378 3882 535", "3813 3104 4581", "2144 2002 4600", "3002 569 3247", "749 3498 3889", "3876 2016 662", "500 1699 1726", "3329 663 4637", "4119 2285 334", "3590 4628 4139", "3036 3537 535", "3278 3107 4686", "1440 2588 283", "1319 2285 3067", "1425 2895 3078", "1190 1715 1596", "1901 3415 3469", "3338 4755 1305"};
    int v = 100;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 87102;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<string> platforms = {"0 0 1", "9 25 1"};
    int v = 4;
    int g = 8;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<string> platforms = {"4999 1 10000", "4998 2 10000", "4999 3 10000", "4999 4 10000", "4999 5 10000", "4999 6 10000", "4999 7 10000", "4999 8 10000", "4999 9 10000", "4999 10 10000", "4999 11 10000", "4999 12 10000", "4999 13 10000", "4999 14 10000", "4999 15 10000", "4999 16 10000", "4999 17 10000", "4999 18 10000", "4999 19 10000", "4999 20 10000", "4999 21 10000", "4999 22 10000", "4999 23 10000", "4999 24 10000", "4999 25 10000", "4999 26 10000", "4999 27 10000", "4999 28 10000", "4999 29 10000", "4999 30 10000", "4999 31 10000", "4999 32 10000", "4999 33 10000", "4999 34 10000", "4999 35 10000", "4999 36 10000", "4999 37 10000", "4999 38 10000", "4999 39 10000", "4999 40 10000", "4999 41 10000", "4999 42 10000", "4999 43 10000", "4999 44 10000", "4999 45 10000", "4999 46 10000", "4999 47 10000", "4999 48 10000", "4999 49 10000", "4999 5000 10000"};
    int v = 100;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 500000;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<string> platforms = {"0 500 1", "1 0 1"};
    int v = 1;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<string> platforms = {"0 100 1", "10 50 1", "20 0 1"};
    int v = 1;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<string> platforms = {"4899 1699 7777", "4592 4543 9620", "1593 928 4521", "4537 4303 1493", "36 3368 1481"};
    int v = 85;
    int g = 92;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 18890;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<string> platforms = {"1 1 1", "1 2 1", "1 3 1", "1 4 1", "1 5 1", "1 6 1", "1 7 1", "1 8 1", "1 9 1", "1 10 1", "1 11 1", "1 12 1", "1 13 1", "1 14 1", "1 15 1"};
    int v = 2;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<string> platforms = {"0 0 1", "100 51 10"};
    int v = 99;
    int g = 99;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<string> platforms = {"0 0 1", "1 4 1"};
    int v = 100;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<string> platforms = {"0 100 1", "0 99 1", "0 98 1", "0 97 1", "0 96 1", "0 95 1", "0 94 1", "0 93 1", "0 92 1", "0 91 1", "0 90 1", "0 89 1", "0 88 1", "0 87 1", "0 86 1", "0 85 1", "0 84 1", "0 83 1", "0 82 1", "0 81 1", "0 80 1", "0 79 1", "0 78 1", "0 77 1", "0 76 1", "0 75 1", "0 74 1", "0 73 1", "0 72 1", "0 71 1", "0 70 1", "0 69 1", "0 68 1", "0 67 1", "0 66 1", "0 65 1", "0 64 1", "0 63 1", "0 62 1", "0 61 1", "0 60 1", "0 59 1", "0 58 1", "0 57 1", "0 56 1", "0 55 1", "0 54 1", "0 53 1", "0 52 1", "0 51 1"};
    int v = 100;
    int g = 100;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<string> platforms = {"0 0 1", "1 1 1"};
    int v = 5;
    int g = 50;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<string> platforms = {"10 100 1", "13 106 1"};
    int v = 4;
    int g = 32;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<string> platforms = {"0 0 1", "0 1 1"};
    int v = 100;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<string> platforms = {"1 5000 10", "1024 1156 1"};
    int v = 99;
    int g = 72;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<string> platforms = {"10 10 10", "10 5 10"};
    int v = 100;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<string> platforms = {"100 100 1", "99 1 1"};
    int v = 100;
    int g = 10;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<string> platforms = {"0 1 1", "100 0 5"};
    int v = 1;
    int g = 1;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<string> platforms = {"1249 4912 86", "1261 4744 33", "1255 4840 92", "1252 4732 50", "1255 4693 66", "1243 4666 30", "1246 4645 10", "1237 4642 93", "1237 4639 55", "1255 4495 77", "1258 4450 95", "1237 4447 89", "1246 4402 72", "1252 4342 98", "1243 4315 82", "1255 4195 39", "1255 4048 70", "1258 3856 46", "1249 3781 72", "1261 3613 63", "1255 3466 44", "1237 3463 48", "1240 3454 47", "1249 3379 33", "1255 3232 18", "1240 3367 11", "1252 3259 85", "1255 3112 21", "1243 3232 38", "1240 3247 98", "1246 3199 68", "1246 3151 76", "1258 2959 10", "1261 2908 64", "1240 3139 22", "1237 3136 82", "1246 3088 98", "1240 3124 74", "1261 2893 24", "1237 2890 79", "1261 2650 13", "1255 2746 29", "1252 2638 79", "1243 2611 26", "1252 2530 77", "1252 2422 88", "1237 2527 79", "1237 2524 49", "1249 2452 97", "1252 2419 77"};
    int v = 3;
    int g = 6;
    PlatformJumper* pObj = new PlatformJumper();
    clock_t start = clock();
    int result = pObj->maxCoins(platforms, v, g);
    clock_t end = clock();
    delete pObj;
    int expected = 2378;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10710&pm=7847
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
typedef long long int64;
typedef unsigned long long uint64;
#define two(X) (1<<(X))
#define twoL(X) (((int64)(1))<<(X))
#define contain(S,X) (((S)&two(X))!=0)
#define containL(S,X) (((S)&twoL(X))!=0)
const double pi=acos(-1.0);
const double eps=1e-11;
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;}
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;}
template<class T> inline T sqr(T x){return x*x;}
typedef pair<int,int> ipair;
 
class PlatformJumper
{
public:
  int n;
  int X[100],Y[100],C[100];
  int f[100];
  int maxCoins(vector <string> platforms, int v, int g)
  {
    n=platforms.size();
    for (int i=0;i<n;i++)
    {
      istringstream sin(platforms[i]);
      sin>>X[i]>>Y[i]>>C[i];
      f[i]=C[i];
    }
    for (int step=0;step<100;step++)
      for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
          if (Y[i]>Y[j])
          {
            double H=Y[i]-Y[j];
            double t=sqrt(2.0*H/(double)(g));
            if (fabs((double)X[i]-X[j])<=t*v+eps)
              checkmax(f[j],f[i]+C[j]);
          }
    int result=0;
    for (int i=0;i<n;i++)
      checkmax(result,f[i]);
    return result;
  }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/