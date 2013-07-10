/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3937
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

class AutoMarket {
public:
    int maxSet(vector<int> cost, vector<int> features, vector<int> fixTimes);
};

int AutoMarket::maxSet(vector<int> cost, vector<int> features, vector<int> fixTimes) {
    int ret;
    return ret;
}


int test0() {
    vector<int> cost = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> features = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> fixTimes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> cost = {10000, 14000, 8000, 12000};
    vector<int> features = {1, 2, 4, 3};
    vector<int> fixTimes = {17, 15, 8, 11};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> cost = {1, 2, 3, 4, 5};
    vector<int> features = {1, 2, 3, 4, 5};
    vector<int> fixTimes = {1, 2, 3, 4, 5};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
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
    vector<int> cost = {9000, 6000, 5000, 5000, 7000};
    vector<int> features = {1, 3, 4, 5, 2};
    vector<int> fixTimes = {10, 6, 6, 5, 9};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cost = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> features = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> fixTimes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> cost = {1000, 1000, 1000, 1000, 2000};
    vector<int> features = {3, 3, 4, 3, 3};
    vector<int> fixTimes = {3, 3, 3, 4, 3};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> cost = {67317, 83190, 45908, 91506, 55612, 42120, 4630, 89946, 90456, 60775, 91710, 58483, 70921, 70623, 87758, 32637, 88187, 84961, 18306, 77693, 6417, 89040, 40347, 67078, 23908, 39843, 44454, 72498, 98135, 58588, 59089, 86672, 9444, 15913};
    vector<int> features = {68, 62, 20, 43, 14, 74, 57, 45, 72, 19, 8, 70, 19, 3, 87, 51, 4, 11, 41, 35, 69, 46, 37, 40, 23, 50, 72, 89, 84, 88, 81, 20, 54, 16};
    vector<int> fixTimes = {4, 24, 84, 52, 84, 43, 3, 35, 71, 49, 87, 3, 41, 12, 4, 13, 62, 17, 88, 82, 59, 84, 19, 80, 92, 47, 81, 81, 19, 66, 3, 68, 18, 49};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cost = {75784, 92108, 57915, 18826, 63063, 41869, 22783, 34691, 33152, 68076, 7401, 52902, 94338, 15904, 83363, 7050, 1332, 48022, 24149, 9801, 50832, 65699, 51503, 86987, 17906, 9188, 38089, 96478, 40795, 12775, 23103, 84822, 82559, 24003, 26143, 89071, 59385, 96250, 63860, 61158, 27455, 29193, 83793, 77918};
    vector<int> features = {64, 63, 31, 2, 53, 26, 49, 69, 40, 7, 14, 30, 21, 32, 48, 89, 29, 45, 44, 81, 24, 27, 74, 83, 76, 31, 11, 66, 72, 78, 3, 91, 19, 52, 100, 95, 64, 11, 16, 40, 44, 49, 37, 55};
    vector<int> fixTimes = {41, 82, 84, 3, 62, 60, 95, 42, 31, 70, 31, 3, 85, 86, 11, 3, 32, 75, 86, 50, 8, 19, 10, 44, 5, 8, 74, 64, 34, 81, 42, 90, 64, 4, 29, 14, 84, 62, 64, 25, 77, 95, 20, 53};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> cost = {71813, 38753, 29345, 31357, 15212, 15297, 62241, 223, 30635, 30866, 8538, 28399, 37947, 35846, 24770, 64448, 52195, 6630, 70451, 84769, 61512, 65478, 72291, 41949, 18005, 84916, 92318, 81834, 91732, 27593, 97887, 34799, 37584, 91763, 1641, 88712, 90238, 42395, 25080};
    vector<int> features = {94, 34, 9, 41, 33, 86, 18, 65, 15, 8, 24, 4, 10, 65, 48, 10, 64, 73, 27, 59, 48, 100, 14, 47, 22, 59, 2, 99, 77, 64, 19, 86, 39, 25, 11, 82, 59, 51, 1};
    vector<int> fixTimes = {33, 41, 33, 77, 52, 77, 10, 90, 62, 36, 76, 1, 51, 9, 31, 28, 56, 8, 54, 80, 70, 13, 80, 54, 32, 91, 50, 2, 96, 4, 47, 19, 55, 65, 41, 45, 48, 8, 48};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> cost = {22922, 28799, 47983, 97981, 8428, 13378, 22429, 68260, 70123, 19629, 28161, 81059, 13042, 67678, 97514, 98310, 8674, 90943, 26269, 40142, 26159, 72139, 3663, 76119, 31443, 82733, 68834, 34737, 26718, 84481, 81887, 81105, 25623, 31949, 66230, 50755, 98445, 35646, 12935, 56119, 75972, 6874, 37555, 1457, 70631, 7413};
    vector<int> features = {46, 52, 60, 70, 91, 3, 74, 38, 17, 86, 57, 99, 15, 33, 94, 47, 88, 88, 38, 21, 70, 17, 57, 100, 41, 35, 87, 41, 80, 89, 54, 52, 3, 95, 85, 71, 69, 31, 40, 99, 29, 65, 82, 82, 86, 5};
    vector<int> fixTimes = {16, 51, 32, 91, 45, 95, 90, 57, 38, 69, 97, 48, 36, 12, 88, 90, 62, 7, 45, 36, 6, 76, 5, 65, 100, 77, 49, 99, 53, 63, 2, 78, 47, 43, 50, 34, 49, 40, 37, 3, 74, 39, 38, 76, 97, 89};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> cost = {85746, 40132, 29036, 32288, 35916, 42601, 71445, 68184, 485, 59745, 8725, 92115, 43629, 85235, 35370, 846, 12133, 35909, 10653, 4184, 44815, 55608, 46539, 24803, 42889, 28902, 10987};
    vector<int> features = {88, 33, 7, 97, 36, 15, 51, 85, 58, 34, 22, 56, 90, 82, 92, 75, 75, 31, 89, 60, 48, 6, 15, 60, 85, 5, 66};
    vector<int> fixTimes = {32, 37, 28, 22, 6, 33, 22, 24, 4, 69, 97, 5, 92, 65, 83, 28, 86, 97, 56, 48, 46, 28, 3, 90, 82, 88, 10};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cost = {29075, 82340, 2186, 89487, 24292, 49823, 88672, 86148, 80383, 29096, 43778, 50067, 1583, 4097, 56462, 94327, 15574, 22788, 17831, 13611, 41859, 21039, 4701, 59906, 72175, 97636, 31740, 9204, 88470, 37488, 40192, 96606, 45295, 63392};
    vector<int> features = {88, 89, 61, 21, 67, 41, 90, 64, 3, 70, 9, 17, 88, 13, 99, 33, 48, 32, 86, 53, 80, 24, 13, 100, 86, 81, 17, 7, 65, 16, 97, 97, 93, 41};
    vector<int> fixTimes = {27, 59, 38, 44, 9, 79, 92, 38, 38, 99, 40, 36, 41, 56, 40, 76, 49, 53, 81, 99, 100, 91, 45, 42, 78, 45, 45, 49, 75, 37, 95, 64, 2, 18};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cost = {74482, 83150, 79639, 41866, 22321, 43703, 76652, 35311, 89889, 23424, 44014, 66536, 95813, 90128, 19679, 40097};
    vector<int> features = {7, 50, 63, 100, 69, 27, 78, 94, 40, 57, 11, 2, 57, 35, 84, 1};
    vector<int> fixTimes = {45, 51, 76, 19, 14, 93, 30, 20, 22, 21, 96, 56, 29, 59, 87, 85};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> cost = {77361, 37366, 21121, 94445, 75139, 50453, 53696, 1751, 56432, 64842, 61250, 72482, 83643, 85798, 79086, 7596, 38321, 84837, 93128, 58286, 44380, 37366, 59305, 25907, 83353, 98045, 28977, 66397, 52084, 10600, 2563, 52406, 41927, 3241, 94955, 46092, 37714, 90817, 98355, 866, 44648, 90545, 70840};
    vector<int> features = {42, 52, 60, 63, 68, 32, 78, 14, 89, 59, 39, 27, 32, 96, 43, 17, 38, 75, 78, 92, 49, 33, 24, 96, 97, 21, 27, 88, 88, 39, 3, 84, 51, 64, 49, 3, 30, 77, 78, 100, 88, 65, 75};
    vector<int> fixTimes = {83, 35, 15, 100, 4, 39, 70, 11, 12, 22, 13, 29, 61, 28, 7, 26, 16, 48, 93, 31, 87, 67, 69, 7, 67, 60, 46, 28, 20, 51, 97, 47, 65, 57, 26, 63, 78, 49, 8, 1, 28, 5, 66};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> cost = {67168, 90304, 20852, 45425, 13801, 77751, 41142, 73153, 54968, 84124, 33126, 78980, 1974, 69085, 58425, 83748, 19934, 55949, 94302, 74757, 63525, 5726, 96612, 65224, 70229, 2688, 78053, 23375, 40282, 8043, 94453, 22927, 13493, 88786, 83106, 7, 99703, 69922, 64055, 75478, 31825, 89961, 97760, 16214, 88272, 61997, 90694};
    vector<int> features = {65, 76, 56, 55, 57, 67, 19, 52, 2, 81, 52, 13, 43, 98, 33, 56, 70, 52, 68, 37, 93, 80, 5, 30, 87, 57, 6, 58, 66, 55, 28, 10, 12, 25, 81, 29, 17, 26, 93, 98, 55, 56, 92, 22, 93, 60, 55};
    vector<int> fixTimes = {11, 8, 69, 66, 27, 50, 76, 99, 29, 17, 54, 64, 35, 74, 27, 75, 97, 56, 3, 3, 35, 29, 41, 17, 67, 86, 43, 44, 50, 72, 67, 54, 77, 96, 81, 42, 87, 8, 45, 71, 90, 61, 45, 60, 80, 64, 5};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> cost = {12931, 90024, 6006, 77488, 87458, 41971, 12800, 29578, 8504, 34314, 19859, 78755, 97748, 4015, 98434, 84915, 15345, 94340, 32116, 96081, 30834, 35411, 15146, 78604, 4252, 79515, 18204, 96284, 37438, 62633, 68213, 25000, 51267, 72786, 92285, 18825, 80990, 80496, 70195, 88632, 58916, 26960, 24608, 14843, 71335, 71530, 53805, 92220, 34893};
    vector<int> features = {72, 78, 97, 37, 6, 26, 71, 21, 52, 36, 49, 89, 4, 93, 84, 89, 43, 24, 81, 59, 72, 35, 32, 47, 12, 45, 15, 20, 43, 93, 30, 25, 29, 80, 53, 4, 77, 94, 43, 27, 33, 25, 51, 100, 13, 56, 80, 78, 14};
    vector<int> fixTimes = {67, 98, 76, 75, 15, 6, 92, 74, 19, 95, 67, 58, 75, 15, 46, 66, 64, 55, 32, 71, 98, 71, 41, 24, 86, 82, 50, 1, 44, 26, 72, 44, 79, 8, 20, 21, 54, 46, 50, 73, 63, 88, 98, 62, 44, 25, 38, 9, 57};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> cost = {83031, 5573, 19608, 22084, 50584, 87865, 11491, 78991, 47717, 89089, 55015, 60829, 3638, 1004, 97577, 87396, 52593, 48218, 72454, 13910, 70338, 27987, 37808, 415, 56098, 80793, 80290, 77032, 96049, 1019, 48053, 59086, 99507, 40457, 90936, 79988, 94849, 66478, 89205};
    vector<int> features = {40, 9, 12, 47, 7, 29, 91, 8, 90, 66, 68, 36, 34, 3, 35, 56, 43, 83, 77, 14, 77, 82, 34, 71, 53, 30, 24, 61, 62, 26, 2, 3, 31, 99, 80, 40, 55, 9, 54};
    vector<int> fixTimes = {26, 89, 8, 28, 45, 20, 66, 40, 73, 10, 82, 21, 43, 95, 90, 91, 72, 4, 47, 43, 51, 97, 57, 55, 77, 23, 46, 96, 11, 91, 69, 57, 34, 34, 54, 26, 45, 7, 34};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> cost = {64688, 54879, 72151, 62349, 24087, 71478, 77341, 41922, 68236, 44477, 9630, 40685, 15437, 65712, 79428, 74669, 88758, 97008, 85533, 75360, 36613, 54792, 631, 91942, 17092, 97041, 93997, 27161, 53606, 57860, 59737, 60125, 1140, 57467, 33488, 87223, 84779, 13546, 35644, 55781, 85149, 93672, 74978, 74161, 49048, 77912};
    vector<int> features = {84, 57, 98, 46, 27, 3, 91, 63, 63, 12, 76, 14, 60, 18, 28, 37, 13, 46, 31, 92, 98, 18, 2, 53, 30, 87, 7, 25, 69, 13, 25, 63, 12, 19, 71, 16, 84, 81, 46, 35, 6, 99, 45, 54, 93, 31};
    vector<int> fixTimes = {89, 93, 53, 89, 70, 54, 24, 79, 38, 31, 15, 94, 55, 20, 9, 100, 60, 88, 46, 11, 63, 72, 51, 5, 66, 17, 20, 22, 100, 93, 62, 89, 43, 30, 78, 73, 37, 90, 59, 40, 13, 72, 99, 94, 66, 84};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cost = {78578, 791, 64907, 20299, 83555, 59251, 33696, 57551, 98307, 74087, 93672, 68689, 86443, 17652, 48408, 50693, 24601, 57803, 72505, 95517, 56444, 79474, 77397, 10130, 92628, 62698, 47886, 22645, 56372, 51685, 19950, 83608, 88752, 27358, 92732, 69609, 83075, 39237, 80621, 10203, 13434, 61612, 14924, 88482, 59018, 13676, 98878, 10683};
    vector<int> features = {3, 24, 5, 1, 1, 23, 77, 53, 77, 27, 70, 65, 94, 99, 13, 82, 4, 95, 31, 18, 31, 50, 89, 27, 6, 16, 79, 90, 88, 40, 50, 31, 41, 60, 17, 61, 57, 98, 92, 59, 27, 62, 34, 15, 41, 98, 46, 80};
    vector<int> fixTimes = {14, 82, 81, 34, 97, 20, 99, 37, 7, 3, 64, 2, 81, 67, 27, 40, 88, 17, 54, 26, 12, 4, 7, 53, 6, 15, 84, 12, 88, 49, 36, 59, 28, 89, 93, 27, 1, 22, 79, 20, 66, 98, 25, 36, 33, 43, 17, 72};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cost = {63658, 90840, 41143, 52942, 35380, 52000, 78366, 8417, 32423, 85279, 82692, 85527, 13805, 95430, 91643, 67318, 93091, 37379, 93014, 83695, 42040, 41329, 60341, 8767, 60712, 39882, 73630};
    vector<int> features = {13, 23, 71, 32, 59, 90, 68, 90, 56, 92, 49, 62, 32, 82, 8, 80, 15, 21, 13, 27, 59, 65, 99, 73, 16, 40, 89};
    vector<int> fixTimes = {83, 9, 14, 72, 94, 18, 16, 96, 64, 10, 33, 81, 23, 72, 56, 96, 9, 37, 96, 67, 39, 73, 15, 85, 23, 34, 33};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cost = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> features = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> fixTimes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cost = {1249, 34084, 15656, 14503, 87881, 40335, 14702, 74326, 62454, 1956, 58495, 42767, 84263, 1674, 93151, 27539, 85517, 55997, 73097, 3868, 19154, 32283, 65087, 94391, 51525, 63863, 3008, 29603, 98516, 88929};
    vector<int> features = {92, 78, 76, 38, 9, 57, 50, 72, 61, 49, 37, 85, 93, 85, 32, 97, 78, 99, 88, 80, 23, 67, 23, 31, 1, 30, 63, 11, 83, 90};
    vector<int> fixTimes = {31, 9, 23, 82, 95, 77, 90, 60, 8, 35, 68, 5, 14, 74, 74, 41, 41, 62, 27, 56, 17, 72, 92, 87, 55, 34, 80, 89, 91, 75};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cost = {1000, 1000, 1000, 1000, 2000};
    vector<int> features = {3, 4, 4, 3, 3};
    vector<int> fixTimes = {3, 2, 3, 4, 3};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cost = {10000, 14000, 8000, 12000};
    vector<int> features = {1, 2, 4, 3};
    vector<int> fixTimes = {17, 15, 8, 11};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> cost = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 33, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 1, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 1, 1};
    vector<int> features = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> fixTimes = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cost = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 632, 64, 12, 647, 23, 543, 7657, 875, 345, 353, 75, 2, 523, 12343};
    vector<int> features = {59, 2, 3, 5, 34, 6, 57, 86, 34, 65, 8, 78, 34, 55, 8, 7, 43, 43, 67, 45, 33, 3, 7, 4, 2};
    vector<int> fixTimes = {56, 34, 35, 57, 23, 12, 54, 50, 24, 54, 3, 6, 12, 21, 53, 54, 32, 5, 4, 24, 54, 2, 7, 4, 2};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> cost = {9000, 6000, 5000, 5000, 7000};
    vector<int> features = {1, 3, 4, 5, 2};
    vector<int> fixTimes = {10, 6, 6, 5, 9};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> cost = {1, 2, 32, 23452, 5, 6, 7, 82345, 9, 10, 11, 13242, 13, 14, 43532, 16, 17, 23, 19, 234};
    vector<int> features = {20, 19, 3, 17, 16, 15, 14, 13, 12, 11, 20, 9, 85, 7, 6, 5, 4, 3, 2, 1};
    vector<int> fixTimes = {1, 2, 3, 5, 5, 9, 8, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> cost = {10};
    vector<int> features = {20};
    vector<int> fixTimes = {30};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> cost = {1000, 1000};
    vector<int> features = {2, 1};
    vector<int> fixTimes = {1, 2};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> cost = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 25, 26, 45, 45, 432, 756, 56, 35, 756, 876, 456, 856, 76, 56, 45, 54, 756, 978, 435, 34, 675, 87, 3, 86, 34, 76, 46, 756, 34, 64};
    vector<int> features = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 7, 5, 3, 23, 65, 7, 9, 43, 65, 87, 23, 65, 76, 23, 45, 34, 78, 34, 12, 76, 45, 45, 23, 87, 67, 56, 45, 42, 65, 23};
    vector<int> fixTimes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 87, 65, 98, 45, 23, 12, 42, 34, 76, 87, 23, 54, 76, 23, 45, 76, 12, 87, 34, 23, 76, 34, 65, 2, 7, 4, 6, 23, 65, 2};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> cost = {10, 7, 6, 8};
    vector<int> features = {3, 5, 4, 2};
    vector<int> fixTimes = {10, 8, 7, 14};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> cost = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> features = {99, 1, 98, 2, 97, 3, 96, 4};
    vector<int> fixTimes = {1, 99, 2, 98, 3, 97, 4, 96};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> cost = {1000, 2000};
    vector<int> features = {2, 2};
    vector<int> fixTimes = {1, 3};
    AutoMarket* pObj = new AutoMarket();
    clock_t start = clock();
    int result = pObj->maxSet(cost, features, fixTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10442944&rd=6532&pm=3937
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
using namespace std; 
 
#define ALL(c) (c).begin(), (c).end() 
#define REP(i,n)  for(int i=0;i<n;i++) 
#define REPD(i,n) for(int i=(n-1);i>=0;i--) 
#define FOR(i,v,n)  for(int i=v;i<n;i++) 
#define FORD(i,v,n) for(int i=(n-1);i>=v;i--) 
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it) 
#define sz(c) (c).size() 
 
