/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7752
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

class OptimalList {
public:
    string optimize(string inst);
};

string OptimalList::optimize(string inst) {
    string ret;
    return ret;
}


int test0() {
    string inst = "NENENNWWWWWS";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNWWW";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string inst = "NNEESSWW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string inst = "NEWSNWESWESSEWSENSEWSEWESEWWEWEEWESSSWWWWWW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "SSSSSSSSWWW";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string inst = "NENENE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEENNN";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string inst = "SEWEWEWEWEWEWEWEEEEEWWWWEEEEWWWWEEEEEWEWEWWWW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EES";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string inst = "NSNSNSNSNSNSNSNSNSNSNSNSNSW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "W";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string inst = "EEEEEEEEEEEEENNNNNNNNN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEEEEEEEEENNNNNNNNN";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string inst = "SSSSSSSSSWWWWWWWWWWWWW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "SSSSSSSSSWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string inst = "WENSSSSSSNNNEENSSWSNNSSNNSSSNSNSNNSEENNNSSNSNSNNSS";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEESSS";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string inst = "EEWWNWENESEWNWWNEWEEES";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EENN";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string inst = "WWWEWEEENEEWEEWSNWWEEWWWWSNWEWNEEWWWEWEEWE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNWW";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string inst = "NENNNENNNNENEEENEEENNNNENNEENWENNNNEENENSNENNNNNNE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEEEEEEEEEEEEENNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string inst = "SSWWSSWSWEWWWWSSWWWSWSWWSWNW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "SSSSSSSSSWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string inst = "EWEEWWEEEEWWWEWWWWEEWWWEWWEEWEWWWW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWW";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string inst = "NWWWWWWWWWNWNWWWWWWWNWWNWWWWWWWWWWWEEWSWWWEWWSNWWW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string inst = "ENSNSSSENSSSSNENSNNEENWSNNENSWNWNNSWNSNESN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEENNN";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string inst = "EWWENSSNSESEWESNENEE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEES";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string inst = "NNWWWWWWNNSEWNNWNNSWWNWENSNNWNWNNWSENNNWNWWNSNWWWN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNNNNNNNNWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string inst = "SEESNESSEESESSWSNSEESSEWENSSESSEEESSSSSS";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEEEEEEEESSSSSSSSSSSSSSSSSS";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string inst = "SNEN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EN";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string inst = "SSSESSSSEEEESNSSSNSSSSSESSSSESESEESSESSESNSNSENNES";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEEEEEEEEEESSSSSSSSSSSSSSSSSSSSSSSS";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string inst = "WNWNSESSESEEWSSENSSSSENSWSNWSWSWEEWSWSWSSWWNEW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "SSSSSSSSSSSSWWWW";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string inst = "SNNENSNNWESSNWNWWENNWWNNNWSNWSSNEE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNWWW";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string inst = "EWWWNNEEWNNWNNSWEWEWWNWWNENEWNSWENWWNWSNESENNWEESE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNWWWW";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string inst = "NNNSESWSSENEESSNSNESSWSNSSESNNWWNNNW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "ES";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string inst = "WNNWWWNWWNEWNNNNNSWNSSNNWNWNSWNWNNSNWNNNSSWNNWWWNW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNNNNNNNNWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string inst = "SEENSENENEE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEEN";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string inst = "NNESEESWSNSSWWSNW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "SSW";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string inst = "WWEWEWWNWWWWNWWESWWWWWWWWWWNEWEWWWWWWNEWWWEEESWWW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNWWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string inst = "NNSNNENWWEWEWNNWWENWENENE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNN";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string inst = "ESNNEENSESNEESEENSS";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEEEES";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string inst = "NNSESEESWNSSNSENNNESSWSNSEEWWSESSSSSSSSSEEENESWEES";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEEEEESSSSSSSSSSSSS";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string inst = "WSWWSSSSSSESWSSSSSSSWSWWWSESWWWESSWSS";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "SSSSSSSSSSSSSSSSSSSSSSWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string inst = "EWESNNNWNENENWNNNWEWEWWNSWNWSENEWNWW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNWWWW";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string inst = "ENENNNSSWNSSSNSNWNSWSNSNSENSNNWSNNSSNNNNNNNESWSNS";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNW";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string inst = "SSSSSESEWNSWSSSWESSSSEESEWNESSNESSNENESSNS";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEESSSSSSSSSSSSSSSS";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string inst = "NENEEE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEENN";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string inst = "WWNSSEWNSNSSWSWSWSWNNNWENNNWWSNWEENSNNSEESENWWWSNN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNWWWWWWW";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string inst = "WNNWENSSSWNWWWWEWSNSNSESWNNN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNWWWWWW";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string inst = "WENWEN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NN";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string inst = "ENENWWNNENEWENNEWEWEWEEEWNNENNENWENSENNENNNNEWENN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEEEEENNNNNNNNNNNNNNNNNNNN";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string inst = "WNNSNSWWSNNNNWNNNNNSSSWNNWNWSWNWNSNNWNNNN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNNNNNNWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string inst = "SNWNS";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "W";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string inst = "WWENEENWWENWEWEWWNEWWWWWWNEWENWNWENSWWNNNNNEWWWWEW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNNNWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string inst = "EEESENWEEWEEWEEEEEEEEEEWWWNEWEEEEEEENWEWEWENEE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEEEEEEEEEEEEEEEEENNN";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string inst = "SNNWNSNWWNNSNNNSNSNNSNNEW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNWWW";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string inst = "NNWWWWNSNEWWEWWSWWNWWSNWSWSNWSSNWNWNENWWNSNSSNWWS";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string inst = "NWWSWSWWSWSSWWSWEWWNENWWEWSWSEN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "SSSSWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string inst = "NWSEWWWEWWWNWNSNWWWESNWSN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string inst = "SSSSEEESNWWEEEWEEWEWSESEESSWESEEEESEEWEEWESSEEESSS";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEEEEEEEEEEEEESSSSSSSSSSSSSSS";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string inst = "EEENNNEENNWNNWNEENSNEEWWEWEEEENWEEEEWEWEEWWEEWWE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEEEEEEEENNNNNNNNNN";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string inst = "SSSSSS";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "SSSSSS";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string inst = "WEWENENWEENSEESWESNESWSEENWENEEEEWSWESEENENEEEWEE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEEEEEEEEEEEEN";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string inst = "WSSWWN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "SWWW";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string inst = "NSNWNNNNWWWSSSWSNSEWSWEWENNENS";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNWWWW";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string inst = "WSWWWSWWWWSWSWWSWWWSWWSSWSWSSWSWWSWSWNWSSWSSSSWSWW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "SSSSSSSSSSSSSSSSSSSSWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string inst = "WWSWSWWWWWSWWSWWWSSSWWSSWWSSWWSSSWWWW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "SSSSSSSSSSSSSSWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string inst = "WEWSSSWWSWSSWWEWWWWWWSWSWSWWSWEWWSSWSSSWSSWSS";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "SSSSSSSSSSSSSSSSSSSWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string inst = "WWNNNWWNWNNNWWSWNNNNWNENWNWNNNWNWWNNNNWNNNWWNWWWNW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNNNNNNNNNNNNNNNNNWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string inst = "NNWWNNNNWWSWWNNNNNNWWNWWNNN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNNNNNNWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string inst = "WWNNNNWSNNNWWWNNWNWWNWNWNN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNNNNWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string inst = "NEEENNENNENENEEENENNENNENNNNNEEEENENNENNENEENNNNNN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEEEEEEEEEEEEEEEEENNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string inst = "ENNEENEENNNNEENNEEEENNNNNENNENE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEEEEEEEEEENNNNNNNNNNNNNNNNN";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string inst = "EENNNEEENENNN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEENNNNNNN";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string inst = "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string inst = "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string inst = "EEEEEEE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEEEE";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string inst = "E";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string inst = "S";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "S";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string inst = "N";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "N";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string inst = "W";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "W";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string inst = "SSSWWEEEENN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EES";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string inst = "EEEW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EE";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string inst = "WEWN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NW";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string inst = "SE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "ES";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string inst = "WE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string inst = "NNNSSSW";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "W";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string inst = "EE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EE";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string inst = "WN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NW";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string inst = "WWENNSSSEEE";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "EES";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string inst = "NNN";
    OptimalList* pObj = new OptimalList();
    clock_t start = clock();
    string result = pObj->optimize(inst);
    clock_t end = clock();
    delete pObj;
    string expected = "NNN";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22660329&rd=10672&pm=7752
********************************************************************************
#line 61 "OptimalList.cpp" 
#include <string> 
#include <vector> 
#include <iostream> 
#include <cmath> 
#include <cstdio> 
#include <cstring> 
#include <map> 
#include <algorithm> 
#include <sstream> 
#include <queue>  
#include <set>  
#include <stack> 
#include <cstdlib>  
#include <cassert> 
#include <cctype>  
 
 
using namespace std; 
 
#define REP(i,n) for(int i=0;i<(int)(n);i++) 
#define SIZE(t) ((int)((t).size())) 
#define ALL(t) t.begin(),t.end() 
#define FOR(i,lo,hi)  for (int i=lo;i<hi;i++) 
#define FORD(i,hi,lo) for(int i=(ho-1);i>=lo;i--) 
#define PB        push_back  
inline string REV( string s ) { reverse(s.begin(), s.end()); return s; } 
typedef vector<string> VS; 
 
 
class OptimalList { 
  public: 
  string optimize(string inst) { 
           int n=0,s=0,w=0,e=0; 
           string st=""; 
           REP(i,SIZE(inst)){ 
                             if (inst[i]=='E') e++; 
                             if (inst[i]=='N') n++; 
                             if (inst[i]=='S') s++; 
                             if (inst[i]=='W') w++; 
                             } 
           e=e-w;n=n-s;w=-e;s=-n; 
           FOR(i,0,e){st+='E';} 
           FOR(i,0,n){st+='N';} 
           FOR(i,0,s){st+='S';} 
           FOR(i,0,w){st+='W';} 
           return st;        
  } 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/