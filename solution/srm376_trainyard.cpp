/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6555
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

class Trainyard {
public:
    int reachableSquares(vector<string> layout, int fuel);
};

int Trainyard::reachableSquares(vector<string> layout, int fuel) {
    int ret;
    return ret;
}


int test0() {
    vector<string> layout = {".-....", "-S---.", "......"};
    int fuel = 2;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> layout = {"..+-+.", "..|.|.", "S-+-+."};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> layout = {"-....-", "|....+", "+-S++|", "|.|..|", "..+-++"};
    int fuel = 8;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> layout = {".|...", "-+S+|", ".|..."};
    int fuel = 5;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> layout = {"S"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> layout = {"++++++++++", "++++++++++", "++++++++++", "++++++++++", "++++++++++", "++++S+++++", "++++++++++", "++++++++++", "++++++++++", "++++++++++"};
    int fuel = 3;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> layout = {"++++++++++", "++++++++++", "++++++++++", "++++++++++", "++++++++++", "++++S+++++", "++++++++++", "++++++++++", "++++++++++", "++++++++++"};
    int fuel = 2;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> layout = {"++++++++++", "++++++++++", "++++++++++", "++++++++++", "++++++++++", "++++S+++++", "++++++++++", "++++++++++", "++++++++++", "++++++++++"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> layout = {"++.+|+.|||", "+|..+|+|.+", ".+|||-.++|", ".++.++|++|", "+.++-+.-++", "+++.+|-++|", "+...|S++++", "|-+-.+++|+", "-+|+++++|+", "||++++|+++"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> layout = {"++++++++-|", "+++...++.|", "+|+++|++++", "|-.+.-+++.", "++|++.++++", "++..S+++++", ".++|+|++++", "|++.++-++.", "-++.++-+-+", "+.++.+++-."};
    int fuel = 4;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> layout = {"..........", "..........", "..........", "..........", "....S.....", "..........", "..........", "..........", "..........", ".........."};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> layout = {".-....|+|.", ".|.....|..", ".+-|...|..", ".|.....|..", "-+-+-S-+--", "...|...|..", "......|+-.", ".......|..", "..........", ".........."};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> layout = {".-....|+|.", ".|.....|..", ".+-|...|..", ".|.....|..", "-+-+-S-+--", "...|...|..", "......|+-.", ".......|..", "..........", ".........."};
    int fuel = 4;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
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
    vector<string> layout = {".-....|+|.", ".|.....|..", ".+-|...|..", ".|.....|..", "-+-+-S-+--", "...|...|..", "......|+-.", ".......|..", "..........", ".........."};
    int fuel = 2;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> layout = {"..........", "..........", "..+---+...", "..|...|...", "..|.S-+...", "..|.......", "..+-----+.", "..........", "..........", ".........."};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> layout = {"..........", "..........", "..+-+----+", "..|.|....|", "..+-S....|", ".........|", "..........", "..........", "..........", ".........."};
    int fuel = 8;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> layout = {"..........", "..........", "..+-+----+", "..|.|....|", "..+-S....|", "..|.......", "..|.......", "..|.......", "..|.......", "--+......."};
    int fuel = 8;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> layout = {"..........", "..........", "..+-+-+...", "..|.|.|...", "..+-S-+...", "..|.|.|...", "..+-+-+...", "..........", "..........", ".........."};
    int fuel = 4;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> layout = {"..........", "..........", "..+-+-+...", "..|.|.|...", "..+-S-+...", "..|.|.|...", "..+-+-+...", "..........", "..........", ".........."};
    int fuel = 3;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
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
    vector<string> layout = {"..........", ".-------..", ".|+++++|..", ".|+-+-+|..", ".|++S++|..", ".|+-+-+|..", ".|+++++|..", ".-------..", "..........", ".........."};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> layout = {"..........", "..........", "..+-----|.", "..+----+|.", "...+---+|.", "...+--+|..", ".|S---+|..", "......|+..", "......|+..", ".....-+-.."};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
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
    vector<string> layout = {"++++++.++-", "-.++|++.--", "++|-++||+-", "++-++-++.+", "++|.S+.+.+", "|-.+||++++", "-.++|+-+++", "++-.+++.-+", "++|+|+++.+", "++++-+||.+"};
    int fuel = 5;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> layout = {".||....+.|", "++.-||..|+", "+...|||.+.", ".....||+-+", "..+.|.++-+", "|.+.|..+.|", "..|+|.+-|S", ".|++...+.+", "+..-|.||..", ".++.....-|"};
    int fuel = 5;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> layout = {".|...-.|||", "|.+.+.-+.+", "..+.++..-|", ".+......|.", ".+-+||+|..", "...+.|+..+", "+.-S.-.+..", "+++...+.+.", "+.-.+...|+", "++.|.|...."};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> layout = {".........|", ".........|", ".........|", "....|....|", "....|....|", "....|....|", ".........|", "....|----|", "....|....|", "+-.-+----S"};
    int fuel = 8;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> layout = {"......++++", ".........|", ".........|", "....|...+|", "....|....|", "....|...++", ".....+++||", "....+---+|", "...+|+++||", "+-.-+----S"};
    int fuel = 8;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> layout = {"S+++++++++", "++++++++++", "++++++++++", "++++++++++", "++++++++++", "++++++++++", "++++++++++", "++++++++++", "++++++++++", "++++++++++"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> layout = {"S-", ".|"};
    int fuel = 5;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> layout = {"..|-.", "++|-.", "..S+|", "|||||"};
    int fuel = 8;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> layout = {"....|....", "..+-+....", "..|.|+-+.", "..+-+|.|.", "-+-+S+-+-", ".|.|+-+..", ".+-+|.|..", "....+-+..", "....|...."};
    int fuel = 7;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> layout = {"+++", "+S.", "+.."};
    int fuel = 3;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> layout = {"------|", "||---||", "--+-S||", "||-||||", "||||+|-", "-------"};
    int fuel = 6;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> layout = {"+---+", "|...|", "+-S-+", "|...|", "+-|-+"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
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
    vector<string> layout = {"S--------", "|.......|", "|.....|.|", "|....-+-|", "|.....|.|", "+-------+"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> layout = {"S+-|", ".+|-"};
    int fuel = 4;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> layout = {".|...", "-+S+|", ".|..."};
    int fuel = 5;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> layout = {"|.", "S."};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> layout = {".-|+..", "-S+.-.", "......"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> layout = {"S.", "||"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> layout = {"S-", ".+"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> layout = {".|-", ".S-"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> layout = {"++++++++++", "++++++++++", "++++++++++", "++++++++++", "++++++++++", "++++S+++++", "++++++++++", "++++++++++", "++++++++++", "++++++++++"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> layout = {".|.", "S-|"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> layout = {"+++++", "+++++", "++S++", "+++++", "+++++"};
    int fuel = 3;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> layout = {"|.", "-S"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> layout = {"S-+--+", "|.|..|", "+-+..|", "|....|", "|....|", "+----."};
    int fuel = 9;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> layout = {"+------+", "+--+---+", "S--+....", "..-+...."};
    int fuel = 7;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> layout = {".-....", "-S---.", "|....."};
    int fuel = 2;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> layout = {"-+.-.|.+|-", ".|.+..|+.|", "..+.-..--.", "|.+|+++--+", ".-.||||+..", "+.|-+++.||", ".-|+.+|--.", "|+--.+.|-.", "-|.+S+-+++", ".+||-||..+"};
    int fuel = 7;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> layout = {"S-", ".|"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> layout = {"+-----S", "|.+-+.|", "+-+.+-+", "|......"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> layout = {"S-", "-|"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> layout = {"S-", ".|"};
    int fuel = 4;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> layout = {"++++++++++", "++++++++++", "++++++++++", "++++++++++", "++++++++++", "+++++++++S", "++++++++++"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> layout = {"..|..", "S----"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> layout = {".++", ".S+", "..|"};
    int fuel = 3;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> layout = {"...|.", "..+-.", "..S..", ".....", "....."};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> layout = {"++++++++++", "S+++++++++", "++++++++++", "+-+---++-+", "|||||+++++", "..--+||+||", "++-+|+++++", "..|..|-..+", "+--------+", "|||++--|||"};
    int fuel = 8;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> layout = {"..S-..", "...|.."};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> layout = {"|...", "+--+", "|..|", "S--+"};
    int fuel = 8;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> layout = {"S-", ".|"};
    int fuel = 3;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> layout = {".|...", "-+S|-", ".+++."};
    int fuel = 5;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> layout = {"....", "..|.", ".S-."};
    int fuel = 5;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> layout = {"S+-|", ".||-"};
    int fuel = 5;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> layout = {"||||", "--S-"};
    int fuel = 6;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> layout = {"---+......", "...++++++.", "...---+|..", "..-+++++..", "..+|+S+...", "..+-++|+..", "...++++++.", ".---+|---.", ".||-+++-.+", "......++++"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> layout = {"++", "+S", "|."};
    int fuel = 3;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> layout = {".|.", ".-S", "..."};
    int fuel = 2;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> layout = {".-.....|..", ".-.....|..", "-S-+---+..", ".|.+.....|", ".+-+......", ".|........", ".|........", ".|........"};
    int fuel = 8;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> layout = {".-....", "-S---.", "....+."};
    int fuel = 8;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> layout = {"..|.", ".S-.", "...."};
    int fuel = 2;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> layout = {"..|.......", "..|.......", "..|.......", ".-+---+...", "..|...|...", "..|.|-++..", "..--S.....", ".........."};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> layout = {"+--+-S", "+--+..", "...|..", "...|..", "...|..", "...|.."};
    int fuel = 9;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
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
    vector<string> layout = {"-.-..+|---", "-...+.|.-|", "|-|-..--.-", "--|||.--|.", "|+|.+.+.+-", ".-+-.+|+.-", "-.+.-.-.-|", "-|+.-+++-S", "+|+.|.+.+.", "--||+.++.."};
    int fuel = 1;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> layout = {".+-+....", ".S-+----"};
    int fuel = 5;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> layout = {"----", "|||S"};
    int fuel = 5;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> layout = {"-|--", "|-S-", "-||-"};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> layout = {".+-+", ".|.|", "-+-S"};
    int fuel = 6;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> layout = {".|.", ".-+", ".++", ".S."};
    int fuel = 10;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> layout = {"....S-+", "----+-+"};
    int fuel = 5;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> layout = {"-+--", "++-+", "S--+", "..-+"};
    int fuel = 6;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> layout = {"||", "-S"};
    int fuel = 5;
    Trainyard* pObj = new Trainyard();
    clock_t start = clock();
    int result = pObj->reachableSquares(layout, fuel);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=10796&pm=6555
********************************************************************************
// ok just go away ! ! ! 
 
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
typedef vector<string> vs; 
 
#define LS < 
#define Size(x) (int(x.size())) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
// add guards to a vs 
vs addguards(vs data, char guard) { 
  vs res; 
  string border; 
  FOR(k,0,Size(data[0])+2) border += guard; 
  res.push_back(border); 
  FOR(k,0,Size(data)) res.push_back(guard + data[k] + guard); 
  res.push_back(border); 
  return res; 
  } 
 
#line 3 "Trainyard.cc" 
 
bool was[20][20]; 
 
bool am[20][20]; 
 
bool hor[20][20]; 
bool ver[20][20]; 
 
class Trainyard { 
  public: 
  int reachableSquares(vector <string> layout, int fuel) { 
    // !FDI 
    layout = addguards(layout, ' '); 
    int Y = Size(layout); 
    int X = Size(layout[0]); 
    FOR(y,0,Y) FOR(x,0,X) { 
      char c = layout[y][x]; 
      am[y][x] = c == 'S'; 
      hor[y][x] = c == '-' || c == '+' || c == 'S'; 
      ver[y][x] = c == '|' || c == '+' || c == 'S'; 
      } 
    FOR(f,0,fuel) { 
      FOR(y,0,Y) FOR(x,0,X) was[y][x] = am[y][x]; 
      FOR(y,0,Y) FOR(x,0,X) { 
        am[y][x] =  
          was[y][x] | 
          (hor[y][x] && hor[y][x-1] && was[y][x-1]) | 
          (hor[y][x] && hor[y][x+1] && was[y][x+1]) | 
          (ver[y][x] && ver[y-1][x] && was[y-1][x]) | 
          (ver[y][x] && ver[y+1][x] && was[y+1][x]); 
        } 
      } 
    int c = 0; 
    FOR(y,0,Y) FOR(x,0,X) if(am[y][x]) c++; 
    return c; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/