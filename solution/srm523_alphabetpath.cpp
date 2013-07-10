/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11615
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

class AlphabetPath {
public:
    string doesItExist(vector<string> letterMaze);
};

string AlphabetPath::doesItExist(vector<string> letterMaze) {
    string ret;
    return ret;
}


int test0() {
    vector<string> letterMaze = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> letterMaze = {"ADEHI..Z", "BCFGJK.Y", ".PONML.X", ".QRSTUVW"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> letterMaze = {"ACBDEFGHIJKLMNOPQRSTUVWXYZ"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> letterMaze = {"ABC.......", "...DEFGHIJ", "TSRQPONMLK", "UVWXYZ...."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> letterMaze = {"..............", "..............", "..............", "...DEFGHIJK...", "...C......L...", "...B......M...", "...A......N...", "..........O...", "..ZY..TSRQP...", "...XWVU.......", ".............."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> letterMaze = {"ABCDEFGH", "PONMLKJI", "QRSTUVWX", "......ZY"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> letterMaze = {"....ZYXW", ".PQRSTUV", ".ONMLKJI", "ABCDEFGH"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> letterMaze = {"MLKJIHGFEDCBA", "N............", "O............", "PQRSTUVWXYZ.."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> letterMaze = {"NM", "OL", "PK", "QJ", "RI", "SH", "TG", "UF", "VE", "WD", "XC", "YB", "ZA"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> letterMaze = {"ABCDEFGH..........................................", ".......I..........................................", ".......J..........................................", "......LK..........................................", "......M...........................................", "......N...........................................", "......O...........................................", "......P...........................................", "......Q...........................................", "......R...........................................", "......S...........................................", "....VUT...........................................", "...XW.............................................", "...YZ.............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> letterMaze = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "ABCDEFGHIJKLMNOPQRSTUVWXYZ........................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> letterMaze = {".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", "...............................OPQRS.....", "...............................NMLKT.....", ".................................IJU.....", "................................GH.V.....", "...............................EF..WX....", "...............................D...ZY....", ".............................ABC.........", ".........................................", ".........................................", "........................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> letterMaze = {"..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", ".................A........................", "............QP...B........................", "............RON..C........................", "...........TSLM.ED........................", "...........U.KJ.F.........................", "...........VW.IHG.........................", "............XYZ...........................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", ".........................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> letterMaze = {".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".....DCBA..............................", "....FE.................................", "....GH.................................", ".....I.................................", ".....J.................................", ".....K.................................", "....ML.................................", "....NOP................................", ".....RQ................................", ".....S.................................", ".....T.................................", ".....UVWXYZ............................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", "......................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> letterMaze = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....................UTQP.........................", ".....................VSRONML......................", ".....................W.ABCDKJ.....................", ".....................X....EFI.....................", "....................ZY.....GH.....................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> letterMaze = {"...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "..............................UV...........", ".............................STW...........", ".............................R.XY..........", ".............................Q..Z..........", "..........................MNOP.............", ".......................IJKL................", ".......................HG..................", "........................FED................", ".........................BC................", ".........................A.................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "..........................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> letterMaze = {"............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "....................A.......................", "..................DCB.......................", ".................FE..Z......................", ".................GHIJYXW....................", "..................MLKRSV....................", "..................NOPQTU....................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> letterMaze = {".........................", "...VUTSRQ................", "...WXYZ.PO...............", ".........N...............", "........LM...............", "........KJ...............", ".........I...............", ".........H...............", ".........GFCBA...........", "..........ED.............", ".........................", ".........................", ".........................", ".........................", ".........................", "........................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> letterMaze = {"..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "...............................GFE........", "......................YZ......IH.D........", "......................X..QPMLKJ.BC........", "......................WVSRON....A.........", ".......................UT.................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", ".........................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> letterMaze = {".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", "................ZY...................", ".................XW..NM..............", "..................V..OL..............", "..................URQPK..............", "..................TSHIJ..............", "....................GF...............", ".....................E...............", ".....................DCBA............", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", "....................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> letterMaze = {"......", "......", "......", "......", "...FGH", ".CDEJI", "ABMLK.", "..N...", "QPO...", "RS....", ".TUZ..", "..VY..", "..WX.."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> letterMaze = {".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", "....ZY...........", ".....XW..........", "......VUT........", "........S........", "........R........", "........Q........", "........P........", "........ON.......", ".........ML.FE...", "..........KHGDC..", "..........JI..BA."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> letterMaze = {".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", "...EDA...", "...FCB...", ".IHG.....", ".JKL.....", "...M.....", "..ON.....", "..P......", "..Q......", "..RST....", "....UVW..", "....ZYX..", ".........", ".........", ".........", ".........", ".........", ".........", ".........", "........."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> letterMaze = {".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".....Z...", "..TUVY...", "..S.WX...", "..R......", "..QPONML.", "....HIJK.", "....G....", "....F....", "....E....", "...CD....", "...BA....", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", "........."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> letterMaze = {".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", "..CBA....", ".ED......", "GF.......", "HI.QR....", ".JOPS....", ".KN.T..YZ", ".LM.UVWX.", "........."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> letterMaze = {"........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", ".........YZ.............", "......A..X..............", "....DCB.VW..............", "....E..TU...............", "....FGRS................", "...JIHQP................", "...KLMNO................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> letterMaze = {".............", "....ML.......", "....NKJ......", "...PO.IHGDCB.", "..ZQR...FE.A.", ".XY.S........", ".WVUT........", "............."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> letterMaze = {".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".............VUTS....", "............XWPQR....", "...........ZY.ONM....", "................LK...", ".................J...", "...............GHI...", "...............FAB...", "...............EDC...", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", "....................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> letterMaze = {"........", "........", "........", "........", "........", "........", "........", "........", "........", "........", "........", "........", "........", "........", "........", "........", "........", "........", "........", "........", "........", ".....XYZ", "...AVW..", "...BUTSR", "...CLM.Q", "..EDKNOP", "..FIJ...", "..GH....", "........", "........", "........", "........", "........", "........"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> letterMaze = {"........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "..........................ON............", "........................TSPM............", ".......................VURQLKJ..........", ".......................WXY...IHG........", ".........................Z.....F........", "..............................DE........", "..............................C.........", "..............................BA........", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> letterMaze = {".............................", ".............................", ".............................", "...................YXW.......", "...................Z.V.......", ".....................UT......", "......................SR.....", ".....................OPQ.....", "...................LMN.......", "...................K.........", "..................IJ.........", "..................HG.........", "................ADEF.........", "................BC...........", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", "............................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> letterMaze = {"......CD.......", ".....ABEF......", "......KJG......", "......LIH......", "......MN.......", ".......O.......", ".......PQR.....", ".........S.....", ".........T.....", ".........U.....", ".......XWV.....", "......ZY.......", "...............", "...............", "...............", "...............", "..............."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> letterMaze = {".................................", ".......EDC.......................", ".......FAB.......................", ".......GHI.......................", ".......LKJ.......................", ".......M.........................", ".......N.........................", ".......OPQR......................", ".....ZYXWVS......................", ".........UT......................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", "................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> letterMaze = {"........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........ZYVUTQP....A....", ".........XW.SRO....B....", "..............NMLEDC....", "................KF......", "................JG......", "................IH......", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> letterMaze = {"...........", "...........", "...........", "...........", "...........", "...........", ".........A.", ".......FEB.", "......HGDC.", ".ZWVUTIJK..", ".YX..SRML..", "......QN...", "......PO...", "...........", "...........", "...........", "...........", "...........", "...........", "..........."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> letterMaze = {".............CB...............", ".............DA...............", ".............E................", ".............F.........Z......", ".............GLMPQ.UVWXY......", ".............HKNORST..........", ".............IJ..............."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> letterMaze = {"............", "............", ".........HI.", "......DEFGJ.", "......CPO.K.", ".....ABQNML.", ".......RST..", "......XWVU..", ".....ZY.....", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............", "............"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> letterMaze = {"............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................UTS.............", "...........................WV.RQ............", "...........................X...PO...........", "...........................Y...MN...........", "...........................Z.JKL............", ".............................IH..CB.........", "..............................GFEDA.........", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> letterMaze = {".............................", ".............A...............", "...........DCB...............", "...........EF................", "...........HG................", "...........IJ................", "...........LK................", "..........NM.................", "..........OP.................", "...........Q.................", "..........SR.................", "........VUT..................", "........W....................", "........XY...................", ".........Z...................", ".............................", ".............................", ".............................", ".............................", ".............................", "............................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> letterMaze = {"....STUVWX.", "....R...ZY.", "....Q......", "....P......", "....O......", ".IJ.N......", ".HKLM......", ".G.........", ".F.........", ".E.........", "CD.........", "B..........", "A..........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "...........", "..........."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> letterMaze = {"................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "..................SRQ....HGF....................", "..................T.PON.JI.E....................", "..................U.YZMLK..DC...................", "..................VWX......AB...................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> letterMaze = {".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", "........BC...............", "........AD...............", "........FE...............", "........GH...............", ".........I...............", ".........J...............", ".........K...............", "........ML...............", "........N................", "......QPO................", "......RS.................", ".......TUV...............", ".........WX..............", "..........Y..............", "..........Z..............", ".........................", ".........................", ".........................", ".........................", "........................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> letterMaze = {"............................", "............................", "............................", "............................", "............................", "............................", "............AZ..............", "............BYTSR...........", "...........DCXU.Q...........", "...........E.WVOP...........", "...........FGH.N............", ".............I.M............", ".............JKL............", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> letterMaze = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..........................................CBA.....", "..........................................D.......", "......................................MLKJEF......", ".....................................ONSTIHG......", ".....................................PQRU.........", "........................................V.........", ".......................................XW.........", ".......................................Y..........", ".......................................Z..........", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> letterMaze = {".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", "................DE...............", "..............YZCFGHIJK..........", "..............X.BAPONML..........", "..............W...Q..............", "..............VUTSR..............", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", "................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> letterMaze = {".................................................", ".................................................", "..............YZ.................................", "..............X..................................", "..............W..................................", "............TUV..................................", "........MNORS....................................", "........LKPQ.....................................", ".........JIHGF...................................", ".............E...................................", ".............DC..................................", "..............B..................................", "..............A..................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", "................................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> letterMaze = {"..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "....XW............", "...ZYVU...........", "......TSR.........", ".......PQ..HG.....", ".......ONMLIFE....", "..........KJCD....", "...........AB.....", "..................", ".................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> letterMaze = {".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", "..........TS.....", "........YZUR.....", "........XWVQ.....", "...........P.....", "..........NO.....", "..........M......", "..........L......", "..........KJ.....", "...........I.....", "...........HG....", "...........AFE...", "...........BCD..."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> letterMaze = {".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", "....................................Z..", "...................................XY..", "..................................VW...", "..................................U....", "..................................TS...", "..................................QR...", "..................................PMLK.", "..................................ONAJ.", "...................................CBI.", "...................................DGH.", "...................................EF..", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", "......................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> letterMaze = {".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", "............BC...................................", "............ADGH.................................", ".............EFI.................................", "...............J.................................", "...............K.................................", "...............L.................................", "...............M.................................", "...............N...Z.............................", "...............O...YX............................", "...............PQ..VW............................", "................RSTU.............................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", "................................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> letterMaze = {"...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "....................ZWVU...........", "....................YXST...........", "......................R............", "......................Q............", "......................PONMLIH......", "..........................KJGF.....", "............................DE.....", "............................C......", "............................BA.....", "...................................", "...................................", "..................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> letterMaze = {".......................................", "............................HI.........", ".........................DEFGJ.........", "........................BC..LK.........", "........................A.ONM..........", ".........................QP............", "....................YXWTSR.............", "....................Z.VU...............", ".......................................", ".......................................", "......................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> letterMaze = {"..............................................", "..............................................", "..............................................", "......IHG.....................................", "......JKFE....................................", "......ML.DC...................................", "......N..AB...................................", "......OPQRSTUV.Z..............................", ".............WXY..............................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", ".............................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> letterMaze = {"...............................", "...............................", ".SRQ...........................", ".T.PO..........................", ".U.MN..A.......................", ".V.LKJCB.......................", ".WX..IDE.......................", ".ZY..HGF.......................", "..............................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> letterMaze = {".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".................YZ..........................", ".................X...........................", ".........GH....UVW...........................", ".........FI.QRST.............................", ".........EJOP................................", ".........DKN.................................", "........BCLM.................................", "........A...................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> letterMaze = {".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", "......GF...............................", "....LKHE...............................", "....MJIDC..............................", "....NO..B..............................", ".....P..A..............................", ".....QR................................", ".....TS................................", ".....UVWXY.............................", ".........Z.............................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", "......................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> letterMaze = {"..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", ".............YZ...........", "....MNOP.TUVWX............", "...KL..QRS................", "...J......................", "FGHI......................", "ED........................", ".CBA......................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", ".........................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> letterMaze = {"....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", ".............RS..Z..................", ".............QT.XY..................", ".............PUVW...................", ".............ONML...................", "................K...................", "...............IJ...................", "...............HA...................", "..............FGB...................", "..............EDC...................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "...................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> letterMaze = {"...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", ".........................YXWVUTS...........", ".........................Z.....RQP.........", "................................NO.........", "................................MJIHG......", "................................LK..FED....", "....................................ABC....", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "..........................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> letterMaze = {"......................AB..................", "......................DC..................", ".....................FE...................", "....................HG..NOPQ..............", "....................IJKLM..R..............", "...........................STUXY..........", ".............................VWZ..........", "..........................................", "..........................................", ".........................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> letterMaze = {".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", "...............DE", "........RQP...BCF", "........S.O...AHG", "......VUT.NMLKJI.", "......WXY........", "........Z........", ".................", ".................", "................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> letterMaze = {"CD.......TUVW", "BE.....QRSZYX", "AF....OP.....", ".G.KLMN......", ".HIJ........."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> letterMaze = {"......DC", "......EB", "......FA", "......G.", ".....IH.", ".....J..", "XWV..K..", "Y.U..L..", "Z.TONM..", "..SP....", "..RQ...."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> letterMaze = {".....ST.Z", "GFEDCRUVY", "H..ABQPWX", "IJKLMNO.."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> letterMaze = {"..........XWV", "EFGHIJ...ZY.U", "DC...KLOPQRST", ".B....MN.....", ".A..........."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> letterMaze = {".Z.......", ".Y.......", "WX.......", "V........", "UT.......", ".S.......", ".RQ.....A", "..PONGF.B", "...LMHEDC", "...KJI..."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> letterMaze = {"..DC.", "GFEBA", "HIJK.", "...L.", "...M.", "...N.", "...O.", "UTSP.", "VWRQ.", ".X...", ".YZ.."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> letterMaze = {"DC.......", "EB.......", "FA.....YZ", "G.....WX.", "HI...UV..", ".JQRST...", ".KPO.....", ".LMN....."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> letterMaze = {"....ABCFG.", "......DEHI", "UTSRQPMLKJ", "VYZ..ON...", "WX........"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> letterMaze = {".......PQ...", ".......ORSTU", ".......N..WV", ".....KLM.YX.", ".....J...Z..", ".....I......", "ABCD.H......", "...EFG......"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> letterMaze = {"ZY.......", ".XUT.....", ".WVS.....", "..QR.....", "..PO.....", "...NML...", "....JK...", "....IH...", ".....GF..", "......E..", "......DC.", ".......BA"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> letterMaze = {"ZYXW......", "...V......", "...UT.....", "...RS.....", "...QP.....", "....ONML..", ".....IJK.A", ".....HEDCB", ".....GF..."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> letterMaze = {"..YZ..", ".WX...", ".VSR..", ".UTQPO", "CBALMN", "DGHK..", "EFIJ.."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> letterMaze = {"........Z", "........Y", "........X", "MN..STUVW", "LOPQR....", "KJ.BA....", "HIDC.....", "GFE......"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> letterMaze = {".YZ...", "WX....", "VU....", ".TS...", "..R...", "..QPO.", "..LMN.", "..KBC.", "..JADE", "..IHGF"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> letterMaze = {"Z............", "YX...........", ".WTS.........", ".VURQ.KJ.....", "....P.LI.....", "....ONMHGF...", ".........E...", ".........DCBA"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> letterMaze = {"......KJIH", "...ONML.FG", "..QP....ED", "..RS...ABC", "...T......", "ZWVU......", "YX........"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> letterMaze = {"...........A.", "...........BC", ".......KJIFED", ".....POL.HG..", ".....QNM.....", "..UTSR.......", "ZYV..........", ".XW.........."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> letterMaze = {".......CB", ".......DA", ".......E.", "...LK..F.", "..NMJIHG.", ".PO......", ".QR......", "..S......", "VUT......", "WX.......", ".Y.......", ".Z......."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> letterMaze = {"RQ......", "SP......", "TO......", "UNML....", "VWXKJ...", ".ZY.IH..", ".....GBA", ".....FC.", ".....ED."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> letterMaze = {"Z......", "YXW....", "..V....", "STU....", "R......", "QPMLK..", ".ONIJ..", "...H...", "...G...", "...F...", "...E...", "...DCBA"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> letterMaze = {"......................", "...SRO................", ".VUTQP...ED...........", ".WX..N...FCB..........", ".ZY..M.IHG.A..........", ".....LKJ..............", "......................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> letterMaze = {"...............", "...............", "...............", ".....Z.........", "..OPQY.........", "..NSRXW........", ".LMT.UV........", ".KDC...........", "IJEBA..........", "HGF............"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> letterMaze = {".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", "..CBA..................", "..D....................", "..E....................", "..F....................", "..G....................", "..HI...................", "...JK..................", "...ML..................", "...N.UT................", "...OPVS................", "....QWR................", ".....X.................", ".....Y.................", ".....Z.................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", "......................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> letterMaze = {".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", "...KLM.YZ", "...JINWX.", "...GHOVU.", "..EF.PQT.", "..D...RS.", "..C......", "A.B......", ".........", ".........", "........."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> letterMaze = {"..............", "........Z.....", "........YX....", ".........W....", "......STUV....", "......R..ED...", "......QPGFC...", ".....MNOH.A...", ".....LKJI.B...", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", "..............", ".............."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> letterMaze = {"................", "................", "................", "................", "................", "................", "................", "................", "................", "................", "....JIHG........", "....KL.FE.......", "..PONM..DCB.....", "..Q.......A.....", "YXRS............", "Z.UT............", ".WV.............", "................", "................", "................", "................", "................", "................", "................", "................", "................", "................", "................", "................", "................", "................", "................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> letterMaze = {"......................................", "......................................", "......................................", "......................................", "......................................", "..........ZY..........................", "...........X..SR......................", "...........WVUTQ......................", "...............P......................", "...............OKL....................", "...............NJM....................", "................I.....................", "................HG....................", "................AF....................", "................BE....................", "................CD....................", "......................................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> letterMaze = {".....................................", ".....................................", ".....................................", "..........T.MLIHG....................", ".........VU.NKJ.F....................", ".........WSRO...EBA..................", ".........X.QP...DC...................", ".........Y...........................", ".........Z...........................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", "....................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> letterMaze = {".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".................KL.PTUVW..............", ".................JMNOSZYX..............", ".................IHGQR.................", "...................FE..................", "....................D..................", "...................BC..................", "...................A...................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", "......................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> letterMaze = {"......PO..JI............", "....SRQNMLKH............", "....TU.....GFED.........", "...WXV........CBA.......", "...ZY...................", "........................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> letterMaze = {"..................................................", "..................................................", "..................................................", "..................................................", "..........................YZ......................", "..........................X.......................", "..........................WVUT...KJI..............", ".............................SR.ML.H..............", "..............................Q.N.FG..............", "..............................P.O.E...............", "..................................D...............", "..................................CB..............", "...................................A..............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> letterMaze = {"......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "..............YZ......", "..............X.......", "......................", "..............W.......", ".............UV.......", ".............TSRQPML..", ".................ONK..", "...................J..", "..................HI..", "..................GF..", "...................E..", "...................D..", "..................BC..", "..................A..."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> letterMaze = {"......................", "......................", "......................", ".............XW.......", "............ZYVUTSR...", "..................Q...", "..................P...", "..................O...", "............AB....N...", "...........EDC..KLM...", "...........FGHI.J.....", "......................", "......................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> letterMaze = {"............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "........................................RQ..", "........................................SPO.", ".......................................UT.NM", "......................................ZV...L", "......................................Y...JK", "......................................XW.HI.", "........................................FG..", ".......................................DE...", ".......................................CB...", "........................................A..."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> letterMaze = {".XYZ.................................", ".W...................................", ".VUT.........ABC.....................", "...SRNMLKJIHGFED.....................", "....QOP..............................", "....................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> letterMaze = {".............", ".............", ".............", ".............", ".............", ".DCBA........", ".E...........", ".FG..........", "JIH..........", "KPOQ.........", "LMNRSTUV.....", ".......WX....", "........YZ...", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", "............."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> letterMaze = {"..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..............XYZ.........", "..............W...........", "...........IJ.VUT.........", "...........HKLMNS.........", "...........GFEDOR.........", "..............CPQ.........", "..............B.A.........", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", ".........................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> letterMaze = {".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", "..XYZ..", "..WVU..", "....T..", "....SR.", "..AB.Q.", "...CDP.", "..GFEON", "..HIJ.M", "....K.L", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", ".......", "......."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> letterMaze = {"...........AB.OP....................", "...........DCENQRST.................", ".............FM...U.................", ".............GLK..V.................", ".............HIJ..WX................", "...................Y................", "...................Z................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "...................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> letterMaze = {"...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...............MN..........", "...............LOPQRST.....", "...............K.....U.....", "....................WV.....", "............CBAJI.ZYX......", "............DEFGH..........", "...........................", "...........................", "...........................", "...........................", "...........................", "..........................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> letterMaze = {".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", "....................B..................", "....................A..................", "....................CD...RS............", ".....................EF..QTUVW.........", "......................GHIPON.X.........", "........................JKLM.Y.........", ".............................Z........."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> letterMaze = {"..................AB.....", "..................DC.....", "..................EFG....", "....................H....", "..................JKI....", "..................ML.....", ".................ON......", ".................PQRS....", "..................ZYT....", "...................XU....", "...................WV....", ".........................", ".........................", "........................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> letterMaze = {"............................", "............................", "............................", "YXWT.S......................", "Z.VU.R.LKJ..................", ".....QPMHI..................", "......ONG...................", ".......AF...................", ".......BE...................", ".......CD...................", "............................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> letterMaze = {"........................................", "........................................", "........................................", ".......................KJ...............", ".......................LIFED............", ".......................MHG.CBA..........", ".......................NOPTS............", ".........................QUR............", "..........................VW............", "...........................X............", "...........................Y............", "...........................Z............", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> letterMaze = {".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", "..........AB.........................", "..........DC.........................", "........GFE..........................", "..........KL..WXYZ...................", "........HIJMN.V......................", "...........POTU......................", "...........QRS.......................", ".....................................", ".....................................", ".....................................", "....................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> letterMaze = {"................", "................", "................", "................", "................", "................", "................", "................", "................", "................", ".BC.............", ".AD.............", "..E.............", "..F.............", "..GHKLM.........", "...IJ.NRS.......", "......PQTUV.....", "......O...WXYZ.."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> letterMaze = {".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", "..............................Z..............", "............................WXY..............", "............................VU...............", "............................ST...............", "........................I.JKR................", "........................H.MLQ................", "........................GFNOP................", ".........................EDCBA...............", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", "............................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> letterMaze = {"................", ".....RQ.........", ".....SPONM......", ".....T...LK.....", ".....UV...J.....", ".....XW...IH....", ".....Y.....GF...", ".....Z.......A..", "............EB..", "............DC..", "................", "................", "................", "................", "................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> letterMaze = {".........................................", ".........................................", ".........................................", "...................................QR....", "...................................PS....", "..................................NOTUYX.", "................................KLM..VZW.", "...............................IJA.......", "...............................H.B.......", "...............................GFC.......", "................................ED.......", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", "........................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> letterMaze = {"........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "..................................XYZ...", "..................................WV....", "..................................TU....", "..................................SR....", "...............................LKM.Q....", "...............................IJNOP....", "...............................HGFEDC...", "....................................BA..", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> letterMaze = {".....................", ".....................", ".......TUS...........", "........VRQBA........", "........WOPCD........", ".......YXNKJE........", ".......Z.MLIF........", "...........HG........", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", "....................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> letterMaze = {"...................", "......TS...........", ".....VURQ..........", "...ZYWX.PO.........", "........MN.........", "........LK.........", ".........J.........", "........HI.........", "........G..........", ".......EF..........", ".......D...........", ".......CB..........", "........A..........", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "..................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> letterMaze = {"..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "....................UTS...................", "....................VQR...EF..............", "...................XWP.ABCDG..............", "...................YZOLK.JIH..............", ".....................NM...................", "..........................................", ".........................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> letterMaze = {".....YZ................", ".....XW................", "......VU...............", ".......T...............", ".....QRS...............", "LMNO.P.................", "KJI....................", ".GH....................", ".F.....................", ".E.....................", "CD.....................", "B......................", "A......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", "......................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> letterMaze = {".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", "......CBA....", "......DE.....", "......GF.....", "......H......", "......I.JKLMN", ".........TSPO", ".........URQ.", ".........VW..", "........ZYX..", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", "............."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> letterMaze = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "............................LKJ.AB................", ".........................ZONM.I.HC................", ".........................YP.....GD................", ".........................XQR....FE................", ".........................WTS......................", ".........................VU.......................", "..................................................", "..................................................", ".................................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> letterMaze = {"................................", "................................", "................................", "................................", "................................", "................................", "....EFGJKNOQP...................", "....DCHILMSR....................", ".....BA..UTYZ...................", ".........VWX....................", "................................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> letterMaze = {"...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "..........ZY...............................", "..........WX...............................", "..........VU...............................", ".........RST...............................", ".........Q.................................", ".........P.................................", ".........NMLK..............................", ".........O..JIFE...........................", ".............HGD...........................", "...............C...........................", "...............BA..........................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "..........................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> letterMaze = {"................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "...................KJ...........", "..................MLIH..........", "..................NO............", "...................PQGF.........", "....................RSE.........", ".....................TDCBA......", ".....................UV.........", "......................WX........", ".......................Y........", ".......................Z........", "................................", "................................", "................................", "................................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> letterMaze = {"..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "...............A..", "...............B..", "...............C..", "..............ED..", "..............F...", "............HIG...", ".............JK...", "..............LM..", "...........TSRQN..", "...........UV.PO..", ".........ZYXW.....", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", "..................", ".................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> letterMaze = {"...BACDEFGHIJ.......", ".....ZWV.RQ.KL......", ".....YXUTSPONM......", "...................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> letterMaze = {"...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "........CDE........", "........BGF........", "........AH.........", ".........IJ........", "........MLK........", ".......ON..........", "......QP...........", ".....SR............", ".....TU............", "......VWX.Y........", "..........Z........", "...................", "...................", "...................", "...................", "...................", "...................", "..................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> letterMaze = {"...................................", "...................................", "...................................", "...................................", "............................A......", "............................B......", "....................XWV.....C......", "....................YZUTSR.........", ".........................Q.ED......", ".........................P.FG......", ".........................O..H......", ".........................NMLI......", "...........................KJ......", "...................................", "...................................", "..................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> letterMaze = {".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".............................YZ..........", ".........................RST.X...........", ".........................Q.UVW...........", "........................OP...............", ".......................MN................", ".......................L.................", "......................JK.................", ".........................................", "....................GHI..................", "...................AF....................", "...................BE....................", "...................CD....................", "........................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> letterMaze = {"................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", ".................TU.............", ".................SVW............", ".................RQXYZ..........", "................................", "..................POBC..........", "...................NAD..........", "...................M.E..........", "...................L.FG.........", "...................KJIH.........", "................................"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> letterMaze = {".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", "...AB........", "....CD.......", "....FE.Z.....", "....GH.......", "...KJIXY.....", "..MLQRW......", "..NOPSV......", ".....TU......", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", "............."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> letterMaze = {"...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...Z...............", "...................", "...Y...............", "...XWVUTS.....AB...", "........RQ.....CD..", "........OP......E..", "........NMLKJIHGF..", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "..................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> letterMaze = {"...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................A.BC............", ".....................ED............", ".....................FIJ...........", ".....................GHK...........", "......................ML...........", "......................NOP..........", ".......................RQ..........", ".......................S...........", "......................UT...........", "......................VYZ..........", "......................WX...........", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "..................................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> letterMaze = {".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".....................IHGF", ".....................JK.E", ".................Z....L.D", ".................Y....M.C", ".................XWQPON.B", "..................V.....A", "..................UR.....", "..................TS.....", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", "........................."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> letterMaze = {"..........", "..........", "..........", "....ZHG...", "...XYIF...", "...W.JEDA.", "...VLK.CB.", "...UM.....", "...TNPO...", "...SRQ....", "..........", "..........", "..........", ".........."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> letterMaze = {".........Z", "......WX.Y", ".....UV...", "...PQT....", "..NORS....", "KLMFE.....", "JIHGDC....", ".....BA..."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> letterMaze = {"CDE......", "B.FGHIJK.", "A.....ML.", "......N..", "......O..", "....UVWX.", "....TQPYZ", "....SR..."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> letterMaze = {".ON.....D", ".PMLK.GFE", ".Q..JIH.C", ".RST...AB", "XWVU.....", "Y........", "Z........"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> letterMaze = {"........EDC.", "UTSR..JIF.BA", "VW....KHG...", ".X.QP.L.....", "ZY..ONM....."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> letterMaze = {".KJI...", "ML.HGF.", "NOP..ED", ".RQ..BC", ".S...A.", "VTU....", "WX.....", ".YZ...."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> letterMaze = {"YX.....", "ZW.....", ".VUT...", "..RS...", "..Q....", "..PNO..", "...M...", "..KLGF.", "..JIHE.", ".....DA", ".....CB"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> letterMaze = {"..WX...", "TUVYZ..", "S......", ".......", "RQPON..", ".JKLM..", ".IH....", "..GFCBA", "...ED.."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> letterMaze = {".....PQ..", "...HIORS.", "...GJNKT.", "ADEF.MLUV", "BC....YXW", "......Z.."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> letterMaze = {"......AB", ".......C", ".....FED", ".....G..", "...JIH..", "..LK....", "SRM.....", ".QN.....", "TPO.....", "U.......", "VWX.....", "..YZ...."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> letterMaze = {"JK.......", "ILM.NOPYZ", "HGFE.RQX.", "...D.STW.", "...C..UV.", "...B.....", "...A....."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> letterMaze = {".BDC.YX.", ".AE..ZW.", ".GF...VU", "IH...RST", "JKLMPQ..", "...NO..."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> letterMaze = {"ZY.......", ".X.RQJKL.", ".WVSPONM.", "..UT.IHG.", "......EF.", "......DCB", "........A"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> letterMaze = {".UVW......", "STYX......", "RQZ.......", ".PO..IHG..", "..N....FAB", "..MLKJ.EDC"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> letterMaze = {"...........Z", "...........Y", "...ALM...VWX", "EDCBKN...U..", "FGHIJO..ST..", ".....PQ.R..."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> letterMaze = {"L.KJ..", "MN.IH.", ".O..GF", ".PSTDE", ".QRUC.", "..WVBA", "..X...", "..Y...", "..Z..."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> letterMaze = {"......Z", "......Y", "ADEQR.X", "BCFPSTW", "..GOHUV", "...NIJ.", "...MLK."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> letterMaze = {"....A", "....B", "..EDC", "..F..", "..G..", ".IH..", "KJNO.", "L.MP.", "...QR", "..UTS", "..V..", ".XW..", ".YZ.."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> letterMaze = {"CDE.....", "BAF.....", "..G.....", ".IH.....", ".JKNOP..", "..LM..YZ", ".....QXW", ".....RSV", "......TU"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> letterMaze = {"QRS...", "POTUYZ", "MNWVX.", "LKHGF.", ".JI.E.", "....DA", "....CB"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> letterMaze = {"..UT.....", "Z.VS.....", "YXWR.....", "..PQ.....", "..ON.....", "...MLKJ.I", ".......GH", "......EFA", "......DCB"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> letterMaze = {"W.X........", ".ZY........", "VUT........", "...........", ".PS...DCB.A", ".QRHGFE....", ".O.I.......", ".NKJ.......", ".ML........"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> letterMaze = {"..IH...A", "..JG.C.B", "..KFED..", "XWVPUQ..", "YZLOTS..", "..MN.R.."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> letterMaze = {"Z......", ".......", "YXW....", "..V....", "..UR...", "..TS...", ".POQ...", ".......", "..N....", ".LM....", ".K.....", ".J.....", ".IDCB.A", ".HE....", ".GF...."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> letterMaze = {"...ABC...", ".....D...", ".....E...", "..I.HG...", "LKJ..F.ZY", "MPQ.R....", "NO......X", "....STUVW"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> letterMaze = {"....PQ...", "..MNOR...", "..L..S...", ".WKVUT...", "YXJ.I....", "....HG...", "Z....FE..", "......D..", ".........", "......C.B", "........A"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> letterMaze = {"A..........TUX.", "B....M.NO..SVW.", ".....L..PQ.R.YZ", "CD...K.........", ".E...J.........", ".F.GHI........."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> letterMaze = {"....ABC..", "......D..", "......E..", ".....GF..", "Z....HI..", "......J.K", "YX....MNL", ".WV....O.", "..UTS....", "....RQ.P."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> letterMaze = {"Z........CDE", "....PON.IHGF", "Y.S.R...JBA.", "XUT.Q.MLK...", "WV.........."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> letterMaze = {"...........ZY", ".............", "...........WX", ".........TUV.", ".........S...", ".CAB...OPQ...", ".D...M.N.R...", "FE...L.......", "GHIJ.K......."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> letterMaze = {".....A", "..IGHB", "..JEDC", "..KF..", "......", "..LM..", "..RQP.", "Z.SNO.", "YUT...", "X.....", "WV...."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> letterMaze = {"IJK...", "H.....", "GFLM..", ".EON..", "ADPQ.R", "BCUT.S", "..V...", "...Z..", "..W...", "..XY.."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> letterMaze = {".W.VUST......", "YX...RQLK....", "Z.....PMJI...", "......ONGHFAE", "..........CBD"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> letterMaze = {"BDC...", "AE....", "GF...P", "HIJKNO", ".Z.LMQ", ".Y.T.S", "...U.R", ".XWV.."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> letterMaze = {".....S.......", "....PTU.V.WX.", "....QR.....YZ", "....ON.......", ".DE.LM.......", ".CFGK........", "ABIHJ........"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> letterMaze = {"....PQ.R....", ".F..ON.ST.XY", "BGHKLM....WZ", "AEIJ....U.V.", "CD.........."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> letterMaze = {"...IH.BA", "NK.JGFC.", "ML...ED.", "OQP.....", ".RTS....", "..UV....", "...ZY...", "...WX..."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> letterMaze = {"XW.V........", "...UTS......", "YZ.........A", "....QR..DC.B", "....PONME...", ".....JKLF...", ".....I.HG..."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> letterMaze = {"IJ.K.....", "HG.......", ".FEL.....", ".CDM.....", ".BPO.....", ".AQN.....", "..RS.....", "...T.....", "...UV....", ".........", "....WX.YZ"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> letterMaze = {"..MN...", "BALO...", "C..P...", "DJKQ...", "EI.R...", "FHGST..", "......Z", "....U..", ".....XY", "....VW."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> letterMaze = {"........BA", "...WZ...C.", "...XY...D.", ".U.V...FE.", ".T.S...G..", "POQR......", ".NMLKJIH.."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> letterMaze = {"ABC.......", "...DEFGHIJ", "TSRQPONMLK", "UVWXYZ...."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> letterMaze = {"ACBDEFGHIJKLMNOPQRSTUVWXYZ"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> letterMaze = {"..............", "..............", "..............", "...DEFGHIJK...", "...C......L...", "...B......M...", "...A......N...", "..........O...", "..ZY..TSRQP...", "...XWVU.......", ".............."};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> letterMaze = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> letterMaze = {"A.BCDEFGHIJKLMNOPQRSTUVWXYZ"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> letterMaze = {"..............", "..............", "..............", "...DEFGHIJK...", "...C......L...", "...B......M...", "...A......N...", "..........O...", "...Y..TSRQP...", "...XWVU.......", ".............Z"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> letterMaze = {"AZBCDEFGHIJKLMNOPQRSTUVWXY"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> letterMaze = {"............................", "...A........................", "...BCDEFGHIJKLMNOPQRSTUVWXYZ"};
    AlphabetPath* pObj = new AlphabetPath();
    clock_t start = clock();
    string result = pObj->doesItExist(letterMaze);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22908368&rd=14548&pm=11615
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
 
class AlphabetPath{
public:
  string doesItExist(vector <string> grid){
        int r,c;
        int i,j;
        r=grid.size();
        c=grid[0].size();
        bool flag=true;
        int ti=-1,tj=-1;
        char ch ='A';
 
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(grid[i][j]=='A'){
                    ti=i;
                    tj=j;
                    break;
                }
            }
        }
        flag=false;
        int moves[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
        int p,q;
        if(ti==-1&&tj==-1) return "NO";
        else{
            bool temp=false;
            int count=0;
            while(count<25){
                temp=false;
                for(i=0;i<4;i++){
                    p=ti+moves[i][0];
                    q=tj+moves[i][1];
                    if(p>=0&&p<r&&q>=0&&q<c){
                        if(grid[p][q]==(char)(ch+1)){
                            temp=true;
                            break;
                        }
                    }
                }
                if(temp==true){
                    ti=p;
                    tj=q;
                    ch++;
                    count++;
                    //cout<<ti<<' '<<tj<<" "<<ch<<count<<endl;
                }
                else break;
            }
            if(temp==true){
                //cout<<temp<<count<<endl;
                return "YES";
            }
            else{
                //cout<<temp<<count<<endl;
                return "NO";
            }
        }
  }
};

********************************************************************************
*******************************************************************************/