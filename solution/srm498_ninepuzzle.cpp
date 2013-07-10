/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11225
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

class NinePuzzle {
public:
    int getMinimumCost(string init, string goal);
};

int NinePuzzle::getMinimumCost(string init, string goal) {
    int ret;
    return ret;
}


int test0() {
    string init = "BG*YRGRRYR";
    string goal = "BGGY*YRRRR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string init = "GBBB*BGBBG";
    string goal = "RYYY*YRYYR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string init = "RRBR*BRBBB";
    string goal = "BBRB*RBRRR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
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
    string init = "RRRRRRRRR*";
    string goal = "RRRRRRRRR*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string init = "YBB*GRGYGB";
    string goal = "YBB*GRGYGB";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string init = "YYBBGGGRR*";
    string goal = "*RRRBBYYGG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
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
    string init = "RYYGYB*YYY";
    string goal = "BYBB*GBBRB";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string init = "YYYY*YYYYY";
    string goal = "B*GGRRGBRG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string init = "RR*GGGRRRG";
    string goal = "GBGBGBGBG*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
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
    string init = "YYYYYYYYG*";
    string goal = "GYYYYYYY*G";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string init = "R*YGGRBYBR";
    string goal = "R*RGYRYBBR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string init = "RBGRYGYB*G";
    string goal = "*RYGRBGYGB";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string init = "RRRGGGRRR*";
    string goal = "*RRGRRGRRG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string init = "*YRRRRRRRR";
    string goal = "*RYRRRRRRR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string init = "RRRRRRR*RR";
    string goal = "BYGYBGB*YG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string init = "GB*YBBGYGY";
    string goal = "RRRRRRRRR*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string init = "YGGGRYRG*R";
    string goal = "BBBBB*BBBB";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string init = "YRYRYRYR*R";
    string goal = "BBG*BBBBBB";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string init = "Y*YGGYGYYY";
    string goal = "*RRBRRBRRR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string init = "BRRYRR*RRY";
    string goal = "GGGG*GGGGG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string init = "*YYGYYYYBR";
    string goal = "YY*GRYBYYB";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string init = "GBRYGYY*GG";
    string goal = "GGYGGRR*BG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string init = "YG*GRYYBYY";
    string goal = "BBRGBBY*YB";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string init = "GYG*GGRYGB";
    string goal = "BRBYYYYYG*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string init = "GRGYRY*BRR";
    string goal = "RGBRGRYRR*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string init = "*GRBGYRGRR";
    string goal = "GYGBYYRYG*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string init = "GGBGGRG*GY";
    string goal = "RB*YGGBRGG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string init = "YGGR*YGYYB";
    string goal = "BYRBRRGR*R";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string init = "GBGRGBY*GR";
    string goal = "GGRYRBGG*R";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
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
    string init = "Y*GYYYYBRB";
    string goal = "B*BGRYBBGR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string init = "YYYY*GYYRB";
    string goal = "GRGBYYB*YG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string init = "BB*YYYGRGY";
    string goal = "RRR*BYRGRR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string init = "GBGBGY*GRB";
    string goal = "G*BYRRGGGB";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string init = "G*YYBYGYGR";
    string goal = "YBY*YBBRYG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string init = "YYRBRR*GGR";
    string goal = "RBRRGRYRB*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string init = "GBGYGRYRG*";
    string goal = "GGGGRGBYG*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string init = "GGGYGB*RGR";
    string goal = "RYYGB*RYGY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string init = "BR*YBGBRYR";
    string goal = "RBRR*RRGYR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string init = "BGYGRGRYR*";
    string goal = "BBGBBBG*RY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string init = "BYY*GGRBYB";
    string goal = "BRBYRGYBB*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string init = "Y*BRRRGGYG";
    string goal = "GBGGRRRYB*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string init = "BR*GYBBGRG";
    string goal = "RB*BGRYRGG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string init = "BRGRBRRYR*";
    string goal = "RB*GYGGGGG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string init = "YYRYBBY*GR";
    string goal = "YYR*BYGRYR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string init = "RYRBR*GBGB";
    string goal = "GGRRR*YGBR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string init = "*BGGRGGGYB";
    string goal = "YYBYYYRG*Y";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string init = "RYR*BGRGBY";
    string goal = "RRYGYRGR*B";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string init = "YGRY*YRYRB";
    string goal = "GRYGBGYG*Y";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string init = "YBBRGRRRB*";
    string goal = "YYGRRY*YRB";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string init = "RYBYB*RGBR";
    string goal = "BRGRGYGR*R";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
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
    string init = "YBG*RBYGRB";
    string goal = "GGYBYR*BRY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string init = "R*YGBGBYBR";
    string goal = "R*GYGYGBBG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string init = "BBYGRGRY*B";
    string goal = "YY*GBBRYYY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string init = "BRYYB*RGGB";
    string goal = "RRGYGBR*RR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string init = "GBBRYR*BYG";
    string goal = "BBYGYRRRB*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string init = "*RBBYGGRBR";
    string goal = "*GYYRGBRGB";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string init = "YRYBBGY*YB";
    string goal = "RYRBYBG*GG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string init = "YGBGG*BRYY";
    string goal = "RBGYB*RGYG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
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
    string init = "BGRRB*RYBB";
    string goal = "*BRYGGRBGY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string init = "YRRBRBYBG*";
    string goal = "YYBRGGB*GR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string init = "R*GGGGBGGY";
    string goal = "*RGGGGBGGY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string init = "RG*GGGBGGY";
    string goal = "*GRGGGBGGY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string init = "RGG*GGBGGY";
    string goal = "RGGBGG*GGY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string init = "RGGGGGB*GY";
    string goal = "RGGGGG*BGY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string init = "RGGGG*BGGY";
    string goal = "RGGGGYBGG*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string init = "RGGGGGBG*Y";
    string goal = "RGGGGGBGY*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string init = "*BRRYRGRYR";
    string goal = "BGGRB*BGBG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string init = "BBB*BRRBYY";
    string goal = "*GGRYGGGBG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string init = "B*YBBRBBBR";
    string goal = "BG*YYYYYYR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string init = "RRGRRRR*GR";
    string goal = "GBBBBBBBY*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string init = "GRGRRGRR*R";
    string goal = "Y*RBYYBBYB";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string init = "RRRRGGRRG*";
    string goal = "Y*YBRBYBYY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string init = "RYGBYRBY*R";
    string goal = "RGGG*GGGGY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string init = "Y*GBYRBGRR";
    string goal = "YY*YYYYYYY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string init = "GBBGRYR*YB";
    string goal = "G*GGGGRGGG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
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
    string init = "B*BBBRBBBB";
    string goal = "GYR*GGYRBB";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string init = "RRRRRRRRR*";
    string goal = "GGGGGGGGG*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string init = "BBBBGGGGR*";
    string goal = "YYYYGGGGR*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string init = "GBBB*BGBBG";
    string goal = "RYYBBBBY*R";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string init = "GBBB*BGBBG";
    string goal = "RYYY*YRYYR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string init = "RRGGBBBBB*";
    string goal = "RGBBBBBBB*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string init = "BBGYYYYYY*";
    string goal = "BGYYYYYYY*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string init = "BBBGGRRRR*";
    string goal = "BBGGRRRRY*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string init = "RRBBG*GGYY";
    string goal = "YY*GGGGGGG";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
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
    string init = "BBBB*RRRRR";
    string goal = "RRRR*YYYYY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string init = "*BBBBBBBRR";
    string goal = "*BBBBBRRYY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string init = "BG*YRGRRYR";
    string goal = "BBBBBBBBB*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string init = "GYYRRBBBB*";
    string goal = "GYRRBBBBB*";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string init = "RRBBGG*RGR";
    string goal = "GGGYYRR*RY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string init = "RGGG*RGBYY";
    string goal = "*GGGGGGGGR";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string init = "BBBBB*GGGG";
    string goal = "GGGG*YYYYY";
    NinePuzzle* pObj = new NinePuzzle();
    clock_t start = clock();
    int result = pObj->getMinimumCost(init, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22851713&rd=14427&pm=11225
********************************************************************************
#include <iostream> 
#include <vector> 
#include <cmath> 
using namespace std; 
 
 
vector<int> diff(string s) 
{ 
  int r=0, g=0, b=0, y=0; 
  for(int i=0; i<s.size(); i++) 
  { 
    switch(s[i]){ 
    case 'R': 
      r++; 
      break; 
    case 'G': 
      g++; 
      break; 
    case 'B': 
      b++; 
      break; 
    case 'Y': 
      y++; 
      break; 
    } 
     
  } 
  vector<int> k; 
  k.push_back(r); 
  k.push_back(g); 
  k.push_back(b); 
  k.push_back(y); 
  return k; 
} 
class NinePuzzle 
{ 
    public: 
    int getMinimumCost(string init, string goal) 
    { 
      vector<int> a = diff(init), b = diff(goal); 
      int count =0; 
       
      for(int i=0; i<a.size(); i++) 
      { 
        count = count+(int)fabs(a[i]- b[i]); 
      } 
      return count/2; 
    }   
   
};

********************************************************************************
*******************************************************************************/