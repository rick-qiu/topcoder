/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1941
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

class ResistorCombinations {
public:
    double closestValue(vector<string> resistances, double target);
};

double ResistorCombinations::closestValue(vector<string> resistances, double target) {
    double ret;
    return ret;
}


int test0() {
    vector<string> resistances = {"2", "3", "5"};
    double target = 2.5;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> resistances = {"2", "3", "5"};
    double target = 1.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 0.967741935483871;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> resistances = {"10.25", "13.31", "6.777", "12.2"};
    double target = 10.5;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 10.510805181371511;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> resistances = {"10000", "2000", "300", "40", "5"};
    double target = 20000.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 12345.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> resistances = {"125.10000", "00270.9", "000625.55", "90.100000", "0015.60000"};
    double target = 153.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 152.75975812465552;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> resistances = {"999999.00", "999999", "999999"};
    double target = 300000.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 333333.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> resistances = {"400000", "600001", "500001", "499999"};
    double target = 500000.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 500000.249999875;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> resistances = {"853777", "702163", "913915", "126697"};
    double target = 534755.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 523780.12231525953;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> resistances = {"448873", "304173", "121581"};
    double target = 476997.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 448873.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> resistances = {"860787", "57541.1", "825464", "491183"};
    double target = 201374.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 226805.27487635709;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> resistances = {"899579", "732269", "156698", "869380", "960329"};
    double target = 772070.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 772178.6356008628;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> resistances = {"436385", "125676", "834882", "647762"};
    double target = 281266.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 278980.2654024597;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> resistances = {"925162", "265426", "490406"};
    double target = 416049.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 415984.2597796304;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> resistances = {"947193", "382699", "599985", "809374", "816433"};
    double target = 259147.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 259838.6344007456;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> resistances = {"427504", "405799"};
    double target = 985604.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 833303.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> resistances = {"562242", "830593"};
    double target = 184581.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 335283.26722547895;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> resistances = {"988440", "852527", "704291", "21417.4", "936873"};
    double target = 159341.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 214044.45202550225;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> resistances = {"479656", "512303", "846709", "610356", "405316"};
    double target = 4024.9;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 107256.55532903652;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> resistances = {"141271", "833374", "828757", "436540", "364303"};
    double target = 6567.19;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 68866.39716958712;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> resistances = {"695668", "770926", "192186"};
    double target = 2873.56;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 125977.8828271119;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> resistances = {"296231", "352222", "885810", "50993.1", "74265.1"};
    double target = 4427.54;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 24740.50665974997;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> resistances = {"924257", "442168", "896387"};
    double target = 1708.01;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 224259.31579795023;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> resistances = {"392282", "316367", "820960"};
    double target = 820.11;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 144338.4964605483;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> resistances = {"238400", "874871", "934010"};
    double target = 2062.12;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 156047.4095376196;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> resistances = {"82846.6"};
    double target = 8865.71;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 82846.6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> resistances = {"617848", "611706", "10132", "301036", "57484.4"};
    double target = 4609.31;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 8152.060307776573;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> resistances = {"879985", "835702", "591692", "284099"};
    double target = 3241.79;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 132574.12499884696;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> resistances = {"6364.91"};
    double target = 8295.56;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 6364.91;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> resistances = {"3962.27", "1243.55", "1418.52", "9304.83", "1159.14"};
    double target = 8925.56;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 9304.83;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> resistances = {"8854.73", "2938.5", "5550.6", "9320.41"};
    double target = 1884.89;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 1921.2716620788162;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> resistances = {"1339.24", "5117.09", "5440.09", "2677.19"};
    double target = 4742.72;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 4543.138990673527;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> resistances = {"3332.39", "815.71"};
    double target = 7079.21;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 4148.1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> resistances = {"1858.67", "2583.1", "7123.47"};
    double target = 3071.9;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 2735.8546248845682;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> resistances = {"375.105", "6796.18", "6140.95", "9984.37", "6151.79"};
    double target = 9159.3;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 9166.266348150513;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> resistances = {"3305.4"};
    double target = 7158.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 3305.4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> resistances = {"1898.59", "3191.86", "4797.05"};
    double target = 2143.92;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 2161.471098902655;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> resistances = {"9675.39", "4535.22", "4316.4", "8043.41"};
    double target = 2004.06;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 1966.149805603681;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> resistances = {"4969.87", "643.061", "7115.01"};
    double target = 3.602;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 527.1973536982091;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> resistances = {"3689.36", "9050.47", "7136.52", "5026.72"};
    double target = 6.089;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 1387.7277841854066;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> resistances = {"3003.13", "2247.66", "7818.73", "5293.99", "2559.97"};
    double target = 7.595;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 673.2582709227519;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> resistances = {"9845.06", "8508.73", "256.095", "558.245"};
    double target = 0.705;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 169.0551548251301;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> resistances = {"5222.95", "8559.87", "8928.35", "9934.47", "7520.76"};
    double target = 0.741;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 1529.251751909195;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> resistances = {"6723.14", "7531.64", "2183.74", "5284.68", "7176.14"};
    double target = 1.149;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 936.3119648691672;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> resistances = {"8427.21", "386.607", "3224.42", "4255.26", "6953.79"};
    double target = 9.373;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 294.61916648751964;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> resistances = {"79.172", "9813.59", "4827.15"};
    double target = 5.053;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 77.28101213697846;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> resistances = {"7161.72", "8914.66", "6846.02", "3909.18"};
    double target = 3.077;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 1529.7901373096863;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> resistances = {"1350.65", "1792.73", "1623", "7482.16", "7905.45"};
    double target = 8.87;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 459.8796520046084;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> resistances = {"9.381", "7.93", "7.48", "6.604", "3.386"};
    double target = 1.359;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4153272986660834;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> resistances = {"1.954", "6.079", "3.702"};
    double target = 1.365;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2789441301272986;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> resistances = {"3.732", "9.836", "8.432", "4.563"};
    double target = 3.017;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9638226242347363;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> resistances = {"3.583", "4.91", "8.467"};
    double target = 8.116;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 8.467;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> resistances = {"5.528", "8.071", "0.107", "8.256", "8.52"};
    double target = 2.353;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3563180409186497;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> resistances = {"8.154", "6.43", "3.477", "5.048"};
    double target = 6.52;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 6.594814876533858;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> resistances = {"3.414", "0.81", "5.719", "7.925", "8.298"};
    double target = 2.131;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 2.133947426592757;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> resistances = {"0.751", "5.022", "2.817", "8.652", "3.924"};
    double target = 4.695;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 4.7087616787929;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> resistances = {"1.732", "1.917", "4.404", "2.743"};
    double target = 0.395;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5914897880175376;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> resistances = {"125.10000", "00270.9", "000625.65", "90.100001", "0015.60000"};
    double target = 153.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 152.76456574578333;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> resistances = {"1", "2", "3"};
    double target = 2.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> resistances = {"10.25", "13.31", "6.777", "12.2"};
    double target = 10.5;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 10.510805181371511;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> resistances = {"1"};
    double target = 999999.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> resistances = {"2", "3"};
    double target = 2.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> resistances = {"1", "2"};
    double target = 2.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> resistances = {"3", "4", "5", "6"};
    double target = 7.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> resistances = {"10"};
    double target = 1.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> resistances = {"999999", "999999", "999999", "999999", "999999"};
    double target = 999999.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 999999.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> resistances = {"200"};
    double target = 1.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> resistances = {"1", "2"};
    double target = 1.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> resistances = {"4", "2"};
    double target = 2.0;
    ResistorCombinations* pObj = new ResistorCombinations();
    clock_t start = clock();
    double result = pObj->closestValue(resistances, target);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=286907&rd=4660&pm=1941
********************************************************************************
//program framework generated with WishingBone's parser :)-
 
//common header
#ifdef WIN32
#  pragma warning(disable:4786)
#  define for if (0); else for
#endif
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
 
//64 bit integer definition
#ifdef WIN32
#define in_routine(type,spec) \
istream& operator>>(istream& s,type &d){char b[30];s>>b;sscanf(b,spec,&d);return s;}
#define out_routine(type,spec) \
ostream& operator<<(ostream& s,type d){char b[30];sprintf(b,spec,d);s<<b;return s;}
typedef signed __int64 i64; in_routine(i64,"%I64d") out_routine(i64,"%I64d")
typedef unsigned __int64 u64; in_routine(u64,"%I64u") out_routine(u64,"%I64u")
#else
typedef signed long long i64;
typedef unsigned long long u64;
#endif
 
//common routines
#ifdef WIN32
#define min(a,b) _cpp_min(a,b)
#define max(a,b) _cpp_max(a,b)
#endif
#define abs(a) ((a)>0?(a):-(a))
#define s2d(s,d) {istringstream(s)>>d;}
#define d2s(d,s) {ostringstream t;t<<d;s=t.str();}
int gcd(int a,int b){for(int c;b;c=a,a=b,b=c%b);return a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}
 
//remove routine
template <class T>
void remove(vector<T>& v,const T&e){
  v.resize(remove(v.begin(),v.end(),e)-v.begin());
}
template <class T>
vector<T> remove_copy(vector<T>& v,const T&e){
  vector<T> result;
  remove_copy(v.begin(),v.end(),back_inserter(result),e);
  return result;
}
 
//output routine
ostream& operator<<(ostream& s,string d){
  s<<'\"'<<d.c_str()<<'\"';
  return s;
}
template <class T>
ostream& operator<<(ostream& s,vector<T> d){
  s<<"{";
  for (typename vector<T>::iterator i=d.begin();i!=d.end();i++)
    s<<(i!=d.begin()?",":"")<<*i;
  s<<"}";
  return s;
}
 
//parsing routine
template <class T>
vector<basic_string<T> > parse(const basic_string<T> &s,const basic_string<T> &delim){
  vector<basic_string<T> > ret(0);
  for (int b,e=0;;ret.push_back(s.substr(b,e-b)))
    if ((b=s.find_first_not_of(delim,e))==(e=s.find_first_of(delim,b)))
      return ret;
}
vector<int> intparse(const string &s,const string &delim=" \t\n"){
  vector<string> tmp=parse(s,delim);
  vector<int> ret(0);
  int t;
  for (vector<string>::iterator i=tmp.begin();i!=tmp.end();i++)
    sscanf(i->c_str(),"%d",&t),ret.push_back(t);
  return ret;
}
 
//name mapper
class mapper{
public:
  map<string,int> m;
  vector<string> v;
  void reset(){
    v.clear();
    m.clear();
  }
  int size(){
    return v.size();
  }
  int get(const string str){
    if (m.find(str)==m.end()){
      m[str]=v.size();
      v.push_back(str);
    }
    return m[str];
  }
  string get(int i){
    return v[i];
  }
  vector<int> get(const vector<string>& strs){
    vector<int> ret;
    ret.reserve(strs.size()+2);
    for(int i=0;i<strs.size();i++)
      ret.push_back(get(strs[i]));
    return ret;
  }
  vector<string> get(const vector<int>& is){
    vector<string> ret;
    ret.reserve(is.size()+2);
    for(int i=0;i<is.size();i++)
      ret.push_back(get(is[i]));
    return ret;
  }
};
 
 
class ResistorCombinations{
public:
  double ret, target;
  int n;
  void calc(vector<double> r) {
    for (int i = 0; i < r.size(); ++i) {
      if (fabs(r[i] - target) < fabs(ret - target)) ret = r[i];
    }
    if (r.size() == 1) {
      return;
    }
    for (int j = 0; j < r.size(); ++j) {
      vector<double> rrr = r;
      swap(rrr[j], rrr.back());
    for (int i = 0; i < r.size() - 1; ++i) {
      vector<double> rr = rrr;
      rr.pop_back();
      rr[i] += rrr.back();
      calc(rr);
      rr[i] = rrr[i] * rrr.back() / (rrr[i] + rrr.back());
      calc(rr);
    }
    }
  }
  double closestValue(vector<string> r,double tt){
    target = tt;
    ret = 1e20;
    n = r.size();
    vector<double> te(n);
    for (int i = 0; i < n; ++i) sscanf(r[i].c_str(), "%lf", &te[i]);
    calc(te);
    return ret;
  }
};

********************************************************************************
*******************************************************************************/