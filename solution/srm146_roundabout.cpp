/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1605
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

class Roundabout {
public:
    int clearUpTime(string north, string east, string south, string west);
};

int Roundabout::clearUpTime(string north, string east, string south, string west) {
    int ret;
    return ret;
}


int test0() {
    string north = "--";
    string east = "--";
    string south = "WE";
    string west = "-S";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string north = "WWW";
    string east = "NNN";
    string south = "---";
    string west = "---";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string north = "SSS";
    string east = "WW-";
    string south = "N";
    string west = "S------";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string north = "SSS-";
    string east = "--W---W";
    string south = "WE";
    string west = "-S";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string north = "E";
    string east = "-N";
    string south = "W";
    string west = "-S";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string north = "";
    string east = "";
    string south = "";
    string west = "";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string north = "----";
    string east = "---";
    string south = "--";
    string west = "-";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
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
    string north = "--S";
    string east = "---";
    string south = "---";
    string west = "---";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string north = "S";
    string east = "---";
    string south = "N";
    string west = "---";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string north = "W";
    string east = "";
    string south = "--E";
    string west = "";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string north = "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE";
    string east = "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS";
    string south = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    string west = "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 399;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string north = "SEESESSEESESESESEESESSEESESESESEESESSEESESESEESESE";
    string east = "SWSWWSWSWSWWSWSSWSWWSWSWSWWSWSSWSWWSWSWSWWSWSSWSWS";
    string south = "WNWNWNWNNWNWNWWWNWNWNWNNWNWNWWWNWNWNWNNWNWNWWWNWNW";
    string west = "NENENENENENNENENENENENENENNENENENENENENENNENENENEN";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 304;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string north = "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS";
    string east = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    string south = "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
    string west = "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 206;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string north = "S-S-S-S-S-S-S-S-S-S-S-S-S-S-S-S-S-S-S-S-S-S-S-S-S-";
    string east = "-W-W-W-W-W-W-W-W-W-W-W-W-W-W-W-W-W-W-W-W-W-W-W-W-W";
    string south = "N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-";
    string west = "-E-E-E-E-E-E-E-E-E-E-E-E-E-E-E-E-E-E-E-E-E-E-E-E-E";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 129;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string north = "EEE";
    string east = "---";
    string south = "---";
    string west = "SSS";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string north = "-WE--S--ESEWESSE-WS--EE-SWSSEEEW-SEE";
    string east = "S";
    string south = "WW-NENN-EWN--EEN--NNE-NWNE-E";
    string west = "S-NNSSN-SENEE-NS-----NNEN-SSES-NSSS-EESN--";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 107;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string north = "WSS--WSESSWWE--SEESEESWE--S-S-EWSSWEEE-SEWW";
    string east = "WS-NWWNWSNSWN-NN-";
    string south = "NEENW";
    string west = "S---NSE-ENESS-ESSN-N-ES--NNNENNNSESS-N";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string north = "EW-ES-E-W-EW--";
    string east = "N--SS-SSNS-WSN-SSS-";
    string south = "NNEN-EWN-WENN-WWN-WE---EEEEWEWW--E-WWN-";
    string west = "NENSNEE-NNN-NSSNS-ESEE----N-EN-NENEE";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string north = "";
    string east = "WNSSN--WSNWWW-NW";
    string south = "WNEWEEWW-WWE--WWWE";
    string west = "SS-SESNESE-SSEN-NSEN-NESS--NN";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string north = "WSWS-ESEEEES-SWS-SEW-S--S-EEEES-EESWSWSESES";
    string east = "SSSWSNNSWN--NN---S-S-S-WWW-";
    string south = "ENN-NNEEWWN-NE-N-NN-E-NEWEN-W----EEWENE-NNNENNE-N";
    string west = "-NNSS-NEN-N--NNN-ESNN-N-N";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string north = "SS-SWWSEWEEWWWESS-SWSEE-E-E-----WESW-WE-";
    string east = "WNN-NSN-WWWWSNNSNWNN-W--N---SN--SS-SSWNW";
    string south = "E--E-WN-E-NW-EWWEN-N-NNNEW";
    string west = "-SENE--SSNNE-SSSNSS-";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string north = "";
    string east = "--SS--W-NN-N--WSN-NWW-NSWNNNN-";
    string south = "N";
    string west = "NSE-NEESEESE-EEN-NS-SSS-N-NEN--SSSSS";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string north = "WWSS";
    string east = "-SWSSSN--N-WSSSN-N-WSNNSSNWN-S-NNNNW";
    string south = "EEWENW-WNNWE-EW-WNEE-WEWW";
    string west = "NEN--ENNSESN-EE-";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
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
    string north = "SSWEE-E-WSS-SE-WWEEWEEW-S";
    string east = "S-WSNW-NW-SWSSSSW--SSNWS-SW-SWNWWSSWW--";
    string south = "ENEWWNNWN---NEN-EWEW-W";
    string west = "SNN--N----S";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string north = "--SSS-E----WW-EESEE-E-SEES-SEEEE-WS-";
    string east = "--S-N--NNW--NSS-N-WN-";
    string south = "WWW-EEENW-E-NW--WE";
    string west = "NSS-NNNSENES--EEE--N--ENSE";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string north = "WEEEE-E-EWSE-E--SSEESW--";
    string east = "W-WNNWNN-S-N-SW--SW-W-N---NNWSNNNSSWW-WNSW";
    string south = "-EWWENW--N-NW-NEWNEN-WWEENNWW";
    string west = "NNEN-ESS-N-ESN-NN--SESN-EESNSESS";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string north = "EWWWSSSWEW-";
    string east = "SWSSWSS--W-NWNSSSW-NNNSWSWWNWW-N--SSWNS-NNS-NSWNSS";
    string south = "WNENENE---EEN-WEE-E-NEWWW-W--EWNWWWNW-NNE-EW";
    string west = "SEENE-NNN-NE";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string north = "EWSWE-ESESEWEE";
    string east = "NNWWSSSNWSN-WWW-SN-S---SW-NWWWN-W-S--SW";
    string south = "";
    string west = "SN-NSEESES-E---ENNEE-S-ES";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string north = "EWS";
    string east = "WSN-NN--W-NSS---NNW-SWS-SWS---WNSWW-NSWWS";
    string south = "-NWWEN";
    string west = "--EE-NEENN-SNSNENN-N-E--ESENSS-ENENSNSSNN";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string north = "S--ESW-SS-ESWSW-SSSW----SSE";
    string east = "-NNSSNSSNWN-NSWNWSWSNNNSWS-";
    string south = "-EEWE-N-N-EE--E";
    string west = "-N-EESS-ENNN-N";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string north = "S-S-ESS-SW-W--SS-E--SES-WSWEEWESSSWE";
    string east = "S-WS--SNN---S---NSN-N-WWS--NWWNWWN-";
    string south = "WE--EWWWW";
    string west = "--N-SESSESNS-ESSNESS--ENESSEES---NE";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string north = "EEW--ESSEW-WEWESW-W-SEEESSEWSWSEWWSEWE";
    string east = "-W--NWW";
    string south = "W-WWEWN-E-EW-ENEENN";
    string west = "ES-E-NNNNESSEES-SSSNNN---ESNNNS-";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 107;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string north = "S--SEWW-WWW-SWEW-EES-SSS";
    string east = "S-WSNWWW-NS-W-WWWWS----WSSSS-S";
    string south = "EEE-NE----NEE";
    string west = "SNENSNEN-S-EE-EENNE-ES-SESEESE---SNEESEEN-EENN-";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string north = "EEWSWSW--ESWWE--E";
    string east = "-S--NWNS-NS-W-WSWNW-SWWSN";
    string south = "NEEEWWE-NWW--";
    string west = "NS-S";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string north = "SE-E-SEWSEW-ESW-EW---EEWEW-WE--SWSWWEWS";
    string east = "NNWNNSNWS";
    string south = "---ENW-WEWEEW-E---E-WWN--NNNEE-E---NWEEN-EEW--N-N";
    string west = "SES---SENN--SNE-ESN-NNSSSNESEN---N--E--E-SSS";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string north = "EWWW-S--S--WWSEW-EWSE";
    string east = "NSSN--N";
    string south = "-WWEEWW-EW-NN-WNE-WN-WW-WENEEWE--NW-N-N-NEENE-W-E";
    string west = "ENESNNEEENEN-SNENSSN--EES-EENEE--SN-SENESES";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string north = "ES";
    string east = "N";
    string south = "E";
    string west = "";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string north = "E";
    string east = "SN";
    string south = "-N";
    string west = "S-E";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string north = "";
    string east = "-";
    string south = "--------------";
    string west = "-------";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string north = "--";
    string east = "--";
    string south = "WE";
    string west = "-S";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string north = "-----------E";
    string east = "-----------W";
    string south = "-----------N";
    string west = "-----------S";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string north = "E------";
    string east = "-------";
    string south = "-------";
    string west = "-------";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string north = "-------------------------------------------------S";
    string east = "-------------------------------------------------W";
    string south = "-------------------------------------------------N";
    string west = "-------------------------------------------------E";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string north = "----S----------";
    string east = "----S----------";
    string south = "----N----------";
    string west = "----N----------";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string north = "S------------------------------------------------S";
    string east = "W------------------------------------------------W";
    string south = "N------------------------------------------------N";
    string west = "E------------------------------------------------E";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string north = "--";
    string east = "--";
    string south = "WE";
    string west = "-S";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string north = "-----------E";
    string east = "-----------W";
    string south = "-----------N";
    string west = "-----------S";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string north = "E------";
    string east = "-------";
    string south = "-------";
    string west = "-------";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string north = "-------------------------------------------------S";
    string east = "-------------------------------------------------W";
    string south = "-------------------------------------------------N";
    string west = "-------------------------------------------------E";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string north = "----S----------";
    string east = "----S----------";
    string south = "----N----------";
    string west = "----N----------";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string north = "S------------------------------------------------S";
    string east = "W------------------------------------------------W";
    string south = "N------------------------------------------------N";
    string west = "E------------------------------------------------E";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string north = "--";
    string east = "--";
    string south = "WE";
    string west = "-S";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string north = "-----------E";
    string east = "-----------W";
    string south = "-----------N";
    string west = "-----------S";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string north = "E------";
    string east = "-------";
    string south = "-------";
    string west = "-------";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string north = "-------------------------------------------------S";
    string east = "-------------------------------------------------W";
    string south = "-------------------------------------------------N";
    string west = "-------------------------------------------------E";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string north = "----S----------";
    string east = "----S----------";
    string south = "----N----------";
    string west = "----N----------";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string north = "S------------------------------------------------S";
    string east = "W------------------------------------------------W";
    string south = "N------------------------------------------------N";
    string west = "E------------------------------------------------E";
    Roundabout* pObj = new Roundabout();
    clock_t start = clock();
    int result = pObj->clearUpTime(north, east, south, west);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7210680&rd=4535&pm=1605
********************************************************************************
#include <string>
#include <deque>
 
using namespace std;
 
class Roundabout
{
  void add(string what, deque<int> &ett, deque<int> &tva)
  {
    int size = what.size();
    for (int x=0;x<size;x++)
    {
      int val = 0;
      switch (what[x])
      {
        case 'E':
          val++;
        case 'S': val++;
        case 'W': val++;
        case 'N':
          tva.push_back(val);
          ett.push_back(x);
          //printf("%d %d\n", val, x);
      }
    }
  }
  void movein(char* rabout, int pos, deque<int> &ett, deque<int> &tva)
  {
    rabout[pos] = tva.front();
    ett.pop_front();
    tva.pop_front();
  }
 
public:
  int clearUpTime(string north, string east, string south, string west)
  {
    char rabout[4] = {-1, -1, -1, -1};
    char rabout2[4] = {-1, -1, -1, -1};
    int time = 0;
    deque<int> q[4][2];
 
    add(north, q[0][0], q[0][1]);
    add(west, q[1][0], q[1][1]);
    add(south, q[2][0], q[2][1]);
    add(east, q[3][0], q[3][1]);
    
    while ((q[0][0].empty() && q[1][0].empty() && q[2][0].empty() && q[3][0].empty()) == false || rabout2[0]!=-1 || rabout2[1]!=-1 || rabout2[2]!=-1 || rabout2[3] != -1)
    {
      memcpy(rabout, rabout2, 4);
      int stuck = 0;
      bool empty[4];
      int fronttime[4];
 
      for (int x=0;x<4;x++)
      {
//        printf("%d ", rabout2[x]);
        if (rabout2[x]==x) rabout2[x] = -1;
        empty[x] = q[x][0].empty();
        fronttime[x] = q[x][0].front();
      }
//      printf("\n");
 
      
 
      for (int x=0;x<4;x++)
        if (!empty[x] && q[x][0].front()<=time)
          if (rabout[(x+3) & 3]==-1 && (empty[(x+3) & 3] || fronttime[(x +3) & 3]>time))
          {
            movein(rabout2, (x+3) & 3, q[x][0], q[x][1]);
          }
          else
          stuck++;
 
      if (stuck==4 && rabout[3]==-1) movein(rabout2, 3, q[0][0], q[0][1]);
      
      int old = rabout2[3];
      rabout2[3] = rabout2[2];
      rabout2[2] = rabout2[1];
      rabout2[1] = rabout2[0];
      rabout2[0] = old;
      time++;
    }
    return time;
  }
};

********************************************************************************
*******************************************************************************/