/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1993
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

class ScheduleStrength {
public:
    vector<string> calculate(vector<string> teams, vector<string> results);
};

vector<string> ScheduleStrength::calculate(vector<string> teams, vector<string> results) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> teams = {"BEARS", "GIANTS", "COWBOYS", "BRONCOS", "DOLPHINS", "LIONS"};
    vector<string> results = {"-WLWW-", "L-WL-W", "WL---W", "LW--L-", "L--W--", "-LL---"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BEARS", "DOLPHINS", "BRONCOS", "COWBOYS", "GIANTS", "LIONS"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> teams = {"BEARS", "COWBOYS", "GIANTS", "PACKERS"};
    vector<string> results = {"-LLW", "W-WW", "WL--", "LL--"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GIANTS", "BEARS", "COWBOYS", "PACKERS"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> teams = {"BENGALS", "BILLS", "CARDINALS", "CHARGERS", "COLTS", "COWBOYS", "DOLPHINS", "EAGLES", "FALCONS", "GIANTS", "JAGUARS", "NINERS", "PACKERS", "PANTHERS", "PATRIOTS", "RAIDERS", "RAVENS", "REDSKINS", "SAINTS", "SEAHAWKS", "TEXANS", "TITANS", "VIKINGS"};
    vector<string> results = {"-WL------L---L-L---WL--", "L-------W-------L----W-", "W---LWL-WLL-W--------W-", "------------L-L-LW---W-", "--W--W---LWW--LLL-W----", "--L-L---W--------L--L-L", "--W-----W----------W---", "-----------W--W-L-W-WW-", "-LL--LL----W---L-------", "W-W-W------L-W--------W", "--W-L----------L-L-----", "----L--LLW----W---W----", "--LW----------WL-W-----", "W--------L--------LL-L-", "---WW--L---LL----------", "W---W---W-W-W----W-----", "-W-WW--W------------L--", "---L-W----W-L--L--W----", "----L--L---L-W---L-----", "L-----L------W------LL-", "W----W-L--------W--W-L-", "-LLL---L-----W-----WW--", "-----W---L-------------"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"RAVENS", "JAGUARS", "PACKERS", "PATRIOTS", "EAGLES", "BENGALS", "COLTS", "FALCONS", "CHARGERS", "NINERS", "GIANTS", "VIKINGS", "TITANS", "RAIDERS", "SAINTS", "TEXANS", "CARDINALS", "REDSKINS", "COWBOYS", "DOLPHINS", "SEAHAWKS", "BILLS", "PANTHERS"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> teams = {"BEARS", "BENGALS", "BILLS", "BRONCOS", "BROWNS", "BUCCANEERS", "CARDINALS", "CHARGERS", "CHIEFS", "COLTS", "COWBOYS", "DOLPHINS", "EAGLES", "FALCONS", "GIANTS", "JAGUARS", "JETS", "LIONS", "NINERS", "PACKERS", "PANTHERS", "PATRIOTS", "RAIDERS", "RAMS", "RAVENS", "REDSKINS", "SAINTS", "SEAHAWKS", "STEELERS", "TEXANS", "TITANS", "VIKINGS"};
    vector<string> results = {"-W------W-L--L-W-LW---LW-LL--W-L", "L---LW-W-LL-L--W----W-L--L--W---", "----L--LLLL-L----LL---W-LWLLWL--", "-------L-L-W-L--L-----W--L----WL", "-WW---WL-W-L-W--W---W-W----L--W-", "-L----LWW-W--W---LWWW---LL--LWW-", "----LW-L-L------------W---LLLLWL", "-LWWWLW-----WLWWWL--W-WLL--LW-W-", "L-W--L------W--W-L---L-LWW----LW", "-WWWL-W----L---LW----WLW-L--W--L", "WWW--L-----WW-WW-W---L----LW-WWW", "---LW----WL--LW-W--W---L--WW--LW", "-WW----LL-L------LLWL--L-LW-WW--", "W--WLL-W---W----W--LL--W-L---W--", "-------L--LL---WL-LWLLW-W-W--WW-", "LL-----LLWL---L--W-L--W----LLWLW", "---WL--L-L-L-LW--LW-LL-WL-LW---L", "W-W--W-WW-L-W--LW-------L-----LW", "L-W--L------W-W-L--WL-W-----W-L-", "-----L-----LLWLW--L-W-W-L-LWW-L-", "-L--LL-L----WWW-W-WL-W--------WW", "--------WLW---W-W---L---LW-W--L-", "WWLLL-LL-W----LL--LL----L-WL-WWL", "L------WWL-WWL--L--------LLW--L-", "--W--W-WL-----L-WW-W-WW--WLL--L-", "WWLW-W--LW--WW-------L-WL---W-L-", "W-W---W---WLL-L-W--W--LWW------W", "--W-W-WW--LL---WL--L-LWLW------W", "-LL--WWL-L--L--W--LL-----L-----W", "L-W--LW---L-LLLL------L-------LW", "---LLLLLW-LW--LW-WWWLWLWWW---W--", "W--W--W-LWLL---LWL--L-W---LLLL--"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PATRIOTS", "JETS", "BUCCANEERS", "RAMS", "DOLPHINS", "BILLS", "BENGALS", "TITANS", "GIANTS", "PANTHERS", "RAVENS", "FALCONS", "PACKERS", "EAGLES", "COWBOYS", "CARDINALS", "LIONS", "BEARS", "BRONCOS", "BROWNS", "REDSKINS", "CHIEFS", "JAGUARS", "SEAHAWKS", "CHARGERS", "VIKINGS", "RAIDERS", "SAINTS", "STEELERS", "TEXANS", "NINERS", "COLTS"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> teams = {"BEARS", "BENGALS", "BILLS", "BRONCOS", "BROWNS", "BUCCANEERS", "CARDINALS", "CHARGERS", "CHIEFS", "COLTS", "COWBOYS", "DOLPHINS", "EAGLES", "FALCONS", "GIANTS", "JAGUARS", "JETS", "LIONS", "NINERS", "PACKERS", "PANTHERS", "PATRIOTS", "RAIDERS", "RAMS", "RAVENS", "REDSKINS", "SAINTS", "SEAHAWKS", "STEELERS", "TEXANS", "TITANS", "VIKINGS"};
    vector<string> results = {"-LL-----W--W--W--W--LL--W--LW---", "W---LLWWW-------L-----W---------", "W---L-W---W--WWW-W--WLL--LLW--LL", "------W---LW------W--W-W--L-L-W-", "-WW----L--W--L-WW----------L----", "-W-----------W---L----W--------W", "-LLL------LL--------L--L----L---", "-L--W-------L--WL---------W----L", "LL----------L----W-------LW-----", "---------------LL-WL---L---W--L-", "--LWL-W------L-W-W---WL-L-W--L-W", "L--L--W-------------------L--L--", "-------WW-----L-L-----L---------", "--L-WL----W------L-WWLL---WL----", "L-L---------W----W------W-------", "--L-L--L-WL------LL---L--W-WLW--", "-W--L--W-W--W-----W---W--L------", "L-L--W--L-L--WLW----W-L--L--LL--", "---L-----L-----WL-----W-----L---", "---------W---L--------LW-W-W----", "W-L---W------L---L-----LW-W-----", "W-WL------L--W--------W-L-W-L-L-", "-LW--L----W-WW-WLWLW-L----W--W--", "---L--W--W---------LW--------W--", "L---------W---L-----LW-----L----", "--W-----W------LWW-L-------WWWL-", "--WW---LL-LW-L------LLL--------L", "W-L-W----L---W-L---L----WL----L-", "L--W--W--------W-WW--W---L----W-", "----------WW---L-W----LL-L----L-", "--WL-----W-----------W---W-WLW-L", "--W--L-W--L---------------W---W-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JETS", "TITANS", "EAGLES", "NINERS", "PACKERS", "PATRIOTS", "BUCCANEERS", "VIKINGS", "BENGALS", "LIONS", "CARDINALS", "REDSKINS", "BROWNS", "SEAHAWKS", "FALCONS", "COLTS", "SAINTS", "TEXANS", "JAGUARS", "RAIDERS", "CHARGERS", "RAVENS", "BILLS", "BEARS", "STEELERS", "BRONCOS", "GIANTS", "COWBOYS", "CHIEFS", "RAMS", "PANTHERS", "DOLPHINS"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> teams = {"BILLS", "BRONCOS", "BROWNS", "CARDINALS", "CHARGERS", "COLTS", "COWBOYS", "GIANTS", "JETS", "PACKERS", "PATRIOTS", "RAIDERS", "RAMS", "RAVENS", "REDSKINS", "SEAHAWKS"};
    vector<string> results = {"--L-WLL--LWW--WW", "-----L-----L--W-", "W---W-WL-LL----W", "----WW----L----W", "L-LL------W-----", "WW-L--WWW-LL--LW", "W-L--L--L--W---L", "--W--L----W----W", "-----LW----WW-WL", "W-W--------WL-W-", "L-WWLW-L-----W--", "LW---WL-LL----W-", "--------LW-----W", "----------L---LW", "LL---W--LL-L-W-L", "L-LL-LWLW---LLW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PATRIOTS", "CHARGERS", "RAMS", "GIANTS", "PACKERS", "BROWNS", "RAIDERS", "SEAHAWKS", "COWBOYS", "CARDINALS", "COLTS", "REDSKINS", "BILLS", "JETS", "BRONCOS", "RAVENS"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> teams = {"ALABAMA", "CALIFORNIA", "COLORADO", "CONNECTICUT", "GEORGIA", "ILLINOIS", "IOWA", "KENTUCKY", "MICHIGAN", "MINESOTA", "MISOURI", "MONTANA", "NEBRASKA", "NEWMEXICO", "SOUTHCAROLINA", "TENNESSEE", "VERMONT", "VIRGINIA", "WISCONSIN", "WYOMING"};
    vector<string> results = {"-W-W-LWW-WWWW-WW-WWL", "L-W-L-L---WWL-W--W-W", "-L--LWL-WL--L-----WW", "L----LWLWW-WWLWLWL-W", "-WW---W-W-WWW---WL-L", "W-LW---WL-L-LLLWWW-L", "LWWLL---LLLWL-LWWL--", "L--W-L---WWWW-WW-WW-", "--LLLWW--L-WLWW--WWL", "L-WL--WLW-W--W-LWWW-", "LL--LWWL-L-W--WL--WL", "LL-LL-LLL-L-WLL---W-", "LWWLLWWLW--L-W-L-WL-", "---W-W--LL-WL-W-LL-W", "LL-L-WWLL-LW-L--W-W-", "L--W-LLL-WW-W-------", "---LLLL--L---WL---LL", "LL-WWLWLLL--LW------", "L-L----LLLLLW-L-W--W", "WLLLWW--W-W--L--W-L-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VIRGINIA", "TENNESSEE", "MISOURI", "MONTANA", "WYOMING", "NEBRASKA", "ILLINOIS", "COLORADO", "KENTUCKY", "MINESOTA", "ALABAMA", "CONNECTICUT", "CALIFORNIA", "IOWA", "WISCONSIN", "SOUTHCAROLINA", "VERMONT", "MICHIGAN", "NEWMEXICO", "GEORGIA"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> teams = {"ALASKA", "ARIZONA", "ARKANSAS", "COLORADO", "CONNECTICUT", "IDAHO", "ILLINOIS", "IOWA", "KANSAS", "KENTUCKY", "LOUISIANA", "MAINE", "MARYLAND", "MASSACHUSSETTS", "MICHIGAN", "MONTANA", "NEBRASKA", "NEWHAMPSHIRE", "NEWJERSEY", "NEWMEXICO", "NORTHCAROLINA", "OKLAHOMA", "OREGON", "PENNSYLVANIA", "SOUTHDAKOTA", "TENNESSEE", "UTAH", "VERMONT", "VIRGINIA", "WESTVIRGINIA"};
    vector<string> results = {"----L--WW--WWLWLLL--LL-WW-----", "---WW-L--L-W-W--L-L-W--WW-----", "---L-----W---L--W--L-------W-L", "-LW--W--WW--WW-WLL-WW-L-W--W--", "WL------WW-L-W-L-W---W---W-W-W", "---L-----W---W-LL---L-WW-WWL-L", "-W-----LLL-LW--WW--WL-WL-L--W-", "L-----W-----LW-W--L--L--LW-W--", "L--LL-W--WLW--W--LL-LL-----L-W", "-WLLLLW-L---L-L----L-LL-L--WLW", "--------W-----LL-W-----LWL----", "LL--W-W-L----L-----LL-WW--L-W-", "L--L--LW-W-------L------W-WL--", "WLWLLL-L---W--W-L--W-W------L-", "L-------LWW--L------LW----WLL-", "W--LWWLL--W---------L-LL--WW--", "WWLW-WL------W---LW--WL-----L-", "W--WL---W-L-W---W-WWW----LL---", "-W-----WW-------LL-W-------L-L", "--WL--L--W-W-L---LL-LLL-LL-W--", "WL-L-WW-W--W--WW-L-W-L------WW", "W---L--WWW---LL-L--WW-L--W---L", "---W-LL--W-L---WW--W-W-WLL---W", "LL---LW---WL---W------L-LWW---", "LL-L---W-WL-L------W--WW--W--W", "----LLWL--W------W-W-LWL--WL--", "-----L-----WL-LL-W-----LLL-W-L", "--LLLW-LWL--W-WL--WL-----WL-W-", "------L--W-L-WW-W---L------L--", "--W-LW--LL--------W-LWL-L-W---"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NEBRASKA", "ARIZONA", "MONTANA", "ALASKA", "NEWHAMPSHIRE", "MASSACHUSSETTS", "NORTHCAROLINA", "KANSAS", "COLORADO", "NEWMEXICO", "IDAHO", "IOWA", "TENNESSEE", "MAINE", "WESTVIRGINIA", "PENNSYLVANIA", "KENTUCKY", "MARYLAND", "OREGON", "CONNECTICUT", "LOUISIANA", "OKLAHOMA", "NEWJERSEY", "ILLINOIS", "UTAH", "VIRGINIA", "SOUTHDAKOTA", "VERMONT", "ARKANSAS", "MICHIGAN"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> teams = {"ALABAMA", "ALASKA", "ARIZONA", "ARKANSAS", "CALIFORNIA", "COLORADO", "CONNECTICUT", "DELAWRAE", "FLORIDA", "GEORGIA", "HAWAII", "IDAHO", "ILLINOIS", "INDIANA", "IOWA", "KANSAS", "KENTUCKY", "LOUISIANA", "MAINE", "MARYLAND", "MASSACHUSSETTS", "MICHIGAN", "MINESOTA", "MISOURI", "MISSISSIPPI", "MONTANA", "NEBRASKA", "NEVADA", "NEWHAMPSHIRE", "NEWJERSEY", "NEWMEXICO", "NEWYORK", "NORTHCAROLINA", "NORTHDAKOTA", "OHIO", "OKLAHOMA", "OREGON", "PENNSYLVANIA", "RHODEISLAND", "SOUTHCAROLINA", "SOUTHDAKOTA", "TENNESSEE", "TEXAS", "UTAH", "VERMONT", "VIRGINIA", "WASHINGTON", "WESTVIRGINIA", "WISCONSIN", "WYOMING"};
    vector<string> results = {"-LLWW-----L---L----W-------L----W-WW-W-L--L---LWW-", "W-LW---LLL---LWW-LW---WLL--L-WW-WWL----W-------L-W", "WW----LWLWWW--W-L-WL-WLLL-WW-LLL-WL---WLW---W--W--", "LL---LL----W-W-WWWWWLLW--------WL----W--W--W---L-L", "L-----L-L----L-WLLL--WL--W--WW-W-LWLWL--L-LL------", "---W---L-W-L--LLL-WW----L-----W-----W---WL-L---W--", "--WWW--L--L--LW------WW--WLW-WLWWLL--W-W--------WL", "-WL--WW-WL----L-W-WL---W-W-L--L-WL-W-L--L-L--W-LL-", "-WW-W--L-WWW--WLWWL-----LLW----WW--L--W-W-----W---", "-WL--L-WL-W--W---LWL-W----LWL--LWLL--LW---WLW--LL-", "W-L---W-LL-LW-LL-L-WW---L----L-L---W-----W--W-----", "--LL-W--L-W-WW-W-W---L---WWW-L---WWW--L----L--W---", "----------LL-W----W-W-----------L----L-L--L--W-L--", "-W-LW-W--L-LL-L--W--WLW---L--L-LWWW-WW-WLWL---WW-W", "WLL--WLWL-W--W-W-L-LW--L---L---LL----W---W--W---L-", "-L-LLW--W-WL--L-L--W--LWLL-L-W--LW---L-L-LLW-L-LL-", "--WLWW-LL------W----W-----WLWW--W-----W-WWL-L--LW-", "-W-LW---LWWL-LW------L--LLWW-LL---L-WWW---W-LLWW--", "-LLLWL-LWL--L------W-WLWL-L-L-W-WL---WWWLL---W-W-W", "L-WL-L-W-WL---WL--L--WW--W-LL---LL-W--W--WL--LW-LW", "---W------L-LLL-L-----WW-LW--LW--L--L-WWW-L-------", "--LWL-L--L-W-W---WLL---W-W--W---W-L-L-W-L-L-WLLL--", "-LWLW-L------L-W--WLL----W-------L--W-WL-W--W--L--", "-WW----L------WL--L-LL--L---L----W-WL---L---W-W-WW", "-WW--W--W-W----W-WW----W--W-L---L-WL--------LWLLLL", "----L-LLW--L---W-W-LWLL----------WWL-----WWL-LLL-W", "--L---W-LW-L-W--LLW-L---L--W-LW---L-L-LWW--LW--W--", "WWL---LW-L-L--WWWL-W------L-------------L--WL-----", "----L----W------L-WW-L-WW------W--L--------LW-----", "-LW-L-L---WW-W-LLW--W-----W---L---W--W-WLW-----LW-", "-LW--LWW---------WL-L-----L--W-L-L---LW---LW-W---W", "--WLL-L-LWW--WW-------------L-W--L-L-L---WL-------", "LL-W--LLLL--WLWWL-LW-L--W--------L---L--L----LL-L-", "-LL-W-WW-W-L-L-L--WWW-WL-L----WWW-WL--WLLW-WW-----", "LWW-L-W--W-L-L---W---W--LLW-WL---L-LWWWL-L-LWWLL-L", "L---W--LW-LL-------L---LWW-----W-WW-LLWW-------WLW", "----LL-------L---L--WWLW--W-------LW-L--L---L-----", "L--LW-LW-W--WLLW-LL----------LWWW-LWW-----WWL--WLW", "--L-----LL-W----LLLLLLL---W---L--LLL---LWWW---W--L", "WLW---L-----WL-W--L-L-W---L--L---WWL--W-----W-L-LL", "--LLWL-WL----W--L-W-LW-W--LW-W--WW--W-L--L-LWW---W", "-----W----L--LLWL-WL--L--L---L-L-LW---L-W-LW-LWW--", "W---W--W-L--WW-WWL-WWW---L----WW-----LL--W-LLW--W-", "---LWW---W-W---L---------WWLW-L--LW--L--WLW--W-W--", "--L------LL---L-WW---LLLW-LWL----LL-WW-LL-W------L", "-------L----L--W-WLW-W--LW----L-W-L-----LWLL--W---", "W-------L--L-L---L-L-W-LWW------W-W---LW-L---L--LL", "LWLW-L-W-W--WL-WWLL--WW-WWL--W----WL-L---L-L----LL", "L-----LW-W----WWL--W---LW----L--W--W-W-W--L---WW-W", "-L-W--W------L----LL---LWL----L---WL-LWWL---W-WWL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NEWYORK", "DELAWRAE", "CALIFORNIA", "NEBRASKA", "NEWMEXICO", "KANSAS", "NEWJERSEY", "NORTHCAROLINA", "NEVADA", "ARIZONA", "VERMONT", "ARKANSAS", "WESTVIRGINIA", "MASSACHUSSETTS", "RHODEISLAND", "WISCONSIN", "IDAHO", "GEORGIA", "UTAH", "ALASKA", "OKLAHOMA", "WYOMING", "MONTANA", "COLORADO", "CONNECTICUT", "ILLINOIS", "ALABAMA", "HAWAII", "OHIO", "INDIANA", "LOUISIANA", "TENNESSEE", "IOWA", "MISOURI", "PENNSYLVANIA", "KENTUCKY", "SOUTHDAKOTA", "SOUTHCAROLINA", "MAINE", "MISSISSIPPI", "WASHINGTON", "NEWHAMPSHIRE", "MICHIGAN", "OREGON", "FLORIDA", "NORTHDAKOTA", "TEXAS", "MARYLAND", "VIRGINIA", "MINESOTA"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> teams = {"ALABAMA", "ALASKA", "ARIZONA", "ARKANSAS", "CALIFORNIA", "COLORADO", "CONNECTICUT", "DELAWRAE", "FLORIDA", "GEORGIA", "HAWAII", "IDAHO", "ILLINOIS", "INDIANA", "IOWA", "KANSAS", "KENTUCKY", "LOUISIANA", "MAINE", "MARYLAND", "MASSACHUSSETTS", "MICHIGAN", "MINESOTA", "MISOURI", "MISSISSIPPI", "MONTANA", "NEBRASKA", "NEVADA", "NEWHAMPSHIRE", "NEWJERSEY", "NEWMEXICO", "NEWYORK", "NORTHCAROLINA", "NORTHDAKOTA", "OHIO", "OKLAHOMA", "OREGON", "PENNSYLVANIA", "RHODEISLAND", "SOUTHCAROLINA", "SOUTHDAKOTA", "TENNESSEE", "TEXAS", "UTAH", "VERMONT", "VIRGINIA", "WASHINGTON", "WESTVIRGINIA", "WISCONSIN", "WYOMING"};
    vector<string> results = {"---L------------WW-------WL------WL--W------W-----", "---L--LW-W--W-WW---------------L----WWW----WW-----", "-------L---W-----------L---------LL-W-----------W-", "WW-----L---L-W---------L-W------------WL-W---W----", "--------W-------------L------W----WL-LW---------W-", "------L---W--------LWL---L--L-------W--------W--WW", "-W---W---------W----L-------------WL------W--W--W-", "-LWW-----W---W--W-WW-L--LW----W---L------------W--", "----L-------------L-W---W---W-------WL-------L----", "-L-----L----------L-L------------LW-W-WL-L----W---", "-----L-------LW-------W---------------L------L--W-", "--LW-----------LW-L------L-LL--W---W------------L-", "-L----------------L------W-W--W---------W-LW------", "---L---L--W------W------L----------LW---L---L-----", "-L--------L-------L----L-----WL------------W--WLL-", "-L----L----W-----------W-----------L-W-----L-W-W--", "L------L---L------LLW---W-----WL-L--L--W--L--W----", "L------------L-------------L-L--WWL-------------LW", "-------LWW-WW-W-W---L------------W----------------", "-----W-L--------W---LWLL--L-LW----W----LL---W-W---", "-----LW-LW------L-WW----L------L-------W-W----L---", "-----W-W-----------L-----W--W--------W-------W----", "----W-----L--------W---------L--------L-L--LW-----", "--WW----------WL---W-----L-L----------W--------L-W", "-------WL----W--L---W-----W---L-----L----------L--", "L--L-W-L---WL--------L-W-----W-----LL----L-WW-----", "W------------------W----L-----L--L---LL--------LL-", "-----------WL----W-----W------------L-------------", "-----W--L--W-------W-L------------------W-----W---", "----L---------L--W-L--W--L---------LWL---W--L--WW-", "-------L----L-W-L-------W-W-------L----W--LW------", "-W---------L----W---W-----------------W----W------", "-----------------L----------------------W-WWW-----", "L-W------W------WLL-------W-------W--L---L--L--W--", "W-W-L-LW-L-------W-L----------W--L----L-L-L---W---", "----W-W----L-W-W---------W---W--------LL----------", "-LL--L--LL---L--W-------WW-W-L--------------------", "LL--W---W------L-----L----W--W---W-----L--------L-", "-L-LL----LW-----------WL--W----L--WW-------------L", "---W-----W------L--WL---------L----W-W------------", "------------LW-----W--W-----L---L-W-------------L-", "---L-----W----------L----W---L---W--------W-L-----", "------L-----W---W-------------W-L-W------L----L---", "-L----------L-LW------W--L----LLL-----------------", "LL-----------W-----L--L--L---W--LW-------W--------", "---L-LL-W-W----LL----L--------------------------L-", "---------L----L----LW-------L-----L-------W----L--", "-------L------WL-------WW-W--L---L------------W---", "--L-LLL---LW--W--W--------W--L-------W--W----W----", "-----L-----------L-----L--------------W-----------"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PENNSYLVANIA", "CONNECTICUT", "IDAHO", "ILLINOIS", "MICHIGAN", "ARKANSAS", "VIRGINIA", "DELAWRAE", "MONTANA", "ALASKA", "KANSAS", "GEORGIA", "UTAH", "RHODEISLAND", "MASSACHUSSETTS", "OKLAHOMA", "KENTUCKY", "VERMONT", "NEWHAMPSHIRE", "SOUTHDAKOTA", "IOWA", "COLORADO", "ARIZONA", "FLORIDA", "OHIO", "TEXAS", "MAINE", "SOUTHCAROLINA", "INDIANA", "MARYLAND", "CALIFORNIA", "LOUISIANA", "NEWYORK", "MISOURI", "NEBRASKA", "WESTVIRGINIA", "TENNESSEE", "OREGON", "NEVADA", "NEWJERSEY", "MISSISSIPPI", "WYOMING", "NORTHDAKOTA", "NEWMEXICO", "WASHINGTON", "ALABAMA", "WISCONSIN", "MINESOTA", "NORTHCAROLINA", "HAWAII"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> teams = {"AZTECS", "COUGARS", "COWBOYS", "FALCONS", "HORNEDFROGS", "LOBOS", "RAMS", "REBELS", "UTES"};
    vector<string> results = {"---L-L--W", "--LL-LWL-", "-W--WWLLW", "WW---L--W", "--L--W-L-", "WWLWL-LW-", "-LW--W-L-", "-WW-WLW--", "L-LL-----"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HORNEDFROGS", "COUGARS", "RAMS", "LOBOS", "REBELS", "UTES", "COWBOYS", "AZTECS", "FALCONS"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> teams = {"BUCCANEERS", "REDSKINS", "BRONCOS", "LIONS", "SAINTS", "PANTHERS", "SEAHAWKS", "JAGUARS", "DOLPHINS", "STEELERS", "GIANTS", "BROWNS", "TEXANS", "BEARS", "CHARGERS", "CHIEFS", "BENGALS", "RAVENS", "COWBOYS", "EAGLES", "RAMS", "NINERS", "CARDINALS", "BILLS", "PACKERS", "TITANS", "COLTS", "VIKINGS", "JETS", "FALCONS", "RAIDERS", "PATRIOTS"};
    vector<string> results = {"-WLWWLWLLWLWLLLLL----LLWWLW-L---", "L-WWLWLWWLWLWLLW-----LL---W-----", "WL-WWLLWLLLLLWLLL--W---WWWW-----", "LLL-LWLWWLLWLWLL---------W---L--", "LWLW-LLLWLWLLWWLL-L---L---W-W--L", "WLWLW-LLWLWLWWWW---L-LW----L----", "LWWWWW-WLLWWWLWL-------L-LL-----", "WLLLWWL-LLWWWLWWL----------LW-W-", "WLWLLLWW-WLLLLLW---WLLW--L-----L", "LWWWWWWWL-WWLLLW-----------WLW--", "WLWWLLLLWL-LLWLW---LLL----L--L--", "LWWLWWLLWLW-LLWW-W--LL---W-WWWW-", "WLWWWLLLWWWW-LWW-----LW-----L-L-", "WWLLLLWWWWLWW-WL----W----LLL----", "WWWWLLLLWWWLLL-LL-L------L--L---", "WLWWWLWLLLLLLWW-WL--L-WWL------L", "W-W-W--W------WL-WWWWWWWWWLWWLLL", "-----------L---WL-LWLLLWLWWWWWWW", "----W---------W-LW-WLWWWLLLLWWWL", "--L--W--L-W-----LLL-WWLLLWLWLWWL", "--------W-WW-L-WLWWL-LWLWLWWWLWL", "WW---W--W-WWW---LWLLW-LLWWWLLWWL", "WW--WL--L---L--LLWLWLW-LWWLWWWLL", "L-L---W--------LLLLWWWW-LLLLWWLL", "L-L------------WLWWWLLLW-WWLLWLW", "W-LL--W-W--L-WW-LLWLWLLWL-LLWLWL", "LLL-L-W---W--W--WLWWLLWWLW-LWLLL", "-----W-W-L-L-W--LLWLLWLWWWW-WLLL", "W---L--L-W-LW-W-LLLWLWLLWLLL-WWL", "---W-----LWL----WLLLWLLLLWWWL-LW", "-------L---LW---WLLLLLWWWLWWLW-W", "----W---W------WWLWWWWWWLWWWWLL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VIKINGS", "RAIDERS", "RAVENS", "FALCONS", "JETS", "BILLS", "PACKERS", "COWBOYS", "RAMS", "NINERS", "CHIEFS", "PATRIOTS", "EAGLES", "CARDINALS", "TITANS", "SAINTS", "COLTS", "BENGALS", "DOLPHINS", "CHARGERS", "JAGUARS", "BUCCANEERS", "BROWNS", "REDSKINS", "PANTHERS", "GIANTS", "TEXANS", "BRONCOS", "BEARS", "STEELERS", "LIONS", "SEAHAWKS"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> teams = {"COLTS", "REDSKINS", "STEELERS", "BRONCOS", "JETS", "NINERS", "SEAHAWKS", "JAGUARS", "DOLPHINS", "GIANTS", "BILLS", "COWBOYS", "TEXANS", "BEARS", "CHARGERS", "CHIEFS", "BENGALS", "RAVENS", "BROWNS", "EAGLES", "RAMS", "BUCCANEERS", "CARDINALS", "LIONS", "PACKERS", "TITANS", "PANTHERS", "VIKINGS", "SAINTS", "FALCONS", "RAIDERS", "PATRIOTS"};
    vector<string> results = {"-WLLLWWWLW-----W-----W-------L--", "L-WWWWLWLL---W----L----W-W---W--", "WL-WWWLLWL----------W-WL---W----", "WLL-LLWWLW-W--L-----W-----------", "WLLW-WWWWLL-L-WL------------W---", "LLLWL-LWWLL----L-W----W-L--L----", "LWWLLW-LWW-----------L---W---W-L", "LLWLLLW-LW--W--L-W------W---WW-L", "WWLWLLLW-L-L---LL----------W-WWW", "LWWLWWLLW----WW--L--L--LW-------", "----WW-----LWWLLWLWWL----LW-W---", "---L----W-W-LLWLWLWWLW--L-------", "----W--L--LW-WLWWLLLL-WL--------", "-L-------LLWL-LWLLWLW-----W---LL", "---WL----LWLWW-WLWWWW-L-L--W--W-", "L---WW-WW-WWLLL-WWLLLW-L-----L--", "--------W-LLLWWL-LLLWLW---L-----", "-----L-L-WWWWWLLW-LWW---------L-", "-W--------LLWLLWWW-LW--LL-------", "----------LLWWLWWLW-WW-----LLW--", "--LL-----WWWWLLWLLLL-----L-WL---", "L-----W----L---LW--L--LLLWLWLLLW", "--L--L------L-W-L----W-LWLLWLLLW", "-LW------W--W--W--W--WW-WLWWWWLL", "-----W-L-L-W--W---W--WLL-WLWLLLL", "-L----L---W---------WLWWL-LWLLWL", "----------L--L--W----WWLWW-LLWLW", "--L--W--L-----L----WLLLLLLW-LWWW", "----L--L--L--------WWWWLWWWW-WWL", "WL----LLL------W---L-WWLWWLLL-LL", "--------L----WL--W---WWWWLWLLW-W", "------WWL----W-------LLWWWLLWWL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JETS", "GIANTS", "BRONCOS", "BEARS", "JAGUARS", "BROWNS", "FALCONS", "STEELERS", "REDSKINS", "NINERS", "TEXANS", "DOLPHINS", "LIONS", "TITANS", "RAMS", "SAINTS", "RAIDERS", "VIKINGS", "BUCCANEERS", "BILLS", "SEAHAWKS", "PACKERS", "COLTS", "RAVENS", "CHIEFS", "CARDINALS", "CHARGERS", "PATRIOTS", "PANTHERS", "COWBOYS", "EAGLES", "BENGALS"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> teams = {"FALCONS", "NINERS", "STEELERS", "COLTS", "JETS", "PATRIOTS", "CHARGERS", "JAGUARS", "DOLPHINS", "REDSKINS", "PACKERS", "BILLS", "RAVENS", "BEARS", "TITANS", "CHIEFS", "BENGALS", "TEXANS", "BROWNS", "EAGLES", "RAMS", "BUCCANEERS", "CARDINALS", "LIONS", "COWBOYS", "SEAHAWKS", "PANTHERS", "GIANTS", "SAINTS", "BRONCOS", "RAIDERS", "VIKINGS"};
    vector<string> results = {"-LWLLLWW--L---W--------------L--", "W-LLWLWL-W-W----W--W-----------L", "LW-LWWWW----LL-W-W-L----W-WW----", "WWW-WWLLW---------------WW-W-L--", "WLLL-WLW----------------WL-W--L-", "WWLLL-WL------L----------L----W-", "LLLWWL-W---L----------L--W-W----", "LWLWLWL-------L---W---WL---LW---", "---L-----LLLWLWW--------W-------", "-L------W-LWWWWL----W---LW----W-", "W-------WW-WLWWLL--L--L-------L-", "-L----W-WLL-LLWL-----L----L---LW", "--W-----LLWW-LLW----L--L--------", "--W-----WLLWW-WW-W---LW---L-----", "L----W-WLLLLWL-L-LLWL-----------", "--L-----LWWWLLW-------W-------L-", "-L--------W------WLWLLLLL-W-----", "--L----------LW-L-LLWLWL--------", "-------L------W-WW-WWLLW--L-W-L-", "-LW-------W---L-LWL-LLLW-----L-L", "---------L--W-W-WLLW-LWL-W-W----", "-----------W-W--WWWWW-LWW-WW--W-", "------WL--W--L-LWLWWLW-W--------", "-------W----W---WWLLWLL--W---W--", "--LLL---LW------W----L---WWLLWWL", "---LWWL--L----------L--LL-LLWLWW", "--L--------W-W--L-W--L--LW-WLWLW", "--LLL-LW------------LL--WWL-WLWL", "-------L----------L-----WLWL-LLW", "W--W---------------W---LLWLWW-WW", "----WL---LWW---W--W--L--LLWLWL-L", "-W---------L-------W----WLLWLLW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EAGLES", "TEXANS", "COWBOYS", "GIANTS", "CARDINALS", "BENGALS", "BEARS", "LIONS", "FALCONS", "BILLS", "PANTHERS", "RAVENS", "SEAHAWKS", "BUCCANEERS", "RAIDERS", "CHIEFS", "COLTS", "JAGUARS", "BROWNS", "DOLPHINS", "NINERS", "RAMS", "STEELERS", "JETS", "CHARGERS", "PATRIOTS", "BRONCOS", "SAINTS", "REDSKINS", "TITANS", "PACKERS", "VIKINGS"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> teams = {"CHIEFS", "NINERS", "STEELERS", "BROWNS", "JETS", "PATRIOTS", "CHARGERS", "JAGUARS", "PANTHERS", "CARDINALS", "PACKERS", "VIKINGS", "COWBOYS", "RAMS", "BENGALS", "FALCONS", "LIONS", "TEXANS", "COLTS", "EAGLES", "BRONCOS", "BUCCANEERS", "REDSKINS", "BILLS", "RAVENS", "SEAHAWKS", "DOLPHINS", "GIANTS", "SAINTS", "BEARS", "RAIDERS", "TITANS"};
    vector<string> results = {"-WWLLWLLLL------L--L--W----L--W-", "L-WWWWWWLLWL-L--W-L---------L---", "LL-LWLLWLW-WL-WLW---WW----L----W", "WLW-WWLLWW-----------------W-W--", "WLLL-WLWWL-L--L---LL----L-W--W--", "LLWLL-LWWWW-W---------L----W----", "WLWWWW-LLL--W-----W----L------L-", "WLLWLLW-LW----L---L--------W----", "WWWLLLWW-L----W--L--------L---W-", "WWLLWLWLW---L-----WL--W---L--LL-", "-L---L-----WWWWLWLWWLW------W---", "-WL-W-----L-WWLLWLWLW-------W---", "--W--LL--WLL-WWLLLLLL-------L--W", "-W--------LLL-LWLWWLLL------WW--", "--L-W--WL-LWLW-WLLLLL--W--W--W-W", "--W-------WWWLL-WWLWL--L--LL-L-W", "WLL-------LLWWWL-LLLWL-WL-------", "--------W-WWWLWLW-WWL---WWWL----", "-W--W-LW-LLLWLWWWL-LL-----------", "W---W----WLWWWWLWLW-W-----------", "--L-------WLWWWWLWWL--W-WW---W--", "--L-------L--W--W-----LLWLWWWLLW", "L----W---L----------LW-WLWWLLWWL", "------W-------LWL----WL-LLLLWLWW", "----W-----------WL--LLWW-LWLLLWL", "-----------------L--LWLWW-WWWLWW", "--W-L---WW----LW-L---LLWLL-LWLLL", "W--L-L-L-------W-W---LWWWLW-LWWL", "-W--------LLWL-------LWLWLLW-LWW", "---LL----W---LLW----LWLWWWWLW-WL", "L-----W-LW-----------WLLLLWLLL-W", "--L---------L-LL-----LWLWLWWLWL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BRONCOS", "PACKERS", "RAMS", "TEXANS", "VIKINGS", "COWBOYS", "COLTS", "LIONS", "FALCONS", "EAGLES", "SEAHAWKS", "BROWNS", "BENGALS", "JETS", "CHIEFS", "JAGUARS", "PATRIOTS", "GIANTS", "NINERS", "RAVENS", "PANTHERS", "BEARS", "DOLPHINS", "REDSKINS", "CARDINALS", "STEELERS", "SAINTS", "BUCCANEERS", "BILLS", "RAIDERS", "TITANS", "CHARGERS"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> teams = {"GIANTS", "RAVENS", "FALCONS", "BROWNS", "BRONCOS", "PATRIOTS", "CHARGERS", "JAGUARS", "PANTHERS", "EAGLES", "PACKERS", "RAMS", "COWBOYS", "JETS", "BENGALS", "STEELERS", "LIONS", "TEXANS", "CHIEFS", "TITANS", "CARDINALS", "BUCCANEERS", "REDSKINS", "BILLS", "NINERS", "SEAHAWKS", "VIKINGS", "COLTS", "SAINTS", "BEARS", "RAIDERS", "DOLPHINS"};
    vector<string> results = {"-LWLLWWWWLW--------W--L----W----", "W-WWLWLLLL-LW-W---L---LL------L-", "LL-WWLWWWL-----------WL----W-L--", "WLL-LLWLWL------L-WL------WWWW--", "WWLW-WWLWL-------W--------L-L---", "LLWWL-WWLL--W------L---L-L---W--", "LWLLLL-LWL----L------W-L-W--W-W-", "LWLWWLW-LL---LW-WWW-W----W-LW---", "LWLLLWLW-L---LLW---W-L-L--W-----", "WWWWWWWWW-----WW-----LW-LL---W-L", "L----------WLWLWLWWWW--------W--", "-W--------L-LLLLLLLLL----WLL----", "-L---L----WW-WLLWLLLW------W--L-", "-------WW-LWL-LWWWLLW--W-----LLL", "-L----WLWLWWWW-WWLWLW--------LL-", "--------LLLWWLL-WLLWW---------L-", "---W---L--WWLLLL-WWWWL---W------", "----L--L--LWWLWWL-LLW-L------W-W", "-W-L---L--LWWWLWLW-LL-L-L-----L-", "L--W-W--L-LWWWWLLWW-L-----------", "-------L--LWLLLLLLWW---L-----W--", "--L---L-WW------W-----WLWLWWLWWL", "WWW------L-------WW--L-LWWLLWLLW", "-W---WW-W----L------WWW-WLWLWWWL", "---------W--------W--LLL-LLWWWLW", "-----WLL-W-L----L----WLWW-LLLLWL", "---LW---L--W---------LWLWW-LLLWL", "L-LL---W---WL--------LWWLWW-WLWL", "---LW-LL-------------WLLLWWL-WWW", "--WL-L---LL--WW--L--LLWLLWWWL-WW", "-W----L-----WWWW--W--LWLWLLLLL-W", "---------W---W---L---WLWLWWWLLL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DOLPHINS", "CHARGERS", "GIANTS", "PANTHERS", "NINERS", "BEARS", "BUCCANEERS", "SAINTS", "REDSKINS", "FALCONS", "PATRIOTS", "SEAHAWKS", "EAGLES", "COLTS", "BRONCOS", "RAVENS", "BROWNS", "JAGUARS", "CARDINALS", "VIKINGS", "RAIDERS", "JETS", "TEXANS", "STEELERS", "BILLS", "BENGALS", "CHIEFS", "LIONS", "PACKERS", "TITANS", "COWBOYS", "RAMS"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> teams = {"GIANTS", "TITANS", "FALCONS", "BROWNS", "BRONCOS", "LIONS", "CHARGERS", "JAGUARS", "PANTHERS", "EAGLES", "PACKERS", "RAMS", "STEELERS", "JETS", "RAVENS", "BEARS", "VIKINGS", "TEXANS", "COLTS", "SEAHAWKS", "CARDINALS", "NINERS", "REDSKINS", "COWBOYS", "BUCCANEERS", "BILLS", "PATRIOTS", "CHIEFS", "SAINTS", "BENGALS", "RAIDERS", "DOLPHINS"};
    vector<string> results = {"-LWWWWWWWLWWLWWWW--W-----L----WW", "W-WLLWLWLLWWLLLWW-WW--W---W-L---", "LL-LLWWWWLLLLLLLWW-L--L---WL-L--", "LWW-WLLLLLWLLWWWL---WW-W---L----", "LWWL-WLWWWLLLWLW----L-----W-W---", "LLLWL-WLLLLLLWLW---------W---LL-", "LWLWWL-WLLLLWLWW-LWL--LL--W-----", "LLLWLWL-WLLWLLWLL---L-WL-----W--", "LWLWLWWL-WLLLWLL---W---LWW--W---", "WWWWLWWWL-WLLLWWW----W-W-------W", "LLWLWWWWWL-WLLWL-L---LW-L----L--", "LLWWWWWLWWL-WWLW-L-W-L-------W--", "WWWWWWLWWWWL-WLL---W--W--LL----L", "LWWLLLWWLWWLL-LW----WW-WWL--L-W-", "LWWLWWLLWLLWWW-W-W-L-W-----W--L-", "LLWLLLLWWLWLWLL-L-L----L-----WW-", "LLLW---W-L-----W-LWLWWWLLWLWWWLL", "--L---W---WW--L-W-WLLWLWLLWLWWWL", "-L----L--------WLL-LLWWWWWWLWLLW", "LLW---W-L--LL-W-WWW-LWLWLLWWWLWW", "---LW--W-----L--LWWW-LLLLLLLWWWL", "---L-----LWW-LL-LLLLW-LWWWLLLLWW", "-LW---WL--L-L---LWLWWW-WLWWWLWWL", "---L--WWWL---L-WWLLLWLL-WWWWLLLL", "--------L-W--L--WWLWWLWL-WLWWLWW", "W----L--L---WW--LWLWWLLLL-WLLLWW", "-LL-L-L-----W---WLLLWWLLWL-WWWWW", "--WW----------L-LWWLWWLLLWL-WWWL", "-W--L---L----W--LLLLLWWWLWLL-WLW", "--W--W-L--WL---LLLWWLWLWWWLLL-WL", "L----W-------LWLWLWLLLLWLLLLWL-L", "L--------L--W---WWLLWLWWLLLWLWW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DOLPHINS", "FALCONS", "CHARGERS", "STEELERS", "PACKERS", "TITANS", "PANTHERS", "RAMS", "SEAHAWKS", "NINERS", "JAGUARS", "BRONCOS", "RAVENS", "EAGLES", "GIANTS", "BILLS", "BROWNS", "BEARS", "LIONS", "SAINTS", "VIKINGS", "RAIDERS", "JETS", "PATRIOTS", "BUCCANEERS", "CARDINALS", "COWBOYS", "TEXANS", "CHIEFS", "COLTS", "REDSKINS", "BENGALS"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> teams = {"STEELERS", "EAGLES", "RAIDERS", "BENGALS", "BRONCOS", "LIONS", "JETS", "JAGUARS", "RAMS", "TITANS", "PACKERS", "PANTHERS", "TEXANS", "COLTS", "RAVENS", "CHIEFS", "VIKINGS", "CHARGERS", "GIANTS", "SEAHAWKS", "CARDINALS", "NINERS", "REDSKINS", "COWBOYS", "BUCCANEERS", "BILLS", "PATRIOTS", "BEARS", "SAINTS", "BROWNS", "FALCONS", "DOLPHINS"};
    vector<string> results = {"-WLWL-----W------------L---W----", "L-LLLL---L-----W-------L--------", "WW-WW--L------------L-W----W----", "LWL-W--LL-----------W-----LL-L--", "WWLL----------W--L--L---------L-", "-W----WLWL--W----W-L---W-W------", "-----L-LLW-----L---L--WW----L---", "--WW-WW-LW-----------L------WW--", "---W-LWW-W---W-------W------LW--", "-W---WLLL-------W--L------L----W", "L----------WLWLWW--LW----W------", "----------L-LWLW--W-L-----L---L-", "-----L----WW-WWL-L----WL--------", "--------L-LLL-LW----WL----------", "----L-----WWLW-L-W--------W-W---", "-L----W---LLWLW------LW--L---L--", "---------LL------LWLL---L-----W-", "----WL------W-L-W-LLL------W-L--", "-----------L----LW-WW---WW---W-W", "-----WW--WW-----WWL-LL---W------", "--WLW-----LW-L--WWLW----W-----L-", "-------WL----W-W---W--LWWW------", "--L---L-----L--L-----W-LLW------", "WW---LL-----W--------LW-LL-----W", "----------------W-L-LLWW-LL-WWWW", "-----L----L----W--LL-LLWW---L---", "---W-----W-W--L---------W--WLLWW", "L-LW-------------L--------L-WWLW", "------WLW-----L---------LWWL-WWW", "---W---LL------W-WL-----L-WLL-WW", "----W------W----L---W---L-LWLL-W", "---------L--------L----LL-LLLLL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JAGUARS", "BILLS", "JETS", "RAMS", "CHARGERS", "COLTS", "VIKINGS", "BENGALS", "SEAHAWKS", "PANTHERS", "NINERS", "SAINTS", "BROWNS", "DOLPHINS", "LIONS", "BUCCANEERS", "CARDINALS", "RAVENS", "TITANS", "REDSKINS", "BEARS", "PACKERS", "BRONCOS", "PATRIOTS", "TEXANS", "RAIDERS", "FALCONS", "STEELERS", "EAGLES", "GIANTS", "COWBOYS", "CHIEFS"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> teams = {"STEELERS", "EAGLES", "RAIDERS", "CHARGERS", "BRONCOS", "BILLS", "COLTS", "JAGUARS", "RAMS", "JETS", "PACKERS", "DOLPHINS", "TEXANS", "TITANS", "RAVENS", "PANTHERS", "VIKINGS", "BENGALS", "FALCONS", "BEARS", "CARDINALS", "NINERS", "SAINTS", "REDSKINS", "BUCCANEERS", "LIONS", "PATRIOTS", "SEAHAWKS", "COWBOYS", "BROWNS", "GIANTS", "CHIEFS"};
    vector<string> results = {"-LWWL------W-----W----L-W--L---W", "W-LWW--------LW------W---------W", "LW-LL-----W-LLL-W-L-------W-----", "LLW-W-L--L---------W----L-------", "WLWL--------W----------W--------", "------LLLLL-LWWWW----W-WL----L--", "---W-W-WLWW--------WL-----WL----", "-----WL-WW-----W-----W-----WW--W", "-----WWL-W--W------W------------", "---W-WLLL--L--W----L---LL-------", "--L--WL----WWLWW-----L-------L--", "L--------WL-WLWL-----------L----", "--W-LW--L-LL-WLW-L---------W----", "-WW--L----WWL-LL--L-------------", "-LW--L---LLLWW-W-------L--W-----", "-----L-L--LWLWL-----------------", "--L--L-----------LLLW----W------", "L-----------W---W-LWW-------LLW-", "--W----------W--WW-LL-WW-------W", "---L--L-LW------WLW-W------W--L-", "------W---------LLWL-L-----W---W", "-L---L-L--W---------W-LWLW----L-", "W-----------------L--W-WLW----WW", "----LL---W----W---L--LL-LW-----L", "L--W-W---W-----------WWW-L-L----", "----------------L----LLLW--L--L-", "--L---L-------L------------WWWWW", "W-----WL---WL------LL---WWL-LLLW", "-------L---------W--------LW-LWW", "-----W----W------W--------LWW-WW", "-----------------L-W-WL--WLWLL-L", "LL-----L----------L-L-LW--LLLLW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHIEFS", "RAMS", "BENGALS", "CHARGERS", "COLTS", "COWBOYS", "RAIDERS", "SEAHAWKS", "NINERS", "JETS", "BILLS", "BEARS", "STEELERS", "BRONCOS", "PATRIOTS", "PANTHERS", "TITANS", "BROWNS", "PACKERS", "GIANTS", "JAGUARS", "CARDINALS", "TEXANS", "SAINTS", "VIKINGS", "FALCONS", "EAGLES", "REDSKINS", "BUCCANEERS", "RAVENS", "DOLPHINS", "LIONS"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> teams = {"STEELERS", "EAGLES", "GIANTS", "BENGALS", "BRONCOS", "COWBOYS", "BEARS", "BILLS", "RAMS", "PACKERS", "JETS", "DOLPHINS", "RAVENS", "CHARGERS", "TEXANS", "JAGUARS", "LIONS", "TITANS", "FALCONS", "COLTS", "CARDINALS", "NINERS", "SAINTS", "VIKINGS", "BUCCANEERS", "REDSKINS", "PATRIOTS", "SEAHAWKS", "PANTHERS", "BROWNS", "RAIDERS", "CHIEFS"};
    vector<string> results = {"-WLWWLLW---------W-L-L--------L-", "L-LWLLWLW---------L-W----------L", "WW-LWLLW-------W-LL----W--------", "LLW-WWWW-L-W---W--W-L-----WWL---", "LWLL-LLW---LL--W----------------", "WWWLW-WLLL------LW--------------", "WLWLWL-L----LL-L---W----W-L-----", "LWLLLWW--L-LL-L------L------W---", "-L---W---LLWWLWL---------WW----L", "---W-W-WW-LWLLLL------L-------LW", "--------WW-WWWLW----L-L---W-----", "---LW--WLLL-LWLL----WW--------L-", "----W-WWLWLW-WWW------L----L-L--", "------W-WWLLL-LW--L-----W-L-----", "-------WLWWWLW-L---W---L--------", "--LLL-W-WWLWLLW--L---------W----", "-----W-----------LWLWLWW--W-W---", "L-W--L---------WW-LWWWLW--L-----", "-WWL---------W--LW-WWWWW-W--L---", "W-----L-------L-WLL-LLWW------W-", "-L-W------WL----LLLW-LWWW----WW-", "W------W---L----WLLWW-LLWL------", "---------WW-W---LWLLLW-WL---L---", "--L-----------W-LLLLLWL--L---WW-", "------L------L------LLW--WWWLLWL", "--------L---------L--W-WL-WWWWLL", "---L--W-L-L--W--LW------LL-WWWLW", "---L--------W--L--------LLL-LLWL", "---W---L--------L-W---W-WLLW-WLW", "------------W-------L--LWLLWL-LL", "W--------W-W-------LL--LLWWLWW-L", "-W------WL--------------WWLWLWW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SAINTS", "LIONS", "FALCONS", "VIKINGS", "TITANS", "COLTS", "PACKERS", "PANTHERS", "CARDINALS", "PATRIOTS", "RAMS", "JETS", "CHARGERS", "EAGLES", "SEAHAWKS", "DOLPHINS", "NINERS", "REDSKINS", "JAGUARS", "BROWNS", "COWBOYS", "GIANTS", "BILLS", "BUCCANEERS", "BENGALS", "STEELERS", "TEXANS", "CHIEFS", "BEARS", "RAIDERS", "BRONCOS", "RAVENS"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> teams = {"CHIEFS", "EAGLES", "PATRIOTS", "BENGALS", "BRONCOS", "TITANS", "DOLPHINS", "BILLS", "RAMS", "JAGUARS", "SAINTS", "JETS", "BROWNS", "CHARGERS", "TEXANS", "RAVENS", "LIONS", "STEELERS", "FALCONS", "COLTS", "CARDINALS", "NINERS", "BEARS", "VIKINGS", "BUCCANEERS", "REDSKINS", "GIANTS", "SEAHAWKS", "PANTHERS", "COWBOYS", "RAIDERS", "PACKERS"};
    vector<string> results = {"-WWWWW---WL-W--WW-----------W---", "L-LWWL----------L---L---W----LL-", "LW-WWW--W---------W-----L-------", "LLL-WW---------L-L-------W------", "LLLL-W--L-------------W----W-W-W", "LWLLL-LL----W-W----W-------L--W-", "-----W-WLWLW---L----LWW--WL-----", "-----WL-WLLW------W--L--------WL", "--L-W-WL-LWW------------W---W-LW", "L-----LWW-LW-----L----LLW-------", "W-----WWLW-L---W-L-----L----W---", "------LLLLW----------L-----W-L--", "L----L-------WWWLWLL---------W--", "------------L-LWLLL----L--W---L-", "-----L------LW-LWLW-----W-L--W--", "L--W--W---L-LLW-WWW-----------WW", "LW----------WWLL-WL---W----WL---", "---W-----WW-LWWLL-L-W-------L---", "--L----L----WWLLWW--W-L-----W--W", "-----L------W-------WWWLLL--L---", "-W----W----------LLL-LLWW-------", "------LW---W-------LW-WLW-------", "----L-L--W------L-WLWL-LL--LW---", "---------WW--W-----WLWW-WL--L-W-", "-LW-----LL----L----WLLWL-WL-W--W", "---L--L------------W---WL-LLLWWL", "------W------LW---------WW-LWWWW", "----LW-----L----L-----W--WW-LWLL", "L-------L-L-----WWLW--LWLWLW-WLL", "-W--L------WL-L----------LLLL-LL", "-W---L-LW----W-L-------L-LLWWW-W", "----L--WL------L--L-----LWLWWWL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SAINTS", "CHARGERS", "RAVENS", "JAGUARS", "PATRIOTS", "BENGALS", "CHIEFS", "TITANS", "PANTHERS", "DOLPHINS", "BILLS", "BROWNS", "LIONS", "CARDINALS", "RAMS", "BUCCANEERS", "PACKERS", "BEARS", "FALCONS", "STEELERS", "TEXANS", "EAGLES", "NINERS", "REDSKINS", "RAIDERS", "BRONCOS", "JETS", "COLTS", "VIKINGS", "GIANTS", "COWBOYS", "SEAHAWKS"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> teams = {"CHIEFS", "EAGLES", "BILLS", "REDSKINS", "TITANS", "PACKERS", "BROWNS", "PATRIOTS", "RAMS", "RAVENS", "JAGUARS", "JETS", "DOLPHINS", "CARDINALS", "BUCCANEERS", "SAINTS", "LIONS", "STEELERS", "BRONCOS", "COLTS", "NINERS", "CHARGERS", "BEARS", "VIKINGS", "TEXANS", "BENGALS", "GIANTS", "SEAHAWKS", "PANTHERS", "COWBOYS", "RAIDERS", "FALCONS"};
    vector<string> results = {"-WWLLWLL--L-----------L------L--", "L-WWLLWWW---------L-W----------W", "LL-WLLWW--L-L-L-W-LWW----L------", "WLL-WWWWL----L--W---W--WW-W---W-", "WWWL-WWL-L---------L----LW-L---W", "LWWLL-WL-L---W-----W-----WW-----", "WLLLLL-L--L--WL---L-----L--W-L--", "WLLLWWW--LLW---L--L---L----L--WL", "-L-W-----WWLLWWLW-----W--LW-----", "----WW-WL-LWLWLW-------W---W--L-", "W-W---WWLW-WWLLWW-------------W-", "-------LWLL-WLWLW-W-L-----------", "--W-----WWLL-WWW-W--WW----W-----", "---W-LL-LLWWL-LW----W-----L-----", "--W---W-LWWLLW-W---W---L----W---", "-------WWLLWLLL----------L--W---", "--LL----L-LL-----WLWLWLW--L--W--", "------------L---L-LLLLLW-------L", "-WW---WW---L----WW-LWWWWW-------", "--L-WL--------L-LWW-LWLW-W--LW--", "-LLL-------WLL--WWLW-LWL-----L--", "------------L---LWLLW-WWW-W-----", "W------WL-------WWLWLL-W-L---W-W", "---L-----L----W-LLLLWLL----L----", "---LW-W-----------L--L---LLWLLWL", "--W-LL--W------W---L--W-W-WWWWWW", "---L-L--L---LW--W----L--WL-WWWWL", "----W-LW-L-------------WLLL-LLLL", "--------------LL---W----WLLW-LLW", "W-----W---------L--LW-L-WLLWW-LL", "---L---L-WL-------------LLLWWW-L", "-L--L--W---------W----L-WLWWLWW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"RAMS", "SAINTS", "JETS", "BILLS", "CARDINALS", "GIANTS", "DOLPHINS", "RAIDERS", "TEXANS", "PATRIOTS", "EAGLES", "LIONS", "CHIEFS", "RAVENS", "PACKERS", "STEELERS", "NINERS", "COLTS", "BROWNS", "BUCCANEERS", "VIKINGS", "BENGALS", "TITANS", "BEARS", "CHARGERS", "PANTHERS", "JAGUARS", "FALCONS", "SEAHAWKS", "COWBOYS", "REDSKINS", "BRONCOS"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> teams = {"CHIEFS", "NINERS", "BILLS", "REDSKINS", "PACKERS", "BENGALS", "RAVENS", "PATRIOTS", "RAMS", "DOLPHINS", "SEAHAWKS", "VIKINGS", "BROWNS", "CARDINALS", "BUCCANEERS", "SAINTS", "LIONS", "STEELERS", "RAIDERS", "CHARGERS", "COWBOYS", "COLTS", "BRONCOS", "JETS", "TEXANS", "TITANS", "GIANTS", "JAGUARS", "PANTHERS", "EAGLES", "BEARS", "FALCONS"};
    vector<string> results = {"-LLWWLWLWLWLWLWL--W-----LLW-L---", "W-LLWWWLLWLLWWWW--L--W-WLL----W-", "WW-WWLLLLWLLWLLW-LW--W--L-WL-L-L", "LWL-WWLWWLWLLWWW---L--L----W--LL", "LLLL-LWLWWLWWLLL----L-W------L-L", "WLWLW-WLLWLLLWWW----------WW-W-L", "LLWWLL-WLWWWWWLW---L--L----L----", "WWWLWWL-WLLLWLWW---WW------W----", "LWWLLWWL-WLLLWLL--------LL--LL--", "WLLWLLLWL-WLWWWW-----WLL----WLW-", "LWWLWWLWWL-LWLWL-W---W----W-W---", "WWWWLWLWWWW-WLLWLL--W----L-----L", "LLLWLWLLWLLL-LWWL--L--L--L----L-", "WLWLWLLWLLWWW-LLWW--L-L-L---WLL-", "LLWLWLWLWLLWLW-WL----L--------L-", "WLLLWLLLWLWLLWL--L-----LW----L-W", "-----------WWLW--LLLLLWWWLWWWLWL", "--W-------LW-L-WW-WLLLWWWWWWLLWW", "LWL-------------WL-WLWLWWWWWLLWL", "---W--WL----W---WWL-LLWWLWWLWLWL", "----W--L---L-W--WWWW-LLLWLWWLLLW", "-LL------LL---W-WWLWW-WWWWWWLLWL", "---WL-W--W--WW--LLWLWL-LWLWWLLLW", "-L-------W-----WLLLLWLW-LLLLWWLW", "WWW-----W----W-LLLLWLLLW-LWLLWWW", "WW------W--WW---WLLLWLWWW-WLLLLW", "L-L--L----L-----LLLLLLLWLL-LWLLW", "--WL-LWL--------LLLWLLLWWWW-WLWW", "W-------WLL--L--LWWLWWWLWWLL-LLW", "--W-WL--WW---W-WWWWWWWWLLWWWW-WL", "-L-W-----L--WWW-LLLLWLWWLWWLWL-L", "--WWWW-----W---LWLWWLWLLLLLLLWW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JAGUARS", "GIANTS", "COLTS", "COWBOYS", "JETS", "RAIDERS", "CHARGERS", "STEELERS", "PANTHERS", "FALCONS", "TITANS", "LIONS", "BEARS", "CARDINALS", "TEXANS", "BRONCOS", "RAMS", "EAGLES", "SAINTS", "PACKERS", "BILLS", "DOLPHINS", "VIKINGS", "BROWNS", "NINERS", "REDSKINS", "BUCCANEERS", "RAVENS", "PATRIOTS", "BENGALS", "SEAHAWKS", "CHIEFS"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> teams = {"FALCONS", "NINERS", "BILLS", "DOLPHINS", "PACKERS", "EAGLES", "RAVENS", "STEELERS", "RAMS", "REDSKINS", "SEAHAWKS", "BRONCOS", "COLTS", "BENGALS", "CHARGERS", "SAINTS", "LIONS", "PATRIOTS", "JAGUARS", "BUCCANEERS", "COWBOYS", "BROWNS", "BEARS", "JETS", "CARDINALS", "TITANS", "GIANTS", "RAIDERS", "PANTHERS", "TEXANS", "VIKINGS", "CHIEFS"};
    vector<string> results = {"-WWWLLWWWWWLWLWW-WLW-----W-L---L", "L-LWWLLWWLLLLLWL--WLL-------WWL-", "LW-WWLLWLWWWLWLW-----LLL--WLL-W-", "LLL-WWLLLLLWLLLL----L-W-L----W--", "WLLL-WWLLWLWWWWW-WWL----W-----WW", "WWWLL-WWWLWLLLWW----W-L---LLW---", "LWWWLL-LWWLWWLWW-L------------WL", "LLLWWLW-WLLWWLLW-L---------L-L--", "LLWWWLLL-LWLLLWW-W---WL--------W", "LWLWLWLWW-LWWLLWW--------WLL----", "LWLWWLWWLW-LLWWL-W--L--L-L------", "WWLLLWLLWLW-WWWW-WW--W----LLL---", "LWWWLWLLWLWL-LWW-------WWWW-W---", "WWLWLWWWWWLLW-WWWW-L-----L---WW-", "LLWWLLLWLWLLLL-W----LW---WW-----", "LWLWLLLLLLWLLLL--W---L--W--WL--W", "---------L---L---WWWWWWLLLLWWWWW", "L---L-WWL-LL-L-LL-LWWWLWWLWLWWWL", "WL--L------L----LW-WLLLLLWWWLLLL", "LW--W--------W--LLL-WLLWLWLWWWWW", "-W-W-L----W---W-LLWL-LLWWWWLLLLL", "--W-----L--L--LWLLWWW-LWLLWLLLLL", "--WL-W--W-------LWWWWW-WWWLWLLWW", "--W-------W-L---WLWLLLL-WWWLWLLW", "---WL-------L--LWLWWLWLL-LLWWWLL", "L--------LW-LWL-WWLLLWLLW-WLLWLL", "--L--W---W-WL-L-WLLWLLWLWL-LLWLW", "W-W--W-W-W-W---LLWLLWWLWLWW-WWWW", "-LW--L-----WL--WLLWLWWWLLWWL-LLL", "-L-L---W-----L--LLWLWWWWLLLLW-WW", "-WL-L-L------L--LLWLWWLWWWWLWL-W", "W---L-W-L------LLWWLWWLLWWLLWLL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EAGLES", "STEELERS", "REDSKINS", "BILLS", "TITANS", "BUCCANEERS", "DOLPHINS", "PATRIOTS", "BENGALS", "RAMS", "VIKINGS", "JAGUARS", "FALCONS", "LIONS", "RAVENS", "GIANTS", "CHIEFS", "SAINTS", "SEAHAWKS", "JETS", "NINERS", "BRONCOS", "PACKERS", "RAIDERS", "COLTS", "PANTHERS", "CHARGERS", "CARDINALS", "BROWNS", "BEARS", "TEXANS", "COWBOYS"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> teams = {"FALCONS", "RAVENS", "BILLS", "DOLPHINS", "JAGUARS", "BUCCANEERS", "COLTS", "STEELERS", "BROWNS", "COWBOYS", "SEAHAWKS", "EAGLES", "LIONS", "BENGALS", "CHARGERS", "SAINTS", "NINERS", "RAIDERS", "RAMS", "BRONCOS", "REDSKINS", "PACKERS", "BEARS", "JETS", "CARDINALS", "TITANS", "PANTHERS", "PATRIOTS", "GIANTS", "TEXANS", "VIKINGS", "CHIEFS"};
    vector<string> results = {"-WWWW-----W---W-W--W--------L---", "L-WWW---W-------L------L-L------", "LL-W--------LL--------W-L------W", "LLL-L------W----L-----W---------", "LL-W-LWWW----W--W----------W----", "----W-LLWL--L----WWW---W-W------", "----LW-WL--W--LWL---W---------WW", "----LWL-WL----W--------L------L-", "-L--LLWL-L---------L----W---W---", "-----W-WW-LLWL-------L-----W-L--", "L--------W-LW-L--L------L-W----W", "---L--L--WW-L-----W--L----------", "--W--W---LLW--W--------W--------", "--W-L----W----LWWW--------------", "L-----WL--W-LW-WWL--L---------W-", "------L------LL-LL---L--L-------", "LW-WL-W------LLW-L-LW-----------", "-----L----W--LWWW---W----L------", "-----L-----L-------WLW--L-----LL", "L----L--W-------W-L-WW---L---L--", "------L-------W-LLWL-LLL--------", "---------W-W---W--LLW--W----W---", "--LL----------------W--LLWLL--WW", "-W---L-W----L-------WLW-LLW-----", "--W-----L-W----W--W---WW-WL-W---", "-W---L-----------W-W--LWL-L-----", "----------L-----------WLWW----WW", "----L----L------------W-----LWLW", "W-------L------------L--L--W-LWL", "---------W---------W-------LW-WL", "------LW------L---W---L---LWLL-W", "--L---L---L-------W---L---LLWWL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SEAHAWKS", "SAINTS", "TITANS", "BILLS", "JETS", "JAGUARS", "GIANTS", "BROWNS", "COWBOYS", "BUCCANEERS", "STEELERS", "LIONS", "DOLPHINS", "NINERS", "RAVENS", "BRONCOS", "FALCONS", "EAGLES", "CHARGERS", "BENGALS", "PANTHERS", "REDSKINS", "RAMS", "RAIDERS", "PATRIOTS", "VIKINGS", "BEARS", "CHIEFS", "COLTS", "CARDINALS", "TEXANS", "PACKERS"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> teams = {"FALCONS", "BILLS", "PANTHERS", "RAVENS", "JAGUARS", "BUCCANEERS", "COLTS", "STEELERS", "BROWNS", "LIONS", "VIKINGS", "EAGLES", "COWBOYS", "PATRIOTS", "CHARGERS", "DOLPHINS", "NINERS", "RAIDERS", "RAMS", "BRONCOS", "REDSKINS", "PACKERS", "BEARS", "JETS", "CARDINALS", "SAINTS", "TITANS", "BENGALS", "SEAHAWKS", "TEXANS", "GIANTS", "CHIEFS"};
    vector<string> results = {"-WLWLWWLLWWLWLLWW---L-L-WW--LW--", "L-WWLLWLWWLLWLLL-L----WW-----W-W", "WL-WLWWWLLLLLWWL---W---W---WW---", "LLL-WWLWLWWLLLWL----WLLW----LW--", "WWWL-LWLLWWWWLWWW-LLWWW--------L", "LWLLW-WWWWWWWLLW---WW--W-------L", "LLLWLL-WWLWWLWLL-L---LW-W-W----W", "WWLLWLL-WLWLWLLWL------W-W-W---L", "WLWWWLLL-WWLWWLWW---W----W--W---", "LLWLLLWWL-WLWWLL-WW---------W--L", "LWWLLLLLLL-LLLWLW------WW-W-W--W", "WWWWLLLWWWW-WLWL--W-----------LW", "LLWWLLWLLLWL-LWW----LL--W-WWW---", "WWLWWWLWLLWWW-LL--W---LWL---L---", "WWLLLWWWWWLLLW-L-------W--W-LL-W", "LWWWLLWLLWWWLWW---------LW----WL", "L---L--WL-L------WLWLLWWLWWLLLWL", "-W----W--L------L-WWWLWLWLLLLLLW", "----W----L-L-L--WL-LWLWLWWLLWWLW", "--L-WL----------LLW-LLLWWLLWLWLL", "W--LLL--L---W---WLLW-LLLWLWLLLLL", "---WL-W-----W---WWWWW-WWLWLWLLWW", "WL-WL-L------W--LLLWWL-WLWLLLLLW", "-LLL-L-L--L--LL-LWWLWLL-LWLWLWLW", "L-----L---L-LW-WWLLLLWWW-LLLLLLW", "L------LL------LLWLWWLLLW-WLLLLW", "------L---L-L-L-LWWWLWWWWL-WWWLW", "--L----L----L---WWWLWLWLWWL-LLLW", "W-LW----LLL-LWW-WWLWWWWWWWLW-LLW", "LL-L----------W-WWLLWWWLWWLWW-LL", "-----------W---LLWWWWLWWWWWWWW-W", "-L--WWLW-WLL--LWWLLWWLLLLLLLLWL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EAGLES", "COWBOYS", "LIONS", "CHARGERS", "RAVENS", "DOLPHINS", "COLTS", "PANTHERS", "BROWNS", "PATRIOTS", "VIKINGS", "BILLS", "JAGUARS", "FALCONS", "STEELERS", "BUCCANEERS", "CHIEFS", "REDSKINS", "BRONCOS", "NINERS", "RAMS", "SEAHAWKS", "SAINTS", "JETS", "BEARS", "GIANTS", "CARDINALS", "PACKERS", "TEXANS", "BENGALS", "TITANS", "RAIDERS"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> teams = {"FALCONS", "BILLS", "PANTHERS", "RAIDERS", "VIKINGS", "BUCCANEERS", "COLTS", "CHIEFS", "BROWNS", "LIONS", "JAGUARS", "EAGLES", "COWBOYS", "GIANTS", "SAINTS", "CARDINALS", "RAMS", "DOLPHINS", "NINERS", "BRONCOS", "BEARS", "PACKERS", "RAVENS", "JETS", "PATRIOTS", "CHARGERS", "TITANS", "BENGALS", "SEAHAWKS", "TEXANS", "REDSKINS", "STEELERS"};
    vector<string> results = {"-LWW----W----W------L----W----W-", "W-LL----------WL-----LL-----L---", "LW-LL---W----------------W--W---", "LWW----------W------W-W--------L", "--W--LLL-------W-L---------L---L", "----W-WLL---W-------L-----W--W--", "----WL-W-------L-------------W--", "----WWL---L-----WWW-----W-W-L-W-", "L-L--W---WWW------WW--L-L-------", "--------L-WL-W--L-----------WL--", "-------WLL-L--L-------W----WL---", "--------LWW-W------WW-W--------W", "-----L-----L-LLW-W---------W----", "L--L-----L--W-WW---------L-L---W", "-L--------W-WL-W-------L-W---W--", "-W--L-W-----LLL---W-W--------LLW", "-------L-W-------WWL----WL-L-L--", "----W--L----L---L-LW-------L----", "-------LL------LLW-W-W------W---", "--------L--L----WLL---------W--L", "W--L-W-----L---L-----WWL--W-----", "-W----------------L-L-LL--------", "-W-L----W-LL--------LW-W-W------", "--------------W-----WWL------L--", "-------LW-------L--------WWL---L", "L-L----------WL-W-----L-L-WWL---", "-----L-L------------L---LL-W----", "----W-----L-LW--WW------WLL-----", "-WL----W-LW-------LL-----W---WWL", "-----LL--W----LWW------W----L-WW", "L------L-------W------------LL-L", "---WW------L-L-L---W----W---WLW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JAGUARS", "BEARS", "REDSKINS", "BROWNS", "RAIDERS", "COLTS", "JETS", "LIONS", "COWBOYS", "GIANTS", "EAGLES", "BRONCOS", "BILLS", "BUCCANEERS", "VIKINGS", "TEXANS", "RAVENS", "TITANS", "PATRIOTS", "PANTHERS", "CHARGERS", "FALCONS", "STEELERS", "RAMS", "NINERS", "SEAHAWKS", "CARDINALS", "SAINTS", "DOLPHINS", "PACKERS", "CHIEFS", "BENGALS"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> teams = {"ALABAMA", "MARYLAND", "NORTHDAKOTA", "ARKANSAS", "CALIFORNIA", "COLORADO", "OKLAHOMA", "NEWYORK", "TENNESSEE", "ALASKA", "HAWAII", "IDAHO", "ILLINOIS", "INDIANA", "MASSACHUSSETTS", "KANSAS", "NEBRASKA", "LOUISIANA", "MAINE", "GEORGIA", "IOWA", "MICHIGAN", "MINESOTA", "MISSISSIPPI", "VERMONT", "MONTANA", "KENTUCKY", "NEVADA", "NEWHAMPSHIRE", "NEWJERSEY", "NEWMEXICO", "DELAWRAE", "TEXAS", "ARIZONA", "OHIO", "WASHINGTON", "OREGON", "PENNSYLVANIA", "RHODEISLAND", "SOUTHCAROLINA", "SOUTHDAKOTA", "FLORIDA", "NORTHCAROLINA", "UTAH", "MISOURI", "VIRGINIA", "CONNECTICUT", "WESTVIRGINIA", "WISCONSIN", "WYOMING"};
    vector<string> results = {"-LLLLWLL---L----------L---------------L-W-------W-", "W-LLLWL-W----------W-W-----LW-------L--L----------", "WW-WLWL-------W--L------------------------L-------", "WWL-LLLW----------L-------L----------------------L", "WWWW-LL--L-L---------L----------L----------LL-----", "LLLWW-W------------WW----WWL-L----------L-L-------", "WWWWWL--------L----------------W---L----L-----W---", "W--L----WLWLWW--W---------L-L-L--L-W------W-------", "-L-----L-LLWWW----W-----------LL------------------", "----W--WW-LLLW--------------W----LL-----L-------L-", "-------LWW-LLL-----LL--W--------L--------------W--", "W---W--WLWW-LL-------------------W---------L------", "-------LLWWW-W-----W--L-----------L-W--W----------", "-------LLLWWL---------------W-------W------W------", "--L---W--------LLWLWL---L-------------------------", "--------------W-LLLWW------------------L-L--------", "-------L------WW-LWWL--W----------W---------------", "--W-----------LWW-LWLL---L----W--LL-------L------L", "---W----L-----WWLW-WL-L---L--------W--------------", "-L---L----W-L-LLLLL-W-----------W--L--------LW----", "-----L----W---WLWWWL----W--W--------L-------------", "-L--W------------W----LWWWWW---L------------------", "W-----------W-----W--W-WLLWW------------W-W-------", "----------L-----L----LL-LLWWL--------W-L-----W----", "--------------W-----LLWW-WLW----------------L----L", "-----L-----------W---LWWL-LL-W-------W-------W-L--", "---W-L-W----------W--LLLWW-L-------------------L--", "-W---W--------------LLLLLWW--L--------------------", "-L-----W-L---L---------W-----WLLLWWW---------W----", "-----W-------------------L-WL-WLLWL-L----W---L----", "-------WW--------L----------WL-LLWW----------W----", "------L-W------------W------WWW-LLW-L---L---------", "----W-----W--------L--------WWWW-LL---W-L---W-L--L", "-------W-W-L-----W----------LLLWW-W--L-------LL---", "---------W--W---LW----------LWLLWL--------W-------", "------WL----------LW--------L-------WWLLWL--------", "-W----------LL------W--------W-W---L-LLWLW--------", "-----------------------L-L-------W-LW-WLWL--------", "W-------------------------------L--WWL-LLW--------", "-W----------L--W-------W-----------WLWW-WW------W-", "L----WW--W------------L--------WW--LWLWL-L-----WL-", "---------------W-------------L-----WLWLLW---L-----", "--W--W-L---------W----L-----------L--------WWWWWLW", "----W------W-L----------------------------L-WLLWWW", "----W--------------W----W-------L--------WLL-WLLLW", "-------------------L---L-L--LWL--W--------LWL-WLWW", "------L-------------------------WW--------LWWL-WLW", "----------L--------------WW-------------L-LLWWL-WL", "L--------W-----------------------------LW-WLWLWL-L", "---W-------------W------W-------W---------LLLLLWW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CONNECTICUT", "NORTHCAROLINA", "OREGON", "DELAWRAE", "ILLINOIS", "MISSISSIPPI", "OHIO", "MINESOTA", "SOUTHDAKOTA", "VERMONT", "WISCONSIN", "UTAH", "WASHINGTON", "NEVADA", "LOUISIANA", "INDIANA", "TENNESSEE", "WESTVIRGINIA", "RHODEISLAND", "FLORIDA", "KENTUCKY", "ARIZONA", "PENNSYLVANIA", "SOUTHCAROLINA", "WYOMING", "NEWJERSEY", "ALABAMA", "NEWYORK", "ALASKA", "MISOURI", "CALIFORNIA", "KANSAS", "NEWMEXICO", "VIRGINIA", "NEWHAMPSHIRE", "TEXAS", "MICHIGAN", "MASSACHUSSETTS", "MONTANA", "HAWAII", "MARYLAND", "GEORGIA", "ARKANSAS", "MAINE", "IDAHO", "COLORADO", "OKLAHOMA", "NEBRASKA", "IOWA", "NORTHDAKOTA"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> teams = {"ALABAMA", "MARYLAND", "NORTHDAKOTA", "ARKANSAS", "DELAWRAE", "COLORADO", "OKLAHOMA", "NEWYORK", "TENNESSEE", "IOWA", "HAWAII", "ARIZONA", "ILLINOIS", "INDIANA", "MASSACHUSSETTS", "KANSAS", "NEBRASKA", "CALIFORNIA", "MAINE", "GEORGIA", "ALASKA", "LOUISIANA", "NORTHCAROLINA", "KENTUCKY", "PENNSYLVANIA", "MONTANA", "MISSISSIPPI", "NEVADA", "NEWHAMPSHIRE", "NEWJERSEY", "NEWMEXICO", "MICHIGAN", "TEXAS", "IDAHO", "OHIO", "WISCONSIN", "OREGON", "VERMONT", "FLORIDA", "MINESOTA", "SOUTHDAKOTA", "RHODEISLAND", "SOUTHCAROLINA", "UTAH", "MISOURI", "VIRGINIA", "CONNECTICUT", "WESTVIRGINIA", "WASHINGTON", "WYOMING"};
    vector<string> results = {"-WWWWWWLLWWL--WW-----WL---------------------------", "L-LLLLWLWWLW-L-W--W-------------------------------", "LW-WWLWLWLLW-------------L--------L-L-------L-----", "LWL-LWLLLLLLL------W--W------W-------W--L--------W", "LWLW-WWLWLWL------------------L--L----------W-----", "LWWLL-WLLLLLL------------L---L------------WL------", "LLLWLL-LWWWW-----L---------------W---------W-----W", "WWWWWWW-LLWW----------L---------W-----------WW----", "WLLWLWLW-WWW------W---W------------------L------W-", "LLWWWWLWL-WW---W---------------LL----------L----L-", "LWWWLWLLLL-W-W-------------W----L----W-----L------", "WLLWWWLLLLL-----------L-----------L---W--------W--", "---W-W-------WWLLWWLLWLLLL----W----L-------W-LW---", "-W--------L-L-LWLWWWWLLLLL---------L--------------", "L-----------LW-WLWLLWLLLW---L---W-----WL----------", "LL-------L--WLL-WLLLWWLLL-W----L--L---W-----------", "------------WWWL-WLLLWLLLL--L-L-W--------W--------", "------W-----LLLWL-LLWLWLW--L------L---------W--LL-", "-L------L---LLWWWW-LLLLLW---L------W----------L---", "---L--------WLWWWWW-LWLWW-------------WW----------", "------------WLLLWLWW-LLLWL--------W----W------W--W", "L-----------LWWLLWWLW-LLWL-----------------W-----L", "W--L---WL--WWWWWWLWWWW-LL-----------------W----W--", "------------WWWWWWWLWWW-W-----------L---------W--L", "------------WWLWWLLLLLWL-------------W---W------LW", "--W--W------WW--W---WW----LLLLLLWWLLL---L-L-------", "---------------L---------W-WLLWWWLWLLW-----------L", "----------L------W-------WL-LWLWWLLLL---L---------", "--------------W-W-W------WWW-LLWLLWLL----W-----L--", "---L-W-------------------WWLW-WWWWLWL-L---LLW-----", "----W-------L---W--------WLWWL-WLLLLL--------W----", "---------W-----W---------WLLLLL-WWLWL-----W-------", "-------L-WW---L-L--------LLLWLWL-LLWWW----W---W---", "----W-L------------------LWWWLWLW-LLL-----W-------", "--W--------W---W-W--L----WLWLWWWWW-LL----L--------", "------------WW----L------WWWWLWLLWW-L-------------", "--W--------------------W-WWWWWWWLWWW------LW------", "---L------L-------------L-L-----L-----LWLLLLLLWLWL", "-----------L--LL---L---------W-------W-LWLWWWLWWLL", "--------------W----LL----------------LW-LWWWWWWWWW", "---W---------------------W-W---------WLW-WWWLWLWLL", "--------W-------L-------L---L-----W--WWLL-LLWLLLWL", "-----L----------------L--W---W-LLL--WWLLLW-WWWLWWW", "-----WL--WW-L--------L-------W------LWLLLWL-LWLWWW", "--W-L--L---------L-----------L-------WLLWLLW-LWLLL", "-------L----W-----------------L------WWLLWLLW-LWWL", "------------L-----W-L--L--------L----LLLWWWWLW-LLW", "-----------L-----W----L-----W--------WLLLWLLWLW-LW", "--------LW-------W------W------------LWLWLLLWLWW-L", "---L--L-------------LW-WL-W----------WWLWWLLWWLLW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OREGON", "IDAHO", "NEVADA", "ARKANSAS", "ARIZONA", "NEWMEXICO", "MICHIGAN", "NORTHDAKOTA", "WISCONSIN", "MASSACHUSSETTS", "NORTHCAROLINA", "TEXAS", "KENTUCKY", "COLORADO", "KANSAS", "MONTANA", "ALASKA", "NEWYORK", "LOUISIANA", "MAINE", "TENNESSEE", "MISSISSIPPI", "NEWJERSEY", "NEWHAMPSHIRE", "ALABAMA", "GEORGIA", "SOUTHCAROLINA", "OKLAHOMA", "INDIANA", "RHODEISLAND", "OHIO", "IOWA", "VIRGINIA", "DELAWRAE", "UTAH", "WYOMING", "CALIFORNIA", "CONNECTICUT", "NEBRASKA", "MINESOTA", "MISOURI", "WESTVIRGINIA", "ILLINOIS", "WASHINGTON", "FLORIDA", "MARYLAND", "PENNSYLVANIA", "VERMONT", "HAWAII", "SOUTHDAKOTA"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> teams = {"ALABAMA", "MARYLAND", "NORTHDAKOTA", "ARKANSAS", "DELAWRAE", "WESTVIRGINIA", "OKLAHOMA", "NEWYORK", "TENNESSEE", "TEXAS", "HAWAII", "ARIZONA", "OHIO", "INDIANA", "MASSACHUSSETTS", "KANSAS", "MISSISSIPPI", "IOWA", "NEWHAMPSHIRE", "WISCONSIN", "ALASKA", "LOUISIANA", "NORTHCAROLINA", "KENTUCKY", "PENNSYLVANIA", "MONTANA", "NEBRASKA", "NEVADA", "MAINE", "NEWJERSEY", "NEWMEXICO", "UTAH", "CALIFORNIA", "IDAHO", "ILLINOIS", "MICHIGAN", "OREGON", "VERMONT", "SOUTHCAROLINA", "MINESOTA", "SOUTHDAKOTA", "RHODEISLAND", "FLORIDA", "GEORGIA", "MISOURI", "VIRGINIA", "CONNECTICUT", "COLORADO", "WASHINGTON", "WYOMING"};
    vector<string> results = {"-LLLLL-L---------------------L--LW----W------W----", "W-WWLW--------W------L-------L------LW---W--W-----", "WL-WLW-------------L------W-L---------------------", "WLL-LL--------------W------W------------------L---", "WWWW-W----------------------------W-------L---W---", "WLLWL---L--------------W-L------W---L----L--------", "-------WLWWL-L-----L--------W--L--W-W------------W", "W-----L-WWLWW-----L-W---W------L----------------W-", "-----WWL-WWL---------------W---------L---W--------", "------LLL-LL------L------L------------L-----------", "------LWLW-L--------WLW----------W-L--L-------L---", "------WLWWW---------------W------L-L-----------LL-", "-------L-----WLLWL-----------L----L---L--------W--", "------W-----L-LWWW--------------W-----------------", "-L----------WW-LWWWL------------------------------", "------------WLW-WW-----L----L-----W----W--L-----L-", "------------LLLL-L----W---WW-----W--W-------L-----", "------------WLLLW------L---WL----------W----W-----", "-------W-W----L----WLLWWL----W--------L-----------", "--W---W-------W---L-WLWWW-----------L--------W----", "---L---L--L-------WL-LLLWW---------W-------L------", "-W--------W-------WWW-LWL------------W------W-----", "----------L-----L-LLWW-LL----L-------------W----W-", "-----L---------W-WLLWLW-L---L--------------L----W-", "-------L----------WLLWWW------------W---W--W--L---", "-----W---W----------L-----LLLLL---------W--------W", "--L--------L----L--------W-LWLL----L--------------", "---L----L-------LL-------WW-WWL--------------W----", "--W---L--------W-W-----W-WLL-LW---L---------------", "WW----------W-----L---W--WWLW-W----W-W------------", "-------------------------WWWLL---W-L--L-L---------", "------WW------------------------LWWLWW-L----------", "W----L-------L-----------------W-LWWL----------W--", "L---------LW----L-------------LLW-WWL------L-----L", "----L-L-----W--L------------W--LLL-WW------------L", "----------WW--------L-----W--LWWLLL-L-------------", "-W---WL---------L--W----L------LWWLW--------------", "-L------W------------L-------L-L------WLWWL-------", "L--------WW-W-----W-----------W------L-LWWW-------", "---------------L-L-------------W-----WW-LLWL------", "------------------------LL----W------LLW-LL-----W-", "-L---W--L----------------------------LLWW-L--L----", "----W----------W---------------------WLLWW--WL-L--", "--------------------W-LWL--------W-----W----LLLWWW", "-L--------------WL---L--------------------LW-WLWWW", "L------------------L-------L-------------WWWL-LLWL", "---WL-----W-------------W------------------WWW-LLW", "-----------WL-------------------L---------WLLWW-LW", "-------L---W---W------LL----------------L--LLLWW-L", "------L------------------L-------WW--------LLWLLW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VERMONT", "OHIO", "NEWHAMPSHIRE", "MASSACHUSSETTS", "PENNSYLVANIA", "MARYLAND", "ALABAMA", "MISOURI", "NORTHCAROLINA", "WISCONSIN", "LOUISIANA", "OKLAHOMA", "OREGON", "INDIANA", "MINESOTA", "ALASKA", "DELAWRAE", "TEXAS", "FLORIDA", "CONNECTICUT", "KENTUCKY", "HAWAII", "NORTHDAKOTA", "ILLINOIS", "ARKANSAS", "IOWA", "UTAH", "MAINE", "NEBRASKA", "RHODEISLAND", "WESTVIRGINIA", "NEVADA", "NEWMEXICO", "VIRGINIA", "COLORADO", "WASHINGTON", "KANSAS", "MICHIGAN", "SOUTHDAKOTA", "NEWJERSEY", "WYOMING", "MISSISSIPPI", "CALIFORNIA", "NEWYORK", "IDAHO", "TENNESSEE", "GEORGIA", "ARIZONA", "MONTANA", "SOUTHCAROLINA"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> teams = {"ALABAMA", "MARYLAND", "NORTHDAKOTA", "COLORADO", "DELAWRAE", "OKLAHOMA", "WESTVIRGINIA", "NEWYORK", "MAINE", "SOUTHDAKOTA", "HAWAII", "ARIZONA", "OHIO", "ILLINOIS", "MASSACHUSSETTS", "KANSAS", "MISSISSIPPI", "TEXAS", "WYOMING", "MINESOTA", "ALASKA", "LOUISIANA", "NORTHCAROLINA", "KENTUCKY", "PENNSYLVANIA", "MONTANA", "NEBRASKA", "NEVADA", "OREGON", "NEWJERSEY", "NEWMEXICO", "UTAH", "CALIFORNIA", "IDAHO", "VIRGINIA", "MICHIGAN", "TENNESSEE", "VERMONT", "SOUTHCAROLINA", "WISCONSIN", "IOWA", "RHODEISLAND", "FLORIDA", "GEORGIA", "MISOURI", "INDIANA", "CONNECTICUT", "ARKANSAS", "WASHINGTON", "NEWHAMPSHIRE"};
    vector<string> results = {"-LWWWWWL---------------------------LW----W--------", "W-LLWWWL-W-----W----------W--WL-------------------", "LW-LLWLW-------------L-W-------------------------L", "LWW-LLLL-L---L-LL--L---------------W--------------", "LLWW-LLW--W-----------W---------------W-----------", "LLLWW-WL--W--L-------W--------LL--L--------L---W--", "LLWWWL-W------W-L--W-------------L--------W-------", "WWLWLWL-----W-W-W---L----W--------W----W-----L--L-", "---------WWLWLWW--L-----------L-------W---------W-", "-L-W----L-WWWWWWW-L-------L------------L----------", "----LL--LL-WWLWW---W---------W--------W-----------", "--------WLL-WWLL----------L-------L--W------------", "-------LLLLL-WWW---------------W------------------", "---W-W--WLWLL-LW----WW-W------------------W-------", "------LLLLLWLW-W---------------------L--W---------", "-L-W----LLLWLLL-------------------L--------L-W----", "---W--WL-L-------LWLWLLWL------------L---------WWW", "----------------W-LLWWLLL---W------W-W------------", "--------WW------LW-WWWLWW-------------L----------W", "---W--L---L-----WWL-LLLLL---L---------------------", "-------W-----L--LLLW-WWWL-L---------L-------------", "--W--L-------L--WLLWL-LLL----W---------L----L-----", "----L-----------WWWWLW-LL---W-----------L-----W---", "--L----------L--LWLWLWW-W------LL-W-L---L---L-L---", "----------------WWLWWWWL---W---L--------L---------", "-------L------------------LWWLLWWL--WWL-----------", "-L-------W-W--------W----W-WLLLWW--W-----------L-L", "------------------------LLL-WLWWW-------L-----L---", "-----------------L-W--L--LWL-LLLL--------L--------", "-L--------L----------L---WWWW-WWLL-----------W-W-L", "-W---W--W----------------WWLWL-WW-W--W------------", "-----W------L----------WWLLLWLL-LL-----L------L---", "-----------------------W-LLLWWLW----L----L-W--W---", "------W------------------W---W-W--WWLWLLL---------", "-----W-L---W---W-------L------L--L-WWLLLL--L------", "W--L-------------L--------L------LL-WLWWW-----L---", "L-------------------W--W-L------WWLL-WWLW---------", "-----------L--W-WL-------L----L--LWWL-LWW-W------W", "----L---L-L-------W------W-------WWLLW-WW---W-L---", "-------L-W-----------W---------W-WWLWLL-L-W-------", "--------------L-------WWW--W-----WWLLLLW----------", "L---------------------------W---W---------WLWWWLWL", "------L------L-----------------------L-L-L-LWWLLWL", "-----W---------W----------------L-W------WW-LWLLWW", "---------------------W-W--------------L--LLW-LLWWW", "-------W-------L-------------L-----------LLLW-WLLW", "----------------------LW---W---WL--W--W--LWWWL-WLL", "-----L----------L---------W--L-----------WWWLWL-LW", "-------WL-------L------------------------LLLLWWW-L", "--W-------------L-L-------W--W-------L---WWLLLWLW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SOUTHCAROLINA", "MAINE", "MARYLAND", "DELAWRAE", "MASSACHUSSETTS", "FLORIDA", "MICHIGAN", "MONTANA", "ALABAMA", "SOUTHDAKOTA", "NEWHAMPSHIRE", "WASHINGTON", "NEVADA", "OKLAHOMA", "ALASKA", "VIRGINIA", "IDAHO", "CALIFORNIA", "VERMONT", "TENNESSEE", "IOWA", "WYOMING", "ARIZONA", "ARKANSAS", "UTAH", "INDIANA", "OHIO", "LOUISIANA", "NEBRASKA", "COLORADO", "NEWMEXICO", "HAWAII", "NEWJERSEY", "OREGON", "KENTUCKY", "RHODEISLAND", "WISCONSIN", "MISSISSIPPI", "KANSAS", "NORTHCAROLINA", "NORTHDAKOTA", "NEWYORK", "WESTVIRGINIA", "CONNECTICUT", "MISOURI", "PENNSYLVANIA", "GEORGIA", "TEXAS", "MINESOTA", "ILLINOIS"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> teams = {"FLORIDA", "WESTVIRGINIA", "NORTHDAKOTA", "COLORADO", "DELAWRAE", "HAWAII", "MARYLAND", "NEWYORK", "MAINE", "OKLAHOMA", "NEWJERSEY", "INDIANA", "PENNSYLVANIA", "ILLINOIS", "MASSACHUSSETTS", "CALIFORNIA", "MISSISSIPPI", "TEXAS", "WYOMING", "MINESOTA", "ALASKA", "IOWA", "NORTHCAROLINA", "KENTUCKY", "ARKANSAS", "MONTANA", "NEBRASKA", "NEVADA", "OREGON", "SOUTHDAKOTA", "NEWMEXICO", "UTAH", "KANSAS", "IDAHO", "RHODEISLAND", "MICHIGAN", "TENNESSEE", "VERMONT", "SOUTHCAROLINA", "WISCONSIN", "LOUISIANA", "VIRGINIA", "ALABAMA", "GEORGIA", "MISOURI", "ARIZONA", "CONNECTICUT", "OHIO", "WASHINGTON", "NEWHAMPSHIRE"};
    vector<string> results = {"-LWLLL---------L------------------L-------W------L", "W-WLLLL--W--L-------L----------------L-----W------", "LL-LWL---------WL------L---------------------W----", "WWW-WL-------WLW--W-------L-------L---------------", "WWLL-L--L-------------------W-----W----------L----", "WWWWW-L-----W--------------W----------------------", "-W---W-LLWLW-----------L--L-----------W-------WL--", "------W-WWWW---L---W-------------L---------------W", "----W-WL-WWW-----------------W----------W---------", "-L----LLL-WW--L------------L----------------------", "------WLLL-W----L--LW-----------L---------W-------", "------LLLLL-----W----L-----L-------------W--WWW---", "-W---L-------LWWWL-----------------------------W--", "---L--------W-LLLLW------L------------------L-----", "---W-----W--LW-LWW------------W------L------------", "W-LL---W----LWW-WW----------W-WL-L---------------W", "--W-------WLLWLL-L--------------------W--W-WWL----", "------------WWLLW------------------L-----------L--", "---L---------L-----WLLWLL-W--L--------------------", "-------L--W-------L-LLLLL------W-L--W-------------", "-W--------L-------WW-LWWW-------------W-----W-----", "-----------W------WWW-WLW-L----W----------------L-", "------------------LWLL-LL---W----------------WW---", "--W---W-----------WWLWW-WW------------WW--W----W--", "------------------WWLLWL-L-----------L-W-------L--", "-------------W---------LW-WWLLW-L----L--W-------W-", "---W--W-----------L--W---L-WWWW-L------------L----", "-----L---W-W-------------LL-WWL----L------W---W---", "----L----------L------L--WLL-LW------LL--------L--", "--------L---------W------WLLW-L---------L---------", "--------------LL---------LLWLW-----W-----W-----W-W", "---------------W---L-L----------LWWLW----W--------", "----------W--------------WW----W-WLLL---W------WW-", "-------W-------W---W-----------LL-LWW----------W--", "W--WL--------------------------LWW-LL---W----W----", "-----------------W---------W--LWWLW-W--W---W---L--", "-------------------L-----------LWLWL----L------W--", "-W------------W---------WW--W---------WLLWL-------", "------L---------L---L--L----W--------L-WLWL-------", "-----------------------LL----------L-WL-LLLW------", "--------L----------------L---W--L-L-WWWW-WL------W", "-----------L----L-------------LL-----LLWL-W-------", "L---------L------------L---L---------WWWWL--------", "-L--------------L------------------L---L----LLLLLW", "-----------L-W--L---L----------------------W-WLLLL", "--L-W------L----W-----L---W-------L--------WL-WWWW", "------L----L----------L----L---------------WWL-WLL", "------W-----L----W-----LW---W-L-LL-WL------WWLL-LW", "---------------------W---L------L----------WWLWW-W", "W------L-------L--------------L---------L--LWLWLL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"KANSAS", "IDAHO", "NORTHDAKOTA", "RHODEISLAND", "IOWA", "MINESOTA", "UTAH", "MONTANA", "TENNESSEE", "TEXAS", "MASSACHUSSETTS", "NEWJERSEY", "MARYLAND", "ARKANSAS", "WYOMING", "NEBRASKA", "PENNSYLVANIA", "OKLAHOMA", "MAINE", "SOUTHDAKOTA", "SOUTHCAROLINA", "DELAWRAE", "ILLINOIS", "NORTHCAROLINA", "MICHIGAN", "COLORADO", "HAWAII", "NEWYORK", "OHIO", "NEWMEXICO", "INDIANA", "OREGON", "NEVADA", "KENTUCKY", "CALIFORNIA", "LOUISIANA", "WESTVIRGINIA", "WISCONSIN", "FLORIDA", "ALASKA", "ALABAMA", "WASHINGTON", "NEWHAMPSHIRE", "VIRGINIA", "ARIZONA", "MISOURI", "CONNECTICUT", "GEORGIA", "VERMONT", "MISSISSIPPI"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> teams = {"FLORIDA", "ALABAMA", "NORTHDAKOTA", "COLORADO", "DELAWRAE", "WESTVIRGINIA", "MARYLAND", "NEWYORK", "IDAHO", "GEORGIA", "NEWJERSEY", "INDIANA", "PENNSYLVANIA", "NEWMEXICO", "MASSACHUSSETTS", "CALIFORNIA", "MISSISSIPPI", "TEXAS", "IOWA", "MINESOTA", "ALASKA", "SOUTHDAKOTA", "NORTHCAROLINA", "LOUISIANA", "ARKANSAS", "WASHINGTON", "NEBRASKA", "RHODEISLAND", "OREGON", "WYOMING", "ILLINOIS", "UTAH", "KANSAS", "MAINE", "KENTUCKY", "MICHIGAN", "TENNESSEE", "VERMONT", "SOUTHCAROLINA", "WISCONSIN", "NEVADA", "VIRGINIA", "HAWAII", "OKLAHOMA", "MISOURI", "ARIZONA", "CONNECTICUT", "OHIO", "MONTANA", "NEWHAMPSHIRE"};
    vector<string> results = {"-WLLWWL-W--------WL------W------------------L-----", "L-LLWLL----------------W-----------L---L----------", "WW-LWLL-----W------L--W--------------------------L", "WWW-WWW--------------WW------------------W-------W", "LLLL-WWL---------W----------W-------------WWL-----", "LWWLL-W-W-L------------L------L---------------W---", "WWWLLL------W------L-------------W--W---WW--------", "----W---WWWWWL---W-W------W-------W--------------W", "L----L-L-LLWLL------LL--W----------L--------------", "-------LW-WWWW-----W--L----WL-L----WL--------L----", "-----W-LWL-LWL---------------L--W------W---WW-W---", "-------LLLW-WL----L---W--W----W-------------------", "--L---LLWLLL-W-LWL--------------W-----------------", "-------WWLWWL-----L----------LL-------L------W----", "---------------LLLWLL---------------LW-L--L-L---L-", "------------W-W-WWWWL-----W---------------------W-", "------------L-WL-LWLL----L-W------L---------L-----", "L---L--L----W-WLW-WLL-----------------------------", "W----------W-WLLLL-LW---W-------------------------", "--W---WL-L----WLWWW-WL--W-------------------------", "--------W-----WWWWLL-------------L-L--------------", "---L----W----------W--WWWLWL----------W--L-L------", "--LL-----W-L---------L-WLLWW------------------LL--", "-L---W---------------LL-LLWL---W-------LL---W-----", "--------L---------LL-LWW-WLL----------L--------W--", "L----------L----W----WWWL-WW--L--W-----L----------", "-------L-------L-----LLLWL-L---W-----------WL----W", "---------L------L----WLWWLW-----L-----------------", "----L----W-------------------LWWLWLL-L----------L-", "----------W--W--------------W-LWWLL-------L-L--W--", "-----W---W-L-W-----------W--LW-WWWW---------------", "-----------------------L--L-LLL-WLW----W-----LL---", "----------L-L--------------WWLLL-LWW------------L-", "------L-------------W----L--LWLWW-W----W--L-L-----", "-------L--------W-----------WWLLLL----LW------L---", "-W------WL----------W-------W---L---LWWLWW-----W--", "------L--W----W--------------------W-WWLLW--------", "--------------L-------------W------LL-WLWW------L-", "-------------W-------L--W---------WLLL-LLL--------", "-W--------L---W--------W-W-----L-LLWWWW-WW------W-", "------L----------------W-----------LWLWL-L-L------", "---L--L--------------W-------------LLLWLW----L----", "----L---------W--------------W---W---------WLLWLLL", "----L-----L----------W----L-------------W-L-WLLWLL", "W---W-----L---W-W------L--W--W---W--------WL-WWLWL", "---------W---L-----------------W---------WWWL-WLWW", "-----L----L-----------W--------W--W-------LWLL-LWL", "----------------------W-L----L-----L------WLWWW-LL", "--------------WL------------W---W----W-L--WWLLLW-W", "--WL---L------------------L---------------WWWLWWL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VIRGINIA", "NEWHAMPSHIRE", "ALABAMA", "GEORGIA", "DELAWRAE", "MASSACHUSSETTS", "MAINE", "MINESOTA", "NEWMEXICO", "INDIANA", "FLORIDA", "NORTHDAKOTA", "IDAHO", "OHIO", "WESTVIRGINIA", "MARYLAND", "MONTANA", "NEWJERSEY", "COLORADO", "TEXAS", "OKLAHOMA", "OREGON", "PENNSYLVANIA", "NEBRASKA", "TENNESSEE", "HAWAII", "KANSAS", "KENTUCKY", "WYOMING", "ARIZONA", "NEVADA", "NEWYORK", "WASHINGTON", "SOUTHCAROLINA", "CONNECTICUT", "NORTHCAROLINA", "MISSISSIPPI", "UTAH", "ILLINOIS", "MISOURI", "VERMONT", "IOWA", "ALASKA", "CALIFORNIA", "WISCONSIN", "LOUISIANA", "MICHIGAN", "SOUTHDAKOTA", "RHODEISLAND", "ARKANSAS"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> teams = {"FLORIDA", "ALABAMA", "NORTHDAKOTA", "COLORADO", "DELAWRAE", "WESTVIRGINIA", "NEVADA", "NEWYORK", "MICHIGAN", "GEORGIA", "NEWJERSEY", "INDIANA", "PENNSYLVANIA", "NEWMEXICO", "KENTUCKY", "CALIFORNIA", "MISSISSIPPI", "TEXAS", "IOWA", "MINESOTA", "ALASKA", "SOUTHDAKOTA", "NORTHCAROLINA", "HAWAII", "ARKANSAS", "WASHINGTON", "NEBRASKA", "RHODEISLAND", "MASSACHUSSETTS", "OREGON", "SOUTHCAROLINA", "OKLAHOMA", "KANSAS", "MAINE", "WYOMING", "IDAHO", "TENNESSEE", "VERMONT", "ILLINOIS", "WISCONSIN", "MARYLAND", "VIRGINIA", "CONNECTICUT", "UTAH", "MISOURI", "ARIZONA", "LOUISIANA", "OHIO", "MONTANA", "NEWHAMPSHIRE"};
    vector<string> results = {"-WLLWLWWWLWL-------L---L-------------------L------", "L-WLLWWWWLLW------------------L-----------L-------", "WL-LLLWLLWLL---------W------------------L--L-L--L-", "WWW-LLLLLLLWW--W-------W-L-L--L-------------------", "LWWW-LWLLLLW------L------------LL------------L----", "WLWWW-LLLWWL------------W--L--W----------L-------W", "LLLWLW-WWWWW-L---W-------------L--W-W--W-------W--", "LLWWWWL-WLLL---L-L----W---------------------W-----", "LLWWWWLL-WWLW------------WW-W-----------W-L----L-L", "WWLWWLLWL-LW---L-L-------------W--W--W---W--L-----", "LWWWWLLWLW-L-----------L-----------L-------L----W-", "WLWLLWLWWLW------W----L---------------------------", "---L----L----WLWLLWWWLLWW-----------W------W------", "------W-----L-LLLLWWWWWLW--L--------------W-W----L", "------------WW-LLWLLWWWWW-L-----------W----L---W--", "---L---W-W--LWW-LWWWWWWWWW-W--------------------W-", "------------WWWW-LWLLWLWL------------WL--WL-------", "------LW-W-LWWLLW-WWLWWWW------------------------L", "----W-------LLWLLL-WLWLLL-----W--WW---------------", "W-----------LLWLWLL-LWWWL-------W---LW-W------WL--", "------------LLLLWWWW-WLWW-L--LL----WW--W--W-------", "--L---------WLLLLLLLL-LWLLL-----L--------L--------", "-------L---WWLLLWLWLWW-WW--W-----L----------------", "W--L------W-LWLLLLWLLLL-W--L-------------W----W-L-", "-----L------LLLLWLWWLWLL----WL-----W-W------------", "---W----L------L-----W----WLWWLWLLWLW--L--L-------", "--------L-----W-----WW---L-WLLWLWLWLL-------------", "---W-W-------W-L------LW-WL-LLWLLWLLL-------------", "--------L---------------LLWW-LWLWLLLL---------W---", "--------------------W---WLWWW-WLWWLWLL-------W---W", "-W-W-L------------L-W----WLLLL-WWLWWW---L---W-----", "----W-W--L---------------LWWWWL-LWWWLW--L---------", "----W--------------L-W---WLWLLLW-WWWW---L---------", "------------------L---W--WWLWLWLL-WLL-L-W-------L-", "------L--L--------L------LLWWWLLLL-LW----W-----W--", "----------W---------L---LWWWWLLLLWW-L---WW--------", "------L-----L------WL----LWWWWLWLWLW--L--W--W-----", "---------L------L--L----L----W-L------WWWLLLWWLWLW", "--------------L-W----------------W--WL-LLLLLLWLWLW", "------L------------LL----W-----------LW-WWWWLWWWLW", "--W-----L---------------------WWWL-L-LWL-WWLWLWLWL", "-----W---L------L----W-L----------LLLWWLL-WLLLWWLL", "-W------W----L--W---L----W-----------WWLLL-WWLLLWW", "W-W-------W-L-W----------------------WWLWWL-LLWLWW", "-------L-W---L----------------L-----LLWWLWLW-LLLLL", "--W-W------------------------L-------LLLWWWWW-WLWW", "-------------------L---L----L--------WWLLLWLWL-WLW", "------L-W-----L----W--------------L--LLLWLWWWWL-WL", "--W-------L----L-------W---------W---WWWLWLLWLWL-W", "-----L--W----W---W-----------L-------LLLWWLLWLLWL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ALASKA", "PENNSYLVANIA", "TEXAS", "RHODEISLAND", "ARKANSAS", "NEWHAMPSHIRE", "WASHINGTON", "MINESOTA", "KENTUCKY", "OKLAHOMA", "NEWYORK", "CALIFORNIA", "VERMONT", "MAINE", "OREGON", "NORTHCAROLINA", "NEVADA", "NEWMEXICO", "OHIO", "DELAWRAE", "WYOMING", "WISCONSIN", "MASSACHUSSETTS", "NEBRASKA", "CONNECTICUT", "COLORADO", "ILLINOIS", "INDIANA", "IOWA", "MISOURI", "TENNESSEE", "MISSISSIPPI", "MARYLAND", "IDAHO", "NEWJERSEY", "SOUTHCAROLINA", "SOUTHDAKOTA", "ALABAMA", "GEORGIA", "HAWAII", "NORTHDAKOTA", "FLORIDA", "MONTANA", "UTAH", "MICHIGAN", "KANSAS", "ARIZONA", "VIRGINIA", "LOUISIANA", "WESTVIRGINIA"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> teams = {"FLORIDA", "MISOURI", "OREGON", "COLORADO", "DELAWRAE", "WESTVIRGINIA", "NEVADA", "NEWMEXICO", "MICHIGAN", "GEORGIA", "ARKANSAS", "INDIANA", "PENNSYLVANIA", "NEWYORK", "OKLAHOMA", "CALIFORNIA", "MISSISSIPPI", "IOWA", "VIRGINIA", "MINESOTA", "ALASKA", "NEWHAMPSHIRE", "NORTHCAROLINA", "HAWAII", "WASHINGTON", "NEWJERSEY", "NEBRASKA", "RHODEISLAND", "MASSACHUSSETTS", "NORTHDAKOTA", "SOUTHCAROLINA", "KENTUCKY", "KANSAS", "MAINE", "WYOMING", "MONTANA", "TENNESSEE", "ARIZONA", "ILLINOIS", "WISCONSIN", "MARYLAND", "TEXAS", "CONNECTICUT", "UTAH", "ALABAMA", "VERMONT", "LOUISIANA", "OHIO", "IDAHO", "SOUTHDAKOTA"};
    vector<string> results = {"-LLWLLWWLWW--------W------------L--------L--------", "W-LWWWLWWWL---W----------------L----W------------W", "WW-LWWWWWLL---------------------W----W-----W-L--W-", "LLW-LWLLLW-L----------------L-W----L------W--W----", "WLLW-WWLLL--------L------W------------L----------W", "WLLLL-LLLL---------W------------------WL----L--W--", "LWLWLW-LWL--L------L-------------L-----------W-L--", "LLLWWWW-LL------------W----L------W--W-------W----", "WLLWWWLW-L-------------------W-----------L----W---", "LLWLWWWWW-W---L---------W--------W----------------", "LWW------L-WWLWLWWLL-------W-------------LW-------", "---W------L-WWLWLLWLL--W-L-WW--L-W-----L---L------", "------W---LL-LLLWWLW---------LW-W--L------L-------", "----------WLW-LLLLWLW-----------WL---------------W", "-L-------WLWWW-LWLWW-----------------L------------", "----------WLWWW-WWWW--WL--L-----------W-----W-----", "----------LWLWLL-WLW----L----L---W-----W---W-W----", "----------LWLWWLL-WWW-------------------LL--L-----", "----W-----WLWLLLWL-L----W----W--L-L---------------", "L----LW---WWLWLLLLW-------------------------------", "-----------W-L---L---LWLLLLWLWW--W------W-------W-", "--------------------W-WLLLWLLL------WL-------LW---", "-------L-------L----LL-LWWWWWL----W---L-W------L--", "-----------L---W----WWW-LWLLLL---------L------L---", "---------L------W-L-WWLW-LLWWW-----WL-------WL----", "----L------W--------WWLLW-WWWL--------L-W-----W---", "---------------W----WLLWWL-WLL--L-L----W----------", "-------W--LL--------LWLWLLL-LW----------L---------", "---W-------L--------WWLWLLWW-L-W------------------", "--------L---W---W-L-LWWWLWWLW------L--------------", "---L--------L-------L----------WLWLLWLLWL------W-L", "-W---------W----------------L-L-LLWLWWLW----------", "W-L---------LL----W-------W---WW-WLLLLWW--L-------", "------W--L-L-W--L---L---------LWL-WWWWWW---W-----L", "-------L----------W---L---W---WLWL-LWWWL----------", "---W--------W-----------L----WWWWLW-WLWW--L-------", "-L-------------------L--W-----LLWLLL-LWW---------W", "--L----L------W------W--------WLWLLWW-WW----------", "----WL---------L------W--W----WWLLLLLL-L----------", "-----W-----W----L------W--L---LLLLWLLLW------L----", "-----------------W--L-L--L-W--W----------WLLWWLLLL", "W-------W-W------W----------------------L-WLLWWLWW", "---L------L-W-------------------W--W----WL-WWWWLWL", "--L--------W----L----------------L------WWL-WLWLLL", "-----W---------L-W------L---------------LWLL-LWWWW", "--WL--LL--------L----W--W--------------WLLLWW-LWLW", "--------L------------L-W-L--------------WLLLLW-WLW", "-----LW---------------W-------L---------WWWWLLL-WL", "--L-----------------L-------------------WLLWLWWL-L", "-L--L--------L----------------W--W--L---WLWWLLLWW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ARKANSAS", "OKLAHOMA", "GEORGIA", "MICHIGAN", "FLORIDA", "COLORADO", "MISOURI", "UTAH", "VIRGINIA", "IOWA", "PENNSYLVANIA", "NEWYORK", "IDAHO", "NEVADA", "OREGON", "DELAWRAE", "ARIZONA", "NEWMEXICO", "WASHINGTON", "KENTUCKY", "NORTHCAROLINA", "NEBRASKA", "NORTHDAKOTA", "MISSISSIPPI", "ALABAMA", "ILLINOIS", "TENNESSEE", "KANSAS", "CONNECTICUT", "TEXAS", "MONTANA", "WESTVIRGINIA", "RHODEISLAND", "LOUISIANA", "SOUTHDAKOTA", "HAWAII", "VERMONT", "CALIFORNIA", "INDIANA", "WYOMING", "MAINE", "NEWHAMPSHIRE", "MASSACHUSSETTS", "MINESOTA", "MARYLAND", "SOUTHCAROLINA", "ALASKA", "WISCONSIN", "NEWJERSEY", "OHIO"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> teams = {"KANSAS", "MISOURI", "VERMONT", "COLORADO", "DELAWRAE", "WESTVIRGINIA", "ALASKA", "UTAH", "MICHIGAN", "GEORGIA", "NEWHAMPSHIRE", "HAWAII", "PENNSYLVANIA", "NEWYORK", "OKLAHOMA", "CALIFORNIA", "MISSISSIPPI", "WASHINGTON", "VIRGINIA", "MINESOTA", "CONNECTICUT", "ARKANSAS", "NORTHCAROLINA", "INDIANA", "IOWA", "NEWJERSEY", "NEBRASKA", "RHODEISLAND", "MASSACHUSSETTS", "TENNESSEE", "SOUTHCAROLINA", "KENTUCKY", "OREGON", "MAINE", "WYOMING", "MONTANA", "NORTHDAKOTA", "ARIZONA", "WISCONSIN", "ILLINOIS", "MARYLAND", "TEXAS", "NEVADA", "NEWMEXICO", "ALABAMA", "FLORIDA", "LOUISIANA", "OHIO", "IDAHO", "SOUTHDAKOTA"};
    vector<string> results = {"-LLLWLWWWLWL-------------------L----------L-----L-", "W-LWLWLWLWLWL-------------------L----------WWL----", "WW-LLWLWWLLWWW---------------L-------W------W-----", "WLW-LLLLLLLL-L-------W--L---W---------------L-W--L", "LWWW-LWWWLLW---------W-----W-W----------------W---", "WLLWW-LLLLWL-----L--W--------LL------------------W", "LWWWLW-LWLWLL----------------LL----WW-----WL------", "LLLWLWW-LWWL---------------L-W---------WL----WW---", "LWLWLWLW-WLL-----------W--L----L----LL-------WLL--", "WLWWWWWLL-WW-----W-------W--W---W-----------------", "LWWWWLLLWL-LL--W-------L----L--------L------------", "WLLWLWWWWLW------------L-------------------WW-----", "-WL---W---W--WWWLWWLWWLWW--W-------------------W--", "--LW--------L-WWLLLLLLLWW---L------------W--------", "------------LL-WWLWLWWLWW------W--W---------L-W---", "----------L-LLL-WWWWLWLWW--------------W-----L-L--", "------------WWLL-WLLWLLLL-W--L------------W--W---L", "-----W---L--LWWLL-LLWWWLLL---W-----------L--------", "------------LWLLWW-WWLWWW----LWL----------LL------", "------------WWWLWWL-WWWWW--L---------LL-----W-----", "-----L------LWLWLLLL-WLWL--------LL------W-----W--", "---LL-------LWLLWLWLL-LLW------LWL------L--L------", "------------WWWWWLLLWW-WWL----W-------------------", "--------L-WWLLLLWWLLLWL-L----L--------------L-----", "---W--------LLLLWWLLWLLW-L-------------L--------LW", "---------L-------W----W-W-WLWLWWWWLWW----------L--", "--------W-------L--------L-LLLWLWLLLW---L--------L", "----L--W----L------W-----WW-WWWWLWWLL---L--------L", "---L-----LW--W-----------LWL-WWWLLLWW----LL-W-----", "--W-LWWL--------WLW----W-WWLL-WWLLWLL-------------", "-----WW-----------L---L--LLLLL-LLWLLW---L-------W-", "W-------W-----L---W--W---LWLLLW-LWWWW----------L-L", "-W-------L-----------L---LLWWWWW-WLWLW------------", "--------------------WW---LWLWWLLL-LLL-W-----------", "--------------L-----W----WWLWLWLWW-LL--------L----", "------L------------------LWWLWWLLWW-LL------------", "------L-W----------------LLWLWLLWWWW--------L-----", "--L-----W-W--------W------------L--W--LWWLLLWWWLWW", "-------------------W-------------L---W-LWWLWLWLWLW", "-------L-------L--------W------------LW-WWLWWWLWWW", "-------W-------------W----WW--W------LLL-WWWWWLLLL", "-------------L---W--L-------W--------WLLL-LWWLLWWL", "W-----L---------L-W---------W--------WWWLW-LLWWLLW", "-L----W----L------W--W---------------WLLLLW-WLWLLW", "-LLW-------L--W----L---W----L-------WLWLLLWL-WLLWL", "-W-----LL------WL-----------------W--LLLLWLWL-LWLL", "---LL--LW-----L----------------------LWWWWLLWW-WWL", "--------W---L--W----L----W-----W-----WLLWLWWWLL-LW", "W-----------------------W-----L------LWLWLWWLWLW-W", "---W-L----------W-------L-WW---W-----LLLWWLLWWWLL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"RHODEISLAND", "WISCONSIN", "OHIO", "ARIZONA", "ALABAMA", "KANSAS", "NEWJERSEY", "LOUISIANA", "SOUTHCAROLINA", "UTAH", "NEWHAMPSHIRE", "VERMONT", "GEORGIA", "ILLINOIS", "NEWMEXICO", "ALASKA", "MONTANA", "NEVADA", "OREGON", "FLORIDA", "WASHINGTON", "MISOURI", "IOWA", "TEXAS", "DELAWRAE", "PENNSYLVANIA", "TENNESSEE", "ARKANSAS", "MINESOTA", "NEBRASKA", "IDAHO", "MARYLAND", "VIRGINIA", "WYOMING", "MICHIGAN", "KENTUCKY", "SOUTHDAKOTA", "OKLAHOMA", "MASSACHUSSETTS", "NORTHCAROLINA", "CALIFORNIA", "WESTVIRGINIA", "NORTHDAKOTA", "CONNECTICUT", "HAWAII", "MISSISSIPPI", "NEWYORK", "MAINE", "INDIANA", "COLORADO"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> teams = {"MISSISSIPPI", "MISOURI", "VERMONT", "KANSAS", "DELAWRAE", "WESTVIRGINIA", "ALASKA", "WISCONSIN", "MICHIGAN", "TENNESSEE", "NEWHAMPSHIRE", "COLORADO", "PENNSYLVANIA", "SOUTHDAKOTA", "OKLAHOMA", "CALIFORNIA", "HAWAII", "WASHINGTON", "VIRGINIA", "NEWJERSEY", "CONNECTICUT", "ARKANSAS", "NORTHCAROLINA", "INDIANA", "IOWA", "MINESOTA", "NEWYORK", "RHODEISLAND", "TEXAS", "LOUISIANA", "SOUTHCAROLINA", "KENTUCKY", "UTAH", "MAINE", "WYOMING", "MONTANA", "NORTHDAKOTA", "ARIZONA", "OREGON", "ILLINOIS", "MARYLAND", "MASSACHUSSETTS", "NEVADA", "NEWMEXICO", "ALABAMA", "FLORIDA", "GEORGIA", "OHIO", "IDAHO", "NEBRASKA"};
    vector<string> results = {"-WWWWLLWWLL--L-----W-----------W---------------L--", "L-LLWLLWLL-------L----------------------------W---", "LW-WLWWWWL--------L------LW------------L---L-L----", "LWL-WWLWLW--W--------------W---------W--L---------", "LLWL-WWLLW----------W-W------------------W--W-----", "WWLLL-LLLW---L-----------------------------W--L--W", "WWLWLW-WLL----------------L-----------------W----W", "LLLLWWL-WL-------L--------WL--LW----W-------------", "LWLWWWWL-W-----------------L-L-W---W-------W------", "WWWLLLWWL-LLW----W--W----W----------W------L------", "W--------W-LWLWLWWLW-L-------------------W--------", "---------WW-WWLLWWLW--------------------L---------", "---L-----LLL-LWWLLLL----L-------LW------W-------L-", "W----W----WLW-WWLWWLL-L----L-----------------L----", "----------LWLL-WWWLL------------------W-W--L--L---", "----------WWLLL-WWWL-----------------L---------W--", "----------LLWWLL-WWL---------WL-W-------L---W--L--", "-W-----W-LLLWLLLL-WW--------------W-------W----W--", "--W-------WWWLWLLL-L----------LL---------W--------", "L---------LLWWWWWLW-LW------L---------L---W--L--W-", "----L----L---W-----W-WWLLLWLLL---WW---------------", "----------W--------LL-LWLWWWWW----------L----LL---", "----L--------W------LW-LWLLLLW---W------W-------L-", "--------------------WLW-WLLWLL-----W--LW-------L--", "------------W-------WWLL-LLWWW----L-W------W------", "--W------L----------WLWWW-WWWW----------W-W-L-----", "--L---WL------------LLWWWL-LLL--L-----L-W--------W", "---L---WW----W------WLWLLLW-LLW--W-----L----------", "-------------------WWLWWLLWW-L-------L---L---L----", "--------W-------L---WLLWLLWWW-------------L-------", "-------W--------W-W--------L---LLLWWWWLL-L----W---", "L------LL---------W-----------W-LWWWLWLLW---W-----", "------------W---L---------W---WW-LLWWLLL----------", "------------L-------L-L----L--WLW-LLLWWL----------", "-----------------L--L---W-----LLWW-LLLLW-L-LL-----", "--------L--------------L------LLLWW-LWLL--------W-", "-------L-L--------------L-----LWLWWW-LWW-------W--", "---L-----------W------------W-LLWLWLW-WL-----LL---", "--------------L----W---W--W---WWWLWWLL-W------W--L", "--W--------------------L---W--WWWWLWLWL-----------", "---W-------WL-L-W----WL--LL----L---------WWLLWWWWL", "----L-----L-------L---------W-W---W-----L-WLLWLWLW", "-----------------L-L-----L---W----------LL-LWWWWWL", "--W--L--LW----W---------L---------W-----WWW-LWLWWL", "----L-L---------L--------W-----L--W-----WWLW-LWLLW", "--W----------W-----W-W------W--------W--LLLLW-LWWL", "-L---W--------W------W--------L------WL-LWLWLW-LLW", "W--------------LWL-----W------------L---LLLLWLW-WW", "------------W------L--W------------L----LWLLWLWL-L", "-----LL-------------------L-----------W-WLWWLWLLW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VERMONT", "TENNESSEE", "NEVADA", "MISSISSIPPI", "WESTVIRGINIA", "ARKANSAS", "OKLAHOMA", "MISOURI", "INDIANA", "RHODEISLAND", "MICHIGAN", "ALABAMA", "WISCONSIN", "LOUISIANA", "NEWYORK", "COLORADO", "NEWHAMPSHIRE", "TEXAS", "MINESOTA", "OHIO", "NEWJERSEY", "PENNSYLVANIA", "ARIZONA", "DELAWRAE", "NEBRASKA", "MARYLAND", "HAWAII", "WYOMING", "NORTHCAROLINA", "VIRGINIA", "ALASKA", "NEWMEXICO", "FLORIDA", "MASSACHUSSETTS", "CONNECTICUT", "SOUTHDAKOTA", "KENTUCKY", "KANSAS", "GEORGIA", "NORTHDAKOTA", "CALIFORNIA", "MONTANA", "IOWA", "ILLINOIS", "SOUTHCAROLINA", "OREGON", "IDAHO", "WASHINGTON", "MAINE", "UTAH"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> teams = {"MISSISSIPPI", "MISOURI", "VERMONT", "KANSAS", "IOWA", "WESTVIRGINIA", "ALASKA", "WISCONSIN", "MICHIGAN", "TENNESSEE", "NEWHAMPSHIRE", "ARKANSAS", "HAWAII", "SOUTHDAKOTA", "OKLAHOMA", "CALIFORNIA", "TEXAS", "WASHINGTON", "VIRGINIA", "NEWJERSEY", "CONNECTICUT", "COLORADO", "NORTHCAROLINA", "INDIANA", "OREGON", "MINESOTA", "NEWYORK", "FLORIDA", "PENNSYLVANIA", "LOUISIANA", "SOUTHCAROLINA", "KENTUCKY", "DELAWRAE", "MAINE", "WYOMING", "ARIZONA", "NORTHDAKOTA", "MASSACHUSSETTS", "UTAH", "ILLINOIS", "MARYLAND", "MONTANA", "NEVADA", "NEWMEXICO", "ALABAMA", "RHODEISLAND", "GEORGIA", "OHIO", "IDAHO", "NEBRASKA"};
    vector<string> results = {"-LLLWWLLLLWWLWWL-W--W-L----W--------------W-------", "W-LLLWWWLLLLLWWW----------WL----------------------", "WW-LLLLWLWLWWLWL-----W---WL--W------L--WW---------", "WWW-WLWWLWLLWWLLL---------L---------L--L----------", "LWWL-LLWLWWLWLLL-------------------------W-----L--", "LLWWW-WWWLLWLLWL-----------L----W---W-----L-WW---W", "WLWLWL-WLWWWWLWWL---------W----------------------W", "WLLLLLL-WWLWWLLW-------W---------L---L------------", "WWWWWLWL-LWLLLWL-------W----------L------L--------", "WWLLLWLLW-LLLWLWW-LW------L-W--L------------------", "LWWWLWLWLW-LWLLL--LW------L----L--W--WW-W------L--", "LWLWWLLLWWW-LLLL------W---L--------W--------------", "WWLLLWLLWWLW-LLW-----L-------WW-----------L-------", "LLWLWWWWWLWWW-WL---------------------W--LW---L----", "LLLWWLLWLWWWWL-L----L--L-W--L---------------------", "WLWWWWLLWLWWLWW-L--W---W-W-L---L------------------", "---W--W--L-----W-LWWLWLLLWLWLWLLW--L--------------", "L---------------W-WWLLWWLLLLWLLWL-------W---W---W-", "---------WW-----LL-WLLLWWWLLWLWLW-L-------L----W-L", "---------LL----LLLL-LLLWLLLWLLWLW--------L---W----", "L-------------W-WWWW-LWWLLWLWLWWWWL-------W----L--", "--L---------W---LWWWW-WLWWWWWWWWLL--WW---L--------", "W----------L----WLWWLL-LWWWWLWWLLW---WWW----------", "-------LL-----WLWLLLLWW-LWWLLLWLL-----W----L------", "----------------WWLWWLLW-WLWLLLWL-L--LL----L--L---", "--L-----------LLLWLWWLLLL-WWLWWLL-----L--W--------", "-LWW--L--WWW----WWWWLLLLWL-LWWLWW---------------L-", "LW---W---------WLWWLWLLWLLW-LLWWW--------L------LW", "---------L----W-WLLWLLWWWWLW-WWWL------W---W---L-L", "--L---------L---LWWWWLLWWLLWL-LLW-L-----WW--------", "------------L---WWLLLLLLWLWLLW-LL--L------L-W-L---", "---------WW----WWLWWLLWWLWLLLWW-W--W---L-L----W--L", "-----L----------LWLLLWWWWWLLWLWL---L-------L------", "-------W------------LWL-----------LLLLLLWLWWLWWWLL", "--------W-L-------W-W---W----W---W-LWLLLLLLLLLLWWW", "-----------L----W-------------WLWWW-WLWWLLWWLLWLWW", "--WW-L---------------L-----------WLL-WWLLWWLLLWLLW", "-------W--L--L-------LL-W--------WWWL-LWWLLWWLLWLW", "----------L-----------LLWW-------WWLLW-LWWLWLWWLLL", "--LW------------------L-----L--W-WWLWLW-WLWLLLWLWL", "--L-------L--W---L-----------L---LWWWLLL-WLLWWLWLL", "----L---W----L-----W-W---L-W-L-W-WWWLWLWL-WLLLWLWL", "L----W------W-----W-L---------W--LWLLWWLWL-LLLLLLW", "-----------------------WW---L---WLWLWLLWWWW-LLLWWL", "-----L-----------L------------L--WWWWLWWLWWW-LLLLW", "-----L-------W-----L-------------LWWWWLWLWWWW-WLLW", "------------------------W-----WL-LWLLWLLWLWWWL-LLW", "----W-----W-------L-W-------W----LLWWLWWLWWLWWW-LL", "-----------------L--------WW-----WLLWWWLWLWLWWWW-W", "-----LL-----------W--------LW--W-WLLLLWWWWLWLLLWL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ARKANSAS", "MAINE", "NEBRASKA", "NORTHDAKOTA", "ILLINOIS", "MASSACHUSSETTS", "MISSISSIPPI", "IOWA", "MISOURI", "MARYLAND", "IDAHO", "OHIO", "ALASKA", "SOUTHDAKOTA", "FLORIDA", "KANSAS", "VERMONT", "TEXAS", "OKLAHOMA", "MONTANA", "DELAWRAE", "RHODEISLAND", "TENNESSEE", "NEVADA", "WYOMING", "HAWAII", "NEWJERSEY", "NEWYORK", "WESTVIRGINIA", "ALABAMA", "KENTUCKY", "NEWHAMPSHIRE", "MICHIGAN", "MINESOTA", "WASHINGTON", "UTAH", "NEWMEXICO", "GEORGIA", "ARIZONA", "WISCONSIN", "SOUTHCAROLINA", "INDIANA", "PENNSYLVANIA", "OREGON", "COLORADO", "LOUISIANA", "VIRGINIA", "CALIFORNIA", "CONNECTICUT", "NORTHCAROLINA"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> teams = {"MISSISSIPPI", "MISOURI", "VERMONT", "CALIFORNIA", "IOWA", "WESTVIRGINIA", "ARKANSAS", "GEORGIA", "MICHIGAN", "TENNESSEE", "NEWHAMPSHIRE", "ALASKA", "KANSAS", "SOUTHDAKOTA", "OKLAHOMA", "HAWAII", "TEXAS", "WASHINGTON", "VIRGINIA", "NEBRASKA", "CONNECTICUT", "COLORADO", "NORTHCAROLINA", "INDIANA", "OREGON", "MINESOTA", "MASSACHUSSETTS", "NORTHDAKOTA", "PENNSYLVANIA", "LOUISIANA", "SOUTHCAROLINA", "WISCONSIN", "DELAWRAE", "MAINE", "WYOMING", "NEWJERSEY", "FLORIDA", "IDAHO", "UTAH", "ILLINOIS", "MARYLAND", "MONTANA", "NEVADA", "NEWMEXICO", "ALABAMA", "RHODEISLAND", "ARIZONA", "OHIO", "NEWYORK", "KENTUCKY"};
    vector<string> results = {"-WLLWLWLWLL---------------------LW---W------------", "L-WWWLLWLWL------------L-----------W-------W-----L", "WL-LWWWWWW-W-------W----------L---L---------W-----", "WLW-LLLLWWL----WL-----W------L-L------W---W----W--", "LLLW-LLLLL------W--L---W-------W--------L-----L---", "WWLWW-LLLW------W--------W--W---------------L-----", "LWLWWW-WLW------W------L--L----------W-----------W", "WLLWWWL-WL-----W--WW-------W-W---------------L----", "LWLLWWWL-W-L----W--------L-------------------W----", "WLLLWLLWL----------------------L--W-------L-W-----", "WW-W-------WWWWWLLWW-----W----------------------WL", "--L-----W-L-LLWWWLLL-------L--L----------W--------", "----------LW-LLLLWWL-L-----------------L-L--------", "----------LWW-LLWLLLW---L--------L--LW-------L-W--", "----------LLWW-LLWWL---L------------W---W---------", "---L---L--LLWWW-WWWL----W---L---------------L-----", "---WLLL-L-WLWLWL-WWW---------L---------L----------", "----------WWLWLLL-WL---------L------------L---W---", "-------L--LWLWLLLL-W------------LW---------L------", "--L-W--L--LWWWWWLWL-L---W-W-----------------------", "-------------L-----W-LWWLWWWLW----------W--L--W---", "------------W-------W-WWLWWLWW--W---W---L-------W-", "---L----------------LL-LLLWWWW--W--------W--------", "-W--L-W-------W-----LLW-WLLLLL---W----------------", "-------------W-L---LWWWL-WWWLLL--------W----------", "-----L--W-L---------LLWWL-LWWW--------L-----L-----", "------W------------LLLLWLW-LWLL-----L-------------", "-------L---W--------LWLWLLW-WW----L-------L-----L-", "-----L---------W----WLLWWLLL-L----L-------------L-", "---W---L--------WW--LLLWWLWLW--L----W------L---L--", "--W--------W------------W-W----WWLWWLWWW-L--------", "---WL----W-------------------WL-LWWLLWWW----L----L", "W-----------------W--LL-------LW-LLWLWLL----------", "L------------W----L----L------WLW-WWLLLL-------L--", "--W------L-----------------WW-LLWL-LWLLW-----W----", "-L----------------------------LWLLW-WWLL--W---L---", "-------------WL------L----W--LWWWWLL-LLLWL----L---", "L-----L------L----------------LLLWWLW-WW----------", "---L---------------------W----LLWWWWWL-W---------L", "------------W---W-------L-----LLWWLWWLL-------LW--", "----W---------L-----LW--------------L----LWLWWLWWW", "-----------LW---------L-------W-----W---W-LLLWLLLW", "---L-----W-------W---------W-------L----LW-LLLLLWL", "-L----------------W-W--------W----------WWW-WLLLWW", "--L--W---L-----W---------W-----W--------LWWL-LLWWW", "-------WL----W--------------------L-----LLWWW-WLLW", "----W------------L--L--------------WW--WWWWWWL-LLW", "---L---------L---------------W---W-----LLWWWLWW-LL", "----------L----------L-----WW-----------LWLLLWWW-L", "-W----L---W--------------------W------W-LLWLLLLWW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"KENTUCKY", "NEWYORK", "MISOURI", "VERMONT", "MINESOTA", "IOWA", "ALABAMA", "RHODEISLAND", "MARYLAND", "CALIFORNIA", "MASSACHUSSETTS", "MISSISSIPPI", "TENNESSEE", "CONNECTICUT", "NEWMEXICO", "MONTANA", "OREGON", "GEORGIA", "WESTVIRGINIA", "MICHIGAN", "LOUISIANA", "ALASKA", "FLORIDA", "NEVADA", "OHIO", "ARIZONA", "PENNSYLVANIA", "DELAWRAE", "NEWJERSEY", "ARKANSAS", "ILLINOIS", "IDAHO", "NEBRASKA", "UTAH", "KANSAS", "HAWAII", "SOUTHCAROLINA", "WYOMING", "NORTHDAKOTA", "VIRGINIA", "NORTHCAROLINA", "TEXAS", "WISCONSIN", "INDIANA", "SOUTHDAKOTA", "WASHINGTON", "NEWHAMPSHIRE", "COLORADO", "MAINE", "OKLAHOMA"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> teams = {"MISSISSIPPI", "MISOURI", "GEORGIA", "CALIFORNIA", "IOWA", "WESTVIRGINIA", "TEXAS", "VERMONT", "FLORIDA", "TENNESSEE", "NEWHAMPSHIRE", "ALASKA", "MONTANA", "SOUTHDAKOTA", "OKLAHOMA", "HAWAII", "NORTHDAKOTA", "ARKANSAS", "VIRGINIA", "NEBRASKA", "WASHINGTON", "COLORADO", "NORTHCAROLINA", "INDIANA", "IDAHO", "MINESOTA", "MASSACHUSSETTS", "PENNSYLVANIA", "CONNECTICUT", "LOUISIANA", "SOUTHCAROLINA", "WISCONSIN", "DELAWRAE", "MAINE", "WYOMING", "NEWJERSEY", "MICHIGAN", "RHODEISLAND", "ILLINOIS", "UTAH", "MARYLAND", "KANSAS", "NEVADA", "NEWMEXICO", "ALABAMA", "OREGON", "ARIZONA", "OHIO", "NEWYORK", "KENTUCKY"};
    vector<string> results = {"-WLWWLL-L---------------------W------------------L", "L-LWWLL---------L-------------W----------W---L----", "WW-WWWW----------------------W-L--W--W--------L---", "LLL-WLL-----------------W-W---L---------L---------", "LLLL-LW-L-W---------------------L-----------W----L", "WWLWW-W-----L---W---------L-------L-LL--L------L--", "WWLWLL-L---W-----------L-------------W------------", "------W-WWWWLL------W------W------------------W--L", "W---W--L-LWLWW-----------------------------L------", "-------LW-WWLL------L------W----------------W-W---", "----L--LLL-WLL--------L--------L------------------", "------LLWLL-WL---------L---------L-----L----------", "-----W-WLWWL-W-W--L--LL----------L-----L-L----L---", "-------WLWWWL---L--W-------W--L---------W--------L", "---------------LWWWWWW-------W---------W----W-W---", "------------L-W-LLWLL-----L-----WW------W-W-------", "-W---L-------WLW-LLLWL----------------------L-----", "--------------LWW-WWL----------W--------------L-W-", "------------W-LLWL-WL-------W--------L---L---W----", "-------------LLWWLL-W--L--------------W-------L---", "-------L-W----LWLWWL------------------L---W-W-----", "------------W-L-W-----LLWWWL-------------L----L---", "----------W-W--------W-LWLWL----L-WW--------------", "------W----W-------W-WW-LWLWL---W-L-------------L-", "---L-----------------LLW-WWL----------W-------W---", "---------------------LWLL-WWW------W---W--L-------", "---L-W---------W-----LLWLL-L-W-----L------W-----W-", "-------L-L---L-------WWLWLW-W----L----W-----------", "------------------L----W-L-L-LWWWWL---------------", "--L-----------L-----------L-W-LWLWW--------W-W---L", "LL-W---------W--------------LW-WLWW----------W--W-", "--W-------W------L----------LLL-LWLWW-------------", "----W----------L------WL----LWWW-LW---------------", "-----------WW--L-----------WLLLLW-L------------W--", "--L--W----------------LW----WLLWLW-L--W-----L-----", "----------------------L--LW----L--W-LWLWWL-----W--", "-----W-------------------------L---W-WLLLW----WW--", "--L--WL-----------W----------------LL-LLWW--------", "-------------------LW---L--L------LWWW-LWW------W-", "-----------WW-L----------L---------LWWW-WWL-------", "---W-W-------L-L-------------------LWLLL-L----L---", "-L----------W-----W--W-------------WLLLLW--L------", "---------------L----L----WL------------W---WLLWWWL", "--------W--------------------L-----------WL-LWWLLW", "----L----L----L-W---L-------------W-------WW-LWLLL", "-W----------------L----------LL-----------WLW-LWWW", "--W----L-L--W-L--W-W-W--L-----------L---W-LLLW-LWW", "-----W---------------------------L-LL-----LWWLW-WL", "-----------------L-----W--L---L-------L---LWWLLL-L", "W---W--W-----W---------------W------------WLWLLWW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"LOUISIANA", "PENNSYLVANIA", "NEBRASKA", "WASHINGTON", "MINESOTA", "WYOMING", "ARIZONA", "WISCONSIN", "COLORADO", "CONNECTICUT", "NEWYORK", "OKLAHOMA", "IDAHO", "MISSISSIPPI", "DELAWRAE", "RHODEISLAND", "VIRGINIA", "NEVADA", "NORTHDAKOTA", "UTAH", "VERMONT", "ALABAMA", "ARKANSAS", "NEWJERSEY", "HAWAII", "ALASKA", "KENTUCKY", "OREGON", "NORTHCAROLINA", "NEWMEXICO", "OHIO", "MASSACHUSSETTS", "MONTANA", "MARYLAND", "MICHIGAN", "INDIANA", "SOUTHDAKOTA", "SOUTHCAROLINA", "MAINE", "MISOURI", "ILLINOIS", "TEXAS", "KANSAS", "TENNESSEE", "IOWA", "CALIFORNIA", "GEORGIA", "NEWHAMPSHIRE", "FLORIDA", "WESTVIRGINIA"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> teams = {"MISSISSIPPI", "MAINE", "GEORGIA", "CALIFORNIA", "IOWA", "WESTVIRGINIA", "TEXAS", "VERMONT", "FLORIDA", "TENNESSEE", "NEWHAMPSHIRE", "ALASKA", "IDAHO", "SOUTHDAKOTA", "OKLAHOMA", "HAWAII", "NORTHDAKOTA", "UTAH", "VIRGINIA", "OREGON", "WASHINGTON", "OHIO", "MISOURI", "INDIANA", "MONTANA", "MINESOTA", "LOUISIANA", "PENNSYLVANIA", "CONNECTICUT", "ARIZONA", "NEWMEXICO", "NEBRASKA", "DELAWRAE", "NORTHCAROLINA", "WYOMING", "NEWJERSEY", "MICHIGAN", "RHODEISLAND", "ILLINOIS", "ARKANSAS", "MARYLAND", "KANSAS", "NEVADA", "SOUTHCAROLINA", "ALABAMA", "WISCONSIN", "MASSACHUSSETTS", "COLORADO", "NEWYORK", "KENTUCKY"};
    vector<string> results = {"-LWLLW----------L----W-----L------------W---------", "W-LWLL----------W-----L-----L-L-----------------WL", "LW-WWW-------------L--W-----W-------L-------L-W---", "WLL-LW------------L------------------------WL-----", "WWLW-L----L---L----W-------------W----------------", "LWLLW------L--------WL--------------W-L-L-----W-WL", "-------LLLLW-------WL-----------------------L----W", "------W-WWLW-----L---W--L-------L------L--L-------", "------WL-LLL------------W---W---------------------", "------WLW-WW---------W---W----W---------L------W--", "----W-WWWL-W--L-------L----------W-W--------------", "-----WLLWLL---L-------W---W----------L--W---W-----", "-------------LWWWW---L---------------------L------", "------------W-LWLW-----------L----W------------L-L", "----W-----WWLW-LWL------------L---W----------L----", "------------LLW-LL--------WW----------L--L--------", "WL----------LWLW-LL---------------LW---L----L-L---", "-------W----LLWWW-W----L--------L-------L---------", "---W------------WL-WWLWWL----L------WL----------LW", "--W-L-L-----------L-WLLWW-----------L----------L--", "-----LW-----------LL-LLWL-------------------------", "L----W-L-L--W-----WWW-LLWLL-----------------------", "-WL-------WL------LWWW-LL--------L-----------W----", "-----------------WLLLWW-L---LW-------W------------", "-------WL---------WLWLWW------------------L-W-----", "---------L-----------W----LWWLLW----WL-----------L", "-----------L---L-----W---W-WLWW----W---------W----", "W--------------L---------LL-WLL-----W------L----LL", "-WL-----L--------------W-LWL-WW-L-----------------", "-------------W----W----L-WLWL-W-----L-------------", "-W-------L----W----------WLWLL-L--W-------------W-", "-------------------------L----W-LWLWW----L---W----", "-------W---------W----------W--W-LLLL-L-------L---", "----L-----L-----------W--------LW-WWL----W----L---", "-------------LL-W-------------LWWL-LLL-L-------W--", "----------L-----L---------L----LWLW-L---L--W------", "--W--L------------LW-----L-L-W-LWWWW---W----------", "-----------W------W----L-W--------W---LWWLW-------", "-----W---------W----------------W----W-WWLL-------", "-------W--------W-----------------W-LLL-LWL----W--", "L----W---W-L-----W-----------------W-LLW-WL----L--", "---------------W---------------W-L---WWLL-L----L--", "-------W----------------W------------LWWWW---W----", "---L--------W--------------W-------L--------LLWWLL", "--WW--W----L----W-------L------------------W-LLWWW", "--------------W-------L---L----L----------LWW-LLWL", "--L--L----------W---------------WW---------LWW-WWL", "---------L---W-----W--------------L----LWW-LLWL-WL", "-L---L------------W--------W--L------------WLLLL-W", "-W---WL------W----L------W-W---------------WLWWWL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MINESOTA", "NEVADA", "ALASKA", "WISCONSIN", "KANSAS", "FLORIDA", "RHODEISLAND", "VERMONT", "MARYLAND", "TEXAS", "ILLINOIS", "ARKANSAS", "ARIZONA", "MONTANA", "NEWHAMPSHIRE", "TENNESSEE", "GEORGIA", "WESTVIRGINIA", "OHIO", "NORTHCAROLINA", "INDIANA", "CALIFORNIA", "COLORADO", "DELAWRAE", "VIRGINIA", "OREGON", "PENNSYLVANIA", "ALABAMA", "NEWMEXICO", "IOWA", "MISOURI", "MASSACHUSSETTS", "CONNECTICUT", "NEWYORK", "NEWJERSEY", "MAINE", "WYOMING", "HAWAII", "SOUTHDAKOTA", "SOUTHCAROLINA", "KENTUCKY", "OKLAHOMA", "NORTHDAKOTA", "UTAH", "MICHIGAN", "WASHINGTON", "LOUISIANA", "NEBRASKA", "IDAHO", "MISSISSIPPI"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> teams = {"MISSISSIPPI", "MAINE", "GEORGIA", "ALASKA", "WASHINGTON", "WESTVIRGINIA", "TEXAS", "NORTHDAKOTA", "FLORIDA", "TENNESSEE", "NEWHAMPSHIRE", "WYOMING", "IDAHO", "SOUTHDAKOTA", "OKLAHOMA", "HAWAII", "VERMONT", "UTAH", "PENNSYLVANIA", "OREGON", "NEWYORK", "OHIO", "MISOURI", "INDIANA", "MONTANA", "MINESOTA", "LOUISIANA", "CALIFORNIA", "CONNECTICUT", "ARIZONA", "NEWMEXICO", "NEBRASKA", "NORTHCAROLINA", "DELAWRAE", "COLORADO", "NEWJERSEY", "MICHIGAN", "RHODEISLAND", "ILLINOIS", "ARKANSAS", "MARYLAND", "KANSAS", "VIRGINIA", "SOUTHCAROLINA", "ALABAMA", "WISCONSIN", "MASSACHUSSETTS", "IOWA", "NEVADA", "KENTUCKY"};
    vector<string> results = {"-LWWWL-W----------------------------L-------------", "W-LLLL---------------------L---W--L-----W---------", "LW-WLWW----------------W-L-------------W----------", "LWL-WW-------L-----L-----L------------WL-------L--", "LWWL-W--------L---W------L------------------------", "WWLLL------------------W--W--L--------------LW----", "--L----LLWLWL----------WW-----------------------W-", "L-----W-LWLL------------W---W-----L-------L-------", "------WW-LLL----------W-W-L----L------------------", "------LLW-WWL-------------------LWW---------L-----", "------WWWL-W---------------L------L-W---L---------", "------LWWLL------------W----W------------------W--", "------W--W---LWLWW-----------------------W-L--W-L-", "---W--------W-LWLL--W-----------W---W-----L-------", "----W-------LW-LLW--W--------W---------L-L--------", "------------WLW-LW-------L-------W----------------", "------------LWWW-LL-W-----L------------LL-----L---", "------------LWLLW---------L--------------L--------", "----L-----------W--WLWWWL------------L------------", "---W--------------L-WWWWL-----W-L-----W-----------", "-------------LL-L-WL-LWLW-----L------L---L--------", "------------------LLW-LWW-----L------L--L---------", "--------L---------LLLW-WW--------W------W-W-W-----", "--L--LL----L------LLWLL-W--L----------------------", "------LLL---------WWLLLL--W------L--LW------L-----", "--WWW----------W----------WLWLW--------LW------W--", "-----L--W-------WW------LL-WLLW-----------W-------", "-W--------W------------W-WL-WLLLW---W--W-----W----", "-------L---L-------------LWL-LW-------------------", "-----W--------L----------WWWW-WW--------L------W--", "-------------------LWW---LLWLL-W--------L------W--", "-L------W------------------W-LL-LLLWL-------------", "---------W---L-----W-------L---W-LLWL-----L-------", "---------L-----L------L-W------WW-WLW-------W-----", "-W-----W-LW--------------------WWL-WL-------L-----", "-------------------------------LLWL-L----LW-----W-", "W---------L--L----------W--L---WWLWW----L--W------", "------------------W-WW--L-------------WLWWW--LW-L-", "---L---------------L-----------------L-WLWL-W---L-", "--LW----------W-W--------W-L---------WL-LWL------W", "-L--------W-----W----WL--L---WW-----WLWW-WWW------", "------------L-W--W--W--------------W-LLLL-L------L", "-------W-----W--------L---L-----W--L-LWWLW---L----", "------------W-----------------------L---L---LWLLWW", "-----W---W------------L-W--------LW---L----W-LLWWL", "-----L---------------------L---------W----WLW-WWLW", "------------L---W--------------------L-----WWL-LLW", "---W-------L-------------L---LL------------WLLW-WL", "------L-----W----------------------L-WW----LLWWL-L", "---------------------------------------L-W-LWLLWW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CONNECTICUT", "MINESOTA", "NEWHAMPSHIRE", "ARIZONA", "HAWAII", "ARKANSAS", "SOUTHCAROLINA", "MARYLAND", "MAINE", "NORTHCAROLINA", "NEWMEXICO", "ILLINOIS", "VIRGINIA", "WASHINGTON", "IOWA", "TENNESSEE", "ALASKA", "MICHIGAN", "WISCONSIN", "NEBRASKA", "CALIFORNIA", "VERMONT", "MASSACHUSSETTS", "WESTVIRGINIA", "LOUISIANA", "KANSAS", "NEVADA", "OKLAHOMA", "GEORGIA", "UTAH", "DELAWRAE", "MISSISSIPPI", "INDIANA", "OHIO", "ALABAMA", "MISOURI", "KENTUCKY", "MONTANA", "COLORADO", "RHODEISLAND", "IDAHO", "NORTHDAKOTA", "FLORIDA", "NEWJERSEY", "TEXAS", "SOUTHDAKOTA", "NEWYORK", "PENNSYLVANIA", "WYOMING", "OREGON"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> teams = {"FLORIDA", "MAINE", "GEORGIA", "NEWJERSEY", "WISCONSIN", "WESTVIRGINIA", "TEXAS", "NORTHDAKOTA", "MISSISSIPPI", "NEBRASKA", "NEWHAMPSHIRE", "COLORADO", "IDAHO", "SOUTHDAKOTA", "OKLAHOMA", "WYOMING", "CONNECTICUT", "UTAH", "PENNSYLVANIA", "OREGON", "NEWYORK", "OHIO", "MONTANA", "KENTUCKY", "MINESOTA", "MISOURI", "LOUISIANA", "CALIFORNIA", "VERMONT", "ARIZONA", "NEWMEXICO", "ALASKA", "NORTHCAROLINA", "DELAWRAE", "HAWAII", "TENNESSEE", "MICHIGAN", "RHODEISLAND", "ILLINOIS", "ARKANSAS", "MARYLAND", "KANSAS", "VIRGINIA", "SOUTHCAROLINA", "ALABAMA", "WASHINGTON", "MASSACHUSSETTS", "IOWA", "NEVADA", "INDIANA"};
    vector<string> results = {"-WLLLWLWWWLL--L-WLL----------------------L--L-W--L", "L-LLLLWWLLLL-L--W--------W-----------L----W--W----", "WW-WWWLLLWLW----W-W-WL--W---------LW---------W---L", "WWL-WLWWWLWW----------L-------L----L--------------", "WWLL-WLWWLWLW----LL--------------------L---W------", "LWLWL-WLWWLW-W-------------L-----------------W-W--", "WLWLWL-WWWLW-------------------L---------L--------", "LLWLLWL-WWLW-W--------W--------------L-W---------L", "LWWLLLLL-LWL----W------W------------W-----L-------", "LWLWWLLLW-WL-----------------------LL-----WW------", "WWWLLWWWLL-W---L------W---------------LL---------W", "WWLLWLLLWWL---W---------------W-------L-----------", "----L--------WWLLLLWWLLLW----W-----L--------------", "-W---L-L----L-WLWWWLWWLLLW----------------W-------", "W----------LLL-LWLWWLLWWW----------W------L-W-----", "----------W-WWW-LLLWLLWLWW-------------LW---------", "LLL-----L---WLLW-LWWLLLWL--------LW-L-------------", "W---W-------WLWWW-WLLWWLW-------------LW---------W", "W-L-W-------WLLWLL-LWWLLL-W--------------------L--", "------------LWLLLWW-LWWLW-------W---W-------------", "--L---------LLWWWWLW-WWLL-L---------------L---L---", "--W---------WLWWWLLLL-LLW---L-W-W-----W----------L", "---W---L--L-WWLLWLWLLW-WW--------------------W----", "--------L---WWLWLWWWWWL-W--L---LW--L--------------", "--L---------LWLLWLWLWLLL-W------------L-----------", "-L-----------L-L--------L-LWWLWLWWWWW---W------L--", "------------------L-W----W-LWWWLWWWLW----------WW-", "-----W-----------------W-LW-LLWLLWLWW-L--WW--W----", "---------------------W---LLW-WWLWWWWL----W-L------", "------------L------------WLWL-LLWLLLW--LLWW-------", "---W-------L---------L---LLLLW-WLLLLL---L---W----L", "------W----------------W-WWWWWL-WLWWL-W-------L---", "-------------------L-L-L-LLWLLWL-WLWLW---LW-W-----", "----------------W--------LLLLWWWL-LWL------WW-----", "--W-------------L--------LLWLWWLWW-LW-----W----W--", "--LW-----W--W-L--------W-LWLLWWLLLW-WW----------W-", "--------LW------W--L-----LLLWLWWWWLL-W-----W------", "-W-----W------------------------L--LL-LLLWLWWLLWLW", "----------WW-----W---L--W--W---L-----W-LLLLWLWLWWL", "----W--L--W----W-L-----------W-------WW-LLLWWWWWLL", "---------------L---------L---WW------WWW-LLWWWLLLL", "W-----W--------------------LLL--W----LWWW-LWWWLWLW", "-L------WL---LW-----W------L-L--L-L--WWWWW-LWWWWWL", "----L----L------------------W----L--LLLLLLW-LLWWWW", "W-------------L---------------L-LL---LWLLLLW-WWLWL", "-LL--L----------------L----L---------WLLLLLWL-LLWW", "L-------------------W----------W-----WWLWWLLLW-LLW", "-----L------------W------WL-------L--LLLWLLLWWW-WL", "--------------------------L--------L-WLWWWLLLLWL-L", "W-W----W--L------L---W--------W------LWWWLWLWLLWW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ARIZONA", "ALASKA", "CALIFORNIA", "NEWYORK", "NORTHCAROLINA", "NEWHAMPSHIRE", "TEXAS", "NEWMEXICO", "VERMONT", "HAWAII", "TENNESSEE", "NORTHDAKOTA", "MINESOTA", "WYOMING", "KENTUCKY", "ILLINOIS", "NEBRASKA", "PENNSYLVANIA", "UTAH", "FLORIDA", "MISOURI", "MISSISSIPPI", "SOUTHDAKOTA", "IOWA", "OHIO", "LOUISIANA", "NEVADA", "WISCONSIN", "WASHINGTON", "ARKANSAS", "IDAHO", "CONNECTICUT", "OKLAHOMA", "NEWJERSEY", "MICHIGAN", "SOUTHCAROLINA", "OREGON", "DELAWRAE", "MONTANA", "INDIANA", "COLORADO", "WESTVIRGINIA", "MASSACHUSSETTS", "MAINE", "GEORGIA", "KANSAS", "RHODEISLAND", "VIRGINIA", "MARYLAND", "ALABAMA"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> teams = {"E", "D", "C", "B", "Z"};
    vector<string> results = {"--LLL", "---LL", "W---L", "WW---", "WWW--"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"D", "E", "C", "Z", "B"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> teams = {"E", "D", "C", "B", "Z"};
    vector<string> results = {"--LLL", "---LL", "W---L", "WW---", "WWW--"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"D", "E", "C", "Z", "B"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> teams = {"AZTECS", "COUGARS", "COWBOYS", "FALCONS", "HORNEDFROGS", "LOBOS", "RAMS", "REBELS", "UTES"};
    vector<string> results = {"---L-L--W", "--LL-LWL-", "-W--WWLLW", "WW---L--W", "--L--W-L-", "WWLWL-LW-", "-LW--W-L-", "-WW-WLW--", "L-LL-----"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HORNEDFROGS", "COUGARS", "RAMS", "LOBOS", "REBELS", "UTES", "COWBOYS", "AZTECS", "FALCONS"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> teams = {"BEARS", "GIANTS", "COWBOYS", "BRONCOS", "DOLPHINS", "LIONS"};
    vector<string> results = {"-WLWW-", "L-WL-W", "WL---W", "LW--L-", "L--W--", "-LL---"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BEARS", "DOLPHINS", "BRONCOS", "COWBOYS", "GIANTS", "LIONS"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> teams = {"BEARS", "COWBOYS", "GIANTS", "PACKERS"};
    vector<string> results = {"-LLW", "W-WW", "WL--", "LL--"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GIANTS", "BEARS", "COWBOYS", "PACKERS"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> teams = {"A", "AAAAA", "AAA", "AA", "AAAA"};
    vector<string> results = {"-WLWL", "L-WLW", "WL-WL", "LWL-W", "WLWL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "AA", "AAA", "AAAA", "AAAAA"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> teams = {"Z", "A", "Y"};
    vector<string> results = {"-WL", "L-W", "WL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "Y", "Z"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> teams = {"E", "D", "C", "B", "Z"};
    vector<string> results = {"-WWWL", "L-WWL", "LL-WW", "LLL-W", "WWLL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "C", "D", "E", "Z"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> teams = {"BEARS", "GIANTS", "BRONCOS", "COWBOYS", "DOLPHINS", "LIONS"};
    vector<string> results = {"-WLWW-", "L-WL-W", "WL---W", "LW--L-", "L--W--", "-LL---"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BEARS", "DOLPHINS", "BRONCOS", "COWBOYS", "GIANTS", "LIONS"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> teams = {"C", "B", "A"};
    vector<string> results = {"-WL", "L-W", "WL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "B", "C"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> teams = {"AA", "AB", "DA", "DB", "EA", "EB", "BA", "BB", "CA", "CB", "FA", "FB"};
    vector<string> results = {"--WW--------", "--LL--------", "LW----------", "LW----------", "------WW----", "------LL----", "----LW------", "----LW------", "----------WW", "----------LL", "--------LW--", "--------LW--"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "CA", "EA", "BA", "BB", "DA", "DB", "FA", "FB", "AB", "CB", "EB"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> teams = {"D", "C", "B", "A"};
    vector<string> results = {"-WW-", "L--L", "L--L", "-WW-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "C", "A", "D"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> teams = {"B", "A", "C", "D"};
    vector<string> results = {"--WW", "--WW", "LL-W", "LLL-"};
    ScheduleStrength* pObj = new ScheduleStrength();
    clock_t start = clock();
    vector<string> result = pObj->calculate(teams, results);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C", "D", "A", "B"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14946025&rd=8007&pm=1993
********************************************************************************
#include <algorithm> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <functional> 
#include <iterator> 
#include <iostream> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <string> 
#include <valarray> 
#include <vector> 
 
using namespace std; 
 
#ifdef  WIN32 
typedef __int64 int64; 
#define min __min 
#define max __max 
#else 
typedef long long int64; 
#endif 
 
vector<double> strength; 
vector<string> tms; 
 
const double eps=1e-12; 
 
bool cmp(int a,int b) 
{ 
  if(fabs(strength[a]-strength[b])>eps) 
    return (strength[a]>strength[b]+eps); 
  return tms[a]<tms[b]; 
} 
 
class ScheduleStrength { 
  public: 
  vector <string> calculate(vector <string> teams, vector <string> results)  
  { 
    vector <string> res; 
    int  i,j,k; 
    int n=results.size(); 
    tms=teams; 
    strength.resize(n); 
    vector<int> per; 
    for(i=0;i<n;i++) 
    { 
      int allgames=0; 
      int wins=0; 
      for(j=0;j<n;j++) 
        if(results[i][j]!='-') 
        { 
          for(k=0;k<n;k++) 
            if(k!=i&&results[j][k]!='-') 
            { 
              allgames++; 
              if(results[j][k]=='W') 
                wins++; 
            } 
        } 
      strength[i]=double(wins)/double(allgames); 
    } 
    for(i=0;i<n;i++) 
      per.push_back(i); 
    sort(per.begin(),per.end(),&cmp); 
    res.clear(); 
    for(i=0;i<n;i++) 
      res.push_back(teams[per[i]]); 
    return res; 
  } 
   
 
}; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/