typedef vector <int> VI; 
typedef vector <VI> VVI; 
typedef vector <long long> VL; 
typedef vector <VL> VVL; 
typedef vector <double> VD; 
typedef vector <VD> VVD; 
typedef vector <string> VS; 
typedef vector <VS> VVS; 
 
typedef struct { 
  int co,fe,fi; 
} A; 
 
bool cmp(const A& a, const A& b) { 
  if (a.co!=b.co) 
    return a.co<b.co; 
  if (a.fe!=b.fe) 
    return a.fe<b.fe; 
 
  return a.fi<b.fi; 
} 
 
class AutoMarket { 
public:   
    int maxSet(vector <int> cost, vector <int> features, vector <int> fixTimes) { 
        int res=0; 
 
  vector <A> tudo; 
  REP(i,sz(cost)) { 
    A t; 
    t.co=cost[i]; t.fe=features[i]; t.fi=fixTimes[i]; 
    tudo.push_back(t); 
  } 
  sort(ALL(tudo), cmp); 
 
  REP(i,sz(tudo)) 
    cout<<tudo[i].co<<" "<< tudo[i].fe<<tudo[i].fi<<endl; 
 
  int memo[1000]; 
  REP(i,sz(tudo)) { 
    memo[i]=1; 
    REPD(j,i) { 
      if(tudo[j].co<tudo[i].co && 
         tudo[j].fe>tudo[i].fe && 
         tudo[j].fi<tudo[i].fi) 
        memo[i]>?=(memo[j]+1); 
    } 
 
    res>?=memo[i]; 
  } 
 
        return res; 
    } 
 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/