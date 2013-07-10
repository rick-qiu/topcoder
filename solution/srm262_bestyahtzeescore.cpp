/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4797
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

class BestYahtzeeScore {
public:
    int bestScore(string rolls);
};

int BestYahtzeeScore::bestScore(string rolls) {
    int ret;
    return ret;
}


int test0() {
    string rolls = "354621111111111";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
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
    string rolls = "666663213214444";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string rolls = "666111333222555";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string rolls = "566111333222555";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string rolls = "666111555333222";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string rolls = "566111555333222";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string rolls = "652353235164412";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string rolls = "642123416566163";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string rolls = "122364354212453";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string rolls = "234356262414315";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string rolls = "551643562364522";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string rolls = "662112146254615";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string rolls = "554333626161461";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string rolls = "142635155126515";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string rolls = "354161641111434";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string rolls = "211355524631226";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string rolls = "122331562663452";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string rolls = "211351564326565";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string rolls = "241356131451654";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string rolls = "436235364232152";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string rolls = "265241155222313";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string rolls = "113522363523416";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string rolls = "621165364262131";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string rolls = "661432152641433";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string rolls = "441212656511344";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string rolls = "425156462151225";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string rolls = "661523213563112";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string rolls = "361263512613631";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string rolls = "142652614564164";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string rolls = "525362311651213";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string rolls = "144165526421151";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string rolls = "321563233141345";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string rolls = "344623441514333";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string rolls = "615535222334622";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string rolls = "566234636121354";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string rolls = "145534642556131";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string rolls = "465444366222353";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string rolls = "462616344636465";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string rolls = "645312462663533";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string rolls = "213211514343243";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string rolls = "525566164122521";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string rolls = "232544254356114";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string rolls = "322566141534452";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string rolls = "144356243244615";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string rolls = "513214421553254";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string rolls = "155563634314361";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string rolls = "241326356445421";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string rolls = "516231244624551";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string rolls = "344351222564215";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string rolls = "426464366523253";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string rolls = "444416251625162";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string rolls = "112245555465424";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string rolls = "666123123123166";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string rolls = "245265526464431";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string rolls = "114121526421151";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string rolls = "161613526655534";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string rolls = "133662515565242";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string rolls = "122342323232323";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string rolls = "666635554444111";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string rolls = "666655526421151";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string rolls = "133155313561411";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string rolls = "666612351235123";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string rolls = "555564446665555";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string rolls = "555512631125536";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string rolls = "112462534162351";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string rolls = "112231666651223";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string rolls = "233453344433442";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string rolls = "123432323232323";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string rolls = "666612312312312";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string rolls = "666622211545433";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string rolls = "122342233322333";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string rolls = "333355554446661";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string rolls = "122342233326655";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string rolls = "666653333111122";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string rolls = "111123562356235";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string rolls = "222333134223322";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string rolls = "222444455542213";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string rolls = "123561212121212";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string rolls = "235442352354235";
    BestYahtzeeScore* pObj = new BestYahtzeeScore();
    clock_t start = clock();
    int result = pObj->bestScore(rolls);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7502813&rd=7996&pm=4797
********************************************************************************
#include <string>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);++i)
#define FORE(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
 
 
 
struct kol { int a[5]; };
int best=0;
string r;
 
int wyn(kol a) {
   int sum=0;
   int ile[7]; REP(i,7) ile[i]=0;
   REP(i,5) ile[ a.a[i] ]++;
   for (int i=1;i<=6;++i)  if (ile[i]==5) sum >?= 50;
   for (int i=1;i<=6;++i)  if (ile[i]>=4) sum >?= a.a[0]+a.a[1]+a.a[2]+a.a[3]+a.a[4];
   for (int i=1;i<=6;++i) for(int j=1;j<=6;++j) if (ile[i]==2 && ile[j]==3) sum >?= 25;
   if (ile[1] && ile[2] && ile[3] && ile[4]) sum >?= 30;
   if (ile[2] && ile[3] && ile[4] && ile[5]) sum >?= 30;
   if (ile[3] && ile[4] && ile[5] && ile[6]) sum >?= 30;
   if (ile[1] && ile[2] && ile[3] && ile[4] && ile[5]) sum >?= 40;
   if (ile[2] && ile[3] && ile[4] && ile[5] && ile[6]) sum >?= 40;
   return sum;
}
 
void rek(kol a, int skad, int ile) {
   if (ile==0) { best >?= wyn(a); return; }
   REP(ma,1<<5) {
      kol b; REP(i,5) b.a[i]=a.a[i];
      int przes=0;
      REP(i,5) if (ma&(1<<i)) b.a[i]=r[skad+przes++]-'0';
      rek(b,skad+przes,ile-1);
   }
}
 
 
struct BestYahtzeeScore {
int bestScore(string r_) {
   r=r_;
   kol a;
   REP(i,5) a.a[i]=r[i]-'0';
   rek(a,5,2);
   return best;
}
};

********************************************************************************
*******************************************************************************/