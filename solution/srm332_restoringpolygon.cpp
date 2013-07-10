/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6402
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

class RestoringPolygon {
public:
    int restore(vector<int> x1, vector<int> x2, vector<int> y);
};

int RestoringPolygon::restore(vector<int> x1, vector<int> x2, vector<int> y) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x1 = {1, 2, 3, 1};
    vector<int> x2 = {2, 3, 5, 5};
    vector<int> y = {1, 4, 2, 0};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x1 = {1, 1, 2, 2};
    vector<int> x2 = {3, 3, 4, 4};
    vector<int> y = {0, 2, 1, 3};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x1 = {1};
    vector<int> x2 = {2};
    vector<int> y = {1};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x1 = {0, 0, 0};
    vector<int> x2 = {1000, 1000, 1000};
    vector<int> y = {0, 1, 2};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
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
    vector<int> x1 = {0, 0, 3, 3};
    vector<int> x2 = {1, 1, 4, 4};
    vector<int> y = {0, 1, 2, 3};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x1 = {0, 0};
    vector<int> x2 = {1, 1};
    vector<int> y = {0, 1};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x1 = {0, 0};
    vector<int> x2 = {1, 2};
    vector<int> y = {0, 1};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x1 = {0, 1};
    vector<int> x2 = {1, 2};
    vector<int> y = {0, 1};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x1 = {0, 1};
    vector<int> x2 = {3, 2};
    vector<int> y = {0, 1};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x1 = {0, 2};
    vector<int> x2 = {1, 3};
    vector<int> y = {0, 0};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x1 = {0, 2};
    vector<int> x2 = {1, 3};
    vector<int> y = {0, 1};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x1 = {0, 1, 1, 0};
    vector<int> x2 = {3, 2, 2, 3};
    vector<int> y = {0, 1, 2, 3};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
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
    vector<int> x1 = {0, 1};
    vector<int> x2 = {1, 0};
    vector<int> y = {0, 1};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
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
    vector<int> x1 = {0, 1, 1, 2};
    vector<int> x2 = {1, 0, 2, 1};
    vector<int> y = {0, 4, 2, 3};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x1 = {0, 0, 0, 0};
    vector<int> x2 = {1, 1, 1, 1};
    vector<int> y = {0, 1, 2, 3};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0};
    vector<int> x2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 15};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x1 = {0, 0, 0, 0};
    vector<int> x2 = {1, 3, 2, 1};
    vector<int> y = {0, 1, 2, 3};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
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
    vector<int> x1 = {0, 0, 0, 0};
    vector<int> x2 = {2, 1, 1, 3};
    vector<int> y = {0, 1, 2, 3};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x1 = {1, 3, 2, 1};
    vector<int> x2 = {4, 4, 4, 4};
    vector<int> y = {0, 1, 2, 3};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x1 = {2, 1, 1, 3};
    vector<int> x2 = {4, 4, 4, 4};
    vector<int> y = {0, 1, 2, 3};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x1 = {722};
    vector<int> x2 = {-938};
    vector<int> y = {-454};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x1 = {-836};
    vector<int> x2 = {-149};
    vector<int> y = {-859};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x1 = {-264};
    vector<int> x2 = {550};
    vector<int> y = {396};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x1 = {-549, -549};
    vector<int> x2 = {-968, -968};
    vector<int> y = {-976, -154};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
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
    vector<int> x1 = {-847, -795};
    vector<int> x2 = {-795, -847};
    vector<int> y = {480, -719};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x1 = {-193, 323};
    vector<int> x2 = {323, -193};
    vector<int> y = {595, -519};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
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
    vector<int> x1 = {-180, -180, -726};
    vector<int> x2 = {-423, -726, -423};
    vector<int> y = {360, 810, 585};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x1 = {-399, -399, -399};
    vector<int> x2 = {-90, -90, 432};
    vector<int> y = {-531, 167, -321};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x1 = {-885, -224, -224};
    vector<int> x2 = {-627, 366, 366};
    vector<int> y = {17, -136, 17};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x1 = {-807, -814, -814, -807};
    vector<int> x2 = {-814, -807, -807, -814};
    vector<int> y = {-438, -624, -988, -892};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
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
    vector<int> x1 = {696, -193, -193, 367};
    vector<int> x2 = {367, -276, -276, 696};
    vector<int> y = {-14, 168, -14, 168};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x1 = {-856, 682, -856, -254};
    vector<int> x2 = {872, -107, 682, -856};
    vector<int> y = {-899, 721, 173, 783};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x1 = {-463, -463, 95, 606, 447};
    vector<int> x2 = {606, 29, 29, 447, 606};
    vector<int> y = {734, 884, -563, -563, 884};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x1 = {-70, 666, -70, 693, -583};
    vector<int> x2 = {666, 693, -677, -70, -70};
    vector<int> y = {637, -587, -859, 476, -587};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x1 = {-171, -155, -584, -405, -926};
    vector<int> x2 = {-155, -171, -155, -926, -405};
    vector<int> y = {-147, 316, -658, -147, 316};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x1 = {312, -891, -588, 721, -647, 569};
    vector<int> x2 = {-588, -588, -891, 569, -891, 655};
    vector<int> y = {192, -539, 62, 192, -197, -197};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x1 = {164, 949, 472, 949, 663, -735};
    vector<int> x2 = {472, 472, -735, 663, 720, 210};
    vector<int> y = {423, 992, 544, 423, 544, 992};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x1 = {133, -407, 434, 564, 564, -407};
    vector<int> x2 = {434, 319, -82, 695, 695, -82};
    vector<int> y = {-283, 317, 571, 317, 571, -283};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x1 = {-939, -939, -939, 701, 564, 564, 452};
    vector<int> x2 = {-598, -598, 452, -175, 701, 701, -175};
    vector<int> y = {136, -467, -848, 313, -699, -467, -699};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
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
    vector<int> x1 = {668, 690, 668, 26, 690, -415, 26};
    vector<int> x2 = {-415, 576, -415, 668, 668, 576, 423};
    vector<int> y = {722, 176, 767, 683, -539, -539, 176};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x1 = {-814, 587, 727, 587, 726, 969, 587};
    vector<int> x2 = {587, -778, -778, 969, 727, 727, 727};
    vector<int> y = {-838, -253, -242, -593, -838, -253, -511};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x1 = {-186, -825, -825, -186, -186, -825, -825, -825};
    vector<int> x2 = {-825, -186, -186, -825, -825, -186, -186, -186};
    vector<int> y = {225, -251, -612, 826, 221, -47, -945, 354};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x1 = {478, 478, 478, -478, -473, -478, -473, 336};
    vector<int> x2 = {-478, -473, -473, 939, 336, -473, -447, 939};
    vector<int> y = {912, 119, -635, 933, 456, -177, -800, -177};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x1 = {-511, 304, 688, -384, -401, 624, -401, -511};
    vector<int> x2 = {624, 688, -384, 304, -436, 688, -511, -401};
    vector<int> y = {-236, -583, 58, -920, 58, -920, -583, -920};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x1 = {91, -654, -396, -654, -354, 451, -711, 451, -638};
    vector<int> x2 = {338, -354, 451, 91, -638, -638, -654, 91, -396};
    vector<int> y = {-768, -613, -981, 160, 525, -249, 567, 567, -768};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x1 = {247, -34, 462, 247, -158, -34, 302, -720, 247};
    vector<int> x2 = {-549, -720, 302, 462, 462, 753, 462, -549, 436};
    vector<int> y = {-104, 301, 301, 939, 671, 624, -104, -591, -591};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x1 = {710, -626, 710, -808, 336, 336, 336, -808, 336};
    vector<int> x2 = {-587, -587, -808, -164, -164, -587, -808, -626, -587};
    vector<int> y = {752, -162, 171, 797, 648, -29, -166, 760, 760};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x1 = {739, -286, 821, 219, -286, 219, 821, -286, -632, 821};
    vector<int> x2 = {-383, -632, -383, -286, -632, 739, 739, -632, -286, 739};
    vector<int> y = {205, 789, -966, -137, 304, 272, 303, 998, 272, -285};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x1 = {987, 794, 797, -374, -681, -346, -715, -612, -831, -779};
    vector<int> x2 = {-346, -715, 501, -779, -346, -612, -831, 501, 797, 501};
    vector<int> y = {-757, 415, 30, -345, 30, -829, 613, 656, 518, -192};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x1 = {-181, 275, 275, 326, -297, -297, -297, 275, -181, -386};
    vector<int> x2 = {326, -386, -386, -297, 326, 275, 326, 84, -297, -297};
    vector<int> y = {-139, 665, 845, -943, -389, 757, 920, -543, -543, -139};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x1 = {285, 475, 475, 285, -130, 475, 285, 475, 714, 714, 714};
    vector<int> x2 = {714, 848, -130, -130, 848, 285, -130, 285, 848, 848, 848};
    vector<int> y = {-731, 610, -192, 610, 369, -355, 353, -666, -666, -192, 353};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x1 = {-261, -60, -60, 108, -856, -674, 949, -856, -528, -261, 949};
    vector<int> x2 = {618, -480, 108, 207, 618, -60, 170, 108, -856, -60, -480};
    vector<int> y = {-825, -664, 997, 29, 459, 29, 722, -174, 7, 722, 7};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x1 = {-867, -416, 615, 540, 540, -416, 615, -416, -867, -867, 946};
    vector<int> x2 = {540, 946, 946, 615, 615, -867, 946, -867, -416, 540, 615};
    vector<int> y = {-175, 310, 782, 121, -39, -760, -760, -39, 121, 782, -175};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x1 = {-670, -670, 540, -477, 518, 306, 306, -670, -930, 518, -670, -855};
    vector<int> x2 = {306, 306, -930, 795, 795, -571, -670, 795, -855, 795, -855, -930};
    vector<int> y = {-406, -523, -694, -143, -507, -507, 997, -58, -143, 997, -507, 997};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x1 = {260, 215, 959, 954, -156, 954, -543, -979, -985, -134, -985, -543};
    vector<int> x2 = {-543, 959, -99, -99, 543, -156, -985, -543, -979, -99, -844, -156};
    vector<int> y = {-976, 39, 359, -324, -948, -377, 39, 359, -948, 39, -324, -324};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x1 = {786, -475, -475, -407, -124, 365, -124, -207, 418, 786, 887, 365};
    vector<int> x2 = {365, 365, 786, -207, -407, 418, 365, -124, 786, -573, -207, 418};
    vector<int> y = {-134, 127, 176, -134, 994, 816, 2, 816, 127, 978, -932, 994};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x1 = {-717, 481, -518, -717, -717, -518, 821, 481, 346, 358, 260, 821, -518};
    vector<int> x2 = {-518, 346, 260, -518, 358, 616, 481, 218, 616, 481, 346, 481, 218};
    vector<int> y = {111, -808, 345, -758, 580, 914, 345, 452, -458, 111, 111, 580, -808};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x1 = {455, -18, 296, -680, 296, 133, 133, -467, -467, 201, -44, -306, 296};
    vector<int> x2 = {-467, -44, -776, 201, -467, -776, 142, -149, -149, 142, 201, -18, -149};
    vector<int> y = {130, -503, 421, -230, 290, -598, -882, -427, -882, -427, -565, -68, 996};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x1 = {-394, -473, -195, -290, 871, 751, -283, -426, -394, 871, -394, -290, -726};
    vector<int> x2 = {869, -726, 869, -726, -290, 58, 871, -195, 58, -585, 871, -473, -426};
    vector<int> y = {-206, -147, -629, -629, -147, -196, 314, -196, 570, 113, 885, 314, 570};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x1 = {78, 78, -234, -172, -234, 984, -234, -807, -736, -336, -372, -807, -62, 993};
    vector<int> x2 = {993, -234, 984, -818, 984, 370, -807, 370, 984, 370, -640, -818, -172, 370};
    vector<int> y = {-946, -369, -739, -946, -70, -212, -951, 141, 53, 656, -70, 53, -951, -951};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x1 = {350, 937, -495, 826, 350, -495, 937, -815, -125, 350, 350, 844, 844, -125};
    vector<int> x2 = {844, 534, -125, -282, -815, -282, -495, 844, -815, 107, 826, 534, 937, 107};
    vector<int> y = {169, 547, 169, -230, -651, -217, 601, -61, 547, 547, -217, -651, -217, -217};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x1 = {-444, -847, 618, -487, -582, -808, 1, 838, -808, -582, 838, -582, 838, -847};
    vector<int> x2 = {-779, 504, -808, -65, 838, -487, -582, -444, -847, 349, 227, -779, 618, -779};
    vector<int> y = {-875, 582, 729, 77, 723, 548, 718, 548, -127, -127, 77, 77, 582, 718};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x1 = {19, -397, 30, 150, -966, -397, 332, 332, 589, 332, -61, -61, -292, -397, 589};
    vector<int> x2 = {-966, -292, -61, -966, 332, -42, 30, 589, 100, -966, 100, 19, -966, -966, 19};
    vector<int> y = {-942, 814, -826, -487, -110, 289, 814, 192, -646, 754, 716, -646, -646, -537, 289};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x1 = {-239, -675, -471, 630, -239, 630, 630, -239, 630, -693, 630, -760, 343, -675, 97};
    vector<int> x2 = {-693, 97, 630, -471, -256, 97, -693, -693, 97, 343, 343, -693, -693, -760, 630};
    vector<int> y = {491, 497, 559, 721, 527, 512, 335, 853, 527, 570, 491, 721, 953, 512, 853};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x1 = {361, -563, 791, -138, 361, 168, 791, -563, -266, -563, 657, -138, 506, 927, 927};
    vector<int> x2 = {-266, -617, -266, -266, -617, -266, 927, 168, 927, -138, -563, 927, -617, 506, 693};
    vector<int> y = {-896, -284, -284, 268, 649, -374, 649, -802, 203, 122, -659, -754, -124, -896, -802};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
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
    vector<int> x1 = {-711, -369, -369, -226, -226, -226, -226, -975, 295, 927, -975, -183, -711, -711, 927, -711};
    vector<int> x2 = {295, 927, 927, -648, 927, 927, -369, -183, -369, -70, -711, 161, -648, -975, 409, -648};
    vector<int> y = {-280, -932, 316, 446, -42, 749, 40, 509, -289, 446, 446, 40, -42, -289, 509, 316};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x1 = {908, 670, -190, 570, 908, 251, -271, 908, 70, 570, 920, -190, -190, 905, -555, -713};
    vector<int> x2 = {-271, 570, 905, -713, -190, 956, -713, -950, -713, 908, 908, -271, -950, 670, -271, -555};
    vector<int> y = {972, 941, -270, 818, 683, 125, -705, -736, 176, 176, -418, -949, 125, -949, -270, 683};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x1 = {-400, 450, -661, 209, 938, 450, 209, 547, 547, 938, 938, -661, -400, -400, -661, 547};
    vector<int> x2 = {-661, -661, -927, -400, -661, -400, 199, 450, 450, -400, 547, 450, 209, -510, -510, -510};
    vector<int> y = {747, -567, -117, -936, 386, -477, 747, -117, 747, -133, -936, 633, -204, -117, -133, -331};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x1 = {-18, 611, -236, 102, 90, 90, 611, 611, 976, 670, -236, 611, 611, -18, 670, 611};
    vector<int> x2 = {-236, 670, 102, 90, 976, -18, 976, 612, -236, -18, 102, 976, 976, -236, 611, 612};
    vector<int> y = {-196, -549, 519, 409, 91, -929, 409, 887, -655, -119, -549, -93, 519, 409, -929, -196};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x1 = {922, -830, 267, -733, 244, -733, -831, 752, 706, -800, -800, -991, -831, 276, 922, 922};
    vector<int> x2 = {-800, 276, -991, 649, 207, -991, -733, 267, -831, 244, 267, -830, 922, -830, -800, 706};
    vector<int> y = {348, 859, -987, 930, 540, -256, 540, 540, 424, -67, 53, 930, 904, -654, 191, -59};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x1 = {138, -221, 120, -754, -878, -754, -401, -754, 120, -878, -221, -138, -138, -567, -878, -138};
    vector<int> x2 = {-221, 138, -412, -265, 138, -878, -754, -878, 138, -265, -138, 120, -401, -221, -401, -221};
    vector<int> y = {212, 346, 796, -583, -758, 896, 34, 754, 56, 346, 34, -392, 56, 754, -392, -583};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x1 = {477, 822, 477, -771, 609, 609, 477, 822, 99, 99, -139, -771, 822, -139, -139, 822};
    vector<int> x2 = {609, 609, 803, 99, 477, 99, 609, 803, 477, 822, -771, -139, 803, 99, -771, 609};
    vector<int> y = {514, -104, 384, 384, -31, -829, 86, -31, 728, -427, -427, -829, 514, -104, 86, 728};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x1 = {-237, -78, 375, 602, 370, -954, -242, 375, 370, -101, 375, -510, -954, 370, -237, 740};
    vector<int> x2 = {-101, -242, -242, -587, -242, -242, 370, 602, 602, 740, 740, -78, -242, 602, -587, 375};
    vector<int> y = {268, 553, 663, 819, -773, 777, 304, 553, -31, 303, -721, -721, 268, 268, -31, -773};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x1 = {891, 66, 92, -597, 893, 92, 893, -755, 92, 528, 160, -755, -149, -597, 92, -355};
    vector<int> x2 = {528, -149, 926, 66, 926, -757, 528, -757, -757, 893, 891, 891, 528, 66, 837, -597};
    vector<int> y = {665, 993, 843, 843, -440, 665, -765, 41, 781, 90, 781, -440, 41, -765, 993, 993};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x1 = {-630, 36, -479, 414, 180, 819, -712, 621, 36, 819, -712, 36, -1, -832, -479, -518};
    vector<int> x2 = {-832, -779, 621, 180, -779, -888, 621, 414, -1, -570, 36, 621, 36, 621, -832, -832};
    vector<int> y = {-425, 908, 682, 150, 472, -767, -384, -580, -113, -423, -648, -425, -133, 378, 150, -403};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
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
    vector<int> x1 = {319, 373, 211, 319, 373, -338, -338, 373, -232, -338, 373, 373, -338, 373, 319, 211};
    vector<int> x2 = {211, -338, -338, 373, -102, 373, -102, -102, 373, 211, -338, -232, -232, 319, 211, 319};
    vector<int> y = {438, -428, -693, -326, 829, -963, -866, 8, -906, -326, 73, -111, 812, 196, -248, 812};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x1 = {-1, -1, -939, 581, -837, 142, 581, -837, -939, -496, -1, 581, -496, -496, -496, -869};
    vector<int> x2 = {-614, -837, 581, -869, -826, 581, -869, -614, -614, -837, -826, -826, -1, -134, -1, -826};
    vector<int> y = {-391, -267, -532, -329, 203, -853, -53, 183, 860, -853, 97, 841, 786, 183, 860, 445};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x1 = {-944, -224, -373, -944, -224, -4, 510, 164, -373, -224, 510, -373, -924, -4, -463, -4};
    vector<int> x2 = {164, -53, -53, -62, -4, -924, -944, 510, -924, -463, -463, -463, -944, -944, -224, -62};
    vector<int> y = {-824, -128, 160, -825, -847, -409, 354, -825, -128, 214, 275, -841, -280, -966, 518, 518};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x1 = {252, 379, -274, 656, 619, -65, 379, 379, -929, 252, -929, 379, -274, -337, -337, 656};
    vector<int> x2 = {369, 811, 677, 677, 677, 369, -929, -274, -65, 677, -274, 656, 369, -929, -929, 619};
    vector<int> y = {-40, 7, 8, -75, 297, -75, 297, 101, -40, -701, -701, -40, 7, 8, 7, 101};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x1 = {98, 870, -757, -652, -903, 870, 98, -426, 287, 287, -903, -903, -652, 287, 968, -652};
    vector<int> x2 = {-652, 287, 968, -903, -642, 188, 188, -903, -642, 968, -642, 287, 98, 188, -757, -903};
    vector<int> y = {828, -602, -544, -602, -668, 828, -668, -253, -53, -668, 248, 383, 84, -253, 648, -53};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x1 = {262, -787, -787, 844, -259, 848, 262, 383, -595, -680, 262, 251, -259, 262, 262, 383};
    vector<int> x2 = {-201, -207, -942, 777, 58, 844, 777, 348, 383, -259, 251, 383, -201, -259, 348, 777};
    vector<int> y = {433, -875, -326, 433, -515, 615, 821, 615, -326, 821, -875, 326, 326, 615, -515, -875};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x1 = {833, 434, -593, -582, -582, -582, -1000, -582, -593, 434, -593, 640, 640, -1000, 833, 833};
    vector<int> x2 = {-593, -582, 640, -703, -703, 434, -703, -538, -703, -593, -703, 434, 833, -703, 434, 434};
    vector<int> y = {-719, 283, -587, -98, 92, -786, -586, -364, -786, -586, -364, -98, 283, -587, 92, -364};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x1 = {444, 444, -25, 379, 444, 444, 379, 444, -25, 444, -25, 126, 444, 379, -25, 444};
    vector<int> x2 = {-25, 126, 126, 444, 126, 379, 126, 379, 126, -25, 126, -25, 126, 444, 126, 379};
    vector<int> y = {364, -606, 902, 717, -123, -255, -597, 902, 468, -404, 446, 937, -759, 924, 924, -987};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x1 = {0, 0, 0, 0, 0};
    vector<int> x2 = {3, 4, 3, 3, 4};
    vector<int> y = {1, 2, 3, 4, 5};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x1 = {0, 1, 2};
    vector<int> x2 = {1, 2, 0};
    vector<int> y = {2, 0, 1};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x1 = {0, 1};
    vector<int> x2 = {1, 0};
    vector<int> y = {0, 1};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x1 = {0, 0, 0, 0, 2, 2, 0, 0};
    vector<int> x2 = {4, 2, 2, 4, 10, 10, 1, 1};
    vector<int> y = {0, 1, 4, 10, 2, 3, 6, 7};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x1 = {0, 0, 0, 0};
    vector<int> x2 = {1, 1, 1, 1};
    vector<int> y = {3, 2, 1, 0};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x1 = {0, 1, 2, 0};
    vector<int> x2 = {1, 2, 3, 3};
    vector<int> y = {0, 2, 3, 1};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x1 = {0, 0, 0, 0};
    vector<int> x2 = {3, 2, 2, 3};
    vector<int> y = {0, 1, 2, 3};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x1 = {0, 100, 0, 100};
    vector<int> x2 = {10, 110, 10, 110};
    vector<int> y = {0, 0, 10, 10};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x1 = {0, 0, 100, 100, 150, 150, 30, 30, 130, 130, 170, 180, 160, 160, 210, 210};
    vector<int> x2 = {200, 200, 150, 150, 200, 200, 230, 230, 180, 180, 230, 230, 210, 210, 260, 260};
    vector<int> y = {0, 200, 50, 250, 25, 225, 30, 230, 180, 280, 55, 255, 110, 310, 85, 285};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x1 = {0, 0, 0, 0};
    vector<int> x2 = {100, 50, 50, 100};
    vector<int> y = {1, 2, 3, 4};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x1 = {0, 0, 0, 0};
    vector<int> x2 = {2, 1, 1, 2};
    vector<int> y = {0, 1, 2, 3};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x1 = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    vector<int> x2 = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x1 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> x2 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x1 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> x2 = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x1 = {0, 0};
    vector<int> x2 = {1, 2};
    vector<int> y = {0, 1};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x1 = {-1, 0, 1, 1, 1, 2, 3, 3, 10, 20, 10, 20, 10, 20, 10, 20};
    vector<int> x2 = {4, 3, 3, 2, 2, 3, 4, 4, 2, 3, 2, 3, 2, 3, 2, 3};
    vector<int> y = {4, 2, 1, 3, 5, 6, 0, 7, 100, 101, 102, 103, 104, 105, 106, 107};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x1 = {1, 1, 1, 2};
    vector<int> x2 = {2, 2, 2, 1};
    vector<int> y = {1, 2, 3, 4};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x1 = {-3, 2, 2, 1, 2, -3, 2, -3, 3, 4, 4, 2, 1, 1, -3, -3};
    vector<int> x2 = {1, 1, 4, -3, 4, 1, 3, 1, 4, 5, 5, 4, 2, -3, 1, 4};
    vector<int> y = {4, 5, 4, 2, 2, 1, 0, -1, -1, -2, -3, -4, -5, -4, -2, -8};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x1 = {0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 0};
    vector<int> x2 = {3, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3};
    vector<int> y = {0, 1, 2, 3, 5, 6, 7, 8, 7, 6, 5, 3, 2, 1, 4};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x1 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> x2 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x1 = {0, 0, 0, 0};
    vector<int> x2 = {1, 1, 1, 1};
    vector<int> y = {0, 1, 2, 3};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x1 = {1, 2};
    vector<int> x2 = {3, 1};
    vector<int> y = {2, 3};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x1 = {144, 250, 110, 0, -11, -64, 250, 0, 576, -11, 110, 110, 0, 76, 66};
    vector<int> x2 = {-11, 567, 0, 114, 0, 250, 110, 114, 250, 114, -64, -11, 114, 5, 576};
    vector<int> y = {-6, 1, -987, 4, -114, 11, -114, 1, 0, 8, -2, 0, 88, -8, 6};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x1 = {1, 0, 1, 2, 0};
    vector<int> x2 = {4, 2, 3, 3, 4};
    vector<int> y = {0, 1, 2, 3, 4};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x1 = {1, 0, 0};
    vector<int> x2 = {2, 2, 1};
    vector<int> y = {0, 1, 2};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x1 = {0, 0, 2};
    vector<int> x2 = {2, 4, 4};
    vector<int> y = {0, 2, 4};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x1 = {1, 2, 3};
    vector<int> x2 = {2, 3, 1};
    vector<int> y = {1, 3, 2};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x1 = {1, 2, 2, 1};
    vector<int> x2 = {3, 3, 3, 3};
    vector<int> y = {1, 2, 3, 4};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x1 = {1, 1, 2};
    vector<int> x2 = {2, 3, 3};
    vector<int> y = {1, 2, 3};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x1 = {0, 0, 1, 1, 1, 1};
    vector<int> x2 = {1, 1, 2, 2, 2, 2};
    vector<int> y = {2, 3, 0, 1, 4, 5};
    RestoringPolygon* pObj = new RestoringPolygon();
    clock_t start = clock();
    int result = pObj->restore(x1, x2, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390224&rd=10012&pm=6402
********************************************************************************
#include<vector>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<algorithm>
#include<numeric>
#include<sstream>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
 
using namespace std;
 
typedef long long int64;
typedef vector<int> vi;
#define FOR(i,n) for (int i=0; i<(n); i++)
 
struct RestoringPolygon {
  int p[16];
  int find(int x) { return p[x]==x?x:p[x]=find(p[x]); }
  int restore(vector <int> x1, vector <int> x2, vector <int> y) {
    typedef pair<int,int> p2;
    typedef pair<int,p2> p3;
    vector<p3> t;
    FOR(i,y.size()) if (x1[i]>x2[i]) swap(x1[i],x2[i]);
    FOR(i,y.size()) t.push_back(p3(y[i],p2(x1[i],x2[i])));
    sort(t.begin(),t.end());
    int ans=0,first=0;
    for (int take=1; take<(1<<t.size()); take++) {
      bool dead1[16]={},dead2[16]={},taken[16]={};
      int cnt=0;
      FOR(i,t.size()) if (take&1<<i) taken[i]=true;
      FOR(i,t.size()) p[i]=i;
      FOR(i,t.size()) if (taken[i]) {
        if (!dead1[i]) {
          for (int j=i+1; j<t.size(); j++) if (taken[j])
            if (t[j].second.first==t[i].second.first) {
              dead1[j]=dead1[i]=true;
              p[find(j)]=find(i);
              break;
            } else if (t[j].second.second==t[i].second.first) {
              dead2[j]=dead1[i]=true;
              p[find(j)]=find(i);
              break;
            } else if (t[j].second.first<=t[i].second.first && t[i].second.first<=t[j].second.second) goto next;
          if (!dead1[i]) goto next;
        }
        if (!dead2[i]) {
          for (int j=i+1; j<t.size(); j++) if (taken[j])
            if (t[j].second.first==t[i].second.second) {
              dead1[j]=dead2[i]=true;
              p[find(j)]=find(i);
              break;
            } else if (t[j].second.second==t[i].second.second) {
              dead2[j]=dead2[i]=true;
              p[find(j)]=find(i);
              break;
            } else if (t[j].second.first<=t[i].second.second && t[i].second.second<=t[j].second.second) goto next;
          if (!dead2[i]) goto next;
        }                    
      }
//      cout<<take<<endl;
      while (!taken[first]) first++;
      FOR(i,t.size()) if (taken[i] && find(i)!=find(first)) goto next;
      FOR(i,t.size()) cnt+=taken[i];
      ans>?=2*cnt;
next:;      
    }
    return ans;
  }
};
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/