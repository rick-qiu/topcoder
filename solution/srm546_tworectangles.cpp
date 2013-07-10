/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12046
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

class TwoRectangles {
public:
    string describeIntersection(vector<int> A, vector<int> B);
};

string TwoRectangles::describeIntersection(vector<int> A, vector<int> B) {
    string ret;
    return ret;
}


int test0() {
    vector<int> A = {0, 0, 3, 2};
    vector<int> B = {1, 1, 5, 3};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> A = {0, 0, 5, 3};
    vector<int> B = {1, 2, 2, 3};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> A = {1, 1, 6, 2};
    vector<int> B = {3, 2, 5, 4};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> A = {0, 1, 2, 3};
    vector<int> B = {2, 0, 5, 2};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> A = {0, 0, 1, 1};
    vector<int> B = {1, 1, 5, 2};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> A = {1, 1, 2, 2};
    vector<int> B = {3, 1, 4, 2};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> A = {0, 0, 10, 10};
    vector<int> B = {20, 10, 30, 20};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> A = {155, 410, 162, 713};
    vector<int> B = {155, 410, 162, 713};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> A = {28, 70, 441, 125};
    vector<int> B = {28, 70, 441, 554};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> A = {69, 63, 299, 420};
    vector<int> B = {69, 420, 299, 712};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> A = {127, 148, 286, 766};
    vector<int> B = {127, 148, 286, 593};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> A = {177, 89, 245, 480};
    vector<int> B = {177, 318, 245, 480};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> A = {28, 669, 700, 698};
    vector<int> B = {28, 164, 700, 669};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> A = {315, 435, 777, 450};
    vector<int> B = {315, 407, 777, 450};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> A = {381, 187, 494, 499};
    vector<int> B = {381, 703, 494, 954};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> A = {423, 190, 692, 711};
    vector<int> B = {423, 214, 692, 955};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> A = {104, 193, 341, 801};
    vector<int> B = {104, 581, 341, 619};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> A = {90, 682, 618, 686};
    vector<int> B = {90, 202, 618, 920};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> A = {375, 105, 416, 844};
    vector<int> B = {375, 55, 416, 807};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> A = {171, 849, 479, 955};
    vector<int> B = {171, 608, 479, 656};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> A = {200, 362, 324, 543};
    vector<int> B = {200, 362, 389, 543};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> A = {110, 638, 230, 886};
    vector<int> B = {110, 638, 232, 949};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> A = {159, 185, 337, 420};
    vector<int> B = {159, 420, 531, 630};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> A = {307, 229, 694, 424};
    vector<int> B = {307, 229, 732, 384};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> A = {87, 10, 317, 297};
    vector<int> B = {87, 163, 441, 297};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> A = {487, 235, 496, 830};
    vector<int> B = {487, 188, 791, 235};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> A = {110, 362, 428, 433};
    vector<int> B = {110, 215, 472, 433};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> A = {371, 144, 572, 170};
    vector<int> B = {371, 417, 658, 777};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> A = {223, 88, 291, 631};
    vector<int> B = {223, 413, 402, 633};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> A = {19, 72, 485, 778};
    vector<int> B = {19, 478, 600, 497};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> A = {40, 300, 323, 903};
    vector<int> B = {40, 165, 341, 946};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> A = {226, 408, 289, 939};
    vector<int> B = {226, 226, 291, 850};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> A = {516, 369, 657, 615};
    vector<int> B = {516, 193, 813, 331};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> A = {185, 291, 414, 672};
    vector<int> B = {414, 291, 774, 672};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> A = {22, 496, 232, 500};
    vector<int> B = {232, 496, 511, 556};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> A = {384, 191, 504, 421};
    vector<int> B = {504, 421, 671, 509};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> A = {565, 787, 586, 846};
    vector<int> B = {586, 787, 689, 817};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> A = {534, 222, 618, 920};
    vector<int> B = {618, 894, 644, 920};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> A = {424, 308, 599, 521};
    vector<int> B = {599, 279, 846, 308};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> A = {25, 575, 369, 788};
    vector<int> B = {369, 437, 375, 788};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> A = {146, 230, 230, 436};
    vector<int> B = {230, 547, 428, 815};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> A = {13, 522, 545, 899};
    vector<int> B = {545, 827, 589, 921};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> A = {5, 336, 538, 946};
    vector<int> B = {538, 351, 872, 477};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> A = {18, 582, 101, 644};
    vector<int> B = {101, 198, 154, 860};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> A = {66, 368, 237, 754};
    vector<int> B = {237, 43, 398, 487};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> A = {305, 588, 565, 787};
    vector<int> B = {565, 311, 584, 578};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> A = {63, 111, 613, 122};
    vector<int> B = {63, 111, 444, 122};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> A = {77, 41, 755, 133};
    vector<int> B = {77, 41, 272, 553};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> A = {170, 83, 505, 249};
    vector<int> B = {170, 249, 344, 463};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> A = {183, 69, 708, 883};
    vector<int> B = {183, 69, 437, 371};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> A = {298, 4, 797, 247};
    vector<int> B = {298, 114, 387, 247};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> A = {2, 81, 383, 524};
    vector<int> B = {2, 50, 41, 81};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> A = {18, 275, 474, 447};
    vector<int> B = {18, 233, 23, 447};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> A = {200, 440, 267, 811};
    vector<int> B = {200, 891, 207, 960};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> A = {276, 412, 704, 902};
    vector<int> B = {276, 782, 519, 932};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> A = {162, 51, 818, 996};
    vector<int> B = {162, 141, 389, 703};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> A = {0, 27, 352, 132};
    vector<int> B = {0, 7, 5, 633};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> A = {75, 83, 634, 944};
    vector<int> B = {75, 70, 153, 435};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> A = {261, 549, 682, 767};
    vector<int> B = {261, 408, 597, 521};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> A = {35, 47, 642, 61};
    vector<int> B = {227, 47, 642, 61};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> A = {254, 64, 706, 308};
    vector<int> B = {562, 64, 706, 586};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> A = {571, 446, 763, 478};
    vector<int> B = {579, 478, 763, 524};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> A = {180, 20, 826, 570};
    vector<int> B = {450, 20, 826, 342};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> A = {11, 342, 120, 546};
    vector<int> B = {98, 485, 120, 546};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> A = {298, 213, 648, 368};
    vector<int> B = {496, 41, 648, 213};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> A = {180, 473, 786, 506};
    vector<int> B = {730, 466, 786, 506};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> A = {367, 689, 850, 753};
    vector<int> B = {428, 801, 850, 980};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> A = {258, 95, 646, 404};
    vector<int> B = {354, 246, 646, 679};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> A = {566, 254, 867, 910};
    vector<int> B = {788, 681, 867, 890};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> A = {479, 143, 683, 378};
    vector<int> B = {493, 117, 683, 665};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> A = {546, 350, 844, 575};
    vector<int> B = {734, 90, 844, 352};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> A = {6, 847, 329, 885};
    vector<int> B = {21, 25, 329, 335};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> A = {225, 48, 590, 417};
    vector<int> B = {154, 48, 225, 417};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> A = {156, 272, 503, 473};
    vector<int> B = {88, 272, 156, 508};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> A = {593, 153, 849, 171};
    vector<int> B = {15, 171, 593, 214};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> A = {337, 109, 400, 539};
    vector<int> B = {81, 109, 337, 250};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> A = {363, 303, 476, 614};
    vector<int> B = {91, 364, 363, 614};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> A = {41, 344, 313, 563};
    vector<int> B = {12, 231, 41, 344};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> A = {450, 506, 634, 553};
    vector<int> B = {449, 197, 450, 553};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> A = {424, 72, 597, 610};
    vector<int> B = {371, 654, 424, 985};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> A = {362, 229, 372, 728};
    vector<int> B = {299, 626, 362, 845};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> A = {313, 91, 391, 818};
    vector<int> B = {113, 125, 313, 714};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> A = {329, 290, 360, 537};
    vector<int> B = {122, 100, 329, 702};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> A = {239, 274, 604, 818};
    vector<int> B = {49, 253, 239, 559};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> A = {917, 870, 990, 932};
    vector<int> B = {572, 132, 917, 683};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> A = {150, 362, 161, 434};
    vector<int> B = {23, 362, 161, 434};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> A = {629, 107, 632, 418};
    vector<int> B = {154, 107, 632, 842};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> A = {267, 352, 625, 559};
    vector<int> B = {121, 559, 625, 695};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> A = {325, 61, 482, 448};
    vector<int> B = {300, 61, 482, 260};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> A = {397, 90, 591, 342};
    vector<int> B = {378, 160, 591, 342};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> A = {303, 723, 461, 922};
    vector<int> B = {35, 177, 461, 723};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> A = {486, 310, 542, 602};
    vector<int> B = {8, 290, 542, 602};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> A = {140, 236, 315, 433};
    vector<int> B = {8, 467, 315, 587};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> A = {255, 168, 470, 421};
    vector<int> B = {15, 233, 470, 686};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> A = {325, 63, 502, 844};
    vector<int> B = {109, 594, 502, 712};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> A = {598, 751, 708, 889};
    vector<int> B = {411, 488, 708, 970};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> A = {367, 123, 389, 872};
    vector<int> B = {81, 78, 389, 727};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> A = {279, 579, 702, 687};
    vector<int> B = {269, 145, 702, 465};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> A = {441, 84, 480, 605};
    vector<int> B = {564, 84, 867, 605};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> A = {56, 4, 371, 133};
    vector<int> B = {689, 4, 966, 310};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> A = {121, 123, 200, 210};
    vector<int> B = {500, 210, 580, 552};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> A = {69, 94, 203, 776};
    vector<int> B = {260, 94, 706, 526};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> A = {43, 451, 112, 792};
    vector<int> B = {423, 597, 508, 792};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> A = {393, 301, 514, 450};
    vector<int> B = {543, 3, 916, 301};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> A = {231, 410, 287, 739};
    vector<int> B = {446, 408, 826, 739};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> A = {23, 50, 434, 146};
    vector<int> B = {569, 528, 880, 997};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> A = {37, 249, 706, 329};
    vector<int> B = {778, 251, 938, 978};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> A = {13, 163, 136, 744};
    vector<int> B = {218, 444, 759, 622};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> A = {12, 268, 856, 535};
    vector<int> B = {941, 113, 996, 984};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> A = {125, 300, 205, 649};
    vector<int> B = {587, 249, 775, 578};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> A = {1, 892, 49, 970};
    vector<int> B = {119, 138, 940, 860};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> A = {177, 262, 460, 450};
    vector<int> B = {239, 262, 802, 450};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> A = {166, 86, 647, 330};
    vector<int> B = {599, 86, 852, 447};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> A = {59, 295, 873, 346};
    vector<int> B = {805, 346, 946, 527};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> A = {61, 297, 818, 566};
    vector<int> B = {581, 297, 842, 514};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> A = {21, 91, 883, 264};
    vector<int> B = {266, 234, 977, 264};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> A = {208, 69, 430, 329};
    vector<int> B = {233, 39, 637, 69};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> A = {66, 322, 659, 419};
    vector<int> B = {566, 288, 769, 419};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> A = {170, 95, 392, 624};
    vector<int> B = {239, 760, 687, 791};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> A = {224, 225, 288, 428};
    vector<int> B = {238, 355, 924, 819};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> A = {324, 238, 493, 705};
    vector<int> B = {352, 254, 603, 298};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> A = {76, 146, 531, 683};
    vector<int> B = {465, 21, 662, 840};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> A = {113, 415, 681, 823};
    vector<int> B = {155, 184, 997, 441};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> A = {84, 131, 719, 552};
    vector<int> B = {536, 0, 985, 110};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> A = {109, 175, 686, 456};
    vector<int> B = {182, 175, 456, 456};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> A = {376, 193, 856, 354};
    vector<int> B = {515, 193, 694, 755};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> A = {399, 98, 850, 104};
    vector<int> B = {439, 104, 813, 136};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> A = {159, 41, 558, 744};
    vector<int> B = {255, 41, 464, 676};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> A = {58, 36, 977, 615};
    vector<int> B = {442, 235, 467, 615};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> A = {327, 223, 926, 231};
    vector<int> B = {780, 56, 803, 223};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> A = {68, 352, 737, 424};
    vector<int> B = {152, 305, 458, 424};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> A = {213, 18, 701, 32};
    vector<int> B = {402, 139, 662, 340};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> A = {317, 50, 974, 417};
    vector<int> B = {378, 178, 819, 991};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> A = {220, 82, 975, 994};
    vector<int> B = {249, 496, 698, 640};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> A = {660, 658, 974, 719};
    vector<int> B = {862, 424, 969, 899};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> A = {319, 341, 568, 765};
    vector<int> B = {469, 236, 515, 405};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> A = {8, 679, 608, 783};
    vector<int> B = {200, 315, 253, 560};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> A = {119, 155, 263, 386};
    vector<int> B = {61, 155, 370, 386};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> A = {405, 126, 597, 181};
    vector<int> B = {357, 126, 715, 813};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> A = {209, 0, 275, 14};
    vector<int> B = {182, 14, 365, 895};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> A = {290, 144, 525, 417};
    vector<int> B = {70, 144, 719, 353};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> A = {99, 278, 381, 600};
    vector<int> B = {79, 484, 455, 600};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> A = {562, 914, 584, 922};
    vector<int> B = {67, 546, 972, 914};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> A = {398, 472, 860, 709};
    vector<int> B = {265, 62, 997, 709};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> A = {376, 154, 661, 304};
    vector<int> B = {193, 401, 845, 927};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> A = {243, 187, 245, 805};
    vector<int> B = {202, 716, 816, 959};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> A = {398, 560, 606, 869};
    vector<int> B = {343, 702, 616, 767};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> A = {528, 425, 713, 465};
    vector<int> B = {435, 58, 733, 537};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> A = {36, 191, 608, 683};
    vector<int> B = {12, 153, 886, 475};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> A = {406, 601, 507, 805};
    vector<int> B = {165, 34, 822, 459};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> A = {363, 314, 475, 338};
    vector<int> B = {54, 314, 466, 338};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> A = {427, 112, 511, 275};
    vector<int> B = {92, 112, 447, 277};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> A = {295, 149, 711, 219};
    vector<int> B = {17, 219, 399, 370};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> A = {130, 159, 535, 491};
    vector<int> B = {106, 159, 183, 387};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> A = {291, 418, 897, 708};
    vector<int> B = {0, 634, 552, 708};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> A = {692, 417, 983, 732};
    vector<int> B = {400, 281, 869, 417};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> A = {747, 579, 965, 742};
    vector<int> B = {278, 93, 887, 742};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> A = {559, 63, 886, 113};
    vector<int> B = {147, 192, 780, 943};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> A = {305, 254, 685, 722};
    vector<int> B = {220, 625, 323, 742};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> A = {76, 136, 944, 411};
    vector<int> B = {39, 247, 930, 306};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> A = {540, 591, 857, 598};
    vector<int> B = {114, 349, 548, 872};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> A = {397, 664, 566, 935};
    vector<int> B = {139, 551, 437, 716};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> A = {398, 356, 974, 422};
    vector<int> B = {251, 127, 822, 131};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> A = {507, 19, 866, 232};
    vector<int> B = {265, 19, 351, 232};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> A = {622, 81, 693, 244};
    vector<int> B = {187, 81, 270, 373};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> A = {170, 26, 309, 376};
    vector<int> B = {113, 376, 131, 437};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> A = {393, 2, 469, 749};
    vector<int> B = {146, 2, 341, 332};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> A = {513, 71, 515, 269};
    vector<int> B = {180, 136, 431, 269};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> A = {581, 216, 964, 571};
    vector<int> B = {16, 58, 73, 216};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> A = {490, 450, 740, 680};
    vector<int> B = {45, 12, 408, 680};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> A = {520, 2, 679, 714};
    vector<int> B = {45, 806, 303, 911};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> A = {371, 362, 609, 569};
    vector<int> B = {65, 500, 271, 668};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> A = {537, 465, 585, 853};
    vector<int> B = {194, 563, 289, 651};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> A = {794, 223, 947, 294};
    vector<int> B = {264, 188, 377, 391};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> A = {414, 350, 842, 868};
    vector<int> B = {253, 182, 331, 358};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> A = {691, 864, 792, 987};
    vector<int> B = {88, 544, 455, 586};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> A = {0, 0, 3, 2};
    vector<int> B = {1, 1, 5, 3};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> A = {3, 3, 5, 5};
    vector<int> B = {5, 1, 7, 3};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> A = {0, 0, 3, 2};
    vector<int> B = {0, 0, 3, 2};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> A = {0, 0, 1, 1};
    vector<int> B = {1, 1, 5, 2};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> A = {0, 0, 5, 5};
    vector<int> B = {0, 0, 5, 5};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> A = {1, 1, 2, 2};
    vector<int> B = {1, 1, 2, 2};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> A = {0, 101, 101, 102};
    vector<int> B = {0, 0, 1, 100};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> A = {0, 0, 1, 1};
    vector<int> B = {1, 0, 2, 1};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> A = {0, 1, 1, 2};
    vector<int> B = {1, 0, 2, 1};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> A = {0, 0, 2, 2};
    vector<int> B = {1, 0, 2, 1};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {1, 2, 3, 4};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> A = {2, 2, 8, 8};
    vector<int> B = {0, 0, 10, 10};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> A = {0, 0, 2, 2};
    vector<int> B = {0, 0, 2, 2};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> A = {2, 6, 7, 8};
    vector<int> B = {1, 2, 3, 4};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> A = {1, 1, 5, 5};
    vector<int> B = {1, 2, 5, 4};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> A = {2, 2, 3, 3};
    vector<int> B = {1, 3, 2, 4};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> A = {2, 2, 8, 3};
    vector<int> B = {3, 1, 4, 5};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> A = {0, 0, 3, 3};
    vector<int> B = {1, 1, 3, 3};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> A = {0, 0, 1, 1};
    vector<int> B = {50, 1, 51, 2};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> A = {2, 3, 4, 4};
    vector<int> B = {1, 1, 5, 5};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> A = {1, 1, 6, 2};
    vector<int> B = {3, 2, 6, 6};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> A = {1, 1, 2, 2};
    vector<int> B = {3, 1, 4, 2};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> A = {11, 11, 22, 22};
    vector<int> B = {12, 0, 15, 11};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> A = {1, 999, 2, 1000};
    vector<int> B = {2, 999, 3, 1000};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> A = {3, 4, 10, 100};
    vector<int> B = {3, 4, 10, 100};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> A = {0, 1, 1, 3};
    vector<int> B = {1, 0, 2, 1};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> A = {0, 0, 4, 4};
    vector<int> B = {1, 5, 2, 6};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> A = {23, 567, 95, 999};
    vector<int> B = {0, 23, 555, 24};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> A = {0, 0, 1, 1};
    vector<int> B = {2, 1, 5, 3};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> A = {1, 1, 2, 2};
    vector<int> B = {0, 0, 1, 1};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> A = {1, 3, 2, 6};
    vector<int> B = {2, 1, 4, 3};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> A = {100, 100, 200, 200};
    vector<int> B = {0, 200, 100, 300};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> A = {1, 0, 2, 1};
    vector<int> B = {0, 1, 1, 2};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> A = {0, 0, 1, 1};
    vector<int> B = {5, 1, 6, 2};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> A = {2, 2, 3, 3};
    vector<int> B = {1, 1, 4, 4};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> A = {0, 1, 3, 2};
    vector<int> B = {1, 0, 2, 1};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> A = {1, 2, 2, 3};
    vector<int> B = {2, 1, 3, 2};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> A = {0, 0, 3, 3};
    vector<int> B = {3, 4, 6, 6};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> A = {2, 2, 10, 10};
    vector<int> B = {2, 2, 10, 10};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> A = {2, 2, 7, 7};
    vector<int> B = {1, 7, 2, 9};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> A = {1, 1, 2, 2};
    vector<int> B = {2, 0, 3, 1};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> A = {1, 1, 2, 2};
    vector<int> B = {0, 0, 3, 3};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> A = {2, 2, 4, 4};
    vector<int> B = {1, 2, 2, 3};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> A = {0, 0, 1, 1};
    vector<int> B = {0, 0, 1, 1};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> A = {100, 100, 103, 102};
    vector<int> B = {103, 90, 105, 100};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> A = {1, 1, 2, 2};
    vector<int> B = {1, 2, 2, 3};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "segment";
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> A = {2, 1, 3, 2};
    vector<int> B = {1, 2, 2, 3};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> A = {0, 0, 3, 2};
    vector<int> B = {10, 10, 52, 52};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "none";
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> A = {10, 10, 20, 20};
    vector<int> B = {8, 12, 22, 14};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rectangle";
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> A = {0, 3, 1, 4};
    vector<int> B = {1, 2, 2, 3};
    TwoRectangles* pObj = new TwoRectangles();
    clock_t start = clock();
    string result = pObj->describeIntersection(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "point";
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23029225&rd=14738&pm=12046
********************************************************************************
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
 
class TwoRectangles {
public:
  string describeIntersection(vector <int>, vector <int>);
};
struct node
{
  int x1, y1, x2, y2;
  node(){}
  node(int a,int b,int c,int d)
  {
    x1=a; y1=b; x2=c; y2=d;
  }
}a,b;
string TwoRectangles::describeIntersection(vector <int> A, vector <int> B) {
  a=node(A[0],A[1],A[2],A[3]);
  b=node(B[0],B[1],B[2],B[3]);
  int x1,y1,x2,y2;
  x1=max(a.x1,b.x1);
  y1=max(a.y1,b.y1);
  x2=min(a.x2,b.x2);
  y2=min(a.y2,b.y2);
  if(x2>x1 &&y2>y1) return "rectangle";
  if(x2<x1 ||y2<y1) return "none";
  if(x2>x1 || y2>y1) return "segment";
  return "point";
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/