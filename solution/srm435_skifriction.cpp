/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10294
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

class SkiFriction {
public:
    int bestPosition(string skiFriction, string pathFriction);
};

int SkiFriction::bestPosition(string skiFriction, string pathFriction) {
    int ret;
    return ret;
}


int test0() {
    string skiFriction = "66";
    string pathFriction = "1543627";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string skiFriction = "46575";
    string pathFriction = "1832537";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string skiFriction = "3244";
    string pathFriction = "9753877146";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string skiFriction = "6988";
    string pathFriction = "3241243";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string skiFriction = "144";
    string pathFriction = "758";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
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
    string skiFriction = "117";
    string pathFriction = "7268";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string skiFriction = "835";
    string pathFriction = "188";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
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
    string skiFriction = "3684";
    string pathFriction = "941117";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string skiFriction = "6";
    string pathFriction = "466927394";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string skiFriction = "28615";
    string pathFriction = "955881";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string skiFriction = "916";
    string pathFriction = "87671937";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string skiFriction = "9981";
    string pathFriction = "77372";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string skiFriction = "5";
    string pathFriction = "6326517873";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string skiFriction = "3";
    string pathFriction = "3179146";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string skiFriction = "45";
    string pathFriction = "15196";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string skiFriction = "3254";
    string pathFriction = "1236932972";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string skiFriction = "4987";
    string pathFriction = "41859346";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string skiFriction = "691";
    string pathFriction = "1693659848";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string skiFriction = "6";
    string pathFriction = "65";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string skiFriction = "377";
    string pathFriction = "511844";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string skiFriction = "93582";
    string pathFriction = "725112";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
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
    string skiFriction = "845";
    string pathFriction = "1773";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string skiFriction = "3";
    string pathFriction = "939544";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string skiFriction = "345";
    string pathFriction = "5466";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string skiFriction = "44";
    string pathFriction = "6148446941";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string skiFriction = "6723";
    string pathFriction = "562516639";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string skiFriction = "7841";
    string pathFriction = "716637922";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string skiFriction = "85497";
    string pathFriction = "22669919";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string skiFriction = "1";
    string pathFriction = "52579343";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string skiFriction = "124";
    string pathFriction = "8249894";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string skiFriction = "465258884236";
    string pathFriction = "8934286315697816879499";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 157;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string skiFriction = "8549775554566126852891858339228769734259473773367";
    string pathFriction = "24278778569344914499136372597926113969715516896214";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string skiFriction = "8452244882942868434458";
    string pathFriction = "248559847166978757588325448586699452113686273737";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 433;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string skiFriction = "751765871";
    string pathFriction = "646317526632483928262699152812845265";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 409;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string skiFriction = "95257363432248177879937981475744936442673666242";
    string pathFriction = "2659938719356683646941464995211175945786711147211";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string skiFriction = "725278853951894738392791525625287672366339418789";
    string pathFriction = "86355196565772218414747655393991593793226691518429";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string skiFriction = "7191553259142169761994897681";
    string pathFriction = "5335337748936354922391338972557989211";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string skiFriction = "54426858229348169666882589377";
    string pathFriction = "4965193583675864259517421283855228737755993378";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 288;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string skiFriction = "81541171168322523363938517514169181865861581412";
    string pathFriction = "357353559931989758513252412721843547761433499264";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string skiFriction = "92216147986767";
    string pathFriction = "92765518727632791";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string skiFriction = "911925791438";
    string pathFriction = "278621677532646521492214875271395854";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 383;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string skiFriction = "8241236382493384129549242888316";
    string pathFriction = "279193384655638626165974842846531";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string skiFriction = "316568813418992756418247171";
    string pathFriction = "7269292759553329234597559827339943659795";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 224;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string skiFriction = "476483526983239944";
    string pathFriction = "63673993485792131369637759421";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 188;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string skiFriction = "2715245248984";
    string pathFriction = "749553416851792871356268";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string skiFriction = "96359932";
    string pathFriction = "569943573364813838996369327926369933287481641";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 610;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string skiFriction = "24481786487856483355451168222971187135772236872";
    string pathFriction = "753892959859599684689138364114878867932786634362";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string skiFriction = "174112363364812766666149653714412529423438816951";
    string pathFriction = "96998861231349268199339818583522812485495336242738";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string skiFriction = "584472652";
    string pathFriction = "4444389727947531493246957643";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 286;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string skiFriction = "5128438935272346449158288652771359883763";
    string pathFriction = "5927358439618463869549738633239628124764424248";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string skiFriction = "2425712765864167346453784";
    string pathFriction = "131859964644188841997921143834317182955216584178";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 364;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string skiFriction = "456346";
    string pathFriction = "87881187146881967241216122445971458546949695";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 495;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string skiFriction = "811959933952385935";
    string pathFriction = "646993178121818657558499464169423719194694";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 417;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string skiFriction = "54588931741574889599777556613";
    string pathFriction = "7639486772156682257142526953189541276723817265478";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 337;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string skiFriction = "522816766545755899422929252599329";
    string pathFriction = "9975337465881874794685877777868634";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
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
    string skiFriction = "667999661234897259934691";
    string pathFriction = "3955351618494975221962461";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string skiFriction = "94583758151811628915414491334391428771";
    string pathFriction = "75536495986214623453559592246281713122588816245";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 155;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string skiFriction = "575934295318368762561946622";
    string pathFriction = "559924627881886845584942758377722692933";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string skiFriction = "1237985418947342724462465173197287685896687281";
    string pathFriction = "39554669866163552289576132549459194439313627949168";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string skiFriction = "151859376495";
    string pathFriction = "8981698937692575145521811365299";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 302;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string skiFriction = "85742315164992493633611";
    string pathFriction = "171247823332524378247347869441125836685617";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 309;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string skiFriction = "3896455728866268348464427263918375889331826519";
    string pathFriction = "418549937867855127676696581797716359221816661849";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string skiFriction = "96234652498";
    string pathFriction = "684622832435784693987891249528274325478318";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 505;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string skiFriction = "85924981669681619225536163673438697885852587345";
    string pathFriction = "357873613273372968752391575799792478439624752827";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string skiFriction = "623883347715596655";
    string pathFriction = "724951246328811474";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
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
    string skiFriction = "181835792229711432575763344615983764";
    string pathFriction = "239326726125581923264548239963973682253764381382";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string skiFriction = "95559162937993251";
    string pathFriction = "6332654534344998289678626647128558611";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 346;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string skiFriction = "331374341299565271796512759341";
    string pathFriction = "63797298287841356295723896599395462151949";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 191;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string skiFriction = "215338423815471877961392351969289612";
    string pathFriction = "214986365832589752872748625996114472877339";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string skiFriction = "8525813";
    string pathFriction = "28874922652486172534893";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 228;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string skiFriction = "528329715476167719";
    string pathFriction = "639244459373579566371426464";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string skiFriction = "619138";
    string pathFriction = "6938953989836451262817912999958351123311374";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 563;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string skiFriction = "16633783351";
    string pathFriction = "281138356166357328894294954995111881";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 376;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string skiFriction = "169895929217819973";
    string pathFriction = "37329319889273853242143693567539";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 246;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string skiFriction = "3984972552279778897923825";
    string pathFriction = "8956955782316726281956626722";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string skiFriction = "64436922279177546133127678927273593965169766517";
    string pathFriction = "89169734324911247334519453772469166726245346137";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string skiFriction = "5999761987798179634765915366514";
    string pathFriction = "937488445822881282745649885188668474986";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string skiFriction = "6732512138474569127774147";
    string pathFriction = "5441597699617688192762636166214747";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string skiFriction = "743319685363334784129256367972543544212";
    string pathFriction = "16938185486498714272393547667827287793212528466";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 134;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string skiFriction = "7449373748184935673312395378841655572";
    string pathFriction = "2362179135737747689248354796412415312";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string skiFriction = "12";
    string pathFriction = "132";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string skiFriction = "6724";
    string pathFriction = "56254639";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string skiFriction = "123";
    string pathFriction = "1234";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
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
    string skiFriction = "91";
    string pathFriction = "9111";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string skiFriction = "6238833596655";
    string pathFriction = "724951246328811474";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string skiFriction = "567";
    string pathFriction = "7898";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string skiFriction = "3334444522436";
    string pathFriction = "5456426543654279992";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string skiFriction = "6";
    string pathFriction = "657";
    SkiFriction* pObj = new SkiFriction();
    clock_t start = clock();
    int result = pObj->bestPosition(skiFriction, pathFriction);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22680804&rd=13697&pm=10294
********************************************************************************
#include<vector> 
#include<algorithm> 
#include<cstdio> 
#include<cmath> 
#include<functional> 
#include<sstream> 
#include<iostream> 
using namespace std; 
class SkiFriction 
{ 
public: 
int bestPosition(string sn, string pn) 
{ 
int ls,lp,ret=0; 
ls=sn.length(); 
lp=pn.length(); 
int s[50],p[50]; 
cout<<ls<<lp; 
for(int a=0;a<ls;a++) 
{s[a]=sn[a]-48;cout<<s[a];} 
for(int a=0;a<lp;a++) 
{p[a]=pn[a]-48;cout<<p[a];} 
for(int a=0;a<lp-ls;a++) 
{int m=0; 
for(int b=0;b<ls;b++) 
{ 
int k=s[b]+p[b+a]; 
if(k>m) 
m=k; 
} 
ret+=m; 
} 
return ret; 
}};

********************************************************************************
*******************************************************************************/