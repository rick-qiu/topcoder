/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11379
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

class YetAnotherORProblem {
public:
    int countSequences(vector<long> R);
};

int YetAnotherORProblem::countSequences(vector<long> R) {
    int ret;
    return ret;
}


int test0() {
    vector<long> R = {3, 5};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<long> R = {3, 3, 3};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<long> R = {1, 128};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 194;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<long> R = {26, 74, 25, 30};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 8409;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<long> R = {576460752303423488, 576460752303423488, 576460752303423488, 576460752303423488, 576460752303423488, 576460752303423488, 576460752303423488, 576460752303423488, 576460752303423488, 576460752303423488};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 161955037;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<long> R = {1000000000000000000, 1000000000000000000, 1000000000000000000, 1000000000000000000, 1000000000000000000, 1000000000000000000, 1000000000000000000, 1000000000000000000, 1000000000000000000, 1000000000000000000};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 990348470;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<long> R = {1, 1};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<long> R = {1, 2};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<long> R = {1, 3};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<long> R = {1, 100000000000000};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 998650011;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<long> R = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<long> R = {486211148307164070, 501974443494127483, 546109314111885682, 25345366503733289, 467109698224593900, 773245526169189607, 255302906723634372, 396294198631725069, 502394460171932757, 925946187501080508};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 969176119;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<long> R = {850341934789835835, 140906788628005596, 867764780898644033, 662426890409338628, 133999403774198975, 698982670257830763, 642352388451400490, 696393751092254370, 239102317172067966, 247872578895163570};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 743496776;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<long> R = {937508594066117248, 980092273090134188, 677010200342741556, 365028454416048405, 143563413081327338, 615967991662629691, 278038892600093731, 145633846551401351, 191144690724546952, 278872880611125588};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 679561707;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<long> R = {894046344715134069, 347687198792039840, 719538930376619224, 99075637843956381, 335722352840844417, 512845350869404159, 600849075685463247, 553506913669576251, 654932379060027147, 8593902250271113};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 11875638;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<long> R = {683066667926680470, 556248935248633525, 453474558769328097, 475065863843290951, 850745313582021854, 204929657709514607, 764975648555601843, 523551236768895619, 606238530649926101, 269225426653479939};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 988699198;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<long> R = {937928638053108520, 440742153764585425, 631901608425066777, 409375337491295697, 55821926214613369, 216039497982178404, 980928693082282013, 97866237585466160, 108946666999987281, 367722142884809048};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 251942611;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<long> R = {112245628696232905, 392790401510825741, 747015484314669905, 267403993190812779, 180598810636772899, 78249002023528552, 43678818172702840, 587096233706243036, 697285092765355726, 533508901985030046};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 91153622;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<long> R = {82, 52, 85, 86};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 50421;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<long> R = {602, 13, 803, 935};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 2144657;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<long> R = {602, 737, 700};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 778636;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<long> R = {286, 820, 288};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 347619;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<long> R = {781, 583, 619, 108};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 3605293;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<long> R = {751, 858, 276, 281};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 4191859;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<long> R = {987, 437};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 37515;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<long> R = {528, 118, 923, 500};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 2862567;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<long> R = {550, 41};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 5423;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<long> R = {249, 870, 81, 48};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 621007;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<long> R = {531115030899290881, 947601149273011713, 991349567020840193};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 704948445;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<long> R = {514701342182032257, 551137292578942401};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 168651770;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<long> R = {571879271664657217, 768393171830683393, 664062644097263361, 355743360981049217};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 956595861;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<long> R = {281942348671178177, 296524174576598401, 621221659367249793, 789309979030026113};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 484600327;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<long> R = {52814234944074561, 167665818550075009};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 199513113;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<long> R = {754547046746258817, 759330137062651777};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 673512845;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<long> R = {682980468448377345, 193548385845690337, 489415678812105025, 900842041599889025};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 573655195;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<long> R = {956152983057168257, 685066470136012289, 423533785513627777, 801762889749067777};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 535218139;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<long> R = {529582270537187201, 737236092366456321, 678115500642184705, 646531872293652225};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 469886763;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<long> R = {30820494264921173, 123529810047987905, 239192881194985601};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 972375168;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<long> R = {610672758913349377, 682130155468148225, 355306369015803905, 568446742487323201, 602170999880562177, 545440606274798529};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 374282364;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<long> R = {94663704934456193, 11022267787787255, 623270779903079425, 718053191054786561, 757284307425175553, 838510416841380481};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 519589403;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<long> R = {370823944597555393, 959817906078117505, 661926524832346497, 375339575752686529, 854592808273831553, 967989738817605505, 10180887591681565};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 420329606;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<long> R = {548786640528232257, 230468608997888577, 291036470589611457, 602010944762470401, 989934578970582145, 535510500688701185};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 360900708;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<long> R = {990989409908369793, 369219186497175873, 672493243651861377, 64729355504270945, 266672080077714145, 927428625227020417};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 489971662;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<long> R = {484205650146120513, 994843496676061697, 81080301795162577, 586634036715579137, 907819667623232769, 661522450006260481, 598838517595794817};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 361203554;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<long> R = {467779822377700545, 777699403526018305, 913949833525302145, 222652993249928161, 226651140659680513, 447964742094548737};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 807307128;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<long> R = {270842110321156353, 32222913565892465, 280500068910451201, 216571934306577185, 996770687519372929, 383226433576174273, 212193546213289345};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 315590430;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<long> R = {583243144536534401, 602075641395925761, 550178961838258625, 646240318537363585, 203794790548301185, 518030629532349825};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 619847316;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<long> R = {915198356369810305, 547981906165575745, 552660027899496065, 559744664424480129, 694182369981934593};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 105822572;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<long> R = {953464322231618433, 424597586603095105, 802766948182089729, 986508967365234177, 655558074561796993, 792713312977855361, 290227543890245633, 574678888784088321, 781981828042526977};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 42732412;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<long> R = {19564963732824793, 731320615399862913, 374075907989330881, 862559090482217089, 449728360128615617, 480016004369430721, 767331865069813377, 966052224255870337, 972090874302522881, 275638593717801985};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 755106812;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<long> R = {415624240298450369, 155434710298624225, 77234208294951537, 955025955104481409, 576829691483942017, 996346446483722881, 839069545243658497, 236466444963801537, 844176723060579329};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 108049657;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<long> R = {226764098559482657, 804264921332996865, 292962656324613249, 895831173544852481, 866397406014807297, 304505006815591873, 98475309119277265, 724127577618571521, 716709661493862657};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 552108928;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<long> R = {434259918875988225, 177260966212917537, 217991183696925825, 835315432368728833, 390254167392124609, 230841016457116289, 715981789964010497, 641381713093305857};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 867282434;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<long> R = {310273763549385985, 285078427524640961, 846272581803176577, 353299536964801089, 294726449174559681, 482375751789420609, 93212649453745745, 709085599163968897, 827528090227223681};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 559247321;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<long> R = {36357859193478113, 946275254206211841, 705497036630788225, 173248715244439073, 616460779730903169, 589606117646702849, 331601022376007297, 981886988381499137, 410992156039859265, 632952779397591937};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 805058687;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<long> R = {856453635950069121, 919588957759670145, 446024376193420737, 725091595753653505, 237062425568849601, 60738596790608665, 625002368978720513, 293297730890701441, 69185693980055809, 601897409503310337};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 839797796;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<long> R = {230336259972718785, 225746599601057025, 722781284958371201, 222501611105992545, 148521421203463137, 522397652544219329, 420355024778754497, 788430747170501249, 15142121967169687};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 250831300;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<long> R = {4085864728089251, 537317396930776833, 975085695935915649, 798440260017564673, 501316123965390913, 927487449637385729, 490944664383960769, 940511086234745729, 395148759760898561, 134517657051514529};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 688870764;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<long> R = {67108864, 33554432, 4503599627370496, 4503599627370496, 1099511627776, 8589934592, 4096, 65536, 68719476736, 8};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 611826201;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<long> R = {4194304, 2251799813685248, 268435456, 1125899906842624, 1125899906842624, 16777216, 140737488355328, 2147483648, 1024};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 63444929;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<long> R = {1048576, 536870912, 35184372088832, 536870912, 34359738368, 32768, 268435456, 35184372088832};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 636970334;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<long> R = {1099511627776, 524288, 8388608, 8, 16, 67108864, 33554432, 131072};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 983884892;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<long> R = {144115188075855872, 65536, 8589934592, 4096, 72057594037927936, 8388608, 33554432, 262144, 65536};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 276635641;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<long> R = {268435456, 8, 524288, 288230376151711744, 32768, 33554432, 17592186044416, 2147483648};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 517162972;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<long> R = {1024, 1073741824, 137438953472, 17179869184, 8589934592, 33554432, 262144, 512};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 964350662;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<long> R = {134217728, 512, 2097152, 1, 4, 1073741824, 16777216, 281474976710656, 32, 2199023255552};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 606433757;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<long> R = {1, 16777216, 1125899906842624, 36028797018963968, 33554432, 18014398509481984, 17592186044416, 274877906944, 8192};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 593553735;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<long> R = {137438953472, 4294967296, 65536, 64, 140737488355328, 128, 256, 256, 512, 576460752303423488};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 698154063;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<long> R = {130, 8796126580736, 4096, 274877906944};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 787531764;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<long> R = {2199023255556, 132104, 2147483648, 17592186044736};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 984712403;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<long> R = {35184372089344, 18014432936361984, 16388, 9895671758976, 576462951326744592, 8, 633318697598978, 4644337115987968, 144115188210073600, 262144};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 847226242;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<long> R = {1099511631872, 32, 70918768427008, 276220084224};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 841342628;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<long> R = {8796093022225, 1024, 9007233614479360};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 729701138;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<long> R = {262145, 2199031644160, 576478344489533504, 2147483648, 545259520, 262144, 4503600709509120, 1048577, 3298534883360, 8589937666};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 301765921;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<long> R = {1125899906842624, 4504699139014720, 144396663054663680, 68719509504, 1266637395200000, 262144, 1052928, 1126999418486784, 289356276058562592};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 563322887;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<long> R = {139586437121, 562949957648896, 72057594574798848, 562949953421312, 2129920};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 37654930;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<long> R = {2162752, 20266232682905604, 9007199254741056, 17179877376, 1143494240371712};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 84241184;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<long> R = {18014402808643712, 2147483776};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 232733171;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<long> R = {1024, 18014948265295872, 268437504, 144115188075855872, 549756862464};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 396661272;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<long> R = {137438953472, 70377334112776, 281749854617608, 576495936675512352};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 86732404;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<long> R = {2251812832804864, 1125899906842624};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 933283462;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<long> R = {144115188344291328, 135172, 36033469943382018, 576460752303423488, 36310340715151360, 34360803328};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 456994935;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<long> R = {9007199254740992, 145241087982698496, 540431955284459520, 585467951558164480, 24769797950537728, 360287970189639680};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 901394256;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<long> R = {613615449229230080, 351280770934898688, 38280596832649216, 9007199254740992, 2251799813685248, 153122387330596864, 9007199254740992, 81064793292668928};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 416673946;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<long> R = {657525545596092416, 36028797018963968, 164381386399023104, 93449692267937792, 216172782113783808, 585467951558164480, 36028797018963968};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 465320915;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<long> R = {686798943174000640, 109212290963734528, 72057594037927936, 41658296553177088, 612489549322387456, 592223350999220224, 42784196460019712, 797137134044577792};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 901096207;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<long> R = {288230376151711744, 145241087982698496, 144115188075855872, 173388585653764096, 117093590311632896, 584342051651321856, 4503599627370496, 216172782113783808};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 984638509;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<long> R = {324259173170675712, 288230376151711744, 12384898975268864, 144115188075855872, 792633534417207296, 612489549322387456, 144115188075855872};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 368605550;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<long> R = {36028797018963968, 65302194596872192, 40532396646334464, 4503599627370496, 622622648483971072, 594475150812905472, 292733975779082240, 666532744850833408};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 110082755;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<long> R = {794885334230892544, 229683580995895296, 22517998136852480, 4503599627370496, 20266198323167232, 184647584722190336, 22517998136852480, 594475150812905472};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 297645102;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<long> R = {290482175965396992, 874824227616718848, 4503599627370496, 866942928268820480, 604608249974489088, 596726950626590720, 157625986957967360, 450359962737049600, 12384898975268864};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 724193785;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<long> R = {290482175965396992, 731834939447705600, 292733975779082240, 216172782113783808, 433471464134410240, 648518346341351424};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 125301651;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<long> R = {9147936743096320, 67108864, 2256197860196352, 18084767253659648, 720857432535859200, 9007199321849856, 34359738368, 2684354560, 8661237760};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 751423767;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<long> R = {18874368, 4483950051328, 67108864, 72128237660012544, 281474976710656, 2200096997376, 18155136015663104, 144186656331661312, 70368744177664, 11399775212535808};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 178118816;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<long> R = {18014398509481984, 16777216, 144185730900426752, 4299161600, 6755536880009216, 4415226380288, 9895613038592, 144115224583077888, 216172782131609600, 4503608217305088};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 209449825;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<long> R = {288802259704217600, 281475043819520, 5066549581840384, 283753054208, 1125899973951488, 2256249399803904, 2289187772432384, 144115188621115392, 145523662471036928, 70514773065728};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 328377439;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<long> R = {4194304, 9042383626829824, 362592546561458176, 270532608, 288230376151711744, 72057594037927936, 289074826853744640, 148618968091852800, 4194304};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 763980195;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<long> R = {45317746130419712, 612489549326581760, 12582912, 144115188075855872, 1048576, 576478348784435200, 649784985078726656, 2147483648, 76703030677864448, 581597670632587264};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 474517515;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<long> R = {180146218477813760, 576460889746571264, 4503608257150976, 35433480192, 1688854155231232, 281474978807808, 577586652344483840, 5075519619989504, 288230376151711744, 5070964807172096};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 562296830;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<long> R = {35185466802176, 268435456, 171807080448, 288305169249075200, 67108864, 288236973775126528, 36178330600341504, 18014399583223808, 22536827273478144, 72567901650944};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 576500105;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<long> R = {549755813888, 11267795161448448, 216172784261267456, 598142916493312, 17626612891648, 1116693594112, 4294967296, 144396663052566528, 19140401512316928, 9570698963976192};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 640085266;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<long> R = {11258999068426240, 8589934592, 18014399314788352, 18014403341320192, 162694735595569152, 36046406451986432, 4948083343360, 2322238653071360, 585467951561310208, 19791754559488};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 479198810;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<long> R = {43997644980224, 8797300981760, 288230376151711744, 1301821918281728, 73341892342841344, 5629499536310272, 72198331543060480, 9147937279967232, 9007199254740992, 288793330416877568};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 713200500;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<long> R = {564222337482752, 1407374883553280, 18155136132055040, 2253998837989376, 268435456, 4503668355235840, 2251801961168896, 9007199791611904, 36028797153181696};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 390194980;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<long> R = {290517403287158784, 1660004859904, 2674023049723904, 2260598121299968, 4503737066323968, 18014398509481984, 612489549391593472, 72057594037927936, 34359738368, 2233382993920};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 860842665;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<long> R = {70892126208, 72057594574798848, 2251816993554432, 35184376283136, 576460752303423488, 288230383670001664, 36301214580736, 426619369947136, 4294967296};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 718980453;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<long> R = {70371059433472, 9020393394274304, 4194304, 328784797390340096, 937874828558336000, 176093659136000, 108095187149914112, 2339146563584, 72128237660012544};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 263015795;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<long> R = {18014399591612416, 17729625063424, 2251801961168896, 2147483648, 2199023321088, 1073750016, 33554432, 108086391056891904, 8796093022208};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 378210287;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<long> R = {72057594037927936, 17592454483968, 281475043819520, 1125899906842624, 4194304, 65536, 69793218560, 1024, 4202496, 70368744177664};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 131409824;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<long> R = {144115188075855872, 4303355904, 4400195043328, 17596489400320, 68719476736, 131072, 34359742464, 10240, 1073741824};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 142603706;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<long> R = {4503668615282688, 17314086912, 570425344, 140738025228288, 2748779134976, 8798240505856, 558345748480, 36028797018963968, 562949953486848};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 581583272;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<long> R = {2269392536600576, 2147491840, 17594333528064, 4503599628423168, 562949986979840, 144115188075855872, 288230513590665216, 21474836480};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 389230807;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<long> R = {576460752303423488, 36028797018963968, 17592739692544, 75497472, 18295873487241216, 563224831393792, 68992106496, 576460752303423488, 134217728, 2251799822073856};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 25722158;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<long> R = {2199023255552, 18014398509481984, 20266198323167232, 36028797018963968, 1125899915231232, 4503603922337792, 274880135168, 8796101935104};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 95103521;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<long> R = {2048, 18014398509481984, 2251799813685248, 549755813888, 72842645340160, 8796093022208, 137440002048, 2253998836957184};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 80522044;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<long> R = {549755813888, 1125899906875392, 17408, 68719493120, 2814749767106560, 9007199254740992, 13510798883160064, 140874927341568, 72057594079870976};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 586749071;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<long> R = {35184372154368, 146366987893735424, 34896613376, 10133099161583616, 281474976776192, 69793218560, 576460754450907136, 16384, 409600, 1024};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 532751987;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<long> R = {1000000000000000000, 999999999999999989, 999999999999999965, 1000000000000000000, 999999999999999993, 999999999999999982, 999999999999999956, 999999999999999957, 999999999999999995};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 69929909;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<long> R = {146366987893735424, 999999999999999989, 576460752303423487, 1000000000000000000, 10133099161583616, 999999999999999982, 576460752303423490, 999999999999999957, 12384898975268864, 576460752303423488};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 575448435;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<long> R = {576460752303423488, 288230376151711744, 144115188075855872, 72057594037927936, 36028797018963968, 18014398509481984, 9007199254740992, 4503599627370496, 2251799813685248, 1125899906842624};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 219370084;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<long> R = {576460752303423488, 1111111111111111, 144115188075855872, 72057594037927936, 36028797018963968, 18014398509481984, 9007199254740992, 4503599627370496, 2251799813685248, 1125899906842624};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 318732939;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<long> R = {576460752303423488, 288230376151711744, 144115188075855872, 72057594037927936, 36028797018963968, 18014398509481984, 9007199254740992, 4503599627370496};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 431422661;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<long> R = {612499275440640769, 732381150095815937, 144115188075855872, 72057594037927936, 36028797018963968, 18014398509481984, 9007199254740992, 4503599627370496, 2251799813685248};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 224412639;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<long> R = {576460752303423488, 288230376151711744, 231045964591683585, 344699701299547521, 36028797018963968, 18014398509481984, 9007199254740992, 4503599627370496, 2251799813685248, 1125899906842624};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 533995859;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<long> R = {1000000000, 1000000000};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 420352509;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<long> R = {12345678987456526, 4587546231587956, 56485231524856975, 53216548951235687, 5689745213698521, 99999999999999999, 25487546321597856, 1265489856423154, 56213548756425879, 21358777456225876};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 200091287;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<long> R = {99988877766655544, 99988877766655544, 99988877766655544, 88877766655544, 99855544, 99988877766655544, 998887776665554, 999888777655544, 99988877766655544, 99988817766655544};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 420816458;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<long> R = {1000000000000000000, 999999999999999999, 999999999999999999, 1000000000000000000, 999999999999999999, 999999999999999999, 1000000000000000000, 999999999999999999, 999999999999999999, 1000000000000000000};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 990309104;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<long> R = {100000000000000, 100000000000000000, 100000000000000000, 1000000000000000000, 100000000000000, 100000000000000, 100000000000000000, 1000000000000000, 10000000000000000, 100000000000000000};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 959835785;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<long> R = {698592418393878689, 41176158769631317, 5928437347348326, 627483485536712, 56556167864743, 1612168692743, 232947913547, 41334996277, 3447279799, 459298488};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 747758942;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<long> R = {576460752303423488, 576460752303423488, 576460752303423488, 576460752303423488, 576460752303423488, 576460752303423488, 576460752303423488, 576460752303423488, 576460752303423488, 576460752303423488};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 161955037;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<long> R = {528108405744583338, 883492515133062955, 830551664052244655, 187638468590969912, 709640913966518229, 384525565537843774, 863679694317552710, 23364825948747538, 102901477313730040, 396366775498890592};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 467327797;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<long> R = {100000000000000001, 100000000000000002, 100000000000000003, 100000000000000004, 100000000000000005, 100000000000000006, 100000000000000007, 100000000000000008, 100000000000000009, 100000000000000010};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 673187124;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<long> R = {40000000000000, 40000000000000, 40000000000000, 40000000000000, 40000000000000, 40000000000000, 40000000000000, 40000000000000, 40000000000000, 40000000000000};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 927135074;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<long> R = {10000000001230020, 1000000000132020, 100010000100100, 200303000100230020};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 372675200;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<long> R = {1382875696, 1843654050, 1436430328, 951656720, 120033498};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 620810307;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<long> R = {576460752303423487, 576460752303423487, 576460752303423487, 576460752303423487, 576460752303423487, 576460752303423487, 576460752303423487, 576460752303423487, 576460752303423487, 576460752303423487};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 720959825;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<long> R = {718875778883073113, 902657733719666992, 100147082697904823, 918454075161672321, 206480380521277765, 861227749240591490, 582528414116888542, 189470114334510366, 144328622062251997, 585226965461233378};
    YetAnotherORProblem* pObj = new YetAnotherORProblem();
    clock_t start = clock();
    int result = pObj->countSequences(R);
    clock_t end = clock();
    delete pObj;
    int expected = 163076795;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653044&rd=14437&pm=11379
********************************************************************************
#include "cfloat" 
#include "cmath" 
#include "cstdio" 
#include "ctime" 
#include "algorithm" 
#include "map" 
#include "numeric" 
#include "queue" 
#include "set" 
#include "string" 
#include "utility" 
#include "vector" 
#include "iostream" 
using namespace std; 
typedef long long i64; 
const i64 MOD = 1000000009LL; 
 
i64 memo[63][1 << 10]; 
bool mark[63][1 << 10]; 
 
struct YetAnotherORProblem { 
  bool TestBit(i64 x, int bit) { 
    return (x & (1LL << bit)) != 0; 
  } 
  int GetNewMask(const vector<i64>& v, int bit, int mask, int one) { 
    for (int i = 0; i < (int)v.size(); ++i) { 
      if (i == one) { 
        const bool hasBit = TestBit(v[i], bit); 
        if (!hasBit && !(mask & (1 << i))) 
          return -1; 
      } else if (TestBit(v[i], bit)) { 
        mask |= 1 << i; 
      } 
    } 
    return mask; 
  } 
  i64 f(const vector<i64>& v, int bit, int mask) { 
    if (bit < 0) return 1; 
    i64& count = memo[bit][mask]; 
    if (mark[bit][mask]) return count; 
    count = 0, mark[bit][mask] = true; 
    for (int i = -1; i < (int)v.size(); ++i) { 
      const int nmask = GetNewMask(v, bit, mask, i); 
      if (nmask != -1) 
        (count += f(v, bit - 1, nmask)) %= MOD; 
    } 
    return count; 
  } 
  int countSequences(vector<i64> v) { 
    memset(mark, false, sizeof(mark)); 
    return (int)f(v, 62, 0); 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.16 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/