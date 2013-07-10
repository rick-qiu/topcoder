/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8729
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

class IngredientProportions {
public:
    vector<int> getMasses(vector<string> proportions);
};

vector<int> IngredientProportions::getMasses(vector<string> proportions) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> proportions = {"#0 and #1 as 6:4"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> proportions = {"#0 and #1 as 9:8", "#1 and #2 as 9:8"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81, 72, 64};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> proportions = {"#4 and #0 as 1:1", "#4 and #1 as 3:1", "#4 and #2 as 5:1", "#4 and #3 as 7:1"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {105, 35, 21, 15, 105};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> proportions = {"#2 and #3 as 6:8", "#0 and #1 as 9:3", "#3 and #0 as 7:5"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {60, 20, 63, 84};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> proportions = {"#0 and #1 as 9:9"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> proportions = {"#1 and #0 as 9:1"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 9};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> proportions = {"#0 and #1 as 6:9", "#1 and #2 as 8:6"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 12, 9};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> proportions = {"#0 and #1 as 1:5", "#5 and #4 as 4:2", "#2 and #1 as 3:3", "#3 and #4 as 4:2", "#1 and #4 as 5:1"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 5, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> proportions = {"#0 and #2 as 5:6", "#2 and #4 as 6:7", "#1 and #3 as 6:8", "#3 and #5 as 8:9", "#3 and #2 as 8:9"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 12, 18, 16, 21, 18};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> proportions = {"#1 and #4 as 1:9", "#0 and #1 as 1:9", "#9 and #6 as 8:3", "#2 and #6 as 2:8", "#5 and #8 as 5:1", "#8 and #7 as 5:1", "#3 and #4 as 1:6", "#9 and #3 as 6:1", "#3 and #5 as 1:7"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {800, 7200, 6075, 10800, 64800, 75600, 24300, 3024, 15120, 64800};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> proportions = {"#3 and #5 as 1:7", "#9 and #6 as 8:3", "#9 and #3 as 6:1", "#1 and #4 as 1:9", "#8 and #7 as 5:1", "#5 and #8 as 5:1", "#0 and #1 as 1:9", "#2 and #6 as 2:8", "#3 and #4 as 1:6"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {800, 7200, 6075, 10800, 64800, 75600, 24300, 3024, 15120, 64800};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> proportions = {"#7 and #1 as 9:1", "#1 and #8 as 9:1", "#7 and #5 as 1:9", "#4 and #2 as 9:1", "#3 and #9 as 9:1", "#6 and #4 as 9:1", "#6 and #0 as 1:9", "#3 and #2 as 1:9", "#9 and #5 as 9:1"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {387420489, 9, 531441, 59049, 4782969, 729, 43046721, 81, 1, 6561};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> proportions = {"#7 and #3 as 7:1", "#1 and #4 as 1:1", "#9 and #5 as 1:8", "#7 and #8 as 1:5", "#5 and #6 as 1:8", "#2 and #9 as 1:7", "#2 and #1 as 5:1", "#8 and #4 as 1:8", "#6 and #0 as 1:5"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3136000, 280, 1400, 1, 280, 78400, 627200, 7, 35, 9800};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> proportions = {"#1 and #9 as 6:6", "#0 and #7 as 2:1", "#8 and #4 as 7:6", "#3 and #7 as 2:5", "#9 and #0 as 5:5", "#1 and #2 as 6:2", "#5 and #6 as 4:5", "#8 and #3 as 3:6", "#4 and #5 as 3:4"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {210, 210, 70, 42, 18, 24, 30, 105, 21, 210};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> proportions = {"#0 and #1 as 9:1", "#1 and #2 as 9:1", "#3 and #2 as 1:9", "#4 and #3 as 1:9", "#4 and #5 as 9:1", "#5 and #6 as 9:1", "#7 and #6 as 1:9", "#7 and #8 as 9:1", "#9 and #8 as 1:9"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {387420489, 43046721, 4782969, 531441, 59049, 6561, 729, 81, 9, 1};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> proportions = {"#1 and #0 as 1:4", "#0 and #2 as 4:2", "#0 and #3 as 4:3", "#0 and #4 as 4:4", "#5 and #0 as 5:4", "#6 and #0 as 6:4", "#0 and #7 as 4:7", "#0 and #8 as 4:8", "#0 and #9 as 4:9"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> proportions = {"#1 and #0 as 1:1", "#0 and #2 as 2:1", "#3 and #0 as 1:3", "#4 and #0 as 1:4", "#0 and #5 as 5:1", "#0 and #6 as 6:1", "#7 and #0 as 1:7", "#0 and #8 as 8:1", "#9 and #0 as 1:9"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2520, 2520, 1260, 840, 630, 504, 420, 360, 315, 280};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> proportions = {"#5 and #9 as 8:5", "#6 and #9 as 9:6", "#3 and #9 as 8:4", "#9 and #4 as 7:7", "#0 and #7 as 4:6", "#1 and #0 as 7:5", "#8 and #0 as 4:8", "#2 and #0 as 8:4", "#2 and #3 as 7:9"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 98, 140, 180, 90, 144, 135, 105, 35, 90};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> proportions = {"#8 and #0 as 4:8", "#1 and #0 as 7:5", "#5 and #9 as 8:5", "#3 and #9 as 8:4", "#2 and #0 as 8:4", "#6 and #9 as 9:6", "#9 and #4 as 7:7", "#2 and #3 as 7:9", "#0 and #7 as 4:6"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 98, 140, 180, 90, 144, 135, 105, 35, 90};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> proportions = {"#9 and #3 as 9:1", "#9 and #1 as 1:8", "#1 and #0 as 1:7", "#0 and #2 as 1:8", "#2 and #4 as 1:9", "#9 and #8 as 1:5", "#6 and #1 as 7:8", "#0 and #5 as 9:4", "#2 and #7 as 5:3"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2520, 360, 20160, 5, 181440, 1120, 315, 12096, 225, 45};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> proportions = {"#6 and #1 as 7:8", "#2 and #4 as 1:9", "#0 and #2 as 1:8", "#0 and #5 as 9:4", "#9 and #8 as 1:5", "#1 and #0 as 1:7", "#9 and #1 as 1:8", "#2 and #7 as 5:3", "#9 and #3 as 9:1"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2520, 360, 20160, 5, 181440, 1120, 315, 12096, 225, 45};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> proportions = {"#1 and #0 as 7:5", "#3 and #2 as 4:9", "#6 and #1 as 7:8", "#3 and #5 as 6:5", "#8 and #9 as 9:7", "#3 and #0 as 5:8", "#7 and #4 as 2:9", "#4 and #9 as 8:3", "#1 and #8 as 5:7"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {194400, 272160, 273375, 121500, 790272, 101250, 238140, 175616, 381024, 296352};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> proportions = {"#3 and #6 as 3:6", "#5 and #3 as 7:5", "#4 and #2 as 4:7", "#1 and #5 as 3:8", "#1 and #7 as 8:9", "#2 and #3 as 8:9", "#8 and #4 as 5:9", "#9 and #3 as 4:1", "#0 and #7 as 1:2"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {107163, 190512, 322560, 362880, 184320, 508032, 725760, 214326, 102400, 1451520};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> proportions = {"#5 and #4 as 8:7", "#1 and #3 as 3:5", "#5 and #6 as 7:1", "#7 and #6 as 8:9", "#4 and #2 as 2:9", "#7 and #0 as 7:2", "#2 and #3 as 4:9"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5120, 750141, 555660, 1250235, 123480, 141120, 20160, 17920};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> proportions = {"#2 and #3 as 6:8", "#0 and #1 as 9:3", "#3 and #0 as 7:5"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {60, 20, 63, 84};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> proportions = {"#0 and #1 as 9:8", "#1 and #2 as 9:8", "#2 and #3 as 9:8", "#3 and #4 as 9:8", "#4 and #5 as 9:8", "#5 and #6 as 9:8", "#6 and #7 as 9:8", "#7 and #8 as 9:8", "#8 and #9 as 9:8"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {387420489, 344373768, 306110016, 272097792, 241864704, 214990848, 191102976, 169869312, 150994944, 134217728};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> proportions = {"#4 and #0 as 1:1", "#4 and #1 as 3:1", "#4 and #2 as 5:1", "#4 and #3 as 7:1"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {105, 35, 21, 15, 105};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> proportions = {"#0 and #1 as 1:2", "#1 and #2 as 2:3", "#2 and #3 as 3:4", "#3 and #4 as 4:5", "#3 and #5 as 5:6", "#5 and #6 as 6:7", "#6 and #7 as 7:8", "#7 and #8 as 8:9", "#9 and #8 as 8:9"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10, 15, 20, 25, 24, 28, 32, 36, 32};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> proportions = {"#0 and #1 as 9:8", "#1 and #2 as 9:9", "#0 and #3 as 9:9", "#3 and #4 as 7:8", "#0 and #5 as 8:9", "#6 and #5 as 5:7", "#5 and #7 as 8:3", "#7 and #8 as 9:9", "#7 and #9 as 8:9"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32256, 28672, 28672, 32256, 36864, 36288, 25920, 13608, 13608, 15309};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> proportions = {"#0 and #1 as 2:3", "#1 and #2 as 3:2"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 2};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> proportions = {"#0 and #1 as 7:9", "#1 and #2 as 2:9", "#2 and #3 as 3:9", "#3 and #4 as 4:9", "#4 and #5 as 5:9", "#4 and #6 as 7:8", "#4 and #7 as 7:9", "#7 and #8 as 8:9", "#9 and #8 as 9:4"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {62720, 80640, 362880, 1088640, 2449440, 4408992, 2799360, 3149280, 3542940, 7971615};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> proportions = {"#0 and #1 as 9:8", "#1 and #2 as 9:8", "#2 and #3 as 9:8", "#3 and #4 as 9:8", "#5 and #6 as 9:8", "#6 and #7 as 9:8", "#7 and #8 as 9:8", "#8 and #9 as 9:8", "#4 and #5 as 9:8"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {387420489, 344373768, 306110016, 272097792, 241864704, 214990848, 191102976, 169869312, 150994944, 134217728};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> proportions = {"#0 and #1 as 8:9", "#1 and #2 as 8:9", "#2 and #3 as 8:9", "#3 and #4 as 8:9", "#4 and #5 as 8:9", "#5 and #6 as 8:9", "#6 and #7 as 8:9", "#7 and #8 as 8:9", "#8 and #9 as 8:9"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {134217728, 150994944, 169869312, 191102976, 214990848, 241864704, 272097792, 306110016, 344373768, 387420489};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> proportions = {"#0 and #2 as 6:8", "#1 and #3 as 9:3", "#2 and #3 as 7:5"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 60, 28, 20};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> proportions = {"#0 and #1 as 8:9", "#1 and #2 as 8:9", "#2 and #3 as 8:9", "#3 and #4 as 8:9", "#4 and #5 as 8:9", "#5 and #6 as 8:9", "#6 and #7 as 8:9", "#7 and #8 as 8:9", "#8 and #9 as 7:9"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {117440512, 132120576, 148635648, 167215104, 188116992, 211631616, 238085568, 267846264, 301327047, 387420489};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> proportions = {"#1 and #2 as 7:9", "#0 and #1 as 1:3"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 21, 27};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> proportions = {"#6 and #3 as 9:7", "#2 and #8 as 6:8", "#1 and #0 as 5:2", "#1 and #5 as 9:1", "#3 and #5 as 9:1", "#2 and #7 as 9:2", "#7 and #4 as 9:2", "#4 and #0 as 9:3"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {252, 630, 15309, 630, 756, 70, 810, 3402, 20412};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> proportions = {"#0 and #1 as 1:9", "#1 and #2 as 1:9", "#2 and #3 as 1:9", "#3 and #4 as 1:9", "#4 and #5 as 1:9", "#5 and #6 as 1:9", "#6 and #7 as 1:9", "#7 and #8 as 1:9", "#8 and #9 as 1:9"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 9, 81, 729, 6561, 59049, 531441, 4782969, 43046721, 387420489};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> proportions = {"#0 and #3 as 1:2", "#1 and #2 as 2:1", "#2 and #3 as 2:1"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 8, 4, 2};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> proportions = {"#0 and #1 as 8:9", "#1 and #2 as 8:9", "#2 and #3 as 8:9", "#3 and #4 as 8:9", "#5 and #6 as 8:9", "#6 and #7 as 8:9", "#7 and #8 as 8:9", "#8 and #9 as 8:9", "#4 and #5 as 8:9"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {134217728, 150994944, 169869312, 191102976, 214990848, 241864704, 272097792, 306110016, 344373768, 387420489};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> proportions = {"#8 and #9 as 2:1", "#0 and #1 as 3:7", "#7 and #6 as 5:2", "#4 and #3 as 7:9", "#5 and #4 as 9:8", "#0 and #8 as 8:3", "#2 and #3 as 6:5", "#9 and #2 as 4:7", "#5 and #6 as 3:9"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18432, 43008, 6048, 5040, 3920, 4410, 13230, 33075, 6912, 3456};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> proportions = {"#0 and #1 as 9:1", "#1 and #2 as 9:1", "#2 and #3 as 9:1", "#3 and #4 as 9:1", "#4 and #5 as 9:1", "#5 and #6 as 9:1", "#6 and #7 as 9:1", "#7 and #8 as 9:1", "#8 and #9 as 9:1"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {387420489, 43046721, 4782969, 531441, 59049, 6561, 729, 81, 9, 1};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> proportions = {"#0 and #2 as 1:2", "#2 and #1 as 2:3", "#1 and #3 as 2:7", "#3 and #4 as 1:2", "#4 and #5 as 2:9"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6, 4, 21, 42, 189};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> proportions = {"#0 and #1 as 9:3", "#9 and #8 as 9:5", "#2 and #3 as 9:7", "#5 and #4 as 9:1", "#6 and #7 as 9:8", "#1 and #8 as 9:8", "#3 and #4 as 9:7", "#1 and #3 as 5:8", "#5 and #7 as 7:8"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {945, 315, 648, 504, 392, 3528, 4536, 4032, 280, 504};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> proportions = {"#0 and #1 as 3:2", "#2 and #1 as 9:7"};
    IngredientProportions* pObj = new IngredientProportions();
    clock_t start = clock();
    vector<int> result = pObj->getMasses(proportions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 14, 18};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=13520&pm=8729
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
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define SIZE(X) ((int)(X.size()))
#define LENGTH(X) ((int)(X.length()))
typedef long long int64;
template<class T> inline T gcd(T a,T b)
  {if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
 
class IngredientProportions
{
public:
  int A[20],B[20],P[20],Q[20];
  vector <int> getMasses(vector <string> vs)
  {
    int n=SIZE(vs)+1;
    for (int i=0;i<n-1;i++)
    {
      string str=vs[i];
      for (int k=0;k<LENGTH(str);k++)
        if (str[k]=='#' || str[k]==':') 
          str[k]=' ';
      istringstream sin(str);
      string s0;
      sin>>A[i]>>s0>>B[i]>>s0>>P[i]>>Q[i];
    }
    for (int i=0;i<n-1;i++) 
    {
      A[n-1+i]=B[i];
      B[n-1+i]=A[i];
      P[n-1+i]=Q[i];
      Q[n-1+i]=P[i];
    }
    vector<int64> R(n,-1);
    R[0]=1;
    while (1)
    {
      bool ok=true;
      for (int i=0;i<n;i++) if (R[i]>=0)
        for (int k=0;k<2*(n-1);k++)
          if (A[k]==i && R[B[k]]<0)
          {
            ok=false;
            int64 rA=R[A[k]]*Q[k];
            int64 rB=P[k];
            int64 d=gcd(rA,rB);
            rA/=d;
            rB/=d;
            for (int v=0;v<n;v++) if (R[v]>=0) R[v]*=rB;
            R[B[k]]=rA;
          }
      if (ok) break;
    }
    int64 d=0;
    for (int i=0;i<n;i++) d=gcd(d,R[i]);
    vector<int> result;
    for (int i=0;i<n;i++) result.push_back((int)(R[i]/d));
    return result;
  }
};

********************************************************************************
*******************************************************************************/