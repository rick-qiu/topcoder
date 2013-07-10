/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2946
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

class NegativePhotoresist {
public:
    double minimumTilt(vector<string> pinConnections, int limit);
};

double NegativePhotoresist::minimumTilt(vector<string> pinConnections, int limit) {
    double ret;
    return ret;
}


int test0() {
    vector<string> pinConnections = {"3,0 2 3", "13,0 2 3", "0,2 0 1", "8,50 0 1", "3,100000 5", "100000,3 4", "8432,221"};
    int limit = 100835;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4454078077996135;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> pinConnections = {"3,0 2 3", "13,0 2 3", "0,2 0 1", "8,50 0 1", "3,100000 5", "100000,3 4", "8432,221"};
    int limit = 141601;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.010604469396671205;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> pinConnections = {"3,0 2 3", "13,0 2 3", "0,2 0 1", "8,50 0 1", "3,100000 5", "100000,3 4", "8432,221"};
    int limit = 100065;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5491503047781332;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> pinConnections = {"76492,66181 1", "74004,26736 0 14", "22967,14922", "5781,62226", "82836,93961 23", "87218,72769 19", "93356,54263 21 23", "31487,92953", "4108,40237 25", "90459,36018 18", "86769,8014", "6311,25772 13", "9507,63470 20", "30653,48087 11 15", "84214,63941 1", "87079,8036 13", "10892,10164 25 23", "31650,57394", "12181,22580 9", "8820,66849 5", "63222,10057 12", "85163,78521 6", "73264,56781", "45982,63119 4 6 16", "96653,33496", "4728,75705 8 16", "93821,30582", "9948,22812"};
    int limit = 2198136;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.078664288678656;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> pinConnections = {"26749,31005 7 12 37 22 3 31 18 14 22 43 18 47 27", "89443,23479 37 20 18 45 4 28 45 48 45 48 42 43", "26624,91482 8 10 9 47 38 7 26 38 7 15 24 33 13 19", "74780,3281 5 35 24 0 32 6 7 40 16 44 27 29 27 42", "64491,34646 12 42 9 10 25 1 14 22 32 28 16 24 49", "57611,97350 3 6 16 38 37 26 7 46 47 9 34 17 36 33", "54900,19650 5 41 17 21 3 41 45 9 45 24 7 29 49 33", "37779,84466 30 37 0 43 36 2 5 45 31 2 3 13 17 6 27", "68486,19205 2 14 42 44 17 34 25 41 38 43 10 49 11", "86915,28119 21 31 2 40 31 12 49 41 4 22 5 34 6 46", "81402,18667 40 2 17 17 18 8 4 12 38 12 15 26 42 12", "76982,50425 29 29 13 8 36 49 16 27 26 28 27 34 46", "43766,59005 15 27 0 9 4 22 10 10 49 44 37 10 34 24", "71619,57051 36 47 48 39 11 45 32 42 30 7 29 2 34", "95436,51350 8 18 23 22 17 23 22 16 0 48 19 4 24 19", "18419,71778 29 12 31 23 24 30 36 26 10 18 45 36 2", "58370,12207 48 33 5 14 19 47 11 28 44 3 18 32 4 46", "93954,84580 33 21 10 8 47 35 32 6 10 14 43 22 5 7", "37005,46508 14 29 22 1 10 0 23 37 15 0 31 16 31 41", "25700,33156 20 25 35 40 38 16 14 22 14 23 27 25 2", "87882,64415 19 35 35 33 1 24 26 24 34 41 34 31 29", "80610,20042 9 27 35 28 46 17 37 28 36 37 6 41 34", "55546,68119 39 18 34 14 12 0 14 9 0 17 39 4 19 27", "12701,80882 30 32 15 14 37 42 14 47 18 33 47 19 46", "14048,1355 15 20 20 3 28 42 14 12 2 49 45 25 6 4", "27482,63293 49 38 45 19 8 39 4 38 47 38 46 19 24", "48215,66574 35 41 32 30 20 41 5 2 15 35 10 11 49", "53613,76037 21 12 40 11 42 46 0 3 49 11 19 3 22 7", "90922,15011 21 30 40 40 40 21 44 24 1 16 4 11 49", "67445,91022 15 11 35 47 18 11 38 20 13 38 3 32 6", "93451,40067 41 23 7 28 26 47 42 15 44 49 31 13 31", "25947,11589 9 15 9 40 39 0 30 7 18 20 30 35 43 18", "98403,23751 47 37 44 26 23 17 3 13 48 4 16 42 29", "32918,74706 17 16 39 47 41 20 23 36 5 35 2 6 43 43", "9851,96894 8 22 44 36 20 21 5 20 12 9 43 13 46 11", "86305,55072 37 21 26 29 20 3 20 17 19 46 26 33 31", "66150,16273 45 13 39 7 21 34 15 11 45 39 15 33 5", "95275,37494 1 35 32 43 7 0 21 23 5 39 44 21 18 12", "16184,79884 40 25 39 5 8 2 19 10 47 2 25 29 25 29", "77000,48925 33 22 36 38 25 37 13 31 40 46 40 36 22", "19246,92639 10 38 9 28 19 28 28 48 31 27 39 39 3", "37419,96699 30 26 33 6 9 8 45 26 21 6 20 46 18 43", "65611,72059 8 30 23 4 44 24 10 13 27 3 32 1 48 48", "78307,80168 37 7 8 17 0 31 34 41 48 33 33 48 1 48", "35276,57349 8 32 45 34 30 37 28 42 12 46 16 49 3", "10106,992 36 25 44 41 1 7 36 13 15 6 6 1 24 49 1", "43647,68652 21 5 35 44 39 27 41 9 25 16 34 23 11", "7588,43383 32 33 29 2 17 13 30 38 23 16 25 5 23 0", "39549,20275 16 13 40 14 32 43 1 1 42 43 42 43", "49470,43071 25 9 8 12 30 11 44 26 28 27 24 45 4 6"};
    int limit = 45315043;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4635199471353126;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> pinConnections = {"62174,79412", "76393,1793 26 34", "23954,18514 13", "34378,82450 11", "75942,32248 27", "17201,37340", "75004,21587", "61818,89244 21 28", "21312,10189 20", "57598,87443", "64530,99753 34", "98459,8342 19 19 3 23", "73492,16914 18", "71560,76736 2", "56174,13088 22", "93909,88320 32", "64800,26776", "16069,954", "83781,18976 12", "38299,73270 11 11", "58755,66360 33 8", "70267,7703 32 7 30", "23121,82896 14", "10489,54205 37 11", "70324,48735", "98070,55723", "28263,95968 1", "96511,75999 4", "60210,16462 7", "89173,24691 33", "38087,68689 21 33", "8199,73901", "50101,493 21 15", "42189,37842 20 29 30", "81282,24113 10 1", "4597,46359", "2675,72180", "45891,34502 23"};
    int limit = 5706595;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1750592887847886;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> pinConnections = {"68387,18717", "63083,36763 5", "31547,27386 7", "39741,3185", "35283,63937 9", "66740,47468 1", "98573,68317", "46048,9975 9 2", "89965,7368", "89953,30593 7 4", "41252,9472", "29001,41392", "28041,88984"};
    int limit = 453890;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4183408625968954;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> pinConnections = {"10286,50769 27 34 27 18 40 10 12", "20009,54779 35 34 7", "67361,7341 36 39 36 37 5 10 4 8", "85543,8370 19 15 14 9", "32199,20945 16 17 8 34 10 2 21", "22064,89464 17 28 2 19 19 7", "83266,1486 38 18 38 17 39 27 7 32 14", "52247,24651 37 27 22 26 1 6 5", "1449,27398 4 27 24 30 14 12 2 37 13", "53780,84435 37 32 13 34 21 3", "61617,21654 17 39 2 37 4 0", "54329,92946 37 19 33", "17171,36742 35 27 16 37 8 0", "15921,69725 9 19 27 35 15 33 33 8", "28847,56508 26 37 30 24 38 32 3 8 6 35", "2592,41084 3 29 13", "39480,38358 40 23 4 40 12", "20953,84814 5 31 23 10 4 29 22 6 30 22 33", "39139,89410 6 33 28 35 40 36 0 24", "29562,9144 38 3 11 5 5 13 35", "18026,75825 39 30 21", "62919,55347 24 20 9 4", "15938,94184 7 17 40 26 38 17 38", "73317,92774 17 16", "22648,39971 21 14 30 26 8 38 29 18", "29556,35469 36", "33664,17266 14 7 24 27 39 22 37", "43153,64945 7 12 26 8 0 6 0 13", "89707,4993 18 5 37", "7584,22476 17 15 24", "91772,41724 40 14 24 20 17 31 35 8", "90664,71936 17 33 30", "3189,18279 9 14 33 33 38 6", "46974,41161 18 34 31 11 32 32 17 13 13", "55478,50067 9 1 33 4 0 35 36 37", "99354,80882 12 1 18 34 30 19 13 37 14", "42886,17140 2 2 18 34 25", "34692,34684 11 7 9 14 2 12 28 26 10 8 35 34", "87557,85241 6 19 14 6 22 24 32 22", "33675,52064 2 20 6 26 10", "28640,8216 16 30 16 22 18 0"};
    int limit = 42733137;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4209129775066298;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> pinConnections = {"13433,90341 14 3 3", "85245,83006 6 23 12", "17238,44938 11", "87723,26300 22 0 0", "54992,8824 11 26 31", "53124,39880 30 20 9 27", "58431,12396 30 9 1 24 11", "45850,61101 9 26", "48180,19181 20 18", "78761,59837 7 6 5", "33540,85143 18 31 21", "58726,87773 2 4 26 6", "76913,59165 14 1", "78863,87599 31 21 21 18", "33122,44162 22 0 12", "74947,55702 21", "99483,36644 23", "54487,90148", "6446,81990 10 13 8", "21680,45749 25", "97742,82685 8 5", "74544,28315 30 13 13 32 15 10", "33193,72693 14 3 29", "21192,68243 16 1", "53548,89960 32 25 6", "38892,32875 24 19 28 28", "76059,36222 31 4 7 11", "53253,69069 5", "86523,95243 25 25", "17268,30833 22", "87346,81355 6 21 5 32", "18269,78179 13 26 4 10", "90810,38888 24 21 30"};
    int limit = 58931735;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3037681956874498;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> pinConnections = {"61245,97510 5 12 26", "7264,79908 3 6 12 15 10", "29843,22464 8 22 21 23 24", "41085,35570 1 21 22 20 14 12", "34788,38428 9", "93907,39443 21 0 10 22", "78501,62645 15 9 1 15 10 26 10", "52036,74399 14 14 24 27", "58638,57591 2 10 26", "11075,32203 25 6 27 14 22 19 22 13 26 4", "88685,63039 24 17 13 8 6 5 18 14 6 1", "55713,76506 25 13 21 23", "47461,41662 1 0 13 3", "73513,15747 10 23 9 11 12", "58328,99816 7 23 7 9 3 27 18 10 25", "93421,43127 6 17 6 16 1 19", "37222,41024 15 22 24", "38786,2924 15 10", "91001,40950 19 25 14 20 10", "11689,37774 18 9 15", "63459,83323 22 21 3 18 23", "77393,31961 5 3 20 2 11 25", "88297,29347 20 2 16 9 3 9 5", "57668,14626 14 13 24 2 20 11", "7948,69898 10 7 25 23 16 2", "59371,54297 9 11 18 24 26 21 14", "51890,37405 6 9 25 8 0", "99952,60765 9 7 14"};
    int limit = 28695024;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8150109187924668;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> pinConnections = {"32353,2239 2", "91657,89337 6 4", "25142,45014 0 6", "69793,14915", "74883,4554 9 8 1", "12618,85948", "74756,94613 1 2 9", "40225,58644", "30146,15405 11 4", "81954,75191 4 6", "26444,61778 11", "21764,27996 10 8"};
    int limit = 4452010;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2213915985758023;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> pinConnections = {"45883,32508 22", "75379,65649 5 21", "42953,10689 10 22", "87829,56731 16", "24410,96207 20 14", "77926,48137 1", "99052,15548 7", "7124,51993 8 6", "85719,33701 7", "22028,45407 20", "70548,82058 2", "26802,69048", "42632,46198", "61837,90218 23", "30369,7250 18 4", "62552,28659", "2139,19886 3", "66037,3196 21", "9120,52041 14", "30361,67564 22", "64393,64703 4 9", "84094,82217 1 17", "46576,11563 19 2 0", "8774,49888 13"};
    int limit = 2724160;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.20020707476330193;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> pinConnections = {"72483,91912 8 1", "5586,233 10 7 10 0", "44164,97922 3 4", "82533,41106 5 2", "81855,54161 2 9 7", "83529,92409 3 8", "4383,91727", "56314,93612 11 1 4", "7608,99994 5 0 12", "20026,80819 4 11", "93404,96770 1 1", "43895,5473 7 9", "43447,65658 8", "10183,97036", "25273,4625"};
    int limit = 9589048;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1588327375974659;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> pinConnections = {"91640,70348 17 4 12 12", "79974,43442 2 10", "91644,5456 21 19 21 1 20", "35397,48223 17 24 21 10 5", "92420,12742 17 12 0 15", "43992,96438 14 3", "69506,13545 12 10", "59929,48529 22 18", "9512,3871 23 23", "6275,55652 23 24 13 14", "67678,12445 13 12 19 6 3 1", "827,3181", "10000,92050 6 21 10 18 17 16 4 13 0 15 0", "37506,32570 10 21 9 12 22", "78107,56761 18 5 23 9 15", "1494,67619 17 17 23 18 19 17 22 19 12 4 14", "74298,33702 20 12 18 24", "56821,16032 15 15 3 12 4 15 0 23", "84300,47367 12 15 7 20 14 16", "32575,76938 15 2 15 10", "4556,74395 16 18 2", "76966,18344 12 13 2 2 3", "76384,38669 7 15 13", "79529,29558 8 9 8 15 14 17", "18779,81963 9 3 16"};
    int limit = 23127298;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.109453481266223;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> pinConnections = {"94043,75188 18 5 26 15 21 28 27 2 10 4", "2062,95515 13 20 26", "60527,69391 26 16 0 13", "64129,3296 8 26 18 13 6 12 8 16", "98831,46260 24 19 29 10 0", "80190,73421 0 9 31 22 16", "74647,89022 15 10 3", "60244,14946 23 26 16 27 22 16", "41088,1533 23 3 9 13 3", "99048,19111 15 5 30 8 27", "8299,51912 25 15 6 11 4 25 0 16", "16889,14783 10 19 24", "63187,73009 20 13 3 17", "62293,83061 12 8 1 2 3 16", "98174,71759 18 31 18", "94496,19551 6 9 0 10 26", "98569,74803 21 7 23 2 7 10 13 3 21 5", "65157,79388 25 18 25 12 18", "10387,70047 14 0 14 17 3 17", "41004,2477 25 4 22 11 30", "94314,33469 12 23 24 1", "92932,73650 16 27 0 16", "31412,27626 19 7 5", "23879,15041 8 7 16 24 20 31", "60053,55896 4 23 20 11", "24734,4240 19 17 10 26 10 17 27", "51170,97250 2 0 25 7 3 15 28 27 1", "97171,65018 21 0 7 25 26 9", "51805,69152 0 26", "54731,41667 4", "15120,50561 9 19", "49744,27605 14 5 23"};
    int limit = 39566674;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0411546405777024;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> pinConnections = {"17293,43346 4", "86789,77776 7 9", "99903,60956 6 8", "55540,22448 7", "54943,13475 0 11", "51390,86924 9 12", "65902,68487 12 2 22 16 19 21", "67928,41143 17 22 3 1 12 19", "84844,56468 2", "26152,5350 5 1 16 15", "47188,7129 13 19", "10320,13289 16 14 12 4", "7630,5726 6 17 7 11 5 18", "52492,1592 10 14 16 20", "34867,62781 20 13 11 15 21 19", "38790,22605 18 14 9", "15427,82997 11 6 13 9", "14555,66785 20 7 22 12", "51906,49222 15 12", "12641,50054 10 6 7 14", "59435,47923 17 14 21 13", "27253,66849 20 6 14", "28974,23943 6 7 17"};
    int limit = 17352993;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.455604730282188;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> pinConnections = {"35786,45168 9 5", "24043,2277 2", "93016,50381 19 7 13 1", "3054,90798 9 10", "43045,36288 10 20", "77315,63166 13 0 11 7", "1954,67676", "96078,54018 17 2 23 5", "11164,91054 23 10 22", "91506,7903 23 0 3", "29015,69704 4 15 24 3 8 22", "5193,10083 5 18", "20648,55562 14 23", "17312,18782 5 2 19", "75974,74491 21 12", "71776,188 10", "25143,27538", "65463,94002 7 23 24", "84258,94594 11", "65549,79099 2 13", "31147,68005 22 4", "67763,43680 14", "60472,69640 20 8 10", "6752,76110 9 7 8 17 12", "30063,38561 10 17"};
    int limit = 32335954;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1624088226518787;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> pinConnections = {"23039,25886 7 20", "98495,38757 22", "80523,51964 25 8 9", "39509,71852 23 12 9 13 13", "8635,44692 22 19", "65048,48143 15 22 23", "80435,53513 19 12 18 17", "61641,66577 12 0", "28820,62853 24 22 12 2", "1830,32488 19 23 3 2", "54508,44731 22", "6533,99971 13", "14524,71218 3 21 6 7 8", "49046,45001 15 11 3 3 18", "65281,7592 22", "26434,91330 5 13 22 24", "34010,10602 24", "76702,28832 6", "76985,5673 25 20 6 13", "59032,38693 25 9 6 4", "54844,74490 18 0", "48270,81427 12", "36665,69829 8 1 10 5 14 4 15", "79230,87437 3 9 5", "43602,9378 16 8 15", "74111,57356 19 2 18"};
    int limit = 33833899;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6077105019121445;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> pinConnections = {"70466,70158 12 38 23 2 3 8", "72259,55689 44", "36400,6602 8 19 3 0 41 17 24 11", "40426,85816 13 2 17 33 0", "6017,30026 35 34 30 18", "15054,49806 39 21 16 14 28 13", "93063,93650 14", "75421,48666 8 34 24 21 31 33 32", "61599,70478 7 2 11 25 31 41 0 31 12", "33689,24995 39 21", "73445,8009 15 46 15 21", "984,7862 8 45 2", "75208,30102 0 13 8", "99592,93036 15 3 45 12 18 28 5", "49711,33000 19 5 6", "85276,85165 13 34 10 23 45 19 34 41 43 10", "95411,21464 5 22", "7541,70910 45 22 39 3 19 2 39 46", "12563,29249 26 33 13 4", "69475,37659 14 2 15 25 38 17", "16416,59503 25 25", "89366,90931 34 9 5 25 7 10 44", "27170,1192 17 28 37 42 41 25 16", "64881,74214 15 0 32 25", "75939,19293 42 33 7 2 40", "6687,41138 34 46 37 8 20 21 20 19 22 23", "66094,319 29 18", "58521,65839 41 39 45", "71592,51507 22 45 5 39 13", "95226,93005 26 36", "53649,95217 44 4", "84681,63795 8 7 8 37", "3072,84929 44 23 7", "84447,12643 40 18 24 36 3 37 7", "91764,99895 25 21 15 7 15 4", "9191,50286 39 4", "6862,70836 33 29", "18467,87269 25 40 22 46 33 31", "19529,40543 41 0 19", "17411,98832 35 5 9 17 17 27 28", "58725,61079 33 37 24", "65243,34960 38 27 8 15 2 22", "28166,18397 24 22", "60644,63582 44 15", "47475,63003 46 32 30 43 1 21", "26704,39689 17 13 15 28 11 27", "12520,5891 25 44 10 37 17"};
    int limit = 96256193;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1669786547688055;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> pinConnections = {"87730,98424 4 5", "92694,45157 8", "83301,51292 14 5 4 7", "29433,60891 14 4", "65407,58842 0 2 13 7 3", "90273,33455 2 12 11 0", "38762,72324 7 11 8", "79314,78518 6 4 2", "74710,70507 1 6", "96478,22434 11", "41518,69932 12 12", "9703,51790 6 5 9", "8750,13197 5 10 10", "81018,7817 4", "55070,36061 2 3"};
    int limit = 12046044;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7529180422430148;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> pinConnections = {"96600,93578 1 11 6 2 7", "38685,95749 21 7 24 19 0 5", "48451,26130 24 8 14 17 0", "40166,91193 22", "45050,82685 22 22 5 20", "97483,86135 4 15 16 7 1", "56347,20398 11 15 0", "34858,7924 12 1 23 16 5 0", "45113,75277 2 23 16", "46250,97844 24 13 14 15 16 15", "65316,22060 16", "59122,13840 6 24 22 18 0", "66987,14132 7", "42649,80142 9 19 14 16", "48026,45580 23 2 9 13", "70011,82784 22 21 23 20 6 5 9 9", "5891,58778 10 9 7 5 13 8", "56722,65150 2", "80132,33746 22 11", "38605,5146 1 13", "28583,94087 15 4", "36540,73052 15 1", "16923,17630 23 4 3 18 15 23 11 4", "53517,84392 24 22 14 22 8 15 7", "43885,87889 2 23 9 11 1"};
    int limit = 23918320;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9645823305001682;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> pinConnections = {"68301,31901 13 12 9 22", "41073,5515 3 14 11 8", "46280,65731 3", "58548,27355 7 1 18 15 10 2", "25230,86852 16 21 14 12", "78690,76563 12 14 23 12 22", "55267,220 14 20", "7318,77156 11 3 22 8 17", "77810,77280 10 10 17 18 21 15 7 1 9", "27915,51111 10 0 8 19", "69791,27184 8 8 9 11 3", "33296,33850 7 10 1 16 15", "71354,95673 5 0 5 23 4", "79596,93636 18 0 17 21 20", "96416,2837 5 1 4 6 20", "69091,30625 8 11 3", "42282,99315 4 22 11", "97062,85262 8 13 21 20 7", "51315,4801 13 8 3", "66414,57265 23 9", "77690,85725 17 13 14 6", "522,68905 8 17 13 4", "78142,75287 7 0 16 5", "3940,30765 5 19 12"};
    int limit = 18717865;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.310343302993292;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> pinConnections = {"38730,60733 31", "91347,1538 30", "14614,82863 17 34 21", "11851,20256 23 6", "12032,49476 43 12", "87527,23784 20", "94014,59034 3", "43007,52728 22 41 37 8", "68118,83884 7", "39584,27988 25 15", "26390,47446 39 28 24 36", "71010,73003", "83249,38425 4", "45182,56918 24 45 20", "36821,92676 40", "804,86241 9", "63544,78170 24", "77284,45795 2", "31918,82061", "3337,80007 27", "27511,68280 5 13", "10115,72693 2", "74754,18997 27 7", "70682,45363 3", "49360,41915 10 13 16", "46823,78947 42 9", "57501,79997", "39062,40991 22 19 35", "78588,8680 10 41", "37858,20303", "68477,62524 1", "3989,86290 0", "93773,40303 46", "20142,64334 46", "29443,99717 2", "88963,14380 27", "23217,15660 10", "8686,50720 42 42 7", "34958,6857", "75829,68247 10", "59117,24039 14", "4666,45014 28 7 44", "52766,44159 25 37 37", "97464,78298 4", "75232,50677 41", "85884,3293 13", "18023,86328 33 32"};
    int limit = 53424469;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7985870097248162;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> pinConnections = {"40197,76557 31 1 44 8 2 38 11 36 18 10 39 24 29 7", "28358,89257 0 44 42 16 37 41", "56952,31080 30 8 0 38 41", "73755,86565 16 41 33 40", "46382,31173 44 28 34 39 34 18 30", "57430,66945 42 13 40 24 38 10", "79773,39195 46 14 28 9 20 48", "50690,27382 42 35 9 10 37 38 12 16 13 21 18 0", "74859,35822 27 23 2 0 44 35 26 32", "27609,60039 20 32 46 7 6 37 44 15", "51338,67997 17 15 40 7 0 34 5", "71301,97555 31 44 37 39 14 0 14 13 26 34", "18772,84906 13 40 7 24 17 22", "32208,50392 12 5 45 34 7 11 45", "64285,93939 20 36 37 6 11 26 48 11 37 17 31 40", "25262,56030 40 20 10 34 31 44 9", "5891,82298 35 40 3 19 1 23 7 25 26 35", "91928,48636 38 44 44 10 39 21 36 37 36 12 14", "80734,81266 40 33 38 0 46 23 7 4", "74008,92354 44 28 16 21 20 21", "52461,46125 9 14 37 15 48 37 43 45 6 23 19 37", "31243,10526 47 43 19 7 17 39 19", "33600,77586 36 42 25 23 32 12", "54002,8280 24 8 22 16 18 20 41", "85975,94352 23 47 30 30 25 12 5 0", "67207,91941 22 24 35 36 16 43", "61756,28273 31 14 43 11 8 16", "96985,57768 8 47 43", "26004,41193 40 4 19 6 38 40", "5686,13832 32 35 0", "23340,35852 2 24 35 24 33 35 41 43 4", "26152,79632 32 34 0 26 34 11 36 15 48 14", "57166,34201 31 9 38 29 22 8 34", "94037,38677 18 45 3 34 30 39 45", "29911,37632 31 31 4 47 33 15 13 4 10 11 39 32", "69492,79305 16 7 47 29 30 8 25 30 16", "12149,72853 44 14 22 0 31 17 25 17", "71906,25563 14 20 48 11 20 7 38 1 9 14 17 20", "66070,89110 17 32 0 18 2 7 37 28 47 5 40", "45952,2525 46 11 4 0 17 21 45 34 33", "95074,21156 28 18 15 16 12 10 5 28 3 38 14", "25873,33062 47 46 3 2 30 23 1", "65772,97998 7 5 46 45 22 1", "91240,88253 20 21 30 26 27 25", "19985,59229 36 0 4 48 19 17 11 1 17 8 9 15", "30265,59719 33 42 13 20 39 13 33", "18417,29298 39 6 41 9 42 48 18", "57094,32206 41 24 35 27 21 34 38", "14560,13741 44 37 20 46 14 31 6"};
    int limit = 90371178;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.23215077006465293;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> pinConnections = {"14029,3036 7", "18308,46366 16", "36925,60058", "30036,8554 7", "30106,79450", "21128,48264 13", "96040,96307", "29359,7848 3 0", "33208,60969", "14669,81510", "26116,50403 15", "87368,77286 14", "31652,74002", "54394,83788 5", "85728,84433 11", "71669,48104 10 17", "52424,70819 1", "97474,16652 15"};
    int limit = 293499;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.48386163847511166;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> pinConnections = {"20440,90523 1", "77294,92080 0 8 4", "80105,69797", "63080,91099 13 15 5", "35840,32443 13 1 7", "74572,82229 3", "41896,67654", "42020,80187 4", "39183,59726 16 1 16", "74056,92657", "15015,41213 16", "87143,90400 15 18 13", "60279,62487", "30906,32942 3 4 11", "33408,68311", "3331,26042 11 3", "377,38608 8 10 8", "20554,45022", "74264,61022 11"};
    int limit = 11565022;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4272749378117082;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> pinConnections = {"30018,57007 10 30 19 17 10 21 7 23", "89023,52884 29 22 30 18", "7191,88375 27 14 31 14", "26922,30981 32 16 15 17 29", "86476,80861 10 18 16 24 11 10 15 31 8", "35286,26080 21 17 28 30 32 10", "22349,55001 7 10 26", "45611,32420 6 20 23 0", "51142,75501 4", "58729,94562 19 12 12", "52879,87934 4 28 0 20 12 4 6 5 14 0 21 23", "9718,44204 17 19 19 12 22 4 25", "66340,38792 9 9 11 10 27", "84475,24273 15 28 24 17 22 15 29", "11405,64950 31 2 2 23 10", "70163,93180 3 13 21 19 13 4 20 24", "28488,96194 3 4 22 27 31 29", "67173,78812 25 11 24 5 27 13 0 3 30 18", "20436,72069 25 21 4 23 1 17", "82242,89565 9 11 26 11 15 0 30", "74149,54115 10 23 7 15 25", "22309,50255 5 18 15 27 0 10", "64582,93565 16 28 32 1 11 13 26", "52083,58631 32 32 20 18 14 7 0 10", "58870,64571 29 17 31 13 4 15", "77015,80343 17 18 20 11", "98706,63579 19 31 22 6", "69745,86029 2 17 12 16 21 29", "13041,23891 29 10 13 5 22 30", "33572,73744 28 1 24 30 3 16 13 27", "64099,20369 0 19 5 29 17 1 28", "25863,71285 14 24 2 26 4 16", "27027,86120 3 23 23 22 5"};
    int limit = 33646337;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0324273745039474;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> pinConnections = {"14335,27289 7 9 13 9 7 4 2 3 7 9 2 2 8", "54207,5286 10 10 11 5 3 8 7 9", "12598,22967 12 5 12 8 7 12 9 11 0 6 12 6 0 13 0 6", "32264,15002 11 1 4 9 9 10 5 0 13", "35151,98982 8 3 13 7 0 12 13 12", "16018,32546 9 2 1 10 10 10 3 8 13 11", "49221,12679 10 2 2 2 8", "51524,56359 0 10 2 13 10 4 0 12 1 13 0 9", "2526,14504 2 4 1 11 13 5 6 0", "15900,4498 5 0 2 3 0 3 1 0 7", "60066,86774 1 1 7 6 5 5 7 5 13 3", "72569,88200 3 1 12 13 8 2 12 5", "26232,81844 2 2 11 2 7 2 11 13 4 4", "25331,57186 0 4 7 11 10 8 7 5 2 12 3 4"};
    int limit = 4344277;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7834138263300705;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> pinConnections = {"12646,84233 19 34 37 14 31 13 29 28 8 33 8 11 25", "14252,84191 16 35 4 5 25 20 8 30 35 38 36 21 16 36", "12079,44487 25 7 5 6 14 37 25 30 29 6 8 31 23", "80586,38029 38 29 15 9 22 17 22 36 10 14 13 12 17", "24374,98223 7 13 27 12 21 17 27 13 1 11 25 27 21", "43920,3314 22 30 16 17 10 10 2 25 38 1 18 26 8 25", "83117,56680 7 7 9 22 2 17 10 2 14 28", "45740,3404 25 6 15 2 4 6 10 15 21 17 19 38 38 23", "97596,81584 35 28 19 20 0 5 1 19 17 33 37 0 30 2", "29078,14127 11 33 22 6 28 33 26 3 26 13 16 14 18", "95783,83185 28 5 5 24 15 12 7 6 3 17 20 35 11 20", "55513,85628 9 20 20 26 29 4 15 26 36 36 10 0 29 21", "68865,43687 4 24 22 33 10 34 29 21 3 28 37 23 31", "3526,63093 21 4 32 18 4 9 0 16 24 26 23 19 38 3 21", "80708,66132 37 31 28 26 32 2 0 19 9 24 31 3 25 6", "13572,26565 7 32 10 3 11 24 24 7 33 34 23", "69310,29432 32 1 5 31 30 36 9 25 13 22 36 1", "4102,49619 32 18 5 4 30 27 6 3 30 18 8 7 10 34 3", "64726,82871 17 36 24 13 22 26 25 5 17 33 37 9 35", "23669,4378 35 38 0 8 38 23 22 14 8 27 38 20 13 7", "66474,2783 34 24 32 11 8 11 1 37 24 19 10 27 10 28", "4966,59288 13 4 22 33 12 38 7 13 25 4 29 36 1 11", "27015,32097 35 24 5 9 12 6 21 3 19 35 18 3 28 16", "41221,47714 30 29 38 19 13 12 34 38 15 2 7", "76298,47724 37 22 20 12 33 10 18 29 15 14 15 13 20", "9549,3765 7 2 32 28 5 2 1 16 18 35 4 5 28 14 21 0", "43817,93499 31 14 37 32 9 9 11 18 32 29 11 5 13 30", "15208,61462 4 4 17 30 19 4 20", "83305,28334 8 25 10 14 9 29 0 22 25 37 12 34 20 6", "36100,77230 23 3 24 28 11 26 0 34 34 12 35 2 21 11", "8269,77122 23 5 16 17 33 32 17 2 35 27 26 1 8 31", "90951,38550 26 14 16 36 0 35 37 14 36 30 12 38 2", "48278,98110 16 37 17 25 15 13 14 20 26 33 38 26 30", "60752,47357 9 24 32 9 12 21 30 35 18 34 0 8 34 15", "79273,79242 20 0 12 29 29 33 33 17 15 23 28", "25636,39570 19 8 22 1 22 33 31 25 30 18 29 1 10 37", "93401,77078 18 16 31 3 11 31 11 1 37 16 21 1", "2346,75112 24 32 14 26 0 2 20 18 31 28 8 35 12 36", "91768,52746 19 3 32 23 19 5 21 19 13 1 7 23 7 31"};
    int limit = 31506244;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4163522746022088;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> pinConnections = {"85592,16980 2 38 22 16 22 26 33 2 23 43 45 5 9 31", "49792,54737 16 26 9 37 42 40 21 24 21 30 13 20 7", "37339,52945 31 0 39 23 33 12 8 8 0 5 30 34 19 20", "66254,5538 39 47 29 27 28 11 23 26 19 9 47 44 5 27", "83093,40174 38 29 31 23 31 36 23 35 46 21 9 22 19", "44398,66397 13 10 14 28 2 43 29 0 3 36 40 48 18 30", "11301,13208 23 17 46 42 37 30 20 34 32 36 43", "28955,26530 12 39 35 41 29 43 23 10 41 1 36 18 19", "97121,65562 46 37 24 25 35 2 2 15 10 30 23 15 20", "95252,78588 22 1 44 23 11 27 4 3 35 44 26 29 0 18", "8261,3680 25 11 5 40 48 13 8 37 14 34 23 7 47 38", "89906,54129 10 3 38 9 33 36 14 45 28 19 36 46 43", "53571,36361 7 33 41 18 14 35 33 2 32 27 47 37 35", "29784,69187 5 37 19 33 10 45 38 17 26 1 19 45 37", "47701,88585 31 5 12 31 26 32 21 40 42 10 11 20 30", "5541,64242 38 38 25 43 8 27 17 24 8 38 26 21 29 23", "27784,47635 44 33 25 1 42 0 17 25 36 44 47 47 27", "80202,43369 6 39 22 28 42 20 15 16 45 45 30 37 13", "59497,13700 44 30 26 12 26 44 48 9 47 45 5 7", "793,3415 13 30 25 3 22 25 4 13 30 11 36 46 41 2 7", "51504,69316 23 44 28 26 17 38 22 31 6 14 8 30 1 2", "3340,36091 23 43 14 1 4 24 27 1 44 24 40 46 47 15", "34056,87809 9 17 0 28 35 0 39 20 19 4 26 25 29 37", "28381,37343 20 21 6 4 39 2 4 9 3 0 8 10 7 34 29 15", "447,64218 8 41 38 34 35 21 1 15 36 43 21 27 43 28", "90699,32932 10 16 8 39 19 15 26 32 19 16 31 27 22", "45658,30296 18 1 20 18 25 0 3 14 48 22 28 9 13 15", "65813,88238 33 3 12 42 39 15 9 21 44 24 25 3 16 32", "22876,13920 32 38 20 17 22 3 47 37 5 26 24 40 11", "92064,44158 35 39 4 3 7 5 42 9 22 34 15 23", "88905,71727 18 19 33 6 8 14 33 1 38 17 19 20 2 5", "76381,42038 14 2 4 39 4 14 20 32 35 35 46 25 42 0", "76086,50970 39 28 40 12 48 14 31 46 25 48 27 48 6", "93749,68468 12 16 13 27 2 12 46 0 30 11 41 48 30", "33515,69551 37 24 47 10 6 36 23 43 29 41 2", "18183,35465 29 40 7 44 8 12 22 24 4 31 31 12 9 46", "743,48270 4 11 45 24 42 34 16 5 19 11 6 7", "30211,19263 8 13 34 6 1 28 10 12 38 17 46 13 48 22", "71522,87112 15 0 4 28 24 15 20 11 13 30 37 15 10", "47573,49332 32 2 7 29 31 17 25 3 23 42 48 27 22 46", "82848,31988 35 10 32 14 1 45 44 42 28 21 5 48 41", "44469,9967 48 12 24 47 7 42 33 43 43 40 34 7 19", "84951,35007 48 16 6 39 17 27 1 41 40 14 36 31 29", "56011,54487 44 21 15 44 7 5 0 41 24 24 41 34 11 6", "58850,39929 16 18 20 43 35 9 43 40 18 27 21 9 3 16", "97378,4613 47 13 17 40 36 47 17 11 0 46 46 13 18", "57140,17348 8 6 33 39 32 4 31 45 35 45 37 11 21 19", "43275,85099 41 3 28 45 12 34 3 45 10 16 16 18 21", "60620,47521 41 42 10 39 32 26 32 33 18 5 40 32 37"};
    int limit = 63281874;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7222571766037851;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> pinConnections = {"20508,42474 2", "80968,98779", "99322,80817 0", "70809,7769", "73318,31549"};
    int limit = 85198;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5662588145681442;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> pinConnections = {"10903,85939 1 20 34 24 33 11 30 32 28 9 33 21 5 30", "32949,33576 0 8 28 33 5 32 6 9 20 4 2 12 6 22 11", "35788,28733 6 29 10 33 7 32 3 25 8 17 29 15 1 22", "27094,78584 20 24 27 29 23 32 15 19 4 18 2 32 27", "24792,15595 33 10 14 8 3 9 9 21 33 30 19 1 11 5 11", "11870,77004 35 33 18 26 31 23 1 13 0 9 27 13 16 4", "6536,26072 7 2 18 27 1 1 16 34 8 16 24 11 11", "98249,76485 35 6 19 33 14 14 28 2 23 35 14 10 17", "97526,92346 24 1 16 25 4 28 11 17 2 35 17 24 12 6", "67444,55704 19 15 4 4 0 17 1 5 25 13 24 10 15 24", "28014,80639 2 4 18 13 18 31 20 14 29 7 20 32 23 9", "8444,15982 23 28 0 8 31 4 4 34 22 17 1 16 6 6", "43567,96365 25 20 30 34 26 20 27 13 25 8 1 16 32", "88220,14057 10 35 29 5 12 23 21 35 9 5 30 33 26 24", "21604,81187 21 7 4 21 7 15 33 33 23 10 16 29 18 7", "42355,22103 31 23 3 25 14 9 2 25 31 33 21 22 30 9", "87792,1693 33 8 31 24 28 32 31 14 5 12 6 6 11", "47298,79379 18 18 24 34 28 29 23 8 2 9 8 7 30 11", "33573,27087 29 17 10 6 32 20 17 5 10 3 28 31 14 30", "83935,37911 26 26 7 3 9 21 21 27 32 21 4 21 28 22", "61827,63398 3 0 12 25 18 34 22 10 12 24 1 35 10 34", "99517,4711 14 29 14 19 19 4 30 35 0 23 19 15 13 19", "23779,54540 29 29 20 35 2 19 26 15 24 1 11 30", "11608,36153 3 15 11 34 7 24 17 5 14 21 13 26 25 10", "95936,18905 3 8 0 17 23 16 35 20 8 9 34 22 9 13 6", "86774,99300 12 20 8 15 34 32 35 31 2 15 27 12 9 23", "93094,69411 19 19 29 34 12 5 31 30 23 32 30 22 13", "97725,98165 3 28 19 6 12 32 29 25 33 5 3 28 34 34", "6587,48006 31 1 11 7 17 27 8 0 29 16 18 27 19 30", "2572,35973 22 26 18 3 2 21 22 17 13 28 2 14 27 10", "88503,86537 12 0 21 4 35 0 26 18 13 26 28 17 15 22", "74333,91220 15 28 16 10 5 25 11 26 16 33 18 15 35", "97429,47588 3 18 35 0 25 2 1 16 27 3 19 26 10 12", "14015,28545 5 2 4 7 16 0 14 1 4 14 0 31 15 27 13", "32317,25002 0 20 17 26 25 12 23 27 27 20 24 11 6", "7982,63958 7 5 32 13 25 7 21 24 22 31 8 30 20 13"};
    int limit = 44296716;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3752523529664753;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> pinConnections = {"36610,1976 9 8 8 2 2 2 6 2 1 4", "1790,34332 3 6 4 7 0", "35479,32687 3 9 7 3 7 9 3 6 0 8 0 0 0", "95853,10690 2 5 1 2 2 6 6 9 6 9 4 7", "14402,85012 7 8 6 8 1 3 0 8", "74498,98581 3 9 6 7 9 6", "85451,43505 5 4 2 1 3 3 3 8 0 5", "86073,27346 4 2 2 5 8 9 8 1 3", "81894,48787 0 4 0 4 9 9 7 6 2 7 4", "90116,13515 0 2 5 2 3 8 8 3 7 5"};
    int limit = 1966953;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4145871634164555;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> pinConnections = {"86166,58884 14 23 21 24 2 12 25 39 21 5 14 22 5 21", "53994,11641 31 12 11 3 28 39 26 14 12 4 38 7 6 24", "44202,89625 28 0 23 14 27 35 31 18 19 36 17 12 35", "66455,95522 14 18 17 12 35 31 1 20 12 22 23 10 28", "46266,87263 34 8 25 9 19 1 36 18 5 16 16 32 32 21", "39762,67520 28 20 11 11 38 14 6 0 0 19 18 26 10 4", "19011,45752 11 28 32 31 5 8 25 13 36 17 1 27 39 29", "52416,74674 10 29 18 9 32 18 1 31 21 18 25 39 18", "81746,54019 28 22 14 34 4 6 17 9 38 17 36 36 16 37", "84132,13562 19 26 13 38 30 4 8 7 19 17 28 35 20 28", "92944,42539 38 7 24 30 24 19 12 3 5 37 15 24 11 31", "48637,78616 6 5 1 5 32 15 13 27 13 33 10 16 18 13", "19648,39329 1 13 33 19 35 3 0 39 3 34 13 1 10 2 20", "11741,48555 12 9 12 6 16 20 11 11 27 37 37 11 21", "31936,3548 0 18 3 22 8 5 15 0 2 1 22 17 15 16 29", "24632,60210 39 14 11 14 27 38 33 37 23 29 33 10 34", "8621,2105 30 22 26 14 38 13 23 20 36 8 33 4 11 4", "94980,37897 3 37 8 14 29 8 9 36 6 34 19 35 25 2 25", "98991,70322 14 3 7 2 5 7 34 7 4 20 24 7 20 11 29", "53502,79554 9 27 12 26 4 5 9 30 10 2 22 36 26 17", "72435,70132 23 5 32 33 3 35 39 16 9 13 18 12 18 29", "85150,70813 0 22 0 0 30 7 23 36 35 33 4 37 32 13", "81781,32436 24 29 14 8 21 26 31 30 3 14 0 24 16 19", "52773,48855 34 20 0 30 2 34 30 26 3 16 21 15 31 38", "22539,5707 22 0 26 26 10 39 28 22 10 1 38 10 29 18", "98453,4369 28 31 39 33 4 0 32 6 36 26 17 7 34 17", "88659,8429 9 27 19 22 24 24 1 30 16 23 19 25 5 29", "13419,91315 19 26 37 36 37 2 15 6 32 31 11 32 13", "53530,75152 25 5 8 6 2 1 24 35 9 39 39 38 32 9 3", "41689,9442 22 7 38 17 14 39 26 6 35 15 24 20 18 33", "9706,98915 37 23 34 22 9 16 23 10 26 38 19 21 37", "75319,98480 1 25 6 38 3 22 35 39 2 7 36 27 23 10", "86298,72796 36 6 20 11 25 7 27 28 27 35 4 4 21", "89113,30701 12 20 25 35 15 37 34 37 16 15 11 21 29", "55209,58465 23 30 4 8 39 23 12 38 18 17 33 25 15", "68003,81825 12 3 31 33 2 28 20 9 17 36 29 2 32 21", "73312,44333 32 27 6 17 8 2 4 19 25 8 31 16 35 21", "7604,63676 30 27 17 27 30 33 15 33 10 8 13 13 21", "98158,60048 10 5 31 9 29 8 34 30 15 1 16 28 24 23", "44191,43499 15 25 12 34 0 1 24 31 20 28 28 29 6 7"};
    int limit = 45164284;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5858277327745092;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> pinConnections = {"69976,66338 12 23 25 2 18 21 21 31 31 36 37 3 28", "7462,5660 30 30 6 4 14 35 13 28 21 29 15 20 17 38", "33929,75867 17 7 6 35 14 0 18 17 36 15 25 6 22 14", "66367,63116 38 33 12 4 26 8 0 11 12 16 13 35", "42342,9496 17 14 23 8 35 9 11 3 1 37 35 10 24 14", "46693,2799 36 20 36 33 11 12", "99501,3345 23 2 10 24 7 12 26 1 31 33 2 27 25 23", "95780,31558 32 2 24 16 6 32 38 10 29 25 22 21 37", "44930,65974 10 31 4 20 37 27 36 3 22 31 38 36 34", "13127,52680 21 26 4 31 24 16 36 32 15 38 37 15 31", "36901,35333 21 8 22 20 6 36 7 18 26 4 28 14 31 31", "23372,79825 16 27 37 28 4 32 23 30 3 34 25 5 38 36", "94987,76812 32 0 6 17 3 38 19 23 32 30 24 3 36 5", "53299,2385 31 1 17 20 14 27 34 21 3 25", "65407,96493 4 35 35 38 2 21 31 1 4 13 10 2 22 22", "74756,50515 23 37 19 19 28 16 38 2 9 32 1 9 30 36", "40917,51215 20 11 17 20 7 19 15 9 37 38 34 38 3 29", "37629,44586 4 2 16 21 24 12 32 33 2 22 13 1 29 26", "15980,86308 28 33 22 28 26 37 24 0 30 2 10 37 37", "67225,41602 30 37 27 15 15 12 16 28 30 21 34 27 28", "46512,3176 16 16 10 28 8 35 34 5 1 30 27 13 34 38", "19803,66416 10 9 33 17 32 14 0 0 26 7 1 35 19 13", "14682,24032 10 18 25 33 7 25 17 30 2 8 24 14 14", "88101,31960 32 15 4 6 26 0 11 36 27 12 35 6 29", "21684,3598 32 7 29 6 17 9 33 18 4 12 22", "30792,71340 32 0 22 37 7 22 2 11 6 30 13", "61857,19467 23 9 34 35 6 18 29 21 30 3 34 10 33 17", "92082,47775 11 19 32 8 34 23 20 6 13 19 29 29", "25249,17357 18 20 18 11 15 19 32 31 1 10 0 19 35", "71979,30323 24 26 7 1 17 23 27 35 16 27", "4616,44069 19 33 1 1 18 11 26 22 19 12 20 15 36 25", "6088,89482 8 9 14 0 13 33 28 6 0 9 8 10 36 10", "9297,72657 24 23 7 12 25 21 7 11 27 17 28 9 15 12", "40651,26711 38 18 21 3 30 24 37 17 22 31 6 5 26 36", "61643,45815 37 26 20 27 26 19 16 11 20 35 13 8", "93206,91658 14 4 14 2 26 20 1 21 4 23 34 28 29 3", "5166,22791 10 8 23 2 5 9 0 5 15 30 33 12 11 8 31", "88796,7083 34 19 15 11 8 18 33 25 7 4 18 18 0 9 16", "58714,35707 33 3 14 7 12 15 9 16 16 1 8 11 20"};
    int limit = 28834493;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3670213707497372;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> pinConnections = {"96663,21718 1 1 2 9 5 8 5 9 4 12 11 4 2 3 1 12 15", "57999,77660 10 6 0 9 0 3 6 2 11 6 7 15 12 13 11 0", "37305,57278 14 0 4 14 11 12 13 9 1 15 8 7 3 7 9 0", "27625,27075 10 1 8 12 8 13 10 5 2 11 12 0 13", "72465,18460 14 7 7 6 2 13 8 14 7 11 8 5 0 15 10 0", "40804,27011 11 0 0 13 10 4 6 14 7 3 7 10 15 7", "80797,43256 1 15 4 1 1 11 13 15 7 11 5 8 10 7", "2163,2439 4 4 15 13 8 4 1 6 2 10 8 5 13 6 2 5 5", "57282,80133 3 4 7 12 0 3 11 4 13 13 12 2 6 7 14 13", "21443,32561 1 14 0 14 14 14 2 15 0 15 13 11 15 2", "35670,40142 1 3 14 5 4 6 7 3 15 5", "95432,47230 12 14 5 2 1 6 4 8 13 6 15 0 9 1 3 15", "32027,24244 11 14 2 14 8 3 14 13 14 0 8 1 3 0", "59194,85561 4 7 2 15 12 5 8 6 11 8 9 3 7 1 8 3 15", "77565,25195 4 11 2 9 12 2 10 9 12 9 9 4 12 12 5 8", "2553,2765 6 7 13 9 9 6 4 2 11 1 9 10 5 11 0 13"};
    int limit = 4642226;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3289628588941844;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> pinConnections = {"46671,44522 8 27 19 11 14 16 24 21", "80492,79026 19 10 10 21 20 16 21 6", "7210,2215 8 3 25 8 16 6 22", "19437,99870 2 6 10 20 15 12 28 10 4 4 9 23", "97957,69846 7 24 25 8 3 18 3 23 15 11 5 9 25 12", "62084,57033 23 19 18 28 28 19 25 8 15 6 4 12 11 24", "98037,47383 3 16 7 16 24 28 14 5 21 16 2 1 23 12", "27933,90722 4 6 15 8 25 22 19 28", "19927,82656 2 20 0 20 4 2 7 5 17 20 13 11", "1528,53579 11 28 21 28 10 3 26 4 15", "63013,27843 1 3 17 21 17 3 1 9 14", "97929,81799 22 9 12 0 23 17 12 8 4 17 5", "11875,97698 22 3 19 11 13 11 28 26 24 5 6 4", "78608,90369 27 21 22 19 22 8 12", "99691,64558 24 28 17 18 15 6 16 0 10 23", "78825,78547 24 3 7 14 5 4 9 20", "38737,44304 6 6 23 24 27 18 14 2 1 6 26 0 21", "47788,94899 14 10 21 8 19 10 11 23 19 23 11", "14431,72978 28 14 5 26 16 4 24", "42466,1553 1 5 5 13 17 12 0 25 25 17 7 28", "59712,84913 8 3 8 24 8 1 15", "85159,28822 9 17 13 10 25 1 6 1 0 16", "24705,80634 11 12 13 13 7 28 2", "52109,40992 27 26 5 16 27 11 4 17 6 26 3 17 14", "49922,11681 15 14 4 25 6 20 26 16 12 26 27 0 5 18", "76388,25427 2 24 4 5 21 19 7 19 4", "81490,68643 28 23 28 18 24 9 12 16 23 24", "99123,98020 23 13 0 23 16 24", "51140,15216 9 26 18 26 14 6 5 5 9 3 22 12 7 19"};
    int limit = 29323053;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.46310035362894164;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> pinConnections = {"98359,65963 12 3 7 3 5 9 9 8", "98406,38775 7 4 2 8 8 11 6 8 6 7 8 7 6 2 3 5", "32478,57945 1 13 6 9 12 5 9 11 11 8 6 5 10 1 4", "55725,94826 9 0 12 0 10 9 7 1 10", "2461,17361 1 13 11 5 10 9 13 2", "81301,33392 4 10 8 6 6 9 2 9 0 12 2 8 1", "7531,24766 11 10 10 5 5 2 1 10 11 11 1 12 2 10 1", "34164,14394 1 0 11 11 13 1 9 13 1 3 11", "82728,52301 1 5 1 1 11 2 1 0 5 13", "97450,14992 3 11 4 13 2 5 11 2 5 12 11 7 0 13 3 0", "67834,87917 12 6 5 4 6 11 6 13 6 3 2 3", "29003,72517 6 9 4 1 10 6 7 6 9 7 2 9 8 2 7", "69535,41739 13 0 10 13 2 3 9 6 5", "34011,63699 12 4 12 2 9 7 10 7 9 8 4"};
    int limit = 5303384;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5945682972015875;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> pinConnections = {"46452,30562 13 2 15 3 7", "89229,25243 19 34 33 11 33 30 31 6 30 29 20", "1825,48232 0 25 4 4 13 12", "51601,31470 33 33 0 14 34 13 24 27 27 25 23", "92862,25692 22 19 2 11 5 2 17 12 30", "18387,24285 27 4 23 17 18 7", "54758,59515 9 33 1 30 30 30 24", "6754,10469 10 14 20 34 17 27 26 0 31 24 24 5", "10972,57195 32 14 24 34 34 27 31 15", "92416,66446 6 18 24 14", "59280,35688 7 23 22 14 31 15 20", "77562,37564 1 21 4 23 16", "1610,62308 17 31 18 34 4 2 27", "75577,12727 0 23 30 20 3 2 33 15 33", "47587,56485 22 7 10 3 8 17 9 30 33 30", "17566,54892 0 10 8 13", "87684,61901 23 21 23 24 11 24 32 34", "90569,79397 21 27 12 27 7 34 14 18 5 20 28 4", "39527,73465 9 12 17 30 27 5 19", "81098,5034 1 4 28 34 34 24 18", "76368,22472 7 29 24 13 22 17 34 24 10 1", "83996,53613 17 34 23 11 16 27", "2119,78841 14 10 4 29 32 20", "35797,68350 28 10 24 16 21 13 16 25 11 5 3", "841,39425 23 9 20 8 3 16 7 29 7 19 16 32 20 6", "20159,14762 2 29 33 32 23 3", "28612,15284 30 7", "42061,1914 5 17 17 7 3 21 3 18 8 12", "58157,26109 32 23 19 17 30", "16126,87110 30 20 25 34 22 24 1", "90160,91895 26 29 1 13 14 18 1 6 28 6 6 4 14", "10301,27729 1 12 10 7 33 8", "81335,40705 28 8 25 22 24 16", "35864,60276 3 1 1 34 3 25 6 14 31 13 13", "69220,83664 1 7 21 33 29 12 17 3 8 19 8 19 20 16"};
    int limit = 46062236;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06094781065050245;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> pinConnections = {"6657,8010 6 2 2 3 5 4", "34283,27397 6 5", "15301,64611 0 4 0 3 5 8 3", "9839,74253 8 0 5 2 8 2", "20233,4807 2 5 0 5", "31942,93666 6 7 7 6 3 1 4 2 0 4 8", "75417,96020 0 7 5 1 5 8 7", "92989,45206 6 5 5 6", "50016,54282 3 3 2 5 6"};
    int limit = 2047451;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0034121829079525;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> pinConnections = {"8732,96012", "97205,13610 2", "74659,1950 1"};
    int limit = 24779;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4914708843017558;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> pinConnections = {"19020,69506 5 3", "21330,3057 3 4 2 5 3 2 2", "88652,66944 3 1 5 1 3 5 1", "62735,52601 1 0 2 5 4 1 2", "60648,16450 5 1 5 3 5", "40833,10574 0 4 4 3 1 2 4 2"};
    int limit = 775169;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5823310641920068;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> pinConnections = {"44727,72712 11 7 19 7 10 9 7", "64456,94817 16 6 6 4 18 12 3 9 14 16 13 8 17 11 3", "88788,46898 5 12 5 20 4 6 11 18 19 20 3 15 8 6 9", "48328,52046 13 16 1 13 10 11 8 2 7 7 6 15 1 6 12", "82863,94680 14 1 17 16 15 2 14 13 17 11 12 19 11", "59777,6273 2 20 2 6 20 15 11 15 17 9 16 10 12", "46743,41495 10 1 1 5 11 2 9 18 20 2 13 16 3 16 3", "24592,40824 14 16 0 19 0 3 11 13 13 3 18 20 13 0", "7923,29428 18 17 14 19 18 16 20 10 15 3 2 1 15 15", "1794,78893 15 12 6 1 18 17 18 2 19 5 15 11 0 12", "48241,2871 6 17 16 17 3 8 15 0 14 5 13 20 20 16", "32933,98935 16 19 18 0 6 2 3 12 4 5 7 4 19 17 1 9", "4045,92980 2 1 9 11 20 15 4 20 3 5 13 9 20", "4440,13272 3 17 3 18 4 20 16 14 1 7 7 6 7 10 20 12", "65723,87125 7 8 4 18 4 19 18 1 15 13 18 19 19 10", "83255,22528 18 4 9 17 5 14 8 5 12 16 2 8 8 10 3 9", "9368,78544 7 1 11 10 4 3 19 8 1 13 15 6 17 6 5 10", "44743,94689 10 19 8 4 13 10 19 15 4 5 9 20 16 1 11", "64208,38001 8 1 15 14 11 19 13 14 2 6 8 9 14 9 7", "67690,50478 17 11 14 17 16 7 18 0 8 2 4 11 14 9 14", "93604,43922 5 2 5 6 12 8 2 13 12 17 7 13 10 10 12"};
    int limit = 7480754;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5201481861941362;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> pinConnections = {"58796,49217 3 6 3 10 15 4 16 12", "45571,73305 14 12 16 2 15", "34014,75731 12 6 15 20 4 1 12 11 13 8 3 20 11 13", "85920,85425 15 7 13 0 0 19 6 12 2 18 14 19", "17940,43500 19 18 13 8 0 20 2 13 7 12 9 9 15 14 11", "70325,78386 15 13 20 11 20 16 7 14", "74049,72511 2 16 0 17 17 15 3 14 14", "16245,33319 3 9 4 12 9 5", "99609,3158 4 15 20 10 2 16 12", "89731,97122 19 19 12 17 7 4 4 17 18 7 12 13", "40279,31602 12 17 12 0 11 16 8", "22978,36779 16 14 16 10 5 2 2 4", "86701,62936 2 9 10 17 10 13 1 2 16 4 13 3 7 0 8 9", "69900,43306 4 15 3 5 14 16 17 12 20 16 4 12 2 2 9", "53722,36636 13 11 1 19 16 6 6 4 20 3 19 5", "26762,26661 3 5 13 2 8 0 6 1 4", "41372,24215 11 13 6 11 1 13 10 12 14 0 17 8 5 19", "43120,98853 9 10 12 13 6 20 6 9 16", "19374,8729 4 3 9", "30884,80088 4 9 9 14 3 20 16 14 3", "38433,73916 5 2 4 17 13 5 8 2 19 14"};
    int limit = 6665515;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5474335249704751;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> pinConnections = {"74197,15253 7 27 10 17 16 8 5 29 16 4 8 26 12 11", "86905,15523 23 28 12 2 10 29 27 18 27 5 5 3 4 29", "59704,78120 26 1 7 11 11 22 3 6 17 11 29 19 11 7", "27962,71285 25 19 4 12 24 25 27 2 14 9 1 29 22 14", "46235,81307 24 24 15 23 3 13 0 22 22 1 19 20", "22324,56703 28 10 29 15 16 0 1 6 25 18 26 9 1 24", "54671,46279 14 8 19 14 26 9 28 14 26 25 5 21 2 17", "37230,55529 8 10 17 0 2 18 18 19 18 14 20 2 29 19", "78725,30959 18 7 6 25 19 15 9 13 0 0 28 24 17 17", "82258,72190 25 19 6 28 10 27 21 23 20 8 16 5 3 29", "52187,60432 7 9 0 24 1 5 12 18 26 17 25 19 26 12", "96369,30649 17 28 21 16 2 2 24 28 28 2 26 2 0 14", "5982,64753 1 24 10 17 27 28 3 28 28 24 0 18 10 13", "57686,95893 15 18 23 19 18 8 4 19 22 25 24 12 21", "97982,43683 16 6 6 6 23 23 28 7 3 19 3 20 17 11 29", "86379,76342 25 13 26 4 23 8 27 5 20 16 18 20 22 20", "97174,46560 14 27 18 20 11 24 9 26 0 5 22 15 22 0", "40513,46592 26 7 11 27 12 18 0 10 2 6 8 8 26 14 19", "16392,2696 8 13 16 7 10 1 27 7 17 13 15 7 5 12 22", "79639,12751 6 9 8 13 3 7 14 13 10 25 4 2 7 17", "2052,17093 16 29 21 9 26 15 15 24 15 7 14 4 24", "10909,21605 23 11 9 20 23 6 13 29 29 29", "31080,75227 26 25 26 2 16 16 4 18 15 29 13 4 25 3", "80690,5706 1 29 21 29 13 28 14 4 15 9 14 21 27 27", "57033,3853 12 10 4 4 25 11 3 16 12 8 20 13 25 5 20", "69768,77410 15 9 8 3 24 22 3 6 27 5 10 19 13 22 24", "8318,76943 17 2 6 15 22 6 22 16 20 10 0 5 10 11 17", "71834,95033 16 0 9 17 28 1 12 1 3 23 18 15 23 25", "89217,51582 1 9 11 5 6 23 27 12 12 14 11 12 11 8", "1647,68615 23 23 1 20 5 0 22 9 2 3 1 21 7 21 21 14"};
    int limit = 17735643;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4319402904756438;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> pinConnections = {"99842,41650 22 14 32 30 32 7 35 2 6 22 15 22 32 31", "11844,93607 41 25 14 5 17 41 28 32 31 35 36", "11367,47092 10 28 45 45 16 28 14 7 6 13 11 0 6 22", "51030,37446 46 12 22 16 10 13 8 36 31 38 36 16 41", "48286,58384 30 6 7 10 44 12 43 9 10 14 7 44 17 38", "6126,88949 35 42 16 19 18 27 1 24 26 38 35 34 37", "9774,57429 9 29 45 4 43 44 40 2 8 27 39 21 0 2 26", "11163,71290 28 38 19 4 39 21 2 22 0 23 23 4 27 12", "51895,92754 28 34 35 19 29 29 21 6 19 11 40 3 36", "64510,90699 6 26 17 27 19 21 18 17 46 12 27 42 4", "61841,20784 42 2 42 27 16 4 20 40 3 27 39 15 4 39", "45643,97105 41 29 2 16 41 14 8 25 46 34 21 40 41", "12875,92237 42 18 20 3 30 27 9 25 4 7 38 30 40 33", "96341,81148 31 28 23 2 14 37 14 45 3 25 46 42 39", "29483,7337 1 0 19 20 2 19 30 13 13 42 41 11 15 4", "25330,33052 45 20 27 22 32 10 44 14 36 33 18 0 16", "68413,56765 5 26 28 10 33 2 3 39 11 22 15 3 36 31", "98873,12273 41 9 22 29 25 1 30 9 24 18 33 30 4 25", "36350,79864 20 5 12 25 9 46 29 37 17 38 15 44 34", "2634,78133 21 5 36 7 9 14 8 14 28 40 32 8 46 33 37", "79772,36264 18 30 15 12 14 10 45 34 23 25 21 21 24", "85437,47242 19 33 9 34 46 7 43 42 8 20 6 41 20 11", "37018,27409 0 17 26 36 3 24 7 15 32 16 23 0 2 0 35", "21678,17685 42 39 13 43 24 29 40 20 7 7 37 22 40", "91384,81633 5 22 41 23 17 43 34 20 41 31 33", "59746,42850 1 17 29 18 34 20 12 13 11 34 36 17 38", "7100,2244 36 30 9 16 22 5 46 45 32 45 32 42 6 40", "99315,73059 9 10 5 15 29 37 12 43 29 9 10 6 44 7", "74879,25737 7 8 2 34 42 16 13 2 46 46 41 1 19 35", "60373,3588 6 17 11 39 25 27 33 32 31 8 8 18 27 23", "89161,83268 26 4 20 17 43 12 39 14 0 35 17 33 12", "46838,29986 43 37 13 39 29 1 3 32 16 24 0", "77507,95557 36 26 0 29 43 19 44 0 1 22 26 15 31 0", "98712,15450 21 16 35 29 39 17 15 38 19 30 12 40 24", "59543,69857 8 28 21 20 25 38 5 44 24 25 11 38 18", "90888,96028 5 8 33 44 46 5 28 46 0 30 1 36 22 40", "43808,10629 26 19 32 22 8 15 3 35 25 3 16 1", "25218,71640 31 45 45 27 13 18 45 40 5 23 41 19 40", "10829,77391 43 7 45 5 34 45 43 18 33 34 3 25 12 4", "76521,97497 23 29 7 31 42 30 16 33 10 41 6 10 13", "31348,5507 6 10 19 23 37 8 23 26 11 46 37 12 33 35", "95613,30713 11 17 1 28 1 24 11 14 39 21 37 24 3 11", "59489,58500 5 10 10 12 28 23 39 43 21 14 9 26 13", "11370,41169 31 38 6 30 23 32 27 21 45 42 4 24 38", "74060,28530 6 4 35 32 15 27 34 4 18", "11831,82884 6 37 37 15 2 38 2 20 26 43 26 38 13 37", "71576,88350 3 28 28 21 26 9 35 18 35 13 11 19 40"};
    int limit = 51691689;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2452456831319705;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> pinConnections = {"77084,15865 2 25 15 19 25 14 20 21 18 28 9 11 6 26", "30593,47308 8 3 8 12 4 7 22 24 25 6 3 4 22 24 26", "17357,55228 0 10 15 13 22 23 23 21 9 23 15 7 8 20", "47834,43496 1 12 28 5 10 28 4 1 12 28 8 26 27 9 27", "58422,62217 21 1 6 9 12 3 24 27 18 28 1 23 26 16", "21031,90528 16 22 28 17 3 20 15 9 23 20", "16296,268 28 15 15 9 10 4 1 14 12 12 24 7 16 0 7", "23002,31148 22 1 26 11 19 9 27 6 14 27 6 18 2 25", "68254,67653 1 1 12 10 22 12 26 18 3 9 15 2 11 24", "31030,9763 13 6 4 22 7 5 11 18 2 15 0 8 3 26 16 20", "85988,93899 11 2 23 24 16 6 20 22 3 8 28 14 13 21", "22858,44674 25 26 10 22 25 7 9 20 20 0 26 21 8 18", "75475,74074 18 1 3 8 16 22 4 8 6 6 18 23 3 27 15", "66067,59221 25 17 14 9 21 2 15 21 18 17 16 23 10", "18394,51084 22 13 28 22 21 27 10 24 0 6 27 27 7 15", "25396,40813 6 2 6 13 0 18 5 26 9 19 2 12 14 27 8", "3220,81122 25 5 18 26 12 10 13 23 22 4 6 9 20 18", "62763,93463 13 28 5 13 28 22 24 21 21 24", "18545,76451 12 16 20 13 15 9 0 12 4 8 28 7 11 16", "56711,65074 20 0 7 15", "28218,37404 19 24 18 10 5 0 11 11 16 24 5 2 9", "25900,22274 4 13 13 14 25 10 2 0 23 23 17 17 11 26", "24131,829 14 7 5 2 12 14 1 27 10 11 8 9 28 16 1 17", "4326,25486 27 10 26 2 2 27 16 13 25 5 2 12 4 21 21", "89408,96327 10 20 1 14 4 6 1 17 25 17 8 20", "2026,62313 13 16 26 11 28 0 1 21 11 28 23 0 24 7", "38542,37401 25 11 16 23 27 7 8 15 3 4 1 0 11 9 21", "50728,29987 23 26 23 22 14 4 7 14 14 12 7 3 15 3", "59598,10538 25 6 5 14 17 3 3 25 10 22 4 18 17 0 3"};
    int limit = 13440764;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4739665351196565;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> pinConnections = {"79681,76002 1", "38984,94058 0"};
    int limit = 41239;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1927819937821575;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> pinConnections = {"26503,97592 39 12 16 38 32 13 14 40 33 29 32 24 47", "73983,59895 17 36 30 22 11 28 23 22 33 11 23 44 44", "65870,72078 10 39 24 31 13 43 27 43 12 37 38 16 33", "56705,26511 21 25 16 30 19 20 38 23 10 4 5", "63950,26730 32 43 19 32 27 11 41 30 36 3 38", "73997,33167 26 6 46 13 17 16 27 28 48 44 3", "38632,98678 5 16 34 32 24 20 38 28 14 41 36 27 29", "80166,82630 45 10 15 22 22 41 32 45 10 41 17 32 42", "94122,2470 20 37 18 29 19 45 37 44 34 15 21", "27324,82836 28 37 39", "89609,27979 40 2 7 41 20 15 12 14 35 46 35 7 15 3", "21581,19420 12 28 15 1 44 1 16 48 4 42 36 47 24", "79818,68778 11 0 15 29 27 48 36 10 48 2 33 30 23", "50410,71630 0 31 2 35 17 5 28 14 15 21 28 44 18 26", "39511,16557 33 37 0 31 17 10 13 45 19 39 6 41 23", "12120,14805 46 12 19 7 11 45 10 13 35 21 10 44 8", "99164,23435 19 31 0 6 43 20 17 24 3 23 43 5 2 11", "5426,12862 1 18 46 41 16 27 39 13 14 5 33 34 35 7", "72978,55571 22 17 8 43 22 45 24 28 34 23 33 13 31", "46516,71326 40 16 22 15 4 8 14 30 3 31 42 42 47 23", "28288,27650 8 21 38 16 34 10 36 6 34 33 3 47 37 25", "88315,19645 20 35 25 3 41 29 43 13 33 15 38 46 8", "432,20431 26 18 19 1 37 7 24 18 7 35 1 41 35 42 31", "8685,26622 47 45 16 1 18 14 3 1 12 19 40 47 24 47", "26563,83611 40 2 16 22 6 18 31 31 0 41 27 39 11 23", "18218,29026 37 40 21 43 3 43 39 44 41 36 20 46", "5709,36010 22 5 36 32 27 41 40 47 13", "17904,748 40 32 35 12 42 17 2 37 4 5 48 24 26 6 46", "73824,40520 32 33 11 32 9 30 13 1 6 18 39 13 41 5", "59334,87638 37 12 48 42 8 0 21 45 42 38 38 34 6 30", "78318,43688 46 1 37 28 43 19 35 42 3 12 36 4 42 29", "82342,60314 35 16 2 13 43 14 24 24 19 22 32 44 18", "80315,98808 28 4 27 0 28 4 33 6 39 0 47 7 26 7 31", "94551,24933 28 14 39 43 32 0 1 17 45 12 20 18 2 21", "88079,29714 6 20 40 35 20 17 8 18 39 29 36", "88536,32130 31 21 27 13 10 45 22 34 10 17 30 22 15", "49697,76814 1 12 20 26 39 6 30 4 11 25 34", "44380,76934 29 25 8 14 22 30 27 43 45 8 2 46 9 20", "78158,61917 20 0 6 39 2 47 21 29 3 29 4", "41637,45267 0 2 33 17 32 38 28 14 36 25 34 24 9 44", "79752,69142 19 27 10 24 25 44 42 0 45 34 48 26 23", "86326,81092 17 10 7 22 21 6 28 14 7 4 24 25 44 26", "63194,45411 27 43 29 40 30 11 29 19 19 22 7 45 30", "72183,29011 16 25 42 4 31 33 18 2 2 30 37 16 21 25", "43335,79817 40 11 8 13 5 31 25 15 39 1 41 1", "21525,58711 7 15 23 40 18 35 37 33 8 14 29 7 48 42", "2970,67548 15 30 47 17 5 47 10 37 27 21 25 48", "25607,88904 23 46 46 32 0 38 20 19 11 26 23 23", "92984,55210 29 12 12 11 45 27 40 5 46"};
    int limit = 48267259;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 1.363654198329251;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> pinConnections = {"44030,2812 13 28 4 10 4 25 27 6 33 20 30 2 29 20", "41585,78444 26 18 9 22 14 8", "82909,40639 33 22 11 24 9 30 19 27 27 27 29 0 21", "95417,69348 11 29 16 15 28 14 26 24 11 9 14 30 14", "69617,27249 14 16 18 0 16 11 0 19 33 10 32 27 12", "94029,79882 17 15 13 15 6 12 27 15 6 19 32 20 15", "83645,64624 27 13 10 7 30 19 5 27 33 5 18 0 30 29", "393,36131 15 6 8 12 19 29 28 14 14", "82220,17834 16 14 7 30 19 32 30 19 24 14 1 12 21", "14732,20376 14 17 10 16 2 1 18 32 15 3 11 20", "44267,85867 6 32 9 0 24 20 4 24", "21301,91706 3 15 2 31 33 31 26 4 27 32 3 9 31", "9469,8249 24 13 15 28 29 7 5 16 26 4 30 28 8", "70611,6437 12 26 6 31 25 0 5 16 17 33 31 18 15 26", "20414,77648 9 4 8 33 23 18 25 1 3 8 7 3 3 7", "22278,15171 21 29 11 12 7 5 5 26 5 3 9 21 5 13 28", "13811,36637 8 31 4 3 17 19 9 19 13 4 12 33 18 31", "80070,7284 5 9 32 16 32 13 32 24 20 28 28", "42257,73473 4 1 20 25 14 24 9 16 6 13 25 28", "59229,77020 24 23 6 16 30 8 31 16 2 7 8 30 26 4 5", "19714,53699 18 31 5 10 0 17 29 0 9", "51039,23960 15 31 25 27 23 15 2 23 8", "14654,96084 2 33 23 1 26 33 28 30", "2238,6509 32 19 14 22 30 21 27 27 29 21 26", "93380,50737 12 19 2 30 18 32 10 8 3 17 10", "77592,59629 13 29 18 14 0 21 27 18", "36059,23214 13 1 15 28 11 12 3 19 13 22 23 33", "52341,29638 6 6 5 2 2 32 2 11 0 21 25 23 33 23 4", "65975,73515 12 0 26 3 32 31 7 18 15 17 22 30 12 17", "17183,45096 15 3 25 12 7 2 0 23 20 6", "21380,85947 6 8 33 19 2 8 23 24 19 0 22 3 28 6 12", "12340,10727 16 13 11 19 11 20 32 13 28 21 16 33 11", "49451,38200 23 17 10 8 17 31 27 9 28 24 5 11 17 4", "73318,15817 2 14 22 30 11 6 13 16 0 4 27 31 22 26"};
    int limit = 29737019;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9916419589696344;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> pinConnections = {"46814,74478", "12809,27592 3", "20229,45138", "65340,81382 1", "3222,17455 8", "13192,50159", "44419,35277", "83763,53710 8 8", "95105,73849 4 7 7", "58462,13542"};
    int limit = 286318;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9835666140351786;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> pinConnections = {"51661,51091 7 10 10 10 6 10", "5981,35278 5 10", "62913,7273 8", "10121,6940 9 7 9", "37268,4931 8 10 5", "71134,84114 1 6 7 4", "67719,3984 5 10 9 7 0", "33889,84536 8 0 5 6 3", "14736,21132 7 10 2 4", "39943,41519 6 3 3", "63075,38580 8 0 6 4 0 0 0 1"};
    int limit = 4549620;
    NegativePhotoresist* pObj = new NegativePhotoresist();
    clock_t start = clock();
    double result = pObj->minimumTilt(pinConnections, limit);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7094303711242955;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=274023&rd=5856&pm=2946
********************************************************************************
#include <map> // find insert erase make_pair first second 
#include <set> 
#include <cassert> // assert 
//#include <queue> 
//#include <cctype> // isalpha isdigit isalnum isupper islower tolower toupper 
#include <string> // size 
#include <vector> // push_back pop_back front back 
#include <iostream> 
#include <sstream> // istringstream ostringstream 
#include <algorithm> // next_permutation reverse count 
#include <numeric> // accumulate 
#include <functional> 
 
using namespace std; 
 
#ifndef TR // DEBUG OUTPUT MACRO 
#  define TR(v) do{}while(0) 
#  undef assert 
#  define assert(expr) (void)(expr) 
#endif 
#define ALL(C) (C).begin(), (C).end() 
#define forIter(I, C) for(typeof((C).begin()) I=(C).begin(); I!=(C).end(); ++I) 
#define forN(I, C) for ( int I = 0; I < (C); ++(I) ) 
#define forEach(I, C) forN(I,int((C).size())) 
#define forEach2(I, J, C) forEach(I, C)forEach(J, (C)[I]) 
typedef long long i64; typedef unsigned long long u64; 
typedef vector<int> VI; typedef vector<VI> VVI; typedef vector<string> VS; 
 
const double MAX = 1e300; 
 
#define METHOD NegativePhotoresist::minimumTilt 
struct NegativePhotoresist 
{ 
    vector<double> xx, yy; 
    VVI cc; 
    bool good(double angle, double limit) 
    { 
        double muly = cos(angle); 
        const int N = xx.size(); 
        vector< vector<double> > dd(N, vector<double>(N)); 
        forEach2 ( i, j, dd ) { 
            if ( cc[i][j] ) { 
                dd[i][j] = hypot(xx[i]-xx[j], (yy[i]-yy[j])*muly); 
            } 
            else { 
                dd[i][j] = MAX*2; 
            } 
        } 
        forN ( k, N ) forN ( j, N ) forN ( i, N ) 
            dd[i][j] = min(dd[i][j], dd[i][k] + dd[k][j]); 
        double sum = 0; 
        int count = 0; 
        forN ( i, N ) { 
            forN ( j, i ) { 
                if ( dd[i][j] < MAX ) { 
                    ++count; 
                    sum += dd[i][j]; 
                } 
            } 
        } 
        TR(count|angle|muly|sum); 
        return sum < limit; 
    } 
    double minimumTilt(vector <string> pinConnections, int limit)  
    { 
        cc.assign(pinConnections.size(), VI(pinConnections.size())); 
        forEach ( i, pinConnections ) { 
            istringstream in(pinConnections[i]); 
            int x, y, k; 
            char c; 
            in >> x >> c >> y; 
            xx.push_back(x); 
            yy.push_back(y); 
            while ( in >> k ) { 
                cc[i][k] = 1; 
                cc[k][i] = 1; 
            } 
            in.clear(); 
        } 
        double min = 0, max = M_PI/2; 
        while ( max-min > 1e-10 ) { 
            double mid = (max+min)/2; 
            (good(mid, limit)? max: min) = mid; 
        } 
        return min; 
    } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/