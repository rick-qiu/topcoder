/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5924
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

class OneMorePoint {
public:
    string interiorPoint(vector<string> rectangles);
};

string OneMorePoint::interiorPoint(vector<string> rectangles) {
    string ret;
    return ret;
}


int test0() {
    vector<string> rectangles = {"0 0 2 1", "2 0 3 2", "1 2 3 3", "0 1 1 3"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> rectangles = {"0 0 2 1", "2 0 3 2", "1 2 3 3", "0 1 1 3", "1 1 2 2"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> rectangles = {"0 0 2 1", "3 0 4 2", "2 3 4 4", "0 2 1 3"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> rectangles = {"0 0 100 1", "100 1 200 2", "0 0 1 100", "50 50 51 51"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> rectangles = {"1 1 1000 1000"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> rectangles = {"7970 2637 8186 6998", "1988 7799 3271 7800", "5731 9468 8674 9469", "885 8068 9696 9626", "189 4448 6778 4449", "1309 7029 2602 7030", "6027 959 6028 9340", "4951 7610 4952 7611", "2746 6091 8082 6092", "8634 8479 8635 8480", "1509 3565 1541 3566", "9960 4926 9961 4927", "8366 4134 8367 4135", "5837 6007 5838 6008", "2072 4534 8479 4535", "169 1932 4923 2462", "8270 6080 8271 7037", "8409 3864 8410 3865", "9963 8435 9964 8436", "76 6723 2850 6724", "9890 9770 9891 9771", "5946 9951 9647 9952", "9184 5957 9185 5958", "4910 5741 9289 5742", "9034 5547 9035 6598", "1536 759 3893 5140", "2592 532 6074 5424", "4479 2570 4480 5149", "1453 596 7045 3718", "7790 2928 9642 2929", "5757 2674 9274 3063", "4742 4562 6007 7223", "5009 2797 5010 6189", "4556 1571 4557 4420", "223 3836 8239 9998", "2744 4406 2745 4702", "4620 5064 9927 5065", "9392 147 9393 6326"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> rectangles = {"9662 7074 9663 7075", "3737 2253 9523 5505", "3786 4815 9204 9742", "9554 7616 9555 7617", "2215 1116 2216 1852", "8025 6125 8026 6126", "1154 2030 6391 8955", "4416 4641 4417 4642", "8951 6256 8952 6257", "2765 2709 4586 9770", "9177 6597 9178 8458", "8357 5937 8358 5938", "1412 6347 4514 6348", "3461 943 7372 2829", "4691 28 5921 6548", "3533 3555 3534 3556", "944 741 5010 4613", "2836 870 9309 9164", "2772 2467 8436 2468", "6064 6554 7928 6555", "4484 3928 4853 7578", "4925 4958 4926 4959", "2521 4619 2533 9651", "7961 7382 7962 9702"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> rectangles = {"5553 6142 5554 8090", "3318 7755 3319 7756", "3471 4531 4017 5082", "8980 8049 8981 8050", "1243 9668 1670 9669", "1033 3813 9937 8010", "6004 383 6005 1224", "1347 6364 9168 6365", "6872 6321 8374 7672", "1835 3406 1836 4969", "3774 6125 3775 6126", "4003 926 6444 4875", "5437 3546 8050 3547", "7546 5826 7547 5827", "8105 1042 8688 2931", "8095 9879 8096 9880", "8944 8548 8945 8549", "5686 7776 5687 7777", "2950 8035 8904 8036", "707 3728 4822 5823", "5636 470 5637 2445", "1639 483 7384 8383", "9820 8565 9821 8566", "5341 5807 5342 5808", "8189 6402 8190 6403"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> rectangles = {"2811 9355 2812 9356", "2717 559 3134 4090", "3706 679 3707 2025", "4059 1549 4060 1550", "5372 182 5373 1352", "2285 8366 2286 8367", "8704 3122 8705 5790", "3833 727 3834 728", "7585 4860 7804 6739", "1474 3627 8929 4755", "2259 7190 9965 7191", "700 5854 7833 5855", "5364 7923 5365 7924", "6600 9565 6839 9566", "741 961 6717 3829", "5078 6987 5079 6988", "2108 5756 6358 5757", "2371 4817 2372 4818", "5603 2804 8616 2805", "1687 8027 3987 8028", "8344 5156 8345 5157", "2610 6921 7427 6922", "9159 8245 9160 8246", "7008 4670 7009 4671", "6427 1283 9424 1284", "2182 5334 9701 6173", "5913 7439 7624 7440", "2787 8506 2788 8507", "4031 2355 4032 3545", "6032 1068 7330 9943", "4961 1431 9595 6732", "3493 27 9225 3438", "5474 7607 5475 7608", "5571 2469 6746 5056", "8554 9627 8555 9628", "3197 3812 5848 6501", "9190 1381 9191 9129", "7709 407 7710 2702"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> rectangles = {"1281 4619 6668 7975", "167 1969 4306 1970", "2294 4679 2295 9555", "311 1938 1281 7626", "6724 115 7600 8923", "6185 1775 6186 1776", "1181 4395 3792 4396", "8551 6311 8552 6312", "244 1766 9809 1794", "6704 5358 6705 7160", "8729 3908 8730 3909", "2184 7117 8457 7118", "7452 101 9286 1093", "6580 4602 7699 8184", "4169 3761 4170 3762", "7901 8331 7902 8332", "1982 798 8092 1406", "4886 2627 6144 2731", "3541 4348 3591 4349", "6017 5411 6018 5626", "5355 4091 6772 4092", "3715 7647 7578 7648", "6325 9174 7961 9175", "2630 1922 6583 5259", "1934 9100 8451 9101", "9256 82 9257 3345", "377 7015 4425 7016", "2877 5555 2878 5556", "1083 7694 1843 7695", "8910 6405 8911 6444", "6266 718 6267 6344", "6962 3076 9173 3077", "421 3277 4750 5586", "684 2406 3078 7006", "8364 2140 9123 2141", "1237 3571 3134 6210", "3536 2965 5983 3722", "897 9204 7139 9205", "3634 1545 9744 4480", "8078 619 8079 6825", "469 3604 551 5901", "7443 7114 7444 7115", "2116 6400 5423 6401", "4208 8312 4209 8890", "5416 3945 9290 9188", "270 9973 6912 9974", "6322 4629 6323 5127", "5024 6203 8919 8994"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> rectangles = {"3573 7960 3574 7997", "4390 2036 4391 2807", "754 1166 1235 9542", "6156 7605 7007 7606", "4334 3536 8351 5037", "1139 6373 2702 6374", "4870 2198 8785 7025", "7642 8097 7643 8098", "1234 8281 1235 8282", "966 4769 6806 4770", "6706 299 8981 9629", "2267 8685 2268 9509", "3380 1385 5889 6157", "8991 2706 9752 5439", "9217 1954 9218 5177", "6984 4831 7821 6130", "5107 1273 5108 4740", "2975 2191 2976 4839", "4568 2168 4569 7038", "8734 1653 9925 6697", "2852 6932 5481 8143", "2954 1396 2955 8318", "5449 5777 5450 5778", "9627 1399 9628 8146"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> rectangles = {"3350 3810 9237 4258", "5893 885 5894 8097", "6975 1749 7100 6582", "2761 6030 5849 6031", "2493 1232 2494 7140", "6575 3877 9329 3878", "1581 1356 5713 1566", "7197 547 7198 743", "7806 6893 8510 8113", "3234 6047 9915 6895", "759 68 3318 1233", "5689 9786 5690 9787", "1511 7524 9066 7525", "5229 7899 5230 7900", "1 5849 613 5850"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> rectangles = {"9893 3063 9894 3630", "8863 6695 8864 6696"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> rectangles = {"3855 7299 5805 8616", "4020 2864 4021 6801", "6806 792 6807 9651"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> rectangles = {"6546 5234 7657 9967", "6879 9991 6880 9992", "6159 9902 6160 9903", "8253 2417 8254 6825", "2701 9580 4329 9581", "3826 5915 9479 7504", "402 3143 1273 3144", "8716 5935 8717 6871", "2700 8966 5923 9601", "2260 2943 4915 3594", "1829 3136 2549 8485", "2529 3640 6696 3641"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> rectangles = {"1124 4945 4263 9653", "7712 1823 7713 8475", "5192 4507 5193 7458", "6979 8410 7717 8411", "3833 1201 3834 4972", "3923 2228 6451 2229", "1583 2118 5470 4571", "96 519 7664 6019", "6418 401 6419 8915", "542 2922 4874 2923", "7269 5221 7270 6192", "9259 1808 9921 5456", "1885 6333 9294 9102", "4896 8888 5393 8889", "1448 3330 7062 4449", "5490 3741 9201 6977", "4353 1162 5622 8621", "9587 1382 9588 5098"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> rectangles = {"1046 5378 3728 5379", "9816 1789 9817 2319", "9601 2899 9602 5747", "1451 1790 8404 5968", "1258 7471 9188 7472", "5311 8191 5312 8192", "1976 1025 1977 9057", "5949 5997 5950 7883", "4324 4090 4325 4091", "9794 6766 9795 6767", "5192 7076 7392 7077", "4200 373 4702 715", "1225 4790 2240 4791", "6487 611 8120 3921", "8102 9760 8103 9761", "98 2377 2533 8646"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> rectangles = {"7140 3097 7141 3098", "7982 1177 7983 3915", "2661 9276 3737 9277", "1887 9632 4519 9633", "1599 451 8342 452", "2279 7990 2280 7991", "235 2663 940 4056", "7895 9249 9539 9250", "4731 2834 4732 2835", "9606 9324 9607 9325", "5689 5552 5690 5553", "8704 9495 8705 9496", "7403 2260 7404 3905", "977 5718 7743 7882", "6154 5155 6155 5156", "1502 6498 8869 6499", "1027 1800 6864 9259", "5835 4851 5836 4852", "1480 7211 1481 7212", "5767 2683 6193 8083", "8043 4980 8044 4981", "1467 8172 1468 8173", "8082 9239 8083 9240", "2670 2801 2671 4382", "1317 5663 9485 8662", "1784 2468 6630 2469", "518 2710 6795 2711"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> rectangles = {"7576 6538 7577 6539", "992 2390 8046 2391", "9462 1985 9463 5330", "2546 314 2547 897", "5063 4980 6167 6371", "4173 1370 4174 8891", "488 1791 6947 2625", "3435 678 6949 1207", "2237 8225 4387 8226", "2567 2989 7336 3889", "8112 3619 8113 3620", "9864 4631 9865 4632", "180 2524 4670 9068", "9880 6038 9881 7094", "2782 6890 4207 6891", "3608 6941 9587 7857", "9842 5950 9843 5951"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> rectangles = {"5176 4606 7580 7700", "3791 5973 9358 5974", "1622 9713 9918 9714", "9211 2227 9212 4177", "2063 5422 2589 9071", "4682 9969 4683 9970", "1190 1299 1191 8918", "7624 939 7625 5084", "8650 1915 8651 4053", "4746 9251 4747 9252", "420 2491 7769 9936", "9065 5233 9734 5413", "8710 7545 8711 8225", "7181 8886 9266 8887", "9847 3649 9848 5761", "8346 5779 8347 5780", "5748 7345 5749 7346", "9922 5931 9923 5932", "2754 5017 2755 5018", "8026 8493 8264 8494", "2396 7314 2397 7315", "3345 8231 3346 8232", "4560 9976 7839 9977"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> rectangles = {"8765 4986 8766 9214", "8376 2481 8377 4607", "7183 9818 9357 9819", "2050 1932 2755 3804", "1468 6267 3443 6268", "7746 7182 7747 7183", "2924 14 4632 3540", "5697 637 8908 8681", "502 5534 4937 5535", "4837 2780 4838 2781", "7307 32 7308 1065", "4498 3809 5804 3810", "7001 3371 9767 3372", "1642 8521 5609 8522", "4040 5147 8513 9759", "4126 7828 4790 8292", "1038 7275 8627 7276", "3843 9063 5090 9064", "6121 2615 8205 9132"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> rectangles = {"7216 1407 7217 6795", "949 6514 2386 6515", "7800 9321 7801 9946", "4095 7097 7445 7098", "6607 1125 7245 1131", "4298 906 4299 6249", "2778 900 5413 6626", "6523 8772 8194 8773", "1912 4493 2696 5976", "8719 2504 8720 7013", "2195 7027 3371 8856", "1077 1417 4912 6359", "7985 7869 7986 7870", "582 1779 8883 8031", "1363 195 1364 5016", "7380 7686 7697 7687", "2219 9692 2220 9693", "1381 3151 3955 3213", "1377 7380 2757 7381", "2955 7799 8023 7800"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> rectangles = {"3661 8859 3662 8860", "7502 285 7503 2978", "1688 75 5601 7555", "2833 5777 5564 5778", "9614 6064 9615 7173", "9415 1027 9416 5342", "4936 4378 4937 7023", "1410 2584 7772 2585", "2469 9997 7729 9998", "4815 9226 7974 9227", "1886 5466 4934 5467", "6697 8952 6698 9408", "1878 1982 5638 9217", "917 3690 1996 3691"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> rectangles = {"4 3281 4944 9401", "2080 5304 2081 9889", "7468 9245 7469 9246", "4754 9197 4755 9198", "6068 1474 7445 9312", "3657 9683 3658 9684", "8611 572 8612 9158", "8098 6938 8099 9243", "9106 1071 9107 7714", "7911 7793 7912 8183", "7139 9237 7140 9238", "9036 2345 9331 2346", "795 1125 2688 1126", "3794 6815 8623 6965", "2606 863 6366 3456", "4666 3293 7045 5439", "8985 5212 8986 5213", "4446 4170 7517 4171", "9901 8362 9902 8816", "5436 5611 5758 5901", "2651 827 2652 1069"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> rectangles = {"1980 6478 4638 6479", "565 5594 5197 5595", "5352 4249 5353 7906", "5019 4976 5020 7305", "5577 7931 5578 8977", "91 8215 8626 8216", "9403 1224 9404 9091", "8280 7666 9707 9639", "2077 6360 8855 6361", "1709 1516 1710 9161", "2049 8761 5405 8762", "7058 8307 8042 8308", "7853 473 7854 3192", "1008 986 5830 2986", "9313 6858 9314 6859", "6741 7926 6742 9485"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> rectangles = {"2579 7879 2697 7880", "2034 415 2403 3202", "3260 9012 3261 9013", "7038 581 7039 582", "4733 9740 4734 9741", "6797 3907 7619 4115", "649 7523 1163 7524"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> rectangles = {"9281 4224 9282 6331", "428 7922 429 7923", "5282 1083 5283 2368", "3933 2496 3934 2497", "3675 9798 3676 9799", "5677 9884 7569 9885", "2762 8639 7572 8640", "8580 1867 8581 6392", "3322 6871 9126 6872", "2264 6916 8588 6917", "9647 1998 9648 8144", "708 3222 9642 3223", "4432 9642 4433 9643", "6536 7732 9536 7733", "759 4524 1910 4897", "5784 4594 5785 4595", "6877 6366 6878 6367", "8687 2391 8688 2392", "4697 2916 4698 2917", "4331 6320 7471 8288", "5520 6822 5521 7380", "4083 850 8564 4806", "7341 5758 7342 6929", "6614 4544 8380 5776", "2621 3037 2622 3038", "4580 917 8111 1086", "3779 3158 5145 7336", "3373 1449 3374 8889", "3621 7839 7043 7840", "7085 177 7086 1245", "6252 9761 6253 9762", "1598 2129 7035 2130", "1240 7873 1241 7874", "4278 5028 4279 5029", "9945 9932 9946 9933", "6945 4229 6946 5138"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> rectangles = {"3210 7744 3211 9307", "3636 5389 5384 9848", "8174 8645 8175 8646", "2327 1393 3724 2033", "2347 8485 3132 8486", "2462 569 2463 4860", "8312 6334 8313 6335", "9189 3845 9190 3846", "7557 1717 7558 1718", "2449 209 9338 7416", "4960 127 4961 4270", "1588 301 7207 3999", "5700 8067 7273 8068", "7926 5790 7927 5791", "1316 5078 1317 5079", "4800 2844 8303 2845", "3121 3109 5756 5813", "3858 9698 4725 9699", "1998 590 2908 5123", "6067 1092 6426 5837", "602 3380 1108 4706", "4037 1254 8808 9339", "6297 2569 9574 6268", "3385 8220 3386 8221", "9378 7472 9562 7473", "4940 6102 4941 6103", "1430 6687 8108 6688", "5989 7591 5990 7592", "9454 366 9455 838", "6212 561 6213 5186", "1937 548 8203 549", "5438 4315 8697 4660", "2255 1142 6529 7217", "1146 2693 1147 7819", "5704 6938 9511 6939", "2723 7422 6060 7423", "20 2379 4528 6017", "7163 6651 7164 6652", "8905 4311 8906 4312"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> rectangles = {"9061 9683 9062 9684", "1110 2445 8948 2446", "4096 1471 9305 1472", "4177 2617 4499 3240", "8923 387 8924 4818", "8564 4464 8565 5200", "7829 850 7830 6003", "610 1626 7649 7296", "265 768 1619 9816", "2878 7980 7586 9343", "6276 1603 8487 6934", "9827 6632 9828 6633", "2418 8928 3778 8929", "2883 8166 2884 8167", "5977 1285 7746 9561", "4291 6144 4292 6145", "1846 11 9398 9664", "9301 5240 9302 5241", "8795 9067 9353 9068", "3764 467 3765 1040", "5147 9203 5148 9204", "1125 5195 1126 5482", "1551 7060 8207 9586", "503 5799 2003 6629", "3160 4757 4894 4758", "7425 1724 7426 1725", "1205 7184 9269 7185", "3950 7240 3951 7241", "8907 1476 8908 1477", "9280 4167 9281 4168", "9555 806 9556 8072", "6999 1209 8249 2800", "9528 963 9529 1000"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> rectangles = {"2271 1960 7160 5649", "9399 5544 9400 5545", "6960 5161 9528 9771", "468 7795 8480 8460"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> rectangles = {"2552 2646 2553 2647", "2076 6652 3459 6653", "762 5007 1618 6208", "4283 9181 4284 9182", "135 1920 8064 9155", "533 1128 5652 2231", "4303 2549 4304 5430", "8793 4898 8794 9254", "7278 8838 7279 8839", "8439 1914 8440 1915", "1704 2385 1705 2386", "7302 2506 7303 8372", "5317 2402 9492 2403", "7044 1337 7045 2732", "6310 3554 6311 3555", "6233 2715 6234 4806", "6900 6570 6901 6571", "537 1441 9235 1442", "9049 3189 9050 8472", "2302 7999 6691 8000", "2376 7129 4347 7130", "1229 4228 8177 5176", "837 2294 3456 3899", "8775 5613 8776 7993", "515 3015 2305 6604", "9792 2383 9793 2384", "8357 8762 8358 8763", "5720 2767 5721 2768", "4293 414 9100 4016", "9359 2283 9360 6456", "3709 2553 9550 2830", "6864 5186 6865 5187", "532 9623 3612 9624", "702 866 2147 4673", "8497 5330 8498 5331", "925 119 3514 3635", "137 843 290 5228", "8011 4187 8012 4188", "9613 2392 9614 3189", "9558 5375 9559 8341", "4362 6578 7475 6579"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> rectangles = {"3514 5755 3515 5756", "8425 5851 8935 5852", "9030 8283 9031 8284", "7279 1275 7280 7312", "1356 6886 5435 6887", "520 6635 521 8388", "1090 7328 5245 7329", "520 6325 521 6326", "9349 6058 9350 8866", "6667 2189 6668 2190", "3467 9585 3705 9586", "580 7716 1770 7717", "49 3014 9412 3652", "7107 309 9022 1810", "9457 9291 9458 9292", "515 1981 3177 9214", "7067 8709 7068 8710", "3677 5962 4022 8084", "2570 9118 8306 9119", "2450 1137 7576 8676", "17 9161 1854 9162"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> rectangles = {"69 2436 689 6409", "6962 723 6963 5291", "9634 1698 9635 3302", "631 765 1476 2358", "1265 7589 5848 7590", "2226 7533 5868 7534", "6689 4551 6690 4552", "843 8496 2643 8497", "9205 5351 9206 5352", "9767 4508 9768 4509", "72 6568 6566 6569", "2630 7468 5075 7469", "4298 3483 7089 3484", "6062 1837 6063 5566", "5831 384 8680 9049", "669 6027 3723 8260", "5400 9794 5401 9795", "9709 2712 9710 6830", "3890 5429 5532 8390", "2122 1183 3778 3286", "2837 3469 2838 3470", "8305 5250 8306 9339"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> rectangles = {"8320 2703 8321 6884", "78 2948 4393 9121", "762 2956 1934 2957", "1513 6180 7079 6455", "2162 1053 2355 9989", "352 5500 8428 5501", "335 8045 2180 8046", "7764 2279 8947 3553", "1515 9585 1516 9586", "1251 8504 3158 8505", "8410 8973 8411 8974", "4744 6571 4745 6572", "1263 2617 8348 2618", "9429 2091 9430 8384", "2404 9587 8402 9588", "8778 6340 8779 6341", "2738 1420 2739 8474", "8652 8347 9656 8348", "4493 3711 5838 9068", "1615 5531 1616 5532", "1436 7485 8567 9397", "4740 122 9540 1273", "416 7307 6167 7308", "2600 9083 5690 9084", "1948 9145 9541 9146", "2187 5955 4538 5956", "1634 1738 1635 4331", "237 648 8685 1793", "9536 7594 9537 7595", "2965 5027 4703 8059", "7506 5925 8115 7254", "8817 6439 8818 6440", "5668 4606 5669 8478", "2542 406 2543 5394", "9623 6840 9624 6841", "4444 5114 4445 9266", "3443 3009 9725 3010", "968 2303 5989 2304", "3978 5523 3979 7149"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> rectangles = {"1107 4759 1630 5903", "1699 1222 1700 8898", "5834 2194 9153 3133", "2733 6875 6480 6876", "8100 5508 8101 5509", "1164 9701 8554 9702", "8173 3946 8174 3947", "7492 8985 7493 8986", "2106 7588 3480 7589", "9632 6148 9633 6149", "1799 7721 1800 9544", "5147 4271 5148 8151", "3265 9377 3266 9378", "5052 277 8274 923", "9344 2663 9345 2969", "388 1556 1776 9354", "7850 4576 7851 7374", "5299 4656 7337 4657", "786 1906 787 7263", "721 7332 9151 7333"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> rectangles = {"9473 777 9474 1189", "2655 2564 4341 2565", "5775 7841 5776 7842", "2993 3086 2994 3087", "9378 513 9379 3345", "4220 9352 4221 9353", "8908 1263 8909 3812", "3191 3419 8915 9809", "4816 1035 8027 1839", "8630 1190 8631 2021", "5198 4033 5199 7616", "7080 8299 9668 8300", "774 2284 4839 2285", "7393 3823 7394 5058", "584 9225 9635 9226", "6549 977 6550 9925", "1790 7396 1791 7397", "2352 9627 8225 9628", "5253 5280 5254 5281", "206 727 5626 1149", "7979 1501 8242 6427", "1229 4239 1244 4240", "9667 8171 9668 8172", "5545 5625 5546 6513", "6116 3886 6117 3887", "1959 5342 4335 5587", "6735 9116 6736 9117", "522 3511 3148 3512", "9517 7397 9518 7398", "2089 385 5399 7932", "5058 604 5059 1265", "7397 9212 9707 9213", "3578 5550 3706 5551", "2034 3207 6510 3208", "4960 5784 9450 5785", "9855 9974 9856 9975", "1199 6378 9658 6379", "2782 3913 5243 8440", "6799 48 7661 9362", "4085 996 5890 7476", "8328 8461 9151 8462", "6380 9963 7083 9964", "3616 2094 3617 2752", "7568 2538 7569 6687"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> rectangles = {"5751 3827 8638 5331", "2896 2305 2897 4994", "7474 697 7475 1261", "5067 6010 5068 9041", "1593 4569 2486 4570", "7963 2629 9764 4766", "1604 5318 5879 5319", "6328 2406 9343 2407", "1483 4331 1484 4332", "5598 5535 6164 9808", "2193 9508 7512 9509", "5277 4872 9367 4873", "2538 7987 2539 9774", "8950 6971 8951 6972", "1577 2112 1578 2113", "5856 7453 5857 7454", "5504 343 5543 4636", "2939 4683 5239 9779", "4398 338 4399 4094", "9679 1653 9680 8773", "547 1911 9066 9739", "2197 2308 9381 3695", "1222 7223 8474 8593", "9040 532 9041 2173", "2426 7473 5703 8754", "9629 2386 9630 6276", "3716 4051 3717 4371", "9324 29 9325 3151", "1828 4028 3705 4721", "514 8773 6235 8774", "9834 8897 9835 9064"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> rectangles = {"791 2296 4746 2297", "1263 3909 5489 3910", "7424 3500 7425 8511", "5758 2692 5759 7613", "8637 9750 8638 9751", "5309 1836 8953 1837", "5751 7157 9817 9301", "5637 8621 5638 9314", "4421 5688 8198 9268", "1998 8210 3856 8211", "7029 8480 7030 8481", "9163 8023 9164 8024", "6396 2486 7889 8741", "8868 7414 8869 7415", "815 3206 9432 4704", "4122 840 4123 841", "1499 3521 6763 3522", "2564 3441 3425 3442", "1963 8310 2514 8311", "1254 8549 1255 8550", "4739 2562 4740 7093", "2078 5920 7567 6008", "1722 1407 4922 7083", "278 8511 4612 8512", "7998 2571 7999 5175", "4785 7829 4786 7830", "7609 1227 7610 4378", "6520 8900 6521 8901", "3886 5097 3887 9698", "4747 4890 7898 8643", "6179 3643 6180 7303", "793 3647 8491 4926", "7303 7987 7304 7988"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> rectangles = {"1927 3745 1928 3746", "7371 5 7372 4934", "3195 92 8463 3155", "5777 1983 6957 9391", "8780 3968 8781 6531", "8225 3877 8226 3878", "5164 2808 7470 2977", "8073 2471 9438 5411", "5514 6059 6936 6060", "6573 3946 9566 3947", "9759 4109 9760 4110", "3427 1962 3428 2324", "9471 2748 9472 6988", "1674 5136 3586 7257", "2754 288 2755 7679", "1970 7169 4963 7170", "2384 4071 4197 4072", "4588 9743 7306 9744", "5513 847 5614 1916", "5747 2533 7984 8110", "1694 2555 7354 4715", "9492 2608 9493 2791", "8002 433 8003 4253", "1132 4321 5435 4322", "9110 684 9111 9093", "9473 2447 9474 5714", "1204 6777 9749 6778", "4605 9180 4606 9181", "5788 8852 5789 8853", "7240 2093 7241 7392", "120 349 1707 350", "4084 1008 7327 8933", "8111 1150 9616 9766", "9830 300 9831 5719", "1733 6265 5111 6266", "6869 585 8162 5484", "4563 2224 4564 5509", "6558 8129 6559 8130", "2470 574 9774 575", "7120 3049 7121 3050", "9817 1384 9818 1965", "7571 1363 7572 1364", "1702 482 1703 6096", "1034 1388 9578 4094", "527 1147 6021 8868"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> rectangles = {"2787 8685 8447 8686", "1517 1503 1518 9851", "1576 2385 9452 2386", "5369 7401 6880 7402", "3423 9609 9660 9868", "136 4525 8488 5050", "5311 2374 6052 2375", "6964 1765 6965 1955", "7621 5925 7622 7063", "9603 3370 9604 9656", "1037 1373 9049 4446", "4688 8569 4689 8570", "4172 2294 4173 4691", "1770 826 1771 1269", "5902 2782 5903 2783", "6250 97 6251 6800", "4551 5012 4552 5013", "9781 1976 9782 1977", "587 5486 1091 5487", "902 9230 5094 9231", "1233 9711 6654 9712", "3027 821 3028 7040", "6408 8798 6409 8799", "6056 4402 7356 6290", "9253 7394 9254 7395", "3155 9077 5292 9078", "3630 6792 4647 6793", "1635 6698 1636 6699", "8383 6593 8384 6594", "7934 3888 7935 3889", "5805 2159 6205 3599", "6688 2628 6689 7548", "1921 8316 4667 8317", "8359 5529 8360 5530", "3628 9462 6439 9463", "962 1238 4921 1824", "548 382 2038 7572", "6965 5127 6966 5128", "4815 8392 4816 8393", "3212 9044 3971 9045", "6665 1275 6666 5922", "7705 2365 7706 3062", "9645 385 9646 9581", "9399 7753 9400 7754", "5480 628 5481 2137", "7038 8735 7039 8736", "8073 8509 9726 8510", "7141 9190 7142 9191", "2113 5246 5924 5378"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> rectangles = {"1035 9841 2485 9842", "4084 2852 4085 6682", "189 895 5789 5453", "1870 9556 6820 9557", "4280 5838 9090 5839", "5598 7124 5599 9204", "6743 585 9385 2496", "5789 797 5790 6918", "3501 7553 8972 7554", "3681 5637 6265 7306", "6948 1278 6949 9426", "7741 9852 7742 9853", "1024 4498 7978 5105", "59 7512 60 7513", "1214 5820 4443 5821", "6595 3433 6596 7490", "7210 1229 9547 4164", "1772 717 2886 1126", "29 1625 1641 8106"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> rectangles = {"5068 5408 5521 5409", "6283 9537 6284 9538", "1376 106 4470 8056", "8273 8541 8274 8542", "3208 843 3209 8364", "3799 4306 3800 4307", "6622 1069 6623 1070", "49 3345 8667 5859", "2310 7632 7666 7633", "5068 8453 5069 8454", "277 3715 9779 8640", "9426 9593 9427 9594", "5235 8142 7263 8287", "4267 1033 8698 3632", "2250 8195 9659 8269", "1160 9822 4138 9823", "5869 8203 9867 8204", "5579 649 8353 650", "8419 6687 8420 9451", "6632 1900 6633 7569", "6239 5914 6240 7878", "5358 5940 5359 9338", "5569 5554 5570 6405", "6024 6740 8625 9534"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> rectangles = {"9857 1640 9858 8156", "7766 9363 7767 9364", "4467 2099 4468 6029", "5920 4264 5921 6885", "1632 8699 3759 8700", "2134 7410 2135 7411", "3841 9583 3842 9584", "488 2608 9986 8037", "7840 489 7841 552", "8122 5389 8123 5390", "2053 3311 2054 3312", "2049 1335 7137 8863", "5077 4664 9409 4665", "3191 7039 3192 7040", "5754 1551 5755 4401", "8626 9402 9964 9403", "8177 9200 8178 9201", "7674 2019 7675 2020", "4410 2166 4411 2522", "8473 5426 8474 9344", "6000 2034 6001 2652", "6117 1693 8761 3966", "1034 9486 1133 9487", "797 7316 2684 7317", "6613 8525 6614 8526", "6905 1544 9956 1545", "5190 5632 9739 5633", "453 1920 4122 4836", "8611 2191 8612 8023", "824 5262 2338 8229", "8182 7380 8183 8510", "9756 8027 9757 8070", "6906 3249 6907 6982", "5151 3307 5152 3308", "517 3031 2932 3032", "6555 3245 9350 7329", "5132 7179 5133 7802", "532 4226 8996 9006", "5400 2652 5401 2653", "4346 3631 4347 3655", "4201 1590 4202 7722", "2295 7070 2296 9567", "3438 8799 5826 8960", "5893 2251 5894 9838", "6398 5853 6399 5854", "1781 2716 1782 8243", "7815 9530 7816 9756", "3949 6045 9226 9820"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> rectangles = {"9741 4324 9742 4325", "3235 7713 9647 8391", "2222 1880 5270 5350", "3710 1944 3711 5717", "9209 4659 9210 7189", "4265 8909 9139 8910", "3958 265 3959 4032", "9007 3890 9008 9462", "1706 7910 3752 7911", "161 5963 1041 5964", "6825 931 6826 3435", "5819 5936 5820 5937", "9001 2299 9002 2300", "4078 2226 4079 2227", "6405 8700 6406 8701", "2350 8665 6021 8666", "69 9787 1302 9788", "8003 9666 8004 9667", "7412 7674 7413 7675", "331 675 796 8060", "1566 9929 1567 9930", "6606 440 6607 8678", "2484 8945 9384 8946", "3334 6289 5548 6290", "4460 5898 7155 5899", "2182 738 8909 3594", "4352 8309 4353 8382", "9424 6041 9425 9564", "8369 2197 8370 2842", "1758 2363 3284 8953", "1868 9518 2327 9519", "5015 1612 8590 3420", "5413 9596 5414 9597", "8178 2118 8179 9464", "1084 6446 5333 9432", "888 7398 1922 7399", "4554 8389 4555 8390", "3357 2291 5159 6755", "7906 9118 7907 9119", "7136 8823 7137 8824", "5449 6103 7555 6104", "1533 6682 2519 6683", "6408 333 6409 5799", "8106 6677 8107 6678", "7249 7975 7250 8254"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> rectangles = {"1887 8778 5541 8779", "9546 7103 9547 7104", "3546 6958 4824 6959", "4023 4319 4024 4320"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> rectangles = {"4963 9427 9176 9428", "2853 1756 8703 9719", "6831 31 7314 5232", "9518 3784 9519 5369", "8457 7742 8458 8847", "3994 5344 3995 8390", "308 5083 309 5084", "2097 3260 2889 7323", "4658 4607 4659 7225", "7077 888 8220 4128", "6297 2919 6298 2920", "1763 6102 5922 7929", "3949 4324 3950 9006", "5403 6758 8279 7066", "2537 3038 2538 9387", "3532 7956 8492 7957", "32 9482 8142 9483", "5167 7382 9425 7383", "78 3466 8449 7233", "863 766 9571 6167", "7634 8669 7635 8670", "1483 6498 8907 6499", "8711 8472 9977 8473", "2755 7113 2756 7114", "9141 6951 9142 6952", "2239 3181 3480 3182", "4198 4585 4199 6966", "7612 5756 7613 5757", "8929 1900 8930 7184", "2437 5693 2438 6174", "8142 7222 8213 7223", "6492 8741 6493 8742", "5532 7442 5533 7443", "8045 5827 8046 5828", "7395 6717 9791 6792", "1901 3570 3883 3571", "3815 5435 4128 8420", "4796 8300 4797 8301", "2849 8797 2850 8798", "1650 3683 6722 5954", "3767 5056 7809 9380", "1438 8467 1439 8468", "518 6753 3482 6754", "2111 624 6112 3067", "984 1602 6047 4176", "816 1113 9153 7047", "1419 7464 4734 7465"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> rectangles = {"6245 998 6246 7749", "7706 6455 7707 6456", "8491 9508 8492 9889", "2489 4725 2490 4726", "8290 1351 8291 2922", "6882 5246 6883 9074", "2416 686 3750 7920", "5896 1009 8396 7656", "4491 9848 7174 9849", "2540 5679 6920 5680", "5180 7665 5181 7666", "7408 6018 7409 6019"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> rectangles = {"6235 5913 7653 5914", "5529 1103 5530 7414", "6981 2988 6982 8561", "8751 8282 8752 8283", "4336 2125 5463 2126", "5461 3882 9987 6361", "3657 9505 3658 9506", "2018 9636 8234 9637", "9008 1722 9009 7322", "4024 7528 4025 7529", "3319 5509 8050 5510", "7679 4347 7680 4348", "3721 4360 6761 4361"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> rectangles = {"7432 1990 7564 3277", "9957 2485 9958 2486", "2156 5731 7488 5732", "5114 256 5115 9391", "7987 7440 7988 9191", "5790 8676 5791 8677", "977 5479 5947 5480", "1397 5898 1398 5980", "6731 878 6732 1093", "2387 6784 2890 8623", "5367 2712 5368 2713"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> rectangles = {"8906 7271 8907 7272", "5297 5548 5298 8650", "817 1757 9966 7104", "3367 4758 9098 8532", "8437 4778 8438 6179", "3808 4465 3809 6880", "8733 5918 8734 8890", "9008 1455 9009 5003", "1704 2518 9903 8610", "4944 1709 5865 6861", "6499 2972 6500 2973", "1523 443 5480 6062", "5496 6406 5497 9190", "2082 1904 3611 9964", "7529 2469 7530 2470", "5286 7597 5287 7638", "8472 1974 8473 1975", "1136 2597 7699 7700", "5428 6579 8260 6580", "2747 3647 8597 3648", "1647 388 8795 1532", "7176 4746 7177 4747", "2774 586 8152 1618", "3227 1281 9869 3257", "8867 6159 8868 6736", "6005 425 6006 6098", "8840 2268 8841 7530", "6776 6236 6777 6237", "8986 3776 8987 3777", "3545 8850 9746 8851", "1758 1796 3777 7382", "5734 1630 5735 1631", "6341 2037 6342 9899"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> rectangles = {"5096 6801 5778 6802", "3544 7439 8944 7440", "9201 7629 9202 7630", "7243 2259 7244 8591", "5461 2701 5462 7255", "6582 6577 6843 6578", "300 6656 6144 7055", "3280 1616 4101 5676", "2014 523 9304 3044", "1357 2065 9191 8772", "2895 2565 2896 3626", "3224 549 3225 8817", "854 4076 9993 5834", "2284 7513 5689 7514", "7568 8421 7569 9279", "2754 5571 7749 9020"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> rectangles = {"22 6971 3938 6972", "7576 2182 7577 2183", "9273 9153 9274 9154", "4969 905 4970 1300", "6759 2317 9378 2318", "4740 1888 4741 5304", "731 1224 1140 5329", "368 8131 572 8132", "1468 8885 1469 8886", "5115 6508 8526 6581", "833 1240 2542 2985", "2195 8943 2527 8944", "9780 8091 9781 8092", "2391 9861 8993 9862", "9957 3208 9958 4868", "245 2190 3318 8907", "1097 689 1098 3526", "2040 4684 2041 4685", "807 1560 3557 1721", "787 3351 1299 3352", "156 27 7929 6038", "712 6968 4530 7659", "6115 5490 6116 5491", "8742 6703 8743 6704", "3652 9759 3653 9760", "5029 2592 5030 6203", "820 41 8615 6190", "9244 3037 9245 3038", "9042 8787 9043 8788", "3758 7796 3759 7797", "3628 4894 8063 4895", "2584 131 3355 269", "9476 4507 9477 4508", "5518 5212 5519 5213", "8099 4861 9768 4862", "828 3238 7992 3239", "5973 3294 5974 3295", "2035 6029 2036 6030"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> rectangles = {"5177 7218 5178 7219", "1333 1057 2797 8977", "2611 874 9901 5849", "7728 5860 7729 5861", "6118 2904 6119 2905", "1721 7294 2141 7295", "4342 9584 6256 9585", "1194 6147 5533 6148", "2753 8428 2754 8429", "1198 229 5209 8161", "408 6810 6397 6811", "3715 2397 5412 2585", "2729 3839 6303 3840", "2365 741 7030 4080", "9822 1631 9823 2373", "6514 336 6515 1640", "223 5378 2220 5379", "2482 543 6972 1409", "4631 3896 5473 3897", "4753 7724 4754 8403", "629 9576 9948 9577", "9245 6277 9246 8476", "150 494 757 1525", "4393 5687 7006 5688", "5752 9038 6071 9399", "1520 839 3410 7620", "148 47 2403 2484", "3522 4493 8855 4494", "5123 394 9521 1971", "9571 245 9572 9043", "945 8094 946 8095", "9223 8737 9224 8738"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> rectangles = {"3758 4961 3759 4962", "6176 4068 6177 4069", "3483 9318 3484 9319", "5697 7181 5698 7182", "8323 5838 8324 7361", "2083 3928 2084 9334", "622 5252 6652 5253", "5307 8071 5308 8072", "8250 842 8391 5378", "7101 3627 7102 8695", "3265 1492 7523 8872", "7189 5742 7190 5743", "8992 9916 8993 9917", "8576 7961 8577 7962", "5786 6676 5787 6677", "9204 2989 9205 4966", "7998 5513 7999 6788", "5427 6461 5428 6462", "94 3874 3776 9183", "4638 354 9777 7793", "6876 6440 6877 6441", "5850 4953 5851 4954", "8880 1069 8881 9071", "4371 9372 8065 9373", "791 2203 7876 7445", "5035 1109 9206 5724", "7797 3324 7798 3325", "1216 9209 2438 9210", "1119 4089 1120 4090", "103 9857 8632 9858", "7015 1583 7016 6498", "8227 2672 8228 2926", "2671 2274 2672 2275", "1673 8938 8110 8939", "9541 375 9542 873", "274 2246 6239 2247", "1889 5220 8053 5221"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> rectangles = {"2460 9780 3230 9781", "8465 258 8466 4517", "5368 3385 5369 5160", "5268 3238 7388 6810", "1911 5603 1912 5604", "2563 3931 7547 3932", "5401 3702 7776 3703", "6422 7324 6947 7325", "2342 3126 2343 3127", "6651 2697 6652 5480", "919 2447 920 6348", "1913 5925 7341 8243", "1554 358 8235 5217", "5820 2378 5821 7985"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> rectangles = {"0 0 5 5", "0 5 5 10", "5 0 10 5", "5 5 10 10"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> rectangles = {"0 0 2 1", "3 0 4 2", "2 3 4 4", "0 2 1 3"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> rectangles = {"0 0 10000 10000", "100 1 200 2", "0 0 1 100", "50 50 51 51"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> rectangles = {"40 0 9999 9999", "41 1 9998 9998", "42 2 9997 9997", "43 3 9996 9996", "44 4 9995 9995", "45 5 9994 9994", "46 6 9993 9993", "47 7 9992 9992", "48 8 9991 9991", "49 9 9990 9990", "30 10 9989 9989", "31 11 9988 9988", "32 12 9987 9987", "33 13 9986 9986", "34 14 9985 9985", "35 15 9984 9984", "36 16 9983 9983", "37 17 9982 9982", "38 18 9981 9981", "39 19 9980 9980", "20 20 9979 9979", "21 21 9978 9978", "22 22 9977 9977", "23 23 9976 9976", "24 24 9975 9975", "25 25 9974 9974", "26 26 9973 9973", "27 27 9972 9972", "28 28 9971 9971", "29 29 9970 9970", "10 30 9969 9969", "11 31 9968 9968", "12 32 9967 9967", "13 33 9966 9966", "14 34 9965 9965", "15 35 9964 9964", "16 36 9963 9963", "17 37 9962 9962", "18 38 9961 9961", "19 39 9960 9960", "0 40 9959 9959", "1 41 9958 9958", "2 42 9957 9957", "3 43 9956 9956", "4 44 9955 9955", "5 45 9954 9954", "6 46 9953 9953", "7 47 9952 9952", "8 48 9951 9951", "9 49 9950 9950"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> rectangles = {"4648 1808 6601 9226", "9572 4589 9964 9128", "4743 9388 4760 9888", "4808 7869 7041 8770", "5899 2605 6667 9261", "1523 5895 6234 6131", "100 6828 3316 9426", "3997 5823 8501 7657", "2394 8358 3186 9507", "2841 2101 9508 7013", "8836 4179 9263 7080", "3264 7780 4136 8422", "67 9829 500 9945", "8955 3943 9170 5993", "517 5392 1956 6315", "1596 7272 6901 9388", "3222 9626 9027 9935", "6003 5721 7309 9683", "275 2201 6044 7881", "881 2334 6078 9650", "8905 4077 9183 6621", "5217 7173 9809 9154", "3169 5998 6133 6121", "284 7379 4639 9540", "1282 5108 7773 8881", "7288 5354 8452 6588", "8564 9708 8827 9968", "618 5071 9019 5144", "6014 2113 8299 8476", "6745 6507 8871 7198", "4509 9664 4816 9869", "8723 8201 9494 9050", "4629 3834 8158 9114", "6332 7939 6634 9454", "2107 7484 9258 9237", "1837 1560 4009 2795", "8902 229 9477 3081", "1379 9897 6873 9945", "9897 1941 9914 6453", "1978 3821 6108 8036", "5225 4359 6409 5631", "4180 7442 7937 7452", "8219 845 9632 2561", "310 9405 8622 9465", "8985 4250 9382 5372", "8366 2326 9640 7739", "3599 2912 4791 8859", "1524 358 6744 5153", "8938 4775 9934 9234", "3282 4865 9955 6526"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> rectangles = {"0 0 2 4", "2 0 4 2", "3 2 4 3", "2 3 4 4"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> rectangles = {"0 0 10000 1", "0 1 1 10000", "1 9999 10000 10000", "9999 1 10000 9999", "1 1 5000 5000", "5000 1 9999 5000", "1 5000 5000 9999", "5000 5000 9999 9999"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> rectangles = {"4648 1808 6601 9226", "9572 4589 9964 9128", "4743 9388 4760 9888", "4808 7869 7041 8770", "5899 2605 6667 9261", "1523 5895 6234 6131", "100 6828 3316 9426", "3997 5823 8501 7657", "2394 8358 3186 9507", "2841 2101 9508 7013", "8836 4179 9263 7080", "3264 7780 4136 8422", "67 9829 500 9945", "8955 3943 9170 5993", "517 5392 1956 6315", "1596 7272 6901 9388", "3222 9626 9027 9935", "6003 5721 7309 9683", "275 2201 6044 7881", "881 2334 6078 9650", "8905 4077 9183 6621", "5217 7173 9809 9154", "3169 5998 6133 6121", "284 7379 4639 9540", "1282 5108 7773 8881", "7288 5354 8452 6588", "8564 9708 8827 9968", "618 5071 9019 5144", "6014 2113 8299 8476", "6745 6507 8871 7198", "4509 9664 4816 9869", "8723 8201 9494 9050", "4629 3834 8158 9114", "6332 7939 6634 9454", "2107 7484 9258 9237", "1837 1560 4009 2795", "8902 229 9477 3081", "1379 9897 6873 9945", "9897 1941 9914 6453", "1978 3821 6108 8036", "5225 4359 6409 5631", "4180 7442 7937 7452", "8219 845 9632 2561", "310 9405 8622 9465", "8985 4250 9382 5372", "8366 2326 9640 7739", "3599 2912 4791 8859", "1524 358 6744 5153", "8938 4775 9934 9234", "0 0 10000 10000"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> rectangles = {"9400 9400 9402 9402", "9410 9410 9412 9412", "9420 9420 9422 9422", "9430 9430 9432 9432", "9440 9440 9442 9442", "9450 9450 9452 9452", "9460 9460 9462 9462", "9470 9470 9472 9472", "9480 9480 9482 9482", "9490 9490 9492 9492", "9500 9500 9502 9502", "9510 9510 9512 9512", "9520 9520 9522 9522", "9530 9530 9532 9532", "9540 9540 9542 9542", "9550 9550 9552 9552", "9560 9560 9562 9562", "9570 9570 9572 9572", "9580 9580 9582 9582", "9590 9590 9592 9592", "9600 9600 9602 9602", "9610 9610 9612 9612", "9620 9620 9622 9622", "9630 9630 9632 9632", "9640 9640 9642 9642", "9650 9650 9652 9652", "9660 9660 9662 9662", "9670 9670 9672 9672", "9680 9680 9682 9682", "9690 9690 9692 9692", "9700 9700 9702 9702", "9710 9710 9712 9712", "9720 9720 9722 9722", "9730 9730 9732 9732", "9740 9740 9742 9742", "9750 9750 9752 9752", "9760 9760 9762 9762", "9770 9770 9772 9772", "9780 9780 9782 9782", "9790 9790 9792 9792", "9800 9800 9802 9802", "9810 9810 9812 9812", "9820 9820 9822 9822", "9830 9830 9832 9832", "9840 9840 9842 9842", "9850 9850 9852 9852", "9860 9860 9862 9862", "9870 9870 9872 9872", "9880 9880 9882 9882", "9890 9890 9892 9892"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> rectangles = {"0 0 1 1", "1 0 2 1", "2 0 3 1", "0 1 1 2", "1 1 2 2", "2 1 3 2", "0 2 1 3", "1 2 2 3", "2 2 3 3"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> rectangles = {"0 0 1 2", "1 0 3 1", "3 2 4 4", "1 3 3 4"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> rectangles = {"1790 3578 8906 6963", "4083 4597 8621 6260", "8195 1482 9550 5293", "7054 944 9236 9054", "3048 1392 7309 2781", "4925 1431 7990 4692", "4655 2801 8698 6080", "2836 3323 8015 9301", "1386 6 6264 8483", "1928 124 4663 7847", "3138 3187 5794 5029", "1775 4081 4131 9083", "7054 1862 8761 8332", "1980 2259 6553 9763", "2789 7206 4146 8338", "2160 530 9221 5128", "594 5133 7066 8993", "4561 698 5256 1049", "3885 1056 9282 7658", "3321 138 8015 8357", "375 3936 3582 6689", "1715 4503 6451 6196", "595 1710 6115 4337", "3821 3981 6917 9464", "4414 1252 6179 4557", "2321 1602 5254 3882", "720 317 1540 2658", "4376 6815 6442 8673", "5360 752 9539 2836", "3392 5569 6947 7339", "630 1487 3061 9977", "2532 2028 6033 5540", "292 2613 1678 3280", "6930 5796 8743 9232", "36 8303 1864 9548", "5993 5118 9803 5533", "5162 137 5870 8367", "4397 5705 7287 9040", "8773 598 9498 5530", "1306 1597 7719 7558", "2418 5791 9396 7908", "1160 3022 1589 7139", "1623 2907 8269 7616", "8025 4729 8071 4815", "4678 1456 5477 4951", "1964 495 2238 3045", "1011 155 2675 3899", "392 1369 9294 7077", "1712 4453 2869 9276", "4455 7659 7997 9058"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> rectangles = {"0 0 1 10000", "0 0 1 10000", "0 0 1 10000", "0 0 1 10000", "0 0 1 10000", "0 0 10000 1", "0 0 10000 1", "0 0 10000 1", "0 0 10000 1", "0 0 10000 1", "0 9999 10000 10000", "0 9999 10000 10000", "0 9999 10000 10000", "0 9999 10000 10000", "0 9999 10000 10000", "9999 0 10000 10000", "9999 0 10000 10000", "9999 0 10000 10000", "9999 0 10000 10000", "9999 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000", "0 0 10000 10000"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> rectangles = {"0 0 30 10", "0 0 10 30", "20 0 30 30", "0 20 30 30", "11 11 29 29", "100 100 10000 10000"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> rectangles = {"0 0 4 1", "0 0 1 4", "3 0 4 4", "0 3 4 4"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> rectangles = {"0 0 5 1", "4 1 5 4", "1 4 5 5", "0 1 1 5", "1 1 3 2", "3 1 4 3", "2 3 4 4", "1 2 2 4", "2 2 3 3"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> rectangles = {"0 2 1 3", "4 2 5 3", "2 0 3 1", "2 4 3 5"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> rectangles = {"0 11 1 12", "2 11 3 12", "1 10 2 11", "1 12 2 13"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> rectangles = {"0 0 1 1", "3 3 4 4", "6 6 7 7", "9 9 10 10", "12 12 13 13", "15 15 16 16", "18 18 19 19", "21 21 22 22", "24 24 25 25", "27 27 28 28", "30 30 31 31", "33 33 34 34", "36 36 37 37", "39 39 40 40", "42 42 43 43", "45 45 46 46", "48 48 49 49", "51 51 52 52", "54 54 55 55", "57 57 58 58", "60 60 61 61", "63 63 64 64", "66 66 67 67", "69 69 70 70", "72 72 73 73", "75 75 76 76", "78 78 79 79", "81 81 82 82", "84 84 85 85", "87 87 88 88", "90 90 91 91", "93 93 94 94", "96 96 97 97", "99 99 100 100", "102 102 103 103", "105 105 106 106", "108 108 109 109", "111 111 112 112", "114 114 115 115", "117 117 118 118", "120 120 121 121", "123 123 124 124", "126 126 127 127", "129 129 130 130", "132 132 133 133", "135 135 136 136", "138 138 139 139", "141 141 142 142", "144 144 145 145", "147 147 148 148"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> rectangles = {"0 0 2 2", "0 2 2 4", "2 0 4 2", "2 2 4 4", "0 1 1 3", "1 3 3 4", "1 0 3 1", "3 1 4 3"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> rectangles = {"0 0 10000 2213", "0 0 2237 10000", "2237 2214 10000 10000", "2238 2213 10000 10000"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> rectangles = {"0 0 2 1", "2 0 3 2", "1 2 3 3", "0 1 1 3", "0 0 2 1", "2 0 3 2", "1 2 3 3", "0 1 1 3"};
    OneMorePoint* pObj = new OneMorePoint();
    clock_t start = clock();
    string result = pObj->interiorPoint(rectangles);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=8075&pm=5924
********************************************************************************
// I think it is good to submit wrong solutions sometimes to give others challenging opportunities. 
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
#define LS < 
#define Size(x) (int(x.size())) 
#define LET(k,val) typeof(val) k = (val) 
// execute "act", and return "val" as an expression result 
#define CLC(act,val) (*({act; static typeof(val) CLCR; CLCR = (val); &CLCR;})) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
// Standard mathematical quantifiers, plus tools to implement them 
// find the first k in [a,b) that satisfies cond, or b if none 
#define FIRST(k,a,b,cond) CLC(LET(k, a); for(; k LS (b); ++k) if(cond) break, k) 
#define EXISTS(k,a,b,cond) (FIRST(k,a,b,cond) LS (b)) 
 
#line 3 "OneMorePoint.cc" 
 
class OneMorePoint { 
  public: 
  string interiorPoint(vector <string> rectangles) { 
    // !FDI 
    int x1[60], y1[60], x2[60], y2[60]; 
    int N = Size(rectangles); 
    FOR(k,0,N) sscanf(rectangles[k].c_str(), "%d%d%d%d", x1+k,y1+k,x2+k,y2+k); 
     
    int ex[20000]; 
    FOR(l,0,20000) ex[l] = 0; 
    FOR(l,0,N) ex[x1[l]] = ex[x2[l]] = ex[y1[l]] = ex[y2[l]] = 1; 
    FOR(l,1,20000) ex[l] += ex[l-1]; 
     
    FOR(l,0,N) { 
      x1[l]=ex[x1[l]]; y1[l]=ex[y1[l]];  
      x2[l]=ex[x2[l]]; y2[l]=ex[y2[l]]; 
      }                        
     
//  FOR(p,0,10) printf("%3d", ex[p]); printf("\n"); 
    int where[300][300]; 
    FOR(a,0,300) FOR(b,0,300) where[a][b] = 0; 
    FOR(l,0,N) { 
//    printf("%d,%d,%d,%d\n", x1[l],y1[l],x2[l],y2[l]); 
      FOR(x,x1[l],x2[l]) FOR(y,y1[l],y2[l]) 
        where[x][y] |= 1; 
      FOR(x,x2[l],300) FOR(y,y1[l],y2[l]) 
        where[x][y] |= 2; 
      FOR(x,0,x1[l]) FOR(y,y1[l],y2[l]) 
        where[x][y] |= 4; 
      FOR(x,x1[l],x2[l]) FOR(y,0,y1[l]) 
        where[x][y] |= 8; 
      FOR(x,x1[l],x2[l]) FOR(y,y2[l],300) 
        where[x][y] |= 16; 
      } 
    return EXISTS(x,0,300,EXISTS(y,0,300, where[x][y] == 30)) ? "YES" : "NO"; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/