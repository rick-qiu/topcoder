/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10178
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

class BuildersCountry {
public:
    long minCost(vector<int> before, vector<int> after, vector<int> houseCost, vector<string> g, int roadCost);
};

long BuildersCountry::minCost(vector<int> before, vector<int> after, vector<int> houseCost, vector<string> g, int roadCost) {
    long ret;
    return ret;
}


int test0() {
    vector<int> before = {2, 1, 3, 5};
    vector<int> after = {2, 1, 3, 5};
    vector<int> houseCost = {4, 5, 3, 2};
    vector<string> g = {"NNNN", "NNNN", "NNNN", "NNNN"};
    int roadCost = 1000;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 13000;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> before = {1, 1, 1, 1};
    vector<int> after = {1, 3, 1, 2};
    vector<int> houseCost = {8, 5, 3, 2};
    vector<string> g = {"NYNN", "YNYN", "NYNY", "NNYN"};
    int roadCost = 100000;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 39;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> before = {9, 11};
    vector<int> after = {10, 11};
    vector<int> houseCost = {5, 1};
    vector<string> g = {"NN", "NN"};
    int roadCost = 15;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 400;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> before = {1};
    vector<int> after = {1000};
    vector<int> houseCost = {2};
    vector<string> g = {"N"};
    int roadCost = 888;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 999000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> before = {99, 23, 44, 55, 32};
    vector<int> after = {99, 23, 44, 55, 32};
    vector<int> houseCost = {39, 32, 11, 23, 89};
    vector<string> g = {"NYNNN", "YNNNY", "NNNYY", "NNYNY", "NYYYN"};
    int roadCost = 54;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> before = {485, 324, 33, 89, 206, 336, 310, 286};
    vector<int> after = {598, 522, 312, 228, 447, 557, 503, 451};
    vector<int> houseCost = {576, 5, 352, 375, 458, 521, 131, 438};
    vector<string> g = {"NNNNNNYN", "NNNYNNNN", "NNNNNNNY", "NYNNNNNN", "NNNNNNNN", "NNNNNNYN", "YNNNNYNN", "NNYNNNNN"};
    int roadCost = 633;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 400408585;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> before = {792, 2234, 2245, 3603, 1611, 2140, 289, 1524, 259};
    vector<int> after = {4608, 2272, 3524, 3632, 5117, 2989, 3405, 4214, 347};
    vector<int> houseCost = {1001, 3424, 5272, 1126, 4521, 3588, 4739, 4457, 1703};
    vector<string> g = {"NNNNNYNNN", "NNNNNNNYN", "NNNNNYNNN", "NNNNNNNNN", "NNNNNNNNN", "YNYNNNYNN", "NNNNNYNNN", "NYNNNNNNN", "NNNNNNNNN"};
    int roadCost = 5873;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 268394032100;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> before = {17854, 54486, 43446, 29294, 42532};
    vector<int> after = {66319, 79812, 50962, 57481, 63884};
    vector<int> houseCost = {31261, 34195, 64017, 15691, 13986};
    vector<string> g = {"NNYNN", "NNNNN", "YNNNN", "NNNNN", "NNNNN"};
    int roadCost = 81167;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 397854990872830;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> before = {18171};
    vector<int> after = {23150};
    vector<int> houseCost = {4011};
    vector<string> g = {"N"};
    int roadCost = 22825;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 412596087540;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> before = {9122, 5738, 26190, 3316};
    vector<int> after = {14100, 6572, 27559, 5345};
    vector<int> houseCost = {35837, 9110, 14530, 51671};
    vector<string> g = {"NNNN", "NNNN", "NNNN", "NNNN"};
    int roadCost = 27395;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 5204565047653;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> before = {8258, 2113, 3605, 2186, 2696, 4247};
    vector<int> after = {8987, 2941, 6966, 5642, 6186, 6337};
    vector<int> houseCost = {11472, 3691, 543, 7630, 6239, 12948};
    vector<string> g = {"NNNNNN", "NNNNNN", "NNNNNN", "NNNNNN", "NNNNNN", "NNNNNN"};
    int roadCost = 12919;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 708904015464;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> before = {3374, 1171, 2372, 1965};
    vector<int> after = {6395, 3778, 6191, 5053};
    vector<int> houseCost = {4219, 4660, 5604, 1526};
    vector<string> g = {"NNNN", "NNNN", "NNNN", "NNNN"};
    int roadCost = 29;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 368542514855;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> before = {13603, 15919};
    vector<int> after = {18547, 20241};
    vector<int> houseCost = {94, 6144};
    vector<string> g = {"NN", "NN"};
    int roadCost = 24474;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 858908405796;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> before = {13035, 25860, 11941, 18760, 812, 9019};
    vector<int> after = {17343, 29780, 18064, 25237, 4232, 13707};
    vector<int> houseCost = {23916, 25586, 44657, 2490, 38285, 1763};
    vector<string> g = {"NNNNNN", "NNNYNN", "NNNNNN", "NYNNYN", "NNNYNN", "NNNNNN"};
    int roadCost = 54996;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 18139724740150;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> before = {42683};
    vector<int> after = {44301};
    vector<int> houseCost = {52593};
    vector<string> g = {"N"};
    int roadCost = 52701;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 3700929807471;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> before = {2848};
    vector<int> after = {4218};
    vector<int> houseCost = {35753};
    vector<string> g = {"N"};
    int roadCost = 22052;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 173027537325;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> before = {30302, 55092, 13818, 26771, 14939};
    vector<int> after = {30715, 55806, 15669, 26937, 17158};
    vector<int> houseCost = {54077, 47262, 40495, 3995, 26447};
    vector<string> g = {"NYNNN", "YNNNN", "NNNNY", "NNNNN", "NNYNN"};
    int roadCost = 11836;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 11125262061256;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> before = {32529};
    vector<int> after = {34468};
    vector<int> houseCost = {17707};
    vector<string> g = {"N"};
    int roadCost = 2300;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 1150116077754;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> before = {4200, 510, 879, 4631, 1039, 415, 369, 1946, 108, 1557, 3020, 1193, 4000, 3324, 1137, 913, 1238, 2883, 1804, 344, 5376, 1607, 3602, 3833, 963, 3530, 2419, 1384, 1549, 1381, 79, 3463, 2802, 830, 1115, 2585, 932};
    vector<int> after = {4813, 1039, 1314, 5461, 2173, 816, 382, 2712, 131, 2092, 3355, 2138, 4348, 4518, 1915, 1547, 1296, 3769, 2108, 1498, 6236, 2125, 3973, 5051, 1219, 4563, 2877, 1990, 1579, 1649, 147, 3781, 2980, 1174, 1485, 3168, 2073};
    vector<int> houseCost = {2467, 883, 5925, 284, 3778, 2628, 148, 1329, 6266, 334, 139, 324, 2180, 783, 1386, 1944, 3209, 5918, 2279, 4174, 4257, 6517, 4810, 3353, 2290, 4107, 1421, 5095, 1450, 4604, 3236, 617, 2960, 3926, 5386, 1406, 1090};
    vector<string> g = {"NNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNN", "YNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNYNNNNNNYYNNNNNNYNNNNYNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNYNYNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNYN", "NNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNYNNNNNYNNNYNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNYYNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNN", "NYNNYNNNNNNYNNNNNNNNNNNYNNNNYNNNNNNNN", "NNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNYN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNYNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNYYNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNN", "NNNNYNYNNNNNNNNNNNNNNNNNNNNNYNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NYNNNNNNNNNNNNNYNNYNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNYNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNYYNNNNNNNNNNNNYNNNYNNNNNNNYNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNYNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYYNNNNYNNNNNNNNNNYNNNNN"};
    int roadCost = 6052;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 484673970638;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> before = {35936, 10570, 51901, 27924, 31160, 12100, 23756, 20558, 6890, 8947, 27308, 13913, 39973, 3204, 12693, 29767, 40391, 9433, 60286, 18644, 20272, 31489, 37132, 4483, 7660, 16724, 8296, 39496, 26140, 24662, 1303, 37901, 3782, 4772, 25016, 51478, 28013, 6723, 60700, 45214, 26292};
    vector<int> after = {41204, 10737, 58764, 29083, 38221, 12545, 27513, 21499, 13577, 13409, 27647, 21232, 45698, 5811, 14996, 33128, 43451, 11206, 65259, 23087, 26729, 37183, 37149, 6480, 13317, 22250, 11037, 43160, 33482, 25091, 5173, 42187, 6360, 9000, 26785, 58793, 32996, 13796, 66647, 45802, 28524};
    vector<int> houseCost = {51537, 2984, 35674, 1928, 126, 31990, 2310, 17366, 47317, 32487, 25254, 37617, 21670, 48753, 8202, 48141, 17984, 32928, 56668, 12150, 6907, 9250, 20298, 61262, 43927, 45264, 28302, 60257, 3509, 50956, 7566, 10244, 53134, 33837, 48814, 35035, 34419, 19256, 22179, 64977, 22915};
    vector<string> g = {"NYYYNNNYYYNYYNNYNYYYYYYYYNNYYYYYYYYYYYNYN", "YNYYYYYNYYYYNYYYYYYYYYYYYYYYYYYNNYNYYYYYN", "YYNNYYYNYYYYNYYYYYNNYYYYYYNYYYYYYNYYYYYYY", "YYNNYYNYYYNYNYYYYYYYNNYYYYYNYYYYYNYNYYYYY", "NYYYNNYYNYNYYYYYNYYYYYNNNYYNYYYNYNNYYYNNY", "NYYYNNYYYYYYNYYYYYYYYNYYYNYYYYYYYYYYNYNNN", "NYYNYYNYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YNNYYYYNNYYNYNYYYYYYYYYNYNYYYYYYYNYNYYYYY", "YYYYNYYNNYYYYYNYYYYNYYNYYNYYYYYYYYYYYYYYY", "YYYYYYYYYNNYNYYNYYNNYYYNYYNNYYYYYYYYYYYYN", "NYYNNYYYYNNYYYNYYNYYYYYYNNYYYYNNYYYYYYYYN", "YYYYYYYNYYYNYYNYYYYNYYNYYYYYNNYYYYYYNYYYY", "YNNNYNNYYNYYNNYYYYNYYYYNYYYNYNNYNNYYYNYYY", "NYYYYYYNYYYYNNNNYYYYYYYNYYYYYYYNYYNYYNYYY", "NYYYYYYYNYNNYNNYYYYYYNYYNNYYYYYYYYYYYYYNY", "YYYYYYYYYNYYYNYNYYYYYNYYYYYNNYYNYYNYYNYNY", "NYYYNYYYYYYYYYYYNYYYNNNNYYYYNYYNYYYYYYYYY", "YYYYYYYYYYNYYYYYYNNYYYYYYYYYNYYYYNNNYYYYY", "YYNYYYYYYNYYNYYYYNNYYYYYYYYNYYYYYYYYYYYNY", "YYNYYYYYNNYNYYYYYYYNYYYYNYYYYYYNYYNYYNYYY", "YYYNYYYYYYYYYYYYNYYYNYYYYYYYYNYYYYNYYYYYY", "YYYNYNYYYYYYYYNNNYYYYNNYNYYYYYYNYYYNNYNYN", "YYYYNYYYNYYNYYYYNYYYYNNNYYNYNYYNYYYYYYYYY", "YYYYNYYNYNYYNNYYNYYYYYNNYYYNYYYYYYYYYYNYY", "YYYYNYYYYYNYYYNYYYYNYNYYNNYYNYYYYYYNYYNYN", "NYYYYNYNNYNYYYNYYYYYYYYYNNYYYYYNYYYYYNYNY", "NYNYYYYYYNYYYYYYYYYYYYNYYYNNYNYNYYYYYYYYY", "YYYNNYYYYNYYNYYNYYNYYYYNYYNNNNNYYYYYNNYNY", "YYYYYYYYYYYNYYYNNNYYYYNYNYYNNNYYYYYNYYYNY", "YYYYYYYYYYYNNYYYYYYYNYYYYYNNNNYYYYNNYYYYY", "YYYYYYYYYYNYNYYYYYYYYYYYYYYNYYNYYYYYYYYYY", "YNYYNYYYYYNYYNYNNYYNYNNYYNNYYYYNYYYYYNYYY", "YNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNYNYYYYYY", "YYNNNYNNYYYYNYYYYNYYYYYYYYYYYYYYYNYYYYYNY", "YNYYNYYYYYYYYNYNYNYNNYYYYYYYYNYYNYNNYYNYY", "YYYNYYYNYYYYYYYYYNYYYNYYNYYYNNYYYYNNYYYYY", "YYYYYNYYYYYNYYYYYYYYYNYYYYYNYYYYYYYYNYNYN", "YYYYYYYYYYYYNNYNYYYNYYYYYNYNYYYNYYYYYNYYY", "NYYYNNYYYYYYYYYYYYYYYNYNNYYYYYYYYYNYNYNNY", "YYYYNNYYYYYYYYNNYYNYYYYYYNYNNYYYYNYYYYNNY", "NNYYYNYYYNNYYYYYYYYYYNYYNYYYYYYYYYYYNYYYN"};
    int roadCost = 51670;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 3656799304511361;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> before = {38252, 20166, 33415, 8550, 43757, 4873, 21867, 12526, 28079, 5993, 13987, 22666, 7012, 7734, 730, 2411, 6850, 30803, 14567, 30660, 16109, 21708, 19293, 216, 14915};
    vector<int> after = {42038, 21424, 34564, 13160, 48309, 7340, 23072, 17643, 32376, 10540, 15397, 27296, 11008, 9728, 2317, 6943, 8095, 34489, 18216, 32784, 17874, 24024, 23812, 1225, 16070};
    vector<int> houseCost = {30555, 21706, 27087, 19326, 39608, 47385, 5462, 14265, 14535, 4377, 5452, 39579, 27620, 48446, 24811, 27915, 22905, 35144, 22051, 23930, 7212, 7166, 17006, 47660, 43311};
    vector<string> g = {"NYNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYYNNNNNNNNNNNNNYNNNNN", "NNNNNNNYNNNNYNYYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNYNYNYNNNNNNNNNYNYNN", "NYNNNNYNNNNNNNNNNNNNNNNNN", "NNNNYYNNYNNYYNNNYYNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNYNNNNNNNNYNNNNYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNYYNNNNNN", "NNNNNNYNNNNNNYYNNNNNNNNNN", "NNYNNNYNNNNNNNNYYNNNNNNNN", "NNNNNNNNNNNYNNNNNNNYNNNNN", "NNYNNNNNNNNYNNNNNNNYNNNNY", "NNYNNNNNYNNNYNNNNNNNNYNNN", "NNNNNNYNNNNNYNNNNNNNNNNNN", "NNNNNNYNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNN", "NYNNNNNNNNNNNYYNNNNNNNNNN", "NNNNYNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNYNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNYNNNNNNNYNN"};
    int roadCost = 29310;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 134267435027849;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> before = {51486, 51525, 12677, 22779, 27912, 4264, 58889, 21126, 19677, 11523, 17203, 36788, 22316, 19329, 46692, 23993, 8686, 34865, 41442, 22259, 51840, 36215, 17598, 28631, 15118, 9294, 22718, 5174, 7308, 2176, 10092, 35215, 24907, 14977, 2775};
    vector<int> after = {51911, 51691, 12783, 23312, 28132, 4379, 59129, 21163, 20258, 12189, 17310, 36946, 22527, 19711, 46757, 24021, 8778, 34998, 41823, 22279, 51935, 36391, 17617, 28884, 15796, 9584, 23110, 5388, 7622, 2712, 10190, 35555, 25419, 15628, 3317};
    vector<int> houseCost = {68207, 45152, 26227, 71093, 31156, 2593, 67086, 60397, 16213, 46787, 24062, 46146, 3718, 50708, 53887, 36808, 36531, 7964, 35795, 53214, 11441, 71608, 6526, 16854, 69915, 42460, 49326, 8667, 63169, 32513, 55278, 50125, 47969, 24753, 7926};
    vector<string> g = {"NYNYNYNYNYYNYYNNNYYYYNYYYNYNYNYYNNY", "YNNYYYNYNYNYNNYYYNYNNNNNYNYYNNNYYYN", "NNNYYNYYYYYYNYNYNNYYYNNNNNNYYNNNNNY", "YYYNNYNYYYYYYNYNYNNYYYNYNNYYYNYNYNY", "NYYNNYNYNYYYNYYYYNYYNNYNNYNYYYYNNYY", "YYNYYNNNNNYYYYNYNYYNNYYYYYNNYYYYYYY", "NNYNNNNNNYYNNNYNNNYYYNNNYNYNYNYNYYY", "YYYYYNNNYYYYNYNNNYYNYNYNYNYNYNYNNNN", "NNYYNNNYNYNNYYYNNNYNNYYYYYYYYYYYYYN", "YYYYYNYYYNNYYYYNNNYYYYYYNNNYNNNYYNY", "YNYYYYYYNNNYNYYNYYNYNYNNYNNNNYYYYYY", "NYYYYYNYNYYNYNNYYYNNYYYNYYYYYYYYNYN", "YNNYNYNNYYNYNNYNYYNNYYYYYYNYNNNYNNY", "YNYNYYNYYYYNNNYNNYYNNYYNYNYYNNYNYYN", "NYNYYNYNYYYNYYNNYNNYNYNNYYNNNNYYYYY", "NYYNYYNNNNNYNNNNYNYYYYYYYYYNYNYYYYN", "NYNYYNNNNNYYYNYYNYNNYYYNNYYYYNNYNYY", "YNNNNYNYNNYYYYNNYNYNYYYYNYNNNNNYYYN", "YYYNYYYYYYNNNYNYNYNNNNNNYYNYNNYNYNN", "YNYYYNYNNYYNNNYYNNNNYYYYNYNYNNNYNNN", "YNYYNNYYNYNYYNNYYYNYNYYYYYYYNYYYYNN", "NNNYNYNNYYYYYYYYYYNYYNNYNNNNNNYYYNN", "YNNNYYNYYYNYYYNYYYNYYNNNYYYNNYNNYNY", "YNNYNYNNYYNNYNNYNYNYYYNNYYYYNNYNNNN", "YYNNNYYYYNYYYYYYNNYNYNYYNNNYNYYNYNN", "NNNNYYNNYNNYYNYYYYYYYNYYNNYYNNYNNYN", "YYNYNNYYYNNYNYNYYNNNYNYYNYNYNYYYNNN", "NYYYYNNNYYNYYYNNYNYYYNNYYYYNNYYYNYY", "YNYYYYYYYNNYNNNYYNNNNNNNNNNNNNYNYNY", "NNNNYYNNYNYYNNNNNNNNYNYNYNYYNNYYYNY", "YNNYYYYYYNYYNYYYNNYNYYNYYYYYYYNYNYN", "YYNNNYNNYYYYYNYYYYNYYYNNNNYYNYYNNYY", "NYNYNYYNYYYNNYYYNYYNYYYNYNNNYYNNNYN", "NYNNYYYNYNYYNYYYYYNNNNNNNYNYNNYYYNN", "YNYYYYYNNYYNYNYNYNNNNNYNNNNYYYNYNNN"};
    int roadCost = 26134;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 198140729664058;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> before = {36894, 6497, 50915, 53154, 15978, 23783, 6488, 31209, 15924, 11655, 24726, 2419, 67946, 641, 67520};
    vector<int> after = {42842, 13891, 53383, 55184, 18252, 29833, 14214, 34011, 16930, 15634, 32408, 5121, 73953, 2703, 71984};
    vector<int> houseCost = {55934, 51239, 73411, 42608, 19436, 558, 55791, 68022, 19606, 6862, 72363, 2911, 11401, 79428, 80960};
    vector<string> g = {"NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN"};
    int roadCost = 77686;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 142651556766054;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> before = {12266, 1619, 15321, 8, 17999, 25910, 33009, 8567, 777, 7337, 19341, 20430, 16800, 19614, 6822, 6118, 9728, 29767, 13013, 20884, 10725, 10852, 39268, 33459, 1124, 13930, 6664, 20873, 4413, 5270, 14227};
    vector<int> after = {19283, 8549, 21529, 7593, 21530, 26087, 40281, 8634, 5272, 14774, 23555, 22115, 21675, 20217, 7843, 13823, 17180, 31580, 16693, 26224, 18618, 13324, 41718, 34753, 6328, 16330, 11966, 24133, 8321, 12960, 16893};
    vector<int> houseCost = {20479, 46056, 17653, 41819, 44039, 35343, 21587, 15037, 15710, 3975, 7458, 31854, 43198, 13082, 8482, 4202, 10811, 25806, 1947, 45902, 25480, 48018, 47572, 8964, 16379, 46993, 16782, 52631, 48401, 27711, 14304};
    vector<string> g = {"NYYYYYYYNYYYNNYYYNYYYYYNYNNYYNY", "YNNYNYYYYYYYYYNYYYNYYYNYNNYNYYY", "YNNNYNNYYYYYYYNNNNYYYYYYYYYYYYN", "YYNNYNYYYNYYNNYYYYYYYYNNYNYNYYY", "YNYYNNYNYYYYNNYYYYYYYNNYNYYYNYY", "YYNNNNYYNYYYYNYNYYNYYYYNYYNNYYY", "YYNYYYNYNNYYYYNNYYYYYYNNNNYYNYN", "YYYYNYYNYNYYNNYYYYYNNYYNNNNYYYY", "NYYYYNNYNYYYNYNNNYNYYNYYYNYNYNY", "YYYNYYNNYNNNYYYYYNNNYYNYNYYNYYY", "YYYYYYYYYNNYYNYNYYNYYNNYYNNYYYY", "YYYYYYYYYNYNYYYYYYNNYNYYYYYYYYY", "NYYNNYYNNYYYNNNYNNYYYYYNNYYYYNY", "NYYNNNYNYYNYNNYNYYNNNYNYYNYNYYN", "YNNYYYNYNYYYNYNYYNYYYYYYNYYNNYY", "YYNYYNNYNYNYYNYNYYYNYYYNYYYNYNY", "YYNYYYYYNYYYNYYYNYYYYYNYNYYNNYN", "NYNYYYYYYNYYNYNYYNYYYYNYYNYNYNY", "YNYYYNYYNNNNYNYYYYNNYYYYYNYYYYY", "YYYYYYYNYNYNYNYNYYNNYYYYYNNNYYY", "YYYYYYYNYYYYYNYYYYYYNYNYYYYYYYN", "YYYYNYYYNYNNYYYYYYYYYNYYNNYNYNY", "YNYNNYNYYNNYYNYYNNYYNYNNYYYYNYN", "NYYNYNNNYYYYNYYNYYYYYYNNYYNNYNY", "YNYYNYNNYNYYNYNYNYYYYNYYNYNYNNY", "NNYNYYNNNYNYYNYYYNNNYNYYYNNYYNN", "NYYYYNYNYYNYYYYYYYYNYYYNNNNYNYN", "YNYNYNYYNNYYYNNNNNYNYNYNYYYNNNY", "YYYYNYNYYYYYYYNYNYYYYYNYNYNNNYY", "NYYYYYYYNYYYNYYNYNYYYNYNNNYNYNN", "YYNYYYNYYYYYYNYYNYYYNYNYYNNYYNN"};
    int roadCost = 14942;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 1129319834153649;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> before = {3056, 2474, 13504, 5113, 21963, 18964, 8183, 11446, 22919, 7189};
    vector<int> after = {3248, 2491, 13619, 5538, 22440, 19262, 8635, 11582, 23337, 7310};
    vector<int> houseCost = {389, 5091, 28053, 28866, 19494, 22469, 29694, 23884, 9611, 2844};
    vector<string> g = {"NNYYNNYYNY", "NNNYNNYYNN", "YNNYYNNNYN", "YYYNNYNYYN", "NNYNNNNNNN", "NNNYNNNNNN", "YYNNNNNNNN", "YYNYNNNNYY", "NNYYNNNYNY", "YNNNNNNYYN"};
    int roadCost = 27167;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 2292717438720;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> before = {52184};
    vector<int> after = {54896};
    vector<int> houseCost = {55607};
    vector<string> g = {"N"};
    int roadCost = 19989;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 8074087688268;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> before = {20524, 3632, 29582, 23452};
    vector<int> after = {20886, 4255, 30333, 24971};
    vector<int> houseCost = {43943, 47238, 47220, 34889};
    vector<string> g = {"NYNN", "YNNY", "NNNY", "NYYN"};
    int roadCost = 22408;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 6817397784872;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> before = {1017, 7794, 8810, 1142, 1600, 796, 11730, 29136, 17608, 13031, 17717, 6817, 4599, 11466, 1268, 14046, 6797, 29811, 28952, 17776, 18262, 26509, 2150, 10100, 8234, 1650, 13446, 3764, 19953, 5156, 19885, 13807, 16115, 9640, 5434, 13397, 27241, 3795, 10491, 7394, 33076, 5887, 1604, 3147, 8105, 8557, 25081, 1821};
    vector<int> after = {3716, 11108, 10232, 3634, 4273, 4709, 15486, 29922, 18949, 13792, 21842, 9066, 7577, 12755, 3204, 15660, 10146, 30751, 31015, 21631, 18847, 28789, 5979, 13472, 11655, 2564, 17111, 6036, 23352, 5404, 23749, 17579, 20420, 12044, 7524, 16106, 30704, 7057, 14223, 7789, 33634, 9511, 4276, 6300, 10913, 9234, 26176, 4115};
    vector<int> houseCost = {1079, 14692, 18341, 6239, 24520, 17502, 6233, 26893, 26420, 17755, 17589, 17774, 3943, 4731, 17977, 16753, 30970, 863, 3718, 31505, 34089, 30358, 10486, 23958, 20989, 12742, 3713, 15889, 621, 23344, 20313, 22073, 23106, 25852, 21305, 7869, 9487, 27156, 3749, 1499, 26956, 2326, 4648, 6375, 22237, 21887, 8791, 34591};
    vector<string> g = {"NYYYYYYNYYNNNYNYYYYNYNYNYNYYYYYNYNNYYYYNYYYNNYYY", "YNYYNNYYYNYNYNYYYYNYYYNYYNNYNYNYYYNYYNYYYNYNYYYY", "YYNYYYYYYNYYYYYNYYYYNYYYNNNYNNYYYYYNYYYYYYYYNYYY", "YYYNYNYNYNNYYYYYYYYYNYYYNYNNYYYYYYNNYNYYYNYYYYNN", "YNYYNYYYNYYYYYNYYYYNYYYNNYYYYNNNNYYYYNYNNYYYYNYN", "YNYNYNYYYNYNYNNYYYYYYNNNNYYNYYYNYNNYYYYNNYYYYYYN", "YYYYYYNNYYYNYYNNNYYYYYYNYNNNYYYYYYYNNNNYNYYYYNYN", "NYYNYYNNYNYNYNYYYYYYYYNYNNYYNYNYYYYYYYYYYYYYYNYN", "YYYYNYYYNNNNYYYNYNYYNYNNNNNNYYNYNNYYNYYNYYYYNNNY", "YNNNYNYNNNNYNYYNNYYYNNNYNYNNNNYNYNNYYYNNYYYYYNNY", "NYYNYYYYNNNYYYYYNYNNNNNYYYNYNNYNNNYYYYYNYYYNNYNN", "NNYYYNNNNYYNYNNYNYNYNNYNNYYYNYYNYYNYNYNYYNNYNNYY", "NYYYYYYYYNYYNNYYYYYYNNYNYYYNNNYYYNYYNYYYNNNYYYNY", "YNYYYNYNYYYNNNNNNYYYNYYYYYNYNNNNYYYNNYYNYNNNNYYY", "NYYYNNNYYYYNYNNYNYNYNNYYYNYNNNNNNYNYNNYYNYYNNYYN", "YYNYYYNYNNYYYNYNNNNYNNNYNNYYNNYYNYYNYYNYYNNNYYYY", "YYYYYYNYYNNNYNNNNNYYNNYYYYYYYYNYYYYNYNNNNNNYNYNY", "YYYYYYYYNYYYYYYNNNYYYNYYYNNNYYYYNYYYYNYNNYYYYNYY", "YNYYYYYYYYNNYYNNYYNNYNNNYYYNNYNNYYYYNYYYYYYNNYYY", "NYYYNYYYYYNYYYYYYYNNYYYNNNNYYYNYYYYYYYYYNYYYNNNY", "YYNNYYYYNNNNNNNNNYYYNNYYYYYYYYYYYNYNYNNNNYNNNNYN", "NYYYYNYYYNNNNYNNNNNYNNYNYYNNYNYYNNYNNNYYNNNNYYYY", "YNYYYNYNNNNYYYYNYYNYYYNYYYYNNYNNYNYYYYNYNNYYNYYY", "NYYYNNNYNYYNNYYYYYNNYNYNNNYYYNYNYNYNYYYYYYNYYYNY", "YYNNNNYNNNYNYYYNYYYNYYYNNYYYNYYYYYYNYNNYYYNYYYYY", "NNNYYYNNNYYYYYNNYNYNYYYNYNYNYYYNNNNNYYYYYYYNYNNY", "YNNNYYNYNNNYYNYYYNYNYNYYYYNYNNYYYYYYYYYNNYNNNYNN", "YYYNYNNYNNYYNYNYYNNYYNNYYNYNNNYYNYYNNYYYYYNYYYNY", "YNNYYYYNYNNNNNNNYYNYYYNYNYNNNYYNYYYYYYNNYYNYNNYY", "YYNYNYYYYNNYNNNNYYYYYNYNYYNNYNYNNYYYYNYYYYYYYNNN", "YNYYNYYNNYYYYNNYNYNNYYNYYYYYYYNYYNYNNYYNYNNYYYNN", "NYYYNNYYYNNNYNNYYYNYYYNNYNYYNNYNYNNYYNYYYYNYNNYY", "YYYYNYYYNYNYYYNNYNYYYNYYYNYNYNYYNYYYNYYNYYYYNYNY", "NYYYYNYYNNNYNYYYYYYYNNNNYNYYYYNNYNYYYYNYYNYNYYYN", "NNYNYNYYYNYNYYNYYYYYYYYYYNYYYYYNYYNNYYNYYNNNNYYY", "YYNNYYNYYYYYYNYNNYYYNNYNNNYNYYNYYYNNNYNYNYYYNYYY", "YYYYYYNYNYYNNNNYYYNYYNYYYYYNYYNYNYYNNYYYNNYYYYYN", "YNYNNYNYYYYYYYNYNNYYNNYYNYYYYNYNYYYYYNYYYNYNYNNY", "YYYYYYNYYNYNYYYNNYYYNYNYNYYYNYYYYNNNYYNYYYYYYYYY", "NYYYNNYYNNNYYNYYNNYYNYYYYYNYNYNYNYYYYYYNYYYYYYYY", "YYYYNNNYYYYYNYNYNNYNNNNYYYNYYYYYYYYNNYYYNYNYNYNY", "YNYNYYYYYYYNNNYNNYYYYNNYYYYYYYNYYNNYNNYYYNYYYYYY", "YYYYYYYYYYYNNNYNNYYYNNYNNYNNNYNNYYNYYYYYNYNNYNNN", "NNYYYYYYYYNYYNNNYYNYNNYYYNNYYYYYYNNYYNYYYYNNYYYY", "NYNYYYYYNYNNYNNYNYNNNYNYYYNYNYYNNYNNYYYYNYYYNNNY", "YYYYNYNNNNYNYYYYYNYNNYYYYNYYNNYNYYYYYNYYYYNYNNYY", "YYYNYYYYNNNYNYYYNYYNYYYNYNNNYNNYNYYYYNYYNYNYNYNY", "YYYNNNNNYYNYYYNYYYYYNYYYYYNYYNNYYNYYNYYYYYNYYYYN"};
    int roadCost = 30484;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 694041085098525;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> before = {82306, 50489, 1871, 14514, 71195, 22888, 46642, 11984, 37541, 24392, 59922, 42304, 26765, 23971, 40447, 1419, 53189, 53312, 1263, 9208, 35948, 23009, 32452, 24325, 45336, 2820, 29730, 4830, 34939, 41828, 63887, 11359, 38673, 9628, 27283, 30269, 8990, 1225, 80718, 84057, 21043, 21601, 5952, 93124, 21722, 5456, 63904, 26236, 56692, 17355};
    vector<int> after = {95416, 52573, 25064, 46128, 80847, 99194, 88779, 99148, 43700, 56033, 74336, 60889, 69774, 43473, 90582, 3405, 68477, 54388, 27966, 10844, 47002, 80147, 69438, 88197, 76675, 12094, 87475, 72732, 37276, 67717, 95422, 18365, 90844, 27900, 37595, 66326, 66197, 76819, 87729, 94654, 62763, 77087, 77538, 96196, 56298, 48739, 66655, 50181, 87076, 23319};
    vector<int> houseCost = {43220, 35292, 66066, 96471, 28709, 5908, 79483, 51409, 86247, 68988, 67893, 2948, 30231, 56386, 85112, 80019, 95912, 93024, 16013, 23315, 70680, 96677, 81518, 29387, 41210, 6028, 61057, 20013, 44684, 22562, 55839, 95583, 19553, 67108, 27538, 147, 15288, 98494, 26002, 54225, 3874, 83980, 12806, 32491, 60639, 96891, 32168, 68902, 46720, 8999};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 27685;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 3950277844908929;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> before = {2283, 89663, 59583, 933, 33003, 31901, 4224, 34619, 2833, 20663, 11301, 2278, 29320, 31975, 16238, 28280, 43033, 47784, 34022, 42213, 57242, 87640, 11212, 10928, 8935, 3141, 4356, 28768, 2435, 49666, 58436, 22152, 39427, 25024, 9060, 11748, 45351, 12861, 21496, 81603, 37375, 16195, 66892, 61246, 6859, 34923, 41073, 66404, 13755, 37243};
    vector<int> after = {79956, 89842, 68697, 55825, 36951, 78854, 8516, 84928, 69265, 93068, 96142, 68741, 33977, 43807, 51523, 97973, 78944, 57880, 75269, 92321, 91599, 89425, 88386, 80298, 12454, 58671, 67429, 57200, 33501, 92403, 66754, 79459, 46654, 68130, 33103, 12332, 80039, 74132, 46405, 97826, 60772, 37554, 91303, 75569, 66001, 40345, 59534, 77359, 61755, 78298};
    vector<int> houseCost = {18615, 21574, 47134, 55975, 32291, 33664, 96795, 14085, 68988, 3696, 64651, 48979, 58634, 47270, 43018, 13496, 68414, 79938, 4102, 2447, 97376, 52085, 33818, 90463, 43906, 71966, 33235, 18976, 7881, 24721, 23469, 51195, 21545, 81611, 28662, 32968, 24232, 16350, 2121, 57234, 55994, 94923, 56307, 19725, 56100, 94081, 94064, 75078, 91256, 74210};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 83379;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 4571162398278594;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> before = {14273, 426, 26809, 35076, 301, 13059, 64511, 16093, 309, 10297, 3638, 5180, 44411, 61029, 38371, 24049, 46722, 10475, 27873, 65630, 86212, 54150, 61103, 20664, 22756, 31075, 44355, 7254, 19257, 38045, 55877, 23794, 84582, 63894, 9183, 13073, 17492, 28295, 29384, 46810, 24288, 28211, 761, 16925, 22588, 72677, 42551, 8889, 67349, 15829};
    vector<int> after = {31306, 39199, 80468, 64029, 828, 98681, 72096, 24387, 96699, 48278, 92812, 66852, 70920, 89658, 75652, 98239, 96389, 81663, 79843, 92221, 95550, 57990, 95294, 90874, 73684, 37758, 68919, 62567, 32342, 39016, 57977, 93628, 88774, 73667, 63471, 95771, 68063, 28658, 83861, 96847, 53450, 68715, 46187, 79571, 97722, 96100, 97822, 19253, 85637, 94018};
    vector<int> houseCost = {52775, 72436, 223, 31114, 74891, 46612, 65287, 5291, 51687, 84899, 2339, 66368, 18961, 69862, 3782, 53829, 47603, 49200, 78127, 58149, 85574, 79558, 37167, 25278, 8243, 67421, 1126, 18428, 12849, 48825, 91397, 93756, 77034, 95919, 63629, 7497, 3252, 29891, 53005, 47041, 79418, 76554, 13222, 816, 93620, 9416, 14250, 39475, 33545, 87889};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNY", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNYNNNNNNNYNNNNNNNN", "NNNNNNNNNNNYNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNN", "NNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYYNNNNNYNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNN", "NNNYNNNNNNNNNNYNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 53500;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 10994804018434621;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> before = {21530, 5571, 91795, 7699, 42702, 34009, 22156, 14020, 53309, 50252, 1803, 44819, 51636, 34803, 56410, 15283, 36684, 17552, 44781, 35636, 26836, 53925, 45131, 59947, 3471, 13609, 4832, 9627, 25642, 7800, 42530, 51887, 37000, 34564, 15457, 48420, 38469, 9547, 81509, 14869, 24394, 14289, 44931, 5374, 60563, 44699, 5621, 33779, 2460, 24417};
    vector<int> after = {73117, 42691, 93433, 50530, 94597, 89018, 28195, 78418, 89845, 85006, 53630, 79245, 54492, 95068, 75658, 45826, 56449, 45175, 46688, 84585, 57133, 74673, 77642, 92113, 9599, 67340, 21445, 24537, 73828, 87163, 91626, 78304, 92502, 70086, 68150, 98411, 47322, 90689, 81836, 46372, 62206, 72096, 87910, 41748, 95430, 76271, 6390, 86798, 46194, 40238};
    vector<int> houseCost = {88402, 73431, 72416, 91993, 49048, 21438, 89443, 94105, 23688, 54664, 22844, 45055, 22326, 39417, 15961, 75206, 96999, 66879, 70549, 9844, 98129, 40859, 11421, 40994, 76567, 76574, 78350, 60155, 64398, 28841, 3827, 96980, 94873, 33163, 11529, 74039, 73902, 92326, 34206, 92382, 55602, 30154, 51502, 28079, 89657, 49719, 28676, 80484, 68390, 60926};
    vector<string> g = {"NNNYNNNYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNYYNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNY", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNYNYNNNNNYNNNNNNNNYYNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNYNNNNNNNNYNNNNNNNNNYNNNNYNNNNYNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNYYNYNNNNYYNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNN", "YNNNNYYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNYNYNNYNNN", "NYYNNNNNNYNNNNNNNNNYNNNNNNNYNNNNNNNYNNNNYNNNNNYNNN", "NNNNNNYNNNNNNNNNNNYNNNNNNNNYYNNNNNNNNNYNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNN", "NNNNNYNNYNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNN", "NNNNNYNYYNNNNNNNNNNNNNNNNNNNNNNNYNNYNYYNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNYNNNNNYYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNYNYNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNYNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYYNN", "NNYNNNNNNNNNNNNNYNNYNNNNNNNNNYNNNNNNYNNNYNNNNYNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNN", "NNNNNNNYNNNNNNYNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNN", "NNYNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNYNNNNNNYNNNN", "NNYNNNNNNNNNNNNYNNNNYNNNNYNNNNNNNNNNNYNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNYNNNNYYNNNNYNNNNNYNNNYNNNNN", "NNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNYNNNNYNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNYNNNNYNNNNNNNNNYNNNNNNNNNNNNYNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYYNNNNYNNNN", "NNNYNNNNYNNNNNNNNNYNYNNNNNNNNNNNNYNNNYNNNNNNYNNYNN", "NNNNNNNNNNNYNYYNNNNYNYNNNNNNNNNNYNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNYNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNN"};
    int roadCost = 94258;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 23798190528234916;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> before = {11007, 32249, 27087, 5664, 22088, 57842, 6890, 79468, 22413, 72542, 40887, 18948, 39982, 8753, 17391, 29445, 32659, 35197, 45268, 10982, 8828, 78473, 22549, 16355, 9653, 56166, 85166, 80621, 935, 23481, 6831, 7505, 27815, 25687, 51004, 11675, 91019, 35175, 39613, 14096, 52959, 59944, 62800, 34680, 25135, 23647, 2899, 40025, 26483, 41353};
    vector<int> after = {24115, 97382, 47347, 92300, 82024, 77483, 42872, 90220, 72030, 89982, 95431, 97306, 83913, 52758, 53706, 33782, 98422, 92242, 71715, 38631, 52057, 85587, 75851, 79536, 50398, 84953, 97769, 94041, 49967, 47306, 84563, 42549, 94764, 53118, 82761, 36018, 92083, 75579, 61865, 82027, 76271, 73680, 74458, 43380, 43784, 33060, 29890, 91652, 40667, 92519};
    vector<int> houseCost = {55825, 99763, 52711, 21435, 88735, 49459, 15233, 66502, 11580, 47018, 97239, 67542, 67324, 93299, 9456, 27617, 89468, 55770, 63459, 71020, 73295, 44701, 58844, 88875, 97683, 58600, 66513, 7202, 26554, 46744, 84523, 73318, 28678, 45016, 13090, 47578, 18756, 24038, 4096, 82517, 39959, 18574, 53501, 25273, 9167, 17516, 6784, 93950, 94347, 17775};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 1;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 6132924475224899;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> before = {55743, 4028, 83215, 12450, 18191, 5476, 2281, 12538, 3801, 29143, 49007, 31107, 16817, 15484, 59800, 8686, 26208, 50264, 26505, 45067, 23838, 16377, 15575, 12860, 53529, 2502, 32006, 2247, 23202, 25954, 19530, 10186, 72492, 39105, 9832, 2010, 24181, 16136, 31288, 670, 7342, 78315, 9082, 20135, 16530, 92036, 20227, 49207, 46693, 36489};
    vector<int> after = {71347, 27728, 86260, 22579, 38473, 65469, 18970, 83549, 44089, 78066, 50447, 93288, 64206, 53053, 62886, 92745, 44828, 58129, 60743, 84820, 55720, 78098, 24009, 62508, 67265, 13295, 54584, 5234, 37266, 69948, 35148, 74827, 89414, 54422, 36331, 59048, 54398, 67824, 74539, 71527, 74497, 88650, 64507, 31802, 68661, 97823, 71216, 53959, 52371, 40270};
    vector<int> houseCost = {27473, 57187, 92063, 30955, 68451, 12877, 48854, 83776, 2930, 29155, 91840, 62124, 79877, 43350, 89047, 96278, 97645, 85319, 55050, 77464, 85809, 26021, 65876, 36987, 42372, 28433, 44035, 62039, 56653, 24221, 55985, 86258, 71165, 22760, 34125, 60872, 94299, 32867, 95890, 36544, 97339, 16078, 67085, 49523, 69921, 87258, 39611, 60616, 6913, 24423};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 1;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 4858843508874847;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> before = {21006, 76169, 16230, 68730, 16259, 59198, 34319, 18022, 30668, 48491, 7111, 68623, 50910, 50086, 50, 71572, 59658, 3573, 40119, 7282, 46755, 3326, 42436, 6674, 12790, 3931, 66135, 41195, 71052, 45958, 12291, 62607, 33861, 14707, 3400, 40237, 88241, 29808, 19206, 78005, 19776, 20966, 23989, 37327, 6116, 24401, 64156, 14836, 30463, 70775};
    vector<int> after = {81606, 94809, 30034, 98430, 26428, 89652, 55639, 37824, 38463, 95707, 93196, 68932, 86348, 53861, 59089, 93063, 67690, 43609, 96261, 74092, 74810, 78239, 95774, 63938, 52902, 20842, 79524, 64245, 74932, 68010, 26665, 92170, 96480, 74940, 83058, 86611, 90796, 52735, 83011, 98749, 59645, 91091, 24937, 74426, 10197, 53868, 66947, 56433, 44041, 75088};
    vector<int> houseCost = {68649, 68830, 75605, 74706, 59320, 6503, 47278, 75835, 23680, 29087, 59818, 50211, 22002, 96901, 39924, 84385, 58225, 75363, 69668, 21623, 66060, 68951, 3009, 42011, 34338, 98988, 48325, 75698, 21766, 7265, 37849, 2958, 62647, 56991, 13139, 4055, 22341, 25895, 71966, 84223, 65971, 14881, 21074, 15756, 83887, 34829, 78198, 68721, 42459, 2197};
    vector<string> g = {"NNNNYNNYNNNNYNNNNNNNNNNNNNNNNYYNNYNNNNNNNYNNNNYNNN", "NNYNNNYNYNNNNNNNYNNNNYNNNNYYNNNNNNNYNNYNNNNYNNNNNN", "NYNNNNNYYNYNNNNNNNNNNNNYNNNNNNNNNNYNYNNNYNNNNNNNNN", "NNNNNNYNNNNNYNNNNNNNNYNYNNNNNNNNNNYNNNNNYNNNNNNNYN", "YNNNNNNYNNNNNYNNYNNNYNNYNNNNNNNNNNYYNNNNYYNNNNNNNN", "NNNNNNNNYNNNNNYNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNN", "NYNYNNNYNNNNNNNYYYNNNNNNYNNNNYNNNNYYNNNNNNNNNNNNNN", "YNYNYNYNNNNNNNNNYNYNNNYNYNNNNNNNNYNNNNNNYNNYNYNNYN", "NYYNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNYYNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNYNNNNNNNNNNNNYNNYNN", "NNYNNNNNNNNNYNNNNYNNYNNYNNNNNNYNNNNNNNNNYNYNNNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYYNYNNNNNNNNNNN", "YNNYNNNNNNYNNNNNNNNNNNNNNNYNYNNNYNYNNNYNNNNNNNNYYN", "NNNNYNNNNNNNNNNNYNNNNNNNYNNNNNNYYNNNNNYNNYNNNNYNNN", "NNNNNYNNNNNNNNNNNNNNYNNYNNNNNNNNNNNYYNNNNNNNNNNNYN", "NNNNNNYNNNNNNNNNNNYNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNYNYYNNNNNYNNNYNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNYNNYYNNNNNYNNNNNNNNYNNNYNNNNNNNNNNNNNYNYNNYN", "NNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNYNNYNYNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNYYYYNNNNNNNNNNYNYNNNNNNY", "NNNNYNNNNNYNNNYNYNNNNYNNNNNNNNNYYNYNNNNNNYNNNYNNYN", "NYNYNNNNNNNNNNNNNNNNYNYNNNNNNYNNNNYYNNNNNNNNNNYNNN", "NNNNNNNYNNNNNNNNNNNNNYNYNNNNNNNNNNYNYNYNYNNNNYNNNN", "NNYYYNNNYNYNNNYYNNNNNNYNYYYYNNNNNNNNNNNYNNNNNYNNNN", "NNNNNYYYNNNYNYNNNNNYNNNYNNNNNNNNYNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNYNYNNNNNYNNNNYNNNNNNNYNNNNNNNNNNNYN", "NYNNNNNNNNNNYNNNNNNYNNNYNNNNNNNNNNNYNNYNNNNNNNNYNN", "NYNNNYNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNYNNNNNNNY", "NNNNNNNNNNNNYNNNNNNYNNNNNYNNNNNNNNYNNNNNNNYNNYNYNN", "YNNNNNYNNYNNNNNNNYNYNYNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "YNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNYNYNNNNNNNNNNNNNN", "NNNNNNNNNYNNNYNNYNNNYNNNNNNNNNYNYNNYNNNNNNNNYYYNNN", "NNNNNNNNNNNNYYNNNNYNYNNNYNNNNNNYNNNNNNYYNYNNYNYNNN", "YNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNYNYNNNYNNNN", "NNYYYNYNNNNNYNNNNNNNYYYNNNNNYYNNNYNNYNNNNNNNNYNNNN", "NYNNYNYNNNNYNNYNNNYNNYNNNNYNNNYYNNNNNNNNNNNNYNNNNY", "NNYNNNNNYNNYNNYNNNNNNNYNNYNNNNNNNNYNNYNYNNNNNYNYNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNYNNYNNYN", "NYNNNNNNNNNYYYNNNNNNNNYNNNYNNNNNYNNNNNNNNNYNNNYNNN", "NNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNYYNNYNNNYNNNNNNNNN", "NNYYYNNYYNYNNNNNNNNYNNYNNNNNNNNNNNNNNNNYNNNNNNNNNN", "YNNNYNNNNNNNNYNNNNNNYNNNNNNYNNNNYYNNNNNNNNNNNYNNYY", "NNNNNNNNNNYNNNNNNNNYNNNNNNNNYNNNNNNNNYYNNNNNNNNNNN", "NYNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNYYNNYNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNYNNYNYYNNNNYNNYNYYNYYNNNYNNNNNNNY", "YNNNNNNNNNYNNYNNNNNNNYNNNNNNNNNYYNNNNNYNNNNNNNNNNN", "NNNNNNNNNYNNYNNNNNNNNNNNNNYNYNNNNNNNYNNNNNNNNNNNNN", "NNNYNNNYNNNNYNYNNYNNYNNNYYNNNNNNNNNNNYNNNYNNNNNNNN", "NNNNNNNNNNYNNNNNNNNYNNNNNNNYNNNNNNNYNNNNNYNNNYNNNN"};
    int roadCost = 1;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 32252626851950266;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> before = {21035, 63865, 37566, 31232, 71578, 44396, 12359, 1449, 4180, 11563, 35529, 7547, 49585, 11246, 35169, 24138, 35981, 10479, 22037, 34102, 40706, 38727, 457, 14033, 19589, 2987, 16643, 75458, 19228, 54847, 40709, 34667, 15366, 73634, 44809, 55717, 5589, 31319, 75300, 26497, 78136, 14492, 9154, 36819, 8382, 36288, 38855, 1690, 15823, 20422};
    vector<int> after = {46844, 71239, 56795, 99952, 89136, 67467, 47185, 70736, 69413, 69940, 77609, 81723, 58479, 68906, 35611, 61395, 53057, 12152, 48993, 37419, 85418, 53102, 17491, 48424, 77829, 39482, 39562, 86742, 37497, 64187, 44608, 76010, 88882, 86745, 85367, 81758, 43854, 62197, 89592, 71737, 80296, 21624, 34933, 95545, 12193, 62678, 98533, 46229, 90268, 38097};
    vector<int> houseCost = {80618, 48650, 5350, 89704, 27721, 46009, 24733, 94753, 56764, 48503, 84065, 42233, 77779, 84187, 12759, 54652, 68102, 38894, 18613, 88141, 32838, 585, 11229, 68060, 40588, 80117, 15622, 27849, 23943, 68680, 84306, 40645, 39538, 58893, 74359, 32944, 8954, 7643, 19897, 60764, 55677, 31836, 85646, 14408, 16612, 77062, 33912, 45028, 46255, 53764};
    vector<string> g = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int roadCost = 1;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 162740003106427514;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> before = {60269, 6016, 13306, 53311, 5941, 1016, 27325, 45361, 39513, 21939, 7496, 61750, 16135, 60545, 10170, 68501, 22636, 73690, 10060, 39971, 11173, 21335, 13980, 9365, 26633, 3381, 49621, 13945, 6631, 39008, 57045, 15425, 37094, 18867, 36936, 65978, 86709, 59582, 29372, 11563, 33003, 25979, 51497, 140, 2608, 35542, 39313, 70275, 2534, 33481};
    vector<int> after = {65112, 20178, 64200, 54318, 91250, 54242, 40940, 61996, 51632, 28894, 19167, 97304, 93193, 82232, 39928, 68571, 74967, 83856, 32306, 42606, 45664, 71661, 32196, 29031, 33139, 22574, 71479, 18340, 25668, 71971, 83812, 19969, 72052, 50414, 80210, 81343, 99896, 87006, 67434, 37413, 56380, 38517, 97449, 2212, 2687, 87651, 97760, 86598, 8166, 68685};
    vector<int> houseCost = {40376, 71733, 83134, 65478, 93508, 18047, 81373, 71423, 73393, 65535, 95763, 62538, 4232, 35241, 35906, 26419, 82052, 65472, 17114, 6070, 31208, 29498, 47578, 78400, 99377, 75452, 51254, 74607, 50023, 98553, 60490, 301, 91328, 72887, 63404, 50839, 6855, 40553, 19798, 27898, 25620, 29365, 57662, 53747, 71694, 82382, 47394, 19693, 44111, 88538};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 189;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 3557253946325708;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> before = {216, 1715, 45648, 10900, 4888, 8248, 6041, 85696, 65185, 1931, 24934, 58599, 31949, 15282, 40291, 23010, 53168, 48990, 21334, 1096, 18888, 22735, 37188, 497, 36538, 53782, 4790, 36656, 8968, 51, 54868, 6743, 6194, 2169, 16350, 7160, 23547, 2563, 3528, 9568, 1007, 50919, 18809, 41240, 63597, 49027, 68796, 77124, 29819, 25256};
    vector<int> after = {22849, 31610, 61962, 84581, 97361, 28518, 15173, 91227, 77637, 5354, 90049, 69553, 71536, 38086, 54258, 40904, 53448, 87054, 61901, 66777, 88895, 93318, 68843, 84069, 47870, 74050, 84896, 68235, 70669, 48297, 79265, 88560, 70363, 84044, 21322, 12052, 73937, 41170, 34949, 36451, 87983, 65936, 85770, 41990, 65767, 64199, 84934, 88655, 33309, 73359};
    vector<int> houseCost = {54475, 93367, 29449, 95372, 63191, 2111, 92998, 76903, 99607, 55440, 68872, 11664, 5255, 63185, 34274, 27688, 43285, 86940, 47449, 39744, 57563, 31482, 25058, 25, 29928, 25730, 5218, 47875, 40343, 58589, 2028, 5917, 21589, 59908, 78022, 5882, 74750, 29311, 53218, 98936, 96, 18566, 1768, 71147, 6391, 19459, 82826, 99472, 36845, 34925};
    vector<string> g = {"NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 15;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 4187011647777010;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> before = {19883, 34836, 13951, 45703, 35793, 14091, 69507, 94180, 33013, 19873, 10386, 15357, 27684, 28975, 3010, 26268, 40560, 78511, 8817, 26322, 47901, 35622, 58587, 5399, 77120, 11187, 58821, 42083, 39499, 22061, 61639, 29218, 2899, 14823, 27977, 927, 56076, 6911, 13242, 22651, 76592, 43604, 33876, 42515, 5251, 55391, 9230, 33732, 1135, 54014};
    vector<int> after = {87533, 72771, 51376, 72623, 75214, 37803, 90201, 99735, 95826, 82372, 84687, 18822, 97297, 48530, 44816, 52640, 40957, 88890, 82290, 51425, 93592, 39346, 72175, 51451, 79729, 15290, 75863, 79845, 71901, 42582, 65353, 98564, 75722, 25103, 66799, 97715, 70985, 89896, 57264, 92707, 84134, 89117, 97800, 63361, 34658, 77170, 72531, 89119, 84566, 74821};
    vector<int> houseCost = {3999, 25416, 38189, 62483, 2755, 433, 64050, 36860, 50022, 37200, 16400, 12437, 2870, 37016, 12966, 55470, 6886, 43951, 86821, 77889, 6371, 16775, 24941, 91546, 3747, 89481, 71822, 46487, 62479, 91172, 19467, 92452, 55008, 15362, 83474, 56957, 2910, 38994, 33381, 3023, 85825, 63389, 62451, 88279, 46482, 22518, 90590, 56129, 1035, 51583};
    vector<string> g = {"NNYNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNYNNNNNYYNNNNNYNN", "NNNNNNNNYNNNNNYYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNN", "YNNNYNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNYNNNNYYNNNNYNNNNNNNYNNNNNN", "NNYNNNYNNNNNNNNNYYNNNNNNYNYNYNNNNNNNNNNNNYNYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYYNNNNNYNNNNNNNYN", "NNNNYNNNNNNNNYYNNNNNYNNYNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNYYNNNNYNYNNNNNNNNNNNNYNNNYNYNNNNYNNYNNNYNN", "NYNNNNNYNYYNNNNNNNNNNNYNNNNNNNYNNNNNNYNNNNNNNNNNYN", "NNNYNNNYYNNNNNYNYNNNNNNYNNNNNYNNNNNNNNNNYYNNYNNNYN", "NNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNYNNNY", "NNNNNNNNNNNNNNYYNNNNYNNYNYYNNNNNYNNNNNYNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNYNNYNNYNNNNYNNNNNNNNNNNNNNNNNNN", "YNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNYNNNNN", "NYNNNNYYNYNYNNNNNNYNNYNYNNNNNNNYNNNYNNNNNNNNNNNNNN", "NYNNNNNNNNNYNNNNNNNNNNYNNNNNNNYYNNNNNNNYNNYYNNYNNN", "YNNNYNNYNYNNNNNNNNNYNNYNNNNYNNNNNNNYYNNNYNNNNNNNNY", "NNNNYNNNNNNNNNNNNNYNNNNNNNNNNYNNNYNYNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNYNNYNNNNNNNNNNYNNNYNYNNNNNYNYNNNNNNN", "NNNNNNNNNNNNYNNNYNNNNNNNNYNNNNNNNNYNNNNNNNNNYNNNNN", "NNNNNNYNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNYYNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNYNNNYNNYYNNNNNNNYNNNYYNNYNNNYNNNNNYNNNNNNY", "NNNNNNYNNYNYNNYNNNNNYNNNYNNNNNNNNYNYYNNYNNYNNNNNNN", "NNNYYNNNNNYNNNNNNNNNNNYYNNNNNNNNNNNYYNNNNNNYNYNNNN", "NNYNNNNNNNNYYYNNNNNYNNNNNNNNNNYYYNNNNNNNNYYNNYNNNN", "NNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNYNYNNNNNNYYYNNNYNYN", "NNYNNNNNNNNNNNNNYNNNNYNNNNNNYNNNYYNYNNNNNNNNNNNNNY", "NNNNYNNNNNNNNNNNNNYNNYYNNNNYNYNNNNNNYNNNNNNNYNNYNN", "NNNYNYNYNYNNNNNNNYNNNNYNNNNNYNNNNNNYNNYNYNYNNNNNNN", "NNNYNNNNYNNNYNNYNNNNNNNNNYNNNNNYNNYNNNNNYYNNNYNNNN", "NYNNNNNNNNNNNNYYNNNNNNNNNYYNNNYNYNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNYNNNNNNYNNNYNNYNYNNNYNYYNNNNNYNNNNNNNNN", "NNNNNYYYNNNNNNNNNYNNNNNYNNYYNNNNYNNNNNNNNNNNNYNYNN", "YNNNNYNNNNNNNNNNNNYYNNNNNNNNNNYNYNNNNNNNNNNNYNNNNY", "NNNYNNNYNNYNNNYNYYNNNNNYYNNYNYNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNYYYNNNYNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNYNNNNYNN", "NNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNYNYNYNNNNYNYNN", "YNNNNYNYNYNNNNNNYNYNNNNNNNYNNYYNYNNNNNNYNNNYNNYNNN", "YNNNYNNNNYNNNNNNNNNNNYNNNYYNNNYYNNNYNNNNNNNNNYNNNN", "NNNNNNNNNNNNNYNYNNYNNNYYNYYNNYNNNNNNNNYNNNNNNNYNYN", "NNNYYNNYNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNYNNNYYYNYN", "NNNNNNNNNYNNNYNNNYNYNNNNNNNNYNNNNNYNNNNNNNNYNNNYNN", "NYNNNNNNNNYNNNNNNNNNYNNNYYNNNNYNNYNNNNNYNYNYNNYYYN", "NNNNYNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNYNYYNYNNYN", "YNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNYYNNNNYYNNNN", "NNNNNYNNYYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYYNYYNNN", "NNNNNNNNNNYYNNNNYNNNNNYNNNNYNNNNNNYNNNNNNNNNNNNNNN"};
    int roadCost = 942;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 34055666529834776;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> before = {40488, 10191, 60627, 3638, 25723, 49616, 60622, 46208, 30645, 29171, 8649, 35614, 38489, 4695, 6330, 10784, 14822, 13938, 12550, 622, 50047, 9849, 50407, 16352, 40468, 4560, 45132, 4682, 14190, 57708, 50416, 29408, 34496, 13073, 38559, 9530, 49069, 10279, 2904, 5095, 33132, 29721, 93190, 10753, 14848, 10373, 67732, 34935, 14416, 556};
    vector<int> after = {77361, 66928, 66514, 8261, 32132, 81091, 91846, 76059, 77937, 81783, 12388, 84453, 91903, 29808, 46194, 66215, 51390, 94878, 39146, 23280, 94136, 97265, 77422, 80860, 75880, 19018, 67532, 63211, 41268, 63479, 58660, 89279, 56918, 27579, 42569, 87607, 77942, 60276, 73370, 35575, 92620, 32890, 95721, 33305, 21570, 12501, 98916, 56036, 98493, 14663};
    vector<int> houseCost = {3209, 21490, 84625, 73659, 49885, 18368, 45485, 69757, 3927, 43808, 81258, 83327, 56325, 21991, 30378, 48143, 56229, 66176, 83908, 73550, 85377, 31554, 570, 18893, 67735, 6774, 83650, 39213, 31027, 39894, 76800, 46237, 95888, 2728, 91753, 27199, 7422, 57414, 20098, 75107, 30454, 52984, 82750, 27561, 21575, 84598, 89922, 26370, 31916, 98473};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 489;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 4207159704145170;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> before = {18915, 64516, 1725, 32178, 20373, 24501, 48662, 32481, 26269, 48819, 47850, 16145, 56976, 11846, 58603, 21060, 64791, 9851, 26510, 48277, 34181, 34815, 41557, 26317, 12036, 13066, 8620, 16129, 47724, 3629, 16008, 30099, 42247, 24855, 25507, 29050, 84180, 39851, 46150, 63092, 39144, 30768, 30323, 25444, 31286, 15339, 25159, 38152, 77958, 4033};
    vector<int> after = {18915, 64516, 1725, 32178, 20373, 24501, 48662, 32481, 26269, 48819, 47850, 16145, 56976, 11846, 58603, 21060, 64791, 9851, 26510, 48277, 34181, 34815, 41557, 26317, 12036, 13066, 8620, 16129, 47724, 3629, 16008, 30099, 42247, 24855, 25507, 29050, 84180, 39851, 46150, 63092, 39144, 30768, 30323, 25444, 31286, 15339, 25159, 38152, 77958, 4033};
    vector<int> houseCost = {79826, 81608, 95347, 28569, 55980, 63607, 96264, 80407, 91625, 25133, 98167, 14073, 21906, 53246, 99777, 5355, 63520, 17391, 21365, 9769, 98554, 61878, 76980, 44129, 23259, 40661, 20560, 74158, 35754, 86339, 60456, 380, 12959, 6306, 60044, 16521, 25923, 60872, 23293, 18914, 12431, 4057, 2957, 48674, 65130, 28843, 7836, 51221, 16335, 49473};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 99949;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 171898986783;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> before = {36157, 72156, 37021, 30721, 16087, 33471, 60471, 51730, 74267, 49628, 15369, 60447, 65608, 14996, 41506, 20347, 68822, 70247, 13929, 14442, 22726, 66000, 44575, 147, 3059, 87828, 22856, 37750, 65950, 80963, 5364, 42546, 17230, 875, 30532, 2024, 50618, 23692, 2095, 9852, 98465, 33623, 75702, 20306, 3904, 10974, 2198, 55734, 40151, 415};
    vector<int> after = {36157, 72156, 37021, 30721, 16087, 33471, 60471, 51730, 74267, 49628, 15369, 60447, 65608, 14996, 41506, 20347, 68822, 70247, 13929, 14442, 22726, 66000, 44575, 147, 3059, 87828, 22856, 37750, 65950, 80963, 5364, 42546, 17230, 875, 30532, 2024, 50618, 23692, 2095, 9852, 98465, 33623, 75702, 20306, 3904, 10974, 2198, 55734, 40151, 415};
    vector<int> houseCost = {99015, 78120, 54718, 35341, 79223, 97969, 83151, 82996, 96754, 57008, 8041, 70501, 15568, 69677, 72865, 58692, 85762, 46336, 59579, 84767, 58146, 41331, 57164, 51352, 12893, 70077, 14200, 74109, 28783, 89928, 33139, 58483, 20709, 91691, 93987, 78439, 76540, 43503, 84924, 18585, 2400, 10573, 75714, 28220, 16557, 8141, 26570, 50095, 20784, 3015};
    vector<string> g = {"NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 64240;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 83256196320;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> before = {58544, 56315, 54518, 17431, 1037, 18143, 63270, 47308, 18966, 25057, 57105, 82386, 25206, 59145, 23451, 32969, 39857, 21501, 71669, 28926, 8812, 88008, 84462, 49923, 19788, 20471, 38245, 15494, 6328, 34053, 33270, 11209, 4598, 50690, 58055, 61946, 42139, 7234, 42205, 8372, 11805, 1717, 74178, 20484, 35437, 42753, 16930, 27943, 15908, 19438};
    vector<int> after = {58544, 56315, 54518, 17431, 1037, 18143, 63270, 47308, 18966, 25057, 57105, 82386, 25206, 59145, 23451, 32969, 39857, 21501, 71669, 28926, 8812, 88008, 84462, 49923, 19788, 20471, 38245, 15494, 6328, 34053, 33270, 11209, 4598, 50690, 58055, 61946, 42139, 7234, 42205, 8372, 11805, 1717, 74178, 20484, 35437, 42753, 16930, 27943, 15908, 19438};
    vector<int> houseCost = {39891, 61344, 91297, 51975, 57692, 72293, 40606, 38188, 60405, 27596, 5721, 48261, 3959, 88822, 39555, 64494, 24234, 71865, 18492, 94549, 18598, 54298, 84182, 1524, 14452, 41676, 25776, 94394, 9998, 17140, 25178, 34625, 58937, 80200, 24534, 91545, 6258, 88618, 88788, 36347, 33597, 63151, 49076, 96662, 90646, 45662, 13287, 50405, 72579, 97001};
    vector<string> g = {"NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNYNNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 42922;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 33860994112;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> before = {12291, 8242, 6371, 39311, 12293, 56959, 8004, 2775, 29628, 14108, 24916, 69319, 61158, 20141, 50431, 570, 4150, 45813, 10376, 64523, 17425, 21615, 37943, 41998, 38765, 13975, 2772, 6734, 5211, 66765, 33898, 16681, 1241, 82548, 17102, 2616, 58522, 5371, 13907, 24652, 25315, 59395, 50169, 14698, 273, 1556, 30475, 64946, 2759, 13153};
    vector<int> after = {12291, 8242, 6371, 39311, 12293, 56959, 8004, 2775, 29628, 14108, 24916, 69319, 61158, 20141, 50431, 570, 4150, 45813, 10376, 64523, 17425, 21615, 37943, 41998, 38765, 13975, 2772, 6734, 5211, 66765, 33898, 16681, 1241, 82548, 17102, 2616, 58522, 5371, 13907, 24652, 25315, 59395, 50169, 14698, 273, 1556, 30475, 64946, 2759, 13153};
    vector<int> houseCost = {75146, 67916, 39746, 19525, 77990, 20378, 18325, 65665, 24571, 35043, 68327, 8085, 79638, 92669, 81472, 81423, 92273, 23794, 44433, 81074, 28698, 80152, 38242, 53550, 34702, 69562, 36005, 88069, 53434, 19184, 7582, 73828, 15928, 2145, 90340, 34158, 38390, 91080, 65243, 62546, 18001, 83019, 93781, 74770, 53941, 72868, 91769, 71006, 53406, 20026};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNY", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNYNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 91142;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 40459392072;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> before = {31003, 56566, 32396, 20111, 10169, 1168, 58650, 39164, 25144, 1131, 19295, 40855, 33918, 66061, 51397, 61338, 22325, 7007, 8816, 3973, 8329, 28578, 4804, 5845, 26172, 49945, 61057, 45026, 1012, 40786, 28670, 2587, 1243, 1892, 59472, 22537, 4751, 60804, 9869, 22920, 8023, 39453, 43422, 4180, 39854, 91380, 16563, 59458, 8696, 26082};
    vector<int> after = {31003, 56566, 32396, 20111, 10169, 1168, 58650, 39164, 25144, 1131, 19295, 40855, 33918, 66061, 51397, 61338, 22325, 7007, 8816, 3973, 8329, 28578, 4804, 5845, 26172, 49945, 61057, 45026, 1012, 40786, 28670, 2587, 1243, 1892, 59472, 22537, 4751, 60804, 9869, 22920, 8023, 39453, 43422, 4180, 39854, 91380, 16563, 59458, 8696, 26082};
    vector<int> houseCost = {9894, 92537, 8078, 547, 79491, 22734, 4336, 8295, 32610, 43324, 23588, 26487, 66978, 51588, 55433, 6512, 58213, 59206, 73761, 47026, 43882, 50017, 69386, 73951, 14767, 48823, 31237, 92982, 49975, 54502, 69457, 2101, 4512, 5199, 63695, 30495, 81036, 25042, 61472, 83346, 59800, 71502, 66050, 94672, 87047, 59428, 17653, 60215, 60536, 77747};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 95948;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 140321359404;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> before = {60690, 9078, 34815, 4580, 47593, 66301, 25484, 14294, 50098, 27432, 29099, 52344, 17729, 79616, 7520, 31825, 24762, 95943, 37148, 11887, 66537, 2578, 57638, 13971, 19046, 58144, 12189, 5527, 35224, 85331, 12616, 31583, 55335, 14153, 8942, 36411, 18869, 30341, 23797, 14410, 7333, 38359, 49636, 74078, 39850, 70177, 32358, 7045, 113, 50662};
    vector<int> after = {60690, 9078, 34815, 4580, 47593, 66301, 25484, 14294, 50098, 27432, 29099, 52344, 17729, 79616, 7520, 31825, 24762, 95943, 37148, 11887, 66537, 2578, 57638, 13971, 19046, 58144, 12189, 5527, 35224, 85331, 12616, 31583, 55335, 14153, 8942, 36411, 18869, 30341, 23797, 14410, 7333, 38359, 49636, 74078, 39850, 70177, 32358, 7045, 113, 50662};
    vector<int> houseCost = {21941, 26963, 4185, 91330, 76183, 7889, 76346, 14316, 23185, 69056, 97188, 97271, 97090, 18463, 54742, 32193, 11435, 66573, 83951, 74187, 59341, 1003, 52463, 96565, 52133, 86968, 52217, 78943, 56502, 91638, 60937, 37256, 48734, 59843, 39745, 30673, 64702, 56543, 35553, 21979, 27766, 13965, 62536, 47491, 83653, 15433, 63512, 19307, 588, 40021};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 87498;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 113176825542;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> before = {45233, 21690, 41411, 35690, 62232, 7364, 51961, 79584, 19399, 9724, 79582, 10414, 24328, 32723, 19334, 21075, 71427, 7531, 1412, 22634, 2392, 12606, 41710, 15747, 35755, 20343, 49032, 31868, 22230, 22704, 11310, 28449, 20102, 21414, 13531, 10146, 70004, 27382, 56774, 32721, 11233, 10016, 66422, 62509, 7389, 31559, 8240, 79030, 53056, 18090};
    vector<int> after = {45233, 21690, 41411, 35690, 62232, 7364, 51961, 79584, 19399, 9724, 79582, 10414, 24328, 32723, 19334, 21075, 71427, 7531, 1412, 22634, 2392, 12606, 41710, 15747, 35755, 20343, 49032, 31868, 22230, 22704, 11310, 28449, 20102, 21414, 13531, 10146, 70004, 27382, 56774, 32721, 11233, 10016, 66422, 62509, 7389, 31559, 8240, 79030, 53056, 18090};
    vector<int> houseCost = {86394, 57285, 41839, 86616, 53727, 5508, 79964, 21682, 26965, 27497, 38167, 78904, 38123, 41481, 27836, 41246, 18774, 260, 98525, 19021, 77875, 98395, 93412, 79226, 55834, 30547, 35832, 13419, 50532, 87174, 64834, 85704, 88425, 14172, 15435, 30733, 42619, 34816, 84873, 51678, 98042, 64505, 92520, 3493, 81343, 65521, 9258, 19074, 87713, 46503};
    vector<string> g = {"NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 33139;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 31714884614;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> before = {24304, 64878, 11367, 59013, 2273, 59189, 31390, 45821, 10598, 8641, 35108, 56883, 8355, 55730, 22645, 39910, 20527, 29577, 47646, 27222, 47868, 53327, 85973, 13766, 22697, 47141, 72178, 23308, 19225, 3019, 35593, 53084, 32276, 22657, 12497, 5583, 51714, 11661, 22409, 84720, 3271, 13850, 8185, 28401, 2058, 47116, 27860, 44338, 65841, 24417};
    vector<int> after = {24304, 64878, 11367, 59013, 2273, 59189, 31390, 45821, 10598, 8641, 35108, 56883, 8355, 55730, 22645, 39910, 20527, 29577, 47646, 27222, 47868, 53327, 85973, 13766, 22697, 47141, 72178, 23308, 19225, 3019, 35593, 53084, 32276, 22657, 12497, 5583, 51714, 11661, 22409, 84720, 3271, 13850, 8185, 28401, 2058, 47116, 27860, 44338, 65841, 24417};
    vector<int> houseCost = {39211, 67149, 61614, 72941, 70838, 18792, 51344, 96746, 9476, 67261, 15810, 44208, 76819, 72620, 7622, 84927, 32133, 64660, 55708, 78425, 20664, 28855, 99236, 37884, 39053, 8115, 37277, 74920, 13123, 13225, 54888, 32128, 38203, 12569, 88742, 30304, 73813, 7650, 14677, 37290, 79504, 86181, 597, 76734, 62606, 48353, 68391, 13468, 52813, 72600};
    vector<string> g = {"NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNYYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNYNNNNNYNNNNNNN"};
    int roadCost = 90721;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 58614475216;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> before = {1, 9, 59, 42, 53, 24, 38, 53, 38, 16, 11, 30, 2, 74, 3, 74, 17, 29, 46, 35, 50, 47, 25, 10, 10, 7, 46, 54, 38, 32, 9, 69, 27, 64, 23, 32, 66, 54, 61, 88, 5, 47, 10, 19, 64, 14, 72, 94, 4, 35};
    vector<int> after = {18, 41, 82, 57, 67, 67, 70, 95, 50, 74, 35, 81, 93, 91, 45, 99, 89, 93, 85, 87, 63, 92, 69, 35, 15, 39, 68, 56, 100, 54, 21, 97, 78, 87, 97, 74, 97, 86, 69, 92, 17, 81, 28, 25, 85, 53, 77, 99, 49, 38};
    vector<int> houseCost = {40, 40, 70, 92, 29, 84, 66, 24, 97, 94, 33, 82, 51, 75, 40, 5, 78, 8, 5, 71, 12, 55, 75, 60, 83, 22, 42, 72, 27, 95, 29, 76, 8, 26, 95, 20, 100, 80, 3, 41, 17, 81, 70, 36, 46, 100, 96, 96, 54, 9};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 93341;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 181893022;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> before = {82, 32, 41, 14, 17, 50, 79, 80, 24, 19, 57, 59, 24, 32, 26, 28, 10, 42, 53, 42, 17, 17, 8, 60, 51, 91, 53, 18, 62, 10, 20, 38, 9, 7, 10, 25, 25, 2, 4, 11, 27, 21, 12, 26, 25, 30, 4, 43, 50, 12};
    vector<int> after = {98, 78, 70, 56, 35, 94, 83, 82, 53, 73, 98, 82, 27, 49, 99, 63, 35, 73, 90, 78, 81, 72, 18, 84, 83, 93, 77, 80, 64, 82, 41, 90, 55, 13, 21, 68, 92, 45, 65, 11, 86, 60, 39, 42, 52, 56, 89, 59, 61, 52};
    vector<int> houseCost = {3, 6, 93, 9, 72, 67, 52, 51, 40, 37, 46, 76, 37, 66, 73, 17, 93, 13, 92, 94, 45, 70, 9, 61, 88, 15, 84, 3, 2, 42, 33, 3, 30, 83, 33, 73, 22, 52, 84, 34, 73, 71, 12, 91, 29, 2, 60, 43, 24, 29};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 83639;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 88240374;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> before = {95, 16, 2, 60, 40, 64, 17, 46, 30, 46, 41, 1, 93, 14, 52, 15, 6, 5, 21, 33, 31, 45, 41, 65, 8, 51, 16, 2, 52, 20, 37, 7, 22, 51, 10, 17, 7, 70, 20, 63, 63, 6, 3, 35, 8, 50, 36, 19, 25, 15};
    vector<int> after = {96, 95, 90, 74, 47, 98, 53, 70, 37, 48, 61, 14, 94, 62, 89, 99, 11, 76, 42, 71, 95, 50, 54, 77, 64, 74, 81, 27, 56, 78, 63, 57, 43, 98, 83, 33, 72, 86, 68, 94, 80, 88, 39, 50, 72, 86, 83, 49, 85, 51};
    vector<int> houseCost = {47, 83, 11, 77, 21, 100, 61, 90, 26, 27, 61, 22, 37, 44, 57, 91, 80, 94, 21, 32, 23, 75, 91, 88, 93, 18, 15, 38, 1, 40, 24, 74, 98, 83, 38, 40, 5, 2, 42, 89, 49, 98, 56, 48, 28, 23, 61, 79, 27, 14};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNN", "NNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNN", "NNNYNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNYNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNYNYNNNNNY", "NNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNYNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNY", "NNNNNNNNNYNNNNNYNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNYNNNNYNNNNNNNNNNYNNNNNNYNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNN"};
    int roadCost = 64552;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 22747979;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> before = {12, 35, 2, 5, 87, 7, 20, 42, 48, 19, 19, 15, 6, 50, 26, 89, 52, 58, 22, 25, 9, 35, 4, 42, 47, 69, 69, 11, 27, 33, 15, 6, 14, 57, 34, 11, 56, 18, 1, 92, 52, 7, 39, 55, 45, 12, 57, 96, 4, 82};
    vector<int> after = {27, 39, 21, 65, 90, 55, 32, 60, 91, 59, 57, 32, 55, 53, 42, 94, 87, 89, 98, 76, 45, 37, 20, 98, 89, 91, 92, 25, 71, 79, 74, 93, 89, 93, 85, 18, 91, 26, 3, 96, 73, 74, 45, 77, 78, 79, 61, 98, 34, 99};
    vector<int> houseCost = {43, 94, 56, 34, 36, 88, 86, 21, 59, 12, 50, 54, 31, 2, 70, 63, 33, 19, 63, 2, 19, 45, 31, 86, 21, 59, 71, 91, 29, 37, 42, 80, 78, 61, 9, 36, 87, 70, 43, 89, 69, 2, 3, 91, 94, 37, 76, 82, 99, 93};
    vector<string> g = {"NNNYYNNNNNNNNNNNNNNNNYNNNNNNNNNYYNNNNNNNNYYYNNNYNN", "NNNNYNNNYYNNNYNNYNNNNYYNYNNNNNNNYNNNYNNNNNNNNNNNNY", "NNNYNNNNNNNNYNNNYNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNN", "YNYNNYNNYNNNYNYNNNYYNNNNYNNNYNNYNYNNNYNNNYNNNNNNNY", "YYNNNNNNNYYNNNNNNNNNYNNNNNNNNNNYYNNNYNYNNNNNNNNNYN", "NNNYNNYNNYNNYNNNYNNNNNNNNNNNNYNNNNNNYNNNNNNNNYNYNY", "NNNNNYNNNYYNNNNNNNNNNNYNNNNNNNNNNNYYYNYYNNNNNNNYNY", "NNNNNNNNNNNNNNYNNYNNYNNNNYNNNNNNYNNYNNNNNNNNYNYNNN", "NYNYNNNNNNNNNNNNYNYNYNNNNYYYNNNNNNNYNNNNNYNNNNNNNN", "NYNNYYYNNNNNYYYYNNYNNNNNNNNYNNNNYYYNNNNNNNNNYNNNNN", "NNNNYNYNNNNYNYNNNNNYNNNYNYYNYNYNYYYNNNNYNNYNNNNNNN", "NNNNNNNNNNYNYYYNNYNYNNNNNYNNYNYYYNNYNYNYNNNNNYYYYN", "NNYYNYNNNYNYNYNNYNNNNNNNNNNYNNNNNYNNNYNYNNNNNNNNNN", "NYNNNNNNNYYYYNNNNYNNNNNNYNYNNNNNYNYYYYNNNNYYYNYNYN", "NNNYNNNYNYNYNNNNYNNNYYNNNYNYNNNNNNNNYNNNNNNNNYYNNN", "NNNNNNNNNYNNNNNNYNYYNNNNNNNNNYYNNYNNYYNYNNNNNNYNNY", "NYYNNYNNYNNNYNYYNNNNNNYNNYNNNNYYYNNNNNNYNNNYNNYNYN", "NNNNNNNYNNNYNYNNNNYNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNN", "NNNYNNNNYYNNNNNYNYNYNNNNNNNNYYNNNYNYNNNNYNNYYNNYNN", "NNNYNNNNNNYYNNNYNNYNYNNYNNNNNNYNNNNNNYNNNNNNNNNYNN", "NNNNYNNYYNNNNNYNNNNYNYNNYNNYNNNYNNNNNNNNYNNNNNNYNY", "YYNNNNNNNNNNNNYNNNNNYNNNNNNNNNYNNNNNNNYNNNNNNNYNNN", "NYNNNNYNNNNNNNNNYNNNNNNNYYNNNNYYYNNNNNYYYNNNNNNYYN", "NNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNYNYYNNNNNYNYYNNNY", "NYNYNNNNNNNNNYNNNNNNYNYNNNYNNNNYNNNNNYYNNYNYNYNYYN", "NNNNNNNYYNYYNNYNYNNNNNYNNNNNNYYNNYNYYNNYNNNNNNNYNN", "NNNNNNNNYNYNNYNNNNNNNNNNYNNNYNNNNNNYYYYNYNNNYYNNNN", "NNNNNNNNYYNNYNYNNNNNYNNNNNNNNNNYNNNYYNNNNYYYNNNYNY", "NNNYNNNNNNYYNNNNNNYNNNNNNNYNNNYNNNNNNNNYNYNYNNNNYN", "NNNNNYNNNNNNNNNYNNYNNNNNNYNNNNNYNNNNNNNNNNYNYYNNNN", "NNNNNNNNNNYYNNNYYNNYNYYNNYNNYNNNNYNNNNNNNNNNNNNNYY", "YNNYYNNNNNNYNNNNYNNNYNYNYNNYNYNNNNYYYNNNNNNNNNNNNN", "YYYNYNNYNYYYNYNNYNNNNNYNNNNNNNNNNYNNNNYNNNNNNNNNNY", "NNNYNNNNNYYNYNNYNNYNNNNYNYNNNNYNYNYNYNYNNNYNNNNNNN", "NNNNNNYNNYYNNYNNNNNNNNNNNNNNNNNYNYNNNYYYNYNNNNNNYN", "NNNNNNYYYNNYNYNNNNYNNNNYNYYYNNNYNNNNNYNYNNNNYYYNYN", "NYNNYYYNNNNNNYYYNNNNNNNYNYYYNNNYNYNNNYNNYYNNNYYYNY", "NNNYNNNNNNNYYYNYNNNYNNNNYNYNNNNNNNYYYNNNNNNNNYNYNN", "NNYNYNYNNNNNNNNNNYNNNYYNYNYNNNNNYYYNNNNNYNYNNNNNYY", "NNNNNNYNNNYYYNNYYYNNNNYNNYNNYNNNNNYYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNYNYNNNYNNNNNNNNNYNYNNNYNNYNNNN", "YNNYNNNNYNNNNNNNNNNNNNNNYNNYYNNNNNYNYNNNNNYNYNYNNN", "YNNNNNNNNNYNNYNNNNNNNNNYNNNYNYNNNYNNNNYNYYNYNNYNYN", "YNNNNNNNNNNNNYNNYNYNNNNNYNNYYNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNYNYNNNYNNNNYNNNNYNNYNNYNNNNNYNNNNNYNNNNNNNN", "NNNNNYNNNNNYNNYNNNNNNNNYYNYNNYNNNNNYYYNNYNNNNNNYNN", "NNNNNNNYNNNYNYYYYNNNNYNNNNNNNNNNNNNYYNNNNYYNNNNNNN", "YNNNNYYNNNNYNNNNNNYYYNYNYYNYNNNNNNNNYYNNNNNNNYNNNN", "NNNNYNNNNNNYNYNNYNNNNNYNYNNNYNYNNNYYNNYNNNYNNNNNNY", "NYNYNYYNNNNNNNNYNNNNYNNYNNNYNNYNYNNNYNYNNNNNNNNNYN"};
    int roadCost = 97829;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 45470679;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> before = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> after = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> houseCost = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 100000;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 73999750004900000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> before = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> after = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> houseCost = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 100000;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 73999750004300000;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> before = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> after = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> houseCost = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<string> g = {"NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNYNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNN"};
    int roadCost = 100000;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 73999750000900000;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> before = {32194, 8597, 21269, 31465, 57802, 24868, 35863, 17182, 49899, 73552, 21492, 63962, 6755, 6018, 37375, 47257, 22081, 19722, 34670, 61150, 9822, 13651, 54288, 5328, 5730, 50049, 82152, 64312, 47377, 25310, 9347, 3391, 42850, 70737, 55205, 55146, 24334, 12219, 20501, 7785, 48413, 34238, 16009, 1465, 3616, 10781};
    vector<int> after = {72150, 85321, 57554, 57616, 94191, 46164, 90347, 65143, 68245, 95591, 88801, 83174, 92227, 94694, 45125, 69536, 71134, 42478, 88583, 66142, 70309, 23522, 55003, 73494, 68799, 88106, 86023, 70045, 54687, 42057, 21344, 4164, 77063, 71269, 55911, 56324, 63598, 19787, 73115, 84428, 48965, 73605, 35338, 74810, 88909, 99103};
    vector<int> houseCost = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 86;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 86605285243;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> before = {19987, 23751, 47244, 42057, 2371, 18561, 11185, 909, 11299, 53993, 21936, 18617, 39984, 9229, 92668, 53319, 46218, 19967, 3423, 35340, 20472, 27704, 71644, 2874, 10171, 39159, 6351, 12783, 58861, 57949, 4662, 28215, 12821, 41618, 8350, 57486, 35027, 56030, 7375, 40290, 26017, 34232, 86444, 23214, 69987, 43008};
    vector<int> after = {45826, 80294, 50367, 64153, 51660, 74068, 55343, 32538, 71170, 55750, 87071, 30208, 92576, 44539, 99558, 69325, 81241, 66958, 43227, 95788, 80315, 45813, 83490, 70308, 49658, 87131, 66052, 81654, 73584, 89996, 7527, 38962, 80909, 62034, 50404, 68412, 47238, 77579, 82839, 92448, 54963, 69298, 95715, 59073, 91656, 78482};
    vector<int> houseCost = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 9;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 93628040806;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> before = {1629, 36305, 66938, 72431, 8177, 5684, 79122, 2721, 20399, 85370, 13248, 12653, 19527, 43899, 26781, 5014, 4742, 7806, 64481, 6848, 10819, 22396, 29034, 1305, 22184, 21496, 62518, 2969, 79052, 21399, 12823, 32932, 70712, 38272, 2371, 23290, 78327, 38979, 38539, 7096, 29947, 24295, 8950, 40012, 6441};
    vector<int> after = {52479, 98785, 80401, 83646, 44947, 23552, 96521, 16726, 50866, 95676, 93166, 80256, 36029, 80042, 41515, 87473, 79775, 73936, 77868, 90119, 87124, 71840, 35864, 55119, 46281, 83237, 73624, 43692, 94363, 41703, 14300, 84508, 71286, 86768, 37462, 99798, 92997, 82358, 54839, 94333, 47433, 58275, 69249, 41953, 8882};
    vector<int> houseCost = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 45;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 96099333973;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> before = {8594, 18417, 16532, 23396, 7452, 61236, 8473, 28566, 40892, 79508, 79766, 11754, 5042, 29174, 40053, 4150, 1356, 44349, 38221, 15029, 6956, 7088, 64125, 13621, 29365, 79930, 66798, 32613, 43562, 9453, 55632, 23717, 28674, 33898, 10601, 40986, 31539, 25503, 58420, 15551, 61669, 59860, 34337, 4515, 62080, 28913};
    vector<int> after = {26529, 30803, 41896, 70883, 59482, 72477, 39247, 32485, 80296, 84433, 80104, 12875, 20262, 36673, 95674, 47878, 52998, 98302, 67130, 25213, 37184, 22101, 70099, 85226, 85389, 95699, 96366, 91521, 73513, 36407, 99237, 64103, 93852, 37913, 29886, 63037, 51274, 77757, 77357, 94125, 81960, 65298, 63918, 63756, 65069, 99363};
    vector<int> houseCost = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 75;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 89782009544;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> before = {29747, 40741, 18150, 88443, 23841, 4401, 676, 11402, 32589, 34844, 19163, 240, 3592, 37751, 15213, 9872, 63840, 43593, 30463, 84035, 8880, 28040, 23348, 27034, 35134, 4487, 44921, 9563, 15922, 34781, 93357, 14802, 64637, 66148, 15479, 26361, 9976, 5866, 23551, 31830, 1056, 36075, 52393, 21825, 8259, 32227};
    vector<int> after = {83554, 80604, 59536, 95820, 65115, 8982, 15890, 81370, 84605, 85261, 93493, 23994, 76019, 51495, 54211, 18545, 99246, 46513, 50373, 89291, 51886, 45226, 81989, 65597, 95498, 62259, 51296, 87139, 51098, 89549, 97385, 70392, 96007, 96912, 44514, 96264, 50421, 46213, 97937, 59886, 80710, 71171, 82431, 59163, 39080, 86436};
    vector<int> houseCost = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 24;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 109903768847;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> before = {67786, 26666, 27967, 29207, 83033, 69416, 801, 39882, 19089, 42657, 9404, 57719, 60641, 3741, 36637, 11331, 867, 50833, 24458, 68933, 28826, 8873, 68193, 87635, 85217, 60512, 74464, 10919, 50007, 25050, 81192, 68866, 34067, 43218, 55167, 70423, 7439, 9878, 28831, 62852, 18201, 20178, 45069, 54235, 29716, 23263};
    vector<int> after = {84906, 44030, 77936, 77562, 96610, 91379, 39729, 73775, 53108, 94592, 66303, 96027, 74640, 60817, 52347, 23389, 99704, 72102, 87083, 69060, 39012, 13416, 96543, 88511, 91449, 88465, 79044, 43703, 57716, 53587, 91880, 76307, 91739, 68741, 62737, 81218, 74672, 26611, 60180, 77263, 93731, 79424, 69333, 94441, 44270, 33101};
    vector<int> houseCost = {91651, 44237, 70303, 36664, 39417, 6487, 24476, 57651, 15832, 64640, 60198, 86599, 7491, 23736, 2617, 50301, 14513, 54850, 59490, 43918, 70277, 54476, 20349, 98465, 179, 91831, 35385, 15760, 84097, 71956, 45070, 83652, 64994, 26820, 29837, 25619, 56220, 10806, 90543, 76072, 39619, 97676, 17475, 64507, 20859, 48758};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 5;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 4648356584575830;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> before = {72644, 32186, 45368, 15379, 11391, 15673, 18752, 28939, 29552, 41289, 30406, 6495, 12433, 1031, 6242, 34654, 59225, 45390, 33745, 40499, 48025, 25092, 20399, 5421, 15010, 78752, 81003, 61615, 17183, 32310, 35297, 6054, 37198, 3314, 877, 74349, 35475, 44816, 44618, 12803, 32194, 52239, 24416, 28590, 42849, 40614, 14488, 7138, 3223, 31455};
    vector<int> after = {84584, 81876, 79484, 49268, 77105, 43947, 66278, 51799, 69444, 76313, 60549, 18706, 29221, 61813, 30256, 82173, 60538, 66618, 71156, 48402, 55759, 81493, 48515, 61510, 57616, 81188, 97694, 88538, 73134, 61802, 86191, 27018, 64009, 4369, 57647, 78909, 56346, 90222, 63242, 62073, 89067, 95354, 73417, 68669, 90672, 84241, 35246, 47901, 89443, 60415};
    vector<int> houseCost = {94763, 70804, 57262, 7117, 11669, 60228, 84794, 17632, 81147, 56691, 39456, 55204, 44595, 77667, 33900, 36531, 8033, 56355, 27, 87829, 58299, 46868, 76216, 92995, 89859, 2600, 83680, 8101, 22927, 78623, 68000, 54515, 50724, 38567, 1942, 56951, 5140, 41923, 28396, 39847, 44327, 74980, 9183, 29423, 4174, 64104, 45821, 27621, 50801, 94178};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 1;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 4197744839873350;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> before = {13024, 18354, 81634, 45489, 78522, 79762, 25030, 10181, 16990, 54266, 24664, 37623, 77153, 42985, 36747, 90036, 21596, 23669, 11324, 23011, 26417, 66483, 20705, 6489, 86292, 75298, 25708, 73445, 40269, 12094, 45647, 62012, 74662, 30806, 60556, 29634, 49303, 16483, 2616, 4825, 32956, 65301, 44418, 46425, 43255, 25893, 5154, 8980};
    vector<int> after = {26294, 26116, 96125, 64049, 86840, 90414, 56520, 79719, 52521, 65027, 42610, 80512, 85237, 45175, 71255, 94674, 35261, 74311, 34115, 85595, 98652, 86679, 72305, 55660, 95133, 77211, 33529, 95547, 95379, 90187, 78136, 85976, 78257, 39759, 78584, 72003, 66399, 88993, 45938, 90912, 76155, 97833, 91140, 64347, 47808, 34207, 35520, 53577};
    vector<int> houseCost = {20323, 98973, 79703, 17532, 60806, 87699, 18886, 51977, 3310, 23242, 80999, 79769, 1971, 1347, 14822, 49862, 29686, 26412, 77473, 48470, 81451, 18858, 47076, 86339, 16250, 55848, 56140, 94677, 91254, 37707, 6116, 11909, 5155, 14594, 7882, 61819, 86485, 65421, 51563, 88175, 44977, 38461, 68610, 86731, 21326, 92466, 41595, 40262};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 1;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 5519321784119088;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> before = {58477, 25473, 56084, 68171, 11778, 7307, 52140, 80730, 2874, 32679, 28281, 11258, 6169, 50525, 19460, 35500, 63329, 22077, 60493, 8736, 47163, 14937, 55972, 26812, 7573, 66790, 11227, 2815, 5303, 15801, 70636, 42501, 13330, 47277, 40911, 16505, 26536, 18307, 63617, 42518, 71263, 11419, 90783, 65925, 21860, 7993, 58984, 12082, 43186, 6545};
    vector<int> after = {65278, 47613, 64969, 81416, 29165, 88767, 79385, 88237, 18517, 34291, 64358, 30140, 48701, 65238, 95464, 87752, 91057, 56990, 92316, 43638, 71988, 96222, 99150, 36920, 94788, 90309, 79752, 89218, 83848, 37221, 98510, 58028, 28829, 52965, 89989, 16930, 45899, 75372, 79020, 66845, 90330, 32988, 91012, 66346, 56202, 69977, 78731, 88111, 99311, 40753};
    vector<int> houseCost = {98735, 44239, 79244, 673, 31075, 15534, 42265, 82752, 68133, 30200, 65527, 72512, 49586, 48536, 94553, 60292, 472, 70851, 92289, 73658, 2835, 14916, 37575, 67555, 45293, 87538, 28847, 5296, 59174, 45238, 5068, 24258, 21289, 75529, 79523, 97416, 35922, 79763, 74376, 68291, 4557, 35021, 25314, 44230, 93561, 29823, 72899, 84238, 4481, 46369};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 4;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 5034225757056193;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> before = {25616, 56001, 3328, 60113, 26480, 65798, 22664, 7689, 60065, 58369, 12972, 73968, 55614, 35623, 27584, 17174, 76778, 4542, 79519, 77375, 11284, 6910, 31881, 20040, 27516, 3595, 47251, 25038, 41091, 91438, 81640, 1509, 16674, 37301, 73166, 59099, 65611, 62201, 31421, 13772, 14182, 776, 5648, 7826, 5087, 24355};
    vector<int> after = {39726, 75341, 65798, 80540, 53246, 83074, 47173, 85908, 85905, 90449, 67159, 92161, 94362, 54022, 79140, 50922, 86915, 44006, 82063, 91167, 97191, 33880, 75926, 69016, 35319, 42081, 93887, 54859, 54269, 99195, 87419, 9502, 65486, 94462, 95941, 73235, 76932, 67798, 88608, 39527, 30627, 28217, 69931, 29873, 23151, 89931};
    vector<int> houseCost = {2324, 50939, 57514, 35556, 59987, 92585, 36309, 18159, 77948, 57811, 12249, 31387, 36744, 36418, 32553, 60587, 40582, 67311, 1547, 21038, 45585, 41505, 26098, 18854, 29078, 29075, 49156, 86275, 3410, 92107, 98996, 92102, 13296, 52771, 8009, 94686, 74894, 3044, 34516, 79692, 2201, 44805, 14011, 6945, 22891, 9519};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 3;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 3477311980628512;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> before = {13, 54, 43, 34, 17, 46, 64, 79, 1, 25, 26, 27, 67, 69, 23, 67, 24, 43, 52, 90, 66, 1, 81, 58, 1, 7, 60, 9, 17, 24, 38, 17, 8, 32, 3, 20, 68, 36, 20, 73, 30, 76, 77, 78, 4, 54, 16, 66, 3};
    vector<int> after = {51, 74, 67, 84, 82, 96, 91, 87, 49, 79, 48, 92, 97, 94, 53, 75, 94, 73, 81, 98, 97, 24, 100, 98, 48, 93, 89, 41, 37, 38, 40, 98, 49, 82, 30, 44, 79, 93, 97, 77, 94, 78, 78, 96, 15, 74, 92, 67, 36};
    vector<int> houseCost = {42245, 58858, 40065, 25866, 74159, 41875, 70784, 95148, 7567, 52080, 75067, 64867, 13199, 45883, 93655, 32284, 6445, 16797, 99273, 43867, 85940, 64045, 42325, 50574, 43394, 73524, 85616, 46487, 13347, 86410, 23614, 15974, 54068, 91449, 38484, 45467, 67200, 43513, 55799, 26374, 11557, 15248, 83738, 68970, 28751, 76506, 68545, 51925, 77371};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 22;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 5585746293;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> before = {22, 55, 32, 12, 70, 78, 33, 24, 39, 14, 78, 19, 37, 72, 74, 41, 95, 33, 8, 20, 16, 49, 2, 6, 72, 19, 64, 30, 1, 32, 4, 19, 8, 76, 43, 50, 49, 9, 25, 7, 31, 4, 12, 29, 39, 13};
    vector<int> after = {59, 84, 99, 48, 92, 99, 55, 75, 82, 24, 98, 55, 80, 80, 77, 65, 99, 42, 31, 76, 65, 64, 76, 95, 99, 39, 92, 34, 20, 87, 100, 67, 68, 96, 68, 83, 75, 29, 26, 49, 74, 87, 77, 35, 75, 69};
    vector<int> houseCost = {20846, 77253, 62543, 39196, 76746, 80200, 10009, 99827, 55963, 14072, 20872, 35664, 81823, 45858, 76854, 53686, 95178, 72867, 73772, 83995, 93273, 83013, 81473, 66725, 35518, 70697, 16255, 36485, 27098, 49240, 94173, 74177, 95515, 35503, 92323, 83087, 58885, 53916, 86156, 57777, 88519, 16409, 5439, 45917, 47905, 17622};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 68;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 6140521780;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> before = {52, 32, 39, 11, 62, 2, 20, 34, 10, 58, 5, 9, 4, 47, 23, 4, 51, 32, 5, 1, 18, 41, 21, 1, 60, 51, 28, 51, 34, 27, 18, 2, 36, 38, 75, 42, 7, 51, 37, 1, 21, 35, 23, 50, 53, 3, 67, 23, 22, 35};
    vector<int> after = {82, 63, 51, 92, 100, 48, 57, 52, 64, 62, 56, 55, 53, 58, 54, 18, 73, 87, 69, 47, 100, 92, 80, 51, 69, 80, 94, 88, 83, 87, 57, 60, 37, 67, 96, 81, 39, 62, 57, 31, 90, 56, 36, 83, 73, 38, 97, 53, 48, 68};
    vector<int> houseCost = {78754, 42384, 56102, 59391, 15273, 56979, 48388, 35910, 16948, 93119, 60401, 49351, 59637, 63923, 87508, 43895, 49514, 4760, 87721, 99290, 25414, 25358, 17076, 88485, 23528, 93855, 56752, 39484, 35585, 1450, 51814, 74772, 20721, 45144, 3501, 70545, 69097, 84105, 59822, 38088, 76169, 11784, 44833, 35646, 26882, 47921, 3504, 25285, 54389, 72304};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 17;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 5626603931;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> before = {41, 52, 14, 5, 58, 7, 51, 71, 23, 8, 98, 24, 23, 38, 16, 4, 20, 77, 15, 26, 13, 50, 1, 26, 50, 32, 12, 53, 75, 55, 4, 31, 28, 17, 72, 76, 30, 15, 19, 81, 46, 23, 27, 47, 51, 1, 4, 14, 56};
    vector<int> after = {67, 81, 53, 60, 89, 91, 57, 88, 57, 26, 99, 39, 49, 59, 70, 47, 27, 91, 92, 94, 63, 74, 91, 71, 77, 51, 27, 100, 87, 82, 79, 88, 80, 50, 88, 90, 50, 40, 100, 82, 84, 71, 75, 90, 67, 95, 93, 15, 79};
    vector<int> houseCost = {93017, 32750, 21306, 58504, 32464, 21651, 31725, 59971, 58988, 44764, 83455, 91649, 57982, 84164, 82361, 89142, 63815, 71383, 3572, 64488, 53430, 14324, 37336, 12778, 93805, 72837, 74013, 23841, 22843, 46632, 92494, 9731, 65922, 58825, 62336, 46131, 49042, 16581, 85084, 7525, 65323, 65255, 2526, 85406, 37054, 57069, 61355, 25268, 85964};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 59;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 6035938117;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> before = {27, 9, 10, 4, 16, 16, 32, 23, 11, 68, 73, 19, 4, 22, 28, 26, 14, 68, 31, 28, 3, 27, 66, 41, 18, 32, 32, 39, 12, 47, 20, 3, 63, 48, 14, 45, 33, 5, 8, 44, 2, 27, 37, 18, 6};
    vector<int> after = {75, 54, 22, 50, 53, 27, 40, 67, 69, 93, 99, 54, 57, 53, 74, 26, 32, 99, 85, 67, 17, 79, 86, 79, 90, 75, 40, 68, 98, 55, 84, 31, 85, 73, 74, 72, 70, 6, 34, 91, 82, 65, 52, 24, 91};
    vector<int> houseCost = {49214, 10142, 32143, 73478, 40214, 5318, 96937, 55887, 342, 24566, 60127, 18856, 9379, 70267, 56590, 33275, 81391, 5561, 94594, 68094, 89986, 32221, 20984, 47068, 49357, 34154, 47419, 44813, 6359, 6833, 17449, 88986, 67541, 66961, 86894, 52025, 94921, 91450, 72423, 16628, 76232, 24846, 45886, 43620, 8568};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 6;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 3708133865;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> before = {26, 32, 5, 46, 7, 60, 21, 4, 48, 37, 25, 29, 25, 97, 65, 24, 51, 51, 5, 8, 18, 10, 16, 39, 69, 58, 55, 74, 51, 56, 57, 36, 9, 82, 20, 43, 22, 75, 6, 47, 46, 28, 1, 22, 66, 78, 3, 68, 8};
    vector<int> after = {70, 59, 10, 62, 81, 91, 39, 53, 71, 88, 86, 75, 98, 100, 85, 61, 96, 52, 97, 56, 59, 60, 63, 42, 97, 92, 92, 86, 92, 88, 61, 50, 11, 87, 89, 76, 94, 91, 11, 71, 67, 96, 37, 48, 98, 98, 85, 83, 67};
    vector<int> houseCost = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> g = {"NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 245;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 409894;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> before = {13, 16, 33, 36, 29, 56, 5, 22, 31, 26, 13, 18, 39, 5, 6, 13, 47, 49, 28, 35, 43, 7, 43, 18, 91, 41, 54, 20, 10, 81, 44, 17, 44, 17, 67, 19, 8, 10, 35, 15, 4, 6, 25, 5, 35, 20, 16, 51};
    vector<int> after = {56, 71, 83, 56, 50, 75, 30, 78, 52, 51, 74, 58, 45, 55, 91, 93, 68, 93, 62, 56, 53, 9, 50, 56, 94, 46, 57, 45, 78, 84, 61, 43, 54, 39, 78, 19, 94, 28, 40, 85, 84, 61, 61, 47, 77, 100, 47, 60};
    vector<int> houseCost = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNYNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 5631;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 5338728;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> before = {56, 8, 4, 6, 16, 18, 39, 11, 28, 8, 29, 70, 32, 7, 9, 21, 18, 70, 15, 11, 30, 4, 4, 1, 2, 19, 15, 2, 1, 46, 30, 77, 32, 6, 6, 22, 48, 34, 79, 25, 13, 15, 30, 9, 4, 4, 46};
    vector<int> after = {70, 50, 52, 37, 39, 70, 91, 14, 88, 76, 56, 94, 96, 57, 56, 55, 76, 96, 69, 71, 44, 76, 66, 46, 28, 99, 15, 38, 46, 87, 40, 86, 82, 98, 12, 90, 49, 90, 84, 31, 94, 23, 70, 61, 11, 46, 74};
    vector<int> houseCost = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> g = {"NNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYN", "NNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNYNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNYNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNYNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNYNNNNNNNNNNNYNNNNNYYNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNYNNNNNNYN", "NNNNNNNYNYNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNYNYNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN"};
    int roadCost = 5534;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 574549;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> before = {1, 9, 82, 18, 25, 28, 28, 7, 52, 54, 30, 7, 40, 13, 61, 27, 33, 4, 2, 37, 9, 18, 92, 1, 64, 26, 1, 2, 22, 8, 69, 28, 30, 46, 32, 11, 61, 7, 17, 56, 14, 6, 60, 42, 20, 25, 13, 27, 9, 51};
    vector<int> after = {2, 85, 88, 85, 34, 54, 100, 59, 64, 60, 69, 63, 42, 32, 67, 30, 99, 19, 96, 49, 76, 95, 96, 9, 92, 50, 82, 82, 47, 60, 92, 31, 96, 94, 71, 73, 77, 88, 76, 58, 74, 70, 92, 49, 23, 57, 93, 99, 52, 72};
    vector<int> houseCost = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNYNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNYNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNYNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNYNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNYNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 6693;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 2776467;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> before = {99, 8, 2, 34, 31, 37, 27, 21, 30, 37, 46, 59, 2, 20, 77, 42, 49, 42, 32, 45, 8, 72, 41, 30, 2, 39, 55, 9, 30, 33, 70, 11, 80, 2, 27, 27, 50, 17, 56, 33, 46, 33, 25, 1, 36, 7, 4};
    vector<int> after = {99, 72, 20, 60, 55, 54, 47, 87, 93, 68, 98, 75, 66, 21, 86, 44, 62, 98, 80, 51, 44, 89, 55, 76, 77, 51, 64, 61, 31, 68, 96, 33, 95, 56, 31, 48, 84, 81, 74, 49, 80, 74, 45, 16, 89, 20, 64};
    vector<int> houseCost = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNYNNNN", "NNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN"};
    int roadCost = 3594;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 2798605;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> before = {2, 1, 4, 1, 4, 3, 9, 3, 2, 2, 6, 5, 2, 4, 8, 2, 2, 1, 4, 9, 3, 7, 9, 2, 3, 3, 3, 8, 1, 1, 5, 4, 2, 5, 7, 6, 7, 2, 8, 1, 2, 4, 4, 1, 2, 2, 4, 5, 1, 8};
    vector<int> after = {4, 4, 8, 1, 5, 10, 10, 10, 3, 5, 8, 9, 8, 9, 10, 7, 6, 3, 10, 10, 10, 10, 10, 5, 4, 7, 9, 10, 4, 2, 6, 10, 3, 5, 8, 8, 8, 4, 10, 5, 10, 5, 7, 2, 2, 9, 7, 7, 9, 10};
    vector<int> houseCost = {4, 3, 3, 4, 3, 3, 8, 2, 3, 4, 9, 9, 9, 9, 1, 8, 9, 4, 8, 8, 7, 2, 2, 5, 10, 10, 8, 1, 4, 9, 6, 8, 9, 5, 7, 1, 3, 5, 9, 2, 8, 7, 7, 5, 9, 2, 3, 5, 9, 10};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNYN", "NNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NYNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNYNNNNNNNNNN", "NNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNYNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNYNYNNNNNNNNNYY", "NNNNNNNNNNNNNNNYYNNNYYNYNNNNNNNNNNYNNNNNNNNNNNNYNN", "NNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNYNNNNNNNNNYNNYNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNYNNNYY", "NNNNYNNNNNNNNYNNNNNNNNNNYNNNYNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNN", "YNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNN", "NNNNNNNNNYYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNYNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNN", "NNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNN", "NNNNNNNNYNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYYNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNYNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYYYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNYNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNYNNNNNNNNNYNNNNNNNNNNYNNNNNNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNYNNNNNNNYNNNNNNNNNNNNNNNNNNYNNYNNNYNNNNNN", "NNNYNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNY", "NNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNYNNNNNNNYNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNYNNNNNNYNNNN", "NNNNNNNNNNNNNNYNNYNNNNNNNNNNNNYNYNNNNNNNYNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYYYNNYNN", "NYNNNNNNNNNNNNNYNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNN", "YNNNNNNNNYNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNN"};
    int roadCost = 3;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 18827;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> before = {8, 1, 5, 1, 4, 1, 3, 5, 6, 5, 4, 1, 1, 2, 1, 6, 6, 1, 1, 1, 1, 3, 8, 6, 1, 1, 5, 5, 4, 7, 6, 1, 5, 1, 1, 3, 2, 4, 10, 4, 10, 6, 8, 1, 2, 5, 3};
    vector<int> after = {9, 10, 9, 2, 4, 2, 4, 9, 10, 10, 8, 8, 10, 6, 6, 9, 8, 7, 6, 5, 7, 8, 10, 8, 2, 9, 9, 8, 4, 10, 10, 6, 8, 10, 5, 10, 5, 8, 10, 6, 10, 7, 10, 3, 8, 6, 7};
    vector<int> houseCost = {2, 5, 2, 3, 10, 1, 6, 3, 3, 4, 8, 7, 2, 3, 2, 8, 2, 8, 10, 4, 2, 7, 2, 7, 8, 7, 5, 2, 9, 10, 9, 3, 3, 2, 5, 1, 3, 4, 8, 1, 7, 3, 9, 3, 1, 10, 3};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNYYNNNNNNYYNYNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNYNNNNNYYNNNNNNNNNNNNYYNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNYNNNNNNNN", "NNNNYNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNYNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNYNNNNYNNNNNNYNYNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNY", "NYNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNYNNNYYNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNYN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNYNNYNNNNNNNN", "NNNNNNNNNYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNYNNYYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNYNNNYNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNYNYNN", "NNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NYYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNYN", "NNNNYNYNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNYNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNYNNYYNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNYNYNNNN", "NNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNYNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNN", "YNNNNNYNNNNNNNNNNNNYNYNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNYNNNNNNN", "NNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNYNNYNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNYNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 6;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 17043;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> before = {4, 6, 3, 5, 6, 6, 3, 7, 1, 1, 6, 4, 1, 1, 9, 5, 3, 1, 4, 2, 1, 2, 4, 4, 2, 4, 9, 7, 6, 3, 2, 8, 4, 3, 2, 1, 3, 2, 6, 2, 4, 6, 1, 2, 2, 4};
    vector<int> after = {6, 7, 5, 5, 10, 8, 6, 8, 10, 2, 10, 9, 3, 4, 10, 9, 4, 5, 5, 5, 8, 9, 9, 5, 9, 9, 10, 9, 8, 9, 8, 10, 5, 4, 8, 6, 9, 10, 8, 4, 4, 7, 8, 3, 5, 9};
    vector<int> houseCost = {1, 2, 3, 10, 4, 4, 5, 2, 7, 7, 4, 1, 4, 7, 10, 5, 8, 10, 10, 6, 3, 3, 7, 5, 9, 5, 5, 1, 7, 8, 9, 8, 7, 2, 6, 10, 7, 4, 9, 4, 1, 1, 6, 7, 1, 6};
    vector<string> g = {"NNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYYNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNYNNYNNNYNNNNNNNYNNNNNNYNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNN", "YNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNN", "NNNNNNYNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNYNNNNNYNNYYNNNNNNNYNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 1;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 14407;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> before = {5, 4, 1, 5, 2, 3, 1, 2, 5, 2, 1, 4, 3, 8, 5, 2, 2, 1, 4, 5, 1, 4, 1, 2, 3, 1, 3, 2, 2, 6, 5, 4, 3, 6, 6, 4, 1, 2, 4, 1, 2, 3, 5, 4, 2};
    vector<int> after = {6, 9, 4, 9, 4, 6, 10, 3, 10, 7, 7, 10, 8, 10, 5, 5, 6, 6, 6, 10, 10, 8, 4, 4, 7, 4, 4, 7, 6, 6, 9, 10, 7, 9, 7, 8, 9, 10, 10, 6, 3, 4, 5, 10, 8};
    vector<int> houseCost = {9, 5, 3, 2, 3, 3, 10, 4, 9, 1, 8, 4, 10, 8, 10, 3, 6, 10, 4, 7, 2, 9, 4, 8, 8, 3, 2, 2, 5, 1, 7, 8, 2, 8, 8, 9, 5, 4, 4, 7, 7, 7, 1, 1, 6};
    vector<string> g = {"NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYYNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNY", "NNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNYNYNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNYNNYYNYNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNYNNYNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNYNNNNNNNNNYNYNNNYNNNNNYNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNYNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNYYNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNYYNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNN", "NYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNYNYNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNYNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNN", "NNNNNYNYNYNNNYNNNNNYNNNNNNNNNNNNNNYNNNNYNYNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYN", "NNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNYNNNNNNNNNNYNN", "NNNNNNNYNNNNYNNNYNNNNNNNNNNNNNYNYNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNY", "NNNYNNNNNYNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNYYNN", "NNNNNNNNNNNNYYNNNNNNNNNYNNNYYNNNNNNNNNNNNYNNN", "NNNYNNNYNNYNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NYNNNNNNNNNNNNYNNNYNYNNNNNNNNNNNNNNYNNNNNNNNN", "NYNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNYNNNNNNNYNNNNYNNNNNNNNNNNNNYNN", "NNNNNNNNYYNYNYNNNNNYYNNNNNNYNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNYNNYNNNNNNNNNYNNNNYYNNNNNYNNYN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNN", "NNYNNNNNYNNNNNNNNNNYYNNNNNNNNNNNYNNNNNNNNNNNN"};
    int roadCost = 3;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 19988;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> before = {6, 1, 2, 5, 5, 8, 4, 2, 2, 3, 2, 7, 3, 1, 3, 7, 1, 7, 2, 6, 3, 3, 1, 8, 4, 5, 4, 4, 7, 5, 3, 2, 6, 5, 2, 5, 2, 1, 1, 3, 9, 1, 6, 1, 6, 3, 2, 3, 9, 5};
    vector<int> after = {9, 7, 10, 7, 6, 10, 6, 9, 7, 5, 4, 8, 9, 7, 3, 9, 8, 7, 7, 7, 4, 5, 5, 8, 10, 6, 5, 7, 9, 6, 9, 7, 6, 6, 7, 8, 4, 8, 8, 9, 10, 2, 10, 4, 7, 6, 8, 9, 10, 8};
    vector<int> houseCost = {1, 6, 8, 6, 1, 3, 1, 7, 10, 9, 1, 2, 3, 4, 4, 5, 2, 9, 2, 2, 3, 10, 4, 3, 2, 1, 1, 1, 9, 1, 9, 3, 6, 8, 4, 8, 7, 6, 7, 7, 6, 2, 8, 3, 9, 8, 3, 9, 2, 7};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNYNYNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNYNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNYNNNNYNNN", "NNNYNNNNNNNNNNNYNNNYNNYYNNNNNYNNYNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNYNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNYN", "NNYNNNNNNNYNNNNNYNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNYNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNYN", "NNNNNNNYNNNYNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NYYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNN", "NNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNYNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNYNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 1;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 14259;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> before = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> after = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> houseCost = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<string> g = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int roadCost = 100000;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 1249999749877500000;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> before = {8, 1, 10, 1, 9, 8, 1, 2, 1, 7, 4, 1, 8, 1, 9, 6, 2, 10, 8, 8, 1, 1, 6, 10, 7, 4, 10, 2, 1, 3, 10, 2, 8, 10, 4, 4, 1, 8, 10, 7, 6, 5, 6, 8, 8, 8, 5, 3, 4, 7};
    vector<int> after = {99995, 99994, 99991, 99996, 99994, 99990, 99994, 99994, 99994, 99992, 99990, 99993, 99995, 99991, 99995, 99995, 99990, 99994, 99997, 99994, 100000, 99997, 99998, 99994, 99997, 99998, 99995, 99997, 99996, 99992, 99997, 99996, 99993, 99995, 99992, 99992, 99998, 99994, 99994, 99991, 99996, 99999, 99994, 99990, 100000, 99998, 99994, 99997, 99998, 99994};
    vector<int> houseCost = {99996, 99999, 99993, 100000, 99997, 99992, 99997, 99999, 99998, 99996, 99995, 99997, 99995, 99997, 99994, 99997, 99992, 99993, 99995, 99990, 99999, 99996, 99996, 99992, 99996, 99991, 99994, 100000, 99995, 99993, 99990, 99994, 99995, 99998, 99992, 99991, 99991, 99992, 99996, 99997, 99996, 99994, 99992, 99999, 100000, 100000, 99994, 99991, 99991, 99991};
    vector<string> g = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int roadCost = 100000;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 1249782771297379408;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> before = {10, 6, 6, 1, 9, 2, 7, 10, 2, 4, 5, 5, 7, 5, 8, 1, 6, 4, 1, 2, 3, 3, 9, 7, 4, 1, 7, 3, 6, 9, 5, 1, 4, 5, 6, 8, 5, 2, 7, 8, 8, 4, 3, 3, 9, 6, 9, 6, 7, 1};
    vector<int> after = {99990, 99993, 99996, 99990, 99993, 99998, 99996, 99994, 99993, 99990, 99995, 99994, 99997, 99998, 99997, 99991, 99997, 99998, 99997, 99999, 99995, 99991, 99993, 99993, 99994, 99995, 99998, 99997, 99995, 100000, 100000, 99993, 99994, 99991, 99991, 99999, 99991, 99994, 99996, 99993, 99996, 99990, 99992, 100000, 99998, 99993, 99996, 99998, 99998, 99995};
    vector<int> houseCost = {99992, 100000, 99996, 99996, 99993, 99990, 99997, 99998, 99992, 99998, 99995, 99995, 99997, 99991, 99996, 99997, 99991, 99993, 99994, 99991, 100000, 99994, 99999, 99991, 100000, 100000, 99999, 99995, 99998, 99995, 99991, 99996, 99994, 99995, 99994, 99999, 99993, 99992, 99997, 99992, 99994, 99999, 99990, 99991, 99994, 99999, 99992, 99994, 99996, 99995};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 1000;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 73984580900940007;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> before = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> after = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 65453, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 99999, 100000, 99998, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 72, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 44445, 100000, 100000, 100000, 100000, 100000, 100000, 99995, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> houseCost = {100000, 100000, 100000, 536, 100000, 100000, 100000, 88, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 99999, 100000, 99998, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 72, 100000, 100000, 100000, 5245, 100000, 100000, 100000, 100000, 44445, 100000, 100000, 100000, 100000, 100000, 100000, 99995, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<string> g = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 99999;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 23573111259399961;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> before = {664, 652, 707, 183, 559, 605, 484, 873, 506, 369, 514, 105, 80, 208, 790, 329, 384, 635, 255, 547, 727, 994, 478, 558, 28, 791, 175, 690, 554, 895, 275, 574, 361, 207, 762, 829, 282, 792, 174, 286, 446, 833, 480, 518, 65, 940, 41, 993, 677, 498};
    vector<int> after = {667, 652, 707, 183, 559, 605, 485, 873, 506, 369, 514, 105, 84, 208, 790, 329, 397, 635, 255, 549, 727, 994, 479, 558, 28, 792, 175, 690, 554, 895, 275, 574, 361, 217, 762, 829, 282, 792, 174, 286, 446, 833, 481, 518, 65, 940, 41, 993, 677, 498};
    vector<int> houseCost = {857, 295, 563, 543, 218, 997, 470, 15, 383, 567, 811, 341, 477, 275, 331, 681, 223, 204, 675, 165, 29, 151, 440, 855, 850, 849, 158, 17, 403, 145, 866, 778, 900, 731, 79, 997, 525, 745, 82, 990, 239, 788, 496, 803, 426, 929, 935, 865, 39, 877};
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int roadCost = 1234;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 39521194;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> before = {1, 20, 100000};
    vector<int> after = {50001, 20, 100000};
    vector<int> houseCost = {99999, 99999, 99999};
    vector<string> g = {"NNN", "NNN", "NNN"};
    int roadCost = 1;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 125101249075041;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> before = {42, 6335, 19170, 11479, 26963, 5706, 23282, 9962, 2996, 4828, 2392, 3903, 293, 17422, 19719, 5448, 14772, 1870, 25668, 17036, 28704, 1323, 17674, 15142, 28254, 25548, 2663, 20038, 8724, 27530, 12317, 22191, 289, 9041, 19265, 27447, 15891, 24371, 15007, 24394, 19630, 24085, 18757, 4967, 13932};
    vector<int> after = {18510, 32836, 34895, 40838, 51428, 33852, 40110, 10454, 14939, 10265, 16997, 4057, 12676, 36139, 39615, 27175, 26311, 21783, 51968, 26931, 52516, 1657, 22339, 22854, 35123, 53193, 5421, 32898, 18466, 28309, 15353, 24034, 396, 17984, 41914, 51253, 22621, 39722, 16109, 27943, 32254, 44040, 30598, 12344, 40241};
    vector<int> houseCost = {24846, 61397, 67802, 58318, 50073, 15432, 12658, 18663, 30099, 58333, 41948, 33323, 69005, 62412, 19332, 27520, 60672, 33067, 41623, 38052, 37545, 22406, 37250, 73903, 46993, 31461, 47574, 56665, 35566, 47619, 44013, 38402, 41133, 22493, 57005, 26217, 29084, 74745, 38880, 37186, 46441, 65762, 43264, 40556, 52635};
    vector<string> g = {"NNNNYNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN"};
    int roadCost = 99999;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 736904563786047;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> before = {10, 10, 1, 1};
    vector<int> after = {10, 10, 11, 11};
    vector<int> houseCost = {1, 1, 1, 1};
    vector<string> g = {"NNYN", "NNNY", "YNNN", "NYNN"};
    int roadCost = 100000;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 200430;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> before = {1, 1};
    vector<int> after = {2, 2};
    vector<int> houseCost = {1, 1};
    vector<string> g = {"NY", "YN"};
    int roadCost = 1;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> before = {3, 4};
    vector<int> after = {4, 5};
    vector<int> houseCost = {10, 20};
    vector<string> g = {"NY", "YN"};
    int roadCost = 100;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 220;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> before = {2, 5, 5};
    vector<int> after = {1000, 5, 5};
    vector<int> houseCost = {100, 100, 100};
    vector<string> g = {"NNN", "NNN", "NNN"};
    int roadCost = 10;
    BuildersCountry* pObj = new BuildersCountry();
    clock_t start = clock();
    long result = pObj->minCost(before, after, houseCost, g, roadCost);
    clock_t end = clock();
    delete pObj;
    long expected = 50449070;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22627586&rd=13694&pm=10178
********************************************************************************
// Temlpate by Alexus 
#include "iostream" 
#include "stdio.h" 
#include "vector" 
#include "string" 
#include "algorithm" 
#include "set" 
#include "map" 
#include "math.h" 
using namespace std; 
 
// End of Template 
 
int n; 
long long val[52][52]; 
long long res; 
 
char used[52]; 
long long d[52]; 
 
long long con(int u, int v, vector<int>& bef, vector<int>& after, vector<int>& tobuild, vector<int>& hcost){ 
  long long val1 = (long long)(bef[u]) * tobuild[v] * hcost[v]; 
  val1 += (long long)(after[v]) * tobuild[u] * hcost[u]; 
  long long val2 = (long long)(bef[v]) * tobuild[u] * hcost[u]; 
  val2 += (long long)(after[u]) * tobuild[v] * hcost[v]; 
  return min(val1, val2); 
}  
 
void build_mst(int v){ 
  res += d[v]; 
  used[v] = 1; 
  int i, bi = -1; 
  long long mval = (1LL << 62); 
  for (i=0; i<n; i++){ 
    if (val[v][i] < d[i]){ 
      d[i] = val[v][i]; 
    } 
    if (!used[i] && (d[i] < mval)){ 
      mval = d[i]; 
      bi = i; 
    } 
  } 
  if (bi >= 0) build_mst(bi); 
} 
 
class BuildersCountry{ 
public: 
  long long minCost(vector<int> bef, vector<int> after, vector<int> hcost, vector<string> g, int rcost){ 
    int i, j; 
    vector<int> tobuild; 
    n = bef.size(); 
    for (i=0; i<n; i++){ 
      tobuild.push_back(after[i] - bef[i]); 
        res += ((long long)(tobuild[i]) * (bef[i] + after[i] - 1) / 2) * hcost[i]; 
      d[i] = (1LL << 62); 
    } 
    for (i=0; i<n; i++){ 
      for (j=i+1; j<n; j++){ 
        if (g[i][j] == 'Y'){ 
          val[i][j] = 0; 
          res += con(i, j, bef, after, tobuild, hcost); 
        } 
        else{ 
          val[i][j] = (bef[i] + bef[j]) * (long long)(rcost) + con(i, j, bef, after, tobuild, hcost); 
        } 
        val[j][i] = val[i][j]; 
      } 
    } 
    d[0] = 0; 
    build_mst(0); 
    return res; 
  } 
};

********************************************************************************
*******************************************************************************/