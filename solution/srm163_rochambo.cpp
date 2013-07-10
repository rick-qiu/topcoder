/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1810
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

class Rochambo {
public:
    int wins(string opponent);
};

int Rochambo::wins(string opponent) {
    int ret;
    return ret;
}


int test0() {
    string opponent = "PS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string opponent = "PSRRPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
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
    string opponent = "PSRPSRPRSR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string opponent = "SRPSRPSPRSPRPSRPSRP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string opponent = "RPPPRRPSSSRRRSRSPPSSPRRPSRRRRSPPPPSSPSSSSSRSSSRPRR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string opponent = "SRPPPRPSPSPSSPPRPPRRPSRRRSSSRRRSRPPPRRPSSRSSSRSRPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string opponent = "RPPSPRPPRRRSSRSPSPSPSRRRRSPPRRRSPRSPRSSSSPPRPSPRSP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string opponent = "SRSSSRSRSRPSPSRRSSRPSSSSRPRSRRRRSRSSSSRSRPSRPRPRPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string opponent = "PRRSSRSSSSSPRPPSSPSRPRRRPPSRRRSPPRRPRSPSPRSPPRRSRP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string opponent = "PPPSPPSSPRPPSRRPSSSPPRSSSPSPSSRSSPPRPPSSSSPRPRRRPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string opponent = "SRRPRSPSRSRPRSPSPSPRSPSRPPRRRSRRPSSRRSPSPPRPSPPPPP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string opponent = "RSPRPPPPRRSRRPPRPSPSRSSPRPSSSRRSRPPSPPRPSPRSSSRRRR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string opponent = "RRPRSSRRSSPRSRSRPPRPSSPSPPRSPRSSPSPPRSRRSPSRRRSRPP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string opponent = "PRSSRRSSSRSRSSSPPRSPPRSRRPPPPSPRSPPRRRSRSPRRSPPSPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string opponent = "SPPSPRRSPRRRRSPSSRSPRPRSRRRPPPSSSSSRRSRPRRRSRPRSSP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string opponent = "SRRSPPPSSSPRRRPRRRPRPSRRPRPPPSRSSPPPPSRSPRSPPSPPPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string opponent = "SRRPPPRSSSRRRSPPRRRRRRSSRSSSRPRSRSPRPPRSRRRSRRSPSP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string opponent = "RRPPSPPSSRSSRRRPSRRSPPSPSPRPRSSPRSSRRRSRSSPRSRPSPP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string opponent = "RPSPSPRSPSRSRRRRSPSPSRRSPSRSSRPRRSSSRSPRRSRPPSPRPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string opponent = "SRSPPPSSRPRPPPSRSRSSPRPRSRRRRSRPSPSSRSPPSPPSRSPPSP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string opponent = "SSRRSPRPPSSSRPSRRPPSSPPPSPRRSRSRPSSPSSSRRPPSSRRRRR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string opponent = "PSPRPPSRPSSPPPRSSSSRPRRPSRSSRSSRRRRRPSSPRPRSRSPPPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string opponent = "RRSSRRRPRRRSRPRSRSPRPRRRPRSRPPRRRSSRSSRRSRRSSPRRRR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string opponent = "SSPRRPSSSSSRPSSSRPRSSPPSPSPSPPSPPSRPRPRRSRRSRPRPSS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string opponent = "SPRPPRRSSPSRSPRRSSSPPRRSRRRSPRSPRPPRRSSRRSRRSPSSPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string opponent = "RRRRRRRRPSPSSPSPRRSPRPSPSRRPPPRSRSRPSSPRPRPSSSPSSP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string opponent = "RPPSRRPSPSRPRPRRSRPSSPSSRPSRPPSPSSPPPRSRPSRSPRPPPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string opponent = "PSRRPPRPRSRRSSPPRRSSPRPSRRSSRSRSPRPPSPRRPRPPPPRPRR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
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
    string opponent = "RRRPPPPRSSRSSSRRSRSSPPPSPRSRPRPRSPRSRRRSSSSPPRSPPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string opponent = "SRPRPRRSPSRSPSPPRPRRRPPPSRPPSSPPRSPPPSRSSRRRSPSRSR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string opponent = "SRRSPPRPSSRPRPSSSPRSPSSSPSPPPSPSSRRPSRRRSSPPRPRSPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string opponent = "RSRRSPPRPPSPRSSPSPPPSSPPSSRRPSSSSRSPSPRPPRSRSPPPPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string opponent = "PRRSRPPSRSRPSSPRPPSPPSPSRRPRSPSRSRRSPRPPPSSSSSSSRP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string opponent = "SRRSSPPSPPRSPSPPSSPRPRPSSRRRRSRPSSRSPPPPPSPRPRRPPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string opponent = "PPPSPRPRSSPRRPRPRSRPPRSSSSSRPSPRSRSRSPSRSSRPSPPSRR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string opponent = "PPRRPSSPPPPSRSPRSRSSRPSRPRRRPRRSRPSSPPRRSPRRPRSRSR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string opponent = "PRSSPSSPSRSPPSPPRRSSPRRSPPPRRPSPSSRPPSPPPPPSPSSRRR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string opponent = "SSSPPSSRRSSPRRSPSRSRSRRSRSPPRSSRRSPSPPPSPRRRRSSPRP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string opponent = "RRSPSSRRPPRPRSPRRRSRRPSSPSRSPPPSRSSRPSSRRSSRSSSRRS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string opponent = "SSSPPRPSSRPPSSPRRRPRSRPRSPRSRRRPRPRRSSSSSSRSSRRPSR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string opponent = "RRPPPSPSSPPRRPPSRPPRSRPSRSSPSPRPSPPRPSPSSPPSRRPSPP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string opponent = "PSPSPRSSRSSSRSRSSPRPRRSPPSSPPPPSRPSRRPPPRRSPRPRSPP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string opponent = "RPPSSRRRSSRRPPSSPSPRRSPPSRRPRSPRSPPRSRPPRRRSSSRRPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string opponent = "SSSRRRSSSSSRPRSSSRRRPRSSRRRSSPSPSRSSSSSPSSSPRSPPPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string opponent = "SRPSPPSSSSPRRPSPPRPRSSSSRSPRRPRRSRPRPSPSRPRPRSRPRS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string opponent = "RPSSPRPSSPPSPPRSSSRSSPSRRSPSSSPPSPPSPRSPRPRRRSRRPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string opponent = "RRSSSSRRPPPSRRSPRRSPRPRSPRPRRPRRSSSPPPPPPSRPRRPPRR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string opponent = "RRRSRRSRPSRSRPSRPPSRSRSRRRRSSRSSRRPSPRSRRSSPSRPRRP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string opponent = "SRSRPRSRRRPPSSPSPRSSRSSRPPPSRPPSSSSRSRSRPRPSPRPRPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string opponent = "RRSSPSPRSSPSSPSRRPRRPSSRSRPRPSSSRSSPSRSPPSPSPRSPSS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
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
    string opponent = "PPSSSSPRSSSRPSPSPPPPSPPRRSPSSRPRRSPRRPRSSSPPRPPSPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
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
    string opponent = "SPSRRRSSRRPRPPSRRPSPRSSPPRRSSSRPSPPSSRPPRRPRSSPSSR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string opponent = "RRSPRRRRRPSRRSRSRPRPSSSRSRSPSPPPRSPPRSSPPRPSSRPSPP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string opponent = "SPSSRSPRPRSPRRSSSPRRPSPPPPSRPPPRSPPPPSPRRPPPPRPRPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string opponent = "SRRPRSPRSRSPSRRRPPPSSRSRPSSSPRSRRSSRPPRPPRPRSSSPSR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string opponent = "RSSRSRSSSSPRSPRPRRPPPSRSRRPSPPSRRPRSPSRRPPRPSPSPSS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string opponent = "SPRRSPRRSSSRRSPPSPSRPRSSSPPSPSRRRSSSPRSRPPSRPSPSPP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string opponent = "RPRSRSRSSSPPRRSRPRRRPSPPSPPRSPSRSSSRSRSPRRRRRRPPPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string opponent = "PRSRRRPRSPPPSPPSRRRSRRRRPSPPPPPRRSPRRRPPRRPPSPRPSR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string opponent = "PPSRSRPPRSRRSRPPSPRRSRPRPSRRRPRPRRRPPRSSPPPSPRSRSP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string opponent = "PRRRRSSRSRPSSSSPPPPSPPSRPRRPPPPRPSSRRPSSPPSSPSPSPP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string opponent = "PPPPRPSRRPPPPSRRSRSPRRRRPRSSPSPPRPSPPRRSRRPRRPSRPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string opponent = "SSRRSRPSPRSSPPSSPSPRRRPRPPSSPRSPPSRRPRRRPSRSPRSRPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string opponent = "PSRPSPRRRSSRPPPRSSPRSPPPPPSPPRPRPSRRRRSSRSSRPPRSRR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string opponent = "RPPRPPRRRSPRRRSPPPRPSSSRRPSPPSRSRRPSSPRSRSRPSSPRSR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string opponent = "SRPSSPPSRPPPSSSPSPPSPPSRSRSSSPSRRSPSSSRPRRPPRRPRPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string opponent = "PSPRPPPSRRPPPSRPPSRSPRRRPSSRRRPRSPSSPSRSSSSPSPSPPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string opponent = "PPPRPSSRSPSPRSPRSPPSPPSSSRRRSPSPSPPRRRPSPRPRPRRPPP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string opponent = "PPRSSRPSRSSRPRSRSSRSRRSSSPSSPPSPRRPPSPRPSPPSRRRRSR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string opponent = "SPPRSSSRSRRPSSSRPRRPSRPSRSSSPRPPPSRRSRPRRPRSRRRPRP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string opponent = "SRSRRSRPRRPPRSSSSRRRPRRSSRSSPPPSRRPRRSRSRSRSRPPRSS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string opponent = "RPSPSRPRSSRSPPSSRRSPSPPPSPSSPPPPRRPPRSRRSSPSSRSPRS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string opponent = "PPRSSRPSRRSSSPSRPPRSRRSPRSPSPPRPPPRPRRPPRRRSRSRSSP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string opponent = "RPSRPPSSRRSSSSSPPPPRPPRRSRRRPRSSRPRRPRPSRSRRSSSRPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string opponent = "SSSRRSSSPRSSSRSPPRPSRRRSPPPRSRPRRPPRRRRRPPSPRPRRRS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string opponent = "RPSPPPPSRRSPRPRSPRPSRSRSSRPSRSPPRSPPSRRPPSRRRRSSPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string opponent = "SPSSSSRPPSRPPPSRRPRPPPPPSSRPRRSSRSSRSRRRRRPSRPPSSP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string opponent = "PSSSPPSRPPSSPRSPRSPRRSPRSRRRPRPPPPRRSSPPRRRPSSSSPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string opponent = "PSRRSSSRSRPRRSRSRRRPPSSRRPPSRRRRSPRSPSRPSPPSPPSPSR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string opponent = "RRPRPPRPPPPSSPSPSSSPSRPSSRSPPPSRSPRPPRPRRSRPSRRSRR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string opponent = "RRPPSRPPPRSRPPRPSRSRPPPRSRRSPSRPPRRPSRSPPPSPRRPPPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string opponent = "RSPPPSRPSRRRPPSSPPSPRRSPRPSPPPRPPPRSRSSRRSRRRPRRPP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string opponent = "SRSSSSSRRPRPSPRRPRRRPRPPRPSSPSSRSRPSRRSSRRSRSPSPPP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string opponent = "RSSRRRSPRPRSRPSSPSPPPSRRSRRPRSPPPSPPPSPRSSSSPPPPPP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string opponent = "PRPPRRSRPPSPPSPRPPRPPPPSRRPRRPSRSSSPPPSRRRRPSRPPSP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string opponent = "RSRPPPSSSPRSPRRRSSPPRSRRPRSPSPPPRSSRRSSRPRRPSPRRSP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string opponent = "PRSSPPPRSPPRPPSRRPSRRRRSPPRRPRSPRPSPSRSPRPPRSSSPRS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string opponent = "RSRPSRPSPPRPRSRSSPPRRRRSSSSRPPRSPRSPSRPPSSPSRSPSPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string opponent = "SRRPPSSRSPSRRRRSPSRRSRPPSPPSRRPSSSPPSPSSPPPSSPPSPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string opponent = "SSPSPPSRRPPSSRPRSSRRPSRSSPSSRSSSSSPPRSSPPPSPSRSSPP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string opponent = "PPPRRSRPPRSPSPPSPSPSPRPRSPPRRRRSRPSSSSSRSRPSRSSSRR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string opponent = "SRRSRSSPRPPPSSRSPSRSPPRRPSPPPRSSSPPPRSSPPSSRPSSPPS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string opponent = "SPRRPPRRSSPSSPRSRRRSRPPRRRPSSRPPSPPPSRPRPSRRRRPSPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string opponent = "RRSSSSSRPPPRSPPPRPPPPSPRRPPRRRRRPRRPPPRSPPPPPPRSSP";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string opponent = "SRSPRSSRRPRSSRRRRSSSPRRPRRSPPSSSPPSSPPRRPSPRRRPRRR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string opponent = "RSRSRPRRSRPRPPPSRRPPPRSSPSPSRPPRPPPSSSSPRPSSSRPRRS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string opponent = "SRPSRRSRPSRPRSPRPSRRSSRSSRPRPPSSRPPPPSPRPSRPPSRPPR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string opponent = "PPRRSRSRSPRPRSRPSPPPPSPSPSSPPRPSPSSRRSRPRPSPPSSPRR";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string opponent = "SRSRRPRPSRSSPPSSPPRRRSRSRPRPRSSRRRSRRPSSRRSRSRSRRS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string opponent = "PSSRSSSRSRSRRPPPPSPRPSSPRPSRPPSRPRPSSPPSRRSSRRSPSS";
    Rochambo* pObj = new Rochambo();
    clock_t start = clock();
    int result = pObj->wins(opponent);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=4620&pm=1810
********************************************************************************
#include <algorithm> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
using namespace std; 
 
#define REP(i,n) for(int i=0;i<(n);++i) 
#define FOR(i,a,b) for(int i=(a);i<=(b);++i) 
#define FORD(i,a,b) for(int i=(a);i>=(b);--i) 
#define FOREACH(i,c) for(typeof((c).begin()) i=(c).begin();i!=(c).end();++i) 
typedef long long LL; 
const int INF = 1000000000; 
typedef vector<int> VI; 
template<class T> inline int size(const T&c) { return c.size(); } 
 
char buf1[1000]; 
 
string i2s(int x) { 
  sprintf(buf1,"%d",x); 
  return buf1; 
} 
 
 
struct Rochambo { 
  // MAIN 
  int wins(string s) { 
      int r=0; 
      REP(i,size(s)) { 
          char c; 
          if(i<2) c='S'; 
          else if(s[i-1]!=s[i-2]) c = 'R'+'P'+'S'-s[i-1]-s[i-2]; 
          else c = s[i-1]; 
          if(c==s[i]) ++r; 
      } 
      return r; 
  } 
   
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/