/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11861
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

class SplittingFoxes {
public:
    int sum(long n, int S, int L, int R);
};

int SplittingFoxes::sum(long n, int S, int L, int R) {
    int ret;
    return ret;
}


int test0() {
    long n = 58;
    int S = 2;
    int L = 0;
    int R = 0;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long n = 3;
    int S = 1;
    int L = 1;
    int R = 0;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long n = 5;
    int S = 1;
    int L = 3;
    int R = 2;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long n = 5;
    int S = 1;
    int L = 2;
    int R = 3;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 999999973;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long n = 123456789;
    int S = 987654321;
    int L = 544;
    int R = 544;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
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
    long n = 65536;
    int S = 1024;
    int L = 512;
    int R = 4096;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 371473914;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long n = 660813542121999053;
    int S = 882803579;
    int L = 874896056;
    int R = 705234023;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 261143543;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long n = 766775761821710067;
    int S = 845887643;
    int L = 533982753;
    int R = 115747299;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 434616057;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long n = 695207666619531728;
    int S = 155592680;
    int L = 562998418;
    int R = 533219542;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 910823973;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long n = 588301871297543347;
    int S = 120480313;
    int L = 848149037;
    int R = 474843694;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 409785381;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long n = 173235083857908783;
    int S = 981498462;
    int L = 927319236;
    int R = 249140212;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 508656847;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long n = 857380839765139476;
    int S = 417383386;
    int L = 217580301;
    int R = 988254240;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 485106363;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long n = 609513282708337523;
    int S = 764677874;
    int L = 962938268;
    int R = 133082076;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 332250277;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long n = 161953961742003357;
    int S = 554114881;
    int L = 914609945;
    int R = 493204256;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 285565352;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long n = 667136952830723363;
    int S = 706766746;
    int L = 902573993;
    int R = 474609430;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 240953424;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long n = 462515461125923286;
    int S = 613392195;
    int L = 234025167;
    int R = 916284925;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 642320004;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long n = 496080614158705351;
    int S = 719610584;
    int L = 101478311;
    int R = 278282221;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 401389536;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long n = 759273103765959495;
    int S = 454236305;
    int L = 419048169;
    int R = 965202829;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 261239500;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long n = 500181948678347239;
    int S = 522821422;
    int L = 744240704;
    int R = 204386682;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 368338074;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long n = 646389296909453433;
    int S = 550318494;
    int L = 418518924;
    int R = 789623598;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 430242943;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long n = 794093457605225484;
    int S = 308791445;
    int L = 522423066;
    int R = 841454568;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 22776853;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long n = 419337366712433907;
    int S = 901483584;
    int L = 207151442;
    int R = 780160221;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 414267778;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long n = 970687994890833597;
    int S = 382711859;
    int L = 927940169;
    int R = 910748041;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 647508165;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long n = 860188996775665725;
    int S = 566850954;
    int L = 124735999;
    int R = 831668776;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 951384959;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long n = 109296038737750915;
    int S = 478521873;
    int L = 609769865;
    int R = 49836835;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 820256309;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long n = 676402505315218912;
    int S = 959477683;
    int L = 112712025;
    int R = 158396785;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 149750098;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long n = 213508806352183269;
    int S = 615919700;
    int L = 424096915;
    int R = 568347684;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 273318714;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long n = 391918472459793763;
    int S = 226139391;
    int L = 602594702;
    int R = 958724759;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 77697937;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long n = 881153627020164459;
    int S = 43645725;
    int L = 299424725;
    int R = 213666626;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 75249250;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long n = 900978599314721358;
    int S = 119247111;
    int L = 807188159;
    int R = 897480237;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 485605562;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long n = 527243772939356573;
    int S = 342254321;
    int L = 998906274;
    int R = 443167179;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 23468093;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long n = 692623640428418090;
    int S = 129388712;
    int L = 395838143;
    int R = 919743234;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 445661806;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long n = 938219539338509828;
    int S = 949443293;
    int L = 569482952;
    int R = 145952861;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 792089845;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long n = 73221043634316925;
    int S = 544529055;
    int L = 584721417;
    int R = 508502065;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 846480425;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long n = 269837182151772199;
    int S = 956335685;
    int L = 668458123;
    int R = 463969564;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 137017087;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long n = 272976770419738834;
    int S = 453254138;
    int L = 886984676;
    int R = 326682623;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 486689195;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long n = 273214971447216526;
    int S = 116707347;
    int L = 612890962;
    int R = 280911504;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 146861830;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long n = 563358447332767406;
    int S = 363428243;
    int L = 609279088;
    int R = 368997672;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 289775761;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long n = 516516384864032706;
    int S = 881529372;
    int L = 544104264;
    int R = 997209487;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 595122841;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long n = 361918364408242075;
    int S = 334395103;
    int L = 785257738;
    int R = 587668951;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 261735014;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long n = 938206012427942986;
    int S = 95310575;
    int L = 875143802;
    int R = 822274993;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 285150257;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long n = 128596380943607584;
    int S = 831369420;
    int L = 52467905;
    int R = 653589294;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 179194023;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long n = 624944182861526190;
    int S = 42201081;
    int L = 814399795;
    int R = 537751606;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 969539916;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long n = 469557750768739526;
    int S = 707634373;
    int L = 244495318;
    int R = 85057455;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 189615445;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long n = 926336066205282935;
    int S = 561202102;
    int L = 649562663;
    int R = 685230187;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 879759804;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long n = 362254017551082515;
    int S = 223747939;
    int L = 639012016;
    int R = 298480817;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 513284413;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long n = 117373482147601196;
    int S = 644770793;
    int L = 810332802;
    int R = 30126493;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 732064058;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long n = 824553956498941073;
    int S = 825976421;
    int L = 668590209;
    int R = 372915985;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 703197359;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long n = 66017712176760917;
    int S = 437436615;
    int L = 12787815;
    int R = 251774917;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 987360148;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long n = 21677663029696968;
    int S = 456733891;
    int L = 950452497;
    int R = 822134918;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 688931367;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long n = 681210238602381179;
    int S = 172629555;
    int L = 471447765;
    int R = 599515929;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 113224660;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long n = 937016307826240319;
    int S = 919473446;
    int L = 137427375;
    int R = 56221407;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 982151672;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long n = 796575486613002789;
    int S = 344265459;
    int L = 971922327;
    int R = 608248811;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 87787498;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long n = 700467958998054014;
    int S = 954872247;
    int L = 422251412;
    int R = 254050404;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 195096117;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long n = 62501611844023771;
    int S = 439932004;
    int L = 425209120;
    int R = 812446495;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 212489391;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long n = 259398081068221709;
    int S = 102362675;
    int L = 534590823;
    int R = 623903250;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 728897556;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long n = 703047274265800365;
    int S = 4;
    int L = 4;
    int R = 0;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 533239865;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long n = 513750524984834570;
    int S = 4;
    int L = 2;
    int R = 0;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 822289733;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long n = 828200077710873557;
    int S = 5;
    int L = 6;
    int R = 7;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 211062035;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long n = 799504371557728375;
    int S = 6;
    int L = 9;
    int R = 8;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 857170286;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long n = 257180145626451352;
    int S = 1;
    int L = 2;
    int R = 9;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 271324407;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long n = 237916468858348067;
    int S = 2;
    int L = 10;
    int R = 7;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 84152263;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long n = 313522628867264064;
    int S = 1;
    int L = 9;
    int R = 9;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long n = 238693049195518807;
    int S = 1;
    int L = 10;
    int R = 0;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 69261272;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long n = 162095043263814675;
    int S = 8;
    int L = 9;
    int R = 0;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 189339896;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long n = 722144401930419291;
    int S = 6;
    int L = 8;
    int R = 10;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 886467446;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long n = 33173008951284058;
    int S = 9;
    int L = 6;
    int R = 0;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 953671638;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long n = 674270380673427831;
    int S = 7;
    int L = 10;
    int R = 0;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 637826872;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long n = 114098797555375196;
    int S = 5;
    int L = 1;
    int R = 2;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 522425771;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long n = 815328412213795571;
    int S = 8;
    int L = 6;
    int R = 4;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 734646739;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long n = 435235899832500067;
    int S = 6;
    int L = 0;
    int R = 4;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 14972067;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long n = 707752708951776534;
    int S = 3;
    int L = 1;
    int R = 0;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 119748168;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long n = 91089262711427253;
    int S = 4;
    int L = 4;
    int R = 10;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 690311385;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long n = 425425984597397545;
    int S = 9;
    int L = 1;
    int R = 10;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 833028586;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long n = 134074920278833819;
    int S = 7;
    int L = 5;
    int R = 2;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 509703182;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long n = 106372394000656500;
    int S = 0;
    int L = 3;
    int R = 5;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
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
    long n = 3;
    int S = 656510120;
    int L = 180931241;
    int R = 498355505;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 920142490;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long n = 8;
    int S = 418411685;
    int L = 251372732;
    int R = 251082452;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 844000405;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long n = 7;
    int S = 443558903;
    int L = 105815372;
    int R = 600042535;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 972152184;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long n = 6;
    int S = 919495157;
    int L = 532784218;
    int R = 513379689;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 894539033;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long n = 6;
    int S = 324023008;
    int L = 22541540;
    int R = 357776539;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 412416886;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long n = 6;
    int S = 482155516;
    int L = 558041208;
    int R = 952259863;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 755938649;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long n = 4;
    int S = 183980741;
    int L = 655743494;
    int R = 943240702;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 471568710;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long n = 10;
    int S = 677068357;
    int L = 234747810;
    int R = 637436633;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 193091390;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long n = 9;
    int S = 401203474;
    int L = 572770441;
    int R = 430586826;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 809059322;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long n = 1;
    int S = 459723434;
    int L = 653757931;
    int R = 939033653;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long n = 7;
    int S = 316873363;
    int L = 31053991;
    int R = 280859477;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 600631675;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long n = 4;
    int S = 688812506;
    int L = 795350012;
    int R = 736664124;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 383675380;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long n = 5;
    int S = 179111968;
    int L = 988733400;
    int R = 134578803;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5393829;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long n = 1;
    int S = 223782353;
    int L = 163590214;
    int R = 315446113;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long n = 8;
    int S = 23578770;
    int L = 725856499;
    int R = 562638443;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 632213234;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long n = 5;
    int S = 894373793;
    int L = 287783661;
    int R = 941685022;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 302862426;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long n = 8;
    int S = 355793585;
    int L = 314513054;
    int R = 273450488;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 305667481;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long n = 1;
    int S = 235889584;
    int L = 942147068;
    int R = 850379849;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long n = 4;
    int S = 906384393;
    int L = 371319451;
    int R = 307044406;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 51373689;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long n = 3;
    int S = 691613293;
    int L = 875884977;
    int R = 34008640;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 423108396;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long n = 1;
    int S = 1;
    int L = 5;
    int R = 1;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long n = 8;
    int S = 2;
    int L = 1;
    int R = 6;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 999172807;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long n = 3;
    int S = 8;
    int L = 5;
    int R = 3;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long n = 9;
    int S = 2;
    int L = 8;
    int R = 9;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 853496519;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long n = 10;
    int S = 4;
    int L = 2;
    int R = 4;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 332057095;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long n = 8;
    int S = 4;
    int L = 5;
    int R = 2;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 12768768;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long n = 3;
    int S = 8;
    int L = 3;
    int R = 4;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 999999943;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long n = 7;
    int S = 3;
    int L = 5;
    int R = 6;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 999639683;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long n = 6;
    int S = 4;
    int L = 0;
    int R = 4;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 999918087;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long n = 2;
    int S = 3;
    int L = 7;
    int R = 5;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long n = 5;
    int S = 10;
    int L = 7;
    int R = 10;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 999616007;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long n = 7;
    int S = 3;
    int L = 1;
    int R = 6;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 999587267;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long n = 4;
    int S = 8;
    int L = 0;
    int R = 9;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 999981575;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long n = 2;
    int S = 5;
    int L = 5;
    int R = 9;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long n = 5;
    int S = 1;
    int L = 6;
    int R = 1;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long n = 3;
    int S = 7;
    int L = 7;
    int R = 5;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long n = 8;
    int S = 0;
    int L = 3;
    int R = 10;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long n = 2;
    int S = 2;
    int L = 5;
    int R = 1;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long n = 7;
    int S = 8;
    int L = 9;
    int R = 5;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 107728896;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long n = 1;
    int S = 3;
    int L = 9;
    int R = 9;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long n = 1000000000000000000;
    int S = 1000000000;
    int L = 1000000000;
    int R = 1000000000;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long n = 1000000000000000000;
    int S = 999999999;
    int L = 999999999;
    int R = 1000000000;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 789460183;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long n = 1000000000000000000;
    int S = 999999234;
    int L = 999999123;
    int R = 999999453;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 736114829;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long n = 1000000000;
    int S = 1000000000;
    int L = 999999999;
    int R = 555555555;
    SplittingFoxes* pObj = new SplittingFoxes();
    clock_t start = clock();
    int result = pObj->sum(n, S, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 894236504;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22714443&rd=14736&pm=11861
********************************************************************************
//  SRM 544 (C) 
 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cmath> 
#include <cassert> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <utility> 
#include <numeric> 
#include <algorithm> 
#include <bitset> 
#include <complex> 
 
using namespace std; 
 
typedef unsigned uint; 
typedef long long Int; 
typedef vector<int> vint; 
typedef pair<int,int> pint; 
#define mp make_pair 
 
template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; } 
template<class T> void chmin(T &t, T f) { if (t > f) t = f; } 
template<class T> void chmax(T &t, T f) { if (t < f) t = f; } 
 
const Int MO = 1000000007; 
const int SZ = 4; 
 
struct Matrix { 
  Int v[10][10]; 
  Matrix() { 
    memset(v, 0, sizeof(v)); 
  } 
}; 
Matrix operator*(const Matrix &a, const Matrix &b) { 
  Matrix ret; 
  for (int i = 0; i < SZ; ++i) for (int k = 0; k < SZ; ++k) for (int j = 0; j < SZ; ++j) { 
    (ret.v[i][j] += a.v[i][k] * b.v[k][j]) %= MO; 
  } 
  return ret; 
} 
Matrix power(const Matrix &a, Int e) { 
  Matrix x = a, y; 
  for (int i = 0; i < SZ; ++i) y.v[i][i] = 1; 
  for (; e; e >>= 1, x = x * x) if (e & 1) y = y * x; 
  return y; 
} 
 
struct SplittingFoxes { 
   
  int sum(long long inpN, int inpS, int inpL, int inpR) { 
     
     
    Int N = inpN; 
    Int S = inpS; 
    Int L = inpL; 
    Int R = inpR; 
     
    Matrix A; 
    A.v[0][0] = S + L + R; 
    A.v[1][0] = S; 
    A.v[1][1] = S; 
    A.v[1][2] = R - L; 
    A.v[2][1] = L - R; 
    A.v[2][2] = S; 
    A.v[3][2] = S; 
    A.v[3][3] = S - L - R; 
     
    Matrix B = power(A, N); 
for(int i=0;i<SZ;++i)cout<<B.v[i][0]<<" ";cout<<endl; 
    Int ans = B.v[3][0]; 
    ans = (ans % MO + MO) % MO; 
    return ans; 
     
  } 
   
};

********************************************************************************
*******************************************************************************/