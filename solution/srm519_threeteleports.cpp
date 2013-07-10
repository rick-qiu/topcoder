/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11554
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

class ThreeTeleports {
public:
    int shortestDistance(int xMe, int yMe, int xHome, int yHome, vector<string> teleports);
};

int ThreeTeleports::shortestDistance(int xMe, int yMe, int xHome, int yHome, vector<string> teleports) {
    int ret;
    return ret;
}


int test0() {
    int xMe = 3;
    int yMe = 3;
    int xHome = 4;
    int yHome = 5;
    vector<string> teleports = {"1000 1001 1000 1002", "1000 1003 1000 1004", "1000 1005 1000 1006"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int xMe = 0;
    int yMe = 0;
    int xHome = 20;
    int yHome = 20;
    vector<string> teleports = {"1 1 18 20", "1000 1003 1000 1004", "1000 1005 1000 1006"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int xMe = 0;
    int yMe = 0;
    int xHome = 20;
    int yHome = 20;
    vector<string> teleports = {"1000 1003 1000 1004", "18 20 1 1", "1000 1005 1000 1006"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int xMe = 10;
    int yMe = 10;
    int xHome = 10000;
    int yHome = 20000;
    vector<string> teleports = {"1000 1003 1000 1004", "3 3 10004 20002", "1000 1005 1000 1006"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int xMe = 3;
    int yMe = 7;
    int xHome = 10000;
    int yHome = 30000;
    vector<string> teleports = {"3 10 5200 4900", "12212 8699 9999 30011", "12200 8701 5203 4845"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int xMe = 0;
    int yMe = 0;
    int xHome = 1000000000;
    int yHome = 1000000000;
    vector<string> teleports = {"1 1 2 2", "3 3 4 4", "5 5 6 6"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int xMe = 0;
    int yMe = 1000000000;
    int xHome = 1000000000;
    int yHome = 0;
    vector<string> teleports = {"1 1 2 2", "3 3 4 4", "5 5 6 6"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int xMe = 0;
    int yMe = 0;
    int xHome = 1000000000;
    int yHome = 1000000000;
    vector<string> teleports = {"0 1 0 999999999", "1 1000000000 999999999 0", "1000000000 1 1000000000 999999999"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int xMe = 7;
    int yMe = 2;
    int xHome = 999999991;
    int yHome = 4;
    vector<string> teleports = {"0 1 0 999999999", "1 1000000000 999999999 0", "1000000000 1 1000000000 999999999"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int xMe = 10;
    int yMe = 500000000;
    int xHome = 1000000000;
    int yHome = 1000000000;
    vector<string> teleports = {"0 1 0 999999999", "1 1000000000 999999999 0", "1000000000 1 1000000000 999999999"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 500000032;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int xMe = 100000000;
    int yMe = 500000000;
    int xHome = 900000000;
    int yHome = 500000000;
    vector<string> teleports = {"0 1 0 999999999", "1 1000000000 999999999 0", "1000000000 1 1000000000 999999999"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 800000000;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int xMe = 100000000;
    int yMe = 100000000;
    int xHome = 900000000;
    int yHome = 900000000;
    vector<string> teleports = {"0 1 0 999999999", "1 1000000000 999999999 0", "1000000000 1 1000000000 999999999"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 400000032;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int xMe = 0;
    int yMe = 0;
    int xHome = 1000000000;
    int yHome = 1000000000;
    vector<string> teleports = {"10 10 20 20", "30 30 40 40", "50 50 60 60"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999970;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int xMe = 630664613;
    int yMe = 48733225;
    int xHome = 873984926;
    int yHome = 111605493;
    vector<string> teleports = {"496495503 532857995 6389190 205314732", "351146273 99276298 616908938 737305630", "149168564 223552081 896571830 750247780"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 306192581;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int xMe = 50408182;
    int yMe = 27065196;
    int xHome = 71243950;
    int yHome = 211493804;
    vector<string> teleports = {"460798245 193700180 768780978 110314044", "161021468 381388250 38241460 277796212", "132401597 100164166 555601411 757948526"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 205264376;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int xMe = 712631043;
    int yMe = 118540020;
    int xHome = 532788793;
    int yHome = 140802423;
    vector<string> teleports = {"260045739 373051551 534047058 967908021", "420942603 167942392 1752658 859937375", "928889958 363876166 948383842 599106823"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 202104653;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int xMe = 546584061;
    int yMe = 324784219;
    int xHome = 966183692;
    int yHome = 999475275;
    vector<string> teleports = {"661541168 612406094 429392943 370311369", "680615656 677465501 325928495 616181925", "547062176 137391772 718766719 174029970"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 854429983;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int xMe = 866154370;
    int yMe = 322991744;
    int xHome = 210516672;
    int yHome = 546263750;
    vector<string> teleports = {"96594644 804330222 205018575 615354689", "672041722 224166329 767001599 433866842", "829621741 766952971 35347560 237749511"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 878909704;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int xMe = 813300993;
    int yMe = 984676869;
    int xHome = 954874690;
    int yHome = 294675479;
    vector<string> teleports = {"547128517 972299039 241873242 209633570", "884270246 526283458 348993624 663818661", "443452221 232587364 147469751 396526508"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 831575087;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int xMe = 824232356;
    int yMe = 763852653;
    int xHome = 316650882;
    int yHome = 317179572;
    vector<string> teleports = {"666331214 94848296 477923139 276070409", "399770590 652426803 611280619 557969047", "387720696 51570693 580888001 747874855"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 596000856;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int xMe = 272910313;
    int yMe = 968932248;
    int xHome = 211109133;
    int yHome = 454430785;
    vector<string> teleports = {"276284707 433053339 420117411 756213781", "463896611 622885230 316291167 744006274", "882163211 914764017 201629599 992297292"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 446478595;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int xMe = 333373883;
    int yMe = 162127112;
    int xHome = 758288658;
    int yHome = 535408203;
    vector<string> teleports = {"301497316 99178126 799699526 915898169", "510380099 847661103 663240458 643662878", "516479190 886338396 630580976 727878106"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 516726397;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int xMe = 513658547;
    int yMe = 74790663;
    int xHome = 649497119;
    int yHome = 4513793;
    vector<string> teleports = {"897416087 150884582 338400872 733815494", "317208874 536047322 304705529 828936845", "876575 650834011 927727672 614182273"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 206115442;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int xMe = 890781683;
    int yMe = 725016422;
    int xHome = 223949611;
    int yHome = 729365455;
    vector<string> teleports = {"837010969 527691546 465582551 801723024", "53348214 899908371 238290034 675589157", "378572645 776632317 67054402 300225591"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 565086109;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int xMe = 671841872;
    int yMe = 266168722;
    int xHome = 761730781;
    int yHome = 351958038;
    vector<string> teleports = {"377298076 821197206 600551083 929681356", "474188466 626805504 181527483 556858312", "123521315 82002428 223621568 656571357"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 175678225;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int xMe = 113609575;
    int yMe = 199402546;
    int xHome = 971590229;
    int yHome = 883308753;
    vector<string> teleports = {"744525829 50839519 958841937 382679275", "163149158 740144914 392701099 790710178", "472377598 380977537 444595305 723543772"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1227102929;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int xMe = 34745001;
    int yMe = 812395769;
    int xHome = 978246999;
    int yHome = 451840145;
    vector<string> teleports = {"535143777 712994346 29745647 117880392", "170907737 778817344 196765135 218545545", "851728243 112142809 437824671 175015147"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 920547207;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int xMe = 238531736;
    int yMe = 490888840;
    int xHome = 818814410;
    int yHome = 289729074;
    vector<string> teleports = {"49633963 630835852 380961180 442790597", "987665175 651154119 683443633 862022026", "165297338 279480238 832064542 526237341"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 534401409;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int xMe = 726193834;
    int yMe = 757504680;
    int xHome = 110855185;
    int yHome = 371980211;
    vector<string> teleports = {"221032227 914814041 177485617 599940635", "143241481 504287599 116315997 508799197", "467907376 904218420 8586378 467750868"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 603039672;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int xMe = 521929712;
    int yMe = 318949212;
    int xHome = 953456006;
    int yHome = 988385697;
    vector<string> teleports = {"888889590 491833199 453233527 579263848", "254546297 955685711 462575961 294916199", "467724564 950513093 670863496 432807182"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 786395810;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int xMe = 6346093;
    int yMe = 433210778;
    int xHome = 990738508;
    int yHome = 655051170;
    vector<string> teleports = {"838325312 552167142 978083117 809531431", "85317813 536122004 81312943 111391313", "452715627 313591789 202784053 331060"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1118071245;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int xMe = 23703008;
    int yMe = 294481282;
    int xHome = 879597716;
    int yHome = 890702265;
    vector<string> teleports = {"548714867 864135503 299644062 152852762", "744500033 326837995 758408571 796371805", "588539897 957430875 542141665 246273536"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 775019195;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int xMe = 145498650;
    int yMe = 392127453;
    int xHome = 106767214;
    int yHome = 175331073;
    vector<string> teleports = {"535104496 227065053 131260293 229282354", "799049409 992413071 551610714 493058672", "997181444 979615910 515667313 732225457"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 255527816;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int xMe = 43767499;
    int yMe = 293613968;
    int xHome = 923531489;
    int yHome = 877694217;
    vector<string> teleports = {"43766240 293262939 422848910 391571754", "423570510 391739114 860143685 364709398", "859696623 365194596 922682678 877070828"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 3645738;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int xMe = 257303836;
    int yMe = 567013022;
    int xHome = 559816427;
    int yHome = 455017415;
    vector<string> teleports = {"908198683 645993163 102156109 463093409", "559129648 454419496 101580415 463430281", "907886971 646772770 256344090 566821070"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 4440311;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int xMe = 251747174;
    int yMe = 214945386;
    int xHome = 915592983;
    int yHome = 47527;
    vector<string> teleports = {"46330587 376224822 343332664 837421511", "342600537 838350568 916109879 795241", "46508754 375623483 252326212 214982438"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 4321420;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int xMe = 730373425;
    int yMe = 894753427;
    int xHome = 242867242;
    int yHome = 580292800;
    vector<string> teleports = {"731370559 894260538 172085400 979696883", "363158 916339097 172202330 980134715", "1092044 916434891 242013485 579549409"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 4466643;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int xMe = 44431990;
    int yMe = 149823130;
    int xHome = 366572829;
    int yHome = 342647922;
    vector<string> teleports = {"256908645 198313227 709862831 854534743", "710540444 855250605 44064139 150465583", "257583322 198383935 366941723 343167644"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 4037810;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int xMe = 26554310;
    int yMe = 445514835;
    int xHome = 921490406;
    int yHome = 189666250;
    vector<string> teleports = {"232701270 702993783 27114202 445183655", "232197206 703689877 867358576 813207569", "922407358 189531062 866873232 813512913"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 3934088;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int xMe = 806025998;
    int yMe = 977572157;
    int xHome = 137475848;
    int yHome = 518499417;
    vector<string> teleports = {"300541907 750846639 261777803 20498007", "806086410 977277507 299630466 751837744", "137470494 518212575 260805942 20756966"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 3780654;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int xMe = 172221514;
    int yMe = 635197135;
    int xHome = 513983821;
    int yHome = 30256221;
    vector<string> teleports = {"228570717 762145365 171563344 635477977", "514432142 30864120 246132856 854567327", "229215795 762882261 246873370 855236210"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 4786633;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int xMe = 484243167;
    int yMe = 568782388;
    int xHome = 635773238;
    int yHome = 553089901;
    vector<string> teleports = {"433961062 561211307 731058277 471001013", "635422730 552873347 433722128 562168089", "484182728 569260814 730742352 471974824"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 3591409;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int xMe = 888440684;
    int yMe = 918829226;
    int xHome = 463020864;
    int yHome = 489848629;
    vector<string> teleports = {"888499837 917836841 37096754 270276299", "36615580 270408718 204642168 268085611", "462714380 489547658 203676351 267919738"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 3404306;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int xMe = 847805538;
    int yMe = 349559051;
    int xHome = 718319133;
    int yHome = 781723914;
    vector<string> teleports = {"848735459 349913415 875148587 836885115", "853355015 139284922 717935849 781696273", "853922317 139254496 875553612 836359458"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 3223650;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int xMe = 972542529;
    int yMe = 533951492;
    int xHome = 404979554;
    int yHome = 524765571;
    vector<string> teleports = {"54197249 420779627 658459747 295997579", "404840511 524223595 657614524 296528492", "972648462 534303792 54861802 421546927"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 3947271;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int xMe = 922397295;
    int yMe = 120406410;
    int xHome = 946248138;
    int yHome = 902180543;
    vector<string> teleports = {"968688738 508615169 947154032 901341020", "922035635 119733598 505998745 436520840", "506560174 436417638 968296341 508660983"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 3882761;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int xMe = 140442590;
    int yMe = 423955552;
    int xHome = 381051282;
    int yHome = 739157713;
    vector<string> teleports = {"817785273 844831633 807923175 758265776", "807505937 757728853 141318993 424271395", "380472740 740100286 817007921 845037669"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 4650940;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int xMe = 265812178;
    int yMe = 546280252;
    int xHome = 199699268;
    int yHome = 797385816;
    vector<string> teleports = {"767300196 303589461 200493762 796484481", "185452201 185667426 766498232 304308185", "265722902 547031623 185297155 185986578"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 4531392;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int xMe = 632841087;
    int yMe = 294160314;
    int xHome = 329243573;
    int yHome = 743769717;
    vector<string> teleports = {"743660503 752676070 376957534 447358131", "743084539 753638725 633770263 293932260", "377237876 448284125 329013656 743251417"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 4650432;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int xMe = 361636101;
    int yMe = 203058830;
    int xHome = 434802682;
    int yHome = 881001269;
    vector<string> teleports = {"221381092 261647733 360887805 202979837", "434024867 880063690 562486609 644340562", "561595250 645213325 221678001 260880078"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 5371399;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int xMe = 9649579;
    int yMe = 460291009;
    int xHome = 5078017;
    int yHome = 414501854;
    vector<string> teleports = {"3726072 525772909 891715551 699525377", "3963892 526707921 10367369 459902547", "892241242 698944467 5573758 414937410"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 4317012;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int xMe = 760370766;
    int yMe = 313775395;
    int xHome = 436426943;
    int yHome = 133380682;
    vector<string> teleports = {"760509378 314607049 981117324 144817332", "342167113 210421618 981616998 145710117", "342799252 210073412 435501254 133316968"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 4332503;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int xMe = 415423343;
    int yMe = 524068936;
    int xHome = 871257497;
    int yHome = 510345517;
    vector<string> teleports = {"166734363 756275100 483158338 186218485", "165862224 755668983 415920710 523303262", "871082452 509851953 482192307 186533833"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 4691315;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int xMe = 408709545;
    int yMe = 19818312;
    int xHome = 907384075;
    int yHome = 935316792;
    vector<string> teleports = {"908013745 936128408 408766869 19792665", "907700932 935589088 408222639 20044607", "906906269 935720441 408683231 19615732"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1110359;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int xMe = 678896388;
    int yMe = 272811031;
    int xHome = 974078426;
    int yHome = 686078654;
    vector<string> teleports = {"975017215 685758903 678906491 272803813", "974676866 685915435 678572249 273284657", "974247459 686825470 679414142 272893204"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1275871;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int xMe = 834690520;
    int yMe = 940005356;
    int xHome = 958288744;
    int yHome = 8948665;
    vector<string> teleports = {"957592754 8653203 835460756 939933504", "834998702 940724437 959022890 9627275", "835227301 940899508 958130690 9331917"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1833550;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int xMe = 860336881;
    int yMe = 6062489;
    int xHome = 565263345;
    int yHome = 621528510;
    vector<string> teleports = {"859658631 6004615 565888255 620711850", "859926272 6954049 564361902 621511067", "564631673 621041364 859899536 6038574"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1580088;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int xMe = 553455458;
    int yMe = 915427850;
    int xHome = 12558279;
    int yHome = 382265250;
    vector<string> teleports = {"553123299 914597814 12313069 382684524", "554028822 915928902 12858951 382663825", "554322441 915834138 13368240 381912317"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1773673;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int xMe = 883668557;
    int yMe = 648159861;
    int xHome = 725143100;
    int yHome = 363296639;
    vector<string> teleports = {"725987322 363002914 884256666 649095099", "883913159 648543784 726045820 362936145", "883509057 647192604 725410094 364060451"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1891749;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int xMe = 57410944;
    int yMe = 767040452;
    int xHome = 442440953;
    int yHome = 202788472;
    vector<string> teleports = {"443351874 203641790 57320885 766384843", "443434206 201903966 57988518 766691811", "442668676 203163481 57393912 766065785"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1594441;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int xMe = 655895284;
    int yMe = 670602750;
    int xHome = 15785618;
    int yHome = 752456236;
    vector<string> teleports = {"15098545 751733030 656876365 670352215", "655132632 671281532 16702367 751800318", "15940240 752817614 655841285 671117169"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1084428;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int xMe = 216564110;
    int yMe = 232397552;
    int xHome = 663275024;
    int yHome = 217633078;
    vector<string> teleports = {"663089563 218618259 217423090 231502831", "662994348 216866075 217342483 232800025", "663471159 218550458 216318662 232136976"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1619549;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int xMe = 310401578;
    int yMe = 851184245;
    int xHome = 945105322;
    int yHome = 826414352;
    vector<string> teleports = {"945634105 826112125 311004685 851742792", "945712756 826876436 310586196 851789967", "309518520 851821934 945666020 826366500"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1859868;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int xMe = 140529534;
    int yMe = 778518573;
    int xHome = 421124743;
    int yHome = 902221938;
    vector<string> teleports = {"420464081 901986466 140769925 778200802", "140123764 779311194 421946918 901656305", "140146583 779165308 420195493 902719178"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1454306;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int xMe = 172612040;
    int yMe = 218257441;
    int xHome = 479447071;
    int yHome = 954584480;
    vector<string> teleports = {"480081384 954546952 172350045 218221178", "172512847 217555053 478775303 954659375", "479248236 955087303 172067841 217534668"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 970109;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int xMe = 365148679;
    int yMe = 516462508;
    int xHome = 262445444;
    int yHome = 854069332;
    vector<string> teleports = {"364595394 516628551 262378156 855055435", "261529527 853236558 364819650 517347108", "262578930 853982244 364790325 515590378"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1451068;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int xMe = 943571916;
    int yMe = 789588185;
    int xHome = 27475276;
    int yHome = 191482273;
    vector<string> teleports = {"942855606 790455407 27002990 192178557", "944484156 788843306 27199778 191479818", "27414378 190509090 944204209 790480792"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1935082;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int xMe = 884679002;
    int yMe = 526275681;
    int xHome = 344998300;
    int yHome = 877963230;
    vector<string> teleports = {"885093350 525281944 345752526 877149167", "885476268 526368121 345867073 877065320", "345135154 878342657 885153968 525573813"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1693125;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int xMe = 260633944;
    int yMe = 764469353;
    int xHome = 447834027;
    int yHome = 260101624;
    vector<string> teleports = {"260203725 763952424 447979553 260939680", "447953426 260140251 259770878 765372207", "261133629 764276065 447343759 260069695"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1215180;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int xMe = 456105671;
    int yMe = 672341185;
    int xHome = 160456638;
    int yHome = 1542670;
    vector<string> teleports = {"159578348 1057696 455535149 673275958", "159905957 1767193 455115669 672513105", "457055197 671916146 159521177 1975481"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1937136;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int xMe = 219563023;
    int yMe = 657800264;
    int xHome = 161354481;
    int yHome = 990960963;
    vector<string> teleports = {"219715046 658052159 160433557 991306084", "220274019 658476931 162228969 991207664", "162001360 991472930 219295899 657259520"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1669973;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int xMe = 871816760;
    int yMe = 773474856;
    int xHome = 69431425;
    int yHome = 582201089;
    vector<string> teleports = {"68549041 582125418 872374087 772811290", "871091348 773871328 69888587 582681865", "871654744 773597092 70073195 583080619"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1805562;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int xMe = 723552702;
    int yMe = 446044757;
    int xHome = 506632797;
    int yHome = 212654751;
    vector<string> teleports = {"722647315 445855628 506673455 211929595", "506032528 213289618 723983513 446994815", "507242513 213198187 724300993 446713353"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1860340;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int xMe = 643729313;
    int yMe = 579469950;
    int xHome = 458675469;
    int yHome = 564240749;
    vector<string> teleports = {"643737194 579541992 292324374 575773962", "459114022 564318234 644488528 579128105", "458680424 564330752 292270286 575795554"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 250581;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int xMe = 645480437;
    int yMe = 30976971;
    int xHome = 642491624;
    int yHome = 813956858;
    vector<string> teleports = {"440826652 674992349 645464695 30940501", "645813109 31197660 641501668 813884275", "642411071 814042803 440923466 674932455"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 375438;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int xMe = 194908615;
    int yMe = 399537617;
    int xHome = 480772206;
    int yHome = 679952356;
    vector<string> teleports = {"710432895 532260636 480829253 679992698", "481347899 680307272 194314622 400188243", "194846489 399496469 710359037 532324233"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 338138;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int xMe = 188203740;
    int yMe = 894001326;
    int xHome = 611862458;
    int yHome = 112072569;
    vector<string> teleports = {"187601640 893974686 612735834 111346634", "664716824 754351240 188237572 893968702", "611876923 112140395 664649713 754308748"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 258370;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int xMe = 410334001;
    int yMe = 976686045;
    int xHome = 548006854;
    int yHome = 959698717;
    vector<string> teleports = {"409398287 976182602 547051880 959444509", "548651986 959251373 992348428 235453981", "993330733 235549593 411032437 977655203"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 2648349;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int xMe = 108123087;
    int yMe = 218083574;
    int xHome = 952167030;
    int yHome = 281512065;
    vector<string> teleports = {"951647202 281079347 108031518 217793901", "851133055 344629831 108157750 218105234", "851093848 344571693 952140430 281593011"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 261234;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int xMe = 640961680;
    int yMe = 9800688;
    int xHome = 547936182;
    int yHome = 125596476;
    vector<string> teleports = {"227584670 160515679 640974387 9769446", "640832367 9130963 546963385 126242387", "547879147 125609937 227603148 160465892"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 182730;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int xMe = 743695770;
    int yMe = 736162224;
    int xHome = 791258070;
    int yHome = 134616547;
    vector<string> teleports = {"744652576 735580925 784725497 815048519", "790697228 133837596 743821409 735970918", "791412760 134665885 785065310 814300896"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1656748;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int xMe = 80301858;
    int yMe = 826413595;
    int xHome = 409044578;
    int yHome = 289436766;
    vector<string> teleports = {"603571157 421362949 409089649 289364578", "408329576 289469617 80677380 826459196", "79635990 826855332 604350031 422092195"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1168986;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int xMe = 402997626;
    int yMe = 974866052;
    int xHome = 410601023;
    int yHome = 976666447;
    vector<string> teleports = {"257874349 353667986 410599639 976626671", "410841963 977392295 402106060 974643252", "257774403 353733269 403086520 974928667"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 357918;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int xMe = 163273342;
    int yMe = 152247602;
    int xHome = 436640006;
    int yHome = 52351390;
    vector<string> teleports = {"163225303 152774985 436300752 52576578", "436635464 52427408 629247185 684839214", "629296406 684872457 163182903 152291382"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 297263;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int xMe = 267117142;
    int yMe = 660278827;
    int xHome = 988066327;
    int yHome = 971801584;
    vector<string> teleports = {"184548180 47599697 267162850 660365634", "988302068 970995435 266454704 659766440", "184525595 47533464 988123241 971750794"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 329057;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int xMe = 105265889;
    int yMe = 372130284;
    int xHome = 295586799;
    int yHome = 278164339;
    vector<string> teleports = {"295373298 277524134 104716469 371718656", "743404192 163670744 105294517 372069038", "743412272 163740330 295540550 278193405"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 242875;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int xMe = 450438763;
    int yMe = 543262536;
    int xHome = 907778177;
    int yHome = 341091975;
    vector<string> teleports = {"907166811 341265177 451308981 543540165", "907586189 341089958 489844366 784580910", "489297290 784717296 450764017 543771023"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1711228;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int xMe = 727930453;
    int yMe = 792916213;
    int xHome = 535371809;
    int yHome = 496301091;
    vector<string> teleports = {"534398597 496319596 382099332 257994564", "535915505 496371603 727996727 792323561", "728106404 793394649 382376820 257969280"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1273144;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int xMe = 797762822;
    int yMe = 105049316;
    int xHome = 501338537;
    int yHome = 963127925;
    vector<string> teleports = {"502122596 962253685 107133342 852206971", "798054002 105980808 107903206 852919413", "500949508 962401626 797693327 104888829"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1345320;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int xMe = 479701668;
    int yMe = 55648194;
    int xHome = 790815034;
    int yHome = 931331108;
    vector<string> teleports = {"480103474 55315516 791765669 931354967", "790106620 931658623 864533988 536949875", "479157797 55937404 865123715 536354907"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1708988;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int xMe = 558494097;
    int yMe = 471878520;
    int xHome = 747970147;
    int yHome = 137526654;
    vector<string> teleports = {"747031025 137237805 699409969 431028574", "558554643 471217710 698729696 430541959", "748894468 136601188 559119718 471786887"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 2567051;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int xMe = 499739134;
    int yMe = 998104108;
    int xHome = 103065617;
    int yHome = 36342563;
    vector<string> teleports = {"907475399 854269762 499663207 998158032", "907535851 854229365 103144343 36366227", "102387995 35913426 498742368 997641357"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 333110;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int xMe = 301113766;
    int yMe = 787205896;
    int xHome = 391837360;
    int yHome = 214797774;
    vector<string> teleports = {"391903320 214716644 604288997 590754091", "301571157 786718547 391789985 215403869", "301144315 787258921 604376632 590674984"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 397426;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int xMe = 1;
    int yMe = 1;
    int xHome = 1000;
    int yHome = 1000;
    vector<string> teleports = {"0 1 1 0", "2 1 1 2", "3 3 4 4"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1998;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int xMe = 0;
    int yMe = 0;
    int xHome = 1000000000;
    int yHome = 1000000000;
    vector<string> teleports = {"0 1 0 999999999", "1 1000000000 999999999 0", "1000000000 1 1000000000 999999999"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int xMe = 0;
    int yMe = 0;
    int xHome = 100000000;
    int yHome = 100000000;
    vector<string> teleports = {"999999999 999999999 555555555 555555555", "5 6 1 1", "444444444 444444444 555555556 555555556"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 200000000;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int xMe = 0;
    int yMe = 0;
    int xHome = 999999993;
    int yHome = 999999993;
    vector<string> teleports = {"999999970 999999970 999999995 999999995", "999999996 999999996 999999997 999999997", "999999998 999999998 999999999 999999999"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999954;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int xMe = 0;
    int yMe = 0;
    int xHome = 10000;
    int yHome = 10000;
    vector<string> teleports = {"1 1 50 50", "52 52 8000 8000", "7700 7700 9999 9999"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 638;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int xMe = 0;
    int yMe = 0;
    int xHome = 1000000000;
    int yHome = 1000000000;
    vector<string> teleports = {"1 1 2 2", "3 3 4 4", "5 5 6 6"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int xMe = 0;
    int yMe = 0;
    int xHome = 1000000000;
    int yHome = 1000000000;
    vector<string> teleports = {"1 1 2 2", "6 6 3 3", "4 4 5 5"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int xMe = 0;
    int yMe = 0;
    int xHome = 1000000000;
    int yHome = 1000000000;
    vector<string> teleports = {"999999999 999999998 999999998 999999999", "999999997 99999998 999999996 999999998", "999999999 999999996 999999997 1000000000"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1100000011;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int xMe = 3;
    int yMe = 3;
    int xHome = 199999999;
    int yHome = 123123123;
    vector<string> teleports = {"1 2 2 3", "1000 1000 230000 200000", "300 300 3333333 3333333"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 316457060;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int xMe = 0;
    int yMe = 0;
    int xHome = 1000000000;
    int yHome = 1000000000;
    vector<string> teleports = {"0 999999998 0 999999999", "1 1000000000 999999999 0", "1000000000 999999998 1000000000 999999999"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int xMe = 0;
    int yMe = 0;
    int xHome = 20;
    int yHome = 20;
    vector<string> teleports = {"1000 1003 1000 1004", "18 20 1 1", "1000 1005 1000 1006"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int xMe = 3;
    int yMe = 7;
    int xHome = 10000;
    int yHome = 30000;
    vector<string> teleports = {"3 10 5200 4900", "12212 8699 9999 30011", "12200 8701 5203 4845"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int xMe = 1000000000;
    int yMe = 1000000000;
    int xHome = 1;
    int yHome = 999;
    vector<string> teleports = {"100000 1004 99998 1001", "99999 1002 3 997", "2 998 1 99"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1999899013;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int xMe = 0;
    int yMe = 0;
    int xHome = 1000000000;
    int yHome = 1000000000;
    vector<string> teleports = {"999999999 1000000000 1000000000 999999999", "999999998 1000000000 1000000000 999999998", "999999999 999999999 1 1"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int xMe = 1000000000;
    int yMe = 1000000000;
    int xHome = 1;
    int yHome = 990;
    vector<string> teleports = {"100000 1004 99998 1001", "99999 1002 3 997", "2 998 1 99"};
    ThreeTeleports* pObj = new ThreeTeleports();
    clock_t start = clock();
    int result = pObj->shortestDistance(xMe, yMe, xHome, yHome, teleports);
    clock_t end = clock();
    delete pObj;
    int expected = 1999899018;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22906600&rd=14544&pm=11554
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
 
class ThreeTeleports {
public:
  int shortestDistance(int, int, int, int, vector <string>);
};
 
int ThreeTeleports::shortestDistance(int xM, int yM, int xH, int yH, vector <string> tel) {
  int link[110][110],xyt[55][4],x[110],y[110],l=tel.size();
  for (int i=0;i<tel.size();i++){
        int xx=0,yy=0;
      for (int j=0;j<tel[i].size();j++){
          if (tel[i][j]==' ') {
                 xyt[i][yy++]=xx;
                 xx=0;
            }
          else xx=xx*10+tel[i][j]-'0';
            if (j==tel[i].size()-1) xyt[i][yy++]=xx;
         }          
     }
     x[0]=xM; y[0]=yM;
     int gs=1;
     memset(link,-1,sizeof(link));
     for (int i=0;i<l;i++){
         x[gs]=xyt[i][0];
         y[gs++]=xyt[i][1];
         x[gs]=xyt[i][2];
         y[gs++]=xyt[i][3];
         link[gs-2][gs-1]=link[gs-1][gs-2]=10;
         
     }
     x[gs]=xH;
     y[gs++]=yH;
     for (int i=0;i<gs;i++)
         for (int j=0;j<gs;j++)
             if (link[i][j]==-1 || (abs(x[i]-x[j])+abs(y[i]-y[j])<link[i][j]))
                link[i][j]=link[j][i]=abs(x[i]-x[j])+abs(y[i]-y[j]);
     
     for (int k=0;k<gs;k++)
         for (int i=0;i<gs;i++)
             if (i!=k && link[i][k]!=-1)
             for (int j=0;j<gs;j++)
               if (j!=k && j!=i && link[k][j]!=-1)
                  if (link[i][k]<link[i][j]-link[k][j] || link[i][j]==-1)
                     link[i][j]=link[i][k]+link[k][j];
     return link[0][gs-1];
}

********************************************************************************
*******************************************************************************/