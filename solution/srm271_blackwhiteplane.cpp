/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4497
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

class BlackWhitePlane {
public:
    double area(vector<string> circles);
};

double BlackWhitePlane::area(vector<string> circles) {
    double ret;
    return ret;
}


int test0() {
    vector<string> circles = {"1 1 1"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 3.141592653589793;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> circles = {"4 3 1", "3 2 3", "8 1 1"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 28.274333882308138;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> circles = {"15 15 4", "15 25 4", "25 25 4", "25 15 4", "25 25 100"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 31214.86460606818;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> circles = {"10 10 10", "10 30 9"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 568.6282702997526;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> circles = {"0 0 6", "5 12 6"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 226.1946710584651;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> circles = {"0 0 1", "0 0 2", "0 0 3", "0 0 4", "0 0 5", "0 0 6", "0 0 7", "0 0 8", "0 0 9", "0 0 10"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 172.78759594743866;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> circles = {"0 0 1", "10 10 1", "20 20 1", "30 30 1", "40 40 1", "50 50 1", "60 60 1"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 21.991148575128552;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> circles = {"2549 8482 11", "9175 5927 35", "2747 6177 93", "5512 8791 81", "4487 8456 60", "6899 610 77", "9716 2202 3", "9312 5625 79", "4020 9851 85", "1640 7179 54", "5761 4348 51", "5917 3436 88", "6547 386 33", "182 7676 1", "6329 4496 89"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 194250.95695676407;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> circles = {"6639 9478 30", "9330 4239 8", "3700 3949 71", "3933 5360 72", "5345 7702 84", "2742 3409 58", "7901 6464 76", "7072 3821 36", "9597 6419 47", "4615 123 12", "9116 204 57", "485 2004 80", "8886 7347 42"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 133351.18336692595;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> circles = {"1630 5810 76", "7693 3949 81", "245 9099 47", "8799 7554 60", "1014 6729 90", "2656 9022 56", "2173 2644 57", "9069 8980 34", "9937 8409 91", "3171 543 2", "1316 4938 96", "8584 4788 63", "6330 6887 24", "6131 6699 39", "4936 2745 50", "6584 5143 76", "9730 2026 17", "5101 6540 6", "9013 8801 22", "637 9699 73", "9383 3694 70", "6052 1844 13", "772 5081 29", "9756 1282 8", "2797 143 56", "8048 3617 20", "7676 8352 7", "4382 4017 7", "4891 9363 69", "8379 920 35", "4257 5031 89", "9069 4765 44", "389 6696 88", "4197 2166 37", "746 4876 19", "6079 9308 56", "4629 4498 39", "5176 1535 50", "9852 5554 10", "728 7175 93", "432 2110 75", "4228 5688 37"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 407128.41675666213;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> circles = {"2600 7781 18", "1514 1222 12", "6948 1413 59", "8401 8764 9"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 12660.618393966866;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> circles = {"8853 2379 30", "8400 2855 100", "9175 3822 34", "1226 1679 37", "792 667 87", "5055 9901 13", "2357 3736 75", "7090 1357 15", "5147 9454 11", "5841 3050 43"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 91052.77987899297;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> circles = {"5791 440 2", "6315 8530 60", "9608 1559 71", "8801 8853 92", "8996 7855 22", "1604 420 48", "2145 9817 9", "3454 7363 2", "7829 7515 24", "4261 2485 20", "7539 7911 93", "6828 8592 74", "6229 2742 80", "6111 4541 26", "3010 5205 79", "3254 8507 48", "5891 6918 30", "4904 7151 9", "1083 9183 10", "69 8283 30", "8393 7265 25", "5182 6599 88", "5182 1535 24", "6220 2969 15", "3200 7984 46", "2789 8075 45", "540 874 97", "6156 6574 16", "6070 5378 7", "9439 9107 29", "1226 5948 14", "6662 1852 37", "4876 150 37", "6226 7767 100", "6545 5794 77", "6785 5563 17", "2413 4506 80", "7504 2684 57", "2608 5716 12", "3512 2495 14", "8184 4226 67", "9032 4394 38", "7356 491 38", "8363 4026 10", "3712 8375 45", "6792 60 90"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 387339.52463169984;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> circles = {"8738 8961 26", "9510 6561 85", "1782 6853 54", "6095 2566 68", "4805 1765 8", "1261 5097 56", "7971 9583 75", "5706 3929 30", "7147 1440 67", "6436 1690 5", "2675 2235 79", "918 3250 27", "4535 3081 43", "1561 602 48", "618 7643 94", "1080 7414 35", "4052 8213 45", "8032 757 57", "690 3421 85", "2395 757 61", "7252 6225 46", "9315 9944 67", "7193 3822 25", "5517 6148 54", "3401 1218 66", "3182 4062 51", "7311 2693 29", "725 4000 12", "1214 1266 58", "4724 328 82", "7449 817 98", "2724 9396 89", "2967 9656 7", "8435 5840 73", "3614 3422 79", "9595 9947 54", "7425 109 20", "155 5408 68", "3477 6134 42", "2916 9571 27", "462 544 43", "2155 5062 28", "287 164 20", "8619 5833 8", "4804 2376 63", "7114 139 43", "1287 0 76", "563 1003 83", "2777 4921 54"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 500559.3822744224;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> circles = {"9357 3577 58", "9390 8457 15", "9495 5383 85", "6908 8616 39", "8776 7363 6", "3899 3948 78", "6835 4351 84", "9651 1759 70", "2066 8230 26", "823 2971 93", "7824 5794 13", "8893 1362 36", "5978 2836 23", "9729 4940 34", "4040 1945 27", "4870 8405 1", "2418 2894 16", "9420 2666 5", "3348 9789 82", "2620 2900 32", "1052 8784 51", "9589 8778 72", "6567 12 68", "7057 2427 84", "8828 7793 46", "7962 9525 53", "8943 35 39", "9864 9689 31", "5319 1498 89", "6188 2391 10", "6609 1886 92", "7716 6770 37", "5324 9339 50", "283 6406 65", "656 8215 42", "3879 6234 68", "2591 7891 74", "3884 6566 35", "4000 2224 6", "7701 1728 77", "1100 7894 66", "5117 6284 55", "8675 9799 89", "9039 3238 22", "2797 3553 84", "340 4245 28", "3734 4605 20"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 459225.4477311416;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> circles = {"4664 348 32", "1142 407 6", "4612 4191 64", "9465 9992 61", "3866 2319 88", "6452 2140 89", "1951 2528 17", "9754 5682 11", "7835 9556 23", "3098 9791 92", "4810 2670 77", "7132 1028 30", "8144 7941 59", "6242 7941 11", "4341 5594 80", "4382 9592 5", "4348 330 16", "8733 3402 38", "6880 1824 21", "4618 709 16", "5472 9617 54", "9213 8884 9", "1882 1758 98", "672 4532 93", "2249 5570 90", "4228 6630 36", "9139 2329 83", "2925 9305 93", "5276 1209 3", "8849 4684 82", "1648 2040 2", "6365 4777 67", "6724 7003 21", "2859 938 15", "3087 8895 60", "153 8183 75"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 378558.7731649165;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> circles = {"3668 4602 21", "2623 4065 13", "8263 7165 55", "1650 5298 5", "6854 6688 65", "1389 1344 14", "206 5302 1", "2494 4356 9", "9499 5892 9", "6642 5821 59", "8303 9693 97", "263 4714 20", "123 8038 28", "2285 6439 91", "4491 4592 11", "6966 4290 52", "7864 491 100", "4535 3253 86", "6973 1866 3", "9376 961 25", "7504 5467 77", "940 8198 75", "707 6577 64", "4826 2151 72", "304 2296 100", "3295 5240 32", "2521 5656 7", "4389 1372 2", "8909 56 41"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 267179.88881719747;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> circles = {"5704 2000 54", "2337 4037 99", "3764 350 71", "4461 5472 26", "7033 1306 88", "1493 9730 35", "5164 3448 77", "5434 5931 54", "5791 2449 50", "3535 8139 16", "1726 2909 42", "4256 245 63", "8165 1534 29", "7038 5697 68", "9633 1783 52", "1701 7421 85", "3764 6503 41", "2740 470 36", "6921 4942 9", "1062 6451 21", "988 2096 86", "4075 450 87", "1965 4601 66", "2481 8571 84", "4751 6605 90", "1893 2784 48", "5638 4256 79", "7479 547 97", "9835 6772 56", "3532 4746 37", "6684 8674 65", "5099 6018 86", "5668 9790 71", "8884 9707 43", "2336 109 64", "3566 4416 64", "794 3780 36", "8626 3903 45", "8713 3403 58", "3876 9526 85", "7824 664 17", "2260 2274 87", "8016 5102 75", "4206 2172 12", "2137 7835 32", "6131 4156 41", "2068 4280 91", "6565 4111 45"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 590044.5074192741;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> circles = {"7529 2818 41"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 5281.017250684442;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> circles = {"3194 4224 52", "1829 9591 27", "7403 5337 54", "1241 5773 97", "535 4174 45", "2196 3890 79", "8701 3000 17", "3173 763 62", "5467 2685 79", "1257 8837 73", "2423 6738 26"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 126929.7679829884;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> circles = {"7751 9915 50", "5805 4485 13", "2230 5011 59", "2717 9425 1", "2386 2157 26", "554 8343 93", "6723 4136 66", "9840 7364 75", "8379 8336 26", "6653 91 14", "9419 5543 83", "6639 8270 28", "9674 4662 11", "1295 4057 35"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 111049.01711909202;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> circles = {"6924 9455 83", "3361 3448 39", "754 6970 66", "8190 6611 37", "9224 8733 89", "4836 5678 95", "1661 630 12", "7113 7970 82", "61 4914 90", "7883 4722 22", "5062 7635 22", "934 416 57", "6150 2328 66", "6944 7038 81", "1903 314 15", "4952 6740 40", "9232 3626 72", "2662 5590 31"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 217250.55677369493;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> circles = {"186 9561 80", "6646 3504 26", "5387 7104 85", "3102 2875 28", "7983 5983 92", "7376 8269 76", "4173 61 78"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 111240.65427096098;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> circles = {"6348 2262 2", "2350 6590 13"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 543.4955290710342;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> circles = {"2409 3174 54", "7026 8192 23", "8929 3131 48", "2169 5597 47", "7474 2105 33", "8720 7927 79", "5078 9603 52", "535 4334 11"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 56903.667734471914;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> circles = {"5512 2140 57", "229 3052 13", "2642 2949 27", "340 8337 81", "7143 6044 66", "3979 4244 30", "7156 3011 63", "3538 5598 47", "542 3089 67", "1936 6792 69", "9719 5219 84", "9487 4927 83", "8514 8555 12", "6174 5105 79", "823 6435 77", "7099 8004 54", "6628 7983 88", "7643 3662 95", "5928 6344 74", "6203 2072 54", "8407 8762 78", "6932 3913 39"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 293214.2671374962;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> circles = {"1826 9259 83", "1574 8703 24", "931 8221 58", "4745 111 64", "6901 7612 60", "4358 9453 36", "504 6548 11", "6661 619 57", "7739 6622 100", "3880 6220 48", "1076 1890 68", "2349 9412 81", "4813 4574 40", "1291 3533 50", "2004 5031 92", "8775 8384 9", "6684 5868 4", "3830 4359 54", "3945 4226 69", "8464 9317 12", "2476 6515 36"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 215067.14987945;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> circles = {"8700 5633 51", "4175 6436 2", "2647 7835 26", "692 8606 19", "5239 4972 35", "7077 7731 14", "6261 3675 96", "8525 5191 16", "5592 6739 47", "7172 7751 83", "66 6212 38", "7736 1965 32", "3161 5751 44", "2676 724 2", "4651 9243 12", "4343 5461 41", "1149 1487 98", "1517 7433 95", "4777 8438 18", "33 2630 43", "6749 2174 57", "9765 8026 81", "1029 7663 23", "6389 7589 77", "1051 7438 38", "4188 5388 84", "5363 4871 57", "8609 5875 24", "6694 9677 46", "2819 8609 28", "8858 8997 69", "3899 1996 56", "7786 6811 70", "9944 8553 54", "2452 1727 18", "2168 8545 82", "9138 1565 4", "4422 92 58", "3928 580 36", "9200 7676 96", "4336 4943 79", "2748 8022 23", "6945 2191 95"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 422886.64550706855;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> circles = {"8212 1753 47", "4041 355 8", "6178 9932 4", "7199 6247 21", "4165 9803 36", "6874 6916 4", "1809 6163 89", "659 2406 27", "2961 1260 30", "9346 4901 2", "9720 4213 75", "4385 820 25", "4137 7691 29", "2049 9692 19", "3218 1173 68", "100 5066 66", "1802 5113 31", "7026 4115 51", "1411 7517 66", "4851 7067 6", "6633 2128 53", "7156 1012 87", "4853 8515 81", "2541 5437 57", "5702 7154 93"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 209918.07952021636;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> circles = {"4736 6432 42", "148 9453 81", "6567 6529 10", "8679 5099 71", "9837 8366 83", "4681 9319 27", "2988 7083 93", "4942 2299 88", "7735 2315 28", "3543 6598 28", "6040 6400 9", "1944 122 40", "4643 1706 91", "7692 8069 47", "2375 4582 30", "1185 7155 36", "6540 8511 1"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 167801.8884061916;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> circles = {"6375 3109 64", "7730 261 11", "8819 4470 95", "2832 8176 15", "4488 1818 28", "4948 6053 83", "5177 1817 59", "2997 7302 91", "4867 7219 72", "2512 8286 83", "3521 5058 6", "2582 7823 85", "4093 9850 28", "2851 269 61", "2748 2977 13", "3263 1815 9", "6269 9451 70", "8491 6013 9", "9097 5464 36", "4907 4057 1", "952 2775 10", "3639 3743 24", "5234 2104 92", "6798 8812 90", "3921 5514 96", "8545 3334 56", "7256 283 18", "6421 4348 56", "1531 2239 22", "4294 5932 73", "6614 7948 74", "4698 9745 3", "1970 771 48", "8214 6563 71", "6500 8674 43", "9080 990 92", "9167 9869 92", "2512 2998 100", "4737 9219 70", "8414 5938 20", "7655 1668 61"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 479915.9769476842;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> circles = {"6658 8856 77", "2188 5060 60", "107 4560 92", "2755 408 40", "3844 8978 22", "8991 3685 97", "7908 7671 43"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 98441.80580023615;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> circles = {"3289 3847 81", "7529 5201 8"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 20813.051330032376;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> circles = {"280 6279 86", "4519 2069 26", "7377 6771 55", "2841 7211 10", "3139 300 23", "4429 2008 10", "5615 8207 1", "3818 6649 37", "7265 2797 22", "2267 4804 98", "8486 6768 97", "3892 1352 30", "3189 2463 47", "4769 6336 21", "516 7550 45", "1098 6919 65", "9504 7547 99", "453 8630 76"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 182432.2853939593;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> circles = {"3416 218 38", "5178 8218 25", "4627 8992 2", "799 8124 46", "359 3099 55", "3499 623 52"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 31158.315938303575;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> circles = {"7106 5735 99", "2877 7169 95", "7327 5163 57", "4557 4680 98", "3544 9541 81", "4129 2141 61", "9863 9944 18", "5055 9432 9", "6421 1597 48", "9942 4342 99", "8097 4640 79", "3858 9819 9", "7879 1597 59", "9484 472 11", "9653 1378 72", "1953 9064 99", "612 7207 33", "1025 2147 17", "5682 6672 85", "7898 2971 44", "8282 1720 9", "4546 2069 17", "1543 5469 98"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 313823.11494504526;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> circles = {"61 8886 50", "6882 7008 35"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 11702.432634621979;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> circles = {"4491 1289 42", "6425 4675 60", "8340 1190 92", "4241 2743 55", "6905 4856 73", "7225 9637 85", "3967 7110 2", "9422 2217 93", "1438 9358 45", "2974 5393 23", "7303 4774 49", "2160 8322 37", "2758 8407 76", "5775 5658 44", "8944 5368 27", "9373 7602 39", "755 5855 4", "8770 2047 49", "1817 8639 4", "7745 9729 18", "6341 2863 42", "9167 4818 87", "940 4817 72", "7978 9317 86", "8177 9709 78", "9668 5654 76", "4202 1663 62", "7196 8614 11", "1142 6236 2", "5968 764 38"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 302500.8150215075;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> circles = {"1792 5887 85", "5591 5501 99", "7353 8433 5", "5097 9113 97", "7952 2610 87", "4461 2930 28", "2488 6196 49"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 116911.22901069056;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> circles = {"6292 1610 64", "2817 9046 82", "5054 5686 5", "7838 6827 66", "557 3274 10"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 48069.509192577425;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> circles = {"5696 3083 81", "7809 8281 53", "7425 643 53", "710 7594 94", "8472 5914 69", "5162 8955 96", "1414 7990 10", "2584 3195 42", "4036 2410 23", "3198 3035 24", "1477 734 45", "7642 7070 47", "3851 3278 71", "7077 8939 12", "6037 4727 64", "6275 5280 44", "2620 3762 87", "1510 2870 29", "147 3848 16", "3771 8743 27", "4099 8308 2", "8419 242 60", "7278 9573 5", "665 3064 48", "2965 5533 34", "2645 7381 52", "8183 5931 73", "8080 3402 67", "2907 4318 73", "5265 1170 50", "8259 6911 93", "3596 4267 88", "6503 6790 40"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 340045.9888245592;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> circles = {"5810 7450 79", "8897 3366 17", "6342 3435 29", "6211 3249 80", "8590 6229 68", "2332 713 35", "1944 9815 52", "2592 3571 23", "5758 5788 28", "934 7075 96", "1222 8405 78", "8246 1120 65", "9797 2519 1", "901 8077 38", "3889 4194 4", "6325 1463 1", "7690 4733 98", "7008 8977 17", "8336 276 66", "8881 5491 31", "563 3986 18", "2192 3239 70", "7308 4380 76", "6462 3018 25", "4976 4670 86", "3448 2612 50", "944 2170 89", "6899 2339 80", "2894 7004 55", "2916 3217 58", "445 3729 40", "3433 6498 15", "9882 1091 73", "5594 4707 34", "8162 2104 70", "4851 9583 67", "3522 2204 93"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 403421.33742542606;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> circles = {"2008 7803 24", "5356 3916 28", "8797 7575 67", "9934 9506 12", "1675 9611 76", "5988 607 38", "614 7515 23", "6379 4964 58", "7411 761 35", "4180 9037 64", "1782 2034 2", "1030 1585 64", "1748 6191 84", "3729 7974 60", "8460 2879 62", "2491 8594 27", "3464 3953 62", "2098 3774 20", "9273 1352 3", "9701 228 61", "2726 4092 54", "8480 1334 60", "565 2707 88", "7825 790 29", "8515 8895 71", "6291 7175 4", "4632 5417 17", "6449 1261 59", "5361 9669 34", "8993 9168 98", "4207 1757 59", "252 8281 68", "8908 7720 89", "646 9946 16", "8994 8586 98", "4802 8744 82", "2357 9669 22", "5115 3533 18"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 370192.71192840696;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> circles = {"9736 5893 27", "5834 706 84", "9766 3394 4", "7207 8033 2", "3926 1284 73", "4742 964 31", "4378 2352 64", "3145 401 12", "4598 6895 54", "8862 9729 27", "6275 5256 94", "6873 7063 19", "578 1797 94"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 125704.5468480884;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> circles = {"272 3425 89", "1912 3833 21", "1293 5659 90", "8259 6825 67", "3921 589 33", "5739 1609 37", "384 4141 43", "7578 2029 38", "4786 2460 26", "2758 4725 40", "9060 9149 98", "8675 2571 62", "7519 9975 24", "7786 4534 87", "2538 4022 8", "3954 1594 78", "4490 3169 63", "8598 669 23", "6931 1103 7", "9471 1794 66", "1296 9355 100", "1358 6317 49", "7091 6653 31", "8941 8576 63", "2010 9959 85", "3092 8672 54", "4597 6390 82", "3615 2561 43", "8060 5588 47", "9470 6030 74", "1027 7458 5", "2556 4095 1", "7171 1338 88", "8709 5381 81", "4160 5077 4", "347 4914 89", "1256 6870 22", "4847 6933 9", "7277 4688 25", "1761 4621 99", "4666 8299 96", "6192 4460 84", "4220 2843 90", "5430 2140 90", "6713 1423 89", "7212 2898 9", "5352 2646 43", "1028 4796 2", "4862 8317 67"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 595102.4715915537;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> circles = {"7068 55 21", "2013 4745 71", "169 9845 76", "1821 3887 12", "7963 1906 2", "5534 6135 86", "8401 4497 78", "4980 6612 24", "5476 320 41", "3219 5393 73", "5086 483 20", "4922 8045 49", "9004 1004 87", "1920 5878 80", "7427 525 99", "3247 3839 79", "9804 3871 41", "7683 7295 92", "8783 2088 47", "7438 2215 90", "1537 6345 55", "9846 4264 60", "9294 6112 48", "322 4417 24"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 299214.7091058527;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> circles = {"2082 9950 2", "9950 9589 28", "6841 905 72", "3104 6427 87", "2116 5238 26", "3636 5233 22", "6043 5838 22", "8843 1834 83", "7962 8403 24", "3668 7735 99", "7391 3862 97", "7348 3223 31", "8721 4479 48", "9659 3148 85", "9292 3355 56", "2633 704 63", "6712 7743 73", "369 8784 46", "6948 5145 9", "3726 9022 23", "8651 753 99", "6174 6143 63", "6924 3475 61", "5100 5356 34", "1927 8847 38", "7507 3777 10", "6 8424 51", "3492 9013 68", "7993 215 71", "3198 9621 94", "637 1191 12", "6242 8767 93", "7407 4246 23", "5121 4809 89", "3695 6151 87", "8830 6168 18", "3556 3262 3", "8028 3526 48", "1920 6073 93", "1760 5566 78"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 474333.3668022551;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> circles = {"5333 497 61", "5910 8660 98", "9432 9305 95", "4148 1380 57", "8302 6304 95", "3540 8704 19", "1195 4483 63", "7765 5023 57", "7691 320 91", "9550 3374 71", "1011 1138 73", "836 6601 64", "3645 4710 53", "7889 885 15", "5188 6970 43", "1099 1653 22", "4555 4944 56", "8763 9527 52", "1384 5061 92", "2501 5867 38", "7533 7802 25", "9792 6565 28", "7409 8498 2"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 274820.2421507279;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> circles = {"7219 9371 84", "6872 9008 50", "5869 7407 81", "5084 8253 86", "9122 1257 63", "1353 1119 56", "6908 659 63", "4166 4991 53", "8443 6257 6", "6423 7427 11", "281 6382 79"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 137582.9086713114;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> circles = {"2530 7094 49"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 7542.963961269093;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> circles = {"504 5959 11", "8112 7447 48", "561 9486 28", "1965 268 10", "9359 897 95", "908 4785 83", "2385 1393 24", "672 172 54", "9615 9007 16", "6644 4667 27", "4197 3132 39", "8892 99 22", "5569 4357 32", "3621 8690 89", "6900 5564 58", "3224 4303 17"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 120332.42341044985;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> circles = {"7273 4740 13", "709 3403 37", "5326 6882 75", "5161 5636 70", "8038 8154 39", "9864 9750 17", "3361 1832 73", "4820 6495 69", "147 1115 35", "6205 1553 91", "1832 8936 41", "2991 6894 3", "1383 583 78", "4127 5670 72", "3926 2283 16", "7293 2017 8", "3483 9292 30", "1229 2047 79", "3594 3575 7", "5048 9206 15", "3706 1674 45", "2772 1640 17"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 177424.5867041372;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> circles = {"1260 283 80", "1873 6678 41", "8131 8506 44", "5589 1735 20", "7140 6447 35", "7266 4537 65", "9014 3063 83", "1439 2861 73", "3102 1411 95", "86 7906 47", "2272 6282 1", "4684 7422 97", "3140 9406 9", "6522 7750 63", "1134 5770 78", "6404 1737 80", "8310 7032 99", "5700 3535 100", "750 2375 36", "301 9331 73", "4778 9160 35", "5194 5824 55", "4893 27 53", "7632 3566 47"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 317165.76952846476;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> circles = {"9629 2523 88", "1692 4886 92", "6296 4962 56", "128 6943 95", "5940 9916 78", "1755 2114 24", "727 2048 43", "2831 1966 76", "8637 124 24", "2232 82 17", "1065 1099 83", "5380 6061 4", "2386 7192 88", "6960 3676 23", "1693 3502 43", "3701 739 74"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 207414.2301753053;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> circles = {"3180 6813 51", "990 266 30", "4824 1290 12", "6665 5003 20", "8287 8558 50", "7124 6955 24", "1005 4708 44", "2323 462 4", "3000 7293 98", "3106 9010 38", "5424 4481 18", "1355 9183 79", "579 7996 3", "5098 239 38", "1361 794 54", "4927 7214 83", "635 3383 58", "1534 2908 65", "6894 1606 56", "8062 3513 82", "7099 1868 49", "8368 9553 11", "1756 70 29", "1323 9021 51", "6352 6352 93", "5059 8571 75", "8190 1921 13", "1782 2070 84", "3809 5248 4", "6476 9344 4", "324 5491 32", "9641 2175 5", "9727 9653 52", "8359 5186 18", "9109 9507 47"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 280148.38329121616;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> circles = {"6711 3899 76", "3061 5823 66", "4896 7329 24", "6331 7062 73", "7525 7434 4", "2540 5836 24", "6189 1182 18", "791 6627 80", "7019 9397 45", "2761 1059 100", "6803 9899 21", "7271 5735 81", "5719 8816 93", "6804 4252 26", "1543 5725 79", "196 944 51", "5870 6481 93", "128 5594 79", "6063 3619 1", "5602 6406 22", "8093 1345 9", "6635 3583 60", "649 8310 12", "3902 3385 41", "621 9853 51", "8200 3373 38", "9803 315 64", "6555 9165 97", "3169 8362 53", "1613 2063 52", "5885 2320 61", "1744 1117 7", "9932 1334 36", "9314 2993 52", "7625 9821 95", "8789 412 21", "2821 3556 20", "6760 2440 18", "7236 2812 38", "6200 2079 65", "291 3575 26", "8584 4836 98", "5841 9826 61", "9862 4025 39", "2080 3757 77", "4704 8576 15", "5705 9360 91", "3629 2902 68"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 511140.26633171295;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> circles = {"2549 8482 11", "9175 5927 35", "2747 6177 93", "5512 8791 81", "4487 8456 60", "6899 610 77", "9716 2202 3", "9312 5625 79", "4020 9851 85", "1640 7179 54", "5761 4348 51", "5917 3436 88", "6547 386 33", "182 7676 1", "6329 4496 89"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 194250.95695676407;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> circles = {"0 0 10", "0 0 9", "0 0 8", "0 0 7", "0 0 6"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 219.91148575128557;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> circles = {"4 4 1", "4 4 2", "4 4 3"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 18.84955592153876;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> circles = {"5 5 5", "40 40 40"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 5105.088062083414;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> circles = {"4 3 1", "3 2 3", "8 1 1"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 28.274333882308138;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> circles = {"4 3 5", "4 3 4", "4 3 3"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 56.54866776461628;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> circles = {"3 3 3", "3 3 2", "3 3 1"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 18.84955592153876;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> circles = {"0 0 30", "0 0 20", "0 0 10"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 1884.9555921538758;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> circles = {"4 3 1", "4 3 2", "4 3 4", "4 3 3", "4 3 5", "4 3 6", "28 10 3"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 94.24777960769379;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> circles = {"4 3 1", "4 3 2", "4 3 4", "4 3 3", "4 3 5", "4 3 6", "28 10 3", "28 10 2", "28 10 1"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 84.82300164692441;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> circles = {"3 4 10", "5 5 100", "3 4 25"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 29766.59039276329;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> circles = {"1 1 3", "1 1 2", "1 1 1"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 18.84955592153876;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> circles = {"2 2 4", "2 2 10", "2 2 6", "2 2 8"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 175.92918860102844;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> circles = {"0 0 4", "0 0 3", "0 0 2"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 34.55751918948772;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> circles = {"3 0 5", "3 0 4", "4 0 1", "1 0 1"};
    BlackWhitePlane* pObj = new BlackWhitePlane();
    clock_t start = clock();
    double result = pObj->area(circles);
    clock_t end = clock();
    delete pObj;
    double expected = 34.55751918948773;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19949529&rd=8068&pm=4497
********************************************************************************
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
 
#define REP(i,n)        for(int i=0,_n=(n);i<_n;++i)
 
class okrag {
  public:
    double x, y, r;
};
vector<okrag> okregi;
int ile_roznych = 0;
 
bool cmp (okrag o1, okrag o2) {
  return o1.r > o2.r;
}
 
// k w j ?
bool zawiera_sie(int k, int j) {
  double odl = (okregi[k].x-okregi[j].x)*(okregi[k].x-okregi[j].x) + (okregi[k].y-okregi[j].y)*(okregi[k].y-okregi[j].y);
  return odl <= (okregi[j].r-okregi[k].r)*(okregi[j].r-okregi[k].r);
}
 
int poziom[100];
 
double pole (int k) {
  return M_PI * okregi[k].r * okregi[k].r;
}
 
class BlackWhitePlane{
      public:
            double area(vector <string> circles)  {
              REP(i,100) poziom[i] = 0;
              REP(i,circles.size()) {
                double x, y, r;
                sscanf (circles[i].c_str(), "%lf %lf %lf", &x, &y, &r);
                okrag o;
                o.x = x;
                o.y = y;
                o.r = r;
                okregi.push_back(o);
              }
              double white = 0;
              sort(okregi.begin(), okregi.end(), cmp);
              poziom[0] = 0;
              for(int j = 0; j < okregi.size(); j++) {
                for (int k = j-1; k >= 0; --k) {
                  if (zawiera_sie(j,k)) {
                    poziom[j] = poziom[k] + 1;
                    break;
                  }
                }
                if (poziom[j] % 2 == 0) white += pole(j);
                else white -= pole(j);
              }
              return white;
              
            }
};

********************************************************************************
*******************************************************************************/