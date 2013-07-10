/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1745
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

class Gauss {
public:
    vector<string> whichSums(string target);
};

vector<string> Gauss::whichSums(string target) {
    vector<string> ret;
    return ret;
}


int test0() {
    string target = "42";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[3, 9]", "[9, 12]", "[13, 15]"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string target = "4";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string target = "17";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[8, 9]"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string target = "55";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[1, 10]", "[9, 13]", "[27, 28]"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string target = "1";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string target = "2";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string target = "3";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[1, 2]"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string target = "5";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[2, 3]"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string target = "6";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[1, 3]"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string target = "7";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[3, 4]"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string target = "8";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string target = "9";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[2, 4]", "[4, 5]"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string target = "10";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[1, 4]"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string target = "99999999997";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[2941176454, 2941176487]", "[5882352933, 5882352949]", "[49999999998, 49999999999]"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string target = "99999999998";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[862068908, 862069023]", "[3448275848, 3448275876]", "[24999999998, 25000000001]"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string target = "99999999999";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[61779, 451460]", "[415819, 610659]", "[704912, 834805]", "[1507244, 1572190]", "[2287927, 2331224]", "[4608327, 4629975]", "[5555555547, 5555555564]", "[11111111107, 11111111115]", "[16666666664, 16666666669]", "[33333333332, 33333333334]", "[49999999999, 50000000000]"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string target = "100000000000";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[60688, 451312]", "[925363, 1027762]", "[1240938, 1319062]", "[4872573, 4893052]", "[6392188, 6407812]", "[24412015, 24416110]", "[31998438, 32001562]", "[159999688, 160000312]", "[799999938, 800000062]", "[3999999988, 4000000012]", "[19999999998, 20000000002]"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string target = "65536";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string target = "4294967296";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string target = "68719476736";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string target = "39";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[4, 9]", "[12, 14]", "[19, 20]"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string target = "56";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[5, 11]"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string target = "656";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[5, 36]"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string target = "913";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[31, 52]", "[78, 88]", "[456, 457]"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string target = "8230";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[402, 421]", "[1644, 1648]", "[2056, 2059]"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string target = "3775";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[51, 100]", "[139, 163]", "[373, 382]", "[753, 757]", "[1887, 1888]"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string target = "52711";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[26355, 26356]"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string target = "47539";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[37, 310]", "[279, 415]", "[23769, 23770]"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string target = "730041";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[9321, 9398]", "[18700, 18738]", "[28066, 28091]", "[56151, 56163]", "[121671, 121676]", "[243346, 243348]", "[365020, 365021]"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string target = "890593";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[40471, 40492]", "[80958, 80968]", "[445296, 445297]"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string target = "3462649";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[1267, 2920]", "[3774, 4600]", "[21837, 21994]", "[32614, 32719]", "[43792, 43870]", "[65307, 65359]", "[1731324, 1731325]"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string target = "3453244";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[2334, 3514]", "[4359, 5089]", "[9867, 10210]", "[25324, 25459]", "[80287, 80329]", "[203124, 203140]", "[431652, 431659]"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string target = "10286461";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[24165, 24586]", "[48646, 48856]", "[5143230, 5143231]"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string target = "32142027";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[277, 8022]", "[6363, 10235]", "[11158, 13739]", "[24252, 25542]", "[27178, 28335]", "[55224, 55802]", "[83077, 83462]", "[124453, 124710]", "[166443, 166635]", "[249099, 249227]", "[373702, 373787]", "[747468, 747510]", "[5357002, 5357007]", "[10714008, 10714010]", "[16071013, 16071014]"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string target = "323600046";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[349755, 350678]", "[1050496, 1050803]", "[1400751, 1400981]", "[2451450, 2451581]", "[3852340, 3852423]", "[4202560, 4202636]", "[7354525, 7354568]", "[9806046, 9806078]", "[11557131, 11557158]", "[15409516, 15409536]", "[26966665, 26966676]", "[29418181, 29418191]", "[46228575, 46228581]", "[80900010, 80900013]", "[107866681, 107866683]"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string target = "679662059";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[46727, 59520]", "[103049, 109445]", "[578342, 579515]", "[1157564, 1158150]", "[1877339, 1877700]", "[3754949, 3755129]", "[339831029, 339831030]"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string target = "3674679277";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[204349, 221602]", "[421638, 430264]", "[830299, 834712]", "[1663908, 1666114]", "[9519702, 9520087]", "[19039693, 19039885]", "[1837339638, 1837339639]"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string target = "2766184524";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[112339, 134730]", "[366872, 374335]", "[986877, 989675]", "[1110567, 1113054]", "[2964362, 2965294]", "[8894329, 8894639]", "[38419194, 38419265]", "[115257677, 115257700]", "[307353832, 307353840]", "[345773062, 345773069]", "[922061507, 922061509]"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string target = "12624469209";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[63759847, 63760044]", "[127519842, 127519940]", "[191279804, 191279869]", "[382559657, 382559689]", "[573839499, 573839520]", "[701359392, 701359409]", "[1147679014, 1147679024]", "[1402718797, 1402718805]", "[2104078199, 2104078204]", "[4208156402, 4208156404]", "[6312234604, 6312234605]"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string target = "100000000000";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[60688, 451312]", "[925363, 1027762]", "[1240938, 1319062]", "[4872573, 4893052]", "[6392188, 6407812]", "[24412015, 24416110]", "[31998438, 32001562]", "[159999688, 160000312]", "[799999938, 800000062]", "[3999999988, 4000000012]", "[19999999998, 20000000002]"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string target = "9999999999";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[20709, 142929]", "[49999, 149999]", "[50002, 150000]", "[81312, 163130]", "[116669, 183334]", "[156059, 210604]", "[159537, 213194]", "[283337, 316669]", "[353027, 380299]", "[359317, 386145]", "[438894, 461115]", "[540904, 559085]", "[550154, 568039]", "[894454, 905564]", "[1095444, 1104534]", "[1113722, 1122664]", "[1227772, 1235889]", "[1674309, 1680270]", "[2047582, 2052459]", "[2461632, 2465690]", "[3353089, 3356069]", "[3694139, 3696844]", "[4098822, 4101260]", "[6149249, 6150874]", "[7390307, 7391659]", "[11086024, 11086925]", "[12299717, 12300529]", "[13549767, 13550504]", "[18449914, 18450455]", "[22172724, 22173174]", "[27100087, 27100455]", "[36900234, 36900504]", "[40650284, 40650529]", "[50504952, 50505149]", "[81300752, 81300874]", "[101010052, 101010150]", "[121951179, 121951260]", "[151515119, 151515184]", "[243902419, 243902459]", "[303030287, 303030319]", "[454545444, 454545465]", "[555555547, 555555564]", "[909090904, 909090914]", "[1111111107, 1111111115]", "[1666666664, 1666666669]", "[3333333332, 3333333334]", "[4999999999, 5000000000]"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string target = "99999999999";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[61779, 451460]", "[415819, 610659]", "[704912, 834805]", "[1507244, 1572190]", "[2287927, 2331224]", "[4608327, 4629975]", "[5555555547, 5555555564]", "[11111111107, 11111111115]", "[16666666664, 16666666669]", "[33333333332, 33333333334]", "[49999999999, 50000000000]"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string target = "123456789";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[5117, 16525]", "[5999, 16819]", "[12429, 20034]", "[13507, 20720]", "[30562, 34364]", "[32424, 36030]", "[6858702, 6858719]", "[13717417, 13717425]", "[20576129, 20576134]", "[41152262, 41152264]", "[61728394, 61728395]"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string target = "42";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[3, 9]", "[9, 12]", "[13, 15]"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string target = "92147483647";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[2099638, 2143075]", "[4231854, 4253572]", "[78489604, 78490777]", "[156980088, 156980674]", "[1245236229, 1245236302]", "[2490472513, 2490472549]", "[46073741823, 46073741824]"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string target = "50005000";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[1, 10000]", "[918, 10042]", "[5643, 11482]", "[12888, 16312]", "[21717, 23908]", "[24003, 26002]", "[26488, 28312]", "[42229, 43396]", "[72658, 73342]", "[79696, 80320]", "[124813, 125212]", "[136818, 137182]", "[364932, 365068]", "[399978, 400102]", "[625023, 625102]", "[684964, 685036]", "[2000188, 2000212]", "[3125305, 3125320]", "[10000998, 10001002]"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string target = "33333333333";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[191673, 321566]", "[480766, 545712]", "[748210, 791507]", "[1528893, 1550541]", "[5555555553, 5555555558]", "[11111111110, 11111111112]", "[16666666666, 16666666667]"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string target = "9999999967";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[4999999983, 4999999984]"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string target = "99999999977";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[49999999988, 49999999989]"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string target = "100000000000";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[60688, 451312]", "[925363, 1027762]", "[1240938, 1319062]", "[4872573, 4893052]", "[6392188, 6407812]", "[24412015, 24416110]", "[31998438, 32001562]", "[159999688, 160000312]", "[799999938, 800000062]", "[3999999988, 4000000012]", "[19999999998, 20000000002]"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string target = "9999999999";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[20709, 142929]", "[49999, 149999]", "[50002, 150000]", "[81312, 163130]", "[116669, 183334]", "[156059, 210604]", "[159537, 213194]", "[283337, 316669]", "[353027, 380299]", "[359317, 386145]", "[438894, 461115]", "[540904, 559085]", "[550154, 568039]", "[894454, 905564]", "[1095444, 1104534]", "[1113722, 1122664]", "[1227772, 1235889]", "[1674309, 1680270]", "[2047582, 2052459]", "[2461632, 2465690]", "[3353089, 3356069]", "[3694139, 3696844]", "[4098822, 4101260]", "[6149249, 6150874]", "[7390307, 7391659]", "[11086024, 11086925]", "[12299717, 12300529]", "[13549767, 13550504]", "[18449914, 18450455]", "[22172724, 22173174]", "[27100087, 27100455]", "[36900234, 36900504]", "[40650284, 40650529]", "[50504952, 50505149]", "[81300752, 81300874]", "[101010052, 101010150]", "[121951179, 121951260]", "[151515119, 151515184]", "[243902419, 243902459]", "[303030287, 303030319]", "[454545444, 454545465]", "[555555547, 555555564]", "[909090904, 909090914]", "[1111111107, 1111111115]", "[1666666664, 1666666669]", "[3333333332, 3333333334]", "[4999999999, 5000000000]"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string target = "99999999999";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[61779, 451460]", "[415819, 610659]", "[704912, 834805]", "[1507244, 1572190]", "[2287927, 2331224]", "[4608327, 4629975]", "[5555555547, 5555555564]", "[11111111107, 11111111115]", "[16666666664, 16666666669]", "[33333333332, 33333333334]", "[49999999999, 50000000000]"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string target = "123456789";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[5117, 16525]", "[5999, 16819]", "[12429, 20034]", "[13507, 20720]", "[30562, 34364]", "[32424, 36030]", "[6858702, 6858719]", "[13717417, 13717425]", "[20576129, 20576134]", "[41152262, 41152264]", "[61728394, 61728395]"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string target = "42";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[3, 9]", "[9, 12]", "[13, 15]"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string target = "92147483647";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[2099638, 2143075]", "[4231854, 4253572]", "[78489604, 78490777]", "[156980088, 156980674]", "[1245236229, 1245236302]", "[2490472513, 2490472549]", "[46073741823, 46073741824]"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string target = "50005000";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[1, 10000]", "[918, 10042]", "[5643, 11482]", "[12888, 16312]", "[21717, 23908]", "[24003, 26002]", "[26488, 28312]", "[42229, 43396]", "[72658, 73342]", "[79696, 80320]", "[124813, 125212]", "[136818, 137182]", "[364932, 365068]", "[399978, 400102]", "[625023, 625102]", "[684964, 685036]", "[2000188, 2000212]", "[3125305, 3125320]", "[10000998, 10001002]"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string target = "33333333333";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[191673, 321566]", "[480766, 545712]", "[748210, 791507]", "[1528893, 1550541]", "[5555555553, 5555555558]", "[11111111110, 11111111112]", "[16666666666, 16666666667]"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string target = "9999999967";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[4999999983, 4999999984]"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string target = "99999999977";
    Gauss* pObj = new Gauss();
    clock_t start = clock();
    vector<string> result = pObj->whichSums(target);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"[49999999988, 49999999989]"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=4560&pm=1745
********************************************************************************
/*
 *  ... I pity the poor soul trying to read through this code to challenge it...
 */
 
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <deque>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <set>
#include <map>
#include <numeric>
#include <ctime>
#include <functional>
#include <regex.h>
#include <queue>
 
using namespace std;
 
#define debug(x) cout << #x << " = " << x << endl
#define vout(x) cout << #x << ": {"; for (int blob = 0; blob < x.size(); blob++) {cout << x[blob]; if (blob!=x.size() -1) cout << ", ";} cout << "}" << endl
#define len length()
#define si size()
#define loop(A,B) for (A = 0; A < B; A++)
#define vi vector<int>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int> >
#define vvb vector<vector<bool> >
#define mod(A, B) ((((A) % (B)) + (B)) % (B))
#define b2e(A) (A).begin(), (A).end()
#define e2b(A) (A).rbegin(), (A).rend()
#define rev(A) std::reverse(b2e(A))
#define s(A) std::sort(b2e(A))
#define ss(A) std::stable_sort(b2e(A))
#define un(A) std::unique(b2e(A))
#define er(A) (A).erase(un(A), (A).end())
#define Fill(A,B) std::fill(b2e(A), B)
#define minelt(A) *min_element(b2e(A))
#define maxelt(A) *max_element(b2e(A))
#define nextp(A) next_permutation(b2e(A))
#define prevp(A) prev_permutation(b2e(A))
 
string itos (int i) {stringstream s; s << i; return s.str();}
string lltos (long long i) {stringstream s; s << i; return s.str();}
int ipow(int a, int b) {return (int) (std::pow((double) (a), (double) (b)));}
template <class T>
ostream& operator << (ostream& os, vector<T> temp) {
  os << "{";
  for (int i = 0; i < temp.si; i++) {
    if (i) os << ", ";
    os << temp[i];
  }
  os << "}";
  return os;
}
int gcd(int a, int b) {if (a==0 || b==0) return max(a,b); if (a > b) return gcd(b, a); if (!(b % a)) return a; return gcd(a, b % a);}
 
//----------------------------
 
class Gauss {
  public:
  vector <string> whichSums(string target) {
    stringstream s;
    s << target;
    long long W;
    s >> W;
    vs ret;
    for (int i = 2;; i++) {
      string temp;
      if (i % 2 && (W / i - (i / 2)) <= 0) break;
      if (i % 2 == 0 && (W / i - ((i - 1) / 2)) <= 0) break;
      if (i % 2) {
        if (W % i == 0) {
          temp += "[";
          temp += lltos(W / i - (i / 2));
          temp += ", ";
          temp += lltos(W / i + (i / 2));
          temp += "]";
          ret.push_back(temp);
        }
      }
      else {
        if (W % i == (i / 2)) {
          temp += "[";
          temp += lltos(W / i - ((i - 1) / 2));
          temp += ", ";
          temp += lltos((W + i-1) / i + ((i - 1) / 2));
          temp += "]";
          ret.push_back(temp);          
        }
      }
    }
    rev(ret);
    return ret;
  }
};

********************************************************************************
*******************************************************************************/