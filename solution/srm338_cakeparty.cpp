/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7424
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

class CakeParty {
public:
    string makeMove(vector<int> pieces);
};

string CakeParty::makeMove(vector<int> pieces) {
    string ret;
    return ret;
}


int test0() {
    vector<int> pieces = {47};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 47";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> pieces = {3, 3};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> pieces = {3, 5};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 2";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> pieces = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> pieces = {3, 3, 112};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 2 PIECES 110";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> pieces = {3, 3, 1};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> pieces = {4, 7, 4, 7, 4, 7, 4, 7, 47, 47, 47, 47};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 10 PIECES 1";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> pieces = {1, 105, 10, 10};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 100";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> pieces = {1, 205, 196, 196};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 10";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> pieces = {1987654321, 1987654320};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> pieces = {1987654321, 1987654321};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> pieces = {1987654321, 47};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1987654274";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> pieces = {1987654321, 1987654322};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 1";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> pieces = {2, 1, 3};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 2 PIECES 1";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> pieces = {1, 2, 2};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 1";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> pieces = {1, 1, 2, 3, 4, 5, 6, 7, 10, 9, 10, 10, 10};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 10 PIECES 1";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> pieces = {3265236, 3265236, 23214, 23214, 354251352, 986432414, 354251352, 69865443, 69865443, 986432414, 123252, 123251};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 5 PIECES 1";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> pieces = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> pieces = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 1900000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> pieces = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 1900000000, 2000000000, 2000000000, 1900000000, 2000000000, 2000000000, 2000000000, 2000000000};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> pieces = {215215, 215432165, 2142113};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 213290052";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> pieces = {41455, 41455, 35325235};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 2 PIECES 35283781";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> pieces = {41455, 41455, 3535};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> pieces = {32632631, 32632631, 32632631};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> pieces = {1, 1, 2, 3, 4, 5, 6, 7, 10, 9, 10, 10, 1};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 10 PIECES 1";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> pieces = {846940886, 424238336, 846940886, 846940886, 846940886, 178261484, 783368691, 846940886, 273632169, 693442548, 846940886, 846940886, 521595369, 846940886, 846940886, 846940886, 846940886, 846940886, 846940886, 468703136, 846940886, 468693144, 522192191, 213020515, 628175012, 284235351, 846940886, 220663162, 846940886, 846940886, 846940886, 149798316, 846940886, 846940886};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> pieces = {412786091, 137806863, 157334829, 98916222, 286332749, 159874253, 392964763, 275089146, 316043957, 114247415, 347754479, 197729351, 135985792, 238812836, 412786091, 238802843, 296607501};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> pieces = {18512651, 5235269, 11241613, 3357105, 9510051, 18512651, 18512651, 664471, 18512651, 2382520, 18512651, 1980703, 11165885, 18512651};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> pieces = {593209442, 894429690, 27332032, 270744730, 960007301, 194723510, 509827188, 650113416, 631704568, 295172204, 327254587, 269455307, 352406220, 160051529, 112805733, 378409504, 753250977, 449952415, 413219047, 200747797, 157135325, 150122847, 30885628, 271185086, 111537765, 227455254, 951157900, 960007301, 116087765, 155324915, 62261269, 387346492, 841148366, 800274643, 226445258, 11891935, 213975408, 666268828, 210779808, 924653944, 390566500, 645887135, 67216424, 824632236, 637315111, 192241176, 107847245};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 27 PIECES 1";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> pieces = {1395235129, 1782446840, 492067918, 680466997, 496987744, 1782446840, 1782446840, 1782446840, 1782446840, 1782446840, 1782446840, 1172755591, 1782446840, 1012502955, 1782446840, 968338083, 1782446840};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 1";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> pieces = {933120197, 856256159, 517453433, 101829110, 596075557, 402234151, 933120197, 561493621, 436201612, 396473731, 413691116, 933120197, 656959255, 111408143, 469466519, 210288093, 559412925, 540321873, 238962601, 305313263, 498299190, 732827279, 707900974, 247663502, 933120197, 711845895, 4249974, 107147602, 568132807, 539593584, 729619479, 101440716, 437116467, 243791151, 77087305};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> pieces = {349517446, 1856669180, 995706888, 1065103349, 387451660, 1562402337, 1876865542, 1876865542, 1799878207, 382697714, 1876865542, 1876865542, 296864820, 697517722, 74090405, 1876865542, 1876865542, 1876865542, 1876865542, 1876865542, 1876865542, 1876865542, 555996659, 1876865542, 1876865542, 1876865542, 780821397};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 10 PIECES 1";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> pieces = {711655630, 711655630, 711655630, 702992003, 711655630, 337739300, 631950420, 446340714, 203600568, 711655630, 711655630, 700108582};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> pieces = {555986666, 882160380, 310575945, 630668851, 487212532, 105575580, 746912665, 452867622, 486453176, 213801962, 648031327, 366009616, 110613203, 982936785, 114713514, 255789529, 1242608873, 1277849959, 653448037, 1023457754, 1309383304, 1371509336, 1280321649, 410490426, 212251747, 364319530, 1371509336, 403964460, 767066250, 739273304};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 21 PIECES 1";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> pieces = {1415515363, 1415515363, 1415515363, 1415515363, 474613997, 1315209189, 1415515363, 264380081, 1415515363, 1415515363, 1415515363, 1415515363, 1415515363, 1415515363, 1415515363, 1415515363, 1415515363, 31308903, 1415515363, 655858700, 1415515363, 1415515363, 1415515363, 1415515363, 1415515363, 1415515363, 83102292, 1415515363, 12895152, 1415515363, 1415515363, 1415515363, 1415515363, 1415515363, 1415515363, 1415515363, 1415515363, 1415515363, 1415515363, 1415515363, 1415515363, 57060980, 1415515363, 1415515363};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> pieces = {655495368, 1219417971, 622167832, 1219417971, 213684866, 1219417971, 672655341, 400000570, 1219417971, 560754298, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 770388404, 785086271, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1219417971, 1010528947, 1219417971, 1219417971, 1219417971, 207401117, 94800630, 1219417971, 1156541313, 1219417971, 1219417971, 285775549};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 1";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> pieces = {1051858970, 104152275, 826047642, 970925434, 887077889, 873524567, 1541027285, 1745790418, 959372261, 1788024412, 126107206, 1376035218, 1788024412, 471990784, 195204054, 993967638, 38596079, 249746074, 1647149315, 1152645730, 1025533460};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 12 PIECES 1";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> pieces = {394633075, 674418727, 941904063, 1001099438, 66911838, 1001099438, 1001099438, 189568933, 1001099438, 25313743, 1001099438, 967118032, 301439960, 1001099438, 1001099438, 1001099438, 1001099438, 1001099438, 451789144, 1001099438, 203363521, 521035022, 1001099438, 1001099438, 982514600, 1001099438, 904141651, 1001099438, 1001099438};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 10 PIECES 1";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> pieces = {1026403181, 628974581, 786039022, 1047382231, 1047382231, 586235380, 262692686, 290917681, 938051260, 606199760, 435889745, 378469912, 488663951};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 3 PIECES 1";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> pieces = {29787560, 29787560, 29230300, 29787560, 2582170, 29787560, 29787560, 4055002, 29787560, 29787560, 29787560, 29787560, 29787560, 29787560, 29787560, 29787560, 29787560, 29787560, 29787560, 14504385, 29787560, 18436535, 29787560, 29787560, 29787560, 29787560, 27247857, 29787560, 29787560, 29787560, 29787560, 14268120, 29787560, 18323121, 29787560, 29787560, 29787560, 29787560, 29787560, 29787560, 29787560, 29787560, 29787560, 29787560, 29787560, 15660883, 29787560};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> pieces = {1255397090, 1255397090, 1255397090, 310972551, 567304790, 1155722605, 1255397090, 746349251, 1255397090, 1255397090, 659639007, 1255397090, 1255397090, 1255397090, 1255397090, 714880227, 1255397090, 1255397090, 1255397090, 1255397090, 1255397090, 1255397090, 1255397090, 690367771, 1255397090, 565669260};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> pieces = {260092704, 550255196, 550255196, 408578668, 550255196, 550255196, 94307399, 10901064, 550255196, 420471653, 539398526, 168057523, 488371736, 550255196, 181271233, 427112577, 199411899, 550255196, 550255196, 471833971, 18913696, 142050664, 496631346};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 1";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> pieces = {10891071, 207036272, 82619246, 207036272, 181239247, 150398834, 585439, 158919814, 207036272, 152211669, 207036272, 207036272, 207036272, 72085044, 190633904};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 1";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> pieces = {1250801053, 18131821, 670752507, 1417086376, 1417086376, 82173110, 1417086376, 1417086376, 972058110, 661955082, 11671339, 271059427, 1417086376, 258488855, 53245863, 445205754, 101323876, 1417086376, 575490222, 833215351, 1370973814, 1417086376, 873199182, 1240554604, 476152434, 1417086376, 1417086376, 209359416, 831768826, 589052354, 1417086376, 117143929, 1417086376, 1341443182, 1417086376, 25680689, 206294227, 298501963, 1417086376, 1417086376, 395993786, 395191310};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 12 PIECES 1";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> pieces = {219544267, 580508861, 672149932, 67977836, 476564286, 327436141, 305197315, 672149932, 39795971, 500037526, 7238990, 401597641, 61101361, 654097719, 318781079, 672149932, 672149932, 672149932, 384370889, 672149932, 672149932, 46243588, 672149932, 672149932, 672149932, 672149932, 386118808, 184213903, 174471345, 615576727, 591761061, 672149932, 104928549, 340686686, 672149932, 672149932, 566349052, 270754553};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 15 PIECES 1";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> pieces = {846940886, 424238336, 846940886, 846940886, 846940886, 178261484, 783368691, 846940886, 273632169, 846940886, 304089173, 846940886, 521595369, 846940886, 846940886, 846940886, 846940886, 846940886, 846940886, 846940886, 846940886, 108098045, 635723059, 278957289, 846940886, 628175012, 846940886, 846940886, 12543543, 608413785, 846940886, 279712567, 846940886, 846940886};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> pieces = {63624767, 137806863, 58839402, 142075268, 89341895, 184813526, 184813526, 184813526, 154113578, 140231225, 84353896, 184813526, 150763625, 56074878, 80649411, 183476455, 184813526, 41811989, 154953028, 70367462, 180917767, 155213947, 180671698, 136074823};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 11 PIECES 1";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> pieces = {1749708586, 463480571, 226251800, 1749708586, 1749708586, 1749708586, 1330573318, 1749708586, 1749708586, 1749708586, 485560281, 593209442, 894429690, 1749708586, 1749708586, 1749708586, 1749708586, 1633108118, 1749708586, 1469834482, 1610120710, 631704568, 1749708586, 1749708586, 1749708586, 1572276966, 1703964684, 1600028625, 1749708586, 112805733, 1749708586, 1749708586, 1713258271, 1749708586, 1749708586, 1373226341, 1749708586};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> pieces = {150122847, 289710723, 289710723, 289710723, 174043909, 289710723, 289710723, 289710723, 172900898, 289710723, 289710723, 289710723, 289710723, 289710723, 289710723, 289710723, 289710723, 289710723, 289710723, 289710723, 289710723, 289710723, 289710723, 85473574, 289710723, 289710723, 289710723, 289710723, 289710723, 289710723, 80193166, 289710723, 289710723, 289710723, 157340849, 289710723, 289710723, 46375234, 289710723, 289710723, 289710723, 289710723, 289710723, 289710723, 44172545, 289710723, 289710723};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 1";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> pieces = {532680688, 147786316, 532680688, 159259471, 480298491, 31328411, 532680688, 532680688, 479256144, 479822274, 429865627, 532680688, 222346422, 532680688, 532680688, 219867443, 502278612, 532680688, 532680688};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> pieces = {654897343, 654897343, 654897343, 654897343, 654897343, 654897343, 654897343, 654897343, 654897343, 654897343, 654897343, 50281401, 434248627, 654897343, 654897343, 654897343, 488510947, 559412925, 163647391, 654897343, 654897343, 654897343, 654897343, 654897343, 654897343, 654897343, 654897343, 53003638, 149211874, 654897343};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> pieces = {711855894, 549676208, 711855894, 260152960, 711855894, 711855894, 711855894, 711855894, 711855894, 437116467, 711855894, 711855894, 519615911, 711855894, 711855894, 525523221, 711855894, 432957406, 711855894, 711855894, 711855894, 711855894, 711855894, 45550236};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> pieces = {298635210, 62143287, 178032170, 298635210, 296864820, 100247316, 298635210, 141399000, 263739653, 122075823, 220288339, 298635210, 26128718, 231602423, 183550991, 298635210, 195740085, 215000755, 271438648, 298635210, 150835614, 104495423, 215878290, 2811487, 289104510, 298635210, 102838176};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> pieces = {555986666, 882160380, 310575945, 630668851, 487212532, 105575580, 746912665, 1371509336, 1017679568, 201690614, 1371509336, 648031327, 366009616, 110613203, 982936785, 114713514, 1371509336, 1266235190, 1137949909, 777210499, 537009480, 364686249, 1129033334, 1280321649, 410490426, 212251747, 364319530, 484238047, 624549798, 514577662};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 10 PIECES 1";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> pieces = {1750013033, 1750013033, 1750013033, 1750013033, 1750013033, 1750013033, 425245976, 1750013033, 1750013033, 1750013033, 1750013033, 1750013033, 1750013033, 1750013033, 1750013033, 1750013033, 1750013033, 1750013033, 1750013033, 1750013033, 31308903, 1750013033, 655858700, 559301040, 1750013033, 1750013033, 1750013033, 1750013033, 1498617648, 1750013033, 1750013033, 1750013033, 1750013033, 1750013033};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> pieces = {777720505, 341878365, 328298286, 1380181692, 92394651, 1380181692, 1380181692, 1219407972, 12260290, 1380181692, 27210608, 1380181692, 733053145, 507476706, 1380181692, 520371857, 337453827, 399990577, 561508676, 847228024, 1380181692, 1175526310, 622313741, 609624683, 624322550, 1380181692, 636582840, 368167930, 1380181692, 757208674};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 11 PIECES 1";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> pieces = {672645348, 271290159, 564325579, 696957386, 358532291, 463842213, 32904323, 617261215, 689461249, 318561887, 696957386, 696957386, 415762712, 409102101, 354901591, 104152275, 129090263, 273968055, 190120510, 176567188, 696957386, 535099478, 696957386, 262414882, 696957386, 126107206, 696957386, 696957386, 478034946, 656479495, 190796116, 244846911, 651911850, 536858000, 19377093, 696957386, 696957386, 645808861, 505143268, 696957386, 286673855, 252018924, 553160359};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 10 PIECES 1";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> pieces = {169120699, 169120699, 169120699, 169120699, 11689022, 51230896, 169120699, 169120699, 169120699, 169120699, 125722290, 169120699, 88951314, 169120699, 126401948, 169120699, 169120699, 169120699, 169120699, 19485055, 107709255, 169120699, 169120699, 33412133, 169120699, 169120699, 169120699, 44337101, 121612505, 169120699, 71186359, 169120699, 169120699, 169120699, 169120699, 169120699, 169120699, 169120699, 169120699, 57037824, 169120699};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> pieces = {435899744, 435899744, 435899744, 435899744, 345367819, 435899744, 435899744, 221822297, 11342595, 435899744, 435899744, 65759482, 88233853, 344029520, 435899744, 435899744, 4245875, 329426981, 435899744, 252512101, 113487383, 435899744, 435899744, 435899744, 435899744, 107734714, 435899744, 435899744};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> pieces = {151509943, 273684527, 1464425775, 114760236, 1464425775, 1464425775, 1464425775, 1265122574, 445875158, 120306711, 1464425775, 1464425775, 1464425775};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 10 PIECES 1";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> pieces = {362585055, 175789665, 162617518, 362585055, 204719742, 362585055, 35756852, 21179155, 362585055, 135939390, 362585055, 362585055, 226892854, 362585055};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> pieces = {714890226, 714890226, 34740866, 714890226, 575237737, 714890226, 416468993, 537322533, 157272380, 714890226, 598104766, 334013990, 152371603, 58079854, 51245831, 331480129, 91201593, 374763496};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> pieces = {134202418, 13203718, 15015320, 31344384, 168067522, 20549249, 168067522, 168067522, 14989684, 68932214, 168067522, 38958758, 15643975, 168067522, 9734913, 168067522, 90983537, 36025240, 121331067, 90104474, 61180848, 140019154, 59975678, 168067522, 168067522, 6447820, 126043477, 168067522, 42510051, 116690142};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 10 PIECES 1";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> pieces = {1135781559, 1135781559, 82173110, 1135781559, 1135781559, 1135781559, 1135781559, 1135781559, 1135781559, 11671339, 271059427, 1135781559, 1135781559, 1135781559, 334550680, 1135781559, 1135781559, 101323876, 1135781559, 1135781559, 1135781559, 1135781559, 144529580, 1135781559, 1135781559, 873199182, 1135781559, 1135781559, 476152434, 1135781559, 1135781559, 1135781559, 599297745, 468983853, 1135781559, 1135781559, 398448746, 1135781559, 1135781559, 1135781559};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> pieces = {380380188, 298501963, 420687484, 570079747, 1243000415, 1243000415, 672139933, 1243000415, 219544267, 580508861, 617909212, 1243000415, 1243000415, 1243000415, 1243000415, 767794176, 1243000415, 1204754117, 1243000415, 1243000415, 1243000415, 108538432, 1243000415, 417650729, 24889211, 397169930, 1243000415, 1243000415, 1243000415, 370917956, 772634226, 813274571, 216220854, 1243000415, 61811376, 1243000415, 367008690};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 11 PIECES 1";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> pieces = {1, 17, 17, 987654321};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 3 PIECES 987654305";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> pieces = {452, 32532, 23532, 34, 324, 23423, 42425, 24254, 987654, 2525, 35325, 53232, 987654, 9876543, 3432, 432, 24, 42, 24};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 13 PIECES 8888890";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> pieces = {452, 32532, 23532, 34, 324, 23423, 42425, 24254, 987654, 2525, 35325, 53232, 987654, 98765432, 3432, 432, 24, 42, 24};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 13 PIECES 97777779";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> pieces = {452, 32532, 23532, 34, 324, 23423, 42425, 24254, 987654, 2525, 35325, 53232, 987654, 987659, 3432, 432, 24, 42, 24};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 13 PIECES 10";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> pieces = {846940886, 846940886, 846940886, 178261484, 846940886, 846940886, 846940886, 846940886, 35005212, 294702568, 336465783, 278722863, 451292310, 254573051, 846940886, 846940886, 846940886, 846940886, 284235351, 846940886, 846940886, 846940886, 149798316, 846940886, 412776092, 217878199, 846940886, 846940886, 846940886, 846940886, 572660337, 805750847, 846940886, 846941782};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 33 PIECES 1000";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> pieces = {3852207, 59907050, 101110545, 35122435, 61816643, 101110545, 44618989, 31789173, 97112683, 101110558, 101110545, 35197318, 59038419, 54860157, 72076918, 17618061, 98017803, 53597529, 101110545, 87656752, 101110545, 26246398, 68523654, 101110545, 86805550, 101110545, 83925162, 94335705, 19319664, 55618896, 86196076, 83370555, 101110545};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 9 PIECES 100";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> pieces = {1120058829, 289900887, 253167519, 1120058829, 1120058829, 1120058829, 990892922, 1120058829, 111537765, 1120058829, 1120058829, 1120058829, 1120058829, 1120058829, 155314922, 1120058829, 1120058829, 1120058829, 1120058829, 1120058829, 19842653, 1120059225, 1120058829};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 21 PIECES 1000";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> pieces = {1350583793, 1350583793, 1350583793, 1350583793, 81530828, 1350583793, 1350583793, 1350583793, 1350583793, 153986132, 1350583793, 1350583977, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 6939508, 1350583793, 502278612, 1350583793, 1350583793, 1350583793, 87755423, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 620145551, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 622804196};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 11 PIECES 1000";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> pieces = {1501262996, 523924202, 349689938, 203102096, 638422091, 452180388, 1501263104, 588219757, 1057418419, 321826424, 625032173, 1469262010, 298625211, 1057467588, 54056313, 476667373, 260401256, 1501262996, 499966916, 1335939812, 1501262996, 1501262996, 1414829151, 555996659, 1501262996, 1501262996, 1501262996, 1501262996, 505548984, 570073851};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 6 PIECES 1000";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> pieces = {260391263, 1635915385, 1635915385, 1635915385, 524688210, 1566288820, 479022355, 291580617, 882160380, 46169896, 630668851, 222806483, 105575580, 482506616, 452867622, 222047127, 213801962, 1635915385, 101603567, 1635915385, 982936785, 1635916254, 1266235190, 1137949909, 777210499, 272603431, 364686249, 1129033334, 1280321649, 146084377, 212251747, 364319530, 1635915385, 624549798, 250171613, 114087656};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 21 PIECES 1000";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> pieces = {6537443, 7921524, 15288547, 22767472, 22767472, 619936, 494186, 8347361, 22767532, 978911, 6754730, 22767472, 14089168, 22767472, 22259124, 16233146, 1643129, 2945933};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 8 PIECES 100";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> pieces = {846940886, 846940886, 846940886, 404842, 846940886, 846940886, 846941313, 7637384, 846940886, 7668027, 5612030, 846940886, 846940886, 846940886, 846940886, 846940886, 846940886, 846940886, 846940886, 460294, 3121849, 223892, 6008131, 6946106, 846940886, 3934586, 652166, 846940886, 948280, 6415113, 846940886, 846940886, 2597089, 846940886};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 6 PIECES 427";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> pieces = {823341, 261862, 101110545, 751745, 152211, 101111197, 431516, 222561, 101110545, 435737, 101110545, 834008, 397687, 274887, 302244, 436037, 956085, 13763, 101110545, 706014, 101110545, 982970, 781564, 101110545, 876242, 868002, 9194, 306543, 112492, 19576, 264554, 471589, 101110545};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 5 PIECES 652";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> pieces = {1120058829, 9887084, 6755459, 1120058829, 1120058829, 1120058829, 5241794, 1120058829, 10732536, 1120059180, 1120058829, 1120058829, 1120058829, 10973601, 1120058829, 1120058829, 1120058829, 10391547, 1120058829, 1164369, 1120058829, 1120058829, 1120058829};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 9 PIECES 351";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> pieces = {1350583793, 1350583793, 1350583793, 1350583793, 496634, 1350583793, 1350583793, 1350583793, 1350583793, 5422788, 1350583793, 1350583793, 1350583793, 2717543, 1350583793, 1350583793, 13071535, 1350583793, 6499553, 1207928, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 1350583793, 4730379, 1350583793, 6994402, 1350583793, 1350583957, 1350583793};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 44 PIECES 164";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> pieces = {6940886, 6940886, 6940886, 10791, 6940886, 6940886, 994595633, 35556, 6940886, 51347, 32725, 6940886, 6940886, 6940886, 6940886, 6940886, 6940886, 6940886, 6940886, 48934, 11232, 38088, 9996, 58065, 6940886, 58079, 39952, 6940886, 31292, 7998, 6940886, 6940886, 31797, 6940886};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 6 PIECES 987654747";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> pieces = {3357, 1018, 1110545, 499, 10591, 1988765517, 10042, 10665, 1110545, 9691, 1110545, 8688, 5895, 5871, 1876, 8769, 5763, 7443, 1110545, 10244, 1110545, 2756, 9020, 1110545, 122, 7270, 902, 443, 3542, 1110, 11058, 7769, 1110545};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 5 PIECES 1987654972";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> pieces = {58829, 529, 305, 58829, 58829, 58829, 327, 58829, 290, 987713500, 58829, 58829, 58829, 303, 58829, 58829, 58829, 5, 58829, 80, 58829, 58829, 58829};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 9 PIECES 987654671";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> pieces = {583793, 583793, 583793, 583793, 4264, 583793, 583793, 583793, 583793, 4328, 583793, 583793, 583793, 2643, 583793, 583793, 1025, 583793, 693, 1208, 583793, 583793, 583793, 583793, 583793, 583793, 583793, 583793, 583793, 583793, 583793, 583793, 583793, 583793, 583793, 583793, 583793, 583793, 583793, 583793, 1649, 583793, 4182, 583793, 988238277, 583793};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 44 PIECES 987654484";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> pieces = {1262996, 12535, 12359, 3803, 1331, 12169, 1262996, 1644, 10846, 1262996, 8501, 1262996, 988917527, 9050, 11218, 10165, 9396, 450, 11805, 2088, 1262996, 5827, 3927, 10181, 1262996, 8362, 1262996, 10731, 2327, 1221};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 12 PIECES 987654531";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> pieces = {26735, 5915385, 5915385, 993570296, 56526, 21889, 58276, 36765, 22154, 32841, 22458, 24155, 11209, 5915385, 13492, 2754, 5915385, 48992, 51177, 39413, 5915385, 32941, 37622, 40015, 32059, 54827, 51159, 54486, 47333, 49067, 35899, 39316, 9745, 27184, 39343, 50332};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 3 PIECES 987654911";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> pieces = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 987654321, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 20 PIECES 987654321";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> pieces = {100, 91, 91};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 10";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> pieces = {32944142, 3522130, 3934023, 25653471, 2361084, 14470801, 7591913, 2061072, 31149448, 7024383, 32944142, 3804968, 14357310, 44636918, 18423330, 5748914, 2236352, 11075470, 2936782, 15419265, 21479919, 32944142, 9465654, 17446412, 32944142, 6030303, 27526937, 17540206, 26716965, 12609957, 15091487, 13504694, 21515365, 17383663};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 13 PIECES 11692777";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> pieces = {670, 337, 124, 337, 337, 337, 337, 337, 337, 337, 337, 337, 337, 337, 337, 337, 337, 337, 337, 125, 337, 337, 337, 337, 26, 128, 337, 337, 337, 337, 285, 337, 337, 337, 337, 337};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 334";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> pieces = {163, 155, 757, 167, 874, 382, 931, 5726, 931, 931, 931, 549, 610, 832, 146, 824, 931, 860, 747, 228, 664, 789, 931, 632, 729, 666, 805, 686, 180, 536, 538};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 7 PIECES 4796";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> pieces = {7213697, 7213697, 7213697, 7213697, 7213697, 7213697, 7213697, 7213697, 7213697, 5569444, 7213697, 7213697, 7213697, 7213697, 7213697, 8512186, 5064036, 7213697, 7213697, 6123381, 4232597, 7213697, 7213697, 7213697, 7213697, 4301580, 7213697, 7213697, 7213697, 7213697, 7213697, 7213697, 7213697, 7213697};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 15 PIECES 1298490";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> pieces = {1431825, 6466859, 4670105, 452563, 2724532, 307168, 681221, 6466859, 4538801, 6466859, 3889800, 1794943, 2091961, 1153151, 3543917, 5856255, 5564023, 4431983, 6466859, 4747158, 6119718, 6466859, 1421071, 5262428, 4798557, 291361, 5852456, 5104272, 4872800, 5577246, 1517540, 5951352, 6466859, 3894850, 872793, 1309426, 6466859, 6466859, 2667828, 7739671, 3383722, 6466859, 2105868, 3759755, 187632, 1974546, 395681, 1345627, 4401269, 6466859};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 39 PIECES 1272813";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> pieces = {21, 25, 19, 15, 20, 25, 25, 545, 19, 13, 3, 1, 5, 10, 17, 8, 22, 4, 25, 16, 9, 9, 25, 25, 9, 15, 14, 22, 4, 23, 7, 5, 18, 10, 25, 16, 25};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 7 PIECES 521";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> pieces = {262, 2148, 2148, 2148, 2148, 2148, 1884, 2148, 146, 2148, 2148, 5432, 100, 2148, 571, 2148, 374, 2148, 2148, 1269};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 11 PIECES 3285";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> pieces = {3, 10, 10, 2, 10, 3, 1, 2, 4, 10, 10, 10, 10, 10, 3, 2, 10, 10, 10};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 1";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> pieces = {33733565, 24906517, 26692698, 33733565, 4094354, 32966976, 33733565, 21812828, 33733565, 7929649, 75790420, 15709839, 9978498, 23563882, 22573571, 33733565, 16339247, 4228595, 33733565, 33733565, 33733565};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 10 PIECES 42056856";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> pieces = {2588582, 3432916, 4239224, 4239224, 523904, 4239224, 769113, 3897357, 1738746, 3274733, 3968831, 4239224, 4239224, 1569725, 1782952, 5456685, 4239224, 4100144};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 15 PIECES 1217462";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> pieces = {14, 14, 14, 5, 14, 14, 4, 14, 17, 14, 14, 14, 14, 11, 3, 14, 14, 14, 7, 14, 14, 14, 14, 14, 14, 14, 4};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 8 PIECES 10";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> pieces = {348755635, 142302241, 362575056, 203894667, 350576521, 409534598, 74155090, 132009286, 35756852, 336814655, 303267312, 250104411, 156810852, 410300925, 305345631, 401783890, 239360194, 176749177, 61524168, 205829731, 409534598, 409534598, 285558130, 84391197, 125656044, 353548253, 409534598, 409534598, 227301156, 409534598, 270584523, 168057523, 219557733, 93189436, 116294609, 84026656, 17272507, 356684279, 409534598, 14989684, 352936061, 343069941, 409534598, 217927336};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 13 PIECES 1000000";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> pieces = {835, 835, 835, 686, 835, 465, 502, 871, 101, 353, 835, 835, 835, 835, 710, 835, 187, 193, 835, 835, 722, 835, 835, 255, 835, 540, 835, 519, 268, 191, 835, 80};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 7 PIECES 100";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> pieces = {104765403, 104765403, 84258370, 104765403, 63299709, 104765403, 104765403, 97994762, 104765403, 104765403, 17192581, 10013465, 104765404, 104765403, 104765403, 40936921, 104765403, 4059071};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 12 PIECES 10";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> pieces = {82843, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 204288, 295528, 294704, 52072, 245383, 294704, 294704, 294704, 294704, 294704, 294704, 161173, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 294704, 6155, 294704, 294704};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 9 PIECES 1000";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> pieces = {1838, 2154, 1838, 1838, 1838, 1838, 1838, 1269, 294, 685, 932, 1838, 792, 741, 1838, 1838, 418, 1838, 124, 1838, 1838, 1838, 525, 1838, 503, 1838, 1838, 1132, 272, 1838, 295, 702, 1838};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 1000";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> pieces = {850037583, 850037583, 850037583, 850037583, 850037583, 850037583, 850037583, 625040141, 850037583, 850101877, 210134889, 203334793, 850037583, 287160463, 850037583, 850037583, 850037583, 850037583, 850037583, 140488763, 850037583, 353157314, 850037583, 773446913, 850037583, 850037583, 813465003, 640511627, 850037583, 639654797, 850037583, 850037583, 850037583, 850037583, 850037583};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 9 PIECES 100000";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> pieces = {49, 255, 72, 149, 113, 121, 31, 113, 240, 221, 8, 14, 76, 129, 79, 164, 239, 100, 204, 136, 92, 280, 223, 157, 278, 271, 192, 64, 198, 240, 273, 278};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 21 PIECES 10";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> pieces = {39135, 13788, 40102, 40102, 5343, 37845, 12540, 29464, 33854, 40102, 40186, 18000, 38920, 25636, 29354, 32851, 40102};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 10 PIECES 100";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> pieces = {248, 2186, 1313, 2186, 782, 2186, 2186, 2186, 2186, 524, 1528, 1059, 2186, 2186, 2186, 2186, 2186, 2205, 2186, 2186, 2186, 2186, 2186, 2186, 2186, 2186, 2186, 1503, 1056, 2186, 909, 2186, 590, 1197, 634, 2186, 2186, 2186, 2186, 19, 2186, 2186, 2186, 1920, 616, 207, 1667, 2186};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 17 PIECES 100";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> pieces = {82326, 65289, 82346, 82326, 82326, 82326, 49849, 82326, 3452, 82326, 82326, 82326, 82326, 35055, 82326, 82326, 69293, 82326, 54401};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 2 PIECES 100";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> pieces = {93563392, 56669091, 108959292, 27933582, 93036931, 65022710, 21839281, 107264124, 79206985, 83409707, 108959292, 108959292, 35686791, 25053805, 25861927, 36932016, 96285982, 108959292, 64910682, 44804920, 108959292, 31876948, 100204080, 29000422, 7464479, 46531900, 21543799, 50573785, 53428941, 98374427, 60832243, 44201909, 74393271, 70470280, 91486007, 2075846, 38886399, 77956907, 18579589, 23325823, 33151027, 19609420, 71994681, 66370428, 68553654, 108959292, 36577729, 54732705, 691427, 108959295};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 49 PIECES 10";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> pieces = {6758, 6758, 6763, 3222, 6758, 1122, 6271, 6758, 6758, 1743, 6758, 2221, 6758, 6758, 5120, 2686};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 2 PIECES 10";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> pieces = {778414, 778414, 778414, 778414, 778414, 474693, 427219, 661086, 778414, 778414, 778414, 778414, 632923, 128479, 778414, 778414, 778414, 778414, 778414, 785026, 778414, 778414, 778414, 77226, 778414, 778414, 778414, 778414, 778414, 778414, 778414, 434327, 759461, 778414, 745353, 382215, 599422, 246273, 778414};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 19 PIECES 10000";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> pieces = {64571475, 64571132, 64571132, 64571132, 64571132, 64571132, 12973375, 64571132, 64571132, 30817742, 64571132, 64571132, 62203937, 64571132, 64571132, 33372722, 64571132, 64571132, 64571132, 64571132, 64571132, 64571132, 42509331, 64571132};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1000";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> pieces = {22326, 33409, 564, 19671, 31864, 13166, 17522, 28251, 8204, 21091, 21244, 7632, 23019, 13398, 180, 35292, 11600, 35273, 23253, 30456, 5327, 13726, 32817, 16320, 12497, 29651, 35273, 14668, 23771, 3594, 31150, 2371, 20339, 2015, 29735, 10539, 23193, 5013, 13343, 8861};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 15 PIECES 100";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> pieces = {4812, 501, 2832, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 1124, 4812, 4812, 4170, 771, 4812, 4812, 4812, 2181, 4812, 4899, 4812, 1359, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 3368};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 23 PIECES 100";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> pieces = {19559677, 7967819, 16416069, 8610576, 32356449, 1605594, 8301648, 29270018, 9941886, 25557315, 13271747, 32356449, 19850064, 10180669, 32648142, 18043219};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 14 PIECES 1000000";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> pieces = {5266889, 8077334, 8061445, 3883902, 6882773, 3317747, 8075527, 8077334, 1237554, 5625316, 7537953, 8077334, 1386111, 1697589, 8077589, 2724915, 8077334, 578654, 4065614, 4571225};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 14 PIECES 1000";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> pieces = {24276, 43255, 47034, 75913, 75514, 31642, 51888, 25390, 75913, 75913, 75913, 75913, 75913, 51836, 75913, 35044, 75913, 75913, 5970, 75913, 75913, 33641, 75913, 189, 10281, 75913, 75913, 13310, 35438, 75913, 18591, 62742, 75913, 11974, 57090, 75913, 75916, 45941, 75913, 61896, 61032};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 36 PIECES 10";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> pieces = {150, 152, 202, 200, 30, 29, 200, 202, 77, 167, 185, 160, 177, 72, 39, 85, 91, 176, 202, 51, 29, 202, 159, 145, 170, 178, 58, 143, 202, 196, 202, 50, 68, 159, 103, 202};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 18 PIECES 1";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> pieces = {143, 514, 514, 216, 514, 514, 514, 514, 216, 489, 410, 159, 514};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 1";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> pieces = {741112111, 741112111, 741112111, 741112111, 476083900, 741112111, 741112111, 741112111, 741112111, 741112111, 470158102, 741112111, 741112111, 741112111, 741112111, 741112111, 741112111, 369868348, 701062796, 742112110, 121931752, 741112111, 741112111, 741112111, 240400397, 741112111, 741112111};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 19 PIECES 1000000";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> pieces = {8176291, 2902280, 6125365, 6680708, 8176291, 8176291, 1759301, 6727902, 8176291, 7321425, 4560774, 8177290, 8176291, 8176291, 3862087, 8176291, 8176291, 8176291, 1644063, 8176291, 543732, 7947920, 452319, 8176291, 2526191, 8176291, 8176291, 8176291, 8176291, 8176291, 6259352, 8176291, 8176291, 4917268, 7139485};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 11 PIECES 1000";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> pieces = {4, 7, 4, 7, 4, 7, 4, 7, 47, 47};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 8 PIECES 1";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> pieces = {11, 12, 11};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 10";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> pieces = {10, 11, 10};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 10";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> pieces = {11, 12};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 1";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> pieces = {1, 2, 4, 2, 1};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 2 PIECES 3";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> pieces = {1};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 1";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> pieces = {1, 2000000000, 1999999, 1999999};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 1998000002";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> pieces = {10, 10, 12};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 2 PIECES 10";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> pieces = {3, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 1";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> pieces = {3, 3, 112};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 2 PIECES 110";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> pieces = {40, 20, 20};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 21";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> pieces = {95, 95, 100};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 2 PIECES 10";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> pieces = {5, 2, 6, 500000000, 5, 6, 20, 25, 30, 20, 15, 20, 419999999, 419999999, 6, 1, 2, 6, 1, 2, 6, 7, 7, 1, 3, 5, 6, 2, 3, 6, 3, 2, 3, 4, 6, 2, 3, 6, 2, 3, 6, 2, 7, 2, 9999, 55125, 12412, 12612, 999, 999};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 3 PIECES 100000000";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> pieces = {10000, 9995, 9995};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 0 PIECES 10";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> pieces = {1999999999, 1999999999, 2000000000};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 2 PIECES 10";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> pieces = {91, 91, 100};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 2 PIECES 10";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> pieces = {92346, 102345, 92346};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 10000";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> pieces = {1000000, 19213904, 12134, 123421, 12348696, 12364469, 12638946, 12636489, 12341234};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 1 PIECES 6574958";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> pieces = {1231212, 42342, 34534, 234, 34, 4234345, 34234, 1234, 432, 4535, 21342, 234534, 1234, 234234234, 12323, 423, 23, 2, 34534, 123, 12, 123, 3, 235344, 7567, 99, 456};
    CakeParty* pObj = new CakeParty();
    clock_t start = clock();
    string result = pObj->makeMove(pieces);
    clock_t end = clock();
    delete pObj;
    string expected = "CAKE 13 PIECES 229999889";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=10662&pm=7424
********************************************************************************
// after all, I think you should not try to challenge me 
 
#include <algorithm> 
#include <string> 
#include <vector> 
#include <math.h> 
using namespace std; 
 
typedef long long ll; 
 
#define LS < 
#define Size(x) (int(x.size())) 
#define LET(k,val) typeof(val) k = (val) 
// execute "act", and return "val" as an expression result 
#define CLC(act,val) (*({act; static typeof(val) CLCR; CLCR = (val); &CLCR;})) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
// Standard mathematical quantifiers, plus tools to implement them 
// note: the range has to be non-empty here 
#define FOLD1(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(++k; k LS (b); ++k) act, R##k) 
#define MAX(k,a,b,x) FOLD1(k,a,b,x, R##k >?= (x)) 
 
#line 3 "CakeParty.cc" 
 
string itos(int i) { 
  char buf[64]; 
  sprintf(buf, "%d", i); 
  return buf; 
  } 
 
class CakeParty { 
  public: 
  string makeMove(vector <int> pieces) { 
    // !FDI 
    int N = Size(pieces); 
     
    int M = MAX(k,0,N, pieces[k]); 
     
    int X = 0; 
     
    FOR(k,0,N) if(pieces[k] == M) X++; 
     
    string xx = "a"; 
    FOR(k,0,N) if(pieces[k] == M && itos(k) < xx) xx = itos(k); 
 
    if(X&1) { 
      // win: 
      if(X>1) return "CAKE "+xx+" PIECES 1"; 
      int M2 = MAX(k,0,N, pieces[k] == M ? 0 : pieces[k]); 
      if(M2 == 0) return "CAKE "+xx+" PIECES "+itos(M); 
      int X2 = 0; 
      FOR(k,0,N) if(pieces[k] == M2) X2++; 
//    printf("%d %d: %d\n", M, M2, X); 
      if(X2&1) return "CAKE "+xx+" PIECES "+itos(M-M2); 
       
      int take = M-M2+1; 
      ll pow = 1; 
      while(pow < take) pow *= 10; 
      if(pow <= M) take = pow; 
      return "CAKE "+xx+" PIECES "+itos(take); 
      } 
    else { 
      // lose 
      return "CAKE "+xx+" PIECES 1"; 
      } 
       
//  int X; 
     
    return 0; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/