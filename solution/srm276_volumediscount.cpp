/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5945
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

class VolumeDiscount {
public:
    int bestDeal(vector<string> priceList, int quantity);
};

int VolumeDiscount::bestDeal(vector<string> priceList, int quantity) {
    int ret;
    return ret;
}


int test0() {
    vector<string> priceList = {"1 10", "5 45"};
    int quantity = 10;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> priceList = {"1 8", "5 45"};
    int quantity = 10;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> priceList = {"99 913", "97 173", "50 464", "80 565"};
    int quantity = 18;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 173;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> priceList = {"99 577", "97 796", "50 449"};
    int quantity = 50;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 449;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> priceList = {"99 577", "97 796", "50 449"};
    int quantity = 21;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 449;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> priceList = {"64 302", "3 363"};
    int quantity = 74;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 604;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> priceList = {"33 895", "13 838", "94 565", "83 761"};
    int quantity = 21;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 565;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> priceList = {"56 470", "71 775", "17 372", "5 895", "67 527"};
    int quantity = 84;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 899;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> priceList = {"32 235", "2 798", "3 855", "30 760", "94 892"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 940;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> priceList = {"46 317", "99 906", "26 151"};
    int quantity = 7;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 151;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> priceList = {"72 290", "31 805"};
    int quantity = 59;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 290;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> priceList = {"2 272", "1 166", "10 993"};
    int quantity = 81;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 8110;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> priceList = {"78 34"};
    int quantity = 66;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> priceList = {"49 650", "90 90", "12 999", "39 279", "86 93"};
    int quantity = 40;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> priceList = {"88 994", "5 880", "84 281", "92 305"};
    int quantity = 67;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 281;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> priceList = {"97 114", "57 316", "67 995", "29 336"};
    int quantity = 36;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 114;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> priceList = {"63 937", "92 374", "23 787", "69 379", "55 29"};
    int quantity = 54;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> priceList = {"20 483", "32 898"};
    int quantity = 34;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 966;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> priceList = {"45 692"};
    int quantity = 59;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 1384;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> priceList = {"88 30", "94 841", "17 293", "5 111"};
    int quantity = 88;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> priceList = {"74 531", "29 903", "85 276", "15 274", "12 620"};
    int quantity = 96;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 550;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> priceList = {"53 147", "30 2", "84 194"};
    int quantity = 46;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> priceList = {"30 565", "33 568", "69 477", "58 77", "59 765"};
    int quantity = 3;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> priceList = {"88 335"};
    int quantity = 26;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 335;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> priceList = {"52 869", "53 620", "57 775", "94 232", "42 392"};
    int quantity = 79;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 232;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> priceList = {"2 272", "1 166", "10 993"};
    int quantity = 81;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 8110;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> priceList = {"2 272", "1 166", "10 993"};
    int quantity = 85;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 8654;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> priceList = {"10 1", "3 2", "1 100"};
    int quantity = 12;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> priceList = {"3 15", "7 34"};
    int quantity = 11;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> priceList = {"2 2", "3 3"};
    int quantity = 5;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> priceList = {"16 511", "3 783", "9 127", "21 759", "18 590"};
    int quantity = 3;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> priceList = {"5 100", "3 63", "6 126"};
    int quantity = 9;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 189;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> priceList = {"1 5", "98 1"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> priceList = {"10 5", "6 4", "2 4"};
    int quantity = 12;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> priceList = {"3 200", "1 100"};
    int quantity = 10;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 700;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> priceList = {"2 5", "3 6", "4 7", "5 9"};
    int quantity = 7;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> priceList = {"1 3", "10 9", "4 4"};
    int quantity = 12;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> priceList = {"4 30", "20 100", "2 20"};
    int quantity = 89;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 480;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> priceList = {"5 5", "8 9"};
    int quantity = 6;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> priceList = {"15 37", "10 28"};
    int quantity = 17;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> priceList = {"99 913", "97 173", "50 464", "80 565"};
    int quantity = 18;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 173;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> priceList = {"10 500", "3 150"};
    int quantity = 13;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 650;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> priceList = {"99 198", "60 60"};
    int quantity = 80;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> priceList = {"3 10", "5 12"};
    int quantity = 6;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> priceList = {"3 6", "4 9"};
    int quantity = 4;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> priceList = {"3 100", "2 49"};
    int quantity = 3;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> priceList = {"3 3", "4 4"};
    int quantity = 4;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> priceList = {"2 272", "1 166", "10 993", "9 900"};
    int quantity = 81;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 8100;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> priceList = {"10 200", "20 100"};
    int quantity = 10;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> priceList = {"32 2", "97 7"};
    int quantity = 97;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> priceList = {"1 5", "5 14", "3 9"};
    int quantity = 7;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> priceList = {"50 500", "9 99"};
    int quantity = 63;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 693;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> priceList = {"5 10", "4 8", "1 500"};
    int quantity = 97;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 194;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> priceList = {"1 10", "5 45"};
    int quantity = 6;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> priceList = {"5 10", "6 11"};
    int quantity = 14;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> priceList = {"10 11", "9 7"};
    int quantity = 19;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> priceList = {"1 8", "5 20"};
    int quantity = 8;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> priceList = {"3 99", "2 80"};
    int quantity = 7;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 259;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> priceList = {"2 272", "7 166", "5 993"};
    int quantity = 81;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 1992;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> priceList = {"10 40", "50 100"};
    int quantity = 20;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> priceList = {"12 300", "8 196", "5 123"};
    int quantity = 41;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 1007;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> priceList = {"1 1", "5 1"};
    int quantity = 4;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> priceList = {"6 51", "5 50"};
    int quantity = 10;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> priceList = {"3 5"};
    int quantity = 8;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> priceList = {"20 1", "1 100"};
    int quantity = 81;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> priceList = {"3 3", "4 4"};
    int quantity = 10;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> priceList = {"1 8", "90 1"};
    int quantity = 98;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> priceList = {"10 86", "30 357", "89 890", "87 837", "1 11"};
    int quantity = 89;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 774;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> priceList = {"98 100", "97 100"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> priceList = {"98 999"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 1998;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> priceList = {"49 490", "1 100", "2 21"};
    int quantity = 50;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 511;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> priceList = {"1 999", "99 99"};
    int quantity = 2;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> priceList = {"8 6", "9 10"};
    int quantity = 9;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> priceList = {"5 4", "1 1"};
    int quantity = 6;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> priceList = {"1 3"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 297;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> priceList = {"3 9", "4 8", "5 9"};
    int quantity = 7;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> priceList = {"98 1"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> priceList = {"2 12", "3 20"};
    int quantity = 5;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> priceList = {"13 130", "23 198"};
    int quantity = 62;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 588;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> priceList = {"10 1", "2 1"};
    int quantity = 11;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> priceList = {"50 100", "26 60"};
    int quantity = 52;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> priceList = {"98 10", "99 15"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> priceList = {"4 4", "13 14"};
    int quantity = 13;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> priceList = {"9 9", "6 6", "4 4"};
    int quantity = 10;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> priceList = {"1 90", "10 800", "11 999"};
    int quantity = 11;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 890;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> priceList = {"1 1", "2 2", "3 3", "4 4", "5 5"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> priceList = {"3 99", "5 165", "1 50", "2 80"};
    int quantity = 7;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 245;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> priceList = {"20 30", "30 100", "21 800"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> priceList = {"2 272", "1 166", "10 993"};
    int quantity = 84;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 8488;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> priceList = {"9 90", "8 88", "2 80", "1 79"};
    int quantity = 10;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> priceList = {"10 10", "11 12"};
    int quantity = 11;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
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
    vector<string> priceList = {"4 30", "20 100", "2 30"};
    int quantity = 89;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 490;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> priceList = {"1 7", "3 16", "4 20"};
    int quantity = 14;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> priceList = {"29 30", "30 30"};
    int quantity = 60;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> priceList = {"3 10", "5 14"};
    int quantity = 9;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> priceList = {"98 1", "97 1"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> priceList = {"2 10", "4 15"};
    int quantity = 3;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> priceList = {"32 32", "33 34"};
    int quantity = 97;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> priceList = {"10 10", "20 200"};
    int quantity = 13;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> priceList = {"2 272", "1 166", "10 993", "99 999", "77 234"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 468;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> priceList = {"2 5"};
    int quantity = 1;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> priceList = {"3 3"};
    int quantity = 5;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> priceList = {"5 10", "6 12"};
    int quantity = 20;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> priceList = {"5 45", "2 20"};
    int quantity = 8;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> priceList = {"5 45", "4 45"};
    int quantity = 7;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> priceList = {"98 99"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> priceList = {"1 4", "5 15", "2 7", "10 20"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> priceList = {"2 70", "1 100", "10 200"};
    int quantity = 81;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 1670;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> priceList = {"3 3", "4 4"};
    int quantity = 8;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> priceList = {"1 20", "2 1", "3 2"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> priceList = {"2 30", "3 20"};
    int quantity = 1;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> priceList = {"1 4", "5 15", "2 7", "10 20"};
    int quantity = 8;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> priceList = {"5 80", "4 81"};
    int quantity = 8;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> priceList = {"1 99", "9 1", "5 8"};
    int quantity = 10;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> priceList = {"99 3", "2 2"};
    int quantity = 1;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> priceList = {"20 4", "60 3"};
    int quantity = 80;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> priceList = {"5 8", "3 5"};
    int quantity = 19;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> priceList = {"1 10", "2 9", "3 8", "4 7", "5 6"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> priceList = {"1 1", "2 1", "3 1", "4 1", "5 1"};
    int quantity = 99;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> priceList = {"12 300", "8 100", "5 123"};
    int quantity = 41;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> priceList = {"2 272", "1 166", "10 993"};
    int quantity = 87;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 8926;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> priceList = {"5 5", "2 3"};
    int quantity = 7;
    VolumeDiscount* pObj = new VolumeDiscount();
    clock_t start = clock();
    int result = pObj->bestDeal(priceList, quantity);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=8073&pm=5945
********************************************************************************
#include <string>
#include <vector>
#include <set>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <algorithm>
#include <map>
#include <sstream>
#include <iostream>
#include <cctype>
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ii;
#define si size()
#define s(x) sort((x).begin(), (x).end())
 
int lc[1000];
class VolumeDiscount {
  public:
  int bestDeal(vector <string> priceList, int quantity) {
    vi amt; vi pr;
    for (int i = 0; i < priceList.si; i++) {
      int a, p;
      sscanf(priceList[i].c_str(), "%d %d", &a, &p);
      amt.push_back(a);
      pr.push_back(p);
    }
    
    for (int i = 0; i < 1000; i++) lc[i] = 1000000000;
    lc[0] = 0;
    for (int i = 0; i < 400; i++) {
      for (int j = 0; j < amt.si; j++)
      lc[i+amt[j]] <?= lc[i] + pr[j];
    }
    int best = 1000000000;
    for (int i = quantity; i < 400; i++) best <?= lc[i];
    return best;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/