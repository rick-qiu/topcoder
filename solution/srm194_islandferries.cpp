/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2437
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

class IslandFerries {
public:
    vector<int> costs(vector<string> legs, vector<string> prices);
};

vector<int> IslandFerries::costs(vector<string> legs, vector<string> prices) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> legs = {"0-1 0-3", "0-2"};
    vector<string> prices = {"5 7", "1000 1000", "1000 1000", "1000 1000"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 7, 5};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> legs = {"0-1 1-2 2-3", "0-1 2-3"};
    vector<string> prices = {"1 10", "20 25", "50 50", "1000 1000", "1000 1000"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 11, 31, -1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> legs = {"0-1", "1-0", "0-2", "2-3"};
    vector<string> prices = {"1 1 1000 1000", "1000 1000 10 100", "1000 1000 1000 1000", "1000 1000 1000 1000"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 12, 112};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> legs = {"1-0"};
    vector<string> prices = {"793", "350"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> legs = {"2-0 1-2 1-0 2-1 0-2"};
    vector<string> prices = {"355", "401", "806"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1161, 355};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> legs = {"1-0 0-1", "1-0 0-1"};
    vector<string> prices = {"17 51", "650 897"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> legs = {"1-2 0-3 3-0 3-2 1-3 2-0 3-1", "3-0 0-1 0-2 2-3 2-0 3-2 2-1", "0-3 3-0 2-1 0-1 1-0 2-0 3-1 3-2 0-2 1-3 1-2 2-3", "2-0 0-1 2-3 3-2 0-2", "1-0 2-1 0-1 1-2"};
    vector<string> prices = {"5 476 881 680 50", "4 725 268 250 78", "683 462 87 130 80", "901 913 28 109 17"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {33, 33, 5};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> legs = {"2-1 1-3 2-3 0-3 0-1 3-0 0-2 1-2 1-0 3-1 2-0 3-2", "1-2 0-3 2-1 0-2 1-3 3-1 3-0 0-1 2-0 1-0 3-2 2-3", "1-0 3-0 2-1 0-3 2-3 2-0 1-2 0-2 0-1 1-3 3-2 3-1", "3-2 1-3 0-3 2-1 3-0 0-1 1-2 2-0 2-3", "1-2 3-0 2-0 0-3"};
    vector<string> prices = {"47 78 257 766 10", "980 344 614 60 653", "88 2 32 456 237", "12 3 135 9 436"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13, 10};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> legs = {"3-0 0-1", "3-2 1-2 2-0 0-3 2-1 3-0 1-3", "2-3 3-1 0-2 3-0 1-0", "1-0 0-3 1-2 2-3 3-1 2-0 1-3 3-0", "3-1 1-2 2-0 3-0 1-3"};
    vector<string> prices = {"345 210 212 891 207", "139 303 28 242 628", "780 99 356 517 1", "4 9 38 68 24"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {223, 212, 210};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> legs = {"0-3 2-0 1-2 1-0", "3-2 3-1 2-1 2-3 1-2 2-0 3-0 1-3 1-0", "2-0 1-2 2-3 0-2 1-0 2-1 3-2", "0-2 1-3", "0-1 3-1 0-3 1-3 3-0"};
    vector<string> prices = {"151 695 654 65 30", "23 382 25 905 67", "524 4 972 3 965", "935 73 344 3 8"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 41, 30};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> legs = {"1-0", "0-1 1-0", "1-0", "0-1 1-0", "0-1", "0-1 1-0", "0-1", "0-1 1-0", "1-0", "1-0"};
    vector<string> prices = {"362 63 859 10 10 8 6 93 558 522", "38 6 66 7 227 92 710 9 6 3"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> legs = {"0-1 1-0", "0-1", "0-1 1-0", "0-1 1-0", "0-1", "0-1 1-0", "1-0 0-1", "0-1 1-0", "0-1 1-0", "1-0 0-1"};
    vector<string> prices = {"1 543 35 657 17 284 85 7 3 412", "104 5 2 794 74 953 97 5 14 19"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> legs = {"0-1", "0-1", "1-0 0-1", "1-0 0-1", "0-1", "1-0 0-1", "1-0", "1-0", "1-0 0-1", "1-0 0-1"};
    vector<string> prices = {"197 18 505 424 4 617 58 5 817 779", "633 3 402 1 3 16 811 380 82 603"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> legs = {"0-1 1-0", "1-0 0-1", "1-0", "1-0", "0-1 1-0", "0-1 1-0", "1-0 0-1", "0-1", "0-1", "0-1"};
    vector<string> prices = {"670 328 374 268 9 84 73 5 100 71", "21 348 842 10 23 80 787 82 69 492"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> legs = {"5-0 1-4 3-6 3-1 6-3", "1-5 4-5 0-2 4-6 5-3 1-3 1-2 2-3 2-1 0-4 4-2 1-4", "5-2 4-5 1-5 6-3 1-6 3-0 5-4 2-4 0-2 2-5 5-0 6-1", "6-1 6-2 1-3 0-1 3-2 1-2 0-3 0-2 2-0 4-1 5-4 1-0", "6-0 5-1 2-1 5-2 5-0 1-6 5-3 4-5 3-0 2-6 0-6 1-2", "4-1 5-6 3-1 6-2 2-1 1-0 4-5 0-3 1-3 2-3 3-5 1-2"};
    vector<string> prices = {"367 2 892 2 28 2", "897 957 438 62 21 84", "77 217 201 884 908 43", "231 746 692 9 3 8", "69 32 532 56 10 232", "3 212 636 899 527 514", "848 735 261 187 11 545"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2, 2, 4, 6};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> legs = {"5-0 6-2 0-2 7-2 2-6 4-2 0-4 0-1 6-7 7-3 0-3 4-6", "4-2 5-4 1-7 7-4 6-0 6-2 3-5 1-5 1-6 6-7 5-7 2-5", "6-0 3-7 4-5 0-1 6-4 4-6 7-4 2-1 4-0 0-2 1-2 7-2", "5-0 2-1 1-7 2-5 3-7 2-3 4-7 0-5 6-4 7-2 7-5 4-2", "3-4 4-0 2-7 1-5 1-2 6-4 0-6 4-2 3-6 5-0 7-0 4-5", "7-0 0-3 1-3 0-5 6-7 6-2 5-1 2-5 1-7"};
    vector<string> prices = {"659 65 11 7 731 116", "786 83 36 3 10 729", "3 89 130 8 26 174", "38 70 270 8 7 9", "708 390 156 454 86 717", "3 1 76 8 537 68", "34 988 301 21 8 4", "8 494 426 626 594 409"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11, 8, 7, 11, 8};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> legs = {"3-1 6-2 3-6 2-5 6-5 3-2 0-6 7-8 8-7 5-8 2-1 6-4", "0-3 6-7 3-1 8-0 6-3 1-6 0-2 3-7 3-6 6-1 4-1 8-1", "4-5 6-0 6-5 6-1 8-4 8-0 5-6 7-2 5-2 7-0 3-4 1-7", "0-7 4-6 4-3 4-7 8-7 0-4 8-3 7-3 7-8 8-2 6-4 1-0", "5-2 3-1 5-6 0-2 5-8 5-7 8-3 1-2 8-2 2-8 2-0 0-8", "0-2 1-3 1-0 5-2 4-7 8-5 2-3 4-5 2-5 2-4 1-5 8-0"};
    vector<string> prices = {"848 789 816 1 21 27", "771 1 684 7 11 62", "19 140 5 4 72 664", "606 10 878 346 910 7", "58 161 8 833 491 4", "28 65 875 985 71 90", "778 811 821 808 443 6", "6 418 641 286 2 3", "71 951 18 57 78 887"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 9, 9, 1, 5, 12, 1, 7};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> legs = {"2-8 6-1 1-3 5-3 2-6 2-7 4-9 2-3 5-6 7-0 1-8 3-1", "7-4 5-6 9-4 4-0 4-8 7-5 8-6 9-7 2-8 4-6", "3-1 8-6 1-5 0-2 2-6 6-5 9-0 6-4 8-0 9-4 6-8 2-5", "8-4 7-3 8-6 7-0 9-5 1-2 1-8 4-8 5-0 0-7 8-3 8-5", "3-0 1-8 1-0 3-1 8-3 3-5 7-4 4-5 8-5 2-7 7-2 0-7", "8-4 8-2 3-0 0-4 9-0 6-5 4-9 3-2 1-8 5-2 6-0 3-1"};
    vector<string> prices = {"6 776 34 48 9 5", "8 4 98 50 210 58", "63 49 132 510 1 770", "341 5 335 132 129 911", "103 99 714 32 87 5", "142 88 227 69 10 6", "5 87 63 12 286 97", "87 2 42 1 925 727", "872 134 9 91 470 61", "920 120 10 95 491 135"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 15, 10, 5, 11, 17, 9, 12, 10};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> legs = {"2-18 6-1 9-19 1-3 5-13 12-6 2-17 14-9 12-3 5-6", "3-13 11-18 13-11 17-6 4-5 7-4 15-16 19-14 4-10", "18-6 9-7 2-8 4-6 2-4 3-11 11-15 0-12 2-6 6-15 19-0", "18-10 19-14 6-18 12-15 4-17 0-11 0-10 18-4 17-13", "19-15 11-2 1-8 4-18 15-0 0-17 18-3 8-5 1-0 9-3"};
    vector<string> prices = {"584 71 29 404 5", "676 83 13 128 94", "35 84 5 52 27", "90 273 2 3 4", "7 6 776 34 48", "9 5 8 4 98", "50 210 58 63 49", "132 510 1 770 341", "5 335 132 129 911", "103 99 714 32 87", "5 142 88 227 69", "10 6 5 87 63", "12 286 97 87 2", "42 1 925 727 872", "134 9 91 470 61", "920 120 10 95 491", "135 882 81 65 193", "275 3 83 901 598", "926 521 5 67 149", "566 1 202 980 4"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {58, 45, 41, 50, 56, 8, -1, 50, -1, 52, 43, 29, 58, -1, 37, 54, 5, 49, -1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> legs = {"7-15 17-5 11-9 4-17 19-11 6-4 16-3 8-0 9-12 1-3", "8-19 18-14 6-17 18-17 8-10 5-8 15-14 14-2 11-7", "11-18 0-15 14-6 7-8 9-5 8-7 16-17 8-1 11-10 0-4", "16-19 5-12 19-2 9-5 1-12 18-19 9-14 8-0 3-9 6-19", "0-17 5-7 4-18 10-11 3-1 1-7 13-16 13-15 13-1 15-9", "12-10 16-18 5-9 13-0 2-1 8-0 19-6 11-15 7-4 5-6"};
    vector<string> prices = {"359 367 673 60 540 86", "46 427 46 577 155 40", "2 58 83 3 294 7", "120 355 222 55 878 415", "37 712 4 8 2 90", "572 345 73 3 35 656", "77 124 62 99 73 58", "766 228 250 8 23 76", "634 577 712 774 727 432", "749 792 67 63 587 643", "92 1 29 912 3 2", "8 658 74 7 47 700", "34 732 1 4 614 332", "4 912 1 617 212 91", "20 642 348 973 624 123", "187 97 214 1 46 230", "678 1 315 3 98 66", "14 400 8 20 111 401", "4 200 77 500 980 6", "4 156 413 1 17 871"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {651, 644, 653, 649, 554, 640, 589, 597, 640, 643, 646, 557, -1, 643, 648, -1, 540, 647, 643};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> legs = {"4-6 1-16 16-14 6-4 15-10 4-2 18-4 1-14 19-18 19-2", "7-5 16-8 12-6 0-18 12-2 12-13 5-4 1-13 3-14 0-3", "18-19 14-19 0-13 10-11 3-16 7-18 1-13 8-5 15-8 9-0", "18-12 6-12 8-4 8-14 6-10 16-19 16-13 13-8 2-12 4-6", "17-16 19-16 7-11 17-12 0-13 7-10 2-9 10-8 9-1 18-7", "19-3 8-14 5-13 19-17 4-7 2-7 19-14 6-14 9-2 5-9", "10-1 4-18 18-14 12-0 2-6 16-3 11-8 9-6 12-11 1-13"};
    vector<string> prices = {"233 839 333 96 30 929 710", "6 3 82 2 12 670 429", "195 871 31 949 4 432 859", "717 499 999 25 10 3 46", "31 254 81 233 1 79 10", "3 47 10 240 9 565 5", "219 44 5 735 9 554 16", "41 933 82 9 3 402 185", "581 955 808 171 10 6 3", "6 279 2 33 241 720 347", "280 966 18 546 103 282 4", "119 3 196 3 844 8 8", "6 137 315 9 6 5 10", "44 408 150 449 36 6 787", "87 25 25 1 15 474 98", "541 74 819 25 9 179 902", "511 954 2 264 560 430 4", "999 359 709 164 753 94 310", "506 1 359 959 325 193 1", "1 99 184 273 195 2 10"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {166, 158, 159, 166, 168, 160, 160, 126, 162, 162, 160, 159, 30, 132, -1, 167, 159, 158, 157};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> legs = {"8-18 4-11 15-5 7-12 11-8 0-15 15-2 3-11 4-18 2-3", "16-2 18-3 15-18 11-19 18-2 18-7 19-17 3-15 12-19", "2-17 0-12 1-2 14-12 6-2 4-2 11-5 4-11 11-6 17-16", "0-18 13-18 16-0 3-7 14-12 3-1 19-18 3-19 10-3 8-15", "18-19 3-16 13-6 0-19 12-14 5-17 1-12 7-13 9-14 1-2", "14-5 17-9 2-10 16-13 11-15 10-17 14-10 0-14 2-13", "4-5 0-17 6-9 17-7 12-6 5-6 6-18 10-18 0-2 13-0 8-4", "3-12 4-11 10-17 13-12 3-0 3-7 13-0 9-15 10-9 0-10"};
    vector<string> prices = {"592 219 88 529 324 86 503 610", "2 94 8 600 34 95 6 494", "638 301 10 246 290 97 85 74", "118 8 939 393 450 79 317 99", "99 806 698 740 2 26 525 818", "95 9 615 972 23 23 5 666", "6 448 440 710 83 4 419 496", "4 47 182 4 185 70 718 770", "3 321 6 855 968 65 10 6", "173 224 300 3 79 2 707 49", "21 10 7 10 4 9 5 8", "6 600 4 724 7 1 960 247", "83 16 901 50 437 780 658 2", "763 923 125 576 45 423 3 1", "7 324 391 898 8 59 281 973", "9 44 49 364 78 744 43 5", "10 62 75 418 216 90 32 919", "764 534 778 605 80 647 821 74", "65 449 102 867 421 94 6 7", "67 155 362 789 189 316 107 595"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {170, 160, 155, 173, 145, 150, 158, 168, 153, 145, 162, 88, 162, 86, 163, 159, 153, 150, 104};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> legs = {"36-4 32-29 1-5 24-10 19-39 12-23 36-35 6-2 3-1"};
    vector<string> prices = {"3", "943", "6", "433", "96", "132", "19", "203", "306", "985", "596", "788", "939", "9", "840", "347", "700", "84", "252", "67", "893", "542", "828", "67", "434", "63", "859", "10", "10", "8", "6", "93", "558", "522", "38", "6", "66", "7", "227", "92"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> legs = {"23-14 30-11 8-32 2-4 23-31 2-7 31-23 25-35 28-39", "34-35 0-3 25-20 7-12 9-27 34-29 16-4 25-24 2-6"};
    vector<string> prices = {"46 340", "586 8", "170 448", "60 103", "5 684", "1 55", "89 3", "640 10", "41 5", "935 36", "3 49", "8 68", "3 1", "204 286", "386 1", "543 35", "657 17", "284 85", "7 3", "412 104", "5 2", "794 74", "953 97", "5 14", "19 250", "4 5", "36 306", "9 316", "252 91", "148 390", "95 793", "97 2", "10 1", "65 13", "3 5", "685 3", "10 81", "240 26", "6 10", "4 74"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, 340, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> legs = {"38-32 25-6 35-3 32-23 28-8 11-17 23-7 30-5 15-31", "0-9 16-28 35-16 27-26 21-34 17-15 33-31 12-36 3-1", "33-6 34-1 35-19 24-10 9-11 17-8 24-17 23-16 37-16"};
    vector<string> prices = {"67 577 7", "6 944 262", "928 10 4", "3 65 289", "89 168 796", "7 79 781", "613 118 505", "424 4 617", "58 5 817", "779 633 3", "402 1 3", "16 811 380", "82 603 40", "69 97 32", "924 511 383", "373 1 7", "44 243 3", "429 777 832", "433 29 8", "109 628 26", "924 343 424", "843 51 98", "67 9 7", "507 952 8", "741 1 362", "529 486 743", "26 623 6", "8 8 10", "863 25 24", "182 56 7", "24 99 6", "724 450 50", "127 121 81", "10 717 31", "317 670 94", "538 82 21", "49 10 38", "174 29 499", "2 323 530", "4 356 523"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, 976, 577, -1, 580, -1, -1, -1, 1229, -1, 596, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1602, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> legs = {"17-18 5-17 0-36 4-37 8-3 8-23 10-5 18-23 8-12", "2-31 35-22 18-1 18-5 30-29 36-17 38-35 19-21 3-16", "14-32 26-29 10-0 0-29 22-29 27-37 36-18 0-36 0-5", "2-25 25-28 18-37 9-36 0-27 12-31 38-39 29-22 5-29"};
    vector<string> prices = {"159 10 871 74", "268 9 84 73", "4 1 71 21", "348 842 10 23", "80 787 82 69", "492 397 143 673", "819 62 4 22", "43 8 1 541", "7 163 278 286", "41 7 65 7", "85 3 817 10", "773 152 9 38", "100 933 2 10", "114 2 781 556", "3 488 70 538", "557 10 219 524", "5 615 6 7", "291 7 545 33", "507 365 969 1", "733 3 232 72", "485 8 1 77", "157 1 5 6", "117 380 3 489", "8 10 821 10", "274 164 72 130", "488 3 39 61", "4 26 69 869", "808 260 395 234", "265 482 47 6", "13 82 7 25", "581 10 1 532", "2 15 66 9", "6 706 465 8", "948 591 92 618", "53 332 51 873", "825 771 3 723", "762 51 887 452", "335 357 8 7", "3 24 931 26", "194 398 890 380"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {467, -1, -1, -1, 467, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 169, 460, -1, -1, -1, 493, 967, -1, -1, -1, 74, -1, 468, -1, -1, -1, -1, -1, -1, 159, 461, -1, -1};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> legs = {"22-19 29-33 25-32 21-30 24-30 35-31 4-8 9-7 18-3", "3-16 18-14 32-2 27-29 2-16 3-15 7-14 17-19 9-32", "24-32 11-13 19-9 13-26 28-31 13-3 24-10 19-36", "16-27 5-27 11-14 23-5 1-28 25-21 30-4 33-30 6-18", "26-36 34-29 28-8 9-19 29-36 36-17 30-4 36-34 9-1", "20-15 32-10 26-1 2-27 14-19 18-32 0-36 19-12 21-17", "34-28 17-20 16-17 33-36 1-29 2-33 27-15 4-27 5-11", "26-17 0-21 11-5 2-13 0-2 32-27 28-8 33-25 35-11", "11-12 28-8 3-21 2-0 11-2 29-14 4-11 9-24 14-7", "5-12 16-29 1-27 35-8 10-33 36-1 30-0 36-6 18-30"};
    vector<string> prices = {"586 591 10 693 87 8 5 26 30 576", "931 923 84 516 461 99 501 7 929 1", "649 57 104 6 880 715 671 845 554 6", "20 2 495 489 71 610 764 36 580 17", "517 504 8 270 43 205 36 52 339 228", "5 97 7 93 998 30 8 78 41 37", "18 88 25 34 4 573 277 7 968 2", "52 7 544 551 3 33 8 5 176 53", "3 50 7 796 10 319 947 746 3 79", "290 487 96 675 52 739 31 5 723 89", "8 6 9 91 9 419 11 762 90 34", "612 9 10 98 77 870 271 472 95 811", "30 96 656 641 906 3 6 430 4 930", "48 353 7 34 7 491 1 7 52 426", "128 10 12 262 314 446 946 842 7 86", "198 445 10 481 4 993 276 814 3 4", "11 161 56 964 466 179 938 52 3 28", "1 935 398 492 10 59 150 43 6 720", "63 3 5 49 8 2 3 19 69 6", "4 6 38 747 109 43 18 9 15 2", "859 592 91 704 775 12 841 34 3 3", "997 8 1 769 682 639 9 2 799 1", "60 620 8 5 10 72 250 37 798 8", "615 816 25 4 1 146 352 1 44 4", "2 10 280 8 17 3 553 404 37 76", "4 73 55 362 5 9 120 7 99 727", "819 999 10 48 4 519 467 522 12 8", "3 513 85 531 10 99 8 3 896 825", "804 112 848 507 4 100 5 947 5 11", "120 68 304 9 83 685 374 860 8 6", "7 9 5 275 3 5 34 917 87 2", "66 942 8 1 7 797 40 828 748 855", "6 3 952 194 7 253 257 1 85 56", "887 986 702 936 8 8 9 7 6 91", "10 99 2 877 393 9 586 3 896 3", "59 70 383 336 355 912 4 65 430 6", "220 245 766 10 62 176 6 96 59 4"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 26, 33, 27, 46, 12, 32, 26, 32, 43, 45, 70, 28, 25, 18, 35, 31, 22, 27, 36, 26, -1, -1, 39, 31, 33, 13, 22, 17, 24, 32, 24, 30, 31, -1, 8};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> legs = {"26-37 18-32 5-24 35-10 13-3 15-13 10-11 13-29 2-16", "35-20 34-18 13-17 1-11 31-18 36-4 32-0 26-22 26-30", "8-22 4-18 1-9 1-2 11-16 21-3 4-30 26-33 24-30 1-16", "18-23 10-1 15-36 16-19 6-25 22-31 6-37 12-34 31-16", "16-19 13-17 9-17 29-17 7-18 1-27 31-5 25-19 19-24", "37-16 10-29 6-31 6-36 25-14 25-30 24-22 29-33 5-30", "19-30 17-22 5-34 5-22 10-2 33-21 22-15 20-27 17-13", "12-4 35-18 0-35 12-29 0-32 33-8 37-0 11-16 6-16", "27-0 14-16 18-6 17-34 26-10 30-12 2-27 34-37 6-8", "27-35 0-25 17-32 11-35 4-27 7-13 16-36 35-19 26-12"};
    vector<string> prices = {"881 96 2 738 6 18 62 47 78 767", "1 376 523 5 11 45 36 746 31 4", "325 559 402 18 8 9 613 804 646 19", "9 901 78 3 2 2 7 10 491 768", "8 978 3 434 2 20 195 6 1 7", "209 582 42 643 882 463 32 916 672 4", "323 344 817 858 637 95 3 700 69 7", "4 48 328 874 98 10 2 749 97 637", "15 940 8 33 57 179 2 23 55 25", "4 64 13 1 82 4 993 354 272 2", "755 460 8 328 461 6 946 3 40 553", "23 5 30 576 894 818 2 437 7 983", "3 57 9 946 793 236 32 1 31 280", "82 490 10 7 50 568 717 28 84 17", "827 65 6 6 9 160 95 643 359 8", "32 47 1 10 11 82 746 993 36 8", "659 734 799 23 549 371 7 991 84 7", "924 777 4 503 55 4 9 5 76 55", "93 4 11 845 6 38 5 55 550 37", "797 86 980 38 982 681 3 67 5 1", "1 24 166 655 4 931 162 222 686 477", "18 743 251 2 441 8 371 62 964 995", "47 571 364 31 9 185 508 346 9 3", "39 1 32 514 21 961 5 10 60 24", "45 4 33 948 4 370 83 9 589 24", "2 51 752 2 5 49 40 934 674 374", "2 301 757 49 100 300 9 761 118 4", "32 879 29 327 93 2 814 732 1 4", "942 6 312 82 263 2 119 834 63 153", "22 1 912 909 96 1 5 5 12 768", "540 79 93 777 748 582 927 6 160 73", "94 15 237 121 13 9 4 131 874 86", "21 548 9 10 6 7 68 453 4 142", "10 7 10 236 516 623 233 3 5 30", "495 321 496 87 900 7 305 38 268 667", "3 933 569 5 25 694 155 529 89 151", "2 9 366 5 6 76 207 162 827 3", "3 967 705 43 8 7 44 664 181 374"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {55, 57, 64, 70, 76, 69, -1, 60, 57, 50, 111, 70, 67, 68, 64, 57, 62, 68, 62, 103, 62, 62, 73, 71, 66, -1, 61, -1, 56, 65, 67, 47, 57, 74, 47, 61, 74};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> legs = {"3-21 33-14 24-5 15-26 37-20 8-36 4-7 9-36 19-15", "18-14 2-12 31-3 15-25 9-17 5-7 5-0 25-13 19-6", "15-8 14-7 38-35 11-1 1-35 21-33 16-36 22-8 34-29", "29-23 25-26 33-5 30-33 10-18 11-29 17-31 4-24", "19-11 32-23 34-33 36-4 30-5 21-23 9-3 14-33 0-28", "11-23 28-1 26-11 19-10 17-34 30-29 23-8 14-25 8-10", "3-21 15-16 10-9 20-15 1-36 35-9 2-30 22-2 13-10", "7-2 23-13 18-8 20-0 29-16 3-5 13-11 25-0 5-31 21-3", "30-38 33-7 19-7 0-2 35-8 14-5 4-26 26-0 8-31 37-25", "35-24 19-23 16-9 8-7 26-8 30-37 7-23 29-35 8-4"};
    vector<string> prices = {"374 6 5 7 83 532 130 4 597 31", "11 554 89 7 208 2 1 1 514 124", "49 149 790 1 99 738 175 656 2 372", "4 715 84 52 9 30 37 2 81 481", "215 526 30 7 307 522 601 904 29 335", "939 7 444 792 7 918 32 15 133 830", "794 9 5 192 37 627 305 132 58 794", "984 1 88 886 89 191 1 474 66 91", "1 2 9 423 50 993 3 46 10 185", "91 293 5 32 3 44 8 406 536 499", "614 416 78 7 76 464 10 3 71 259", "242 550 94 863 8 186 80 8 65 75", "101 15 63 869 399 4 4 776 601 9", "34 352 5 32 27 310 53 220 162 975", "790 57 9 74 348 697 729 55 8 11", "436 24 241 56 8 6 1 188 363 421", "2 6 915 474 9 69 801 2 702 549", "740 2 35 299 789 4 484 5 111 62", "484 903 226 920 838 1 2 5 939 93", "94 732 701 6 985 947 765 217 312 79", "84 58 2 660 130 974 95 823 588 875", "6 34 74 939 619 5 523 7 44 298", "489 119 8 996 1 987 6 7 69 4", "43 9 276 49 7 64 391 961 5 99", "215 516 404 2 1 62 60 213 46 762", "20 6 9 589 322 9 9 52 10 6", "7 1 124 9 55 452 26 3 892 365", "54 403 955 677 387 18 5 10 654 95", "380 63 6 753 107 382 1 70 55 9", "2 1 68 9 634 376 19 91 833 71", "3 39 54 383 89 42 2 76 133 271", "822 32 110 678 41 11 821 4 55 1", "434 27 640 45 10 219 60 656 972 92", "860 8 59 27 149 4 5 405 525 34", "926 546 1 759 10 393 9 94 2 605", "717 865 62 2 49 2 10 10 9 90", "664 600 4 5 925 4 717 6 1 158", "632 414 728 2 930 19 192 68 492 2", "7 279 4 997 607 325 95 8 1 6"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {465, 489, 474, 485, 475, -1, 482, 479, 471, 481, 488, 490, 488, 485, 512, 485, 477, 483, -1, 510, 478, -1, 484, 479, 486, 486, -1, 83, 480, 490, 479, -1, 482, 479, 470, 466, 507, 492};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> legs = {"5-27 23-35 5-24 2-30 26-33 29-31 25-17 39-9 7-3", "20-5 33-35 15-37 15-5 1-3 36-20 37-33 0-10 3-8", "15-35 15-26 24-14 21-1 11-14 12-29 24-9 37-9 35-14", "5-21 31-27 7-2 21-37 16-27 14-35 1-9 36-26 7-20", "36-23 36-10 25-36 0-39 2-4 34-33 6-29 29-7 6-28", "15-28 33-17 8-39 19-30 25-35 13-27 18-16 32-19", "39-1 17-20 27-6 0-10 29-14 38-22 7-6 39-38 27-8"};
    vector<string> prices = {"3 1 6 649 3 71 398", "1 101 1 59 2 897 35", "164 171 138 86 66 13 787", "13 60 91 49 45 373 10", "7 765 70 764 42 4 48", "7 33 89 8 906 9 834", "226 756 935 83 3 10 951", "363 60 57 495 43 13 840", "985 7 10 270 75 848 6", "746 879 683 430 16 5 814", "126 2 337 621 88 839 111", "7 998 466 819 126 258 50", "9 1 135 761 83 1 226", "84 98 488 59 346 2 787", "8 11 80 5 289 828 853", "226 956 1 521 656 76 704", "133 1 889 7 1 10 900", "35 1 649 550 61 48 8", "176 470 504 57 8 441 91", "914 3 254 2 82 2 94", "814 662 9 6 970 13 4", "377 320 801 278 300 77 6", "7 647 301 88 973 195 64", "649 366 403 703 613 234 28", "96 579 46 5 258 82 552", "10 378 647 5 29 940 75", "396 863 291 238 5 13 4", "401 905 9 91 8 69 721", "5 29 793 235 89 141 388", "17 295 131 2 504 16 562", "891 10 3 53 101 10 862", "691 714 838 2 922 726 7", "422 2 15 10 67 898 3", "316 79 411 23 7 911 9", "7 351 6 43 670 684 778", "926 8 742 802 9 9 553", "237 149 28 170 38 87 760", "435 10 20 746 79 4 7", "807 112 67 969 871 9 96", "836 793 2 2 664 87 932"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {401, -1, 402, -1, -1, -1, -1, 462, 6, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 497, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 401, 3};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> legs = {"23-21 3-7 28-29 15-17 14-26 29-33 16-29 13-3 35-30", "25-13 14-28 26-34 35-7 10-32 11-16 0-27 22-33", "30-16 32-36 3-10 28-10 3-31 25-26 24-15 21-18", "14-39 14-5 23-16 30-3 11-23 3-12 5-8 2-27 9-27", "39-22 13-35 2-6 21-3 12-38 19-2 35-8 2-24 15-33", "14-13 18-22 19-8 18-1 31-32 0-3 10-6 8-18 30-3", "38-14", "39-12 5-11 4-1 18-28 17-27 24-6 23-24 38-22 17-15"};
    vector<string> prices = {"13 9 61 59 563 445 6 88", "880 92 661 994 585 7 24 80", "80 9 315 50 238 6 18 892", "50 401 2 553 6 459 83 41", "36 9 446 878 720 292 7 397", "863 656 124 8 377 916 925 3", "340 6 531 756 58 122 110 59", "2 4 2 7 1 961 44 565", "363 723 9 9 5 181 631 78", "5 65 534 98 303 224 768 1", "51 662 598 570 474 10 455 94", "39 8 18 10 926 77 77 922", "937 10 853 278 497 371 10 7", "724 519 405 81 9 849 4 34", "659 741 834 952 3 7 6 193", "192 2 877 10 33 92 947 845", "246 6 652 1 929 490 38 65", "877 23 911 19 6 6 10 797", "644 6 71 62 634 445 903 583", "734 10 892 279 8 16 95 20", "441 666 513 38 478 62 12 505", "713 52 91 3 30 14 961 6", "9 5 7 844 386 933 69 1", "30 10 9 452 879 81 9 80", "964 207 9 17 2 9 896 95", "3 10 228 58 6 9 575 10", "333 976 146 80 53 87 4 63", "747 4 164 843 368 993 723 565", "1 43 8 3 912 1 286 1", "311 7 96 10 5 344 8 3", "646 65 474 10 6 2 74 956", "985 273 342 802 50 50 909 98", "51 43 7 152 178 242 44 633", "792 4 249 161 660 335 75 667", "23 61 99 572 484 201 295 644", "5 91 959 178 961 2 779 879", "416 895 519 5 40 3 51 61", "10 25 1 301 10 97 219 6", "319 76 10 29 59 4 40 10", "246 65 1 3 62 1 665 979"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {591, -1, 445, -1, 545, 457, 458, 553, -1, 447, 548, 504, 520, 516, 642, 534, 662, 557, -1, -1, 573, 517, 556, 636, -1, 533, 9, 526, 527, 528, 447, 456, 522, 573, 523, 463, -1, 510, 545};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> legs = {"28-38 34-31 30-31 18-3 8-4 24-19 29-35 35-14 11-7", "3-33 10-2 18-6 2-14 37-24 21-30 14-39 27-13 1-10", "22-32 16-1 9-19 23-10 10-35 18-25 23-24 0-3 9-32", "16-21 7-12 22-30 12-37 26-0 6-7 7-36 19-36 5-31", "22-9 25-30 23-20 3-17 1-23 24-27 34-12 35-20 10-28", "0-9 20-2 1-15 0-27 21-4 3-17 2-9 35-37 10-9 19-0", "24-13 22-15 27-13 17-38 31-36 13-3 26-22 10-19", "38-9 33-23 33-39 32-10 16-30 22-15 32-36 9-38 6-32", "6-24 22-26 30-18 19-20 38-35 30-38 9-32 0-21 17-16"};
    vector<string> prices = {"22 819 68 10 1 2 9 952 3", "77 585 183 96 894 558 4 854 226", "1 977 1 400 547 3 48 5 24", "9 612 867 10 71 31 650 836 446", "833 846 4 47 546 52 65 949 40", "121 856 5 86 87 9 968 988 314", "81 787 6 255 23 826 544 137 7", "50 3 93 90 12 73 522 6 1", "46 331 6 77 5 335 1 7 90", "599 101 9 365 1 208 518 129 70", "848 15 724 793 979 33 1 598 6", "57 100 6 4 721 7 819 62 8", "686 9 22 49 343 81 336 817 5", "316 61 6 661 4 492 445 861 26", "43 9 385 8 108 790 365 209 3", "68 4 42 770 57 599 5 6 2", "7 187 302 96 911 1 997 854 18", "4 8 21 3 9 271 761 7 979", "4 8 4 835 2 24 74 836 26", "3 1 299 87 12 18 95 749 86", "995 986 10 952 89 984 201 201 10", "88 85 748 7 640 10 8 7 659", "3 549 247 99 314 4 5 79 275", "49 2 932 9 4 2 615 10 10", "99 716 3 7 601 11 94 37 9", "10 62 5 247 499 141 84 179 138", "734 8 991 77 911 535 12 4 695", "742 57 575 8 2 833 7 267 226", "36 908 9 43 7 107 13 7 927", "792 87 34 944 8 810 34 893 3", "806 907 859 274 3 4 803 4 8", "278 2 483 55 9 50 284 8 56", "644 6 55 120 2 981 987 88 87", "2 707 535 5 805 5 290 912 1", "889 899 5 59 690 641 540 496 1", "6 692 681 966 51 2 2 3 448", "1 126 779 4 457 32 51 821 3", "694 7 797 46 253 874 55 95 2", "44 837 10 7 212 3 36 33 519", "44 557 635 37 3 54 538 5 52"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {67, 32, 39, 5, -1, 49, 56, -1, 2, 41, -1, 146, 9, 33, 68, 46, 40, 41, 11, 14, 3, -1, 56, 56, 45, -1, 2, 42, -1, 33, 36, 5, 52, -1, 50, 21, 52, 40, 42};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> legs = {"31-7 24-21 2-13 36-38 16-19 39-19 19-15 25-23 33-7", "24-28 22-37 16-35 33-38 16-5 32-39 29-25 37-31", "3-26 29-32 36-22 20-31 21-25 38-0 20-19 16-30", "33-2 21-6 25-12 5-25 14-11 2-9 26-38 11-16 27-31", "18-16 2-21 18-11 13-24 35-12 16-0 34-33 28-2 24-18", "29-10 13-26 25-20 25-36 20-19 39-27 34-33 18-16", "21-39 34-37 6-13 30-39 20-12 34-28 16-23 0-35", "25-12 23-7 39-21 4-23 24-28 22-19 0-30 24-39 33-7", "30-13 36-20 31-19 27-23 17-5 34-11 25-20 7-1 23-37", "14-15 31-30 4-30 30-18 39-25 20-19 35-19 2-22 3-8"};
    vector<string> prices = {"858 7 586 19 381 548 3 616 3 633", "401 243 381 4 589 236 798 4 1 10", "18 99 80 361 648 787 93 40 820 770", "2 633 5 388 10 452 360 616 844 7", "209 10 89 2 873 1 8 984 689 426", "4 382 6 90 984 7 360 36 160 457", "99 512 22 4 32 750 83 823 33 8", "89 760 9 832 73 6 625 757 394 176", "21 850 21 24 868 93 51 7 701 27", "55 96 527 34 90 38 471 587 6 541", "464 20 838 1 40 52 6 157 2 5", "73 1 6 411 273 10 1 954 69 783", "54 24 556 788 6 1 3 1 97 44", "144 84 705 2 86 658 208 507 751 111", "864 77 555 4 60 16 89 5 57 6", "200 605 2 2 8 6 916 7 2 2", "334 47 12 80 10 805 5 53 335 9", "68 746 301 700 5 4 3 2 29 792", "829 693 5 14 60 8 676 799 887 17", "16 34 516 89 10 64 443 2 715 136", "270 666 84 193 2 760 639 700 42 200", "852 8 493 826 674 379 92 485 999 276", "46 59 1 5 588 259 724 663 630 5", "703 677 1 2 3 72 694 33 450 8", "67 12 863 68 9 3 71 968 498 919", "510 7 128 8 369 4 4 503 281 75", "8 49 62 79 32 39 250 458 26 10", "8 7 641 600 162 168 75 23 92 825", "3 163 7 5 764 694 5 2 6 78", "55 1 3 956 558 314 542 64 9 600", "95 831 4 314 873 73 66 185 649 108", "224 252 41 915 10 61 9 149 647 49", "417 869 375 764 78 24 9 801 29 230", "318 6 305 748 102 164 29 339 41 38", "627 10 17 55 7 15 6 441 10 219", "521 422 52 94 93 997 310 896 314 6", "573 852 4 14 4 10 7 12 42 467", "81 301 622 670 756 631 2 7 94 8", "781 563 2 5 8 345 980 2 684 308", "96 74 5 31 553 6 4 31 52 31"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {667, 721, -1, -1, 723, 669, 651, -1, 723, -1, 739, 96, 619, -1, 25, 716, -1, 708, 9, 653, 650, 658, 628, 705, 650, 692, 625, 712, -1, 616, 644, -1, -1, -1, 3, 654, 665, 694, 619};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> legs = {"31-18 36-8 16-28 27-17 17-13 24-10 15-7 21-37", "8-3 37-22 18-31 13-20 27-4 8-25 38-13 32-3 0-29", "6-8 38-29 15-1 8-17 21-36 24-2 24-29 30-34 33-32", "34-5 26-31 31-0 37-31 8-16 18-5 38-28 18-22 37-18", "33-4 12-25 22-16 2-11 14-12 14-17 27-31 13-10 8-0", "26-22 39-30 31-26 1-20 38-11 22-21 21-32 30-20", "32-20 3-10 16-29 11-10 21-9 15-4 18-30 30-8 38-34", "18-37 26-24 34-22 12-6 26-23 18-31 24-22 5-34", "35-37 10-18 32-10 32-8 31-10 37-22 18-16 0-27", "6-27 19-15 18-2 25-30 25-38 16-26 6-11 20-30 15-23"};
    vector<string> prices = {"767 36 392 683 341 360 805 6 4 11", "992 67 8 869 534 758 291 545 678 1", "786 7 6 10 449 79 227 370 401 378", "104 795 10 52 758 521 1 772 750 259", "6 56 7 282 953 1 8 32 44 3", "478 62 391 694 4 60 8 6 555 439", "3 2 7 22 576 577 719 802 68 39", "1 493 31 786 696 3 10 365 840 371", "966 745 10 555 1 369 89 939 55 6", "634 93 8 354 1 77 9 41 390 515", "36 721 331 99 1 22 1 515 853 4", "8 335 1 503 9 85 154 16 36 75", "9 9 10 5 24 5 39 27 1 4", "997 54 648 543 5 8 31 323 340 5", "89 437 391 9 435 56 9 65 394 21", "525 6 87 439 7 56 320 7 10 2", "82 156 852 342 551 967 50 468 1 937", "694 17 73 8 70 333 891 103 1 9", "71 97 100 606 9 9 10 39 570 6", "876 2 827 1 24 136 16 25 8 1", "10 43 69 993 307 74 718 573 232 44", "9 8 9 7 961 44 10 596 10 4", "122 100 451 742 77 990 790 472 97 558", "30 42 191 132 16 251 748 582 399 18", "109 9 2 8 6 765 38 156 763 24", "41 40 873 8 2 93 823 197 19 6", "1 114 72 642 10 674 834 27 63 33", "8 6 358 467 46 350 248 663 15 8", "855 590 8 896 59 950 356 734 1 440", "2 453 186 7 10 3 5 30 239 407", "38 16 4 6 22 794 8 101 88 134", "639 10 425 209 6 192 30 46 60 57", "3 319 586 7 63 372 62 182 44 7", "606 54 202 343 931 7 16 173 2 141", "62 1 86 4 330 263 3 1 44 66", "8 61 90 879 130 3 19 167 81 802", "3 655 154 566 553 61 286 8 487 718", "22 5 489 8 920 871 10 5 74 6", "562 81 3 930 2 628 356 894 198 8", "7 10 44 429 590 2 355 544 500 34"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 64, 82, 10, 76, -1, -1, 76, 85, 65, 70, -1, 105, -1, -1, 73, 12, 58, -1, 77, 78, 69, 83, 83, 82, 73, 4, 94, 36, 68, 50, 122, -1, 72, -1, 87, 64, 88, -1};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> legs = {"10-4 15-19 7-34 7-30 36-8 20-11 2-37 6-36 16-18", "25-16 16-2 16-4 39-37 7-27 27-11 17-31 28-39 4-7", "24-30 3-8 21-33 0-5 25-6 3-37 22-25 34-17 32-20", "35-21 27-33 17-23 30-26 20-16 7-0 33-25 34-28", "38-26 30-13 19-32 4-9 25-7 7-25 6-35 4-5 17-39", "18-1 37-15 39-22 24-33 29-5 35-28 29-26 14-22", "14-8 21-28 21-9 14-2 6-35 36-2 26-23 18-11 11-36", "25-31 21-0 20-30 13-24 36-4 35-17 18-1 15-26 29-36", "14-10 12-24 37-5 27-19 17-20 16-1 9-18 8-39 37-34", "20-15 29-1 0-39 25-16 21-26 10-11 30-23 11-25"};
    vector<string> prices = {"90 3 590 1 75 811 4 64 343 349", "26 20 5 106 60 56 536 531 5 523", "2 464 791 6 48 604 516 761 806 977", "714 6 523 25 787 644 63 622 10 878", "379 4 522 125 404 49 785 917 150 9", "15 367 969 90 8 89 5 448 44 76", "13 66 26 6 408 7 679 5 6 588", "8 912 894 59 5 8 80 5 61 7", "10 5 732 21 719 734 912 520 49 987", "9 2 80 85 10 3 18 10 5 9", "67 113 9 9 664 8 381 47 334 853", "522 134 38 521 132 6 5 6 4 198", "24 89 192 17 750 10 9 29 693 391", "8 607 6 819 13 458 223 567 64 479", "458 6 420 391 974 632 868 340 55 7", "334 8 69 10 2 93 38 834 23 513", "771 673 31 712 4 619 653 928 65 10", "2 82 7 2 9 864 119 8 874 210", "73 1 232 96 62 9 18 24 693 967", "5 1 225 825 23 55 769 10 13 660", "786 733 79 607 665 28 553 723 4 527", "400 503 10 976 986 791 88 36 7 6", "87 3 8 38 4 59 10 945 8 47", "911 1 98 985 1 147 77 10 939 80", "10 8 216 39 9 382 27 95 253 774", "570 5 8 106 84 610 5 331 2 584", "727 3 2 756 9 60 22 901 10 682", "3 778 94 4 916 49 3 870 57 10", "454 32 56 99 3 3 1 100 784 7", "332 8 5 5 98 63 6 6 268 13", "6 9 3 522 230 10 2 9 6 873", "181 392 90 852 977 33 497 3 123 1", "42 525 49 591 80 359 712 965 46 2", "940 40 7 9 871 677 10 781 6 1", "55 1 504 437 10 795 11 927 639 72", "8 602 85 535 730 17 99 53 4 55", "5 293 18 578 446 603 311 95 1 55", "26 21 2 92 829 238 495 585 124 728", "563 13 70 7 719 87 28 620 430 35", "4 63 172 471 504 437 706 51 21 5"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {385, 388, -1, 388, 373, 388, 384, 397, 392, -1, 392, -1, 393, -1, 406, 383, 375, 387, 389, 399, 398, 378, 376, 398, 380, 403, 387, 374, -1, 388, 376, 394, 391, 373, 392, 392, 352, -1, 349};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> legs = {"0-1 1-0 2-0 3-0 4-0 5-0 6-0 7-0", "0-2", "0-3", "0-4", "0-5", "0-6", "0-7", "6-8"};
    vector<string> prices = {"1 1000 1000 1000 1000 1000 1000 1000", "1 1 1000 1000 1000 1000 1000 1000", "1 1000 1 1000 1000 1000 1000 1000", "1 1000 1000 1 1000 1000 1000 1000", "1 1000 1000 1000 1 1000 1000 1000", "1 1000 1000 1000 1000 1 1000 1000", "1 1000 1000 1000 1000 1000 1 1000", "1 1000 1000 1000 1000 1000 1000 1", "1000 1000 1000 1000 1000 1000 1000 1000"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 5, 7, 9, 11, 13, 26};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> legs = {"0-1 1-2 2-3 3-4 4-5 5-6 6-7 7-8 8-9 9-10 10-11", "0-1 1-2 2-3 3-4 4-5 5-6 6-7 7-8 8-9 9-10 10-11", "0-1 1-2 2-3 3-4 4-5 5-6 6-7 7-8 8-9 9-10 10-11", "0-1 1-2 2-3 3-4 4-5 5-6 6-7 7-8 8-9 9-10 10-11", "0-1 1-2 2-3 3-4 4-5 5-6 6-7 7-8 8-9 9-10 10-11", "0-1 1-2 2-3 3-4 4-5 5-6 6-7 7-8 8-9 9-10 10-11", "0-1 1-2 2-3 3-4 4-5 5-6 6-7 7-8 8-9 9-10 10-11", "0-1 1-2 2-3 3-4 4-5 5-6 6-7 7-8 8-9 9-10 10-11", "0-1 1-2 2-3 3-4 4-5 5-6 6-7 7-8 8-9 9-10 10-11", "0-1 1-2 2-3 3-4 4-5 5-6 6-7 7-8 8-9 9-10 10-11"};
    vector<string> prices = {"1 1 1 1 1 1 1 1 1 1", "1000 1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000 1000", "1 1 1 1 1 1 1 1 1 1", "1000 1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000 1000", "1000 1000 1000 1000 1000 1000 1000 1000 1000 1000"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 1003, 2003, 2004, 2005, 2006, 3006, 4006, 5006};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> legs = {"8-18 4-11 15-5 7-12 11-8 0-15 15-2 3-11 4-18 2-3", "16-2 18-3 15-18 11-19 18-2 18-7 19-17 3-15 12-19", "2-17 0-12 1-2 14-12 6-2 4-2 11-5 4-11 11-6 17-16", "0-18 13-18 16-0 3-7 14-12 3-1 19-18 3-19 10-3 8-15", "18-19 3-16 13-6 0-19 12-14 5-17 1-12 7-13 9-14 1-2", "14-5 17-9 2-10 16-13 11-15 10-17 14-10 0-14 2-13", "4-5 0-17 6-9 17-7 12-6 5-6 6-18 10-18 0-2 13-0 8-4", "3-12 4-11 10-17 13-12 3-0 3-7 13-0 9-15 10-9 0-10"};
    vector<string> prices = {"592 219 88 529 324 86 503 610", "2 94 8 600 34 95 6 494", "638 301 10 246 290 97 85 74", "118 8 939 393 450 79 317 99", "99 806 698 740 2 26 525 818", "95 9 615 972 23 23 5 666", "6 448 440 710 83 4 419 496", "4 47 182 4 185 70 718 770", "3 321 6 855 968 65 10 6", "173 224 300 3 79 2 707 49", "21 10 7 10 4 9 5 8", "6 600 4 724 7 1 960 247", "83 16 901 50 437 780 658 2", "763 923 125 576 45 423 3 1", "7 324 391 898 8 59 281 973", "9 44 49 364 78 744 43 5", "10 62 75 418 216 90 32 919", "764 534 778 605 80 647 821 74", "65 449 102 867 421 94 6 7", "67 155 362 789 189 316 107 595"};
    IslandFerries* pObj = new IslandFerries();
    clock_t start = clock();
    vector<int> result = pObj->costs(legs, prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {170, 160, 155, 173, 145, 150, 158, 168, 153, 145, 162, 88, 162, 86, 163, 159, 153, 150, 104};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=152340&rd=5069&pm=2437
********************************************************************************
using namespace std;
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stack>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
typedef long long I64;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<I64> VI64;
typedef unsigned uint;
typedef const char cchar;
typedef pair<int,int> PII;
typedef vector<double> VD;
typedef vector<PII> VPII;
#define FOR(i,n) for(int i=0;i<(n);i++)
#define FORR(i,a,b) for(int i=(a);i<=(b);i++)
#define VAR(a,b) __typeof(b) a=b
#define FORIT(it,c) for(VAR(it,(c).begin());it!=(c).end();it++)
#define ALL(x) (x).begin(),(x).end()
#define UNIQ(x) (x).erase(unique(ALL(x)),(x).end())
 
 
static vector<string> tokenize(string s, string ch) {
   vector<string> ret;
   int p2;
   for( unsigned p = 0; p < s.size(); p = p2+1 ) {
      p2 = s.find_first_of(ch, p);
      if( p2 == -1 ) p2 = s.size();
      if( p2-p > 0 ) ret.push_back( s.substr(p, p2-p) );
   }
   return ret;
} 
template <class T>
static string toString(T val) {
    ostringstream os;
    os << val;
    return os.str();
}
 
template <class T>
static void parse(const string&s, T &val) {
    istringstream iss(s);
    iss >> val;
}
struct IslandFerriesImpl {
    vector <string> legs;
    vector <string> vprices;
    IslandFerriesImpl(vector <string> _legs,vector <string> _prices) {
        legs = _legs;
        vprices = _prices;
    }
 
    vector<vector<PII> > ferryLegs;
    vector<VI> prices;
 
    vector <int> costs() {
        int nisland = vprices.size();
        int nferry = legs.size();
 
        FOR(i,nferry) {
            ferryLegs.push_back(vector<PII>());
            VS toks = tokenize(legs[i]," -");
            FOR(j,toks.size()/2) {
                int from,to;
                parse(toks[j*2],from);
                parse(toks[j*2+1],to);
                ferryLegs[i].push_back(PII(from,to));
            }
        }
 
        FOR(i,nisland) {
            prices.push_back(VI());
            VS toks = tokenize(vprices[i]," ");
            FOR(j,toks.size()) {
                int pr;
                parse(toks[j],pr);
                prices[i].push_back(pr);
            }
        }
 
        int dist[50][1<<11];
        memset(dist,-1,sizeof(dist));
 
        queue<PII> q;
        q.push(PII(0,0));
        dist[0][0] = 0;
 
        while(!q.empty()) {
            PII fr = q.front(); q.pop();
            int at = fr.first;
            int have = fr.second;
 
            int nhave = 0;
            FOR(j,nferry)
                if(have & (1<<j)) {
                    nhave++;
 
                    for(int leg=0;leg<ferryLegs[j].size();leg++) {
                        if(ferryLegs[j][leg].first == at) {
                            int toat = ferryLegs[j][leg].second;
                            int tohave = have & ~(1<<j);
                            int todist = dist[at][have];
                            if(dist[toat][tohave] == -1 ||
                                    dist[toat][tohave] > todist) {
                                dist[toat][tohave] = todist;
                                q.push(PII(toat,tohave));
                            }
                        }
                    }
                }
 
            if(nhave < 3) {
                FOR(j,nferry)
                    if(!(have & (1<<j))) {
                        int toat = at;
                        int tohave = have | (1<<j);
                        int todist = dist[at][have] + prices[at][j];
                        if(dist[toat][tohave] == -1 ||
                                dist[toat][tohave] > todist) {
                            dist[toat][tohave] = todist;
                            q.push(PII(toat,tohave));
                        }
                    }
            }
        }
 
        VI ret;
        for(int i=1;i<nisland;i++) {
            ret.push_back(dist[i][0]);
        }
        return ret;
    };
};
 
 
struct IslandFerries {
    vector <int> costs(vector <string> legs,vector <string> prices) {
        IslandFerriesImpl impl(legs,prices);
        return impl.costs();
    }
 
};
 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/