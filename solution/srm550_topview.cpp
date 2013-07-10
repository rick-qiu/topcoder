/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11494
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

class TopView {
public:
    string findOrder(vector<string> grid);
};

string TopView::findOrder(vector<string> grid) {
    string ret;
    return ret;
}


int test0() {
    vector<string> grid = {"..AA..", ".CAAC.", ".CAAC."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "CA";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> grid = {"..47..", "..74.."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> grid = {"bbb666", ".655X5", "a65AA5", "a65AA5", "a65555"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "65AXab";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> grid = {"aabbaaaaaaaaaaaaaaaaaa", "aabbccccccccccccccaaaa", "aab11111ccccccccccaaaa", "aab12221ccccccccccaaaa", "aab12221ccccccccccaaaa", "aab12221ccccccccccaaaa", "aab12221ccccccccccaaaa", "aab12221ccccccccccaaaa", "aab12221ddddddddddaaaa", "aab13331DDDDDDDDDDaaaa", "aab13331DDDDDDDDDDaaaa", "aa.11111DDDDDDDDDDaaaa", "aaaaaaaaaaaaaaaaaaaaaa"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> grid = {"1"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> grid = {"z9999999999999999999999999999999999999999999999991", "2A888888888888888888888888888888888888888888888888", "5ABEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEC8", "5ADEFGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG8", "5ADEJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJHHG8", "5ADEJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJHHG8", "5ADEJKMNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNIIG8", "5ADEJLPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPONIIG8", "5ADEJLPQSTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTNIIG8", "5ADEJLPRUVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVTNIIG8", "7ADEJLPRXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXWVTNIIG8", "7ADEJLPRXYYYZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZVTNIIG8", "7ADEJLPRXYYYZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZVTNIIG8", "7ADEJLPRXYYYZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZVTNIIG8", "7ADEJLPRXYYYZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZVTNIIG8", "7ADEJLPRXaffffffffffffffffffffffffffffffeZZVTNIIG8", "7ADEJLPRXbfimnnnnnnnnnnnnnrrrrrrrrrrrrrrqZZVTNIIG8", "7ADEJLPRXbfj0000000000000nrwwwwwwwwwwwwwwZZVTNIIG8", "7ADEJLPRXbfj0000000000000nrwwwwwwwwwwwwwwZZVTNIIG8", "7ADEJLPRXbfj0000000000000nrwwwwwwwwwwwwwwZZVTNIIG8", "7ADEJLPRXbfj0000000000000nrwwwwwwwwwwwwwwZZVTNIIG8", "7ADEJLPRXbfj0000000000000nrwwwwwwwwwwwwwwZZVTNIIG8", "7ADEJLPRXbfj0000000000000nrwwwwwwwwwwwwwwZZVTNIIG8", "7ADEJLPRXbfj0000000000000nrwwwwwwwwwwwwwwZZVTNIIG8", "7ADEJLPRXbfj0000000000000nrwwwwwwwwwwwwwwZZVTNIIG8", "5ADEJLPRXbfj0000000000000nrwwwwwwwwwwwwwwZZVTNIIG8", "5ADEJLPRXbfj0000000000000mqwwwwwwwwwwwwwwZZVTNIIG8", "5ADEJLPRXbejjjjjjjjjjjjjjjjjjjjjjjjjjjjjiZZVTNIIG8", "5ADEJLPRXbcddddddddddddddddddddddddddddddZZVTNIIG8", "5ADEJLPRXbgklllllllllllllllllllllllllllldZZVTNIIG8", "5ADEJLPRXbhovvvvvvvvvvvvvvvuttttttttttsldZZVTNIIG8", "5ADEJLPRXbhpvyyyyyyyyyyyyyyytxxxxxxxxxxldZZVTNIIG8", "5ADEJLPRXbhpvyyyyyyyyyyyyyyytxxxxxxxxxxldZZVTNIIG8", "6ADEJLPRXbhpvyyyyyyyyyyyyyyytxxxxxxxxxxldZZVTNIIG8", "6ADEJLPRXbhpvyyyyyyyyyyyyyyytxxxxxxxxxxldZZVTNIIG8", "6ADEJLPRXbhpvyyyyyyyyyyyyyyytxxxxxxxxxxldZZVTNIIG8", "6ADEJLPRXbhpvyyyyyyyyyyyyyyytxxxxxxxxxxldZZVTNIIG8", "6ADEJLPRXbhpvyyyyyyyyyyyyyyytxxxxxxxxxxldZZVTNIIG8", "6ADEJLPRXbhpvyyyyyyyyyyyyyyytxxxxxxxxxxldZZVTNIIG8", "6ADEJLPRXbhpvyyyyyyyyyyyyyyytxxxxxxxxxxldZZVTNIIG8", "6ADEJLPRXbhpvyyyyyyyyyyyyyyytxxxxxxxxxxldZZVTNIIG8", "6ADEJLPRXbhpuyyyyyyyyyyyyyyytxxxxxxxxxxldZZVTNIIG8", "6ADEJLPRXbhpppppppppppppppposxxxxxxxxxxkdZZVTNIIG8", "6ADEJLPRXbhhhhhhhhhhhhhhhhhhhhhhhhhhhhhgcYYVTNIIG8", "5ADEJLPRWbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbaYYUSNIIG8", "5ADEJLORRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRQMIIG8", "5ADEJLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLKIIG8", "5ADCHIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIF8", "51DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDB8", "2333333333333333334444444444444444443333333333333z"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "z123456789ABDCEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmn0opqrstuvwxy";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> grid = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...................................ZZZ............", "..................................YZZaa...........", ".................................XYY.abb..........", "................................WXX...bcc.........", "...............................VWW.....cdd........", "..............................UVV.......dee.......", ".............................TUU.........eff......", "............................STT...........fgg.....", "...........................RSS.............ghh....", "..........................QRR...............hii...", ".........................PQQ.................ijj..", "........................OPP...................jkk.", ".......................NOO.....................kk.", "......................MNN......................kk.", ".....................LMM......................llk.", "....................KLL......................mml..", "...................JKK......................nnm...", "..................IJJ......................oon....", ".................HII......................ppo.....", "................GHH......................qqp......", "...............FGG.................rrrrrrrq.......", "..............EFF..................rrrrrrr........", ".............DEE..................ssrrrrrr........", "............CDD...................ss..............", "...........BCC....................ss..............", "..........ABB.....................ss..............", ".........9AA......................ss..............", "........899....................tttts..............", ".......788.....................tttt...............", "......677................uuuuuuuutt...............", ".....566.................uuuuuuuutt...............", ".....550..............vvvvuuuuuuu.................", "......001......zzzzz..wwvv........................", ".......112.....zzzzz..wwvv........................", "........223....zzzzz.xxw..........................", ".........3344444zzzzyyx...........................", "..........444444...yyy............................"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> grid = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...................................ZZZ............", "..................................YZZaa...........", ".................................XYY.abb..........", "................................WXX...bcc.........", "...............................VWW.....cdd........", "..............................UVV.......dee.......", ".............................TUU.........eff......", "............................STT...........fgg.....", "...........................RSS.............ghh....", "..........................QRR...............hii...", ".........................PQQ.................ijj..", "........................OPP...................jkk.", ".......................NOO.....................kk.", "......................MNN......................kk.", ".....................LMM......................llk.", "....................KLL......................mml..", "...................JKK......................nnm...", "..................IJJ......................oon....", ".................HII......................ppo.....", "................GHH......................qqp......", "...............FGG.................rrrrrrrq.......", "..............EFF..................rrrrrrr........", ".............DEE..................ssrrrrrr........", "............CDD...................ss..............", "...........BCC....................ss..............", "..........ABB.....................ss..............", ".........9AA......................ss..............", "........899....................tttts..............", ".......788.....................tttt...............", "......677................uuuuuuuutt...............", ".....566.................uuuuuuuutt...............", ".....550..............vvvvuuuuuuu.................", "......001.......zzzz..wwvv........................", ".......112......zzzz..wwvv........................", "........223.....zzzz.xxw..........................", ".........3344444zzzzyyx...........................", "..........444444...yyy............................"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "4321056789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> grid = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...................................ZZZ............", "..................................YZZaa...........", ".................................XYY.abb..........", "................................WXX...bcc.........", "...............................VWW.....cdd........", "..............................UVV.......dee.......", ".............................TUU.........eff......", "............................STT...........fgg.....", "...........................RSS.............ghh....", "..........................QRR...............hii...", ".........................PQQ.................ijj..", "........................OPP...................jkk.", ".......................NOO.....................kk.", "......................MNN......................kk.", ".....................LMM......................llk.", "....................KLL......................mml..", "...................JKK......................nnm...", "..................IJJ......................oon....", ".................HII......................ppo.....", "................GHHGGGGGGGGGGGGGGGG......qqp......", "...............FGGGGGGGGGGGGGGGGGGGrrrrrrrq.......", "..............EFGGGGGGGGGGGGGGGGGGGrrrrrrr........", ".............DEE..................srrrrrrr........", "............CDD...................ss..............", "...........BCC....................ss..............", "..........ABB.....................ss..............", ".........9AA......................ss..............", "........899....................tttts..............", ".......788.....................tttt...............", "......677................uuuuuuuutt...............", ".....566.................uuuuuuuutt...............", ".....550..............vvvvuuuuuuu.................", "......001.......zzzz..wwvv........................", ".......112......zzzz..wwvv........................", "........223.....zzzz.xxw..........................", ".........3344444zzzzyyx...........................", "..........444444...yyy............................"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "4321056789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqsrtuvwxyz";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> grid = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...................................ZZZ............", "..................................YZZaa...........", ".................................XYY.abb..........", "................................WXX...bcc.........", "...............................VWW.....cdd........", "..............................UVV.......dee.......", ".............................TUU.........eff......", "............................STT...........fgg.....", "...........................RSS.............ghh....", "..........................QRR...............hii...", ".........................PQQ.................ijj..", "........................OPP...................jkk.", ".......................NOO.....................kk.", "......................MNN......................kk.", ".....................LMM......................llk.", "....................KLL......................mml..", "...................JKK......................nnm...", "..................IJJ......................oon....", ".................HII......................ppo.....", "................GHHGGGGGGGGGGGGGGGGG.....qqp......", "...............FGGGGGGGGGGGGGGGGGGGGrrrrrrq.......", "..............EFGGGGGGGGGGGGGGGGGGGGrrrrrr........", ".............DEE..................srrrrrrr........", "............CDD...................ss..............", "...........BCC....................ss..............", "..........ABB.....................ss..............", ".........9AA......................ss..............", "........899....................tttts..............", ".......788.....................tttt...............", "......677................uuuuuuuutt...............", ".....566.................uuuuuuuutt...............", ".....550..............vvvvuuuuuuu.................", "......001.......zzzz..wwvv........................", ".......112......zzzz..wwvv........................", "........223.....zzzz.xxw..........................", ".........3344444zzzzyyx...........................", "..........444444...yyy............................"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> grid = {"12121"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> grid = {"1111111111111.1"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> grid = {"210125434587678BA9ABEDCDEHGFGHKJIJKNMLMNQPOPQTSRST", "WVUVWZYXYZcbabcfedefihghilkjklonmnorqpqrutstuxwvwx"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "210543876BA9EDCHGFKJINMLQPOTSRWVUZYXcbafedihglkjonmrqputsxwv";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> grid = {"yyyyyyyyyyyyyyyyyy..", "yyyyyyyyyyyyyyyyyyTT", "yyyyyyyyyyyyyyyyyyTT", "yyyyyyyyyyyyyyyyyyTT", "yyyyyyyyyyyyyyyyyyTT", "yyyyyyyyyyyyyyyyyyTT", "mmFFFJppppp7777qJJV.", "mmFFFJpppwwwwwwwwwww", "mmFFFJpppwwwwwwwwwww", "eeeeeeeeewwwwwwwwwww", "eeeeeeeeewwwwwwwwwww", "eeeeeeeeewwwwwwwwwww", "eeeeeeeeeeelllllllll", "eeeeeeeeeeelllllllll", "eeeeeeeeeeelllllllll", "eeeeeeeeeeelllllllll", "eeeeeeeeeeelllllllll", "eeeeeeeeeeelllllllll", "eeeeeeeeeeeUUUjjjet6", "bvFAAAEEAAAUUUjjjAt3", "bvFGGGEEGGGUUUGG.NZ3", "bvFGGGEEGGGUUUGG.NN3", "..FGGGEEGGGGGGGG.NN."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "36FAGEJ7NTVZbeUjlmpqtvwy";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> grid = {".......................................", ".......................................", ".......................................", ".......................................", ".....................77777777777777....", ".....................77777777777777....", ".....................777777777777778888", ".....................777777777777778888", ".....................777777777777778888", ".....................777777777777778888", ".....................777777777777778888", ".....................777777777777778888", ".....................777777777777778888", "............zzzzzzzzzzzzVVVVVVVVV888888", "............zzzzzzzzzzzzVVVVVVVVV888888", "............zzzzzzzzzzzzVVVVVVVVV888888", "............zzzzzzzzzzzzVVVVVVVVV888888", ".....................VVVVVVVVVVVV888888", ".....................VVVVVVVVVVVV888888", ".................................888888", ".............LLL.................888888", ".............Looooooooooooooo....888888", ".............Looooooooooooooo..........", ".............Looooooooooooooo..........", ".............Looooooooooooooo..........", ".............Looooooooooooooo..........", ".............Looooooooooooooo..........", ".............Looooooooooooooo..........", "..............ooooooooooooooo..........", "..............ooooooooooooooo..........", "..............ooooooooooooooo..........", "..............ooooooooooooooo..........", "..............ooooooooooooooo..........", "..............ooooooooooooooo..........", "..............ooooooooooooooo..........", ".......................................", "......................................."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "87LVoz";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> grid = {"...NNNN...", "...NNNN...", "...NNNN...", "...NNNN...", "...NNNN...", "...NNNNh..", "...NNNNhL.", "...NNNNhL.", "...NNNNhL.", "...NNNN22.", "...NNNN22.", "...NNNN22.", "...NNNN22.", "...NNNN22e", "..gNNNNgge", "..gNNNNggW", "rrgNNNNggW", "...NNNN22W", "...NNNN22W", "...NNNN22W", "...NNNN22W", "...NNNN22W", "..8NNNN22W", "V..i2zz22W", "V..i2zz22W", "V..iqzz4qq", "Vddiqzz4qq", ".ddiqqqqqq", ".ddiqqqqqq", ".ddiqqqqqq", "...ii..f.W", "...ii..f.W", "SSSSS..X.W"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "8LSVWXdefhi2gNq4rz";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> grid = {".nnnnnn....", ".nnnnnn....", ".nnnnnnrXr.", ".nnnnnnrXr.", ".nnnnnnRXr.", ".nnnnnnRRr.", "lnnnnnnRRr.", "VVVVVVVVRr.", "VVVVVVVVRr.", "VVVVVVVVRr.", "VVVVVVVVRry", "VVVVVVVVRry", "VVVBBBBVRry", "VVVBBBBxxxy", "VVVBBBBxxx.", "KKnBBBBxxx.", "KKnBBBBxxx.", "KK.BBBBxxmm", "KK.BBBBxxmm", "KK.xxxxxxmm", "KKcxxxxxxmm", "KKcxxxxxxmm", "..cxxxxxxmm", "..c44cccrmm", "..c44ccc.mm", "..cWWWWWWmm", "...WWWWWWOO"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "OlnKrRVXc4WxBmy";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> grid = {"................UU444444UU.......", "................66666666666666PP.", "................66666666666666MMW", ".......kkkkkkkkk66666666666666MM.", "GGGGGGGGGGGGGGGGGGGGGJJJJJJJJJMM.", "GGGGGGGGGGGGGGGGGGGGGJJJJJhhhhhhh", "GGGGGGGGGGGGGGGGGGGGGJJJJJhhhhhhh", "GGGGGGGGGGGGGGGGGGGGGJJJJJhhhhhhh", "GGGGGGGGGGGGGGGGGGGGGJJJJJhhhhhhh", "GGGGGGGGGGGGGGGGGGGGGJJJJJhhhhhhh", "GGGGGGGGGGGGGGGGGGGGGYYYYYhhhhhhh", "aaaa111111XXsssssssssssppqhhhhhhh", "BBBBBBBBBBBBBBBBBBBssssppqhhhhhhh", "BBBBBBBBBBBBBBBBBBBXXppppqhhhhhhh", "XXXXZZZZZZZZZZIIIXXcEEEpp55555555"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "56GJMPU4WX1IYZachkpEqsB";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> grid = {"...lll.......L.", "mmmqll.......L.", "mmmqll77.....L.", "mmbqbbbbbbbbbbs", "mmmqFFF7aavvvLs", "mRRReeRRaavvvLB", "mRRReeRRdKKKKKd", "mmZNNNNDaKKKKKB", "mmiNNNNiiKKKKKB", "mmiNNNNiWKKKKKW", "mmmPPzzhxKKKKKB", "gmmP00000KKKKKB", "gmmP00000KKKKKB", "gmmP00ppppppppp", "mmmPUTTTUKKKKKG", ".PPIIIIIIrrx99G"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "79BDFGLPadhlmRZbegiNWqsvx0IKUTprz";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> grid = {"............", "............", "......xxxxAA", "......xxxxAA", "......xxxxAA", "......xxxxAA", "......xxxxAA", "......xxxxAA", "......xxxxAA", "......xxxxAA", "......xxxxAA", "......xxxxAA", "......xxxxAA", "......xxxxAA", "......xxxxAA", "......xxxxAA", "......xxxxxx", "......xxxxxx", "......xxxxxx", "......xxxxxx", "......xxxxxx", "......xxxxxx", "......xxxxxu", "......xxxx3u", "......xxxx3u", "......xxxx3u", ".qqqqqxxxx3u", ".qqqqqxxxxtu", ".qqqqPxxxxtu", ".qqqqPvvvvtu", ".qqqqPvvvvtu", ".qqqqPvvvvtu", ".qqqqPvvvvtu", ".qqqqPvvvvtu", ".qqqqPvvvvtu", ".qqqqCCCCCtu", "pppppCCCCCtu", "pppppCCCCCtu", "pppppCCCCCtu", "pppppppppptu", "ppppp77ppptu", "ppppp77ppptt", "pppppppppptt"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "p7qCPvx3Atu";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> grid = {"..LL", "..LL", ".zLL", ".zLL", ".WWW", ".WWW", ".WWW", "IWWW", "IWWW", "IWWW", "IWWW", "IWWW", "IWWW", "IWWW", "IWWW", "IWWW", "tWWW", "IWWW", "IWWW", "IWWW", "IWWW", "IWWW", "IWWW", "IWWW", "IWWW", "IWWW", "IWWW", "IWWW", "IWWW", "IWWW", "IWWW", "sWWW", "sWWW", "sWWW", "sWWW", "sWWW", "sWWW", "sWWW", "ssff", "ssff", "ssff", "ssff", "ssff", "ssff", "5xff", "5xff", "Czff"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "5CILftzsWx";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> grid = {".......dddd.", "......Xdddd.", "......XddddE", "...YYYYddddE", "...YYYYddHHE", "...YYYYddHHE", "WWWWYYYddHHE", "WWWWYYYddHJP", "WWWWYYYddHJP", "WWWWvvvvvvJa", "WWWWvvvvvvJa", "..CCvvvvvvJa", "..CCvvvvvvJa", "IICCvvvvvvJa", "IICCvvvvvvJa", "IICCvvvvvvJa", "..CCY2bbbbJa", "..CCY2bbbbJa", "..CCY2bbbbJa", "..CCY2bbbbuu", "..CCY2bbbbuu", "..CCi2bbbbuu", "..GGG2bbbbuu", "xxGGG2bbbbuu", "xxGGG2bbbbuu", ".1CC42bbbbuu", "..CCF2bbbbuu", "..CCi2222Zuu", "..CC82222Zuu", "qqqqq2222yuu", "qqqqq2222hSS", "qqqqq2222huu", "qqqqq2222Auu", "qqqqq9999AAA", "qqqqq9999AAA", "qqqqq8yhhAAA", "qqqqq8yyyyt3", "qqqqq.yyyyt3"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "138EIPXYCWZadHJi4FGqtvxyh29AbuS";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> grid = {"........", "........", "........", "........", "........", "........", "........", "........", "........", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "ffffffff", "....MMM.", "....MMM.", "....MMM.", "....MMM.", "..55....", "..55....", "........", "........"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "5Mf";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> grid = {".......BBMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMwwww", ".......BBMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMwwww", ".......BBBBBBBBBBBBBBBB............wwwwwwwwww", ".......BBBBBBBBBBBBBBBB6...........wwwwwwwwww", ".......BBBBBBBBBBBBBBBB6......SSSSSwwwwwwwjjj", ".......BBBBBBBBBBBBBBBB6...........wwwwwwwjjj", ".5UUUUUUUUUUUUUUUUBBBBB6fffffIIIIffwwwwwwwjjj", ".5UUUUUUUUUUUUUUUUBBBBB6ffffffflllllllllllllO", ".5UUUUUUUUUUUUUUUUBBBBB6ffffffflllllllllllllO", ".5UUUUUUUUUUUUUUUUBBBBB99999999lllllllllllllE", ".5UUUUUUUooooooooooBBBB99999999994444tttttttt", ".5UUUUUVVVVVVVVVVVoBBBB99999999994444tttttttt", "..UUU11VVVVVVVVVVV1111111111111111111tttttttt", "..UUUUUVVVVVVVVVVVBBBBB99999999994444tttttttt", "..UUUUUVVVVVVVVVVVBBBBB644444444444qqtttttttt", "..UUUUUUUUUUUUUUUU66666644444444444qqtttttttt", "..UUUUUUURRRRRRRRRRRRRRRRRRRRRRRRRRRRtttttttt", ".........RRRRRRRRRRRRRRRRRRRRRRRRRRRRtttttttt", ".........RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR.nnn."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "4569BEOSU1RfIlnoVqtwMj";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> grid = {"...", ".hh"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "h";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> grid = {"..................................................", "................................iiiiiii...........", "................................iwwwwwwwwwww......", ".......qqqqqqqqqqqqqqqqqqqqqqqqqiwwwwwwwwwwwqqqqqq", ".......qqqqqqqqqqqqqqqqqqqqqqqqqiwwwwwwwwwwwqqqqqq", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbqiiiiiiiqqqqqqqqqqq", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbqiiiiiiiqqqqqqqqqqq", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbFiiiiiiiFqqqqqqqqqq", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbFiiiiiiiFqqqqqqqqqq", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbFiiiiiiiFqqqqqqqqqq", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbFiiiiiiiFqqqqqqqqqq", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbFiiiiiii11111111111", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbFiiiiiii1EEEEEEEEE1", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbFiiiiiii1EEEEEEEEE1", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbFiiiiiii1EEEEEEEEE1", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbFiiiiiii1EEEEEEEEE1", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbFiiiiiii1EEEEEEEEE1", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbFiiiiiii11111111111", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbb0000000000000000000", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiii11111111111", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiFqqqqqqqqqq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiFqqqqqqqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiFqqqqqqqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiFqqqqqqqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiFqqqqqqqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiFqqqqqqqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiFqqqqqqqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiFqqqqqqqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiFqqqqqqqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiqqqqqqqqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiqqqqqqqqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiqqqqqqqqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiqqqqqqqqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiqqqqqqqqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiqqqqqqqqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbKiiiiiiiqqqqqqqqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbBiiiiiiiBBBBBBBqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbBiiiiiiiBBBBBBBqUUq", "KKKbbbbbbbbbbbbbbbbbbbbbbbbbbbbBiiiiiiiBBBBBBBMUU.", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbBiiiiiiiBBBBBBBMMz.", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbBBBBBBBBBBBBBBBzzz.", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbBBBBBBBBBBBBBBBzzz.", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbBBBBBBBBBBBBBBBzzz.", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbBBBBBBBBBBBBBBBO...", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbb...............O...", "...bbbbbbbbbbbbbbbbbbbbbbbbbbbbjjjjjjjjjjjjjjjjj..", "..........................jjjjjjjjjjjjjjjjjjjjjj..", "...eeeeeeeeeeeeeeeeeeeeeeejjjjjjjjjjjjjjjjjjjjjj.."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "OejqF1EKBbi0wzMU";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> grid = {".......................................", ".......................................", ".......................sssssss.........", ".......................spppppppppppp...", ".......................spppppppppppp...", "......vvvvvvvvvvvvvvvvvvvvvppppppppp...", ".......................sppphhhhhhhhhh..", ".......................sppphhhhhhhhhh..", ".......................sppphhhhhhhhhh..", ".......................sppphhhhhhhhhh..", ".......................spppppppppppp...", ".......................spppppppppppp...", ".......................spppppppppppp...", ".......................spppppppppppp...", "...rrrrrrrrrr7777rrrrr..ppppppppppppq..", "...rrrrrrrr5555555555555ppppppppppppq55", "...........5555555555555pppppppppppp555", "...........5555555555555pppppppppppp555", "...........5555555555555555555555555555", ".......................................", "......................................."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "r57qsphv";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> grid = {"......zqqqq", "......zqqqq", "......zqqqq", "......zqqqq", "......zxxz.", ".....MMMMMM", ".....MMMMMA", ".....MMMMMA", ".....MMMMMA", ".....MMMMMA", "....JMMMMMA", "....JMMMMMA", "....JMMMMMA", "....JMMMMMA", "....JMMMMIA", "..33JMMMMIA", "..33TMMMyyA", "FFFFFMMMyyA", "FFFFFMMMyyA", "FFFFFMMMycA", "BBhXTMMMycA", "BBhXTMMMycA", "BBhXTMMMycA", "B7777777ycA", "B7777777ycA", "B7777777ycA", "B7777774ycA", "B7777774ycA", "ggg77774ycA", "ggg77774ycA", "ggg77774ycA", "B7777777ycA", "B999TMMMMcA", "WWWWTMMMMcA", "WWWWTMiiMcA", "KKKKKKKKKcA", "KKKKKKKKKcc", "BB33TMiiMcc", "BB33TMiincc", "BB33TMiiwcc", "BB33TMiiMcc", "BB33TMiiMcc", "..333MMMMIM"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "3B9JMIT74FWXghiKnwycAzqx";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> grid = {"............................e.......", "............................e.......", "............................e.....jj", "............................e.......", "............................e......6", "...........KKKKKKKKKKKK...o.eC.UU..6", "........qqqKKKKKKKhhhhhh..o.eC.UU..6", "........qqqKvvvvvvhhhhhhvvvvvvvUUgH7", "........qqqKvvvvvvhhhhhhvvvvvvvUUgH7", "........qqqKvvvvvvhhhhhhvZZZZZZZZZH7", "........qqq.vvvvvvhhhhhhvvvvvvvUURH7", "........qqq.vvvvvvhhhhhhvvvvvvvUURH7", "GG......qqq.vvvvvvhhhhhhvvvvvvvUUgH7", ".....NNNqqqNvvvvvvhhhhIIIIIIIIIIIgH7", ".....NNNqqqNNN22ffhhhhIIIIMMIIIIIgH7", ".....NNNqqqNNN22ffhhhhIIIIMMIIIIIcH7", ".....NNNNNNNNN22ffhhhhIIIIMMIIIIIcH7", "...AAAAAAAAAAAAAffhhhhIIIIMMIIIIIAAc", "...AAAAAAAAAAAAAffhhhhIIIIIIIIIIIAAc", "...AAAAAAAAAAAAAffhhhhIIIIIIIIIIIAA.", "...AAAAAAAAAAAAAffhhhhIIIIIIIIIIIAA.", "..................hhhhIIIIIIIIIII..."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "26CGKNUc7AHefgRjoqvZhIM";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> grid = {"..............KKK", ".....IIIIIIId.KKK", "..iiiI555555d5KKK", "..iimm555555d5KKK", "..iimm555555d5KKK", "....mm555555d5KKK", "....mm5QQQQQQQQQK", "....mm5QQQQQQQQQK", "....mm5QQQQQQQQQa", "....mm5QQQQQQQQQa", "....mm5QQQQQQQQQa", "..xxxx5QQQQQQQQQa", "..xxxx5QQQQQQQQQa", "..xxxx5QQQQQQQQQa", "..xxxx5QQQQQQQQQa", "..xxwwwQQQQQQQQQa", "..xxwwwaaaaaaaaaa", "..xxwwwaaaaaaaaaa", "..xxxx5aaaaaaaaaa", "..xxxx5aaaaaaaaaa", "..xxxx5aaaaaaaaaa", "..xxxx5aaaaaaaaaa", "..xxxx5aaaaaaaaaa", "..xoxx5aaaaaaaaaa", "..xoxx5aaaaaaaaaa", "..xoxx5aaaaaaaaaa", "..xoxx555555d5mmJ", "..xoxx555555d5mmJ", "..xoxx555555d5mmJ", "..xoxx555555d5mmJ", "..xoxx555555d5mmJ", "..xoxxxxxxxxdJJJJ", "...zz1111qq1dJJJJ", ".......2222222JJJ"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "1IJ2imKqx5daQowz";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> grid = {"............XX", "............XX", "TTTTTTTTTuuuuT", "TTTTTTTTTuuuuT", "TTJJJTTTTuuuuT", "..JJJ....uuuuX", "..JJJ....uuuuX", "..JJJ....uuuuX", "..JJJ...EuuuuX", "..JJJ...EuuuuX", "..JJJ.mmEuuuuX", ".dJJJdmmEuuuuX", ".dJJJdmmEuuuuX", ".dJJJdmmEuuuuX", ".dJJJ111EuuuuX", ".dJJJ111EuuuuX", ".GJJJ111Euuuuh", ".GJJJ111Euuuuh", ".GJSSSSSSSSSSS", ".GJSSSSSSSSSSS", ".GJSSSSSSSSSSS", ".ccSSSSSSSSSSS", ".ccSSSSSSSSSSS", ".ccSSSSSSSSSSS", ".ccSSSSSSSSSSS", ".ccSSSSSSSSSSS", ".ccSSSSSSSSSSS", ".ccSSSSSSSSSSS", ".ccSSSSSSSSSSS", ".ccSSSSSSSSSSS", ".ccSSSSSSSSSSS", ".ccSSSSSSSSSSS", ".cccccccccee.."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "EGXTcd1JSehmu";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> grid = {".......eeeeeeeeeeeeeeee........vvv.....", ".FFFGGGeeeeeeeeaaaaaaaaaaaaaaaaaaa.....", ".FFFG77eeeeeeeeeeeNNNNNNNNNNNNNNNv..nn.", ".FFF.77eeeeeeeeeeeNNNNNNNNNNNNNNNWWWWWW", ".OOOOOOeeeeeeeeeeeNNNNNNNNNNNNNNNhhhhhh", "rrrrrrreeeeeeeeeeeNNNNNNNNNNNNNNNhhhhhh", "cFFFc77eeeeeeeeeeeNNNNNNNNNNNNNNNhhhhhh", "cFFFc77eeeeeeeeeeeNNNNNNNNNNNNNNNhhhhhh", ".FFF.77eeeeeeeeeeeNNNNNNNNNNNNNNNhhhhhh", ".FFF.77eeeeeeeeeeeeeeeeEiiEhhhhhhhhhhhh", ".....77eeeeeeeeeeeeeeeeEiiEhhhhhhhhhhAh", ".....777777777777777777EiiEhhhhhhhhhhAh", ".....777777777777777777EEEHHHHHHHHHHHAH", ".....7777777777777777777777xxxhhhhhhhhh"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "G7EWcFOehHAinrvNax";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> grid = {".......ggggggggggggggggg...............oooo..", ".fffffffffffffffffffffffffffffffffff...oooo..", ".fffffffffffffffffffffffffffffffffffZZZooooZ.", ".fffffffffffffffffffffffflllllll55555llllllll", "kfffffffffffffffffffffffflllllll55555llllllll", "kff33333333333333333333333llllll55555llllllll", "kff33333333333333333333333UUUUlllllllllllllll", "kff33333333333333333333333UUUDDDlllllllllllPl", "kff33333333333333333333333cccDDDccAAAAlllplll", "kff33333333333333333333333rrrDDDrrrrrrrrrrrrr", "kff33333333333333333333333rrrrrrrrrrOOOOrrrrr", "kff33333333333333333333333rrrrrrrrrrOOOOrrrrr", ".ffffffffffffffffffffffffllllxxxxxxxxxxxxxlll"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "Zfgkl35APUcoprDOx";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> grid = {"..yyyyyyyyy................EEEEEEEEEEEEEEEj", "...........................EEEEEEEEEEEEEEE9", ".......................ttttEYYYYYYYYY6666E9", ".NNN...................ttttEYYYYYYYYY666eee", ".NNN...................ttttEYYYYYYYYa666eee", ".NNN...................ttttEYYYYYYYYa666eee", ".NNN.......RRRRRRRRRRRRRRRREYYYYYYYYa666eee", ".NNN.......RRRRRRRRRRRRRRRREYYY77777a666eee", ".NNN....rrrrrrrrrrrrrrrrrrrrrrrQQQ77a666677", ".NNN....rrrrrrrrrrrrrrrrrrrrrrrQQQYYa6666z9", ".NNN....3..RRRRRRRRQQQQQQQQQQQQQQQYYa6666z9", ".NNN....3..RRRRRRRRRRRRRRRRiYYYYYYYYYYYYzz9", ".NNN....3...iikkkkkkki111111111111111111119", ".NNN....3...iiiiiiiiii111111111111111111119", ".NNN....3...iiiiiiiiii11111111111111111111B", ".NNN....3.........zzzz11111111111118888811B", ".NNN....3.........zzzz1111111111111888881gB", ".nnnnnnn3nnnnsssssssss1111111111111111O11g.", ".NNN....3....sssssssss1111111111111111111g."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "9BENjn3styzY76aei18ORQgkr";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> grid = {"......", "......", "f.....", "f7..k.", ".7ggk.", ".7ggk.", "NNggk.", "NNggk.", "NNggk.", "NNggk.", "NNggk.", "NNggk.", "NNggk.", "NNggk.", "NNggk.", "NNggk.", "NNggk.", "NNggk.", "NNggk.", "NNggk.", "RRRRk.", "RRRRk.", "RRRRk.", "RRRRk.", "RRRRR.", "RRRRRQ", "..gga.", "ttggt.", ".....G"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "7GNQaftgRk";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> grid = {".........", "44...YYYY", "JJJJJYYYY", "JjjjjjYYY", "JjjjjjYYY", "JJJJJYYYY", "JJJJiiiig", "JJJJiiiig", "JJJJiiiig", "JJMNiiiig", "..MNNNDQY", "..MNNNDQY", "CCCNNNZQY", "COOOOObbb", "COOOOObbb", ".OOOOOZWW"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "4CJMOWYDNQZbgij";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> grid = {".vbbbbbbbbbbbbbbbbbb9", "FvbbbbbbbbHHHHHHHHHHH", "yPbbbbbbbbHHHHHHHHHHH"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "9FPbHvy";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> grid = {"...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "......vvv..", "...........", "..........."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "v";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> grid = {"................................", "...........lllllllllllllllllllll", ".....EEEEEElllllllllllllllllllll", ".....EEEEEEllllllllllllllllllnll", ".....EEEEEEllllllllllllllllllnll", ".....EEEEEElllllllllllllllllllll", ".....EEEEEElllllllllllllllllllll", ".....EEEEEElllllllllllllllllllll", ".....EEEEEElllllllllllllllllllll", ".....EEEEETlllllllllllllllllwwww", ".....EEEEETTTTTTTTTooooooooowwww", ".....EEEEETTTTTTTTTooooooooowwww", ".....EEEEETTTTTTTTTooooooooowwww", ".....EEEEETTTTTTTTTooooooooowwww", ".....EEEEETTTTTTKKDDDDDDDDDDDwww", "UU...EEEEETTTTTTKKKKKKooooAAwwww", "UU..2EEEEETTTTTTKKKKKKooooAAwwww", "UU...EEEEEEIooooKKKKKKooooAAwwww", "UU...EEEEgggggggKKKKKKooooAAwwww", "UU.JJJJvvvvvvvvvKKKKKKJoooAAwwww", "UU.JJJJvvvvvvvvvKKKKKKJoooAAoom.", "UU.JJJJvvGGGGGGGKKKKHHHHHHHHHHHH", "UU.JJJJvvGGGGGGGKKKKHHHHHHHHHHHH", "UU.JJJJvvGGGGGGGKKKKHHHHHHHHHHHH", "...JJJJvvGGGGGGGKKKKKKGGGGAAGVm1", "...JJJJJJGGGGGGGKKKKKKGGGGAAGVm1", "......XXXXXXXXIIPPPPPPPPPPAA...1"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "12EIPUVXmoJTglnvGAKHwD";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> grid = {".", ".", ".", ".", ".", "M", "M", "M", "M", "M", "M", "M", "M", "M", "M", "M", "M", "M", ".", ".", ".", ".", ".", ".", ".", ".", "."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> grid = {".................", ".....UUUUUUq.....", ".....UUUUUUqLLLL.", ".....UUUUUUqLLLLf", ".....UUUUUUqLLLLf", ".....UUUUUUqLLLLf", ".....UUUUUUqLLLLf", "...ttUUUUUUtLLLLf", "11WttUUUUUUt1999f", "11WttUUUUUUt1999f", "11WooUUUUUUt1999f", "11WooUUUUUUtr9T9f", "11WooUUUUUUtr9T94", "11WooUUUUUUtr9T94", "11WooUUUUUUtr9T94", "11WooUUbbUUtr9T94", "11WooUUbbUUtr9T94", "1PWooUUbbUUtr9T94", "1PWooUUbbUUtddT94", "1PWooUUbbUUtddT94", "1PWttUUbbUUtddT94", "1PWttUUbbUUtr9T94", "1PWt888bb88888894", "1PPt888bbxxxxxx94", "1PPt888bbxxxxxx94", "222t888bbxxxxxx22", "222t888bbxxxxxx22", "222t888bbxxxxxxG2", "222t888bb888888G2", "222t888bb888888G2", "222t888bb888888G2", "222t888bb888888G2", "222t888bb888888G2", "222t888bb888888G2", "222t88888888888G2", "222t88888888888G2", "222t88888888888G2", "222288888888888G2", "222288888888888G2", "22228888ggggggggg", "22222EEEEEEEEEGG2"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "1249EGLPTWfqrdt8Ubgox";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> grid = {"......", "......", "......", "......", "...d..", "...d5.", "...d5.", "tttd5.", "tttd66", "tttd66", "ttTd66", "ttTnn6", "ttTnn6", "ttTnnG", "ttTnnG", "ttTnnG", "ttTnnG", "ttNnnN", "tiNnnN", "tfNnnN", "HHNnnN", "HHNnnN", "111nn1", "111nn1", "bbNnnN", "bbNnnN", "bbNnn0", "EbNnn0", "EbNNNN", "EbNNNN", "EbNNNN", "uuHHww", "uuHHww", "uuHHww", "uuHHww", "uuffww", "....ww"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "56GdtTfHN01bEinuw";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> grid = {"......................QQ...................", "..................DDDDQQDDDD333333333DDD...", "..................DDDDQQDDDD333v00000DDD...", ".......UUUUUUUUUUUUUUUUUUUkUUU5555555555...", "..WWWWWUUUUUUUUUUUUUUUUUUUkUUU5555555555WWW", "..WWWWWUUUUUUUUUUUUUUUUUUUkUUU5555555555WWW", "..WWWWWUUUUUUUUUUUUUUUUUUUkUUU5555555555qqW", "..WWWWWUUUUUUUUUUUUUUUUUUUkUUUUUwwU00EEqqqW", "..WWWWWUUUUUUUUUUUUUUUUUUUkUUUUUUUU00EEqqqW", "..WWWWWUUUUUUUUUUUUUUUUUUUkUUUUUUUU00EEqqqW", "..WWWWWUUUUUUUUUUUUUUUUUUUkUUUUUUUUEEEE9911", "..WWWWWWWWWWWWEEfffffffffffffffffffEEEE9911", "..WWWWWWWWWWWWEEfffffffffffffffffffEEEE9911", "..WWWWWWWWWWWWEEfffffffffffffffffffEEEE9911", "..WWWWWWWWWWWWEEfffffffffffffffffffEEE88899", "..WWWWWWWWWWWWEEfffffffffffffffffffEEE88899", "..............EEfffffffffffffffffff22288899", "..............EEfffffffffffffffffff22288899", "..............EEEEEE222777k7772222222288899", "......444tttttEEEEEE222777k77722222222888S9", "......444tttttEEEEEE222777k7772IIIIII2888S9", "......444tttttEEEEEE222777k7772IIIIII2888Sx", ".........tttttEEEEEEEEEEEBkBBBBBBBBMMM888xx", ".........tttttEEEEEEEEEEEBBBBBBBBBBMMMExggg", ".ZZZZZZZ......EEEEEEEEEEEBBBBBBBBBBMMMEHggg"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "4D3HQW91E027BIMUZkfq5tvwx8Sg";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> grid = {".............", "...........4.", "...........4.", "v...1.cccc.4.", "v..e1.cccc.4.", "v..e1.cccc.4.", "vPPP1PccccP4M", "vPPP1PccccP4b", "CPPP1PccccP4J", "CPPP1PccccP4J", "CPPP1PccccP4J", "CPPP1PiiccP4J", "CPPP1PiiccP4J", "CPPmmmmiccPTT", "CPPmmmmiccPTT", "CPPmmmmiccPTT", "CPPmmmmicQPTT", "CPPmmmmiccPTT", "CPPmmmmiccPTT", "CPPzzmmZccPTT", ".PPmmmmHHHPTT", ".PPmmmmHHHqTT", ".PPmmmmHHHqTT", ".PPmmmmHHHPTT", ".PPmmmmHHHWTT", ".PPmmmmHHHPTT", "..ammmmHHHMTT", ".77mmmmHHH79X", ".77777cHHH799", ".7777RcHHH799", ".77777cHHH799", ".77777cHHH7..", ".77777cHHH7..", "..aaaacHHH...", "..aaAAAHHHfff", "..kk........2"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "29CM4JP1TWXa7ARbcHQZefikmqvz";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> grid = {".......", ".k.R...", "...QwwL", ".ccRww.", ".ccRww.", ".WfWww.", "...Rww.", "...Rww.", "...Rww.", "...Rww.", "...Rww.", "....ww.", "....ww.", ".......", ".......", ".......", ".......", "..4444x"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "4LRQWcfkwx";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> grid = {".....................", "...........77........", "...........77000.uuu.", "...VVVVVVVV77000Vuuu.", "...VVVVVVVH77000HcuuH", "...QVVVVVMM77000MuuuH", "...VVVVVVMM75000MuuuH", ".TYOOOOOOOOOOO00MuuuH", ".TTOOOOOOOOOOO00MuuuH", "...OOOOOOOOOOO00Muuu.", "gggOOOODOOOOOOBBBBBu.", "gggOOOOOOOOOO200Muuu.", "gggOOOOOOOdOOO00Muuu.", "gggOOOOOOOOOOOMMMuuu.", "gggOOOOOOOOOOOMMMuuu.", "gggOOuOOOOOOOOMMMuuu.", "gggOOOOOOOOOOOggguuu.", "gggOOOOOOOOOOOg33uuul", "ggg6OOOOOAAAAOg33uuul", "gggOOOOOOAAAAOg33uuul", "gggOOOOOOOOOOO44S4445", "gggOOOOOOOOOOO4444445", "gggOOOOOOOeOOOg33uuu5", "66666666666wwnwwwwuu5", "g666666666666n633uuu5", ".6666666666666666uuu5", ".6666666666666P66ooo.", "..FFFFFFFFFFCCCCCCCCr"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> grid = {"....................................", "....................................", ".............p1111111111..RRRRRR....", ".............p111CMMMMMMM1RRRRRR....", ".........hhhhp77777MMMMMMMRRRRRRTT..", ".........hhhhp77777CC111hhh....TTT..", ".................CCCC.SSSSS....TTT.."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> grid = {".................................", ".................................", "..........S......................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", "......X...........G..............", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", "...........M.....................", ".............................i...", ".................................", ".................................", ".................................", "................p................", ".................................", ".................................", "............LLLLLLLLLLLLLLLLL....", ".................................", ".t...............X..............."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> grid = {".....................d..Z..........WW.", "n.....0000000kkkkkkk.d........99999WW9", "......0000000kkkkkkk.d........99999WW9", "......0000000kkrrrrr.d......JJJJJJJJW9", "......0000000kkrrrrrbd......JJJJJJJJW9", ".....o000000066rrrrr66666oooJJJJJJJJW9", ".....o000000066rrrrr66666oooJJJJJJJJW9", ".....o00llll066rrrrr66666VooJJJJJJJJW9", "......00llll066rrrrr66.66...JJJJJJJJW9", "......00llll0kkrrrrrXXXXXXXXJJJJJJJJ99", "......00llll0kkrrrrrEEEEEEEEEEEeeee999", "......0Ullll0kkpppppppppppEEEEEE999999", "......00llll0kkpppppppppppyyyyyyyyyyyy", "....xhxxxxxxxxcpppppppppppcccccccyyyyy", ".PPPxxxxxxxxxxcpppppppppppcccCCCCCCCyy", "uuuuxxxxxxxxxxcpppppppppppzccCCCCCCCyy", "uuRRxxxxxxxxxxVpppppppppppcccCCCCCCCyy", "uuRRxxoxexxxxxVpppppppppppiccCCCCCCCyy", "uuRRxxxxxxxxxxVpppppppppppcccCCCCCCCyy", "uuRRxxxxxxxxxxVpppppppppppcccCCCCCCC.w", "uuuuxxxxxxxxxxVpppppppppppcccCCCCCCCjw", "uuuuxxxxxxxxxxVpppppppppppcccCCCCCCCjw", "uuuuxxxxxxxxxxVpppppppxpppcccCCCCCCCjw", ".OOOOO00llll0cVpppppppppppcccCCCCCCCjw", ".OOOOO00llll0cVpppppppppppcccCCCCdCCjw", ".OOOOO0000000cVpppppppppppcccCCCCCCCjw", ".OOOOOOOOOPPPcVpppppppppppcccCCCCCCCjw", ".OOOOOOOOO...cVpppppppppppcccCCCCCCCjw", ".OOOOOOOOO...cVpppppppppppcccCCCCCCCjS", ".OOOOOOOOO...cVVZZZZZZZZZZZZZZZccSSSSS", ".OOOOOOOOO...kVVZZZZZZZZZZZZZZZzSSSSSS", ".............ggHZZZZZZZZZZZZZZZzSSSSSS", "................ZZZZZZZZZZZZZZZSSSSSvv", ".........................fffffffff22vv", "....mmmm........888BBBBBBBBBBBBBBB22Sh"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> grid = {".................................", ".................................", ".................................", ".................................", "........................d........", "........................d........", "........................d........", "........................d........", "........................d........", "........................d........", "........................d........", "........................d........", "........................d........", "........lllllllllllllllldl.......", "........lllllllllllllllldl.......", "........lllllllllllllllldl.......", "........lllllllllllllllldl.......", "........lllllllllllllllldleeeeee.", "........lllllllllllllllldleeeeee.", "........lllllllllllllllldleeeeee.", "........lllllllllllllllldleeeeee.", "..yyyyyyyyyyyylllllllllldleeeeee.", "..yyyyyyyyyyyylllllllllldl.......", "..yyyyyyyyyyyylllllllllldl.......", "..yyyyyyyyyyyylllllllllldl.......", "..yyyyyyyyyyyylllllllllldl..0....", "..yyyyyyyyyyyylllllllllldl.......", "..yyyyyyyyyyyylllllllllldl.......", "..yyyyyyyyyyyylllllllllldl.......", "....YYYYYYYllllllllllllldl.......", "....YYYYYYYlllllllllll77d77777777", "....YYYYYYYlllllllllll77d77777777", "....YYYYYYYlllllllllll77d77777777", "....YYYYYYYlllllllllll77777777u77", "......4.llllllllllllll77777777777", "........llllllllllllll77777777777", "...o.ZZZZZZZZZZZZZZZZZ77777777777", "...o....llllllllllllll77777777777", "...o....llllllllllllll77777777777", "...o....llllllllllllllllll.......", "........lllllllVllllllllll9......", "........llllllllllllllllll.......", "........llllllllllllllllll.......", "........llllllllllllllllll.......", ".................................", "................................."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "049el7VYZdouy";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> grid = {"..................................ZZZZ..", "....BBBBBBBBBBBB1BBBB...r4rrrrrrrrrrry..", "....BBpBBBBBBBBBBBBBB...rurrrrrrrrrrrZ..", "....BBBBXXXXXXBBBsBBBeeeeueeeemeeqqqqq..", "....BBBBXXXXXXBBBBBBBeeeeueeeeeeeqqqqq..", "....BBBBXXXXXXBBBBBBBeeeeueeeeeeeqqqqq.H", "....BBBBXXXXXXBBBBBBBee11u111eeeeqqqqq..", "....BBBBXXXXXXBBBBBBBee11uEEEEEEEqqqqq..", "....BBBBXXXXXXBBBBBBBee11uEEEEEEEEEEee..", "....BBBBXXeXXXBBBBBBB3333333E7EEEEEEee..", "....BBBBXXXXXYBBBBBBB3333333EtEEEEEEee..", "....BBBBXXXXXXBBBBBBB3333333E7TTTTmmmmmm", "....BBBBXXXXXXBBBBBBB3333333E7TTTTmmmmmm", "....BBBBXXXXXXBBBBBBB3333333E7TTTTmmmmmm", "....BBBBXXXXXfBBBBBBB3333333E7TTTTmmmmmm", ".sssBBBBXXXXXXBBBBBBB3333333E7TTTTmmmmmm", ".sssBBBBXXXXXXBBBBBBB3333333K7TTTTmmmmmm", ".sssBBBBXXXXXXBBBBBBB3333333K7TTTTmmmmmm", ".sssBBBBXXXXXXBBBBBBB333333.K7TTTTmm2222", "ffffBBBBXXXXXXBBBBBBBffffffffffffffm2222", "ffffBBBBXXXXXXBBBBBBBffffffffffffffc2222", "ffffBBBBXXXXXXBBBBBBBffffffffffffffm2222", "ffffffffXXXXXXfffffffffffffffffffffm22.2", "ffffffffXXXXXXfffffffffffffffffffffm2222", ".......xXXXXXX33333333333333i7immmmm2222", ".......xXXXXXX33333333333333i7immmmm2222", ".hhhhhhhh3333333333333333333h7hmmmmm2222", ".hhhhhhhh3333333333333333333h7hmmmmm2222", ".hhhhhhhh3333333333333333333h7hmmmmmmmmm", ".hhhhhhhh33333333333333333m3h7hmmmmmmmmm", ".hhhhhhhh3333333333333333333h7hmmmmmmmmm", "Ohhhhhhhhhhhhhhhhhhhhhhhhhhhhhhmmmmmmmmm", "OhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhmmmJJJmmm", "OhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhmmmJJJmmm", "OOOOOOOOOOOOFFFFF4AAAAAAASSSSSSmmmJJJmmm", ".nnnnnnnnnnnFFFFF4AAAAAAAAAAAMMmmmJJJaam", "................................666....t"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> grid = {"............................", "............................", "............................", "............................", "..........JJJJJJJJJJJJJJJJ..", "nnnnnnnn..JJJJJJJJJJJJJJJJ..", "nnnnnnnn..JJJJJJJJJJJJJJJJ..", "nnnnnnnn..JJJJJJJJJJJJJJJJ..", "nnnnnnnn..JJJJJJJJJJJJJJJJ..", "nnnnnnnn..JJJJJJJJJJJJJJJJ..", "nnnnnnnnlll.ddddddddddddddd.", "nnnnnnnnlll.dddddddddddddddo", "nnnnnnnn88w888888888888888d.", "nnnnnnnn88w888888888888888d.", "nnnnnnnn88w888888888888888ff", "nnnnnnnn88w888888888888888ff", "nnnnnnnn88wttttttttttt8888ff", "nnnnnnnn88wttttttttttt8888ff", "nnnnnnnn888888888888888888ff", "nnnnnnnn888888888888888888ff", "nnnnnnoo888J88888888888888ff", "333nnnoo888888888888888888ff", "333nnnoo888888888888888888ff", "333llloo888888888888888888ff", "333llloo888888888888888888ff", "333llloKKKKKKKKKKKKK888888ff", "333llloKKKKKKKKKKKKK888888ff", "333llloKKKKKKKKKKKKK888888ff", "333llloKKhhhhhhhhhhhhhhh88ff", "333sssoo8hhhhhhhhhhhhhhh88ff", "333sssoo8hhhhhhhhhhhhhhh88ff", "333sOOOOOOOOOOOOOOOOOhhh88ff", "lllsOOOOOOOOOOOOOOOOOhhh88ff", "...sOOOOOOOOOOOOOOOOOhhh88ff", ".1zzOOOOOOOOOOOOOOOOOhhh88ff", "CCCCOOOOOOOOOOOOOOOOO88888d.", "CCCCOOOOOOOOOOOOOOOOO88888p.", "CCCCOOOOOOOOOOOOOOOOO88888p.", "CCCCOOOOOOOOOOOOOOOOO88888p.", "CCCCOOOOOOOOOOOOOOOOO88888p.", "CCCCOOOOOOOOOOOOOOOOO88888p.", "CCCCCCCC888888888888888888p.", ".jzzzzzz888888888F88888888d.", ".jzzzzzz8888888888888aaaaaaa", ".jzzzzzq8888888888888aaaaaaa", ".jzzzzzqqqqqqqqqqzuuujj.....", ".jzzzzzqqqqqqqqqqzuuujj.....", ".jjjjjjqqqqqqqqqqjuuujj.....", "..................uuu.......", "..........iiiiiiiiuuuiiiiii."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> grid = {"ccccPPPPPPszPPPP.PPPPPPPPPPrPPP.PP009.", ".LcccLSSSSlKKKKLLVLLCXTTTTTr33337777h."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> grid = {"..UU", "..UU", "..UU", "GGUU", "JGUY", "GGUU", "GGUU", "..UU", "rYUU", "JJJJ", "J.JJ", "JJJJ", "JJAJ", "J1JJ", "JJJJ", "JJJJ", "JJJJ", "JJJJ", "JJJJ", "JJJ.", "JJJJ", "JJJJ", "JJJJ", "JJJJ", "JJwJ", "JJwJ", "JWwJ", "JJwg", "JJwJ", "JJwJ", "JUwJ", "JJwJ", "JJwJ", "RJwz", "JRwJ", "JRwe", "JRwJ", "JJwJ", "JJwJ", "JAwJ", "JffJ", ".ffs"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> grid = {".........", "......aaa", ".UYYYYaaa", ".UYBBBaaa", ".UYBBBaaa", ".UYBBBaaa", ".UYBBBaaa", ".UYBBBaaa", ".UYBBBaaa", ".UYBBBaaa", ".UYBBBaaa", ".UYBBBaaa", ".UYYYYaaa", ".UYYYYaaa", ".UJJJJJJa", ".UJJJJJJa", ".UJJJJJJa", ".UJJJJJJa", ".UJJJJJJa", ".UJJJJJJa", ".UJJJJJJa", ".UJJJJJJa", ".UJJJJJJa", ".UJJJJJJa", ".UJJJJJJa", ".UJJJJJJa", ".UJJJJJJa", ".UJJJJJJa", ".zJJJJJJ6", ".zJJJJJJ6", ".zJJJJJJ6", ".zJJJJJJ6", ".zJJJJJJ6", ".yyJJJJi6", ".yy666666", ".yy666666", "Kyy666666", "Kyy666666", "Kyy666666", "KKK666666", "KKK666666", "KKKKtKK.n", "....t..sn", "........n"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "K6UYBaJinstyz";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> grid = {".....PPPPPPPPPNNNNPPYY", ".....PPPPPPPPPANnnnnn8", ".11FFFFFFFFFF1AN444nx.", "b111111111111qAqqqqqqq", "b111111111111qAeeeqqWW", "bbbbbPPPPPPPPqAeee22WW", "bbK3333333333qAeee22WW", "bbbbbPPccccccqAeee22WW", ".......cccccCCCeee22WW", "..IIIddddddddCCeee2222", ".....ddddddddqAeee2222", ".....ddddddddrAeee2222", ".....dd00000drreee2222", ".vvvvdd00000drrVVV2222", "Zvvvvdd00000drrVVV2222", ".vvvvdd00000drrVVV5www", ".....ddddddzzzzzzz5www", "DDgggdddddUzzzzzzz5www"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "58DIPNVYZb13FKcgn4q2WerACd0Uvwxz";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> grid = {".GGGGGFbbbbbkFGGK", ".GGGGGHbbbbbkFXXK", ".Gjjjjjjjjjjjjjjt", ".GGMMMMMkkkVVVVnt", "..0MMM33WWW.VVVnH"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> grid = {"..........................................", "....fffffffffffffff.......................", "....fffffffffffffff.........sssssss......E", "....fwfffffffffffffzzzz.....sssssss......E", "....fffffffffffffffzzzz.....sssssss......E", "............zzzzzzzzzzz.....sssssss......E", "............zzzzzzzzzzzccccccccccccc.....E", "..............cccHcccccccccccccccccc.....E", "..............cccccccccncccccccccccc.....E", "..............cccccRRRRRcccccccccccc.....E", ".........IIIIIIIIIIIIIIIIIIIIIIIcccc.....E", ".........IIIIIIIIIIIIIIIIIIIIIIIcccc.....E", ".........IIIIIIIIIIIIIIIIIIIIIIIBBBBBBBBll", ".........IIII0IIIIIIIIIIIIIIIIIIBBBBBBBBll", ".........IIIIIINNNNNNNNNNNNNNNNNNNNNNNNNNl", ".........IIIIIINNNNNNNNNNNNNNNNNNNNNNNNNNl", ".........IIIIIINNNNNNNNNNNNNNNNNNNNNNNNNNl", ".........IIIIIINNNNNNNNNNNNNNNNNNNNNNNNNNl", ".........IIIIIINNNNNNNNNNNNNNNNNNNNNNNNNNl", ".........IIIIIINNNNNNNNNNNNNNNNNNNNNNNNNNl", ".......ddIII777NNNNNNNNNNNNNNNNNNNNNNNNNNq", "......LddIII777NNNNNNNNNNNNNNNNNNNNNNNNNNl", ".......ddIII777NNNNNNNNNNNNNNNNNNNNNNNNNNl", ".......ddIII777NNNNNNNNNNNNNNNNNNNNNNNNNNl", ".......ddIII777NNNNNNNNNNNNNNNNNNNNNNNNNNl", ".......ddIII777NNNNNNNCNNNNNNNNNNNNNNNNNNl", ".......ddIII777NNNNNNNNNNNNNNNNNNNNNNNNNNl", ".........III777NNNNNNNNNNNNNNNNNNNNNNNNNNl", ".........III777NNNNNNNNNNNNNNNNNNNNNNNNNNl", "..4444444III777NNNNNNNNNNNNNNNNNNNNNNNNNNl", "..4444444III777NNNNNNNNNNNNNNNNNNNNNNNNNNl", "..4444444III777NNNNNNNNNNNNnNNNNNNNNNNNNNS", "..4444444III777NNNNNNNNNNNNNNNNNNNNNNNNNNS", "..4444444III777NNNNNNNNNNNNNNNNNNNNNNNNNNS", "..4444444III777NNNNNNNNNNNNNNNNNDNNNNNNNNS", "..4444444III777777777777IIIIIIIICCCSSSSSSS", "..444444444444444qTTTTTTTCCCCCCCCCCeee....", "..444444444444444qqqnnqqqqqqqqqqyy.yee...t", "..444444444444444................n.......t"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> grid = {"......................2.........................", ".................E..............................", "................................................", "................................................", ".......V......................................cc", "t.......................m........SSSSSSSS......F", ".........L.......................SSSSSSSS......F", "........qqqqqqq..................SSSSSSSS......F", ".....YZZqqqqqqqZ.................SSSS8SSS......F", ".....ZZZqqqqqqqZ.....333333333333333333KKKKKK..F", ".....qZZqqqqqqqZ.....333333333333363333KKKKKK...", ".....tZZqqqqqqqZmmmmm333333333333333333.........", "........qqqqqqqmmmmmmmmmmmmmmNmm............TTT.", "........qqqqqqqmmmmmmmmmmmmmssssssssssss........", "........qqqqqqqmmmmmmmmmmmmmssssssssssss........", "........qqqqqqqmmmmmmmmmmmmmssCsssssssss........", "........qqqqqqqmmmmmmmmmmmmmmmmm................"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> grid = {".................bbbbbbbbbbbbb......", ".................bbbbbbbbbbbbb......", ".................bbbbbbbbbbbbb....KK", "kkkkkkkkkkkkkkkkkbbbbbbbbbbbbb....KK", "kkkkkkkkkkkkkkkkkbbbbbbbbbbbbb....KK", "kkkkkkkkkmkkkkkkkbbbbbbbbbbbbb....KK", "kkkAkkkkkkkkkkkkkbbbbbbbbbbbbb....KK", "kkkkkkkkkkkkkkkkkbbbbbbbbbbbbb....KK", "kkkkkkkkkkkkkkkkkbbbbbbbbbbbbbOO..KK", "kkkkkkkkkkkkWWWWobbbbbbbbbbbbbOO..KK", "kkkkkkkkkkkkWWWWWbbbbbbbbbbbbbOO..KK", "kkkkkkkkkkkkWWWWrbbbbbbbbbbbbbOO..KK", "kkkkkkkkkkkkWWWWWbbbbbbbbbbbbbOO.PPP", "kkkkkkkkkkkkWWWWWbbbbbbbbbbbbbOO.PPP", "kkkkkkkkkkk666666bbbbbbbbbbbbbOO.PPP", "kkkkkkkkkkk666666bbbbbbbbbbbbbOO.PPP", "kkkkkkkkkkk666666bbbbbbbbbbbbbOO.PPP", "kkkkkkkkkkk666666bbbbbbbbbbbbbOO.PPP", "kkkkkkkkkkk666666bbbbbbbbbbbbbOO.PPP", "kkkkkkkkkkk666666bbbbbbbbbbbbbOO.PPP", "kkkkkkkkkkk666666bbbbbbbbbbbbbOO.PPP", "kkkkkkkk333666666bbbbbbbbbbbbbOO.PPP", "ooooooooooooooooobbbbbbbbbbbbbOO.PPP", "oooooVVVVVVVVVVVVbbbbbbbbbbbbbOOZPPP", "oooooVVVVVVVVVVVVbbbbbbbbbbbbbOOppPP", "ooooooooooooooooobbbbbbbbbbbbbOOppPP", "oooooooooooooooo2bbbbbbbbbbbbbOOppPP", "ooooooooooooooooobbbbbbbbbbbbbOOppPP", "ooooooomooooooooobbbbbbbbbbbbbOOppPP", "ooooooooooooooooobbbbbbbbbbbbbOOppPP", "ooooooooooooooooobbbbbbbbbbbbbOOppPP", "ooooooooooooooooobbbbbbbbbbbbbOOppPP", "ooooooooooooooooobbbbbbbbbbbbbppppKK", "ooooooooooooooooobbbbbbbbbbbbbppppKK", "ooooooooooooooooobbbbbbbbbbbbbppppKK", "ooooooooooooooooobbbbbbbbbbbbbppppKK", "ooooooooooooooooobbbbbbbbbbbbbppppKK", "ooooooooooooooooobbbbbbbbbbbbbppppKK", "ooooooooooooooooobbbbbbbbbbbbbppppKK", "ooooooooooooooooobbbbbbbbbbbbbppppKK", "ooooooooooooooooobbbbbbbbbbbbbppppKK", "ooooooooooooooooobbbbbbbbbbbbbppppKK", "ooooooooooooooooobbbbbbbbbbbbbZZZQKK", "...9999999999999qbbbbbbbbbbbbb....KK", "...9999999999999qbbbbbbbbbbbbb....KK", ".................bbbbbbbbbbbbb......"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> grid = {"...................................", "................vvvvvvvv...........", "................vvvvvvvv...........", "................vvvvvvvv...........", "................vvvvvvvv...........", "................vvvvvvvv......r....", "................vvvvvvvv...........", ".eeeeeeeeeeeeeeevvvvvvvveeee6aaaa..", ".eeeeeeeeeeeeeeevvvvvvvveeee6aaaa2.", ".eeeeeeeeeeeeeeevvvvvvvveeee6aaaa2.", ".eeeeee.eeeeeeeevvvvvvvveeeX6aaaa2.", ".eeeeeeeeeeeeeeevvvvvvvveeeX6aaaa2.", ".eeeeeeeeeeeeeeevvvvvvvveeeX6aaaa2.", ".eeeeeeeeeeeeeeevvvvvvvveeee644aa2.", ".eeeeeeeeereeeeevvvvvvvveeee644aa2.", ".eeeeeeeeeeeeeeevvvvvvvveeee644aa2.", ".eeeeeeeeeeeeeeevvvvvvvveeee644aa2.", ".eeeeeeeeeeeeeeevvvvvvvveeee644aa2.", ".eeeeeeeeeeeeeeevvvvvvvveeee644aa2.", ".eeeeeeeeeeeeeeevvvVvvvveeee644aa2.", ".NNNNNeeeeeeeeeevvvvvvvveeee644aa2.", ".NNNNNeeeeeeeeeevvvvvvvveeee644aa2.", ".NNNNNeeeeeZZZZZvvvvvvvvZZZZZZZZZ2.", ".NNNNNeeeeeZZZZZZZZZZZZZZZZZZZZZZ2.", ".NNNNNeeeeeeeeeeeeeeeeeeeYYY6Kjja2.", ".eeeeeeeeeeeeeeeeeeeeeeeeYYY6jjja2.", ".eeeeeeeeeeeeeeeeeeeeeeeeYYYRRRRR2.", ".eeeeeeeeeeeeeeeeeeeeeeeeYYYRRRRR2.", ".eeeeeeeeeeeeeeeeeeeeeeeeYYYRRRRR2.", ".eeeeeeeeeeeeeeeeeeeeeeeeYYYRRRRR..", ".eeeeeeeeeeeeeeeeeeeeeeeeYYYRRYRRVV", ".eeeeeeeeeeeeeeeeeeeeeeeeYYYRRRRRVV", ".eeeeeeeeeeeeeeeeeeeeeeeeYYYRRRRRVV", ".eeeeeeeeeeeeeeeeeeeeeeeeYYYRRRRR.M", "AAAAAAAAeeeeeeeeeeeeeeeeeYYYRRRRR..", "AAAAAAAAeeeeeeeeeeeeeeeeeeeeRRRRR..", ".eeeeeeeeeeeeeeeeeeeeeeeeeeeLLLLa.9", ".............aaaaaaa7fffffLLLLLLa..", ".............aaaaaaa7aaaLLLLLLLLa.."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> grid = {"........................llllllllllllQQQQQQ", "........................l6llllllllllQQQQQQ", "........................llllllllllllQQQQQm", "..R.............T.......3lllllllllllQQQQQm", ".....6..................llll5lllllllQQQQQQ", "........................llllllllllllQQQQQQ", "......................22llllllllllllQQQQLQ", "......................22llllllllllllQQGGQQ", "dddddddddddddddddddddd22llllllllllllQQQQQQ", "dddddddddddddddddddddd22llllllllllllQQQQQQ", "dddddddddddddddddddddd22llllllllllllQ.QQQQ", "dddddddddddddddRdddddd22llllllllllllQQQQQQ", "dddddbddkddddddddddddd22llllllllllllQQQQQQ", "dddddddddddddddddddddd22llllllllllllQQQQQQ", "dddddddddddddddddddddd22llllllllllllQQQQQQ", "ddddddddddsdddddSSSddd22llllllllllllQQQQQQ", "dddddjddddddddddSSSddd22llllllllllllQQQQQQ", "ddddddddddddddddSSSddd22llllllllFlllQQQQQQ", "dddddddddddddddddddddd22222hhhhhhhhhhhhhhQ", "........WWWWWWWW......22222hhhhhhhhhhhhhhQ", "......OOOOOOOOOOO.....22222hhhhhhhhhhhhhhQ", "......OOOOOOOOOOO.....2j222hhhhhhhhhhJJhhQ", "......OOOOOOOOOOO.....22222hhhhhhhhhhhhhhQ", "......................22222........QQQQQQQ", "......................22222........QQQQtQQ", "..A...................22222........QQQQQQQ", ".H.........aaaaaaaaaaa22222aaaaaaaaaaaQQQQ", "..yyyyyyyyyyyyyyyyyyyyyyyyyaaaaaaaaaaa...."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> grid = {"4.kkk.", "a.kkk.", "a.kkkT", "a.tckT", "Zykkk.", "aykkk.", "8888k.", "8888m.", "8888mB", "8888mB", "8888mv", "8888kv", "8888kv", "8888kv", "8888kv", "8888kv", "8888.v", "8888kb", "8888kv", "888zkE", "88.8gE", "8888gE", "8888NE", "rYzNNE", "rYANNE", "33zNNE", "33YJPj", "UUYJPj", "UUYJ2j", "UUpJ2j", "UUpJqj", "UUrJqj", "rrrJTj", "rrr6.u", "...6.u", ".ee67u"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> grid = {"........DDDDDDDDDDDDDDDDDDDDDDDDD.......", "........DDDDVVVVVVVVVVVVVDDDDDDDD.......", "........DDQDVVVVVVVVVVVVVDDDDDDDD.HHHHH.", "........DDDDVVVVVKVVVVVVVDDDDDDDD.HHHHH.", "........DDDDVVVVVVVVVVVVVDDDDDDDWWWWWHH.", "........DDDDVVVVVVVVVVVVVDDDDDvvWWWWWHH.", "........DDDDVVVVVVVVVVVVVAADDDvvWWWWWHH.", "...ddddddddddddddddddDooDAADDDvlWWWWWHH.", "...ddddddddddddddddddDooDAADDDvvWWWMWHHt", "...ddddddddddddddddddDooDAADDDvvWWWWWHHt", "...ddddddddddddddddddDooDAADDDvvWWWWWHHt", "...ddddddddddddddddddDooDAADDDvvWWWWW4tt", "...dddddddddddddddddd0oo0AADDDvvWWWWW4tt", "...SSSSS00000000000000oo0AADDDvvWWWWW4tt", "...SSSSS00000000000000oo0AADDDvvWWWWW4tt", "...SSSSS00000000000000oo0AA4TTvvWWWWW4tt", "...SSSSS00000000000000oo0AA4TTGGWWWWWGtt", "...SSSSSSSSSSSSIIIIIIIoo4AA4TTGGWWWWWGtt", "...SSSSSRSSSSxxxxxSxIIoo4AA4TTGGWWWWWGtt", "...SSSSSSSSSSxxxxx9xIIoo4444TTGGGGGGGGtt", "...SSSSSSSSSSSSIIIIIIIoo4444TTGGGGGG8888", "...SaaaaaaaaaaaaaaaIIIoo4444TTGGGGGG88X8", "...SaaaaaaaaaaaaaaaIIIoo4444Tkkkkv4488X8", "...SaaaaaaaaaaaaaaaIIIoo4444Tkkkkv422228", "...SmmmmmmaaaaaaaaaIIIoo4444Tkkkk4422228", "...SmmmmmmaaaaaaaaalIIoo4444Tkkkk4422228", "...SmmmmmmaaaaaaaaaIIIoo4444Tkkkk4422228", "...SmmmmmmaaaaaaUUUUUUooUUUUUEEEEE422e28", "...SmmmmmmaaaaaaUUUUUUooUUUUUEEEEE422e28", ".NNNNNNNNNNNNNNNNNNNNNooNNNNNNNEEE422e28", ".NcNrNNNNNNNNNNNNNNNNNooNNlllNNEEEc22228", ".NNNNNNNNNNNNNNNNNNNNNooNNlllNNEEEc22228", ".NNNNNNNNNNNNNNNNwNNNNooNNlllNNEEEc22228", ".NNNNNNNNNNNNNNNNNNNNNooNNNNNNNEEE.2222t", ".NNNNNNNNNNNWNNNNNNNNNNNNNNNN0N....2222.", ".NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNMMMM2222.", "....mmmmmm.........L...qqqqqq......2222.", "....mmmmmm.........L...qqqqqq..........."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> grid = {"...............", "....88.........", "....88.........", "....88dddd.....", "....iiiiiiiiii.", "....iiiiiiiiii.", "....iiiiiiiiiis", "....iiiiiiiiiis", "....44444444iis", "....44444444iis", "...944444444iiD", "...944444444iiD", "LLLL44444444iiD", "LLkk44444XXXiin", "LLkk44444XXXiiH", "LLkk44444XXXiiH", "LLkk444ttXXXiiH", "LLLL444ttXXXiiH", "LLLL444ttXXXQQG", "LLLy40000XXXQQG", "LLLy444ttttQQQG", "LLLy444ttttQQQG", "LLLyiiittttQQQH", "LLLSSSSttttQQQH", "LLLSSSSttttQQQD", ".ccSSSSttttQQQD", ".ccSSSSttttQQQD", ".ccSSSSttttQQQD", ".ccSSSSttttQQQD", ".ccSSSSttttQQQD", ".ccSSSStttttiiD", ".ccSSSItttttiiD", ".ccSSSItttttiiD", ".ccSSSItttttiis", ".ccZiiitttttii.", ".ccZiiittttt11T", ".ccZiiittttt11T", ".ccZiiittttt11T", ".ccZiiittttt11T", ".ccZiiittttt11T", ".RRRiiittttt11.", ".RRRiiittttt11.", "5RRRiiittttt11.", "5RRRiiitttttii.", ".ccciiitttttii.", "WWWWWWWWWWJJc..", "xccccJJJJJJJ66."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "589LTc6JRWZdi14SIksDHGnt0QXxy";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> grid = {"...................................mmmmmmmm....", "...................................mmmmmmmm...z", "...CCCCCwwwwwwwwwwwwwwwwCCCCCCCCCCCmmmmmmmm...z", "...CCCCCwwwwwwwwwwwwwwwwCCCCCCCCCCCmmmmmmmm...z", "...CCCCCwww9999999999999999999999999999999mOOOz", "...NNNNNwww9999999999999999999999999999999mOOOz", "...NNNNNZww9999999999999999999999999999999mfOOz", "...NNNNNwww9999999999999999999999999999999mOOOz", "...CCBBBwww999999999K999999999999999999999mOOOz", "...CCBBBwww999999999999999pppppppppp999999mOOOf", "...CCBBBwww999999999999999pppppppppp999999mOOO.", "...CCBBBwww999999999999999pppppppppp999999mOOO.", "...CCBBBwww999999999999999pppppppppp999999mOOO.", "...CCBBBwww999999999999999pppppppppp999999mOOO.", "...CCBBBwww9999999v9999999pppppppppp999999mOOO.", "...CXXXXwwwwwwwwwwwwwwwwPXppppppppppmmmmmmmOOO.", "LLLCXXXXwwwwwwwwwwwwwwwwXXXXXXXxxxxmmmmmmmmOOO.", "LL00000000kkkkkkkkk00000000XXXXxxxxmmmmmmmmOOO.", "..00000000kkkkkkkkk00000000XXXXxxxxmmmmmmmmXXX.", "..00000000kkkkkkkkk00000000XXXXXXXXmmmmmmmmXXX.", "...CXXXXwjjjjjjjjjjjjjwwXXXXXXXXXXXmsmmmmmmXXX.", "....XXXXwjjjjjjjjjjjjjwwXXXXXXXXXXXmmmbmmmmXXX.", "....XXXXwjjjjjjjjjjjjjwwXXXXXXXXXXXmmmbmmmmXXX.", "....XXXXwjjjjjjjjjjjjjww666XXXXXXXXyy444444444.", ".....BBBwjjjjjjjjj1jjjww666..YYYYYYyy444444444.", ".....BBBwjjjjjddddddddddddddddddddddd444444Y44.", ".....ZBBwjjjjjddddddddddddddddddddddd444444444s", ".cc..ZBBwjjjjjddddddddddddddddddddddd444444444s", ".cc..ZBBwjjjjjdddddddddddiddddBddddddiiiiuuu...", ".cc..Z..wjjjj.dddddddddddddddddddddddiiiiuuu...", ".cchhZhhwjjjjjddddddddddddddddddddddduuuuuuu...", ".cchhhhhwjjjjjddddddddddddddddddddddduuuuuuu...", ".cc.....wjjjjjddddddddddddddddddddddduuuuuuu...", ".ggggggggjjjjjddddddddddddddddddddddduuuuuuu...", ".ggggggggjjjjjjjjjjjjjgg.33333333YYYYYYYYY....t", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFdFFFFrrr55......."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> grid = {"...FFFFFFFFFFffxxxxFFFFFGG..", "..kFcccccccccfQxxxxQQQQQGGQQ", "...F888888666fQxxxxQQQQQGGQQ", "...F888888666fQxxxxQQQQQGGQQ", "...F88888866mffxxxxtFqqqG002", ".rrrrRrrrr66mffxxxxrrqqqG00q", "....888bbbbbbbbxxxxb9999999C", "....88Mbbbbbbbbxxxxb9999999q", "....88MMMMzzzzzzzzzz9999999q", "....88MMMMMMMkkAAAAA9999999q", "....OOOOOOOOOOOOOOOOOOOOOOOO", "...wwwwwwwwwwwjwwwwwwwwwwwww", "...wwddddddddddddddddddwwwww"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> grid = {"..ssssssssssssssssssssssssss.", "..ssssssssssvssssssssUssssss.", "..ssssssssssssssssssssssssss.", "..ssssssssssssssssssssssssss.", "..ssssssssssssssssssssssssss.", "..sdddddddddddddddddddddddOO.", "...dddddddddddddddddddddddOO.", "...dddddddddddddddddddddddOO.", "...dddddddddddddddddddddddOO.", "...ddddddddddddddddddddddduuu", "...ddddddddddddddddddddddduuu", "...ddddddddddddddddddddddduuu", "...ddddddddddddddddddddddduuu", "qqqddddddddddddddkdddddddduuu", "qqqdddddddd.ddddddddddddddCuu", "qqqdddddddddddddrddddddddduuu", "qqqddddddddddddddddddddddduuu", "qqqdddKddddddddddddddddddduuu", "333ddddddddddddddddddddddduuu", "333ddddddddddddddddd5ddddduuu", "33333333AAAAAAAkkkkkkkk55uuuu", "qqEAAAAAAAAAAAAkkkkkkkk55uuuu", ".IIcccccccccccckkkkkkkkccuhhu", ".IIcccccccccccckkkkkkkkccuhhu", ".IIIIHHwwJwwwwNkkkkkkkk555hh5", ".......wwwwwwwNkkkkkkkk55Ghh5", "............jjNNNSSSSSNNNGhhl", "QQQQQQ.QQQQ...NNNNNNNNNNNGhhl", "QQQQQQQQQQQ9999FFFFFFFWWWZhhl", ".K...........883FFFFFF8888888"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> grid = {"........wwww.....", "........wwww..JJ.", "OOOOK...wggg..JJ.", "OOOOK...wggg..JJ.", "OOOd....wggg..JJM", "OOOO....wggg..JJM", "OOOOFFFF3FFXXXXXM", "OOOOFFFNNNNXXXXXM", "OOOOFFFNNNNXXXXXM", "OOOOFFFNccccXXXXM", "OOOOFFFNccccXXXXM", "OOO6FFFNccccXXXXq", "OOOOFFFNccccXXXXq", "OOOO332LccccXXXXD", "OOOO332NccccXXXXu", "3333332NccccZXXXu", "3333332NccccXXXXA", "3333333NccccXXXXA", "3333333NccccXXXXA", "33333.3NccccXXXXA", "3333333NcccGXXXXA", "33v3333NccccXXvvA", "ooooooooccccoovvA", "oooooooJccccoovvA", "ooooooooccccooTQA", "ooooooooccccoo5SA", "..tt..Pxl4ccG55SA", ".......xccHc555aA", ".......xcccc111aA", "..........Y....Ck", ".kkkkkkk......HHH"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> grid = {"...........D", ".......2....", "..TJ..R.....", "..FS........", "..SS.......x", "..SS....LmLx", ".yyyyyyyyLLx", ".yyyyyybyZL.", "gyyyyyyyyLT.", "RyYykyyyyLL.", "JyyyVyyyyLL.", ".yyyyyy3yLL.", ".yyyyy444444", ".yyyty4f4444", ".yyyyy444444", ".KQQQQQQ4414", ".QQM2zQQ4M04", "CQQQQQQ14444", "CQQQQQQQ4444", "CQQQQQQQ4444", "Cyyyyy44444T", "Cyyyyy444644", "Cyyyyy444444", "Cyyyyy444444", "Cyyyyy444444", "Cyyyyy444444", "Cayyyy444444", "Cyeyyy444444", "Cyyyey4444Q4", "Cyyyyy444444", "Cyyyyy441444", "Cyyyyy4444b4", "Cyyyyy444444", "Cyyyyyyyya66", "Cyyyyyyyy666", "CNnnnnnCTTEE"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> grid = {"..............................P...............", "................................qqqqqqqqqqq...", "................................qqqqqqqqqqq...", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ..", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ..", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ..", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQFQQQQQQQQQQ..", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ..", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ..", "QlQQQQQQQQQQQQTQQIQQQQQQQQQQQQQhQQQQQQQQQQQQVV", "pQdQQQQQQQQQQZQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQVV", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQVV", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQccccV", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQccccV", "QQQQQQRQQQQQQQlQQQQQQQQQQrrrrrrrrrrrQQQQ4ccccV", "QQQQQaQQQQQQQQQQQQQQQQQQQrrrrrrrrrrrQQQQQccccV", "QQQQfQQQQQQQQQQQQQQQQQQQQrrrJrrrrrrrQQQQQcccc5", "QQQQQQQQQQQQQQQQQQQQQQQQQrrrrrrrrrrrQQQQQcccc5", "IIImmmmmmmmmmmmmmmmmmmmmmrrrrrrrrrrrVVVVVcccc5", "IIImmmmmmmmmmmmmmwmmnmmmmrrrrrrPrrrrVVVVVcccc5", "IIImmmmmmmmmmmmmmmmmmmmmmrrrbrrrrrrrVVVVVcccc5", "IIImFFFFFFFFFmmmmmmmmmmmmmmmmmmVVVVVVVVVVccccV", "IIImFFFFFFFFFmmmmmmmmmmmmmmmmmmVVVVVVVVVVccccV", "IIImFFFFFFFFpmmmmmmmmmmmmmmmmmmVVVVVVVVVVdcccV", "IIImFFFFFFFFFmmmmmmmmmmmmmmmmmmVVVVVVVVVVccccV", "IIImFFFFFFFFFRRRRRRRRRRRRRRRRllllllRRRVVVccccV", "IIImFFFFFFkFFRRRRRRRRRRRRRRRRllllllRRRVVVccccV", "IIImFFFFFFFFFRRRRRRRRRRRRRRRRllllllRRRVVVVVVVV", "IIImFFFFFFFFFRRRRRRRRRRRRR6666666llRRRVVVVVVVV", "IIImFFFFFFFFFRRRRRRRRRRRRR66q6666llRRRVVVOVVVV", "IIIIFFFFFFFFFRRRRRRRRRRRRR6666666llRRRVVVVVVVV", "IIIIFFFFFFFFFRRRRRRRRRRRRR6666666llRRRVVVVVVVV", "....TJTTTRRRRRRRRRRRRRRRRR6666666RRRRRsssss...", "....TTTTTRRRRRRRRRRRRRRRRR6666666RRRRRsssss...", "........DDDDDDDDDDDDDDDDDh6666666hhhhhhhh.....", "..........N..............hhhhhSSSSSSSSSSS....."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> grid = {".....................55.", "..A..................55.", ".QA..................55.", "..A..................55.", "..A..................55.", "..A.........SSSS.....55.", "..A.........SSSS.....55.", ".9A999999...SSSS.....55.", "yyAyy9999...SSSS.....55.", "yyAyy99991..SSSS7....55.", "yyAyy9999...SSSS.....55.", "2yAyyU999...SSSS.N...55.", "yyAyy.......SSSS.....55.", "yyAyy.......SSSS.....55.", "yyAyy.......SSSS.....55.", "yyAyy.......SSSS.....55.", "yyAyy.......SSSS.....55.", "yyAyy.......SSSS.....55V", "yyyyy.......SSSS.....55V", "yyyyy.......SSSS.9...55V", "yyyyy....F..SSSS.....55V", "yyyyy.......SSSS.I.....V", "............SSSS.......V", "............SSSS.......V", "............SSSS.......V", "............SSSS.......V", "............SSSS.......V", "............SSSS.......V", "............SSSS....Y..V", "............SSSST...Y..V", "............SSSS....Y..V", "............SSSS....Y..V", "............SSSS....Y..V", ".66666666t666666...LY...", ".666666666666666mmmLY...", ".666666666666zM6mmmLY...", ".666666666666666mmmL....", ".666666666666666mmmLpppp", ".666666666666666mmmLpppp", ".666666666666666mmmLpppp", "x666666666666666mmmLpppp", ".666666666666666mmmppppp", ".666666L66666666mmmppppp", ".666666666666666mmm.....", "...TTTttttttttttttt.....", "......ttttttttttttt....."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> grid = {".............hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh.", ".............hhhhhhhiiiiiiJiiiiii8iiiiiiiihhhh.", "J.........uuuuuuuquuviiiiiTiiiiiiiiiyiiiwihhhh.", "..........uuuuuuuuuuiiiiiiiiiiiiiiiiiiiiwihhhh.", "..........uuuuuuuuuuiiiiiiiiiiiiiiiniiiiwihhhh.", "..........uuuuuuuuuuiiiiimiiiiiiiiiiiiiiwihhhh.", "..........uuuuuuuuuuiggggggggggggggggiiiwihhhh.", "..........uuuuuuuuuuiggggggggggggggggiiiwihhhh.", "b.........uuuuuuwuuppggggggggggggggggpppwppeee.", ".AAAAAAAAAAAAAAAAAAAnggggggggggggggggAAAwppOee.", ".AAAAAAAAAAAAAAAAAAAAngggggggggggggggAAAwppeeeS", ".AAAAAAAAAAAAAAAAzAAAggggggggggggggggAAAwppeeeS", ".AAAAAAAAAAAAAAAAAAAAggggggggggggggggAAAwiheeeS", ".AAAAAAAAAAAAAAAAAAAAggggggggggggggggAAAwiheee.", ".AAAAAAAAAAAAAAAAAAAAggggggggggggggggAAAwiheee.", ".AAAAAAAAAAAAAAAAAJAAggggggggggggggggAAAwiheee.", ".AAAAAAAAAAAAAAAAAAAAggggggggggggggggAAAwiLeee.", ".AAAAAAAAAAAAAAAAAAAAggggggggggqgggggAAAwiLeee.", ".AAA6AAAAAAAAAAAAAAAAggggggggggggggggAAAwiLeek.", ".AAAAAAAAAAAAAAAAAbAAAAAAAAfAAAAAAAAAAAAwiLeee.", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAwiLeee.", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAwiLeee.", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAwiaeee.", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAwaaeee.", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAwaa3ee.", ".AALAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAVAAAwaaeeeD", ".AAAA4AAAAAAAAAAAAAAAAAAAAAA7AAAAAAAAAAAwaaeeeD", ".....4.cc....hPPPPPPPPDPPPPPPPrrrrrrlaaawaaeeeD", ".....4.cc...qqqqqqqPPPPPPPPPPPrrrrrrraHHwHHeeeD", ".....4.cc...qqqqqqqPPPPPPPPPPPrrrrrrraHHwHHeeeD", ".....4.cc...qqqqqqqPPPPPPPPPPPrrrrrrraHHoHHeeeD", ".....4.cc...qqqqqqqhhhhhhhhhhhrrrrrrraHHwHHeeeD", ".....4Pcc...qqqqqqqhhhhhhhhhhhrrrrrrraHHwHHeeeD", ".....4.cc...qqqqqqqhhhhhhhhhhhrrrrrrraHHwHHeeeD", ".....4.cc...qqqqqqqhhhhhhhhhhhrrrrrmraaaaaaeeeD", ".....4.cc...qqqqqqqhhhhhhhhhhhhhhhhLLaaaaaaeeeD", ".....4.cc...qqqqqqqhhhhhhhhhhhhhhhhLLaaaaaaeee.", ".....4.cc...qqqqqqqhhhhhhhhhhhhhhhhhhaaaaaaeee.", ".....4.cc...qqqqqqqhhhhhhhhhhhhhhhhhhaaaaaaeee.", ".....4.cc...qqqqqqqhhhhhhhhhhhhhhhhhhaaaaaaeee.", ".......cc...qqqqqqqhhhhhhhhhhhhhhhhhhaaaaaahhh.", ".......cc...qqqqqqqhhhhhhhhhhhhhhhhhhhhhhhhhhh.", ".......cUU..qqqqqqqhhhhhhhhhhhhhhhhhhhhhhhh5hh.", ".......cUU..qqqqqqq......................222...", "..e....cUU...............................222..."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> grid = {"...c......I.................L...............", "..p5............x...........................", "...................V..............b.........", "......y...c.......M.........................", "......y...............................p...N.", "......y999999999999999999999.......s........", "s.....y99999M999999C99999999................", ".....c.99999999999999999999S................", ".......999999999S9p9999D9999....T...........", ".Q.....999999999999999999999................", ".......999999999999999999399................", ".......999999999F99999999999......4........h", "B....................D......................", "..Y............R..................H......0..", ".......D..........MMMMMMMMMMM.............G.", "..................MMMMMMMCMMM......h........"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> grid = {"jyk.", "vfib", "mqii", "8qpi", "qqil", "qqii", "qqii", "qqii", "Dqii", "qqii", "EqwX", "qqwi", "qPwi", "Kow6", "qUw1", "qKoq", "qUqq", "qzzz", "GGY9"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> grid = {"..bbbbmmmmmmmrrrrmyyy", "..bbqqmmmmmmccrrrmyyy", "..bbqqmTmDDDccrrrmyyy", "..mbqooooDDDccrrroyyy", "..GbqooooDDDccrrllyyy", "..GAA00C0oooccrrllyyy", "..GAA0000zzaccrrllyyy", "...oAAYTYzzPccPPPPPPl", "...AAAYTYC0CPPPPPPPPl", "...AAAzTzCCCaaaelllll", ".....NNTNCCC55WWWWkkk", ".....NNTNNuaaaaeeekkk"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> grid = {".....", ".....", "gggg.", "glgg.", "ggg6.", "gggg.", "gggg.", "gggg.", ".xx..", ".xx..", ".xxXX", "uuuXX", "uuuXX", "uuaaa", "uuaaa", "uuaaa", "uuaaa", "uEaaa", "uuaaa", "ZZaaa", "ZSSSS", "ZSSSS", "ZSSSS", "ZSSSS", "ZSSSS", "ZSVSS", "ZSSSS", "ZSSSS", "ZSSSS", "ZSSSS", ".SSSS", "lSSSS", "lSSSS", "lSSSS", "lSSSS", "lSShS", "lSSSS", "lSSSS", "lSSSS", "lSSSS", "lSSSS", "lSSSS", "lSSSS", "lSSSS", "lSSSS", "lSSSS", "lSSSS", ".SSSS", ".SSSS"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> grid = {"..............................", "..................oooUUUUU....", ".....SSSSSSS.....noooUUUUU....", ".....SSSSSSS..KKKnoooUbbbbba.v", ".....SSSSSSHHHHHHHoooHbbXXXa..", ".....SSSSSSHHHHHHHoooHbbXXXa..", "...LLLLLLLSHHHHHHHoooHbbXXXa.5", "...LLLLLLLSHHHHHHHoooHbbbbba.5", "...LLLLLLLSHHHHHHHooolbbbbbgg5", "...LLLLLLLSHHHHHHHoooHbbbbbgg5", "...LLLzLLLSHHHxHHHoooHbbbbbgg5", "...LLLLLLLSHHHHHHHoooHbbbbbgg5", "...LLLLLLLSHHHHHHHoooHbbbbbgg5", "...LLLLLLLSHHHHHHHoooHbbbbbgg5", "...LLLLLLLQHHHHHHHoooHbbbbbgg5", "...LLLLLLLQHHHHHHHoooHbbbbbgg5", "...LLLLLLLQHHHHHHHHHHHbbbbbgg5", "...LLLLLLLQHHHHHHHHHHHbbbbbgg5", "...LLLLLLLQHHHHHHHHHHHb1111115", "cccLLLLLLLQHzzzzzzzzzzz1111115", "cccLLLLLLL3Hzzzzzzzzzzz1111115", "cccLLLLLLL3Hzzzzzzzzzzz1111115", "cccLLLLLLL3Hzzzzzzzzzzz1111115", "...LLLLLLL3Hzzzzzzzzzzz1111115", "..NLLLPPPPPPPPPPPPPPPPP1111115", "...LLBBBBBBBBBBBBBBBPPPPPPPPP5", "lllLLBBBBBBBBBBBBBBBPPPPPPPPP5", "...LLLPPPPPPPPPPPPPPPPPPPPPPP5", "...LLLPPPPPPPPPPPPPPPPPPPPPPP5", "...EddddddQQQQQAQQQQQQQQQ....5", "...EdddddddddddAddddd.4...TTT."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> grid = {"z..", "...", "..p", "...", "..d", "..y", "..y", "X.4", "X.y", "XCC", "XTC", "XCC", "XCC", "XCC", "XCC", "SCC", "dCC", "XCC", "XqC", "XCC", "XCC", "XCC", "XCC", "XCC", "XCC", "XCC", "XCC", "XLC", "XCC", "XCC", "X.x", "..3", "o.3", "o.3", "o.3", "o.3", "b..", "..."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> grid = {"............................", "..........g.................", "...................D........", ".....K........F....3........", ".I..........................", ".n..V.................a.....", "...Mn......................4", "............F...............", "...............ccccccxxxx...", "..F............ccccccxxxx...", ".I.H......3.........xxxxx...", "......D...AAAAAAAAAAxxxxA...", "..........AAAAAAAAAAxxxxx...", "..........AAAAAAAAAAxxxrx...", "..........AAAAAAAAAAxxxxx...", "............................", "..........Ekkkkkkkk.........", ".......f...Bkkkkkkk.........", "...........kkkkwkkk.....c..U"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> grid = {"......WWWWWWWW0WWWWWWWWWDDDDDDDDDDDgggD...2.O2..", "......WWWCCCCgCCCCCCCCCCJJJJJJ.....gBg..vvvvvvvv", "......WWWC4CCLLLLLLLLLLLLLjLLLLLLLLLL44444Ummvnv", "..PPPPPPVrrrrLLLLLLLLLULLLLLLLLLLLLLL44444wwwwnv", "..PPPPPPHVVVVLLLLLLLLLLGLLLLLLLLLLLgL44444wwwwnF", "..PPPPPPVVVViLLLLLLLLLLLLTLLLLLLLLLLL44444wwwZZ7", "..PPPPPPqqzvqqqppppppppyyyyyyyyyyyyyy44444RRop77"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> grid = {"...OOOOO.", "...OOOOO4", ".CCCCXCC4", ".CCCCxCV4", ".tCCCxCC4", "0zzzzzzC4", ".zzzzzzC4", ".zzzUzgCn", "jzzzzkzC4", "fzzzzzzC4", ".zzzmzww4", ".zzCzezD4", ".zzzzzzD4", "QzzzzzzD4", "QzzzzzzD4", "bbzzzzZD4", "bbzzzzzDH", "bb7zzzzDJ", "bbzzzzzDL", "bbzzzzzDH", "bbzzzzJuu", "pbzzzTzuu", "bbzzzJiMu", "bbzzzzzMu", "QzzzzzbMz", ".z4zzzzDo", ".zzzzzzHo", "CzzzzzzHN", ".XyWabHHN", ".yyyaB6zN", ".yyyFBRRN", ".taaasRRR"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> grid = {"..FFvvvvvvOvvvUfff..", "..Fnvvvvvvd6vvQuggzg", "IIIIvvvaXqvavvT111gg", "IIKCCCCvXvvvvvxgDggP", "VoyC6Cwww9999999zdwG", "VVVeCCRbw999999Onwww", "GGGCCCwwk99N99Y99www", "uvG8fEEEv99999999aaa"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> grid = {"..........................", "..........................", ".....aa....S..............", ".....aa....Sw.............", "..pUUUUUUUUSUUUUUU4444444.", ".ZZUUUUUUUUSUUUUUU4AAAAA4.", ".ZZUUUUdUUUSUUUUUU4AAABBBB", ".ZZUUUUUUUUSUUUUUU4AAABBBB", ".ZZUUUUUUUUSHHHHHHHHHHBBBB", ".ZZUUUUUUUUSHHHHHHHHHHBBBB", ".ZZUUUUUUUUSHHHHHHHHHHBBBB", ".ZZUUUUUUUUSHHHHHHHHHHBBBB", ".ZZZZaa....S7777HHHHHHBBBB", ".ZZ5Zaa....S7777HHHHgHBBBB", ".ZZZZaa....S7777HHHHHHBBBB", ".ZZZZaa.bbbS7777HHHHHHBBBB", ".ZZZZaa.bbbS7777644AAABBBB", ".ZZZZaa.bbbS7777644AAABBBB", ".ZZZZaLLLLLLLLLLKK4AAABBBB", ".ZZZZaLLLLLLLLLL044AAABBBB", ".ZZZZaLLLLLLLLLL644AAABBBB", ".ZZZZaLLLYYYYYYYYYYYYYIII6", ".ZZZZaLLLYYYYYYYYYYYYYIII6", ".ZZZZaLLLYYYYYYYYYYYYYIII6", ".ZZZZaLLLYYYYYYYYYYYYYIII6", ".ZZZZaa.bbbS..66644AIIIII6", ".ZZZZaanbbbSnn66644AIIIII6", ".lllllllbhblllll644AAAAA46", ".lllllllbzzzzzzzzzzzzzzzFF", ".lllllllbzzzzzzzzzzzzzzzFF", ".lllllllbbbllllln44AAAAAFF", ".lllllllbbbllllln44AAAAAFF", ".llllallbbbllllln44AAAAAFF", ".llllBllbbblllll000AAAAAFF", ".lllllllbbblllll000AAAAAFF", "...0000000000000000AAAAAFF", "RRRRRRRRRRRRRRRRRRRAAACAWW"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> grid = {"..DDDDDDD......................", "..DDDDGDD.......0..............", "..DDDDDDD......................", "666DDDDDD......................", "666DDDDDD......................", "666DDDDDD......................", "6z6DDDDDD..........d...uuuuluuu", "666DDDDDDAAAAAAAAAAAAAKBAAAAAuu", "..DDDDDDDlAAAAAAAAAAAAAAAAAAAuu", "..DDDDDDDAAAAAAAAAAAAAAAAAAAAuu", "88pDDDDDDAAAAAAAAAAAAAAAAAAAAuu", "88DDDDDDDAAAAAAAAAAAAAAAAAsAAuu", "88DDDDDDDAAAAAAAAlAAAAAAAAAAAuu", "88DDDDDDDAAAAAAAAAAAAAAAAAAAAuu", "88DDDD1DDAkAAAzAAAAAAAAAAAAAAuu", "88DDDDDDDAAAAAAAAAAAAAAAAAAAAiu", "88DDDDDDDAAAAAAAAAAAAAIAAAAApCu", "88DDDDDDDAAAAAAAAAAAAAAAAAAAACu", "88DDDDDDDAAAAAAAAAAAAAAAAAAAACu", "88DDDDDDDSSBBBBBBBBBBBBeCCCCCCu", "8PDDDTDsssssssssssssDssssssssss", "88DDDDDssssssssssssssssssssssss", "88DDDDDssssssssssssssssssssssss", "88DDDDDssssssssssssssssssssssss", "888q222sssssssssssssssfsssssssu", "888q888ssss5sssssssssssssssssss", "888q888sssssscsssslssssssssssss", "....zSSsssqs5ssssssssvssss61sss", "....zSSssssssssssssssssssssssss", "..jjjajjjjjjjjjjjjjjjjjjj.MM..5", ".....SSSSSSQQQQQQQQQQQQQQQQQQQ5"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> grid = {"..y.", "M.yt", ".ayt", "YYyt", "YYyt", "YYyt", "YYjt", "YYut", "WWWt", "WWWt", "YXpt", "YXyt", "YXdt", "YXdt", "YXut", "YXut", "YXut", "YXut", "YX3t", "6Xut", "YkZt", "Ykkt", "Ukkt", "UXqt", "39ut", "5Xut", "hXut", "UXut", "Usut", "Ysut", "Usut", "UFut", "UFut", "UFut", "UFut", "8Fut", "8Fut", "8odT", "8FdT", "8Fdt", "8Fdt", "gppt", "gppt", "gpph", "gppt", "rppt", "Ppp8", "Mpp8", "8RR8", "8RR8"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> grid = {"49F2l22NNrrpNNN8NNLq6v8zeeeeeeeO"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> grid = {"............hhhhhhhh8888888s888888888888888..", "........YYYYYYYWWWWWWWWWWWWWWWWWWWWWWW88888A.", "........YYYYYYYWWWWWWWWWWWWpppppppppWW88888A.", "...........BBBBBBBBBBBBBBWWpppppppppWW8V888A.", "...........BBBBBBBBBBBBBB..pppppp3ppe......A.", ".nKKKKKKKKKBBBBBBBBBBBBBB..pppppppppe......A.", "..KKKKKKKKKBBBBBBBBBBBBBB..pppppppppe......A.", "xxKKKKKKlllBcBBBBBBBBBBBB.......77eee......A.", "xxKKKKKKlllBBBBBBBBBBBBBB.......77eee......A.", "xxKKKKKKlllBBBBBBBBBBBBBBvvvvvv111111111XXXX.", "xxKKKKKwwwwBBBBBBBBBBBBBBvvvvvv111111111XXXXn", "xxKKKKKKKKKBBBBBBBBBBBBBBvvvvvv111111111XXXXn", "xxKKK1KKKKKBBBBBBBBBBBBBBvvvvvv111111111XXXXn", "xxKKKKKKKKKBBBBBBBBBBBBBBvvvvvv111111111nnnnn", "xxKKKKKKKKKBBBBBBBBBBBBBBvvvvvv111111114nnnnn", "xxKKKKKKKKKBBBBBBBBBBBBBBvvvvvv111ttttttttnnn", "xxKKGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGn", "xxKKGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGn", "xxKKGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGg", "xxxxGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGg", "xTTTGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGg", "xxxxGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG.", "xxxxGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG.", "xxxxGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> grid = {".fQR", ".DRR", "5DDR", "5VRR", "RFRR", "wVRR", "weRZ", "bVRR", "w8RG", "w8RR", "9tfR", "ttIR", "tlRR", "JJTR", "JJjR", "XERR", "ttRR", "otR9", "odRR", "odRR", "oXRR", "oZvR", "odtR", "dd2l", "ttUk", "tt6l", "tt2l", "ot2l", "xx2E", "Wt2E", "f62E", "QaaP"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> grid = {"h....RwmsmmmmmmmKKWGdGpLB.", ".....mmmmmmmMmmmKKxGG55555", "H.....rl.EKKGKKKK1c9c55555", ".z.1..........9..Nd..55555", "vs.V...zslllwlnNy..SSL0SSS"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> grid = {".................K...............", "..VJbJJJJJJJJJJJJJJJJJJJJJJJJJ.7.", "..JJJJJJJJJJJJJJJJJJJJJ9JJJJJJbb.", "..JJJJJJJJJJJJJJJJJgpJJJJJJJJJbb.", "ssJJJJJJJJJJJJJJJJJJJJJJJJJJJJIb.", "0sJJJJJJJJJJJJJJJJJJJJJJJJJJJJIb.", "ssJJJJJJJJJmJJJJJJJJJJJJJJJJJJIb.", "ssJJJJJJJJJJJJJJUJJJJJJJJJJJJJIb.", "ssJJJJJJJJJJJJJJJJJJyJJJJJJJJJIb.", "ssJJJJJJJJJJJJJJJJJJJJJJJJJJJJIt.", "ssJbJJJJJJJJJJJJJJJJJJJJJJJJJJIb.", "ssJJJJJJJJJJJJ7JJJJJJGJJJJJJJJIQ.", "ssUJFJJJJJJJJJJJJJJJJJJJJJJJJJIb.", "slJJJJJJJJJJJJJLJAJJJJJJJbJJJJIb.", "slJJJJJJJJJJJJJJJJJJJJJJJJJJJJIb.", "slHJJJJJJJJJJJJJJJJJJJJJJJJJJJI2v", "slJJJJJJJJJcJJJJJJJJJJJJJJJqJJR2y", "slJJJJJJJJJJJJJJJJDJJ0JJJJuJJJR2v", "slJJJJJJJJJJJJJJJJJJJJJJJJJJJJR2v", "slJJJJJJJJJJJJJJJYJJJJJJJhJJJJR2v", "ssJJJJJJJJJJJJJJJJJJJJJJJJJJJJR2.", "..JJJJJJJJJJJJJJJJJJJJJJJJJJJJR2.", "XXX77777ZZZZZZZZZZZWWIIIIRRRRRR2.", "XXX7777776HH3333WWWKWIRIIRRRRRR2.", "XXX777777TTT3333WWOOOOOOORRRRRRP.", "TTT777777TTT3333WWWWWIIIIRRRRR7..", "TTT777777TTT3333IIIIIIIIIRRRNRR..", "TTT777777yyyyyyyyyyyyKdddRRRRRRc.", "......KKKK111CCCCCCCCCCsCRRRRRR.."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> grid = {".......9.......5555555555................J....ott", ".K.........W.zzzzz0555555..........mmmmww...rrrEr", "...vUUUUUUUUVzzzzz0555555qCCCCCCCCImmm7CCCNCCCCCm", "..f.UUuuuuuyuuuuuuuVuuuuu1WCCCCCC0CmmmmCCCCCCCCCC", "...XUUuuuuuuAuWubuuuuuuEEFFFFFFFFEEmmmmEEE22EEERE", "....UUuuKuuuuuuuuTuuuuuEEFFuFFFFFE8mmmmEEEYYYYYEE", "WWWWWWuoKKKK7KuuuuuuuuuEEBBBBBBEEEEmmmZEEEEEEEEEE"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> grid = {".................................................", "...........................33333333333333333.....", ".....oooooooommoooooooooooo3333333RRRRRRRRRRRyoo.", ".....ooooooo7mm7777ff000000000eeeeRRRRRRRRRRRyIoN", "..APPPPPPPPPPmmPPPPPP000000000eemeRRRRJRRRRRRyIoN", "..APPPPPPPPPPmmPPPPPP000000000eeeeRRRRJRRRRRRyIxN", "..APPPPPPPPPPmmPPPPPP000000000eeeeRRRRJRRRRRRyIxN", "..APPPPPPPPPKKKKKKKKKKKKK00000eeeeRRRRJRRRRRRyIxN", "..APPPPPPPPPKKKKKKKKWKKKKPPPPeeeeeRRRRJRRRRRRywww", "44A444444444KKKKKKKKKKKKK4444epppppppppppppppppww", "..ALLLLLLLLLKKKKKKKKKKKKK111111PPPRRRRRRRRRRRy..N", "..ALLLLLLLLLKKKKKKKKKKKKKLLLLLLPuPRRRRRRiRRRRR..N", "..ALLLLLLLLLKKKKKKKKKKKKKLLLLLLPPPRRRRRRiRRRRR..N", "....22222222KKKKKKKKKKKKK222222222RRRRRRiRRRRRlll"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> grid = {"IIIIIIIIIIII....n.....", "IIIIIIIIIIII..........", "IIIIIIII4444444444b444", "IIIIIIII44444444444444", "IIvIIIII44444444WWCWW4", "......FFFFFkkkkkkWWWW4", "........444kk4kkkWWiW4", "........444444d4WWWWW4", "..1.....44c44444WWcWW4", "........44444444WyWWR4", ".......q..........H8.."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "ERROR!";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> grid = {"bbb666", ".655X5", "a65AA5", "a65AA5", "a65555"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "65AXab";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> grid = {"..AA..", ".CAAC.", ".CAAC."};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "CA";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> grid = {"A000666444bbbggghikj", "A0106264a4cccfffhikj", "A000666444dddeeehikj"};
    TopView* pObj = new TopView();
    clock_t start = clock();
    string result = pObj->findOrder(grid);
    clock_t end = clock();
    delete pObj;
    string expected = "01462Aabcdefghijk";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23074049&rd=15172&pm=11494
********************************************************************************
#include <algorithm>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <map>
#include <set>
using namespace std;
 
typedef unsigned long long qword;
typedef long long int64;
 
const int INF = 0x3f3f3f3f;
const int N = 300;
 
int n, r, c;
int lRow[N], rRow[N], lCol[N], rCol[N];
int cntIn[N];
bool V[N];
bool haveEdge[N][N];
vector<string> mat;
vector<int> E[N];
 
bool check(int x) {
  for (int i = lRow[x]; i <= rRow[x]; ++i)
    for (int j = lCol[x]; j <= rCol[x]; ++j) {
      if (mat[i][j] == '.')
        return false;
      if ((isdigit(mat[i][j]) || isalpha(mat[i][j])) && !haveEdge[x][mat[i][j]] && mat[i][j] != x) {
        haveEdge[x][mat[i][j]] = true;
        E[x].push_back(mat[i][j]);
        ++cntIn[mat[i][j]];
        //cout << (char)x << "->" << mat[i][j] << endl;
      }
    }
  return true;
}
 
class TopView {
public:
  string findOrder(vector <string> grid) {
    mat = grid;
    n = 0;
    for (int i = 0; i < N; ++i) {
      E[i].clear();
      lRow[i] = INF;
      rRow[i] = -INF;
      lCol[i] = INF;
      rCol[i] = -INF;
      cntIn[i] = 0;
      V[i] = false;
    }
    memset(haveEdge, 0, sizeof(haveEdge));
    r = grid.size();
    c = grid[0].size();
 
    for (int i = 0; i < r; ++i)
      for (int j = 0; j < c; ++j)
        if (grid[i][j] != '.') {
          int x = grid[i][j];
          V[x] = true;
          lRow[x] = min(lRow[x], i);
          rRow[x] = max(rRow[x], i);
          lCol[x] = min(lCol[x], j);
          rCol[x] = max(rCol[x], j);
        }
 
    for (int i = 0; i < 300; ++i)
      if (V[i] && !check(i)) {
        sort(E[i].begin(), E[i].end());
        return "ERROR!";
      }
 
    priority_queue<int> que;
    int cnt = 0;
    for (int i = 0; i < 300; ++i)
      if (V[i]) {
        ++cnt;
        if (!cntIn[i])
          que.push(-i);
      }
    string ret = "";
    while (!que.empty()) {
      int x = -que.top();
      que.pop();
      --cnt;
      char s[] = {(char)x};
      ret += string(s, s + 1);
      for (vector<int>::iterator y = E[x].begin(); y != E[x].end(); ++y)
        if (!--cntIn[*y])
          que.push(-*y);
    }
    return cnt ? "ERROR!" : ret;
  }
};
 
 
 
// Powered by FileEdit
// Powered by moj 4.16 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/