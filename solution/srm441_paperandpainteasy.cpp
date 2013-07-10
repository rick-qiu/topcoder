/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10468
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

class PaperAndPaintEasy {
public:
    long computeArea(int width, int height, int xfold, int cnt, int x1, int y1, int x2, int y2);
};

long PaperAndPaintEasy::computeArea(int width, int height, int xfold, int cnt, int x1, int y1, int x2, int y2) {
    long ret;
    return ret;
}


int test0() {
    int width = 5;
    int height = 6;
    int xfold = 2;
    int cnt = 2;
    int x1 = 1;
    int y1 = 1;
    int x2 = 3;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int width = 3;
    int height = 13;
    int xfold = 1;
    int cnt = 0;
    int x1 = 1;
    int y1 = 8;
    int x2 = 2;
    int y2 = 12;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 35;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int width = 12;
    int height = 12;
    int xfold = 7;
    int cnt = 3;
    int x1 = 3;
    int y1 = 1;
    int x2 = 6;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 124;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int width = 4;
    int height = 5;
    int xfold = 4;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int width = 4;
    int height = 8;
    int xfold = 4;
    int cnt = 3;
    int x1 = 0;
    int y1 = 1;
    int x2 = 2;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int width = 4;
    int height = 8;
    int xfold = 3;
    int cnt = 0;
    int x1 = 1;
    int y1 = 1;
    int x2 = 3;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int width = 202780277;
    int height = 318110070;
    int xfold = 40044318;
    int cnt = 9;
    int x1 = 1144186;
    int y1 = 10474356;
    int x2 = 2849401;
    int y2 = 25512278;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 63993590307824790;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int width = 183231704;
    int height = 961118929;
    int xfold = 139138222;
    int cnt = 0;
    int x1 = 13795917;
    int y1 = 176594069;
    int x2 = 22743322;
    int y2 = 281632570;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 174227815089245206;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int width = 298140737;
    int height = 517853687;
    int xfold = 236446916;
    int cnt = 42;
    int x1 = 39184978;
    int y1 = 612986;
    int x2 = 47019319;
    int y2 = 2238239;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 153298260286005841;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int width = 101553691;
    int height = 555214754;
    int xfold = 39721029;
    int cnt = 1;
    int x1 = 28980980;
    int y1 = 44235662;
    int x2 = 36289181;
    int y2 = 62715046;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 55843903355844278;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int width = 371467989;
    int height = 562753706;
    int xfold = 114275920;
    int cnt = 0;
    int x1 = 105034727;
    int y1 = 49872394;
    int x2 = 190933401;
    int y2 = 419686250;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 173860946395520082;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int width = 328591338;
    int height = 35739716;
    int xfold = 290007576;
    int cnt = 115;
    int x1 = 6131468;
    int y1 = 64832;
    int x2 = 199005605;
    int y2 = 192483;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 8407236367924612;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int width = 585340691;
    int height = 793305207;
    int xfold = 505054788;
    int cnt = 2;
    int x1 = 252473233;
    int y1 = 39901138;
    int x2 = 499276031;
    int y2 = 77553381;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 436475781269150295;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int width = 523558807;
    int height = 418626050;
    int xfold = 309432663;
    int cnt = 37;
    int x1 = 116654897;
    int y1 = 3157497;
    int x2 = 261252008;
    int y2 = 6959421;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 184202986320132254;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int width = 791773532;
    int height = 348099372;
    int xfold = 764003440;
    int cnt = 17;
    int x1 = 37102181;
    int y1 = 465292;
    int x2 = 137719524;
    int y2 = 878552;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 274867409038394664;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int width = 832920957;
    int height = 347377000;
    int xfold = 763748668;
    int cnt = 9;
    int x1 = 73216211;
    int y1 = 193867;
    int x2 = 273208265;
    int y2 = 2370964;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 284983562271916620;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int width = 909215791;
    int height = 190057927;
    int xfold = 11372631;
    int cnt = 0;
    int x1 = 515619759;
    int y1 = 19128092;
    int x2 = 731524154;
    int y2 = 157465544;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 142936004553223717;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int width = 936413403;
    int height = 843042487;
    int xfold = 846408809;
    int cnt = 6;
    int x1 = 668316159;
    int y1 = 15953559;
    int x2 = 779248572;
    int y2 = 26302036;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 781400413453858254;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int width = 407561575;
    int height = 20682689;
    int xfold = 11122285;
    int cnt = 0;
    int x1 = 26409154;
    int y1 = 219678;
    int x2 = 87391083;
    int y2 = 5580392;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 8102562623537869;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int width = 31529429;
    int height = 373758048;
    int xfold = 11213310;
    int cnt = 95;
    int x1 = 5373812;
    int y1 = 805795;
    int x2 = 15673290;
    int y2 = 1058536;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 11392795668005856;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int width = 16802903;
    int height = 767705484;
    int xfold = 3936496;
    int cnt = 38;
    int x1 = 5203092;
    int y1 = 664943;
    int x2 = 10707790;
    int y2 = 810783;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 12868371379123572;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int width = 797277663;
    int height = 70975909;
    int xfold = 254365933;
    int cnt = 0;
    int x1 = 85171138;
    int y1 = 8211261;
    int x2 = 165282462;
    int y2 = 10435669;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 56231106316828283;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int width = 557546664;
    int height = 900941757;
    int xfold = 305104153;
    int cnt = 2;
    int x1 = 40081499;
    int y1 = 172437312;
    int x2 = 280014456;
    int y2 = 238291309;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 412960974040716369;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int width = 228343168;
    int height = 391224761;
    int xfold = 11393270;
    int cnt = 28;
    int x1 = 16434949;
    int y1 = 2964021;
    int x2 = 96432070;
    int y2 = 4831713;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 85000611822255620;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int width = 55091045;
    int height = 750795688;
    int xfold = 55067067;
    int cnt = 0;
    int x1 = 10895011;
    int y1 = 90534577;
    int x2 = 11141636;
    int y2 = 565412056;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 41245002375155585;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int width = 414711275;
    int height = 222529246;
    int xfold = 338200609;
    int cnt = 1;
    int x1 = 48231093;
    int y1 = 13623407;
    int x2 = 66150185;
    int y2 = 23500900;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 91577404510263226;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int width = 218497889;
    int height = 898883479;
    int xfold = 45850966;
    int cnt = 12;
    int x1 = 125494855;
    int y1 = 40084182;
    int x2 = 129916261;
    int y2 = 47249367;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 195992300123124401;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int width = 497787643;
    int height = 793152323;
    int xfold = 184976959;
    int cnt = 16;
    int x1 = 85673968;
    int y1 = 4098728;
    int x2 = 173563089;
    int y2 = 38837513;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 291013941945373199;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int width = 569014428;
    int height = 250178980;
    int xfold = 132622486;
    int cnt = 1;
    int x1 = 391460450;
    int y1 = 83457863;
    int x2 = 424952722;
    int y2 = 98158030;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 141370765219104592;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int width = 142423843;
    int height = 533955465;
    int xfold = 43663818;
    int cnt = 2;
    int x1 = 22338608;
    int y1 = 32417855;
    int x2 = 59665056;
    int y2 = 34256538;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 75724463896692753;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int width = 998860005;
    int height = 663371588;
    int xfold = 377849505;
    int cnt = 432;
    int x1 = 113323755;
    int y1 = 950616;
    int x2 = 115551408;
    int y2 = 994949;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 662529822810509106;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int width = 264972332;
    int height = 920660459;
    int xfold = 63744004;
    int cnt = 0;
    int x1 = 258672;
    int y1 = 3102364;
    int x2 = 1432660;
    int y2 = 62752017;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 243809492847768060;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int width = 568288094;
    int height = 580798415;
    int xfold = 540171765;
    int cnt = 994;
    int x1 = 16011007;
    int y1 = 213897;
    int x2 = 22101068;
    int y2 = 473215;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 326918092006158990;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int width = 762918794;
    int height = 470787974;
    int xfold = 761392548;
    int cnt = 1;
    int x1 = 200958050;
    int y1 = 99009534;
    int x2 = 226652070;
    int y2 = 112333388;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 358488306611477196;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int width = 277880003;
    int height = 98495148;
    int xfold = 10815414;
    int cnt = 5;
    int x1 = 242381905;
    int y1 = 7903703;
    int x2 = 244779716;
    int y2 = 10058336;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 27338833605475266;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int width = 297516492;
    int height = 314731016;
    int xfold = 133454383;
    int cnt = 7;
    int x1 = 52296943;
    int y1 = 6718871;
    int x2 = 81795470;
    int y2 = 18453525;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 88099187678241344;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int width = 304242749;
    int height = 372212795;
    int xfold = 181396102;
    int cnt = 0;
    int x1 = 38844675;
    int y1 = 255326177;
    int x2 = 77458063;
    int y2 = 321459338;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 108135793153054519;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int width = 714624728;
    int height = 766666509;
    int xfold = 485788795;
    int cnt = 20;
    int x1 = 185059126;
    int y1 = 20004076;
    int x2 = 279924429;
    int y2 = 29144662;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 521266172737628892;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int width = 890704736;
    int height = 258622956;
    int xfold = 635263038;
    int cnt = 61;
    int x1 = 203555794;
    int y1 = 81111;
    int x2 = 432465297;
    int y2 = 669935;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 220105669114174800;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int width = 36148827;
    int height = 178895206;
    int xfold = 33887509;
    int cnt = 13;
    int x1 = 6603555;
    int y1 = 4879178;
    int x2 = 7349058;
    int y2 = 8928876;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 6424584984710046;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int width = 127419826;
    int height = 760232953;
    int xfold = 66551311;
    int cnt = 0;
    int x1 = 333194;
    int y1 = 103860162;
    int x2 = 10516936;
    int y2 = 208498382;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 94737533319087698;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int width = 553805769;
    int height = 522009643;
    int xfold = 525527222;
    int cnt = 78;
    int x1 = 77307681;
    int y1 = 3128729;
    int x2 = 136008446;
    int y2 = 4508842;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 282691870345001312;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int width = 579918750;
    int height = 385975333;
    int xfold = 566204327;
    int cnt = 0;
    int x1 = 102989204;
    int y1 = 175873514;
    int x2 = 389674985;
    int y2 = 239777276;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 205514032726385628;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int width = 302927647;
    int height = 935315096;
    int xfold = 221575802;
    int cnt = 357;
    int x1 = 44017009;
    int y1 = 27608;
    int x2 = 158908458;
    int y2 = 820115;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 240143539307013902;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int width = 310002674;
    int height = 291939084;
    int xfold = 42115006;
    int cnt = 1;
    int x1 = 111243137;
    int y1 = 51075624;
    int x2 = 161681621;
    int y2 = 95905450;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 85979599762263048;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int width = 85895375;
    int height = 859395541;
    int xfold = 13156291;
    int cnt = 28;
    int x1 = 60327583;
    int y1 = 26240155;
    int x2 = 66526068;
    int y2 = 26625830;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 73748774847154000;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 436304306;
    int cnt = 999;
    int x1 = 85624127;
    int y1 = 218624;
    int x2 = 496059932;
    int y2 = 480663;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 800557928668624000;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 812553186;
    int cnt = 999;
    int x1 = 680312499;
    int y1 = 846609;
    int x2 = 808292472;
    int y2 = 958087;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 985733048569906000;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 202731673;
    int cnt = 999;
    int x1 = 253632272;
    int y1 = 11440;
    int x2 = 442685262;
    int y2 = 182135;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 967729599871950000;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 714266976;
    int cnt = 799;
    int x1 = 16269909;
    int y1 = 1003530;
    int x2 = 550528472;
    int y2 = 1067924;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 958596117013494400;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 663766679;
    int cnt = 799;
    int x1 = 141761812;
    int y1 = 245672;
    int x2 = 187293106;
    int y2 = 562746;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 976901136777990400;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 999;
    int x1 = 130949998;
    int y1 = 482934;
    int x2 = 807329194;
    int y2 = 570757;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 940598349869692000;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 799;
    int x1 = 570542410;
    int y1 = 404146;
    int x2 = 770809525;
    int y2 = 507131;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 983500392929380000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 319;
    int x1 = 31264943;
    int y1 = 218086;
    int x2 = 48390685;
    int y2 = 450497;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 998726332536332160;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 799;
    int x1 = 31936928;
    int y1 = 283099;
    int x2 = 168596366;
    int y2 = 808482;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 942561163588196800;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 499;
    int x1 = 14779;
    int y1 = 1688634;
    int x2 = 572367183;
    int y2 = 1748624;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 982832289642020000;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 639;
    int x1 = 505654943;
    int y1 = 27231;
    int x2 = 884822340;
    int y2 = 66047;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 990580632523550720;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 124;
    int x1 = 508632349;
    int y1 = 1960523;
    int x2 = 765863784;
    int y2 = 3706181;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 943870235955096250;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 799;
    int x1 = 181113789;
    int y1 = 86110;
    int x2 = 268840470;
    int y2 = 221107;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 990525728996034400;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 499;
    int x1 = 94918;
    int y1 = 908907;
    int x2 = 123918;
    int y2 = 1453200;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999992107751500000;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 799;
    int x1 = 41147950;
    int y1 = 830341;
    int x2 = 41777014;
    int y2 = 864371;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999982874361664000;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 999;
    int x1 = 88429846;
    int y1 = 100169;
    int x2 = 169959506;
    int y2 = 137311;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 996971825368280000;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 399;
    int x1 = 263729562;
    int y1 = 82938;
    int x2 = 864988350;
    int y2 = 368636;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 931288626714390400;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 799;
    int x1 = 70682338;
    int y1 = 112152;
    int x2 = 72502496;
    int y2 = 240326;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999813362454806400;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 511;
    int x1 = 166736319;
    int y1 = 266598;
    int x2 = 218973366;
    int y2 = 999759;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 980391339204829696;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 624;
    int x1 = 200170698;
    int y1 = 410868;
    int x2 = 528866424;
    int y2 = 775346;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 925123524486857500;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 624;
    int x1 = 99512066;
    int y1 = 562358;
    int x2 = 477258580;
    int y2 = 697291;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 968143456016523750;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 999;
    int x1 = 172861346;
    int y1 = 548005;
    int x2 = 894538860;
    int y2 = 793968;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 822494033624018000;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 639;
    int x1 = 650502083;
    int y1 = 54180;
    int x2 = 846459997;
    int y2 = 196992;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 982089509366932480;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 624;
    int x1 = 43617656;
    int y1 = 1404796;
    int x2 = 200989286;
    int y2 = 1513607;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 989297647230043750;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 639;
    int x1 = 143081185;
    int y1 = 82400;
    int x2 = 841164881;
    int y2 = 565946;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 783964429525749760;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 19;
    int x1 = 554574686;
    int y1 = 23551008;
    int x2 = 611870697;
    int y2 = 24711885;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 998669727572767060;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 511;
    int x1 = 42793382;
    int y1 = 71734;
    int x2 = 789155028;
    int y2 = 118528;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 982118273606182912;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 399;
    int x1 = 263435393;
    int y1 = 612167;
    int x2 = 848094670;
    int y2 = 1265748;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 847151122031625200;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 159;
    int x1 = 603364326;
    int y1 = 456;
    int x2 = 844668456;
    int y2 = 606;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999994208700880000;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 1;
    int x1 = 137588385;
    int y1 = 172993914;
    int x2 = 426172455;
    int y2 = 238816685;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 962009193692284060;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 79;
    int x1 = 81878628;
    int y1 = 1761122;
    int x2 = 280354071;
    int y2 = 7427199;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 910033828588231120;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 79;
    int x1 = 28215277;
    int y1 = 4452391;
    int x2 = 308423921;
    int y2 = 11354061;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 845287392637161600;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 511;
    int x1 = 461392602;
    int y1 = 110061;
    int x2 = 812372627;
    int y2 = 402569;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 947435793841817600;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 79;
    int x1 = 439402673;
    int y1 = 1917750;
    int x2 = 520343514;
    int y2 = 2660544;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 995190210316019680;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 319;
    int x1 = 182750655;
    int y1 = 548287;
    int x2 = 213664097;
    int y2 = 550949;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999973666693566720;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999999;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999999;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 3;
    int cnt = 0;
    int x1 = 1;
    int y1 = 1;
    int x2 = 3;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999996;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 88888888;
    int cnt = 999;
    int x1 = 123;
    int y1 = 456;
    int x2 = 456;
    int y2 = 789;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999778222000;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 500000000;
    int cnt = 1;
    int x1 = 0;
    int y1 = 0;
    int x2 = 500000000;
    int y2 = 500000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int width = 5;
    int height = 6;
    int xfold = 1;
    int cnt = 2;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1000000000;
    int y2 = 1000000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 49997;
    int cnt = 999;
    int x1 = 1;
    int y1 = 1;
    int x2 = 5574;
    int y2 = 5;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999955416000;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 5000456;
    int cnt = 4;
    int x1 = 0;
    int y1 = 0;
    int x2 = 123;
    int y2 = 45678;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999943816060;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1;
    int cnt = 1;
    int x1 = 0;
    int y1 = 0;
    int x2 = 10;
    int y2 = 10;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999780;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 5678999;
    int cnt = 999;
    int x1 = 1;
    int y1 = 1;
    int x2 = 4000;
    int y2 = 45689;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999634587376000;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000;
    int cnt = 999;
    int x1 = 56;
    int y1 = 45;
    int x2 = 100;
    int y2 = 678;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999944296000;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 500000000;
    int cnt = 9;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999980;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int width = 10728;
    int height = 187640400;
    int xfold = 1728;
    int cnt = 399;
    int x1 = 0;
    int y1 = 0;
    int x2 = 13;
    int y2 = 27;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 2013005930400;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int width = 12;
    int height = 12;
    int xfold = 0;
    int cnt = 3;
    int x1 = 3;
    int y1 = 1;
    int x2 = 6;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 132;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 999;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999000;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1000000000;
    int y2 = 1000000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 999999999;
    int cnt = 999;
    int x1 = 0;
    int y1 = 0;
    int x2 = 999999999;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999000000000000;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 9999;
    int cnt = 999;
    int x1 = 0;
    int y1 = 0;
    int x2 = 100;
    int y2 = 100;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999980000000;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int width = 10000000;
    int height = 10000000;
    int xfold = 1;
    int cnt = 1;
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 99999999999998;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1;
    int cnt = 1;
    int x1 = 1;
    int y1 = 3;
    int x2 = 17;
    int y2 = 9;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999808;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int width = 10000000;
    int height = 10000000;
    int xfold = 0;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 10000000;
    int y2 = 10000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 999999999;
    int cnt = 999;
    int x1 = 1;
    int y1 = 1;
    int x2 = 999999990;
    int y2 = 99999;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 900002001099978000;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int width = 500000000;
    int height = 600000000;
    int xfold = 20000;
    int cnt = 2;
    int x1 = 1;
    int y1 = 1;
    int x2 = 30000000;
    int y2 = 20000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 298198800210059994;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int width = 987654321;
    int height = 322222220;
    int xfold = 700000000;
    int cnt = 4;
    int x1 = 3000;
    int y1 = 10000;
    int x2 = 4000;
    int y2 = 11000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 318244167895212620;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 3;
    int cnt = 1;
    int x1 = 1;
    int y1 = 1;
    int x2 = 3;
    int y2 = 156;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999998760;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1234;
    int cnt = 999;
    int x1 = 21343;
    int y1 = 11343;
    int x2 = 31345;
    int y2 = 31366;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999799729954000;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 5000000;
    int cnt = 9;
    int x1 = 1;
    int y1 = 1;
    int x2 = 1000000;
    int y2 = 1000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999980000039999980;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 600000000;
    int cnt = 999;
    int x1 = 1;
    int y1 = 5;
    int x2 = 100000000;
    int y2 = 100000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 980001000199990000;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 100;
    int cnt = 4;
    int x1 = 1;
    int y1 = 1;
    int x2 = 4;
    int y2 = 3;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999940;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int width = 100000000;
    int height = 100000000;
    int xfold = 0;
    int cnt = 0;
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999999999999;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 500000001;
    int cnt = 9;
    int x1 = 0;
    int y1 = 0;
    int x2 = 90000000;
    int y2 = 80000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 856000000000000000;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 999999999;
    int y2 = 999999999;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1999999999;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 100;
    int cnt = 9;
    int x1 = 50000;
    int y1 = 50000;
    int x2 = 500000;
    int y2 = 500000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999997975000000000;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1;
    int cnt = 1;
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999998;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int width = 100000000;
    int height = 100000000;
    int xfold = 0;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999999999999;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int width = 99999999;
    int height = 88888888;
    int xfold = 55555555;
    int cnt = 87;
    int x1 = 158900;
    int y1 = 89;
    int x2 = 898999;
    int y2 = 99999;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 8875874691879272;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 500000000;
    int cnt = 1;
    int x1 = 1;
    int y1 = 1;
    int x2 = 30;
    int y2 = 30;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999996636;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int width = 99999999;
    int height = 99999999;
    int xfold = 50000000;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 5000000;
    int y2 = 9999999;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 9899999810000001;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int width = 5;
    int height = 6;
    int xfold = 0;
    int cnt = 2;
    int x1 = 1;
    int y1 = 1;
    int x2 = 3;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 500000000;
    int cnt = 1;
    int x1 = 1;
    int y1 = 1;
    int x2 = 499999999;
    int y2 = 499999999;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 7999999984;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 1;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999998;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 5;
    int cnt = 9;
    int x1 = 10;
    int y1 = 12;
    int x2 = 11;
    int y2 = 13;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999990;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int width = 10;
    int height = 10;
    int xfold = 3;
    int cnt = 4;
    int x1 = 4;
    int y1 = 1;
    int x2 = 6;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 90;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 5;
    int cnt = 4;
    int x1 = 0;
    int y1 = 0;
    int x2 = 5;
    int y2 = 5;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999750;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1;
    int cnt = 999;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1000000;
    int y2 = 500;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999499999500000;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 200000000;
    int cnt = 999;
    int x1 = 1;
    int y1 = 1;
    int x2 = 100;
    int y2 = 99;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999980596000;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int width = 99999999;
    int height = 99999999;
    int xfold = 56238723;
    int cnt = 8;
    int x1 = 1;
    int y1 = 1;
    int x2 = 8;
    int y2 = 8;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999799999119;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 499999999;
    int y2 = 499999999;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 750000000999999999;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int width = 1000000;
    int height = 1000000;
    int xfold = 0;
    int cnt = 99;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999900;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 100000000;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 100000000;
    int y2 = 10000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 998000000000000000;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 2;
    int cnt = 4;
    int x1 = 1;
    int y1 = 1;
    int x2 = 3;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999985;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 10000000;
    int cnt = 99;
    int x1 = 100;
    int y1 = 100;
    int x2 = 10000;
    int y2 = 10000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999980398000000;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 600;
    int cnt = 9;
    int x1 = 1;
    int y1 = 1;
    int x2 = 7;
    int y2 = 7;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999280;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1;
    int cnt = 0;
    int x1 = 2;
    int y1 = 2;
    int x2 = 50;
    int y2 = 50;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999997696;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int width = 999999999;
    int height = 900000000;
    int xfold = 12545576;
    int cnt = 999;
    int x1 = 1;
    int y1 = 1;
    int x2 = 57857;
    int y2 = 45544;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 899994729228384000;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 2;
    int cnt = 1;
    int x1 = 1;
    int y1 = 1;
    int x2 = 3;
    int y2 = 3;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999988;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int width = 10;
    int height = 9;
    int xfold = 1;
    int cnt = 2;
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 87;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int width = 123123;
    int height = 3243435;
    int xfold = 34455;
    int cnt = 4;
    int x1 = 111;
    int y1 = 222;
    int x2 = 3333;
    int y2 = 4444;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 399205414665;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 499999999;
    int cnt = 1;
    int x1 = 0;
    int y1 = 0;
    int x2 = 450000000;
    int y2 = 450000001;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 189999998200000000;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int width = 100000000;
    int height = 100000000;
    int xfold = 50000000;
    int cnt = 1;
    int x1 = 0;
    int y1 = 0;
    int x2 = 40000000;
    int y2 = 40000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 3600000000000000;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int width = 100000000;
    int height = 100000000;
    int xfold = 0;
    int cnt = 0;
    int x1 = 1;
    int y1 = 1;
    int x2 = 900000;
    int y2 = 100000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 9910000100899999;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int width = 999999999;
    int height = 999999999;
    int xfold = 1245612;
    int cnt = 2;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999997999999995;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 0;
    int x1 = 1;
    int y1 = 1;
    int x2 = 1000000000;
    int y2 = 1000000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 1999999999;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int width = 1000000;
    int height = 4000000;
    int xfold = 300000;
    int cnt = 499;
    int x1 = 10;
    int y1 = 5;
    int x2 = 200;
    int y2 = 150;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 3999972450000;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int width = 999999999;
    int height = 999999999;
    int xfold = 99999999;
    int cnt = 8;
    int x1 = 0;
    int y1 = 0;
    int x2 = 99999999;
    int y2 = 99999999;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 820000001599999983;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int width = 13;
    int height = 3;
    int xfold = 1;
    int cnt = 0;
    int x1 = 9;
    int y1 = 1;
    int x2 = 10;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 38;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 100000000;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 100000000;
    int y2 = 100000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 980000000000000000;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 0;
    int x1 = 1;
    int y1 = 1;
    int x2 = 1000;
    int y2 = 1000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999001999;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int width = 12;
    int height = 12;
    int xfold = 2;
    int cnt = 2;
    int x1 = 0;
    int y1 = 0;
    int x2 = 6;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 120;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000;
    int cnt = 999;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999998000;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 500000000;
    int cnt = 3;
    int x1 = 1;
    int y1 = 1;
    int x2 = 5;
    int y2 = 5;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999872;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int width = 960000000;
    int height = 100000000;
    int xfold = 0;
    int cnt = 0;
    int x1 = 1;
    int y1 = 1;
    int x2 = 90005000;
    int y2 = 100000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 86999500190004999;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 0;
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999999;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 100;
    int cnt = 9;
    int x1 = 100000;
    int y1 = 10;
    int x2 = 2000000;
    int y2 = 20;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999810000000;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int width = 6;
    int height = 6;
    int xfold = 3;
    int cnt = 5;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int width = 12;
    int height = 12;
    int xfold = 7;
    int cnt = 3;
    int x1 = 3;
    int y1 = 1;
    int x2 = 4;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 136;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int width = 100000000;
    int height = 100000000;
    int xfold = 0;
    int cnt = 1;
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999999999998;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 500000000;
    int cnt = 15;
    int x1 = 1;
    int y1 = 1;
    int x2 = 10;
    int y2 = 10;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999997408;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int width = 100000000;
    int height = 100000000;
    int xfold = 10000;
    int cnt = 99;
    int x1 = 0;
    int y1 = 0;
    int x2 = 10;
    int y2 = 10;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999999980000;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int width = 5;
    int height = 6;
    int xfold = 2;
    int cnt = 2;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 500000000;
    int cnt = 999;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1000000;
    int y2 = 1000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 998000000000000000;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int width = 100000000;
    int height = 100000000;
    int xfold = 99999999;
    int cnt = 99;
    int x1 = 1;
    int y1 = 122;
    int x2 = 34234;
    int y2 = 233243;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 9999201956880700;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int width = 123123000;
    int height = 324343500;
    int xfold = 34455;
    int cnt = 99;
    int x1 = 1113;
    int y1 = 2225;
    int x2 = 33334;
    int y2 = 44444;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 39933872682820200;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 1000000000;
    int cnt = 999;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999000;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 4;
    int cnt = 99;
    int x1 = 2;
    int y1 = 2;
    int x2 = 1000000;
    int y2 = 1000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999900000200000000;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 500000000;
    int cnt = 1;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999996;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int width = 429496722;
    int height = 429496722;
    int xfold = 1;
    int cnt = 2;
    int x1 = 1;
    int y1 = 1;
    int x2 = 429496700;
    int y2 = 29496700;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 146461229653055481;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int width = 100000;
    int height = 100000;
    int xfold = 3;
    int cnt = 0;
    int x1 = 1;
    int y1 = 1;
    int x2 = 3;
    int y2 = 2;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999996;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 55555;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 55555;
    int y2 = 1000000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999888890000000000;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int width = 100000;
    int height = 999999;
    int xfold = 55555;
    int cnt = 332;
    int x1 = 0;
    int y1 = 0;
    int x2 = 55555;
    int y2 = 3000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 99900000;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 999999999;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1000000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999998000000000;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 0;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 99999999;
    int y2 = 99999999;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 990000000199999999;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 500000000;
    int cnt = 999;
    int x1 = 0;
    int y1 = 0;
    int x2 = 500000000;
    int y2 = 1000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int width = 10000000;
    int height = 999999999;
    int xfold = 555555;
    int cnt = 332;
    int x1 = 0;
    int y1 = 0;
    int x2 = 55555;
    int y2 = 3000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 9999888991110000;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 2;
    int cnt = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999998;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 100000000;
    int cnt = 0;
    int x1 = 1;
    int y1 = 1;
    int x2 = 100000000;
    int y2 = 100000000;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 980000000399999998;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int width = 1000000000;
    int height = 1000000000;
    int xfold = 500000000;
    int cnt = 999;
    int x1 = 1;
    int y1 = 1;
    int x2 = 135746;
    int y2 = 432107;
    PaperAndPaintEasy* pObj = new PaperAndPaintEasy();
    clock_t start = clock();
    long result = pObj->computeArea(width, height, xfold, cnt, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    long expected = 999882687542060000;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22741513&rd=13749&pm=10468
********************************************************************************
#include <vector> 
#include <map> 
#include <set> 
#include <queue> 
#include <string> 
#include <sstream> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#define _USE_MATH_DEFINES 
#include <math.h> 
#include <assert.h> 
using namespace std; 
 
typedef long long LL; 
 
class PaperAndPaintEasy 
{ 
public: 
    long long computeArea(int width, int height, int xfold, int cnt, int x1, int y1, int x2, int y2) 
    { 
    int w = (2 * xfold > width) ? (width - xfold) : xfold; 
    int x = 0; 
    if (x1 < w) 
    { 
      if (x2 < w) x = (x2 - x1) * 2; 
      else x = (w - x1) * 2 + (x2 - w); 
    } 
    else 
      x = x2 - x1; 
    return LL(width) * height - LL(x) * (cnt + 1) * (y2 - y1); 
    } 
};

********************************************************************************
*******************************************************************************/