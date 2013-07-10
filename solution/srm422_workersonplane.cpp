/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9751
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

class WorkersOnPlane {
public:
    int howMany(vector<string> field, int K);
};

int WorkersOnPlane::howMany(vector<string> field, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<string> field = {"G..X", "..XS", "W..."};
    int K = 5;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> field = {"GG..", "....", "..W.", "..W.", "SS.."};
    int K = 4;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> field = {"GG..", "XX..", "..W.", "..W.", "SS.."};
    int K = 10;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> field = {"S..S", "X.XW", "..W.", "GSW.", "SSGG"};
    int K = 4;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> field = {"G......................S", "........................", "........................", ".XXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXWWXXXXXXXXXX.", ".XXXXXXXXXX..XXXXXXXXXX.", "........................"};
    int K = 20;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
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
    vector<string> field = {"W.W.W.W.W.W.W.W.W.W.W.W.W.W.W.", "G.G.G.G.G.G.G.G.G.G.G.G.G.G.G.", "S.S.S.S.S.S.S.S.S.S.S.S.S.S.S.", "W.W.W.W.W.W.W.W.W.W.W.W.W.W.W.", "S.S.S.S.S.S.S.S.S.S.S.S.S.S.S.", "G.G.G.G.G.G.G.G.G.G.G.G.G.G.G.", "W.W.W.W.W.W.W.W.W.W.W.W.W.W.W.", "G.G.G.G.G.G.G.G.G.G.G.G.G.G.G.", "S.S.S.S.S.S.S.S.S.S.S.S.S.S.S.", "W.W.W.W.W.W.W.W.W.W.W.W.W.W.W.", "S.S.S.S.S.S.S.S.S.S.S.S.S.S.S.", "G.G.G.G.G.G.G.G.G.G.G.G.G.G.G.", "W.W.W.W.W.W.W.W.W.W.W.W.W.W.W.", "G.G.G.G.G.G.G.G.G.G.G.G.G.G.G.", "S.S.S.S.S.S.S.S.S.S.S.S.S.S.S.", "W.W.W.W.W.W.W.W.W.W.W.W.W.W.W.", "S.S.S.S.S.S.S.S.S.S.S.S.S.S.S.", "G.G.G.G.G.G.G.G.G.G.G.G.G.G.G.", "W.W.W.W.W.W.W.W.W.W.W.W.W.W.W.", "G.G.G.G.G.G.G.G.G.G.G.G.G.G.G.", "S.S.S.S.S.S.S.S.S.S.S.S.S.S.S.", "W.W.W.W.W.W.W.W.W.W.W.W.W.W.W.", "S.S.S.S.S.S.S.S.S.S.S.S.S.S.S.", "G.G.G.G.G.G.G.G.G.G.G.G.G.G.G.", "W.W.W.W.W.W.W.W.W.W.W.W.W.W.W.", "G.G.G.G.G.G.G.G.G.G.G.G.G.G.G.", "S.S.S.S.S.S.S.S.S.S.S.S.S.S.S.", "W.W.W.W.W.W.W.W.W.W.W.W.W.W.W.", "S.S.S.S.S.S.S.S.S.S.S.S.S.S.S.", ".............................."};
    int K = 1000;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> field = {"G...WWWGG.SW..WWG.G...WSW.SGW.", ".S.G..W.S.GSWSW..G...GGG.W.WW.", "W.G.SS..WW.S..GWSS....W..GGS.G", "GW.SSS.W....SSGW.SW.WGG.S..WGG", "GG.SW.WSS..S..S...SWG.WSW.G.S.", "..S.S.GW.GWW.G.S..GWS.G...G...", "GWW..GW.WWGSS..SSG.W.GWW..G.WG", ".WS.G.WW...S...G.G...GW.SSGWSW", "....WWWS.W..GSGG..S.W.G...W...", "..WWWG......WGG.......G.WGGSG.", "..G.W..WWGW....W....SGW.SGSS.W", "W..SWGGG..G.GW..GWS.W.GGS...G.", ".SGS...SS..SS..S..S..GWSWS...W", "..G.GG..GW..S....SS...S....SG.", "WG.SS.GW....WWW.G..G...G.WG...", "........SW.S..W.WWGGGS.....SSW", "..G.S..SGG.WG..W....W..SSS.G.S", ".G..SGS...G..W.GS.SWW.S..SS.WW", "GS.G.SG..GWS........WSWS..S..W", "......SG.WS.W.S....S.G..G.G...", ".W..W.GWGG.S..W..W..SSWGSG...G", "S..W...W..W.SSG..W.G.SS..SWS..", "..SSSS.W.S...W.G....W...W.GWW.", "..G.S.SWGS..GSWSG.WG..W..SG.SG", "S.....GW.S...SSS.W.SSW.S....S.", "....SSG.W..WW....GSWWW..GG..WG", "SS..WW...S..WG.W..SWGGGW...G..", "S...SSSWG...S.SS.GGWSGG.G.....", "...G..G.G.G.W..G..WSS.S....G.S", ".W.SGW..W...G...SG..S..G..WSSG"};
    int K = 86;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> field = {"....W.SW.G...W.W..G..G.G.G...G", "G.SSSG.W.GW.WGWWWSWWGWW.WS.WS.", "W.WS..WSS.GS.G......SSGWGW.G..", ".GGS.SG..WS.S.WW...WWW.W.W.G.W", "..WS.WG...GW.G.W..W.WG....WW..", ".G..S.SG...G..SGSG...W.WWW.GSW", "W..W.GSGSSG.....W.G.G.G...WSW.", "G.WWW..W..G..W.SSS...S..SWW.S.", "WW.WG...GGSWS.G.G....WW..W.GS.", "SWWW.SSSG.S..GS.W.SW.WSWS...GS", "....W.WSG.WGW.G.W.G....S.G....", "W..W.W.GWG.WWSGSSG..S..SS.WSS.", "GG....S..S....G..WG.....GG...S", "S.....W.W.S..W.GG..GS..SGS.SSG", "S.GSS.S...W.SGWSGGW.G.W.S.GGG.", "WWWG.SWSWG....W.......W..GGSSG", "W..S...G.GW.WWWG..SS.WG.W..GG.", "S.SGSW....GWG..SW..SS.G..S....", "..G.SG...G..SW.WG....SWS..GGG.", ".W............S..GGSSS.G.W.W..", ".SS.W..SW...SSGS.W..S..S..W...", ".G......SW...GGWG.S..WSGS.SG..", ".SWGS.S.WW.W...WS.SSGWG.G.G..W", "GWG..G...WGGGS.G...W..........", "..W.S..GG.S...S.G...GG.S..GW..", "..WSG..WWWWGG...S.WS..W.....GS", ".GGS...SGS...SS......W.S..W.GS", ".GWSGG.WSGGGSGW.......G.SW.GS.", "GG..S...G.W.W.WSWSGG.S.SGS.S..", "....G..G.GW.GGS.GSG..WSG.....G"};
    int K = 92;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> field = {".S...SSG.WSWWWSG.SWS.SGG...GS.", "SW..WGGSWS.GWWWW.GG.S..G.G..WS", "GS..G..GS..........GGW..S.....", "..G.S.W......WG..SGSS.SS...SS.", "G..S.WG..G..W..WG.SW..G.W..S..", "....GGG..W....GGGW.S.W....G.GW", "W...SWG...G.GW..SWWW..S.S.G...", "WG.SSG....WS.GS.SG.GGG..SG.W.S", ".W...GGGS..G.SWGG..W.GSGWGWSSG", "...G...W.......WG....GG.G..GS.", "..W..GGS.WWG.W.GWSS....SW.GSS.", "..GGSW...WW.S.GWSG..WS..SSS.SS", "WGG.W.WW.WW.GW.WGW..SWSW.S...W", "W..GSGW.G..W...SWSG..WWWGSWGSS", ".W.SG..S..G....W...SW.SW...G..", ".W...SS.SW.G.WG.S..W..GSG.SWWG", "...GW.G.W...S....G.S....WSWG..", "....GG.GW...SSWG.......S.WSWW.", "WWSSSGS..S..GGW..WGGGGGGS...SS", "S..GS.G...W.WS.S.S.W.G...GGS.S", "GSS.W...W.GS..W...WSS.W....SWS", ".S.WSSWG....WSGS.G....WG.GS..G", ".G.GWG.S.WSGS....W.W..SW...SWS", ".WG.WG..SG.G..SWW..S.GW.S..WW.", ".WG..W.S....W..W...SS....GWSGS", "..G.SW.....G.GSW....S...SWGW..", "WW......SW.G.SS.W..SS..SGG..S.", "W.W..SGG......WG...WW..S.W....", "G..GWW...WGGG.S...S.G...WG.W.S", "WWGGS.GWSG.G...G....GGGW......"};
    int K = 73;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> field = {"G.XXX.S", "G..WW.S"};
    int K = 11;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> field = {"SS", ".W", "GG"};
    int K = 2;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
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
    vector<string> field = {"GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    int K = 1;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> field = {"W.G", "SWW", "WSG"};
    int K = 2;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> field = {"SW.SG.WW.....G...WW.G.W.W..SGW", "S.G....GW..W.W.GSGGG.S.S...WGW", "...GW.GG...S..G.....S..SW.WGSS", "....W.WSWW.W.S..GWW.S.....SWS.", ".G..S..GWGW....W....SWS..G..S.", "W.GW..WW.GW....GW.G...GSSGW...", "S.S.G..G....S..G.W..S..W.G.WSW", ".G......WS..WS.GGS.SG.SSW.WSW.", "G.G.G.G..S.W.G....G..WG.WW.S..", "G.S.....GS..SS.GG..GW.S..SWSSS", "S..WW.WWW.S.SWGGSWWS.SW.WS...G", ".GGSW.GSGGGSSSS...SG.GGG..S.SG", "SSW......S..GWSG.WGS.WW.G....G", ".SS.G.WG.S.G.WSS.....SS.W.SS..", ".S.WGWW....S.SSS.WW..S...W....", "SWW.G.GW.SGG....WWGG....GS..S.", "GWWGGSW.W..S..WW.G...GSSS.GS.G", "G.GWS..GG.G..G.SW.W..W.G.WS.G.", "....G...GW.SS.SWWGS..G.GW.SWWG", "....W.WWG.W..WS.G..S.W..S..GS.", "....G..G.G.GS.W.S.SS...SSWSW..", "...GS..GG.W..W.G.WGG.G...W..GS", "..G...W..G.S...G......SG..W..S", "......S..WGGS.WSG.WSS.SWG..G.G", "G......S...WS..G.GWGSGS..G....", ".S.GW.WSG.S...S...S.S.S..SG.G.", "WG..SSS....GS.G.S..WG..G.G.GW.", ".G.WW.WWGGGW..GWWG...S.W..WGW.", ".SSGGW.W..W.S.G..WWW..WW....SG", ".GS..G....WW..W..WW.S..S..SS.."};
    int K = 65;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> field = {"SG..G.GWGSSSS.S..WG.G...S.GW.W", ".W.WW.SW....GSWW.SG.GWSGW....G", "...SG..W..........SGWW.S...S..", ".W...SSG......SGSSG......G..S.", ".WS..S.S.S.GG.WS.W..WWSWGSG...", "GG..........S.GW...WWS.G..G.W.", ".G...WSW..SS.WG.WGS.WW..S.....", "..G....SGWWGW....S...WWGGSSS..", "W.SW..WS...S.GGWW.WG..WWGGG.W.", "S..S..SW.W.W..W.G..SS...WG....", "G..WG.W..GG..S...WW..S...S..GW", ".S.S.W...SG.WSGWGS....W.S.SWS.", "SG..WGS..S...G.GW..WGG..SW..WG", "WS.GG..G..SW..G..G.SGSS.GWW.WS", ".......W.WG...WSWSW..S.WS.WWG.", "W.G...SWGWS.SWG.S.S..WS.....S.", "..G..G..GSSG.S..WW.W.W....GG.G", "SSGWSSW......WSWS.G..GWGS..GSW", ".G.G.S....S.S..SW.......S..W..", "G..GW.GS..W.SS..W...W..W.S...W", ".WGWS..GSWS..W.WSGS.SS.WSSG..G", "GS.G..S.W.G..W..SG..GS.W.GSW.W", "S..SG..WWW.WW..GW.S....WG...G.", "S.SGG...SGWWW..G.WGGGW.GG..G..", "S.S.S.S..S.S.SW.S...G.W....S.W", ".SW....W.S.GGW..G..S.WWS....G.", "GWSS..WW.WW.S...S.SS.SW.G.SWGW", "G.S...S......SSG.S.WSS...GG...", ".SW...WW.S..........GSGS.W.G..", "WGSWGG.SSW...W.W..WWSG..S...W."};
    int K = 89;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> field = {"WSSW.SG..WW......WS...GGWGSWWW", "..WWS..WGG.GGSGSW.....SSWSS...", "W.WW..W..G..G....SWGS..W..G.WG", "S.G.WG.GWWSWSSGS.S..S.W.SGGSG.", "WGS.....S.G.W.SGGWWWWGGWSG...G", "..GWW.WGSSSGSWW.SWSSGGW..G..GG", ".G.W..GSW...SW.WW...SSSW..W...", "S...GGG.SGSGW.S.G.GW..WGWSSWGW", "GW.WGWGGGWGS.WW...WG...S.SS.W.", "GG.G...WG...SW.SG..S..W.GW.WGS", "WGW..WSS.W...WGGW.WGGG...GGSS.", "GW..WSS.WWGG..SS..GWWS.G.S.W.G", "GS..GW.W.G..GW..G.SS.WWSSGSS.G", "SS.S.W.GG.WWWS.W...SS.SSGWGGS.", ".GW.S..GSS...S....WW.S...S.GG.", "GSWSWGGG.WWGWS..W..GWG.GGGW.WS", ".S.G.SS..WWW.WW.SSGG.S.GSGW.SS", "..SSSW..W..W...G..S.S.SSS.W.GG", "SGSS.S.WSWGG.SG.W.W..G...W..W.", "WWWS.SWSS..GG...SS.W.W.S..GWSW", "S.W.SGW.GS.W..WSSSSSGSWWSG..WG", "GWGWWSWGSGSGW.SWWSGS.W.W..GWWW", ".WS....W.GGW...GSW..G.W..S.S..", "...G...GS..SG.G....GGWGS...W.W", "SSGG.GG.W..W...W...W.G....WGSG", "GS...WSGSW.GW.SSSS..SWSWSSWGW.", "SS.SSSWG.W.SWW.WGGSSWWSWSWS..G", "WW.W.GW...G..G.W...SS.SS..WS.S", "GW.WWWW.WSSS.S..GSWW.SSSSWS.S.", ".SG.W..S.SG.SS.S.W....WS.SGWW."};
    int K = 67;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> field = {"G..SGSGW.S.W.G..SS.G...GW.WSWG", ".WSS.W.W.W...W..WS.GSG.W..G.WW", "WG.WG..GWS.S.SWG.SWWS.W..SWSWG", "S.S.GSG..GWGSG.W.G....GGGG..GG", "SSSG.G.G.GGG..W.GSW...WS..S.WG", "SW.SGGSGGG..WGSW....S.SWWW...W", ".GGGGS.G.....G.W.G.WSS..GW..WG", "..S..SWWGS...SG.G.WG.G.WWWS..G", ".GWW.SWSSG...WWW..GSG.WWGW.SGW", "GGWWWWSSW.SSW.G.WGWWGG...GGWS.", "WS.W..GS.WS.W..GW.SG..WWSS.WSS", "S.W.SSS.WGS..W..S...GSWG..W...", "GW.SWWW.WW.G.SSG...W..WG.S..GS", "W.SG..W...WS...GW..W.G.G.SG.SS", "SSSGGS.SSS..W.SS..G.SG.WWG.WSW", ".W.S..S.G.G.S.SS...W.SG.G....W", ".WWSS.SSSG..W..G.SSG..W.WSWGW.", "....W.W..WS..SS.G.SWWWSSWWWS.W", "G.W.SSS..GG.WSSW...WG.W..GS.SW", "GW..S..WGSS..GWWG.WGWGW..S.SSW", "GWS...W..S.........G..WS.GWSGW", ".SSW...G.SSGS..GW..W.WW.GW.G.S", "S.W.GWSWSWGWGS..W.SGGWWWSW..G.", "GSSS.WG...SGSSG.G.W.SGSSWGSS..", ".SW..WG..SSSGW..S...W.W.S.S...", "...W.S.GGSSSWS..WWW..G.GS.GSSW", "GGS.G.S.GW..S.W.W.SWS..W.WGS..", "G..GG....GSWW........GW.WSWWWW", "..WGS..GSS.GGSGGGG.SWG.W...S..", "GG.W.WGGW..S.G...G.G.WW..W.G.."};
    int K = 197;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> field = {"GW.G.WGSSSGGGGG.SSG.SG...SG...", "S.S.GWSWSG..G.WGW.WSS..SGGSGWW", "GWWSG.GS.SG.W.GWSWWGSSGG.S.G.S", "..WWSWSWW.WWWWSSG.GGGW.GGSW.SW", "S.W.SWSGSWGW.G.WSSGWW.GWWGSS..", ".S..SGW.S.GWS.S.WGS.SS.GWGSG.W", "..GWWGSGWG.S...GSW..S.GW.GS..S", "S.G..WSSSS..GWWSWSSW.S..SGSG.S", "S..G.SGGS.S.WWWSGSSSWGGWW.WWGW", "GGWSW.SSW.SS.W.GSW.WGSW..WSGSG", ".W.GGG.SGSGW..S.GWGG.S.SSWWSSG", "SGGGSW.GSGWGWWW.WSGW.SGSWGWG.G", "SWWSSW.W.SG.S..WS...SSSWW..SW.", "SSSSSSW..WSWSWSW.WGWSSW.SGW.GS", "SGGWSG..GSSWSS....GW.WWGGWW.SG", "WGGGSWWGW.SS.GWWG..WW..S.WS.WW", "GWSGSGGGGW.W..WGS.WGGS..WGWWSG", ".W.WGSWG.GWGS.S..WGWWWG.G.SS..", "WGWG.GGS.SG.GG..WGSG.SW.SWWSG.", "W.SWS.GW.W.W.SGGW.WSGW.SG..WSS", ".SWSWW..WWW....G.G.GS.GSS.....", "G..W.W.SSSGWSGWGWGGWGWSWG.WGWG", "W..WW....WGGW.S.SGS..SWWGGSGS.", "GGSSWWSW.WSSG.WWW.S.S.W..WS.SG", "WSWSSS..WSGWWGGSGS.GWSGSGS.SS.", ".S.WGGSGSSSGS..SSWWSGGWWGGG.GS", "GSGW.WSSS.WWW.GS...GG.S..WGWWS", ".WG.GG.WGSGSWW.GG.SWWSG.WS.GW.", "WSWGSS..GW.WWSWSWGSSWSGGWWSWW.", ".WWW.SWS.WSSGS.S.SSWSS..GSSGWS"};
    int K = 73;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> field = {"..GGGGGGG.GW.S....SSGGWSGWGSWW", ".SSWGSGW.SWGWGSSW..GWW.GWSS.WW", "SSS.WSGGSWGSSSSS.G.G.W.WGSSSS.", "..W.WSWS.W.GWW.S..SWGGSWSWGWSG", ".GS.WG..SGG..W.WW.SS.GSSW..W.W", "WWWSSWG.SS..W...WWGG.WWG.GSSGS", "GSGGSGGGGGSSGGWW.W.SG..W.W.SGS", "SGWG..WS.SWWSG.G.W.SS.SGGSWWSG", "WWS.W...S.SG.G.GWGW.SGSGGWWW.S", "WW.SSGS.WS.GGWSGSSSGS..GSSSWSG", "WGWGS.GWGGGWSWGSWGSSWG..WGWGWG", "SSSWWS.GSWWWGW.W.W.GWGWSSSS.SG", "G..W.G.S.SWG.WSGGWGWW.WGWWGWW.", "GSG.SWWW..GWW.GW..W.WWSGGSGW..", "GS..GW.SGWGWGWGGSGS.S.S.S...WG", "SG.GWWS.WWGWSGSSGWWGW.W.WWSG.G", ".G.S.S.G.W..WGWW.WW.GSW.W..GGG", ".W..GGG.WWSGWSWGWWWW.G..GWGSG.", "SSS..WWWSWW.S.S...SWW.SW.GSGS.", "GGSS...GGSSWSGW.GWWSGWW.W.W.SW", "SGGGSSGS..SGSGSG.S..GSS.GWW..G", "WW.SWWWGWW..WG.GSSSGSWWWWWWSWG", "WS.WWGGW.G....SG.SG.GWSSWG..SG", "SSS.SSSSSGWGG.SWSWWWW.GWSSWSGG", "S.SW.G..WSSW.S...WWSS.SSGGWWGW", "WGSSGWWS.WSSWSGGSWGGSG..S..GGW", "SGSSGWS.WGSG.S.GWGGSWW.S....SS", "WS.W..GGGGWWGSWW.SS.WSSWWSW.WG", "G.GWGW..WGWW.GGWSWGS.GS.SG..GG", "GSGS.SG.G..GWGSWG.WG.WWWSSSGGG"};
    int K = 13;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> field = {"WGGWSSSWSSSWWSGGGWSWGGSGSSGGSS", "SWWWWWSGGSWGSSWGSWSSSGSSWSWGWW", "WWWWSGWGSSGGSSSSSWGSWGSWWSGWWG", "GSGSSGWWGWGSSGSWGSGWGGWGGSGGSS", "WWGSWSGSSGGSWWGWSWGGWGWSGGGSGG", "SSWGWSGWSGGWGGSWSGWSSWSSGGGSSW", "SWWWSGGSWWSWWWGWGGGWGSGSWWSGWG", "GWSGSSSWWGWWGWGWGSWWGGSGGGWWWS", "SGWWGWSGGSWGSGSGWSWSSSGWGWGSGG", "GGWWWGSSWGSWWWGWWWSGWSSSSWWGSS", "GGWSGGSGSSSSWGWGSGGSGSWSGWWWGG", "SGSSSGGSWGGGWGWGWWWWWGGWSSSGGG", "SGGGWGGGWGGGWGWSSGGSGSWSSSSGWG", "GGSGSGWSWWGSGSSWSWGGGWSSSWWWGS", "GWGSGSWWSGSWWWWGSSGSSGSWGWWSGW", "SWWWWWGWGSGGWGSSGWSSSSWGSWWSSG", "GGGSWSGWWWSWWSGWWSSGWSSSSGWSGW", "GWWWSGSGSWGGSSSSWSGWSWSSGGGGWG", "WGGWGSWSGWSWGGGGSWGWSWSGSWWGSG", "GSSGWGSWSWSSSWWSGSGSWGWGWWWGWS", "WSGGWWSSSWGWSGSWWWWSGSWGSSGSWS", "GGGWGWGGSGSGSWSGWWSSWSWGSWSGGW", "SSWSGSGSWWWGSGGWWGGWSGWSSGSGWG", "WWGWWSSWSSSSWWGSSWGWGWGSGSGWSW", "GWWGGSWGGWWSSSSSSSGGGWGSWGGSGS", "WSWGSGGGSWGGWGSGGGSSWWWSWSWSSG", "SGGGSWGSSWSWWSWSWSGSGSSGWGSWWG", "WGWGGGSGSSWGGWWSSWWGSSSWSSSWSS", "GGWSWSWGGSWWSWWSWWWWWSWWWWGGWG", "GWGGGGSWGSSWGSSWGGGGGSWWGWGSSG"};
    int K = 79;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> field = {"....G.SG.SS...G......GWW..SWW.", "W...WS...G....SSS.SSG.SS.W.W.S", ".W.GGG.GSGW.W...GGS.........WG", "S.W...S.W.WG....WG.SWW......G.", "..WGW.S..SWS....W..W.W..W.....", "...S..SG.W.WW...SG............", "G..GS.W.......W.SSGG...S..W.S.", "S.W...GW.....G....G.GW.G.WS.SG", ".G...WS...WGGWGGSGG..G.GSW.W.S", "SS.SWW.GS.S...S.W.WS.G...WSWSS", "GSGG.....W.G.G..S....G...S.WGG", "......W..GWWW..W....S..GSSSWWS", "........SGWW....SSG.SSW.GGG.SG", ".W...G.G.GS.SWG..G.W..S...GS..", "GG.WGS.W.G..G.SG..S..SW..WS..G", "..WS......W.W.W..S.S.SW...S...", "GG.SSS.S.G.SGG.GG..W.SS...WW..", "G.W....GW.....GGWW.G.SWWWW.W..", "S...W..G..S.SS..S.G..G..W...GG", "G...G......W.SGW.W.W..........", "....SGG.WG..SWSWWG.S......GW.G", "..GGW.WSGGW..W.SGG..GGGSSW.W.W", ".WWG...WW.G.WSSG.GSSGGG..SW..W", "SW.G......S.GS.S..SSS..G.GGWW.", "..W....S.SGG.GS.G.S.GGS.G.WSWW", "WG.........GG.S...W...G.GS....", ".......WG.S...GS..W..W..SWS.WW", "..W....G......GS.........W....", "..S....G.S.GSG......W.W..WW...", "GG..G.G...SSS.SGG...GS.....G.."};
    int K = 14;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> field = {".GW..GGSS.S.G.W.G....G..G.S..G", "W...WS....S.S..W.G...W.WG.W..G", "G...WS.G........W.S...S..W....", "G......S..WS.WGW...W..GW..W..G", ".....WWG.G.......GS...WW......", "...WSW.SSG.W...WWWG..G.SS....W", "......SG..SWG....G..SW.WW..W..", "G..G.S.GW...SG..GS.W.S..WGW..W", "GG.SS.WS..W..S.S.S.GG.WGWG.SS.", ".S.WW.....W...W.WG.SS......SGS", ".S..GWS.G....WW...S..S.WWW...W", "S.....SG..SSW.W....W.WWSS.S..S", "G.S..G.....SW....WG...W.G.WW..", ".WG...GSGW.W....G....W..G...SG", "W...GG..SSGSGWW..GG...WW..W..G", ".S..WS....S..W....SS.WGS..WG.G", "....G...G.GSG...WG..W...G...WS", ".WG.SGGSG.W..SGSSSS...S..W...S", "GS.W....GSS.SS.W..G..GWWS..S.W", ".S.......S......S...........S.", "S....G..WG.W..GSWG.WGSS..WGGS.", "...S.....G...S..G....S.S..W..W", "GS.S.....S..GS.GS.GGSGG..G....", "...SGG.WW.WGS....SG.WS.S...W..", "......SS.S.G..GSG...GS.SGG....", "...GS..G...WG.S.....SSGWS...SW", "S........G.W..S.W.W.......S.S.", "G.....W.......W.....S..SWG....", "..S...W....W.SG...WGW.G.W...W.", "WW..G.....W....GGS...W....W..S"};
    int K = 10;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> field = {"....G.W.WS....W...G.W.G....W.W", "...GGG....S...W...SWWG........", ".GWG..SW.G...G.WSW.G.SS......W", "G.SG......SGS....G.SG..SG.WW..", ".S..G.W.....GW...WG......S....", "WS...G.W...W.W....G.....W....W", "GG.GG.WW...W...W.GWS.WSGG..WW.", "G.S.........W....S..GGS..G..GW", "....W......GW.W.S.GGG...G..S..", ".S..S.....SW..W.WSGS.G.S.GG...", "S.SW.S..S.G..W.S.GS..GW.GS..WW", ".GWW..W..GG....GGW..G.WSS.....", "...S.WG..G.GW.S.GG.GG.....WWW.", "..S.S..GS.W.GGGG.SS..G.GS.....", "...S.......G.SGWGSS..SG.W...WS", "...SGG..GSG..S.S.W..S.S..W.S..", "G.SS.SSS..S.W.GG..S.GW.S.GSSS.", ".SSG.WW..GWS..G.....W.G.GGG..S", ".SS....W....GSG..G.....S..WG..", "..G...WW....WG.G....SSWW.W....", ".G.G....W..G.G.W..WG..SGW.....", "S....G......S...W...S...W..W..", ".S..G.......S....W.G...GW.W.S.", "S.........WSW...GS.G.GS...SW.G", "..S..W....WG...G.GSGSW.....G..", "..GS....W.S..S..GG..G.W.W.S..W", "...SSW..S..S.WS.GGSWW.....G...", "S.G.....SGS...WS.....SS..G..G.", ".S.W....SS....S..S..S.....SG..", "..WS...SGGG....S..G.GGS..G..GW"};
    int K = 15;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> field = {"...W.G.W.S...S..WSGS.WW...SW.S", "....GW..SW.W.W....G........G.W", "...GG..G......WS..WS..W.....G.", ".WSWSSG..W......G..WSS......G.", ".GGG.SW..........GS.S.GW.WWW.W", "GSS.WG..WW.........S..S.......", "GG.........W......SW...S...W..", "GGSW.W..W.S.....WS.GW...GS....", ".SG...WW...GG.WW..S.GS..W.G...", ".GSS.GWG...GG.WWSS..W.G.S..G.S", "SG..S.SSW.S.SS.GWW.....GW...S.", "W.....GS...S..GGWWWW....S.....", "GG..GW.GGWSW.SG.W....WWW.W..W.", ".SGG...WW..WS.G.........W...G.", "W..G....G...SG.WWW.W...WSG.GW.", "S.G..WW..S.GG.W.......S..GS...", ".SW..W....SS.S.....SW..G..S...", ".........W..S.....S.....WGGW..", ".W..W......G.GW.WWW....W.W.S..", ".W........S..SS.SSS...WW....G.", "..W.WW..SS..SGSSS..G..WW.....G", ".......S.....SGS.SGWG.WG......", ".....WW..W..G.GGWS.S.G..SW...W", "....W.W..G.W.SG.S...S.SSWW...W", "G.W..W.WSWS....S....SG.WW...W.", "SG..W.WS.G..W.S.SW.S.W....W.W.", ".GSW..W..S...WW.GSS.GW...W....", "....G..W..S...WS.S.G...W......", "...S.W.....S...W.SG.G.........", "S.G.......SW.....W.S.G.W..WW.."};
    int K = 19;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> field = {"XG.X.X.XW.WXX..SSXS.SWSG.W..G.", ".W.XWXWX.SX.XX.WGSW..G.GX..WXS", "W.S....WX.SX..X.SGS...SGW.XX.W", "..WXX.XX.X.SW..GS..XWWSGSX....", "X.XS...W.W..SX.S.....XWXGG.XXW", "WWXWSXXWX.XWWGG..X.XX....GG..X", "X.XX.G.GW.W.SXG...X...XXXWGX.W", "XW...SXSW..S..GXXXXX.XW.W..SW.", "SX..XWGWXWG..SXW.S.WXXWW..X.S.", "GSXXW.SW.GWXS.W.S..W.WXGGXWGXG", "XWSWWS.XGXSG.WWWW..S.XXXWX.W..", "X..GG..X.SWW..SWS.X.X.XSGWS..X", "W.SXS...XWX.GGG..GXGX.SGX..S.W", "X.S.GX.XW.S.SGGGX.GX.SGS..SXWG", ".....S..X.XSG.XSG.WS.GSXGG.GW.", ".SW...SGXWGG..SS.SG.SG.SWWWSS.", ".XW..X..S.SGWGG..XWG..G.G.SXG.", ".WW.W..S..XGG.GXXX..SS..XSXS.S", "WWX.WWGS.XWXSGGS...WWX..WSG...", "XW.W..W..X.X.SGGG.XX..WXX.SS..", "XS.G...W.X..XX.SGSX.X....GWSSX", "X.S.X..X..XWW.GGXGS...GWGGXX.S", ".W..X..X..W..GG.S.W.W...S.SGW.", "SSX.W.W.WW...XWXW...W.XSXS..SW", ".GS.....W.XXGXXGXWGX..G.GXXS.G", "XXWS.W..XWXGXSS..GS..S.S.GS.SG", "....S.X.WXWW.SXGG.GSWXWSGWGGSG", "...W.SXXS.W...SXXG..GXS.XXGSSX", "....WGSS.G.XXX.G..S..S.XW.WGXX", ".XW.GWGWX.GX.XGXXWXGS...XX.XXX"};
    int K = 16;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> field = {".X....WWGG.W......WXWWX.GXS..W", ".XWX..XGSW...WWXX.X.X....GWSX.", "W.X.XW.G.X..XXX.X.WWX...GX..GX", "........GW.......X....XWXX.S.G", ".X..XXX.SX..XXW..W...X.SG.S..S", ".XW..WXSG.S...X....W..SX.S..GX", "W..W..S.GSSG.X.X..XW.SGS..WG..", "WX.WGG.X.S.XSXWX...GGS.WW..SX.", "...G.XS..W.XXSS...SS.X.XG.G..S", ".XG.XWWGXSX.GGXS.GGXX..X.SXWSG", ".G.GX.X.SG.SWW..SGGXWXG..W.S.G", ".S..G.W.SXS.GW..XS.S.X.G.SGWGS", "SG.S.X.GX.XS..XXX..XS..GSW.GW.", "S.S...XG..GXXXW.WWWGX.XWGXGW.X", "...SWWG.WS....X.W.SGXXW.WS..XX", "..W.WS.GX.SW.WXX..XGGW....X..X", "W..GS...GGX.W.W.....S..X.X.XXW", "XSG.X.G.GG...XX.W..X.SSW......", "SSSWSSXSGSW.W.WXXWXXW..SX.X.XG", ".SSSXG.SS..XX........GSXSX..SX", "..SXS.WXGSG.SW...WWXS..GS.WGWX", ".XW.WGWG.SGW.S.XX.WG...XXSXX..", "XW.XX.W.G..XX.G.WW..XXXWS.....", "...WWWWXXG.....GS.....X.S...X.", "..WWW...W.SW.XXW.GWW.XXXXWX...", "W.X..XWWX.G...X.XXSWX..X.S..XS", ".XW.XW..G..G......XGG.W.W...G.", "XW.W.X..W..WGSXX.X...G.W..XGW.", "....X.WXGS..XXS..X..GG.SX.G...", "...W..XSGX..GG.W.W.SSX..G.GX.."};
    int K = 18;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> field = {"XX..GXXXG...X.GSGXSWXWW.XXGG.X", ".X.XSW...GGWWWXG.GX.XXX..XWXS.", "XXXGXW.X..SG.X.GSXSWWWX.WXW.WS", "XXSX.WXW.SSXW.GWWWWXXX..XXX.XX", "WSX.....WSGX.SSW..X.XW.W.XX..S", "XW.X..XX.SXSSGXXX.X..XXXW.W.WW", "W.XWW.WW..X.GSSX.WW.XW.XX.X.XX", "WXXXXXXWXWSWW.GG.GWXWW.WX.XXW.", ".XWG.WX.GS.XX.S.GGW.WXWXWWXW.G", ".WG.XWXG....XX.SGS.X.SSSXWW..X", "SSX..W.XS..XX.WSSGS.SSSWXXGS.X", "GWXXS.WXXGGXX..WWGSSG.WXXG.SSX", "SWWG.SXXW.SGWW..XGSG..SGG.X.WS", "XXWWSXSXSSXWX.XXG.XS.GGGX.X...", "X.SSGGWSXSG.W.WWW.GSXSGXX.XGXS", "XGXGXSSSS.XSXWX..X..GGGG.WXXGX", "GXG.XWG.XGWXSXWXX.XX.XSGW....G", "XSX...XXWXXXXSWXXXWXXS..X.XXX.", "X.S.WWXG...XXX.XX.XW.SWX.X.X.X", ".WGXG..S.XW.W...XXW..GX.XGX...", "GXWGX.WWGSXWXXW..XX.XXS.GW...X", "XWW.XX..SXX...WXX..G.XGGXW...W", "..X..XX.GGWW..XX....SSG.XX..X.", ".X.XW.XG.WW.XWWW....GSX.WXXW..", "G.XWWWXW.XWSWX.WX.GGGXS..XX.W.", "SSXGX.X.WS.XGWSS.SGXXSWS.W..WS", "XGSSXWXX.S.X.S.GGWWXX.SG.X.WXX", "WWSSS...GSXWG.S.SXXX.XW.GX.WX.", "W.XXWGXSGWXWXGXSXX..WXWXXGXG..", ".XXWX.SSWSXS.WXWXWXXXSWW..W.XW"};
    int K = 19;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> field = {".SSSGSX..XGGS..WXWXS.XWGGX.SGW", "GSG..S.X..SXSSS.XSSXXXXXGWSXXG", "XSW..WSXWWWXGSXSSSGS.X.GWGGX.W", "WGXX.X.GXW...WXXSGSSGXGWS..S..", "S.G..WGSWWS..S.WSGSGGGXXX...GW", "WGXGXGSXXS.SSS.XG.SS..GXSXWG..", "..GSS..XX.XWSXSG.SWW.XXGSG.XWX", ".SSSGGS..W.GSSWGGW.W.X.SX.X.XG", "GSSXSGGGWSSGSX..GWXGXXSSG...WX", "SGWXXSWSW.GXXGXX.GW.SW.SWSSWX.", "SX..GGSXGGX.GX.XWX...GSX.WSG..", "XG..WGS.W.GGG.XSG.XXGS.XX.XSX.", ".WSGWSGG.X.GXSGWSGS.GGG...GXWS", "XGX..XGXSXG.XGXSXG.SG..GXGSGXX", "SGX...GS.SSGG..GG.S.SWXGGG....", "S.WXXGXGSS.GS.GX.GG.W.G.GGSXXW", "XX.WSWS.GXSSGGXX.X.SWSXXWG.SG.", "X.XXSGXGX..GS.SXWGG.S...X.GSS.", "...GGGSGW.X.G.GXG.GSGSWX.GGW.S", "SWGWGGS.XX.S.SGSX..SXGSWGSSSSG", "XG.G.XGGSXWX.GGXX.GGW..GGG.SXG", "GWSWXXXSXSG.GXGGX.SXXXGXSX..GS", "X.G.X.WSWWGS...SSXGSWXXGSX.XG.", "X.XGXX.SGSXGX..WXSXSSXSXXS.G.X", "XXXSSXSGWXGS.WGGWGW.SGX..G.GGX", "XXGX.SWGSSXGGGG.X.SS.SX.X.GS.W", "GG.XX.GGXX.G.WG....SSXSX.SGX..", "XG.SSGSS....S.GGXWSGWGXSSSXXXX", "XWGX.GXGG.WGXS.G.SGXXGXGGXG..X", "X..XGXXWSSS.X.GWG..SSW.XSSXSWS"};
    int K = 6;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> field = {"WGXGS.X..SSXWW...GGWWWX..W.W.G", "G.XXSG.W.WW.XWXXXXGGXX.X.WWWG.", "WXXWGXXXXW.X..X.XWS.WXXWXWXXWX", ".XXXW.X..WWW.XWXXWS.XWXWXW....", "..W..WWXXGXG..WXWXXWGWWXW...XX", "SW.X..GWSXSGG.GSW.S..GXWS.XXX.", "..W.XGWS.WSSSSGXXX.XWGW.XSWWG.", ".WGXSS.WXXXSGSGSWXWX..S.XSWS.G", "X.WW..SWWX..G.GXSX..GSX.SXXWG.", "WW.WXW.XSXWSXGWWWG.SG.SGX..X.G", "XXX.XXWSXXWXS.XSGX.S.SXSG.XXWX", "X.WWWW.SWXXWXWW.GSSX.XSXXG.X.X", "SWXW..GSXXW.WWWX.SXXXGSSS.SX..", "XWGXW.WGS.SXXXXWSXXXSX.SXSW.XG", "WX.SXGXXGGWWSXWWG.XXXGX.GW.WSS", "..S.XSSXG.S.XS.GGGX.WXSW.XSXGX", ".S.WWGGG.SW.G.WWSSS.XS.X..XSGG", "SX....WSS.WSSSW..S.GS.W.WXG.XG", "XGWXWW.GG.GGG.XXWGWX.W.W.SW.XW", "XS.X.XXXGGSWX...W.G.X.WW.XX.XW", "GXS..W.GSXW.WXWX.XW...WWXW..GX", "W.WS.XSGXXXXS.W.XXG.W.XG..XSGG", "X...WSW..WX.WW...GXWGXWXSXSG.W", "X.WG...WWWW.XSX.WWXGXWS.XGWW.X", "XWXX..WXWWG.GXG.S.GX.XXGWXSWW.", "XW..XWXWX.WG.GXSGW.XXW.XWGXXX.", "XXGXXXWXXXGXS..G..XX..XXXWSWX.", "WGWWXWWWXG.SW.WXGS...XW.XS..WX", "X.XXW.W.XW.X.X.WXWW.X..SGX.XS.", "W.W..X.WXSX.W.W.WWSSWXSWWXWXS."};
    int K = 10;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> field = {"G.S...W.S.W........SX....W.W.X", "WX.SGX.XWWW..X.X.SG..W.W.G.WWX", "....XG..WSX.X..WS....WX.XW.X.W", "X.W.G....GS.WW..XW......WWXWW.", "W..WWWW.GXWS..X..GG..W..WWXW.X", "..W..WS.SS.SGWWWGGSSW.WWSWGWS.", "W..XW..S..GWGWWSGGG........S.G", "..SSXWXXW.G...W.SW.....WW.GWSG", "WG...XXX.WWG.SG..S...WWX..G..G", "WXSSW..W.SGGXWW.W.SWX....WW.GG", ".....WWSSSSSSG.WX.W.WX.XWGG.S.", "X.XW....G.SSSXW.WW.WS...SW.SXW", "X..W.WW.SG.G.G.X...G.SSGSW.WWW", "....X.GSS.SGGX..W.S.GGGG.GW.G.", ".W.....SWGS.X..WWWGGG.SWSWWSGG", "...WGWS..SXGX...WSXSS.SGW.WG.S", "GWWSGGWSS..WSW.WG..G...XGG.WX.", "WS.G.W.GWGW.WWSWG......X..S...", "GGS...S...S.WW.GW.X..XWGWGWW.W", "S.G.GG.......X.GS.G.W.G.WS.W..", "W.XS.G.W.WG..W.SSS.SW.W.SG.SW.", "..WW..SS.W.WWXG.X..W.X.W.XS...", "W....SSG.SW.....WWWSXX.WGSWGW.", "..G...SSS..W....GW.SSWG.XSG.W.", "XWGS...S..SS.W.G..X.SX.GW.WGG.", ".S.SS.G.W.WGSWG.....WWW.WWX..G", "G.SWGSG.W.W.WWWS.W...W.W..W.W.", "WWXX.GW.XWW.WW..WWWX.WX..SX.S.", "..XX.W.WWSS.GS.G.....XW...G.GW", "WWWX.WW..S.SGW.WGXW..XS.XW.GX."};
    int K = 12;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> field = {"...WWXXS.X...SWX.WWG.GX.XSS.S.", "..X..X..S...S.X....WG..XGSW..G", ".W....X..GG.XWX..WW.GGWXS...WS", ".....WG.S...S..W..XS.GGWW.W.X.", ".X.X.SGS.GG.GW...GW.SS..X.XW..", "S..WGGGWX..S.WW.GGGG.GG.WW....", "WG.G.S..XX..XWGXW..G.XSSWGW.X.", "X.S.SGGW.XX....S..SS.G..W.GW.W", "....WXW.WWX...XSGS...XGX..SG.G", ".X..G.GW..XWW.G..WGWXW.S.SSGGS", ".X.S.GXGWX.WGG.SWSW..XX.GX.SSS", ".SSWGSGS.....GXGS...W..G.SS.GW", "SX..WSG.GW.WS...GGWX..WWXWXG..", ".SW.X.GWSSWXW..GWG.XGW.XWX..GX", "G.WX...SXSGXWSS.G.G.GW..WS..GG", "X.XXSGSW.S..G....GG.SXG.GXSS..", "....S.GW.GG..WX...GSSXSWSXGXS.", "..X..GGSGGXGSXXGWSGX.X.GW....S", "S.W..XSSSX....S.G.GSX.W.WXW.SX", "SS..WGGGXGXWG.WSWG.GG...WG.WXG", "GGS.WGXSXWS.WWGXSSGG.XWW.SGX.X", "..GWXS.WW.SWWW..XSSWW......G..", "G.GXSWXS.S.G..W...GGGX..XGSX.W", "SGXS.X.XSGS.X.....XSGG.XG.GSWS", ".W..W..W.XXG..W...SSSSSGW.W.SX", ".W..XX.X.XW.G..W.XX.S..W.XW.WG", ".XW.XW.X.WGWX..WXW.GW.X...W..G", "X.WX.W.W.GXSX....GG.......XX..", ".G.GXGWWG.S.SWW.S.GS.XX.X.X..S", "..SGS.GWGSG.WGS.SX.GGXXWW...SG"};
    int K = 22;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> field = {".X.W.X...S.WXXWS.G.SXGXX...S..", ".X.WXW.WS......W..SGGS.W..WWX.", ".XWXX.WWX.X...XX.WGSGX.S..W..W", "W......WW...W.W..S.G..X.XX.GWW", "WWX...XW..WWG.W..S......X...GG", "..XW...SXWWG.WXWGSS..WW..XWXX.", "G....WXGSWGW......SS.SSWWXW.WS", "WS.W..G...XS.WW.X..WGSGGGXX..S", "W.S..S....GSGSW..X.S.G.....GG.", "WW.W.WWW.W.SGSWW.W..GGGWW.G.WG", "WX..SS...WWX.W.X.WWSG.S.WXW.W.", "XW.SGXSX.X.SG.WX..WW.G..GGG.X.", "..G.W..SW.S..SS...WGS....SW..W", "WW....XX.GX..W.G.XG.XGGXXX.WWW", "GSSG.W.W.X...XXWGGXW...G...S..", "GGGG...WXW..W.SWW.XXW..GGXG.W.", ".S.GGXW....XSW.XSWWX.WWXSWG.X.", ".WW.GGW.XX.SXW.S..XSWXWG..XXWX", "..WWWS.XWXSW..W.SWG.X..WG.WX.S", "SW..GSS.SXSWG..W.SG..W.S.WW.SW", "X....WGGWGX.GSX.GS.....WGGWS.G", "G.WXXG.W.GWGS..GSWW.XW.G.GSWG.", ".W..GSSXGXGGW.SG.W...SG.GG.X.S", "XW.WSGGWW.W.G.S.WW..G..GWWW.W.", "SX.GG...W..XGSGWW..SSWXWWX.X.X", ".GG.SW.X....XG..WWWS..XW.W.X..", "XW..WSX.W......W.WWW..X......X", "XSWWXSSW..WWW.WW.XW.WWW.WXWWWW", "GS....S.W....XWS.X.XWWW.WW..XX", "X.G..G.XX..WX..SG..WX.W..G..WW"};
    int K = 30;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> field = {"SXSWWG...WX.WWWW.W.XW..W.SSG..", "WX.WS.SWWW.X.W.W.XXW..WWG..SWW", ".XG..S.SWSSWW.WWSSWWX.WX...W..", ".S.XWG..W..G.....SGWSWW...X.WW", "G.X.SW....WW.WXX.XSS..X..WXW.W", ".W.X.S.XG.G...XW.WWSGXX.W..XGX", ".W.G.W.G.G...XX..WX.SGW...WGW.", ".XG.GGG.XGSS.....WXXW..W.X.G.W", "SWW...GSG.WG.W.XWX.WXWS.G.G.WW", "WW.GGSSX....SS.W....WXSS.S.XW.", ".SGXSS..SSWG..SWW..X..WGW.GS..", "SS..GG..X.GX.X...WW..WS..XSSGW", "XSSXXSSWWWXS.W..SXW..G.W.WSW..", "SX...S.GG.W.S.W.SG.GSXWG.SX.G.", "WSXXGWXSSG..W.W.X.S...GSX.SS.S", "..S.X.SGSGXWW.G.GSWGSGG..WWW.W", "X.....GSSGSWXXWSXS..GS.X.WSSX.", ".G...SGS.G.WW.WWSX.G.XSWXXSXG.", "SWG.SS.SX.GX....W.SW.GGX..SGWX", "SSG.S.G..S.SS..WSGSGW.GSGS.WX.", "SSXSGGWW...X.GWW.SGSWWW..SX.W.", "S..W.SSXW.XWSWWW.WG...X..WX.SS", ".XX..W...X..G..X.XW...X.WWWS..", "G.WX.WS....S.XW.WS...X..XG.XWS", ".XWX..SG.XSXW..GW.SW..W..WGG.X", ".XWW.X.GGXSW.WG..G..WXW.W.W..W", "W....WGX.G...XWG.XWG.XX.G..X.W", "WX.SWXXW.G.WWW.XWSS.GGXSXS...W", ".WS.X.X.X.SXX.S..WSG.SGWX.GW..", ".XXW..XW.G..X.W.W.XXS.S...WWW."};
    int K = 150;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> field = {".G..W.X...W...X.W.XG.GSS.W...W", "G.SG..W..WG.WWX..W..WG.SW..W.W", "..WSS.W....GX.W.WX.WS..GSW.WWW", "....SG.S.WGWW..WW.G.W.XXGWW..X", "W.X..GGXSXWS..SXWGSGW.XXXGSW..", "XXWXGG..WGGSGG.G.W.GXW..W.XGWS", ".XXWWSW...S.XWS.W..XG.X.W..XS.", "...WWW...WW.W.XS...G.W.W...XWS", "..X.S.W..W..WXXWW.WGX.X.W..WXW", "X.WSX....WS...GSX.WGGX.W..W.XW", "G.S.S.WWX..SXS..XX..GSWW.XWG..", ".S.XS.GWX.G...GWG.WSW..WW..XS.", "WXX.WG.WXWW...GS.G..SX..WWSSGS", "WXWXXWWG.G.W.SSX..GW.WSW..XGGX", ".W.W.XS.S.S.S.GGS.W..G.G..X.W.", "W..SXXWS...WWX.XGG.WS..XSS.GXW", "W.S.SGGX.WS..X.GSWXW..X.G.S.XX", "W.WXG.WSWWW.WXW.XSG...WXS.WWG.", ".XWG...WWGSGW..X...SW..SWSGXSS", "WW...WGWW.GGWW...GGS.WG.GXGWGS", "G.WXXG.WWX.WSXXWGW..WXWSG.W..S", ".X.WG..XWXG.WSSS.W...WWSX...W.", "SW.XXW.XWG.S.W.S...X.W.WX....W", "W.W.WX..X.XW.X.SW...WX.WXWXW.W", "..WW.W..W...S.GWWWWXG..WSWXWWX", ".W..GXX.SXGSSS.WS...XGGWW.X.WX", "WX...GWGG.SXSGW..GGWSS..G.X.S.", "W...W...SS.SSX.W.XWWWW.S.S.GSS", "..X.....WSG...WW...W.WWWGGXGG.", "...W.XW.GXWWW..WXW.WW.XW.SGG.."};
    int K = 121;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> field = {"..S.GXS.GWX..WXXS.SWG..WW..W.G", "W.WWW.WG.WXWWX.GXG..W...X..X..", "XGSW...WWX.WGWW.XW..S.X.XW..WS", "SGG.....WSWG.W.W..WW.SWW..SXGX", ".S.SWG..SXWSXW...WWW..W..SXG.X", "GSXSXXG.WXG.....WX.S.S..WWXW..", "S.X...XGS.WSW.W...WGGGSWW..WWG", "XXXXW..WXWXXGWX..WGSS.XXX..WXX", "XW.W....WXXX.SS.X.G..X.XX.WWXX", "..X...XWWW....GS.XGSS..XWX.WX.", "X.XW...WWW.WWSSS.GSSXWXW..XWGW", "WX.W...WSWXWXX..GW..SG.W.....G", ".XX.X.WGXWXWS..WW....GSWWX.XGW", "SW.XXW...X.X.W..WSSX.WSW.WWG.W", "G.WSXSWGXW..WSXSX..G.X.GW.WW..", "XG.WGW.G.GWXS.SX.XWWWWG.XX.W..", "XXSWX.WWG.SSW..XXW..XWWW.WW.W.", ".WWSGGW.SSXX..XW..WWWGG....XXW", "XWS.G.GS.XGWX..XX..XGS.SX.XXWW", ".G....S...SG..W.X.XXGWSWWW..WW", "XW..W.XWGWWSGW..XXXG...SWW.SXX", "G.XXX...WSW.SW.X.GSG...G.XWGS.", "WW.XW.....SXXWSWG.S.X.WXGGS.GS", "W.X...WWWSWS.WGXWGXX....W..GWX", "W..W...XWX..WWGWXW...SG.GX.XGX", "S.W..WW.SW..XGX.SWWXSSXGX.WS.X", "WSGW...GWW.WWG.S..GGG..XSXW.WX", "XGG..WSXG.XW.S.X.SGXXX.X...W.W", ".X.S.GGG.G..XSG..XSSW..SWX.WW.", "XXWWWWGXG..X.WSGS.WWS.S.XWWWX."};
    int K = 143;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> field = {".XSXGXWW..W.XSX..GSGGWWWW....X", "XGSSX.W.WW..XWG.X.SXSX.X.WG...", ".GS.XXX.WW..WSXSSSX..S.WWS.S.W", "SWW.W..WWXWWWG..S...WWWWXWSSSW", "GWX.XX..X.W.GX.XWGWX..WWXX.SSW", ".X.WWX.W.XWSX.XWXWW.W..W..WSSX", "XX.WW..XW.XSG...X.W.W....W.S.X", "SGX..X.WW.SS.W.X.WXX.X.WW..SW.", "S.S.WW...WG....W.XGWWX.SWWX.SX", ".S.SX..XWSXG..WW.G.X..W..WSX.S", ".WSWWW.WWWSWXW...XGWX.XW...S..", ".W.WS...G..G..X...XSWW.S..W.WS", ".W.X.SXGGWX.SSSS..GWXWGXXX.SX.", "S..W.GGSXGGXSXGXGGXWGGSSXXS..W", "SSXGWGXG.XGS.S.SXG.GSG.SWGXW..", "X.S.X.G..XXS.WGGGSWG.X.W.XWSWG", ".WSXWXW..WS.X.WGG.GX..X...WX..", "W..GG.G.XWX....XGSWGS.W.W.XWXX", "WXWWWGWX.X...W.GS.XGGSW.......", "S...XGXW.XSS..GSG...GW.WWG.XXX", "WXW.S..X.XG..GXS.X..XGWXX.G.W.", "W..W.SXWX.XG.GGSGWX.WW.XWWG.GG", ".XGXXWG.GSWXSXS.SWX.GXWX...S.X", "GX.GW.XGS.S.GGXXXW.G.W.XX...WS", "SGXWWXGSGSWGXWW.W..W..XWWXXWWS", "GXWWWWWWXGXWSXXX.XX.WWS...X..X", "W...W..X.W..GG..W.WXW..SW..W.S", "WW...W.X.W.WWSSW.XWXX..WWW..SS", "XX...X..XXW.S.GXW..WW.WXGGXS.G", "WW..WXX..XW.G..S...SWWSX.GG.G."};
    int K = 165;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> field = {"G.SXSG..W.X...W.XXXGXS..S..SS.", "X.WXG.S.W.XWWSW.XXGGS..S....SX", "X.XXW.GXSXSXW.G.WGGG.XSX..X..G", "XW.W.X.GXS.WX..SSS.G.WGW.W...S", "GW......S.......XSSXGG.GS.XSG.", "GW.G..XWSX..W..WGGGSXW.W.GX.G.", "..S.S.XS..X..XW.XGWWWX.W.XSX.G", "XXGGSXG.SXW....XX.W..XWX...WGW", ".SG.SSXGSW.S..X..SWX.........S", "X.WXGX..G.SXGSXSSSX...WX...SSW", ".WGX.GWG.WW...S.GXG.W...W.SXWX", ".GX.WWGXG.W.WW.GXS.S.W.WGGGGWW", "G.....XS......GG.WWXGSXGWSGXG.", ".WX...GGG..WXS..S...X.SS.SXSSX", "XGXWXXW.GXWWGX.W.SSSSG.XGXX.G.", "WX.WXX.GXSWSWW.....GG.W.WX.W.G", "XX.XGXGXX.S..W..SWS.XSWSSWXX.W", "GSXSS.SXXSXW...W.WWXSXS.X.W.X.", "XWSWGSS.S...XG.GGXX..GX..X.X..", "W..W...S.GXW.GSGWWWWXG.WWX...W", ".XW..W..WGGG.GXSW.W.WWS..W.X..", "WW.WWSXWX.SXSWWXSWWWW....WW.X.", "XWWSW.GWW.WWWX...SG.X..SWXW.XG", ".G.SSWXWGGGW....G..GXXG.GWWXSG", "SX..WWX.XSWX.G.G...WS.S.SS.SSX", ".W.W...WGXX.SSSXXX.W.WW..GGG.X", "..XX.WWXS.GSGXGG.W.......SW...", "...W.WWWXSS.XSX...XW.G.WG.X..X", "SWX....W..SS.XG.WX.XWXWXXWW.XW", "G.WW.XXSS..WGSSS.X...GXXW.X.W."};
    int K = 143;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> field = {"...XGXS..S..X.W.W..G.W..XSGGX.", "XWXW.XXSSW..GWWGXXW.S..W.SGGWW", "WSWXW..GWXWGSWS.S.X.WWWG.S.WX.", "S.SGW.GSGW.S.G.GS..WXGS.G..XW.", "..S.G.G.GX.WSG.W.G..X..SXGG..W", "W.WXWWG.G.XG.X..XWW.GWS..G...W", ".XX..WX.XSWWWWW.X.WXSXWXS.X.X.", "WW.W.WWG.G....X.X.WGXX.GW.XW.W", "XW...W.XGXG.WXXXW.W.W..SW.XWW.", ".X.W..X.WX...W.WS.SW..S.WW...X", "....W...GWW..X...GW..GX..XX.W.", "WWW...WS.SXWWGXGGXGXXXGW....WS", "WX..XWXWSWW...SGXGWWSWXSW.X.GX", "GXWSW...W..XXX.XG....G.XSSXGXG", "GS.XS.W....G.WWS.GWWS.XWW.SGX.", "W.XXWX.XSWSGWG.WSX.WXW...SW.GW", ".XW.S.WS.WS.X.SSSW.....W.SW..X", ".....GGG.XW...SSX.WXXXX.WWWWWW", ".XW.S.GXX..WXWSG...X.WW..WXX.W", "...S.S...X.X..XWWWXX.XW..S..WW", ".XXWSSW.X.W.W.SSGWX.XWXWSWXWW.", "..XWSXXXW..WSXSS.G...WWXW...X.", "WW..WG.WWWXSWSWWGSS..WWXXXX...", ".XSWXSGSSW.WGWW.SXGS..SWS..W.W", "WS.XXGGSSX.W.G...SWGGGXWXGWXW.", "XWSG..W.SG.S.XS.XGSSGSW.X.SXWX", ".WXGSXS..XSW.W.XGGSXWWW.X.XXWW", "WX..XS.WWWXG.S.WG.X....XWW..XS", "W.X.X.WX.XS.G.X.GSS..WW..XW.S.", ".X.X.X.X.WWWWS.X..GSWWXXXGWGWG"};
    int K = 165;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> field = {"XW.SSG.SW.G....S..XXXGWW..WWWX", "..XSW.GGSSXGW..W..X...G.W.SWX.", "..G.XWSX..SXXXS..W.WXX.WS..GXX", "XS.XGWSW.WWS..XGW..XX.WWGG.W.X", ".XWS...WX.W.S...WG.W.S.X.SSX.W", "..XW.......WSGGXGXS..W..XWSW.W", "SWW.W.WW.X.XXGSSXSXWW.WXW..GW.", ".G.W..WW..XXSS.G.....XX.X.WW.W", "..SWX.W..WWGG.GS..WXGWW.W.SXXW", "...SX...W.S.SSSSG.SWGSW..S..WX", ".WSGS...X.XSX..SWSW.XSSSG..WWX", "..WWSS..WSGWWX.XSWWXX..SGG...W", "..WWSSW.G.W.XWWG....WGSSGSGW.W", ".W.X.S.S.W..X.XGWXX..WXSGSS.WX", ".X.WGXXXW...WXG..WWXX...S.SG..", "XW.WX.XW.WWWWS.XG..W.X.SG.S.SW", "...XSWWX.WW.XSXGX.....GGX.XW..", "XWSS.W..W.W..XSGGWW.XXGXX.WW.W", ".G.SSW..W..XWSG.SXGXXWGSW...GW", "XG.GXGXXWWSWS.SGWWXSXW.GXS...X", "SSS.GS.WXS.S..SXG.WGGGXSSXW...", "GWW.X.S..SGS..WSGSS.GGWXS.XX.W", "WWX.W.WS..SSWXWGGSGS.X.G.WXX.X", "W......WGGXX..XWG.GSWGGX.S.XWS", "WXXW.WGG..X..XX.W.SW..WWXWSX.S", ".X..WSS.SWW..W.X..WXX.SG.XGXG.", "..W...SGSSSX.W..WW...XXGGWXS..", ".XX.W..SS.XSW..X.XS.WWXWGG.WX.", "....XSGWWWXS..W.GG.WWXX.S.WG.S", "S.GWGGW.WXWXGW.S.W.X..WW.SWSGS"};
    int K = 154;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> field = {"....WWWWWG.SXS..XW..S..WGXS.W.", "XS.X.WXXWGGXSXXWGX..XWXG..G..W", "SXXXWW..S.SXGXWXSGWX.XW.X.WS..", "GX..W..GXS..XWWGSGS..XSWW.X.SW", ".....SG.SX.XW.X..G.G.SSG..GG..", ".W..G..SWGWXX..XXSGSSS.SW...GG", "GG.WXWG.SGXX.X..GSXSS..W..WWGX", "XXSWW..SWWG.G.SGWG.GWX.S..WSS.", "XSXWX...GXXS.S..GX.WXW.GSXX.SX", "GXG.S.X...X.GSGWWW.XS.WXGXSGWW", "GSSGW.XXW..GSS.X..XSX..GWGSWW.", ".WS..X.WXXS.SGW.X.X..WWSXSXX..", "WSSG....WW.GXG.W..XX.WS..WXX..", "GSSGG..XG..GGWGX.XX.WG...WWWW.", "GS.XSXXSW...SSXG.WW.WXX..XXXWX", "SXX.WGS....X.GSSSSG.G...WWXWXS", "W.XWWW.SG.XXWSXGSGXSXSXW....XW", "W..WX...GSX.W.GWWGS...SWW..WXS", "....XWSS....G.X.G.GGX.GGGXXWSG", "X.X.X..SGS.SGGSSWS.GWGGGWSXSG.", "XX..XSSX.SSSS.G.X.SXG.SXXXGX.W", "WX..SXGWS.WSX.WW..W.WG..XWXSSW", "S.XGWGW..W.GX.WSSW.WG.X.X.X.GS", "XGWSXXXX.GG.X...SWX.S.XWX..XWG", ".WWX....SG.XX..XXGW.W.W.XW.X.G", ".GXXSX.XS.....XW.SGGXX..X.XWSG", "SXS.WSGGS..XW..X..GXGX....X.WW", "W.XGS..XGSX..WW..GGG.S...W.W..", ".W.WWG.SGSS.WG..GGSWXXG.X.WW..", ".XX...GX.SSXGWS.SS.WWWG.XW.W.."};
    int K = 132;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> field = {"."};
    int K = 1000;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> field = {"GGGGGSSSSSWWWWW"};
    int K = 1000;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> field = {"GWS"};
    int K = 1;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> field = {"XXX", "XXX", "XXX"};
    int K = 1000;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> field = {"WGXGWWGGGWGGWWGWWGGWSWWWWGGSXW", "GWWWSGGG.WSWGGWGGGGGWGWWGGWSSW", "WGGWGWGGGWGGGWWGGGSWGWGWWGWWGW", "XWWWWGWWWWWWGGWWGGGWGWWGGWGWSG", "WSW.GGGWGWGWWWWGWSWGWGWGSGGWSW", "WWGSWGGGWWGWW.WGG.XWWGSGWWSGSW", "WGGWWWGWSGWGGWWWWGWGSWGSWSGWWG", "WGGSWWXSWSWGGGW.GGSWWSGWWW.GGG", "GWWW.WGWGWGWGWWWWWGXG.GGGSWWWW", "WGWWXWGGSWSWGGGWSWWWWGWWGWSWWG", "WSGXWWSGWSGWS.WWWWWGWWWWWGGWGG", "WGGXWWGSSWWWWGGWGGWGWGSGGGGGGX", "GXWWGGGWGSGGWSGWGXGSWSWWGGGGSS", ".WGGGSWW.WGWWWWSWWSSGWSWWXWWWG", "W.GGGGSWWGWGXGGWWGGGGWSGSWGGSW", "SGGGGWSWWWWWWXGGWGWGXWGGGGGXGW", "WSWWWWG.GSGGWGGSGSGGGSGWGGGGG.", "G.GWGWXWWGWGGSGGSWSGWWWWGWGGWW", "WWWGWWGXWSGGGWWWWSGWGWW.GWSG.W", "GWGWWGSGWWGGGGWWWWWWGWWWSGWW.G", ".WWWWGSGGWGGGWWGWWGW.G.WWWXGGW", "GWSGGGWGWGWWGSWWGGGGGGWGGG.WGG", "SWGGWSWXWWWGWWWWGWWSSGGWWXWGSW", "WGGWWWWWGWWGGGWGGGWG.GGWWWGGWW", "WWWWGGWWSGWSWWGGWGGGGGWGXWGWWW", "WWWSWW.GWWWWWGSWWWWWGWGGWXWGXW", "GGWWGXGGWGWGGSWWGG.WWGWGSGGW.W", "GWGWWGWGSWGG.XWWWSGWWWSSWGWGW.", "GGGWSWSGWG.WGG.WGG.GWGXXS.GGGW", "WWSGGGWGSWW.WXSWWGWGWWWGW.SGWG"};
    int K = 352;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> field = {"..............................", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWW.", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGG.", "..............................", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSS.", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWW.", "..............................", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGG.", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSS.", "..............................", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWW.", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGG.", "..............................", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSS.", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWW.", "..............................", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGG.", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSS.", "..............................", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWW.", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGG.", "..............................", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSS.", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWW.", "..............................", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGG.", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSS.", "..............................", "WGSWGSWGSWGSWGSWGSWGSWGSWGSWG.", ".............................."};
    int K = 1000;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 183;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> field = {"GG..", "....", "..W.", "..W.", "SS.."};
    int K = 4;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> field = {"GG..", "XX..", "..W.", "..W.", "SS.."};
    int K = 10;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> field = {"..............................", "......S.......................", "..............................", "......W.......S...S...........", "..............................", "......G.W.S.G.W.S.W.G.W.S.....", "..............................", "........G.....G...G...........", "..............................", "........W.........W...........", "..............................", "........S.G.W.....S.W.G.......", "..............................", "............S.G.W.G.S.........", "..............................", "..............S.G.S...........", "..............................", "..................W.G.W.......", "..............................", "....................S....W....", "......................W.......", "..............................", "....................W...G.....", "..............................", "..............................", "....................W...S.....", "..............................", "..............................", "..............................", ".............................."};
    int K = 5;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> field = {"GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    int K = 1000;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> field = {"W..SXXS..W", ".XXXXXXXX.", ".G.GWWG.G.", "G..GSGS..G", "..........", "..........", "W..S..S..W", "W..S..S..W", "..........", "..........", "G..GSSG..G", ".G.GWWG.G.", ".XXXXXXXX.", "W..SXXS..W"};
    int K = 3;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> field = {"XS.W.WS", "X....S.", "..WS...", "..W.G..", "GW.G.W.", "..G....", "....XXG"};
    int K = 4;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> field = {"W.G", "..G", "S.S"};
    int K = 1000;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> field = {"G..X..W..G..X..W..G", "X..G..W..S..S..S..G"};
    int K = 1000;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> field = {"G..W..S", "G.....S"};
    int K = 10;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> field = {"XS.X", "GWWG", ".WXX", "XSXX"};
    int K = 2;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> field = {"GWS", "G.S"};
    int K = 10;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> field = {"SSSSS", ".....", "WWWWW", "..G..", ".....", ".....", ".....", ".....", ".....", ".....", ".....", ".....", ".....", ".....", ".....", "..S..", "WWWWW", ".....", "GGGGG"};
    int K = 7;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> field = {"S...W...G", "S.......G"};
    int K = 100;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> field = {"SS", "..", "W.", "..", "GG"};
    int K = 100;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> field = {".G.W.S.", "SW...WG"};
    int K = 2;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
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
    vector<string> field = {".G..", "SW.W", "..WG", "..S."};
    int K = 1;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> field = {"WG..SWG..SWG..SWG..SWG..SWG..S", "S..WGS..WGS..WGS..WGS..WGS..WG", "..WGS..WGS..WGS..WGS..WGS..WG.", ".WGS..WGS..WGS..WGS..WGS..WG..", "WGS..WGS..WGS..WGS..WGS..WG...", "..............................", "WWWWWWWWWWWWWW.WWWWWWWWWWWWWWW", "WWWWWWWWWWWWWW.WWWWWWWWWWWWWWW", "..............................", "WGS..WGS..WGS..WGS..WGS..WG...", "WG..SWG..SWG..SWG..SWG..SWG..S", "S..WGS..WGS..WGS..WGS..WGS..WG", "..WGS..WGS..WGS..WGS..WGS..WG.", "..............................", "WWWWWWWWWWWWWW.WWWWWWWWWWWWWWW", "WWWWWWWWWWWWWW.WWWWWWWWWWWWWWW", "..............................", "..WGS..WGS..WGS..WGS..WGS..WG.", ".WGS..WGS..WGS..WGS..WGS..WG..", "WGS..WGS..WGS..WGS..WGS..WG...", "WG..SWG..SWG..SWG..SWG..SWG..S", "..............................", "WWWWWWWWWWWWWW.WWWWWWWWWWWWWWW", "WWWWWWWWWWWWWW.WWWWWWWWWWWWWWW", "..............................", "WG..SWG..SWG..SWG..SWG..SWG..S", "S..WGS..WGS..WGS..WGS..WGS..WG", "..WGS..WGS..WGS..WGS..WGS..WG.", ".WGS..WGS..WGS..WGS..WGS..WG..", "WGS..WGS..WGS..WGS..WGS..WG..."};
    int K = 50;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> field = {"GG.SGG.SG.SSWGSS", ".G.WGG.SG.SS.GSS", "SG.SW..SG.SS..SS", ".G..G..SG.SS.GSS", ".G.SG..SG.SS..SS", ".G.S.G.SG.SS.GSS", "...S.GWSG.SS.GSS", "GG.S.G.SG.SS.GSS", "GG.S.G.SG.SS..SS", "G..S.G.SW.SS.GSS", "GG.S...SW.SS.GSS", "GG..GG.SW.SS..SS", "G..SGG.SW.SS.GSS", "GG..G..WW.SS..SS", "S...GG.SW.SS.GSS", ".G.S.G.SG.SS.GSS"};
    int K = 20;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> field = {".W.", "S.G", "S.G", "S.G", "S.G", ".W."};
    int K = 10;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> field = {"XX", "XS", "GW", "WX", "SW", "XG", "XX"};
    int K = 1;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> field = {"GWSWG", "WXXXX", "SXXXX"};
    int K = 500;
    WorkersOnPlane* pObj = new WorkersOnPlane();
    clock_t start = clock();
    int result = pObj->howMany(field, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22675094&rd=13513&pm=9751
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
#include <stack> 
#include <bitset> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <utility> 
#include <complex> 
#include <sstream> 
#include <iostream> 
#include <iomanip> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <cassert> 
using namespace std;
 
struct WorkersOnPlane{
  int howMany(vector <string> field, int K);
};
class Graph{
private:
  struct edge{
    int to,cap,back;
  };
  vector<vector<edge> > adj;
  int n;
public:
  Graph(int n):n(n){
    adj.resize(n);
    for(int i=0;i<n;i++)
      adj[i].clear();
  }
  ~Graph(){
    for(int i=0;i<n;i++)
      adj[i].clear();
    adj.clear();
  }
  void insert(int i,int j,int c){
    adj[i].push_back((edge){j,c,adj[j].size()});
    adj[j].push_back((edge){i,0,adj[i].size()-1});
  }
  int dinic(int s,int t){
    int q[n],prev[n];
    int allflow=0;
    while(true){
      memset(prev,-1,sizeof(prev));
      int qf=0,qb=0;
      prev[q[qb++]=s]=-2;
      while(qb>qf&&prev[t]==-1)
        for(int u=q[qf++],i=0,v;i<adj[u].size();i++)
          if(prev[v=adj[u][i].to]==-1&&adj[u][i].cap>0)
            prev[q[qb++]=v]=adj[u][i].back;
      if(prev[t]==-1)
        break;
      for(int i=0,z;i<adj[t].size();i++)
        if(adj[z=adj[t][i].to][adj[t][i].back].cap>0&&prev[z]!=-1){
          int flow=adj[z][adj[t][i].back].cap;
          for(int v=z,u=prev[v];u>=0;v=adj[v][u].to,u=prev[v])
            flow<?=adj[adj[v][u].to][adj[v][u].back].cap;
          if(!flow)
            continue;
          adj[z][adj[t][i].back].cap-=flow;
          adj[t][i].cap+=flow;
          for (int v=z,u=prev[v];u>=0;v=adj[v][u].to,u=prev[v]){
            adj[adj[v][u].to][adj[v][u].back].cap-=flow;
            adj[v][u].cap+=flow;
          }
          allflow+=flow;
        }
    }
    return allflow;
  }
};
const int dx[]={1,-1,0,0};
const int dy[]={0,0,1,-1};
int label[30][30];
int WorkersOnPlane::howMany(vector <string> G, int K){
  int n=G.size(),m=G[0].size(),sz=0;
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      if(G[i][j]=='W'||G[i][j]=='G'||G[i][j]=='S')
        label[i][j]=sz++;
  Graph flow(sz*2+2);
  for(int i=0;i<sz;i++)
    flow.insert(i,i+sz,1);
  int src=sz*2,sink=sz*2+1;
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      if(G[i][j]=='W'){
        vector<vector<int> > dis(n,vector<int>(m,-1));
        queue<pair<int,int> > Q;
        Q.push(make_pair(i,j));
        dis[i][j]=0;
        while(!Q.empty()){
          int x=Q.front().first,y=Q.front().second;
          Q.pop();
          for(int k=0;k<4;k++){
            int nx=x+dx[k],ny=y+dy[k];
            if(0<=nx&&nx<n&&0<=ny&&ny<m&&dis[nx][ny]==-1){
              dis[nx][ny]=dis[x][y]+1;
              if(G[nx][ny]=='.'){
                Q.push(make_pair(nx,ny));
              }else if(G[nx][ny]=='G'&&dis[nx][ny]<=K){
                flow.insert(label[nx][ny]+sz,label[i][j],1);
              }else if(G[nx][ny]=='S'&&dis[nx][ny]<=K){
                flow.insert(label[i][j]+sz,label[nx][ny],1);
              }
            }
          }
        }
      }else if(G[i][j]=='G')
        flow.insert(src,label[i][j],1);
      else if(G[i][j]=='S')
        flow.insert(label[i][j]+sz,sink,1);
  return flow.dinic(src,sink);
}
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/