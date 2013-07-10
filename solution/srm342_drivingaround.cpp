/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7412
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

class DrivingAround {
public:
    int numberOfWays(vector<string> adj, int start, int finish, int time);
};

int DrivingAround::numberOfWays(vector<string> adj, int start, int finish, int time) {
    int ret;
    return ret;
}


int test0() {
    vector<string> adj = {".12", "2.1", "12."};
    int start = 0;
    int finish = 2;
    int time = 5;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> adj = {"....52....", "..5.......", "..........", ".......1..", "......42.2", "5...4.....", ".5...4...1", "......5...", ".3244.....", ".........."};
    int start = 2;
    int finish = 2;
    int time = 10;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> adj = {"...14....1", "......13..", ".2...4....", "....52.5..", "1.3..4....", ".3....35.5", "4......1.1", "..4.4.1.54", "....4.11.5", "31144.2.4."};
    int start = 7;
    int finish = 2;
    int time = 100;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 316984;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> adj = {"...43..4.4", "......1.3.", ".5......4.", "34.......2", "..........", "........1.", "35.......4", "....2.2..4", "5...5..5..", "1....2..4."};
    int start = 5;
    int finish = 5;
    int time = 10000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 28404;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> adj = {".....3.25.", "..3...3533", ".5.421.22.", "42....3121", "5421.1.114", "1.5.1.513.", "..513..5.1", "2.14142..4", "5.334333.1", "1....5.44."};
    int start = 6;
    int finish = 4;
    int time = 10000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 863687;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> adj = {".231442123", "..41121512", "41.2..5511", "213.515224", "4135.1213.", "41354.4.22", "211231.4.1", "4445545.52", "5.4254.4.1", "321344441."};
    int start = 1;
    int finish = 3;
    int time = 100000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 851713;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> adj = {".121515213", "3.23114121", "21.2222151", "433.5.4221", "1422..5453", "53152.1433", "55414..234", "4444315.43", ".333..35.2", "555152134."};
    int start = 8;
    int finish = 7;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 883368;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> adj = {"..134.", "..453.", ".4..33", "3....3", "2444.4", "453..."};
    int start = 0;
    int finish = 4;
    int time = 10;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> adj = {".224", "5.3.", "12.1", "153."};
    int start = 3;
    int finish = 1;
    int time = 10;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> adj = {".121515213", "3.23114121", "21.2222151", "433.5.4221", "1422..5453", "53152.1433", "55414..234", "4444315.43", ".333..35.2", "555152134."};
    int start = 8;
    int finish = 7;
    int time = 536870911;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 935149;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> adj = {".5", ".."};
    int start = 1;
    int finish = 0;
    int time = 10;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> adj = {"...", "...", "..."};
    int start = 2;
    int finish = 1;
    int time = 10;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> adj = {"....", "....", "...4", "..3."};
    int start = 2;
    int finish = 0;
    int time = 10;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> adj = {".....", "1....", "2....", ".....", "....."};
    int start = 2;
    int finish = 1;
    int time = 10;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> adj = {".241.1", "...5..", ".1.12.", "223.2.", "4.45..", "....3."};
    int start = 5;
    int finish = 1;
    int time = 10;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> adj = {"..1143.", "4.43544", ".2.152.", "442..25", "3.11.51", "2112..4", ".4114.."};
    int start = 6;
    int finish = 4;
    int time = 10;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> adj = {".2..31..", "..33....", "...21...", "..3..3..", ".2.3.31.", "2..1....", "11...5.3", "2.5...1."};
    int start = 1;
    int finish = 0;
    int time = 10;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> adj = {".3...35..", "......25.", "25.......", "..2...14.", ".....4..4", "..3.3.4.4", "........3", "..5..53..", "54.....2."};
    int start = 1;
    int finish = 8;
    int time = 10;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> adj = {".......3..", "..........", ".5........", "..........", "..........", "..........", "..........", ".........3", "..........", ".........."};
    int start = 3;
    int finish = 5;
    int time = 100;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> adj = {".112.44434", "4..44..433", "44.31.414.", "23..324441", "4444.341.2", "4.444.1442", "444243.143", "13..121.1.", "33421444.2", "4.242414.."};
    int start = 0;
    int finish = 6;
    int time = 1000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 152773;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> adj = {"..........", ".....2.4..", ".4........", ".......2..", "2.5.......", "........4.", "..........", ".....21...", ".......1..", ".........."};
    int start = 8;
    int finish = 2;
    int time = 10000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> adj = {".23.514553", "4.14.55.31", ".3.1.45154", "1.5.214..4", ".544.45433", "54354.4142", "442.21.424", "1444244.14", "531341.4.2", "14..3.445."};
    int start = 9;
    int finish = 0;
    int time = 100000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 856057;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> adj = {"..........", "...5.1..1.", "......2..2", "..........", "..........", "..........", "..........", "..........", "..........", "..2......."};
    int start = 8;
    int finish = 9;
    int time = 1000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> adj = {"..........", "..........", "..........", ".3.......5", "..........", ".......4.2", "..........", "..........", "..........", ".........."};
    int start = 0;
    int finish = 4;
    int time = 10000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> adj = {".212242515", "..5.2514.3", "21.2..55.5", "155.5434.2", "1545.25...", "322.3.4345", "54441..514", "521.2.2.11", "...52545..", "12..55115."};
    int start = 2;
    int finish = 6;
    int time = 100000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 724103;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> adj = {".2.2333113", "3.212344.4", "31.3513.24", "234..53.13", "5133.34.4.", "3...4.5213", "442133.311", "1131.14..3", "1223335..3", "4311..431."};
    int start = 7;
    int finish = 5;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 17591;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> adj = {"..", ".."};
    int start = 0;
    int finish = 1;
    int time = 705418669;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> adj = {".14343", "1..444", "...144", "314..5", "411...", "41.34."};
    int start = 4;
    int finish = 5;
    int time = 955465942;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 6501;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> adj = {"..4.", "..5.", "....", "451."};
    int start = 1;
    int finish = 2;
    int time = 509390050;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> adj = {".115", "1.21", "55.1", "1.1."};
    int start = 1;
    int finish = 0;
    int time = 62469818;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 533438;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> adj = {"..", "1."};
    int start = 0;
    int finish = 1;
    int time = 469301324;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> adj = {".4..45.4..", "2...5....5", "54....21..", "..........", "52...5.4..", "....5...5.", "2...12...4", ".........2", "45.5......", "..5..25.1."};
    int start = 4;
    int finish = 9;
    int time = 839100924;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 677037;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> adj = {"..1.2.5224", "....2.424.", "....5..1.4", "24......44", ".1.....422", "11215.2.24", "224.1...14", "...5.11.2.", ".1.4522...", ".14.41..1."};
    int start = 9;
    int finish = 6;
    int time = 857828350;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 615310;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> adj = {"..54..1.", "..4.....", "25..5..1", "4.5.1...", "43.5.5..", "...1...3", "233....4", "....15.."};
    int start = 6;
    int finish = 1;
    int time = 467040551;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 553460;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> adj = {"...3...", "...4.23", ".3.341.", "2.5.322", "41...2.", ".3..2.4", "5...5.."};
    int start = 0;
    int finish = 2;
    int time = 429694752;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 912487;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> adj = {".124244412", "2.13112332", "24.4244242", "211.442341", "4131.41442", "22112.2131", "113444.314", "421.141.34", "24422143.2", "222324231."};
    int start = 8;
    int finish = 6;
    int time = 435788070;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 924990;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> adj = {".141311442", "5.11114134", "53.3111.13", "135.113343", "1525.14111", "11134.4111", "431141.132", "134211..3.", "24543113..", "551314.3.."};
    int start = 4;
    int finish = 6;
    int time = 978736891;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 295205;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> adj = {".32245", "3..355", "35.3..", "235.55", "5525.3", ".3344."};
    int start = 4;
    int finish = 2;
    int time = 770910860;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 902442;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> adj = {".55..1", "5.25.1", ".4.5..", "112.35", "11.1.1", "4151.."};
    int start = 0;
    int finish = 3;
    int time = 373324323;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 324319;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> adj = {"....", "...3", "...3", "...."};
    int start = 1;
    int finish = 2;
    int time = 396953258;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> adj = {"..4.4", "1.441", "4....", ".3...", "..1.."};
    int start = 1;
    int finish = 2;
    int time = 749302373;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 6967;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> adj = {".......4", "....3...", "...3.3..", ".45..34.", "......35", "....1...", ".34.....", ".313.4.."};
    int start = 3;
    int finish = 2;
    int time = 122914891;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 427558;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> adj = {"..", ".."};
    int start = 1;
    int finish = 0;
    int time = 590473032;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> adj = {".23.5431", "4..4.3.3", "55.4343.", "522.4...", "4532..4.", "3425..32", "33.3.2..", "55.333.."};
    int start = 7;
    int finish = 3;
    int time = 30995198;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 332569;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> adj = {".......", "5..5...", "4..55..", ".....4.", "......4", ".2.5..4", "...2..."};
    int start = 0;
    int finish = 1;
    int time = 353740246;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> adj = {".1", ".."};
    int start = 0;
    int finish = 1;
    int time = 826336998;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> adj = {"..5..", ".....", ".....", ".....", "4...."};
    int start = 4;
    int finish = 0;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> adj = {".1532555", "5.133123", "55.11111", "51..1514", "551..154", "54.43.45", "132351.3", "5542215."};
    int start = 0;
    int finish = 6;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 831163;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> adj = {"...", "...", ".1."};
    int start = 0;
    int finish = 1;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> adj = {".334", "..4.", ".3..", ".44."};
    int start = 1;
    int finish = 0;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> adj = {".3", "1."};
    int start = 1;
    int finish = 0;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> adj = {".1.1...243", "1.313..432", "4..3.23422", "34..322.44", "2.3..1.5.3", "33.43.4332", "334.31...1", "3.32232..4", "..33.441.1", "..3113343."};
    int start = 0;
    int finish = 6;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 944294;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> adj = {".5.", "..3", "3.."};
    int start = 0;
    int finish = 1;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> adj = {".1", ".."};
    int start = 1;
    int finish = 0;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> adj = {"...", "...", "4.."};
    int start = 1;
    int finish = 0;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> adj = {".335", "1.33", "53.4", "455."};
    int start = 2;
    int finish = 3;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 999224;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> adj = {"..5.4.544.", "5..54.5..5", "....245.5.", ".45.....1.", "425..5.5.5", ".453..445.", ".5445.....", "5....2..45", "4444...4.4", ".41..54.5."};
    int start = 2;
    int finish = 5;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 949395;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> adj = {".1.5411435", "1...14.451", "54.441.454", "5.3.35.3.5", "4311.4.55.", "514.3.1541", ".51121.14.", "4551144..3", "15555.31.4", "54.5.1121."};
    int start = 5;
    int finish = 1;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 901401;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> adj = {".5.2......", "4.5555.1..", ".1..43.1..", "24...1..2.", ".1.5...4.4", "2.1....222", "..........", "14.4.....4", "..221.23..", ".42...452."};
    int start = 2;
    int finish = 0;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 595392;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> adj = {".545.....5", ".....54..3", ".4...4..1.", ".....44..1", "..3...1.4.", "..4.4.432.", "3.23......", ".1.3.32..1", ".14.......", "4.2....13."};
    int start = 1;
    int finish = 0;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 625312;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> adj = {".4444.4443", "3.14135113", "44.2351442", "141.23.321", "4433.21325", "11331.1512", "243113.151", "4.11451..5", "1422.131.3", "155445.31."};
    int start = 7;
    int finish = 0;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 212872;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> adj = {"..5.352.2.", "2.55244444", "5..42.11.5", "25..4444.2", "55...2.244", "5.211...25", "2252.4..4.", ".445.43.5.", "242.5242.2", ".244.2..2."};
    int start = 1;
    int finish = 4;
    int time = 536870912;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 581219;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> adj = {".14434..52", "4.34414445", "4..35.5551", ".34.125312", "4.5..243.3", ".1.1..5444", "5515.2.254", "355.213.35", "44.24341.5", "1511151.1."};
    int start = 4;
    int finish = 2;
    int time = 536870912;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 898087;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> adj = {".....5....", "...3.5...3", "..........", ".........3", ".3......3.", ".35......4", ".........5", "....35....", "..........", ".4........"};
    int start = 9;
    int finish = 1;
    int time = 536870912;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 582915;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> adj = {"..31111222", "4.4..12232", "24.2...2..", ".43.41.44.", "2424...52.", ".22.1..422", "23..1...11", "31.1....42", "..3.1113.1", "1.12.2444."};
    int start = 3;
    int finish = 0;
    int time = 536870912;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 894234;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> adj = {"..........", "..2.......", "1..3.....1", "1........3", ".....3....", ".5........", ".3........", "......5...", "..........", ".........."};
    int start = 4;
    int finish = 7;
    int time = 536870912;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> adj = {".115525222", "2.5.2.2525", "55...3255.", ".22.2...44", "5422.42245", "41.2..4524", "224251.442", "225525..45", ".5354422.3", ".24...545."};
    int start = 3;
    int finish = 6;
    int time = 536870912;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 931746;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> adj = {"....", "....", ".1..", ".2.."};
    int start = 1;
    int finish = 0;
    int time = 2;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> adj = {".41", "1.3", "12."};
    int start = 0;
    int finish = 1;
    int time = 8;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> adj = {".1.223", "..3215", "43.152", "125.51", "2224.2", "11132."};
    int start = 2;
    int finish = 3;
    int time = 8;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> adj = {".4.5..3452", "4..4444.4.", ".......31.", "55..213.4.", "23.3...225", ".53...5.14", ".54.35.4.5", ".1...4..41", "..1.24.5..", "5..144524."};
    int start = 8;
    int finish = 4;
    int time = 5;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> adj = {".235..33", "3.2..4.5", "14.341.5", "35..444.", "45.....5", "35541..5", ".55.1...", "413.41.."};
    int start = 1;
    int finish = 6;
    int time = 8;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> adj = {"......", "......", "......", "......", "..1...", "......"};
    int start = 2;
    int finish = 1;
    int time = 7;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> adj = {"..451.4..3", "...1..4.21", ".3...1.22.", ".13..52.1.", "..52.4.15.", ".2.2..5.1.", "...22...5.", "..14......", "11.1..5..3", ".5..11..5."};
    int start = 4;
    int finish = 1;
    int time = 9;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 107;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> adj = {".3222", "..424", "25.23", "325.3", "3345."};
    int start = 4;
    int finish = 2;
    int time = 2;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> adj = {"..", ".."};
    int start = 0;
    int finish = 1;
    int time = 2;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
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
    vector<string> adj = {"..21.235.1", "3.35155555", "23.4332.43", "55..54.342", "3425.32313", "12453.1434", "323354.323", ".55554..43", "32242334.1", "523324.13."};
    int start = 5;
    int finish = 6;
    int time = 7;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> adj = {".424.42.", "......2.", "2...14.4", "4.2.4.1.", "4242.2.1", "...41..4", "1..1.2.2", "..4422.."};
    int start = 6;
    int finish = 7;
    int time = 3;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> adj = {".3541141", "3.113.33", "33.53443", "1....1.3", "4551....", "31335.4.", "311315.1", "4131144."};
    int start = 5;
    int finish = 0;
    int time = 4;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> adj = {".5.2", "5..5", "...3", ".35."};
    int start = 3;
    int finish = 0;
    int time = 6;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
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
    vector<string> adj = {".233333", "3.33334", "21.3333", "2.3.323", "233..3.", "43333.3", ".32323."};
    int start = 5;
    int finish = 4;
    int time = 7;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> adj = {".55.13", "3.5..3", "34....", "2....1", "4.33..", ".5.3.."};
    int start = 1;
    int finish = 5;
    int time = 3;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> adj = {".55.....", "........", "5..1....", "....4.4.", "........", "........", "..4524.1", ".1...4.."};
    int start = 1;
    int finish = 5;
    int time = 8;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> adj = {".2....2", "...5...", ".5..5..", "4.....5", ".4....4", ".4.....", ".4....."};
    int start = 4;
    int finish = 6;
    int time = 4;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> adj = {"...", "5..", "25."};
    int start = 0;
    int finish = 2;
    int time = 4;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> adj = {".35235", "...1..", "....25", "53....", ".23...", "..2.1."};
    int start = 5;
    int finish = 4;
    int time = 7;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
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
    vector<string> adj = {".3", "3."};
    int start = 0;
    int finish = 1;
    int time = 9;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> adj = {"......3..", "...5.....", "....33..3", "5...5..4.", "..35..55.", ".34.....3", "3...4....", "..3.....3", "........."};
    int start = 3;
    int finish = 7;
    int time = 4;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> adj = {".5.", "1..", ".5."};
    int start = 1;
    int finish = 0;
    int time = 1;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> adj = {"..3....", "...4...", ".1....3", ".......", ".......", "...1...", "..414.."};
    int start = 2;
    int finish = 1;
    int time = 1;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> adj = {".3.1..53.3", "1...3.51.5", ".5.33..21.", "544...44.2", "5.54.12.4.", "2..4..51..", ".44.51..15", ".2224.4...", "11.21.....", ".52.1.5..."};
    int start = 4;
    int finish = 5;
    int time = 2;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> adj = {"...14....1", "......13..", ".2...4....", "....52.5..", "1.3..4....", ".3....35.5", "4......1.1", "..4.4.1.54", "....4.11.5", "31144.2.4."};
    int start = 7;
    int finish = 2;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 882571;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> adj = {".111111111", "1.11111111", "11.1111111", "111.111111", "1111.11111", "11111.1111", "111111.111", "1111111.11", "11111111.1", "111111111."};
    int start = 1;
    int finish = 9;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 604353;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> adj = {"...14....1", "......13..", ".2...4....", "....52.5..", "1.3..4....", ".3....35.5", "4......1.1", "..4.4.1.54", "....4.11.5", "31144.2.4."};
    int start = 7;
    int finish = 2;
    int time = 999999996;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 513279;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> adj = {".555555555", "5.55555555", "55.5554555", "555.555555", "5555.55555", "55555.5555", "555555.555", "5555555.55", "55553555.5", "555555555."};
    int start = 0;
    int finish = 7;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 255218;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> adj = {".235155443", "5.11232213", "32.2534332", "241.322453", "3515.42344", "52244.3533", "354254.211", "3421354.21", "15112244.5", "455212224."};
    int start = 5;
    int finish = 7;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 321940;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> adj = {".111411111", "1..1111311", "12.1141111", "111.521511", "1131.41111", "13111.3525", "411111.111", "..4.4.1.54", "111.4111.5", "31144.214."};
    int start = 1;
    int finish = 6;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 651894;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> adj = {".555555555", "5.55555555", "55.5555555", "555.555555", "5555.55555", "55555.5555", "555555.555", "5555555.55", "55555555.5", "555555555."};
    int start = 0;
    int finish = 9;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 918286;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> adj = {".111121111", "1.11111111", "11.1111111", "111.111111", "1111.11111", "11211.1111", "111111.111", "1113111.11", "11111111.1", "111111111."};
    int start = 0;
    int finish = 9;
    int time = 1000000000;
    DrivingAround* pObj = new DrivingAround();
    clock_t start = clock();
    int result = pObj->numberOfWays(adj, start, finish, time);
    clock_t end = clock();
    delete pObj;
    int expected = 824117;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=10666&pm=7412
********************************************************************************
// after all, I think you should not try to challenge me 
 
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
typedef long long ll; 
 
#define LS < 
#define Size(x) (int(x.size())) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
#line 3 "DrivingAround.cc" 
 
struct matrix { 
  int a[50][50]; 
  }; 
 
#define MOD 1000003 
 
matrix M; 
 
matrix mul(matrix x, matrix y) { 
  matrix res; 
  FOR(a,0,50) FOR(b,0,50) res.a[a][b] = 0; 
  FOR(a,0,50) FOR(b,0,50) FOR(c,0,50) { 
    res.a[a][c] += (x.a[a][b] * ll(y.a[b][c])) % MOD; 
    res.a[a][c] %= MOD; 
    } 
  return res; 
  } 
 
matrix power(matrix m, int n) { 
  if(n == 1) return m; 
  matrix u = mul(m, m); 
  u = power(u, n/2); 
  if(n&1) u = mul(u, m); 
  return u; 
  } 
 
class DrivingAround { 
  public: 
  int numberOfWays(vector <string> adj, int start, int finish, int time) { 
    // !FDI 
     
    int N = Size(adj); 
 
    FOR(x,0,50) FOR(y,0,50) M.a[x][y] = 0; 
    FOR(x,0,N)  FOR(y,0,N)   
      if(adj[x][y] != '.') 
        M.a[50+x-10*(adj[x][y]-'0')][40+y]++; 
    FOR(x,0,40) M.a[x+10][x] = 1; 
     
//  FOR(x,0,50) { FOR(y,0,50) printf("%c", '0'+M.a[x][y]); printf("\n"); } 
 
    M = power(M, time); 
    return M.a[40+start][40+finish]; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/