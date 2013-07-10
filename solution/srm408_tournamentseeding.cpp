/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9802
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

class TournamentSeeding {
public:
    vector<string> getSeeds(vector<string> teams, vector<string> games, vector<int> seeds);
};

vector<string> TournamentSeeding::getSeeds(vector<string> teams, vector<string> games, vector<int> seeds) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> teams = {"CELTICS ", "LAKER", "S SPURS PISTONS"};
    vector<string> games = {"CELTICS LAKERS CELTICS PISTONS LAKERS SPURS"};
    vector<int> seeds = {0, 1, 2, 3};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CELTICS", "LAKERS", "SPURS", "PISTONS"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> teams = {"GIANTS PATRIOTS CHARGERS PACKERS"};
    vector<string> games = {"PATRIOTS CHARGERS"};
    vector<int> seeds = {3, 2, 1, 0};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PACKERS", "CHARGERS", "PATRIOTS", "GIANTS"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> teams = {"REDSOX PHILLIES METS DODGER", "S ORIOLES BLUEJAYS CUBS AN", "GELS"};
    vector<string> games = {"METS ANGELS", " METS CU", "BS ORIO", "LES ANGELS"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 5, 5};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> teams = {"REDSOX PHILLIES METS DODGER", "S ORIOLES BLUEJAYS CUBS AN", "GELS"};
    vector<string> games = {"METS ANGELS", " METS CU", "BS CU", "BS DODGERS REDSOX PHILLIES"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 6, 7};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BLUEJAYS", "METS", "CUBS", "REDSOX", "PHILLIES", "DODGERS", "ANGELS", "ORIOLES"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> teams = {"A B C D E F 8 H I 3 9 L 4 N O P"};
    vector<string> games = {"P A B H D C D E E N"};
    vector<int> seeds = {0, 2, 0, 0, 3, 4, 7, 2};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "8", "3", "3", "D", "E", "P", "8"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> teams = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y ", "Z 0 1 2 3 4 5 6 7 8 9 AA AB AC AD AE AF AG AH AI A", "J AK AL AM AN AO AP AQ AR AS AT AU AV AW AX AY AZ ", "A0 A1"};
    vector<string> games = {};
    vector<int> seeds = {0, 3, 4, 6, 9, 11, 13, 19, 20, 32, 33};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "3", "4", "6", "9", "A0", "AA", "AG", "AH", "AT", "AU"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> teams = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y ", "Z 0 1 2 3 4 5 6 7 8 9 AA AB AC AD AE AF AG AH AI A", "J AK AL AM AN AO AP AQ AR AS AT AU AV AW AX AY AZ ", "A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 BA BB BC BD BE BF BG", " BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW B", "X BY BZ B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 CA CB CC CD ", "CE CF CG CH CI CJ CK CL CM CN CO CP CQ CR CS CT CU", " CV CW CX CY CZ C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 DA D", "B DC DD DE DF DG DH DI DJ DK DL DM DN DO DP DQ DR ", "DS DT DU DV DW DX DY DZ D0 D1 D2 D3 D4 D5 D6 D7 D8", " D9 EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO E", "P EQ ER ES ET EU EV EW EX EY EZ E0 E1 E2 E3 E4 E5 ", "E6 E7 E8 E9 FA FB FC FD FE FF FG FH FI FJ FK FL FM", " FN FO FP FQ FR FS FT FU FV FW FX FY FZ F0 F1 F2 F", "3 F4 F5 F6 F7 F8 F9 GA GB GC GD GE GF GG GH GI GJ ", "GK GL GM GN GO GP GQ GR GS GT GU GV GW GX GY GZ G0", " G1 G2 G3 G4 G5 G6 G7 G8 G9 HA HB HC HD HE HF HG H", "H HI HJ HK HL HM HN HO HP HQ HR HS HT HU HV HW HX ", "HY HZ H0 H1 H2 H3 H4 H5 H6 H7 H8 H9 IA IB IC ID IE", " IF IG IH II IJ IK IL IM IN IO IP IQ IR IS IT IU I", "V IW IX IY IZ I0 I1 I2 I3 I4 I5 I6 I7 I8 I9 JA JB ", "JC JD JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS", " JT JU JV JW JX JY JZ J0 J1 J2 J3 J4 J5 J6 J7 J8 J", "9 KA KB KC KD KE KF KG KH KI KJ KK KL KM KN KO KP ", "KQ KR KS KT KU KV KW KX KY KZ K0 K1 K2 K3 K4 K5 K6", " K7 K8 K9 LA LB LC LD LE LF LG LH LI LJ LK LL LM L", "N LO LP LQ LR LS LT LU LV LW LX LY LZ L0 L1 L2 L3 ", "L4 L5 L6 L7 L8 L9 MA MB MC MD ME MF MG MH MI MJ MK", " ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ M0 M", "1 M2 M3 M4 M5 M6 M7 M8 M9 NA NB NC ND NE NF NG NH"};
    vector<string> games = {};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 337, 412, 221, 111, 511};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1", "2", "3", "4", "5", "IU", "KV", "FP", "CQ", "Z"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> teams = {"A AA AAA AAAA"};
    vector<string> games = {};
    vector<int> seeds = {0, 1, 2, 3};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "AA", "AAA", "AAAA"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> teams = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y ", "Z 0 1 2 3 4 5 6 7 8 9 AA AB AC AD AE AF AG AH AI A", "J AK AL AM AN AO AP AQ AR AS AT AU AV AW AX AY AZ ", "A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 BA BB BC BD BE BF BG", " BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW B", "X BY BZ B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 CA CB CC CD ", "CE CF CG CH CI CJ CK CL CM CN CO CP CQ CR CS CT CU", " CV CW CX CY CZ C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 DA D", "B DC DD DE DF DG DH DI DJ DK DL DM DN DO DP DQ DR ", "DS DT DU DV DW DX DY DZ D0 D1 D2 D3 D4 D5 D6 D7 D8", " D9 EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO E", "P EQ ER ES ET EU EV EW EX EY EZ E0 E1 E2 E3 E4 E5 ", "E6 E7 E8 E9 FA FB FC FD FE FF FG FH FI FJ FK FL FM", " FN FO FP FQ FR FS FT FU FV FW FX FY FZ F0 F1 F2 F", "3 F4 F5 F6 F7 F8 F9 GA GB GC GD GE GF GG GH GI GJ ", "GK GL GM GN GO GP GQ GR GS GT GU GV GW GX GY GZ G0", " G1 G2 G3 G4 G5 G6 G7 G8 G9 HA HB HC HD HE HF HG H", "H HI HJ HK HL HM HN HO HP HQ HR HS HT HU HV HW HX ", "HY HZ H0 H1 H2 H3 H4 H5 H6 H7 H8 H9 IA IB IC ID IE", " IF IG IH II IJ IK IL IM IN IO IP IQ IR IS IT IU I", "V IW IX IY IZ I0 I1 I2 I3 I4 I5 I6 I7 I8 I9 JA JB ", "JC JD JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS", " JT JU JV JW JX JY JZ J0 J1 J2 J3 J4 J5 J6 J7 J8 J", "9 KA KB KC KD KE KF KG KH KI KJ KK KL KM KN KO KP ", "KQ KR KS KT KU KV KW KX KY KZ K0 K1 K2 K3 K4 K5 K6", " K7 K8 K9 LA LB LC LD LE LF LG LH LI LJ LK LL LM L", "N LO LP LQ LR LS LT LU LV LW LX LY LZ L0 L1 L2 L3 ", "L4 L5 L6 L7 L8 L9 MA MB MC MD ME MF MG MH MI MJ MK", " ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ M0 M", "1 M2 M3 M4 M5 M6 M7 M8 M9 NA NB NC ND NE NF NG NH"};
    vector<string> games = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y ", "Z 0 1 2 3 4 5 6 7 8 9 AA AB AC AD AE AF AG AH AI A", "J AK AL AM AN AO AP AQ AR AS AT AU AV AW AX AY AZ ", "A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 BA BB BC BD BE BF BG", " BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW B", "X BY BZ B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 CA CB CC CD ", "CE CF CG CH CI CJ CK CL CM CN CO CP CQ CR CS CT CU", " CV CW CX CY CZ C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 DA D", "B DC DD DE DF DG DH DI DJ DK DL DM DN DO DP DQ DR ", "DS DT DU DV DW DX DY DZ D0 D1 D2 D3 D4 D5 D6 D7 D8", " D9 EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO E", "P EQ ER ES ET EU EV EW EX EY EZ E0 E1 E2 E3 E4 E5 ", "E6 E7 E8 E9 FA FB FC FD FE FF FG FH FI FJ FK FL FM", " FN FO FP FQ FR FS FT FU FV FW FX FY FZ F0 F1 F2 F", "3 F4 F5 F6 F7 F8 F9 GA GB GC GD GE GF GG GH GI GJ ", "GK GL GM GN GO GP GQ GR GS GT GU GV GW GX GY GZ G0", " G1 G2 G3 G4 G5 G6 G7 G8 G9 HA HB HC HD HE HF HG H", "H HI HJ HK HL HM HN HO HP HQ HR HS HT HU HV HW HX ", "HY HZ H0 H1 H2 H3 H4 H5 H6 H7 H8 H9 IA IB IC ID IE", " IF IG IH II IJ IK IL IM IN IO IP IQ IR IS IT IU I", "V IW IX IY IZ I0 I1 I2 I3 I4 I5 I6 I7 I8 I9 JA JB ", "JC JD JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS", " JT JU JV JW JX JY JZ J0 J1 J2 J3 J4 J5 J6 J7 J8 J", "9 KA KB KC KD KE KF KG KH KI KJ KK KL KM KN KO KP ", "KQ KR KS KT KU KV KW KX KY KZ K0 K1 K2 K3 K4 K5 K6", " K7 K8 K9 LA LB LC LD LE LF LG LH LI LJ LK LL LM L", "N LO LP LQ LR LS LT LU LV LW LX LY LZ L0 L1 L2 L3 ", "L4 L5 L6 L7 L8 L9 MA MB MC MD ME MF MG MH MI MJ MK", " ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ M0 M", "1 M2 M3 M4 M5 M6 M7 M8 M9 NA NB NC ND NE NF NG NH"};
    vector<int> seeds = {0, 2, 4, 23, 312, 38, 129, 219, 1, 24, 120, 120, 122};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "4", "8", "AY", "KH", "BS", "GO", "LK", "2", "B0", "G6", "G6", "GA"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> teams = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y ", "Z 0 1 2 3 4 5 6 7 8 9 AA AB AC AD AE AF AG AH AI A", "J AK AL AM AN AO AP AQ AR AS AT AU AV AW AX AY AZ ", "A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 BA BB BC BD BE BF BG", " BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW B", "X BY BZ B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 CA CB CC CD ", "CE CF CG CH CI CJ CK CL CM CN CO CP CQ CR CS CT CU", " CV CW CX CY CZ C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 DA D", "B DC DD DE DF DG DH DI DJ DK DL DM DN DO DP DQ DR ", "DS DT DU DV DW DX DY DZ D0 D1 D2 D3 D4 D5 D6 D7 D8", " D9 EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO E", "P EQ ER ES ET EU EV EW EX EY EZ E0 E1 E2 E3 E4 E5 ", "E6 E7 E8 E9 FA FB FC FD FE FF FG FH FI FJ FK FL FM", " FN FO FP FQ FR FS FT FU FV FW FX FY FZ F0 F1 F2 F", "3 F4 F5 F6 F7 F8 F9 GA GB GC GD GE GF GG GH GI GJ ", "GK GL GM GN GO GP GQ GR GS GT GU GV GW GX GY GZ G0", " G1 G2 G3 G4 G5 G6 G7 G8 G9 HA HB HC HD HE HF HG H", "H HI HJ HK HL HM HN HO HP HQ HR HS HT HU HV HW HX ", "HY HZ H0 H1 H2 H3 H4 H5 H6 H7 H8 H9 IA IB IC ID IE", " IF IG IH II IJ IK IL IM IN IO IP IQ IR IS IT IU I", "V IW IX IY IZ I0 I1 I2 I3 I4 I5 I6 I7 I8 I9 JA JB ", "JC JD JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS", " JT JU JV JW JX JY JZ J0 J1 J2 J3 J4 J5 J6 J7 J8 J", "9 KA KB KC KD KE KF KG KH KI KJ KK KL KM KN KO KP ", "KQ KR KS KT KU KV KW KX KY KZ K0 K1 K2 K3 K4 K5 K6", " K7 K8 K9 LA LB LC LD LE LF LG LH LI LJ LK LL LM L", "N LO LP LQ LR LS LT LU LV LW LX LY LZ L0 L1 L2 L3 ", "L4 L5 L6 L7 L8 L9 MA MB MC MD ME MF MG MH MI MJ MK", " ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ M0 M", "1 M2 M3 M4 M5 M6 M7 M8 M9 NA NB NC ND NE NF NG NH"};
    vector<string> games = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y ", "Z 0 1 2 3 4 5 6 7 8 9 AA AB AC AD AE AF AG AH AI A", "J AK AL AM AN AO AP AQ AR AS AT AU AV AW AX AY AZ ", "A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 BA BB BC BD BE BF BG", " BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW B", "X BY BZ B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 CA CB CC CD ", "CE CF CG CH CI CJ CK CL CM CN CO CP CQ CR CS CT CU", " CV CW CX CY CZ C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 DA D", "B DC DD DE DF DG DH DI DJ DK DL DM DN DO DP DQ DR ", "DS DT DU DV DW DX DY DZ D0 D1 D2 D3 D4 D5 D6 D7 D8", " D9 EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO E", "P EQ ER ES ET EU EV EW EX EY EZ E0 E1 E2 E3 E4 E5 ", "E6 E7 E8 E9 FA FB FC FD FE FF FG FH FI FJ FK FL FM", " FN FO FP FQ FR FS FT FU FV FW FX FY FZ F0 F1 F2 F", "3 F4 F5 F6 F7 F8 F9 GA GB GC GD GE GF GG GH GI GJ ", "GK GL GM GN GO GP GQ GR GS GT GU GV GW GX GY GZ G0", " G1 G2 G3 G4 G5 G6 G7 G8 G9 HA HB HC HD HE HF HG H", "H HI HJ HK HL HM HN HO HP HQ HR HS HT HU HV HW HX ", "HY HZ H0 H1 H2 H3 H4 H5 H6 H7 H8 H9 IA IB IC ID IE", " IF IG IH II IJ IK IL IM IN IO IP IQ IR IS IT IU I", "V IW IX IY IZ I0 I1 I2 I3 I4 I5 I6 I7 I8 I9 JA JB ", "JC JD JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS", " JT JU JV JW JX JY JZ J0 J1 J2 J3 J4 J5 J6 J7 J8 J", "9 KA KB KC KD KE KF KG KH KI KJ KK KL KM KN KO KP ", "KQ KR KS KT KU KV KW KX KY KZ K0 K1 K2 K3 K4 K5 K6", " K7 K8 K9 LA LB LC LD LE LF LG LH LI LJ LK LL LM L", "N LO LP LQ LR LS LT LU LV LW LX LY LZ L0 L1 L2 L3 ", "L4 L5 L6 L7 L8 L9 MA MB MC MD ME MF MG MH MI MJ MK", " ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ M0 M", "2 M2 M3 M4 M5 M6 M7 M8 M9 NA NB NC ND NE NF NG NH"};
    vector<int> seeds = {0, 2, 4, 23, 312, 38, 129, 219, 1, 24, 120, 120, 122};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> teams = {"A B C D E F G H"};
    vector<string> games = {"A G B D E F G H"};
    vector<int> seeds = {0, 1};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> teams = {"A B C D"};
    vector<string> games = {"A B B C C A"};
    vector<int> seeds = {0, 1, 2, 3};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> teams = {"C A B D"};
    vector<string> games = {"A C B C D C"};
    vector<int> seeds = {0};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> teams = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y ", "Z 0 1 2 3 4 5 6 7 8 9 AA AB AC AD AE AF AG AH AI A", "J AK AL AM AN AO AP AQ AR AS AT AU AV AW AX AY AZ ", "A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 BA BB BC BD BE BF BG", " BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW B", "X BY BZ B0 B1 B2 B3 B4 B5 B6 B7 B8 B9 CA CB CC CD ", "CE CF CG CH CI CJ CK CL CM CN CO CP CQ CR CS CT CU", " CV CW CX CY CZ C0 C1 C2 C3 C4 C5 C6 C7 C8 C9 DA D", "B DC DD DE DF DG DH DI DJ DK DL DM DN DO DP DQ DR ", "DS DT DU DV DW DX DY DZ D0 D1 D2 D3 D4 D5 D6 D7 D8", " D9 EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO E", "P EQ ER ES ET EU EV EW EX EY EZ E0 E1 E2 E3 E4 E5 ", "E6 E7 E8 E9 FA FB FC FD FE FF FG FH FI FJ FK FL FM", " FN FO FP FQ FR FS FT FU FV FW FX FY FZ F0 F1 F2 F", "3 F4 F5 F6 F7 F8 F9 GA GB GC GD GE GF GG GH GI GJ ", "GK GL GM GN GO GP GQ GR GS GT GU GV GW GX GY GZ G0", " G1 G2 G3 G4 G5 G6 G7 G8 G9 HA HB HC HD HE HF HG H", "H HI HJ HK HL HM HN HO HP HQ HR HS HT HU HV HW HX ", "HY HZ H0 H1 H2 H3 H4 H5 H6 H7 H8 H9 IA IB IC ID IE", " IF IG IH II IJ IK IL IM IN IO IP IQ IR IS IT IU I", "V IW IX IY IZ I0 I1 I2 I3 I4 I5 I6 I7 I8 I9 JA JB ", "JC JD JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS", " JT JU JV JW JX JY JZ J0 J1 J2 J3 J4 J5 J6 J7 J8 J", "9 KA KB KC KD KE KF KG KH KI KJ KK KL KM KN KO KP ", "KQ KR KS KT KU KV KW KX KY KZ K0 K1 K2 K3 K4 K5 K6", " K7 K8 K9 LA LB LC LD LE LF LG LH LI LJ LK LL LM L", "N LO LP LQ LR LS LT LU LV LW LX LY LZ L0 L1 L2 L3 ", "L4 L5 L6 L7 L8 L9 MA MB MC MD ME MF MG MH MI MJ MK", " ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ M0 M", "1 M2 M3 M4 M5 M6 M7 M8 M9 NA NB NC ND NE NF NG NH"};
    vector<string> games = {"A NH EC IF AH BM X MU A6 EH A2 LP Y MT EJ H8 B0 DN", " P M2 AX LU DM I5 BQ DX CX JU H F6 4 BZ FF HC DP I", "2 S CB BS DV A1 LQ 8 MJ 5 BY ED IE BZ KS AF E8 B5 ", "DI CO CZ B9 KI AK E3 EP H2 V FS U FT 3 B0 F9 GI T ", "CA Q M1 AZ LS FC HF W B7 FA HH A8 EF C1 JQ AO EZ B", "H LA O FZ DY IT B CS EK H7 AV ES EH IA W MV CU JX ", "DX IU 1 B2 B1 DM AE E9 BM D1 BU DT D CQ CM C1 D4 I", "N B4 KN AJ L8 EB IG CI C5 0 B3 S MZ B2 KP B GC BO ", "K3 4 FJ CC KF S FV CK J7 EZ HS T MY 4 MN B6 DH BW ", "KV N F0 K M7 BK D3 CH KA E6 HL FY GT F3 GO E4 HN C", "G KB C NF DR I0 DG JB DV IW ER H0 FL G6 BB LG AN L", "4 EG IB B4 DJ BP K2 CT CU AQ EX FI G9 M CH O CF EV", " HW Z B4 AL L6 AL BI F2 GP P CE EA IH CL C2 AN BG ", "X B6 AG BN AU LX DB JG A5 LM A4 LN CO J3 E CP D2 I", "P FH HA AR EW ET HY AV LW DD JE 1 FM AC FB AD ME C", "R CW B7 KK O M3 M F1 A CT 7 FG D0 IR K F3 C9 JI B9", " DE AN E0 5 FI T FU BR DW E5 HM D3 IO 6 BX B8 DF B", "V KW C5 JM G NB F7 GK 7 MK BH D6 K CJ BN K4 R M0 C", "A DD CV JW BL D2 C7 JK FX GU AY LT Z MS AX EQ BE D", "9 A1 EM BJ K8 AT LY A5 EI DJ I8 AF BO 8 BV AK BJ C", "K C3 CN J4 0 FN FK G7 BQ K1 C0 JR B8 KJ V B8 CP CY", " 9 BU EU HX EQ H1 FD HE V MW Z FO 6 ML FO G3 EL H6", " DA JH E8 HJ BE LD AK L7 2 FL FP G2 BD LE C6 JL CJ", " J8 CT JY F NC BA LH BB EC BY KT AW ER F8 GJ AY EP", " BD EA DK I7 3 FK CL J6 E0 HR B1 KQ AP EY A0 EN N ", "M4 CY JT BS KZ AC MF AH E6 U B9 AI BL CE C9 DQ I1 ", "0 MR A3 EK EX HU AC BR AI L9 Q CD EO H3 Y FP CS CV", " C4 JN AT EU BG D7 EI H9 F0 GR B NG FW GV DF JC CP", " J2 L F2 1 MQ BM K5 DO I3 CQ CX C GB EW HV CF KC F", "6 GL E ND AM BH A6 LL BX DQ FQ G1 BI K9 D8 IJ 2 MP", " FN G4 F4 GN A4 EJ 3 MO 9 MI BL K6 AI E5 CF C8 AS ", "LZ BP DY GB GG F F8 J CK B3 DK GC GF A9 EE B7 DG F", "U GX FB HG DT IY FM G5 EY HT CJ C4 BJ D4 FR G0 BT ", "DU W FR AM E1 BX KU DU IX CB DC AU ET CZ JS 5 MM I", " F5 A0 LR CQ J1 CB KG EN H4 A2 EL GD GE A7 LK B6 K", "L AE BP E2 HP ES HZ F5 GM B0 KR A7 EG B2 DL D7 IK ", "M M5 FV GW BY DP CS JZ AB FC A9 LI AF MC G F7 CM J", "5 D5 IM BK K7 FZ GS 6 FH DE JD GA GH DZ IS BN D0 B", "C LF I CL R FW BG LB J M8 D9 II BC EB BU KX EM H5 ", "CR J0 DH JA FJ G8 AO L3 AA MH AG E7 BF D8 F CO H C", "M AZ EO CG C7 CC DB AB MG BR K0 A GD EE ID CD DA C", " CR D NE CI J9 X FQ CE KD I M9 8 FF FT GY D6 IL CW", " JV AB BS A8 LJ DI I9 AW LV AD BQ DW IV DS IZ AP L", "2 C8 JJ BV DS Q FX EF IC BZ DO FS GZ CN C0 L CI L ", "M6 AM L5 BA ED N CG BW DR D GA P FY AA FD AL E2 AE", " MD CD KE DL I6 Y B5 FG HB G CN H NA CH C6 F1 GQ B", "5 KM E F9 7 BW A3 LO AS EV C3 JO E3 HO AH MA FE HD", " 2 B1 D1 IQ AD FA AA BT BF LC C2 JP B3 KO BO DZ AJ", " BK BI D5 AG MB AJ E4 9 FE E1 HQ CA KH J F4 DC JF ", "R CC U MX BT KY DN I4 E7 HK AQ L1 E9 HI AR L0"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 6, 7, 12, 39, 393, 282, 200, 100, 400, 500, 511};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1", "2", "3", "4", "5", "6", "7", "A1", "B", "KX", "HJ", "FW", "BN", "LH", "LR", "MR"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> teams = {"AF BA FA 9 JR M I2 BD GG IF EN B2 HF JN P NC D BH ", "KD 6 K9 J0 M0 D6 H2 FQ LF HZ V CN D5 CE KH H MB J4", " MH E5 MP MF K1 HO IU JA KF O GX H4 L3 LD EH M2 AS", " FF KB CK CH F1 IX JY D2 Q EW CB G FG EG A1 FY CQ ", "5 M9 CO FB I4 CW I F DX DT GR EZ BO HP LE KA JG FW", " LT D1 DK CF I8 B5 ER BK KK B6 GF CM AI J5 FP 1 JI", " GP G1 J2 BI IG HT JZ FU LA KS 2 JB G7 MT CR EO NE", " BV MI JD NH FT HN H5 HU BU C4 I3 GC MY AY KP IE K", " G8 IV EF DB B1 JJ F4 DD KT C6 FI KW EI HK GH LZ B", "Y AG LL DO KG H8 A0 MS L0 MQ DP K5 KR A5 NF EV H3 ", "BX DE JQ CA CV GJ MG BC MZ G3 CS E2 JC C3 A6 KE M1", " IJ D4 AL EU IW CL AQ C5 ET T H9 8 CY FL I0 CP EC ", "ND IY NG E6 J8 JX I6 B4 BL F5 BQ AW JL M4 JP D0 C8", " MK ME LY F0 HC AH FD JE IO M7 CD DN A3 G6 DU DG B", "J HG CT IS HW K8 HH E D3 BN C MC AK DM JF R CJ AJ ", "DI IN E3 J7 BW DJ LC H7 AO M8 B0 GD JT LH HV IA A8", " I1 DQ G2 0 LX AR DZ KU IT LW MX FO Y HJ GO EQ A4 ", "IL GT KC HB BG CI FZ IP LQ E1 DV FM EE HR ED LM FJ", " KJ AC I7 MO F2 FV DC ID H1 JS GM AP X FX K6 KY J ", "II AM GI L4 DY HY NA JH F8 EJ D9 M6 7 JW C0 B8 CG ", "KV G5 EB L7 A2 HA EP J9 HE F9 FH HQ HI FK L6 K7 ES", " BR AE K4 AN S D7 H0 I9 GA MR N F6 KQ M3 LS DA MA ", "FN G4 G9 BT A IC GN KZ D8 EL BE HD C1 GE HS B7 KI ", "LJ DW BB L1 J6 J3 LI MJ MN H6 G0 K2 MM GL AT Z IR ", "BP IK GS GK KL CU DH F3 E0 I5 C9 C7 L9 J1 LN EA MW", " B GU KO CC AX M5 EK JV AU W AV F7 L8 IB 4 3 KN LV", " FC FR GV E8 KX GZ IZ LK BM B3 B9 K0 EX LO U A7 GB", " HL JO GQ K3 BF GY LU A9 CZ DF HX FE JK IQ L2 BZ L", "G HM JU DS JM AB E9 FS LR MV KM E4 EM E7 AZ CX GW ", "C2 NB LB MU L IH DR IM AA BS LP L5 AD MD ML EY DL"};
    vector<string> games = {"I2 C IU KA FU B1 2 L1 JP IL AG FK H9 F2 KD DU AY F", "N FQ JE D5 LY BQ BG I3 BT GR AX KP MA D1 K5 NC NB ", "I2 NE FW A5 MP D1 M4 GT D BJ KF GY KK CU G1 MM B6 ", "DO FT EL J0 DN DN 0 IG H6 B5 MS IF E IF MT JG EA K", "D CX J0 EM I0 KJ DT M5 KT D7 DX EK M1 KY HG HV EN ", "HH F JV F0 FO ER F3 JA I6 BA R 9 JD 5 4 HN H5 L0 E", "P HF 2 P LA MH CF AL X BK H8 2 IV KH MK CB E8 LE B", " NC HG JR AD GX E6 JL KC P CT D6 KM EN G7 J2 C6 BI", " G0 M MC HZ AI C3 AM GF LL FL AC CN GF EZ JQ KR EB", " MP FE BC JH H ER C5 ID CE KK BH GW BX C0 M0 E4 E5", " DK D1 L9 H LG G GV HP BX CO L8 LF J5 B4 IP M9 JC ", "B2 JB FU LI E5 JL GP KW I6 LQ KG FH J8 DV LF FD D2", " AQ CS DY BO DE HF L G6 DQ GX K3 G3 HY LL HI FG FR", " CP FJ F5 CI C4 A O BF CK 8 F1 T E AO J0 G1 MP AW ", "J4 I8 BU IC BO KO EU AP CK K0 HT MN J5 LZ LA J3 AI", " BY FD IT LA DB DO HQ K1 F5 MK GO BY L6 BH DG D0 A", "4 NE HS P LB IX BM FA JF EZ CC FT HU FY KN NG EE A", "0 HE JI AT KS EF D6 JI MB B5 B2 K8 HU GN CH B9 V C", "M GP GL 6 AZ MY G4 MH IQ HZ AH AS U KA MW D5 DS JN", " MU FF LO EO B7 IV KQ H4 GQ 1 HK ME HJ LY Y BD EO ", "BD BS DU I1 JI EI JR AK H2 IO JZ JJ CW W JB BB AF ", "CJ V AB HO CZ A1 M1 I8 L0 DX GJ FQ LR FA NH BA EY ", "IE DA H4 NG FI AN MH M4 GF GK A3 G2 NH BU CL JS HO", " BL KE J KS J6 BJ IA F MG EW IW BI KT I BC IG DD G", "7 DW NE MY CQ 3 FB F7 CJ AJ J5 BP M7 AR A5 G5 B2 I", "H IF IM B5 E0 CF MQ HC MX BK DH Q CL IX ET MB D0 D", "K DP IY HR HN D8 CT LH CH H9 HK BR I2 LP CD LX F1 ", "B3 IW GM K1 DF EN DR D JZ D5 B6 F4 I9 EI AE KW K4 ", "K9 E7 JN KS I4 G3 KH HM DD H0 KK KG LF FS MT LJ IU", " B4 DB N GC G9 CF C9 MZ NA NC FU AS I0 JD HD EG IJ", " JG NF IU A9 MG F8 DP A2 CO E2 H C8 M L5 D6 M7 JX ", "E1 LT KR M2 CP CR KP C8 EQ H2 MV BN LC 8 MO K9 A3 ", "EO AY FP GH V HC I4 AV I8 I5 BD BN JE KU CM AG 9 M", "D K9 J2 G AL LZ K7 FW LN EC LM G1 FI FP IR EG FC H", "F HW CN JM I AU KB CY BH HT CY I7 1 Z DK C7 HP GU ", "HZ E9 AH LW JA LU IS JT LD HL L3 IY JY C5 A6 II LT", " J1 MQ HA EF F6 ET DC AI IK EH GB LE H3 KD IG E2 L", "4 G7 K JY LK BV GC Q GZ MI I3 EW KX D2 IZ CQ A6 C ", "DJ O J8 CR KI K1 FW M BV AQ H1 FG D4 AK J7 AW HB H", "8 F9 MF LT FQ FP GG D3 EH EC HW GD E6 FM EV CG CN ", "F0 MF BQ JZ MJ JC GI C6 S D C2 JQ 7 FY KE HT F4 IJ", " K6 JN IS B1 MR M0 GP J2 K2 GH ES BA FT 9 DM CE ME", " JB G8 MC BW CE JU ND ED BV GE CV D9 HH M8 D4 FX K", " LS DG A8 H5 KZ K8 B0 D3 H7 JR MI MS J9 DM E3 JJ G", "A J4 L2 IO DZ HO JG DT CV GJ EJ MT IE K5 L7 L3 JO ", "MF HX M2 A7 DE JW NF KV KB EX AF HN M9 IB JF IN AF", " DL FB CS A1 LV R DI M0 CD 6 BI CW MZ FA ML GG CR ", "G8 M3 GR CA KA EV MI C1 GG AA FF FL MB BZ CB EU CA", " M6 JD C4 KH BK H3 B8 CM GS BL FZ B6 KL 6 G6 J4 JP", " KF JX E5 JK 5 C3 T FV ER A0 NH BE H2 1 LD ND"};
    vector<int> seeds = {147};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JJ"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> teams = {"HK LQ AT FT H9 HP IF LN G MW LO GG C8 GX BE KN M9 ", "AH IE P MK AV IB LA J G8 CV J3 A0 D2 HZ BF HL AP H", "0 CB LU 2 H5 A ML J9 DE EO GV JN K4 BU EX K3 EK CR", " HE FI KR H3 NB L0 AA LK M7 C4 G2 BA MM D5 EU JO M", "8 KZ B BP G6 KK BS CU H6 NC IH G4 AL F2 FO L2 FS G", "9 H2 A7 AB IS JA KT DN AG LL ME EW LT CN E3 HU LR ", "GO MI G3 HS M5 F9 B2 AC ES D8 BK K0 KA 0 LZ HO IA ", "EH C1 I9 GR GY F1 BC JC GB F6 A8 H1 HI DP JD F7 KW", " JU BD KY KV J8 W BJ CS DA LV HX EM JR J2 AM ID JH", " CE M2 G7 1 B6 DR H8 L7 NE S B9 GN GZ ER KP J6 M6 ", "MD BI BR C BZ KC CI GU FL J7 E0 EQ FG EI MN FX LD ", "EZ G0 CK G5 B1 HG EP AN GH CH FU MT DQ FW I7 MO ET", " M1 MG A1 DI LG AK DG KM A4 HA MJ JW NH HW A9 IG G", "E ND V FN CJ M DD CZ Z FY AO B7 IJ 5 HF DH AY KJ G", "S JM GQ MZ AX BT CD JS H IZ JT M3 L BO IM DC LW GD", " KH X HY BX IY KS D9 KL KU E2 FB CC AU CA NF D4 JJ", " GC LE MA EG FD A5 L1 LY AJ C5 E1 C2 G1 DU K1 BM B", "Q FJ D1 9 GW GF IN HC R D J0 E5 MR IL FK KI F5 LP ", "JI L8 GP MS IV A2 HV IT LB CF EC FH AW AR I5 EB C6", " MH BL KD F4 IC MX K6 B8 DV AI K2 E7 I8 KB MU M4 D", "J K BV FQ MB BN HT JP IR C3 E6 IK 8 A3 CQ LH DY FC", " EL IW J1 JX CO 4 Y B3 HJ I3 JE JV B5 KF HB L6 HR ", "AS KQ I HD LI MQ E GK DX K8 K7 LX I6 M0 D3 GL MV D", "W FP A6 EA DT DO FF NA IO CT LM JZ IQ EN AD HM LC ", "F0 JY U MC HH I4 DK AQ BW DM CY BG JB DB KE CL GT ", "F3 H4 II D7 KX N FE K9 J5 L9 CP LF EE BY EV AE EF ", "JK MF KO DL CX 3 J4 BB K5 GM CM I0 H7 JF IU T Q D0", " HQ BH AF D6 E4 CG DS C9 ED JG F F8 AZ FV B4 MP 7 ", "I1 EJ I2 E9 GA O DF LJ GI FR L3 IX JL DZ B0 HN FM ", "EY E8 FZ L5 GJ KG MY C0 CW IP C7 JQ 6 L4 NG LS FA"};
    vector<string> games = {"GX L5 G8 GI JR 4 GB K8 KZ EF A NH NB DQ M7 GH D5 G", "5 CV LR LU KT DH EG J9 MJ 5 A5 KN E8 HA D A1 F5 G ", "EH FG MX KA W CD CC AC LM ER BN IF M3 EM Y KV HB A", "X CA AA CM IS DB KJ LE EK HQ LQ LS FI T AB KE BD H", "R ME AQ G6 EI GO CE CE EL LL NE MW H CV LJ EQ K6 E", "U KO G6 BY ML JW AG S IB 5 IS ER DC HY MK DH GY DP", " D2 CN AY MA BU LG H E2 LV HJ M7 K5 KR I7 HW GF MN", " F4 KT GN S C3 CR D0 MM B1 GO F0 GX KA GB F6 F9 IQ", " CZ C2 GR JD 0 DT G3 HM H5 HW JH IW LT I4 M6 BV ND", " FJ B7 LY AP I1 J6 FQ MD K MK DZ KP MB M5 EN HE Q ", "KM E5 CR M1 MZ NF GZ HT D5 DL DE HA NC J5 KZ LD FT", " F1 HU U HO KY AH ES C4 AN LQ JC DN B9 EH DW JW HC", " IH GU IZ KU EO A4 F7 I E0 B8 IE AC F6 DX M8 JK GH", " CF L KS IB HS H8 8 HS AD C1 KW KN BK A0 O I9 GL M", "1 JI JC A8 LA IJ C4 BB DG MR J8 KF C8 GJ LW X A8 G", "K G4 CI BZ KB LQ LW GR D3 IH K9 BT AU C8 0 LR JY A", "L N HL EJ FI MO D2 GA KR IU AT BC GG LZ Z E1 A4 J0", " L2 BR H6 J7 MW IA CK EB L0 I0 B2 JZ CU E0 EO C9 J", " MI IB IX MI LC CN HH AT DC MG LP A AB LD BL AG DM", " HZ M LZ KV AH GS AK IL H5 AZ BE K0 G3 ID CV FY BS", " LF D8 DA AP V HG AW BF EW G0 C6 W B5 ML F LK CH F", "S H4 GV DS J3 DF B2 EM KK FG LN IP NH IN B FX IF C", "7 GV KM JS FB AM JX A7 J6 G CW BC H1 AV JL F2 KX E", "W DK HU G7 BU D6 A F8 AH FM M2 FC G9 F3 DA I3 2 FV", " EP FH CJ K1 BA 3 BF CJ K4 AK K0 FF BE MZ V BQ CN ", "B6 G9 MD D2 DD CB MP HK GD H3 JF HO A6 GX AX LL BW", " FO C G4 FE LZ EA LU IG CH LB I7 MS LT DR JU AS CB", " DN L7 IK ES CT BS EQ AV HF M3 D9 K4 E4 LO JS CS J", "E HP L DP LI JO MF M5 J2 H6 L9 HL ME FT IM 1 LH FU", " IT GQ D4 AL KC EU CK AA FU GN JP EX DI HK GB J B7", " M9 JM GS GC H5 IS G IZ CB GE ET L8 I9 F7 H0 7 AT ", "NG JM JJ ML A7 H9 6 B AE J9 JG H2 M6 AV M5 HL FN H", "0 AG BA HG BR M4 P B0 H3 FW IG 9 EX AF LK GM BE FZ", " LA L3 P B2 NC FL NB H7 BC LX ES LV A0 E3 H0 ND M ", "DU DN CY LR M2 BJ JV LN C1 M8 EZ E3 1 M9 EY H9 GY ", "MW C0 P AY JA GZ IF I9 2 JA FS BI AN EC G7 DY KC I", "8 G5 I5 ME L7 HP GR IA FP J3 HU GD KH JD HD JN DG ", "AO AJ LA G3 G8 GO HZ LT C8 BT H2 GT AC HX A7 CL C ", "MU HF FD 0 J8 A0 CZ FW IV JA JB ID J1 MK F9 F1 HI ", "FN BM LG FK J9 H2 FO D7 BP EV K3 BH GE D1 EH JU CI", " E7 G8 AO DQ A2 JC K7 MT HV DD G1 EK MG J FR BK NA", " H9 BO BK CS IA BD F1 I6 JT KL GY M0 LO MY B6 CQ H", "Z E9 G2 J4 KY L6 EW H8 MO GP LN JT MI JH 2 A9 DR A", "3 L2 II J7 DV KT BG K0 BJ BF I2 K3 A1 J3 Z HI MQ I", "J L1 AP LL NE E6 A9 GW DE ED HS AM HP JQ MJ R IE K", "J G2 EP B1 AR FX KD F2 BZ EI IC CU CP DI KI KA DO ", "E3 MC J2 CO IM BX JO G0 KN GQ KW KQ GU K2 AB KP HE", " ET FL AI C1 MV GG KG GG CD JN CG LO HO H1 E IE HN", " L0 MT EZ MH BI DJ M9 D8 HK FA F9 JR FT L4 FY C5 D", "8 IO BP MN KK EE B9 IR HX B3 BO IY MM CX LU B4"};
    vector<int> seeds = {21, 2, 448, 32, 418, 232, 165, 498, 242, 490, 263, 471, 97, 391, 183, 112, 475, 135, 433, 215, 229, 489, 68, 49, 481, 285, 115, 386, 141, 115, 156, 454, 462, 468, 343, 61, 172, 432, 161, 262, 157, 55, 58};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CV", "A0", "B0", "FS", "DW", "G5", "CE", "EV", "MN", "LJ", "HY", "7", "H6", "LX", "KW", "L2", "FE", "H1", "GL", "ND", "A4", "GA", "D8", "IF", "T", "KB", "EW", "MC", "GH", "EW", "GU", "LS", "C7", "FA", "C3", "ML", "L7", "LM", "HI", "BQ", "ET", "LN", "LU"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> teams = {"EY MS A9 IU 3 G4 MJ MA IB M5 K7 BZ GA AY FU KA H0 ", "K4 FS AF B4 N AU MG L7 D B3 KG G8 EL BE BB BW MB F", "N AW IT LC KK FB AJ BF J BY MQ MC ND AM AL DA K5 B", "R HC EF E4 C2 B0 KL KO JE LN 0 7 DB HA IR C4 FQ EE", " II DZ M2 DI FP JL E8 MU GV HX LF I6 G5 H1 CZ IA D", "C GX CG F FH K2 AP CE IC J2 LI LP GU LU FO GW U B2", " GB EP GG LV R KS E9 J5 I1 BG HO LQ M7 GN J8 H4 CR", " GC BM KZ KY JW KH C3 C6 CJ MR FK AT KC JA 8 NG F2", " GJ IF E0 X BS C IQ B CL CM KV KI JG LX M J0 1 JR ", "EW H FF P AI H5 F5 BU I7 EU AK DX D9 IV HV FR MN M", "6 A2 G2 MW FA HZ NE HT HF LR MV HL G9 JB Y GP HR E", "D MM AN DG ML L0 LS GK E2 BL DO O L3 5 K8 EM EO 4 ", "AR J1 E5 NB KX CX I8 LW W E6 V IW GO B5 LT CQ M4 K", "D DD HY FJ KF FT FG K BD EZ F1 L1 GD IX B1 MX CI A", "6 EA FE AO I2 GE KM JO BQ LJ A0 CN AX KJ LE A1 EX ", "GR M1 IK S IE HG AV CO AZ HK DQ JT LL DR DV IL GM ", "FL F0 KR CK H3 HM EQ CC AB K0 G0 9 MK GT LH DS K9 ", "BX JD L8 ID FM EG T HQ A4 EC D0 H8 AD NH LB K6 HE ", "GF FC E3 HI CY KE JX HS JH BK MY G7 M9 A7 E7 CW I ", "FX GI G6 EN HB K1 BH D7 L5 D4 G1 KP KB BV D3 CA HN", " IJ MI JV C9 J9 NA JS D1 GL L9 BP FV C7 JP FI EV 2", " ER K3 KT DF J4 GS BO JM CS B6 DP ME AG H7 BI E A3", " Z J3 AS C8 BJ I9 DN BN MF G EJ IS ES LZ JZ FY J6 ", "NC L4 A5 AA HJ BT LA LD I0 MH C1 HW IH EI LK F3 M8", " ET GY FZ D6 F8 EH KN KW F4 L FW DL GQ IZ JY DE DK", " DJ CV F7 D8 L6 B8 Q KQ MD LG IM H9 JI GH G3 DW CB", " MZ JF CU A HP HU CT IO AE DT DM DH D5 M0 JU BA IN", " JJ CD CF IP CP F9 A8 FD HD KU H6 M3 JN LY DU MT J", "K HH H2 J7 MP I4 DY GZ EB LM D2 JC NF MO I3 L2 6 B", "9 F6 LO AH I5 AC B7 AQ IY E1 C5 C0 BC CH IG EK JQ"};
    vector<string> games = {"E4 D5 K5 IN MS C3 MQ KX Y I I1 B BY A8 G5 G2 IX GM", " DA 4 MA E1 E0 AG A2 KB L3 FC EZ CK LR HB H1 CV AT", " C8 LS HS MS EK J5 LD BY CX KH FK LC K2 J0 2 FU LO", " FB H6 AN G7 I7 NA KY IS KA F6 C4 ED M7 A5 AF GD G", "4 LJ MS KJ F D9 IQ CS B0 DM LP F8 FS IX IB KM 8 Z ", "GG IH HT BH MA GC NG A3 CM GS I6 D8 BR BA G5 F7 IU", " CH BF LW GB J0 FS L2 ND E5 EY C6 K7 I2 H4 J6 GK J", "X FP IM GC JZ CE F4 IW JD K8 HE MQ F9 AR AD LC JN ", "CZ M6 EP M KO E2 FT CC J2 KN AM J1 R C1 LX K3 GV N", "E LE A1 CG IZ BW M4 DC DE AK C9 AY LQ BG IQ JE IO ", "E6 ID DG MY LT DS KG KF MV EN M2 G9 KZ ES J FD FU ", "A6 GC NG MU HT B4 L1 GN E0 EY JQ KS MH IV IJ JE GK", " ML BK BM 8 FQ CB DI HL CR F2 JW EJ ED A7 BF GX 1 ", "EV EY LE LV HW HC JU AF I3 FJ K0 LP AI FA D4 J I8 ", "MG EP L1 F0 ND IP BM LZ BB H2 IT GO NB EC AJ KU BU", " JS JB FX K HM H1 A2 N NF IU CN K4 B1 F GQ GD FL B", "G BT C6 BN 0 L0 G4 C0 GG LX B JM JL LG AU JC DA JJ", " KS KV 3 BC J1 H8 EO LB M5 H4 GO BX EF 5 W FM KX A", "4 3 KY 4 NH AX GR BL CY LN CT A9 AX CN M1 GU D6 CR", " FY AF KS MC NB B2 F3 B0 DO G4 KZ 5 GF CE I7 E8 HF", " J8 NC AU EZ C B6 BD H3 AY EA EL LU LI EH MB JK B3", " FT HZ L5 FB F DD 9 FO H IF H7 3 A0 IA DK DB DG E9", " CM 0 HU F1 KR FN LT II Y B5 K9 DO HI MJ BQ LW EG ", "MW G1 A9 IG LF FA FG EQ IR MM B3 U I2 AZ KF AB FR ", "CA IT LY E5 D0 E4 L3 FS E9 L7 K GB LK MA JO N LV B", "F HD AW CE MG D2 N F1 FQ HR GX HV IT AP F2 E KK V ", "LQ AA KZ JA LN LS MC CP E2 KE IR JF G9 GI BE DD HO", " C AL CD L0 JH P BP FH DX EF M0 EA JT B2 1 B1 IL A", "0 IK CX HQ H0 B9 JR FI MN D3 G8 FJ G8 I4 DI H9 BB ", "LP GN L4 H5 GL C2 O LC IW BY IA MG BD CJ DN J DC K", "I DF IC BU KH G GJ BI BB KD AW DU L7 GB EE DW AY A", "H M ER EW JP E9 I0 LU FF AL AR A6 LL KK FH LV JG H", "4 GJ MB CQ H C7 IC KW JA J3 GX JY EP EI DZ JB II G", "3 H0 I1 C4 MZ AI L9 J5 CL K2 FW FU HO NE D7 JO HG ", "GW EW BZ AO I6 MW EU J9 X ME IU JW FE DQ FB E6 LI ", "H5 AP EU KM AV BE J7 U M8 K4 6 I8 T KD MK HR E7 BW", " LI 7 ML HY G0 JG KT DZ GH J2 F5 KK M3 B4 MO B4 R ", "G2 KP FK BJ AU GG EM K6 BQ IE GV Q K4 J5 GA I5 HL ", "G6 KY KC LU FZ FH DL HA AN BR EM H0 MX C2 DH M6 BV", " FO GY CI DR MM M9 FN IC C3 MR 7 HP FP MV BZ AC K7", " B7 MJ BM MU KQ M5 AQ GA M7 J8 IF KA BG M5 GE KC A", "S DX JV KJ EX KL BL KG GW AW B5 KO AE LF L6 M7 X A", "J CG GA FE CL BO BZ GN CQ LH JW AT GW ET FF FV HX ", "HZ D9 MI MX DV O E3 K7 J8 AM CF CG IV C3 MF KA CI ", "E8 MD KG DY A9 KH K2 AK HC K8 GU P U JR BE GU DB A", " HV HN D B2 M4 GT KV J4 LJ S LQ BS K5 EO EL HY GP ", "CW L7 LM R KI HA CU KL DT D FG MR I9 HF K1 B3 GZ E", "E GP GE CO IB CR EL MP FN MT HX B8 IB IY CZ DJ MJ ", "C5 G8 FO D EB M2 JI AP L MB J2 F5 D1 AJ W C6 CJ AO", " HK BS DP I1 LA HO HJ BW HH IA MN V L8 JL LR DC FR"};
    vector<int> seeds = {456, 223, 200, 436, 108, 383, 388, 235, 191, 469, 205, 361, 121, 80, 170, 296, 377, 475, 168, 146, 336, 340, 381, 406, 3, 320, 490, 250, 13, 445, 230, 499, 420, 183, 248, 499, 317, 95, 229, 194, 338, 473, 395, 208};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"LM", "5", "K", "BT", "IA", "D0", "MH", "AO", "JG", "F7", "B1", "KE", "MQ", "AP", "NE", "LL", "A4", "MT", "C", "H5", "J9", "C7", "BH", "AE", "A9", "KT", "DH", "W", "B4", "LZ", "4", "GZ", "KW", "J0", "J1", "GZ", "IE", "HC", "DG", "BQ", "JM", "CB", "JI", "GO"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> teams = {"C7 U H3 C4 E8 L6 A3 AI DY F0 GF D5 L2 FB ED DP ET ", "E0 CD G7 HB IB AB D8 KK F7 E3 GB J8 KT AC LO IJ EU", " KP L5 W NC B9 CE AT CS CQ 0 KV G5 4 C1 BI D I0 JZ", " DF FW BL MA HX AJ FF GU EO IW BR EN AY IO KN LA J", "N EG J3 H7 IH O FY JA EV FC KD H0 HL AK M9 MZ LD C", " AV B5 GZ AO FO JP DV ND T H JR D4 F MI C2 EE LT K", "X CH KS HD J5 G0 EB IU HF MC JD G4 FX K4 H2 DA M5 ", "KF HK FU CI HE R FZ C6 GH GR GY MW D0 JM MP AP KZ ", "X FN EM GX MG G9 HQ MJ C8 E6 IG DX AW HV JS V C0 H", "C E1 CJ FM BG J1 A7 AQ EP EI IV F4 6 AX NB GT DR 8", " DG D3 CV DM M3 BC A4 L8 ER HU GW B ID CO LY FI LU", " JW K5 FT BJ KW C5 CG CM G8 GL GD J6 HT F8 H8 MK H", "S KO BV FS IC IK EH CN JY JI EW FL 3 AG CR MS KM I", "Y M4 F6 E4 BA DJ F1 KC A2 HZ GS KB I3 DW GK HI HM ", "IR LB E9 KA I7 K8 KU EF CU FE KR J K7 FQ BO GV I G", "E B7 GG P AS HH M FJ JX AR BM CB MD HY K9 CY DK E ", "AH BS JU HW KL GM CP JE BE LX IA AA CK NG EY H6 IE", " G6 EK CF JG MT GP H5 L9 LG MR I2 LW K0 A 5 C9 KE ", "K6 GO B0 KI BY J9 JB I1 HA EQ A1 DT I5 Y BN MB L7 ", "IT B4 CC NF BT LR AE JK JQ LP LI J4 HO JV FV AM K1", " FR MF I9 L NH LC Z LF LS E5 FK IF MX DO ML I4 EJ ", "F9 Q LV GQ M2 MO A9 LE B2 IX BB E2 HG 2 I6 BZ B1 D", "N D6 D1 MN ME BF LK HR DL D9 K2 EL IZ DZ A5 B6 JJ ", "AU G1 BX CZ FH D2 JH GJ IQ MU LL GA DC E7 A6 EC ES", " M0 I8 S IS AD A8 FA GC M7 L1 EZ L0 MV DQ IN KJ JC", " H4 K BQ HN AZ G2 LZ FP EA F3 MY BP BU J0 DB H9 AL", " 1 M6 FD CT L4 CX MH G3 G F5 IL KY D7 DS JF AF MQ ", "EX BK IP FG HJ J2 HP N J7 CW BH B3 NE LH K3 LQ BD ", "JO CL AN A0 KG LJ 9 II DU M1 JT B8 L3 M8 BW IM C3 ", "GI DI F2 LN JL GN DD NA CA KQ LM H1 MM DE KH 7 DH"};
    vector<string> games = {"H0 M3 T AQ L8 JK JW BN G4 FH FE FJ GF DD MZ K DP L", "B M9 D3 A3 LM JZ MQ ID CC GB C2 L2 I7 DY CA FZ D9 ", "ED E9 EM 2 ED F2 GU CM DV EI KF B6 AB B8 BA AA M5 ", "KZ BV A IU IQ D5 K8 AY FT E0 C3 EO G3 DW JU IK I2 ", "AB KS MI CJ HI AH A2 JE D5 GN LY IT GF H2 R GY AJ ", "GL IJ M4 DA X C4 FQ IG MO EF AR G5 J2 AY CT H3 R M", "J B2 E8 K7 O BP C1 FG HT B0 J8 DJ EI Z C4 HE BR KW", " E3 KC KS E7 F0 DA IV LC F6 NG HD AW EN BJ D8 CH F", "B G4 GZ AX M9 BQ B9 NE HX GD AT B5 0 N EU JO K8 CB", " KP BD F0 EF DA AU GB F1 ET GI A3 HK AJ IL FF F5 D", "5 K4 HV LV FO F4 MS G6 LT ES J3 DB AX I9 MA J6 KF ", "AP K5 Y HE MW KS HV C7 C6 LU MB HB M8 KD LZ JS Q K", "4 EM KO 5 GZ DQ MC HQ E0 HM BL HT G0 LL LT C0 FW F", "8 FC FP F7 LT KK M1 4 HJ FI L7 EV L8 KT BA JA ER L", "D H4 AT BH DG FV HZ CP DP MC FW JF H7 ID U FZ DY C", "U C4 DE HQ IX FT I5 EE HC BR CX DJ IA J5 GA C8 LE ", "AO 6 JP EZ KN JW C2 E1 FX GX BL DS H7 J0 CD IM FU ", "JM L2 JL H A7 R K2 JY L9 B5 IN I GE IW MH FU DZ HS", " C9 F IS AK CV GW BT MW ME KM IE W CR NC LH HX KY ", "CQ J7 CN LG FO L0 BJ DT EE M0 FN I6 AP DN EB E6 C6", " DL GH HR G8 JB DR K1 GX HG IJ CL NC FO EN L4 BG I", "F DV L1 KV EH D8 JT DX M2 M4 EY H3 BO EU IY HD DC ", "G9 BB JM D1 IU C8 G0 IG C JC AB KB KD BC IH BU J3 ", "CO KN M6 HC I4 E4 CK G7 BW BC LP IY H6 K4 BX AC A0", " KV HP HB DW IR DK GL J9 LD 8 CE FL HL DM G5 IK KP", " ND BI BV DY M5 FM MX J1 FK ND EP GD BY F FM CE GZ", " AQ LS AT EW ET HF F8 GO FX CZ C0 EJ KT KG O GW H ", "FA J6 KI H0 G2 IB I3 8 AM E3 EE I0 EX E8 CI H2 G1 ", "IB HD HM E CS JI CD EB BI IP CH A6 EP LF L5 DV GT ", "FR KC BE CM I1 DF AF W JP ET IR CU JX HE EL FZ GR ", "F0 NA CS CW JN FI GV B7 CI D0 AV KJ KB KL CR EK C7", " I MC JH EV EA KK KX KP KM LO AN C7 DH J HH C2 I8 ", "DF H8 F7 DU AV GT FF G8 AI KQ 6 L U GV AO MV KT F ", "FB KA CQ C FY MY D4 BG HB J5 A7 E5 I0 HS V F9 FS K", "0 KZ B1 IW C5 L6 J LO JR CJ DO DM J4 D0 MN J5 DX L", "A LU 0 CN W K3 MI S AW GQ KX V NB MF JR J1 MK KE A", "K HN AC D4 FC A4 E3 II D BK LO F6 K7 AS B9 3 ED JD", " KR M JA F3 IJ H GY BF EG H9 G7 GK 4 IC CH JS MG E", "2 L5 LQ HF MJ HU LR M3 LI M5 JJ GK BS FY HU IO FD ", "L6 FU KX EC LA 1 F1 LX BO GG EG LY NC AG JP IV CV ", "HO C1 FS GR LK FB LN J8 LJ X BZ E9 K9 JR A8 CI IZ ", "D4 AD A3 KR GS GM L6 H1 EH MR A4 JQ I7 MD CO B4 JZ", " MK JN AL D KO B5 NB E1 ML F4 NH U 7 E0 IU HK MP G", "F KU H2 FN IH B HL AZ T GC D3 JV AC E4 3 JG B9 AO ", "C DR KU BM I3 HW DP DI JD D2 IB L3 E6 A9 GB 9 AI F", "E AG CF E8 MM L5 MS C5 EQ MP D6 D8 GS JD G9 CD HI ", "FL MT EU T F7 A2 MA D7 HF GJ MZ DG KA HY G7 G0 LB ", "CY KK HZ ND M7 KW A1 G4 MG C6 GH IO K5 CQ JY FQ P ", "B NF GU G IC LW H8 K6 CE B3 H3 KH HK A5 AI KF ER A", "E JI H5 L2 FX CG HA J8 MI CS AV EB MU EW GP EO CG"};
    vector<int> seeds = {209, 366, 412, 309, 369, 344, 190, 106, 65, 214, 184, 97, 228, 145, 219, 319, 191, 235, 81, 142, 508, 240, 328, 471, 469, 393, 339, 371, 15, 243, 268, 414, 452, 112, 255};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"F1", "A9", "M0", "IA", "LP", "E2", "GR", "JZ", "FZ", "G8", "FM", "JD", "HM", "E6", "L8", "EK", "IV", "JI", "C2", "BC", "B8", "FQ", "LF", "FP", "JF", "H4", "CC", "MR", "C4", "HT", "B0", "D2", "H1", "HE", "CN"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> teams = {"EX D6 DM A0 CK JU D8 KR I4 5 CC IW FC AL V LL JS I", "Y HP GH B9 B7 A3 JB LQ C2 J0 K LU J4 KA L4 BB EG A", "6 HX H9 BC AS HG AD BI LY FB HU J D0 AV DI LS GR L", "P A2 JY ND CB NG KB A8 H8 DZ E HS DT CH CP AE L1 C", "Q 9 EK KQ BF S CD FH DX M4 BG KM JR LI JK BJ BK GE", " GZ D2 CR C0 DB HV IZ DU D1 DY ME FU EU AR ML JW 3", " MB F2 F8 NH KN AG G4 IL KK LO AQ KD JG A5 L2 LK C", "1 X EN DK LF A1 GI I2 EW E2 KH I0 G0 MH E8 6 JQ K3", " U JP K2 BL G9 E5 K9 KY HR I1 LR CY AI FQ C7 NC HY", " FM HQ LX A7 G8 AT K6 H4 D3 FG AM GT Y BU KS LJ GU", " JO J7 GM K8 DS JM K0 KV I3 JA GN MZ NA MX HH L8 L", "0 J1 JE K5 FP L9 AJ GA DG H2 MO LG EV DQ AK GJ MU ", "LC C EH CL IM L5 AZ EA CJ D5 IG I9 H0 FZ IF HI 2 C", "U EM DH I8 H FJ MC M1 HF L3 J5 FO IV EL G6 HZ GD L", "D HO MN ID E0 O JI AF IN IS B8 BV F3 ED A4 DA MY I", "5 EI FR IK HB FV KT DO FN IJ 4 JV FY EE EP LH IQ C", "S KC AC AY E7 JL CZ M7 C8 CI I6 F9 J6 E9 MQ MI JX ", "BM J8 MP P LN D4 KE AX FS J3 IT LW E1 EB DP K4 AU ", "IU F4 HE C3 MK DN JZ W LE CX EZ KZ GK KO FI CN LM ", "GV LZ T G7 I7 H1 BQ D7 F M0 MA FW CE H6 FE EC HC 7", " DF G2 AP R EQ G3 A DV B4 M6 M C5 GP B CV B1 FK A9", " M9 HW LT GB IR E4 MR IO BN C6 LV JC AN F6 IH DC M", "M AO BY CG CF BX MF IB DW F1 EO NE BW L7 HJ 1 IA B", "S MW E6 GG AH CW F0 B3 MT 8 BP IC KX LB CA JD FD F", "5 DJ Z AB L HL DL GX N GW B2 GF NF NB II ES GQ DR ", "IE HT D H7 C4 FA EJ MD IX HK JH M3 D9 KU BR F7 HN ", "AW B5 FX JF MS BZ J9 EY B0 GL I J2 GO JT CO EF ER ", "K1 KF FT JJ G HD BD KW GC C9 AA ET KG GS IP H5 BO ", "MJ GY BE E3 L6 LA CM KP KI G5 HM JN H3 MV BH G1 KJ", " DE FF M2 KL CT M8 DD HA BT K7 M5 B6 MG FL 0 Q BA"};
    vector<string> games = {"JI FY EM BM DZ EY JB F2 L1 AW EG EM D6 Q JB FO LI ", "K8 D8 EN FQ LT IN 4 DT MS DK E8 HP G4 AS FZ JB HM ", "J7 HC GJ C3 V M2 BK IE HV GF IY LD FP FI C2 KI HS ", "BZ E2 DW DZ DG KD G9 E5 LV NH LB AI GB LP LC FZ D4", " L4 I8 GH AG L4 ME KV MA HG H0 JQ AO DM 0 GA KZ AQ", " F0 CK LF G8 GP CH JF J0 JW F2 C7 KH IB MH CF BB G", "Y MU HE JG AH MB FD GI I0 BJ HT CC AF C2 3 AZ E1 I", "3 M0 AV JJ BG EJ GI NE U DC KB I L0 LZ J5 C8 AG LR", " HX H5 B9 MV GE GU C0 NB CK ED LU MC LJ G2 CQ HN H", "X 2 HI P LC F4 MB NC K5 CN EX I5 BF NA KK MT H4 M6", " 5 HA 9 F7 H9 IP NG J2 A4 HB MX I7 LX CV JK D GU D", "F A0 A1 LP ER A1 G0 CL K4 D0 G L1 J1 KM FA GR C ID", " LH L3 CI E8 CG KD CW JS KK JS HO LG W A7 B KR B8 ", "AR AB HH G7 LL FF K9 C6 JR C4 JR DS KQ MX O EE IM ", "DP I4 BT GN D7 K0 FW EN 1 CP FX JK GM ML Z FC JG A", "6 DU CB GO MN IQ J0 HF HZ AY GZ LJ 5 LK DG EZ L2 J", "P IL 8 KQ KU I9 AX KS AP M1 F9 JP IH DQ DN AD D2 A", "F JV 5 IN DA IK D6 MY I4 IS FM FK D8 BV IG FS BG K", "0 CK MG AV IM LF L7 A3 IV EL JL CD JH ND JT EX EW ", "A0 FL J4 FJ EK HH F3 KT EW E2 LI H7 I2 EO LF MH CJ", " IT GR K1 K2 F6 DT L9 DS H6 FH HK B8 FN GM EC CR B", "U A5 K2 AD AA ME DL H9 HI JW DJ DU GW CH FP X JQ D", "H JX FJ E9 BC IF 3 HY I0 MF LY D5 C7 HW G4 I1 JU B", "6 LS EH LL MN IW JI IW A5 J HD DX I3 CR II B9 KN E", " GA FC CT BI C9 AG IC MY FR LY GC GZ GQ BJ J7 DY G", "X I2 KH G9 JC HQ B1 DI FT C0 Y CP K5 K8 FE C2 L3 A", "S C0 NA H1 EG MJ EH AU KB LG GH HZ EU A7 JG BL M4 ", "MD D5 J3 L5 EB M4 KV D8 M5 IF LN LO K9 LK MW D0 L5", " H MQ G0 BX 9 L8 AT C5 AJ GK H8 H2 GT G3 A3 JN BU ", "R KA H NG EV B7 EL A8 MO LO B3 ED FV DU D3 B7 NH A", "5 GG AS KG D1 N LU AR JY GJ FG DV ME AT MC J6 K M1", " IZ FG AR LX IY IL EX BA HY A9 E J9 D2 KS LS KF J4", " L6 JM CE EW F1 DM GI H0 KE EU L AE B5 DM DA AL E0", " BB DH J1 GV V AQ KN KX LQ J5 J AZ LU LA IW M8 C I", "U BI GZ AL KL AD I9 F2 JD JA F S MZ K CM D6 I2 FB ", "KW 3 F5 I1 MR JU DK A6 CU L4 BE IZ B2 V ID X IA EV", " JZ DI CL JE LM HU EA JW FM I4 C1 KN CY KA E3 AM A", " BI IG JY CO K ML HR IO HP GD IY KJ LL LO F8 FQ H2", " CX A8 GL F8 CA D2 ES EK BR BK JO B7 H3 J4 EU BC D", "B DK HJ HG CR LD KC G4 BP CC L2 Y EQ ND AK GE DR G", "D AC C1 BS L8 T L2 E6 KR X J0 KP G6 E7 JO 7 B9 G6 ", "FU G8 AK MK KK KY D1 H4 K3 MM LK U A2 EF A0 A4 CD ", "GN AE JE L9 KO HU BD FC O CU J8 KM JM LR E4 BB DY ", "LQ G5 K6 M KR K7 ML HQ IL HR DB NF FB CJ DB GT I5 ", "EI MO LE CY IR D3 B4 DX IX A6 BO CB DQ A2 MU HS AJ", " JU F3 EA LW C1 K3 EG D1 BV DO BF D9 IS IJ E0 EP J", "S DE CQ L0 BL AN EN 6 HF I6 NH AI S M3 KY BN LQ MB", " HG ET I8 MI HP G1 GH BH A1 BW NC M9 H9 HV BC GS H", "X IZ IV CZ MZ BQ FH JA A3 F8 HO CS 2 MP KA FU H8 B", "0 6 BY AL KD CC DD DY K6 AQ E5 FO M7 HV AM FU HL"};
    vector<int> seeds = {368, 222, 452, 49, 378, 34, 19, 51, 234, 175, 16, 142, 288, 377, 431, 250, 67, 25};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"G3", "DA", "BE", "IW", "B4", "DT", "BJ", "J0", "L3", "FG", "BF", "K6", "K4", "MK", "B2", "CU", "LO", "CH"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> teams = {"DD AU GR ME M7 EH LA D6 GI G7 MQ IT NC DV LB DX E6", " BU BR FV BQ 8 B2 HG F2 AL KY J0 JN ED HK IK CA E4", " EL MB C MM LF CD FS LT CW H2 IW 9 HW J4 KS KQ HT ", "CL M5 GQ JB GD AK DW M8 NE BP MN JW D2 EA GX KL M4", " AH JQ JV LU JC J5 KI GS FK FG AR HL AP CT LL BM H", "D Z E7 F7 LY KF KK DY GG F1 G3 DG C3 KR H0 GL NG A", "8 CP JZ JS DI JD G1 C0 GW LM FY H9 CV EW AY FZ AJ ", "V CO CF S FU H JO EG MJ FN J9 JT GA NF G6 LO A FM ", "FC GF DJ P HB E9 CG IC T D0 AF G DU K8 A7 K6 IZ MS", " I5 I1 IU DB BT DO G0 CY F4 C7 GB JR ES AE JH MK G", "2 B5 FQ IS DC HR JA AG DE KW BG H8 F8 LX HA MA LP ", "L6 FR HQ AV HJ BW J1 6 K4 G5 F5 NH MO FA M1 KD DQ ", "IF B7 LC DL U IM BY Q C5 KV IE L8 O F HU IX IA IN ", "BC FT AT DR A9 BF IV DK L4 JU N 4 KO L1 H5 FP H1 B", "1 FL HC 1 J AA CQ HE AB C1 H6 F0 GU EZ HV CI M2 GC", " EM IL BH DA 5 MX JL AO J3 EU B6 H7 HP J8 LI GZ M3", " JX 7 GH AQ JE LW C2 HI C6 BO Y MF ML F6 W FH R I4", " KH D5 ND LJ IO ER DN CH MV D8 FI GE K G8 L MU C9 ", "EP B4 HH BV GK HF D1 KX I8 K5 JK A2 AC FO EE IG BX", " GV KA J7 ID EO D4 HO BJ AZ BZ E0 LH FB LS BB JJ M", "I GJ AX CX K3 LK X B8 EB A1 G9 AD EK EI CU F9 KC K", "M I0 MW BL LR A4 GP MD CC JF FF AN D3 GY LE LG I6 ", "BA EF A0 GN M9 BK FD DT D L3 EN MG L0 IY I2 IJ F3 ", "KE MP KZ MY KT A3 BE ET K0 CN G4 JM B I9 I CJ A5 C", "M I7 DP H3 J2 E2 FE II AI MC AM AW B3 FJ 0 KJ JP D", "F KN 3 EV L7 KB EQ JI CK MZ BD B0 LV DH HM I3 B9 I", "R BI K2 M0 IQ C4 E HY E1 IB EY EX M DZ HZ FW D7 MH", " LQ JY DM JG KG EJ M6 GM HX LZ FX E5 L9 KP E3 BS L", "D J6 K7 KU HN CB AS E8 C8 K1 CR A6 MR D9 EC CZ CS ", "2 IH GT MT GO BN NB K9 NA DS L2 LN IP H4 CE HS L5"};
    vector<string> games = {"DQ C9 NG I7 NE E1 HD B5 DX IH K4 KX EG GA CL D7 IV", " BO BQ L1 KR BT AJ DJ L8 IO KY A8 FR EE LP BX IC J", "F ES CX FZ KZ G1 JM CD FX IF MU 8 MR HK KU M8 F5 D", "2 IQ T CC LB CV KO AQ BY D8 CL IF HG JS LO A0 GL D", "P DR ML HB D3 GB LK JN BF B1 GZ H2 M6 C IX GI AB E", "L IN MJ L3 HG N HJ A2 IK AT MN 6 JD K8 H0 DB HW IM", " JO NF BM FQ EL BS V KE H9 BE B7 L DL K LB HC A8 I", "5 LX J7 J0 AS CI EM EA HJ BU CS AJ MP JN GL DV 1 F", "U LO AR EQ EH FU CA J6 B2 4 EL F1 J1 K5 BT AD LU D", "H HC J8 L6 IG JB DZ MQ NB HE J3 JC LV GS MZ BU LM ", "CW GM CF IJ 8 KO G7 V D6 C1 BP K4 DE BJ G3 II MS K", "C JS K6 J H7 AB AO A8 CM JW C4 S A NF M9 MA GV N L", "W F7 JH DG FE LF E5 AK MO JZ CJ S I2 ME EZ GW CN J", "0 NG LM D0 9 KG NG I1 KF ES NH GK MM KK EZ BH GX A", "V IN R AG AZ DI I9 AU MJ CA FT MK MI B2 DI JH GJ 6", " I8 LC G8 F0 5 BU H1 CT DC G5 D1 NC GO GG C7 MB IA", " DV EW IK C3 GQ HZ JN CB FV C0 LA S FT W H1 M3 G0 ", "A1 AY HB Q MV KI H8 LY FJ FN D KS DL G3 CY H L0 ME", " H4 BQ D9 H8 EO DB EK DY GB V GF AL CP KL BI KD EP", " F2 K1 HR E0 HG CR C3 DO JT FD A EF AP HR GR HV IX", " KH GS BG LB GT E7 MK C0 G4 FA HH DW NH HK DR H2 C", "5 MQ AJ AL L4 KY DK IW EJ GI CO JW J1 ED H0 1 HP D", "2 BW DK C6 BQ G1 HK KR BF Y IM FI NE G5 LF F AL C8", " NC J E4 BC G7 K9 CG FF EH LN G2 JJ G A4 M5 FW E6 ", "B1 F5 HF MM HU CO F3 FG DE M7 GU C1 JL KV DN CW KV", " JU C2 CY EB LA H6 CQ EU AA B6 KI BD DG G0 MO BV G", "L IU MQ CQ EA M0 E4 G3 GW AF D0 MD BM KN GI NA MJ ", "JT JA BZ AU HS KQ LC B2 A6 LM K0 BC FH FN J9 GQ KD", " JS I GR EG H5 7 8 JD FY T KQ LQ AY MY LL 3 C3 E2 ", "KY E8 GF LG KW HO DD L5 GR CE JZ IZ M4 IR FV H5 F7", " 0 MB GG IW Q M8 IB AE AX HW JG P GY A9 MF DD FN J", "9 DT GD FA GU DA IT AA FV EC DV MT HU D5 KK AW DX ", "FL JR K3 EH F0 IU EI FK CK LF KF K8 BL J5 B0 JO MG", " JQ LP JC LX FZ P CW Z HL JA F ND AT F6 J4 U J4 DM", " IT FZ HL KB FM BA F4 B8 4 JE DD M2 E6 2 KF B3 GA ", "BK C0 G FY ET BR GW IZ KM CD O CF FM DC LH M4 FR K", "6 I0 E9 AN F1 F4 BR CZ DY AM CA DG C5 CH KL HQ KS ", "JY 9 BY HV IL AU CI I5 F9 MM L9 G1 DU IE ER H6 MX ", "G7 HE FU IY JQ I3 E6 FY HT B7 LT HX F2 JU LY AE EW", " E9 ME JO ED HN L4 HI AK EX ED A9 IS FB LU HA FK K", "W MN E M2 GC AV AC FG JI F2 JZ J5 F8 DW EY C KP CP", " A5 GD M FP JX JB M1 F1 AI FS F7 IT BN G6 GN JV MA", " GG MC DI A7 JV HM CT EV KK JR FL LI FS L8 I1 CU C", " DY LT E7 IK K7 L1 GH D6 DS BP HY AP L7 CV CG LL I", "S BW JK CO FC HA KA HQ FO H0 H3 BG D4 FC I6 DX H9 ", "C7 X IA I4 M7 IP D6 CF AH B9 LA L2 O LJ GX K2 U GE", " H G6 AR AG M7 H AF GP FQ LS CV A3 DJ LE EW KT EG ", "EN M1 B4 KR J2 B5 BB LT IE Z JP BR FP J0 IV HD DF ", "M5 DQ CD LY JD B CP MS F8 ID A7 MW FS LZ Z G2 H9 I", "C HT MH MB E3 E4 LD DO G9 E7 KJ NC AY DU LR AH L6"};
    vector<int> seeds = {210, 21, 101, 95, 35, 107, 198, 76, 359, 190, 436, 273, 173, 367, 89, 62, 20, 433, 105, 199};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B5", "D6", "G3", "JZ", "FS", "KL", "IE", "NG", "EO", "DJ", "DP", "MU", "IM", "AX", "JC", "MQ", "D2", "E2", "FN", "F"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> teams = {"CG M9 BB MJ U B5 DS LN G1 C6 HM B M1 F GB EI CM C0", " G6 MM CV BQ J DZ DN JI IJ CB G3 GE KG HK DV H I5 ", "AW JW I2 IU HF B9 9 M7 HZ 7 A7 FQ BS DJ CY HC EB O", " F6 AT J9 D0 ED DI GN D6 CK I1 GC HR E9 AE P JS BV", " F8 ME KO GX IK E5 KB MN L1 M4 A0 DW AZ DO MV BK H", "L GJ MR F5 AJ W LC BL 2 C9 EL LE MU LI CX BO NH LY", " IQ B2 A1 M3 IT EY GH L3 HN MT FA A9 MD HV LP AL J", "R 8 JL D EN JF HH KF F4 HJ MP AN FV FK BI HO J0 K9", " EG A6 LH DY JT AM C3 MA AG GS FF ES E4 GU DF A5 D", "7 EP FX I0 H5 GP BJ KT T GA J1 LJ JY KU A DG GT KR", " DP MI L6 AR K6 H3 KE FE FI C4 MO MW BH BP ND BY I", "9 LQ FP IA F9 B4 IL CL IB KZ EU JK D5 J7 C8 I GQ G", "5 DA GW X L9 KI E7 EA IP A8 JN CZ CO FJ 1 J5 H0 L7", " GK G8 KW D9 G9 JC FY KJ A4 LM FB E3 HU CE GL K4 I", "8 GV BD HW B7 FZ MX M5 FL E C EZ C7 MY F7 HE KC AK", " LU K0 MS G IW DC DE AC LO DQ BW JE AF EK AB BZ F0", " IX DM CH R JJ K1 HG EE M0 KP GY FO E8 ML C5 LS DH", " CR FT MZ I6 FC AU AS DK H9 I7 L0 AP B3 HB LB BX H", "2 AX E1 IN ER LK IC JU J3 DX DD KL NG BF LV EF KX ", "EO G0 EJ Z HQ GD CQ DL E2 FM ET HP H6 I3 LZ KA J6 ", "Q KN HT A3 E0 LA AY FR IY HI GR CI G7 NF 0 A2 IM C", "F L8 EH B6 JQ KV JO JD L BA FD AQ K AO IZ AA MH MB", " EW BN MF EM DU LT JB HA CP II M2 K5 JX KM C1 BR B", "G BE B1 CA D1 KD J8 BM GG JH EC IR GM DT AI MG IV ", "KQ K2 CD CU BT LW IS IF CJ FH GI HX H7 CW 6 M 5 JV", " JM JZ NB NC BC LG FG CC KY K7 F2 DR M8 NA CS JP J", "A LL KK EQ FS FN IH EV GF NE DB 3 H8 AV D8 IG E6 F", "1 B8 CT F3 L4 HY V LD K8 J4 D3 J2 M6 FW D2 D4 C2 I", "4 KS EX MC GO FU B0 Y N GZ LX CN ID 4 KH MK S G4 M", "Q H4 LF IE HS L2 BU K3 G2 LR AH IO AD HD L5 H1 JG"};
    vector<string> games = {"GT Q AW LC MU BT KO MW 1 FT LQ EF W J1 MV KR JK LK", " W HX E DE C4 CQ GB BD LJ LA AJ H7 IT GS DZ LM EN ", "K5 KG LE O I 9 D3 DN A4 J FB H3 ET A0 AR DS AH HH ", "II F5 JY NH KQ FB JJ BQ A1 HC G5 LC GI CV KH I2 AJ", " L3 GG B2 AI HK EL C0 K4 8 C1 F6 C8 CG KF BY EO H0", " DH DS 8 BV JP J0 MB LH AO E5 FI GH JH EA H9 EI HN", " 2 KT M7 J4 CY CT B L2 LM K1 I5 H0 C6 K3 M3 GM MX ", "DQ GJ M LY DF GB MT G8 ML GS JO C0 GH IL DD GX DR ", "B MD E7 I7 JI NH O E6 D7 IM M7 BK FF KV MP LT BQ E", "3 FJ MZ K9 MH DS C M4 K6 B9 J2 BB F7 GX MO A1 DT M", "J HD GJ A CL DX A7 V G6 GL JR HO 7 E7 LN E CB JC L", "I CU G3 B0 BL T IA BF ED 3 HV B1 BH Z BD EK LE LW ", "KZ JU HM HV JR BR AG JD HM BU G3 G9 M1 A9 IU F5 G3", " LI F9 NG KC AK GW HB G1 G2 HO EW H 2 KE FM D5 ER ", "M1 HS DI KZ JF MP MD CA HF MR CX EP DN LY DF L8 D0", " JK C6 M5 HW AF NH A5 LN LR HL DG MJ MY MT JT B9 J", "N K6 HP C3 BA FL AC MI LZ HZ EA LE H5 BO K2 9 A8 D", "6 GF DV EX MW HQ B7 JE I1 B4 CY DA HR FS GV AB GL ", "IX 9 HL AZ NB CX CD U AD EN AN M3 FF J7 IN MT J8 X", " B3 HR IA K4 F0 JF M2 E3 R FA KD GN NE JI GZ BP EJ", " GE FU A1 ES GC F9 ND G0 B9 GJ CB CX E4 B6 BL FH J", "I KJ ME BH KI L0 L3 C3 F8 CS DO DP CM L3 I1 IH F7 ", "K0 E9 FP F4 HA CO I6 E9 EQ MD A6 CG JG MN CC IU CO", " FP LV JT AQ U C7 G9 GY AR H6 AL BG FZ BW L6 I3 L1", " H3 F8 BP AZ MI HM MX LP K9 HC B8 IP DK AM FD DV G", "K DW NC CZ FC AE LQ I AX AE KK I2 FJ M4 LG T IY P ", "I9 M9 HE KO M8 U D I9 KX I0 NF EL IS BO D7 DZ IQ B", "I BN KG KW C9 IF D FV DI DB M7 IP IJ N FQ HY D JX ", "CM I8 LP BE KR J6 A9 D1 A9 LH EU IC HU CH DP KA 7 ", "LD IJ BO AW C2 KB KY BS L4 AT D8 J ID G6 EY GN IB ", "KB FE JS JA DJ F3 I5 BL DG KN IK C4 BK GT D6 CL JW", " D4 J1 AY MY MS FY M0 HF M6 2 CJ H5 G7 I8 BZ EL GP", " G1 AL I2 D2 8 BI GA FR M9 HH C DC KF F4 MJ EN EB ", "F1 A HT KG GO F IE CK IL L9 AP MO GD AW J5 A8 AS I", "U FW C6 LP JW W G5 BX J B2 P LL EI H4 FA DY C7 G L", "N JR HK G8 H KS HZ K8 MU I0 LC GA FI DL FK MF IQ G", "U IJ FY FV EM DY K DZ CN CG KC FX 0 GQ H2 A7 KI DN", " LX EY EC MV JM JL KM L7 LS F6 IG KW E8 E5 K7 KF C", "P DJ GW CB Y A6 IZ J5 CR B2 E4 B5 EZ MM MK C8 E1 B", "5 IO MM CE J9 AV KU A3 CE DM IB J3 GB LF KJ EE CV ", "HU ES JQ G1 FL HF CZ C0 G4 JS BY DV C9 G6 S DA LB ", "DO JZ B FZ BB JF HV EG LI FX MR KU DW L6 JL FK JN ", "AU A0 BC HN BM IQ MG MN KE AT J7 J9 D5 MA L I5 I4 ", "HJ JB B4 KL HK MC CM MQ A5 CF ME NA JC KP GE MU GE", " D9 BK JV ED EU GC FN D9 FO FE E2 BJ GR CK EV D0 H", "8 B5 JL H L7 BB L5 IT IR M1 B7 M5 LO AN DU L1 FG H", "E LU F FA EZ IW EP A2 EI GV AL J0 LY IV GU EH EG A", "A GK C5 F5 CW IK F2 EY AG FQ L9 HN AM HH HJ BV ND ", "A4 HG AJ LJ KT HI HL 5 JY E0 JW 1 M9 H1 CV M3 C9 B", "J GP CI MM IT EB GQ BQ 4 BS X GH MA F HW MR 6"};
    vector<int> seeds = {153, 231, 376, 131, 411, 90, 501, 461, 440, 337, 357, 445, 363, 236, 189, 129, 255, 473, 318, 103, 337, 15, 340, 314, 471, 191, 190, 463, 481, 135, 495, 475, 287, 490};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B4", "CL", "HP", "KR", "IV", "HN", "J2", "I4", "LW", "A3", "H9", "K5", "BA", "IL", "AN", "DG", "E7", "IE", "DM", "IK", "A3", "C0", "AQ", "JE", "G2", "FV", "GS", "BU", "EX", "K6", "K3", "3", "I3", "KH"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> teams = {"FI DV NE DY LH L LI V KM HC DM G1 BM FS JS DG G0 G", "D EM C7 JY K0 EQ E8 FA L6 AM CA GW JZ HK A3 EZ BA ", "GL C3 HY L9 D1 JC BJ AB GO MO JT JD JL HN GN NF I0", " K5 EH IW 7 L2 H8 A2 IX KS JM MS I5 IM KE J0 JX C5", " LQ BP JE 5 H L7 IQ FC DJ BI DD E7 MB JN LF KH AX ", "ND DN LE W DB DC ME H6 M3 BN P GI CR MY AQ CL AL L", "U GS EC ES G3 HU CK IV I7 L4 H4 FW CF H9 JG H5 HZ ", "MA G2 B3 D0 GF HL FR BD KY JJ HM MR MJ F7 L5 S B7 ", "C0 L3 G4 GR K8 BY JQ BT NG 6 CM J6 MP MN JI D9 D L", "L G9 FE FF AA AJ U HJ KG F8 EK F6 K6 0 BG IB C H7 ", "A4 HE AW FL KQ A5 L0 GY E1 DR KK BB E9 KN I3 ED D8", " BV KL N HP GU MX LA F5 GG BW BX BE EB L1 D6 K4 EE", " M7 F9 MQ A1 K7 JP K1 MW MV MZ B2 MF O J5 H0 KW Z ", "JH IF A9 JF F3 K B1 JA DX HD B4 CC CD JW LV C2 FJ ", "B HA F4 IU BH AK J9 G5 EX A7 J3 NB IP BR LS F CN R", " KP KT AP KX FQ CU KD AO BQ EN DF JU GC M9 I HH C8", " LZ 8 E LC GB GK AV I2 GT CB M0 EV FP JO B6 LD E4 ", "IK DI AH JR MI FK KA F1 DE AS LT CY M IO MD FG J8 ", "C4 MH X HT EL KU BZ HS HW D5 FY KC LG GM NH J1 CX ", "KB F0 IA B0 BS ER I6 FH FV DL MC LY JB M5 C1 LR KF", " MG LJ 3 GJ G6 H1 EI H2 IN CP KO DS ET EF IE CW AU", " K2 KR L8 KZ 2 HR LB DZ E3 GE 9 MT C9 II KJ M6 NC ", "EW AY LK KV HX EP DT M1 EU GX CJ CI D2 GV LP BK IG", " FB K3 LO ID C6 DH MM AN Q MK 1 AI G D3 HF AC CO G", "A EA ML JV AF I9 I4 T FN IS A6 IL MU D7 HQ K9 E5 E", "O HV I8 BC GQ F2 J2 FU CS M4 KI E2 B8 EJ CT DW HB ", "B9 CZ BF BO AE HG A8 D4 IC FM LN GH J7 J4 DO H3 NA", " IZ M8 IT CE GP I1 DU IY LX JK B5 EG M2 G8 IJ FD Y", " DP IR AZ AD E0 AG FT A FO GZ BL DQ CH HO CQ 4 A0 ", "AR BU FZ LM E6 HI IH EY LW AT CG FX J CV DK G7 DA"};
    vector<string> games = {"C3 H6 JF FP MA C0 JT DU DG BU JY JW IX FM B HH J9 ", "EN U KO BN KG IB LJ BM E6 K4 C4 EK EI FL JB H6 EK ", "LE IB FW DH KS GG JL K7 KW IK J3 CU DY HL DM J9 GN", " IT C5 B9 D8 CX AX A4 B7 EW FI KY C3 FD HM DT DN C", " KY JJ FA GS AB MZ GL Z F5 HW CK 1 K0 CD IV CM AJ ", "DS JG LO BA DP EQ ES A4 LR EX AO C3 KW EC D9 HJ CP", " A2 BX JS FZ BV J1 KM LW FC DR HK CR LV 8 DR I6 G2", " B7 G5 BQ AW M5 H9 K8 L1 X E7 A5 CN R LI CG J5 AH ", "I7 Q BP DW BP ED EB HT MY AA B1 CB FI DA G1 JG BA ", "JH G1 AK D0 GV FS LM BT GE ED KB DN K9 AX EO GG HS", " BD HM AB JK GO MV H4 MM G0 L4 CA FT JN FL HN CE L", "2 J7 C0 NC KM EX JD JP BJ LE EH K4 MO IY CL FE L3 ", "M6 GW AG G0 AR BI FU G1 HI JY HU C7 CQ BI GY CL EA", " CC GB HU MP HU AI GL Y KM MA JG GR AK DF L2 EB IM", " AE BJ B5 J0 N LE HQ I7 6 L6 DX B2 FK C7 LV EQ CC ", "HC G5 L NB JC EG NF F9 BD GX KQ LY JM F5 H8 BE P I", "4 NB FQ C2 LZ MS LA AL GA AQ ML E8 BL CK J6 NE FR ", "I5 HG ME A6 B3 S IX BW NE LS JQ 9 HK JF HN A1 DV G", "7 LU CO K0 CH KH HV M7 FG L0 DL H9 ID EZ P G4 KJ V", " G2 MZ KA BH JU A9 JO FW JQ BX KU E1 FH BA BN JA G", "T GD A0 LQ HB K0 G3 BB BS DM IH MB KQ HY H0 JS F4 ", "GY FV JT K1 MA IG JX KL JX CZ K5 EE FI CN ND H7 7 ", "L1 KN IA IU GC C7 CK DY BR L4 NG A7 KD L5 LK F4 M9", " GF F7 E7 F2 IW DO JI L8 IQ KK HE C1 N GM KE HP EZ", " IF JC MF D6 MH AM AL FE IE DY CV GU KC ES D3 DV F", " GO LX MN KZ MJ HX LI B3 FA HD BE EL DJ CS GD I7 H", "Z L3 GL M3 LS KT DB MU ME F6 L6 LU 5 EJ E8 EC A5 M", "C MB GQ W BG EE J8 KH HE H0 DI KK ER KE BO AA ET D", "0 L5 MW DE E8 B4 I3 F0 JP LT L6 FO JD I1 CF BY MF ", "MI GI U CR AF GD FJ DB 0 FC M4 NG E3 BN T A3 AZ AM", " A JZ E0 JE CT G3 MN NE DK EZ IR I0 IZ S AY GS AC ", "H5 G4 H B8 LF I8 JZ MY ES JI EQ DQ B3 LP MY JV LQ ", "D8 JZ F3 J0 BF K M0 A2 LN HC HZ DX I2 A3 A9 LF AW ", "G2 BK G9 CW H4 BT BY MT CF C6 IF B6 V A7 M3 F8 DD ", "L0 HY ME DJ E1 H E9 HP LG BG 3 L D0 FF EF DM H5 I0", " M7 CR AJ D1 DB GN MQ 5 KN F9 MD V AT MS A8 MR EP ", "JJ M1 EC HF JC W LH IP FR MR G0 B HZ FB BW BZ C MG", " F7 KV H7 KF L9 G8 GF D2 ND E5 FJ C8 GW K CA CL L4", " AN LI J3 GS D I5 MX L9 J5 K5 NA JY HO KG IN JL GP", " CM LB D1 M2 DV BD GW AQ L9 DC KY EU B4 GK JW E KS", " IC DG H4 CD LC MV F1 DC K6 J6 HR EM C2 MP 2 HK AD", " D1 O K8 C9 DC IL F6 H1 O JR M3 FN F KP LU LL FR C", "J K1 AS MX FY D9 KR MO MW H5 K3 LH GF 0 GJ EM IV L", "L AU K6 G6 JN BC IQ KI FS CF D K2 L FX H6 IS DD J2", " G3 G AM JA AB DN BM H9 JE I3 HC EY 7 J4 E9 B0 JM ", "D4 L7 E2 H8 GH C5 BV BR AP HY IJ IM GU JS FW L7 BB", " FA GZ AQ FF MQ IO F8 H2 K7 CY EH H3 W D7 6 DZ GI ", "I9 NF M8 FS IU IW D6 P HJ GR II A3 GI HA I CA B1 F", "3 EV JH LD HL MJ IP KX BM BH EM 4 DG HA LH J HL CI", " A1 M BJ B2 LA D5 HD AV AL G9 IV MK Z E4 KL NH"};
    vector<int> seeds = {453, 12, 258, 47, 48, 130, 442, 509, 34, 215, 385, 151, 453, 469, 8, 185, 375, 188, 161, 319, 50, 486, 82, 231, 75, 167, 40, 343, 96};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FO", "C3", "KU", "I5", "IM", "LA", "CO", "LN", "G1", "E9", "E5", "GG", "FO", "EY", "BI", "L5", "LY", "F7", "NG", "KD", "IW", "H3", "ME", "B4", "FW", "FF", "H", "AS", "KY"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> teams = {"MA DK DZ KG MM KC C2 GK IB H2 ER KX DH K7 CL B0 AS", " FE O FY DG LR LQ IU I1 KS MD KY CE EB DQ JB JV ND", " GF GE M6 HT G1 AJ GG HX MW J5 B1 GC I2 LU EK F1 F", "2 DA BS E6 BV MN H4 LY A1 F IX L3 JX M8 B2 BO DE A", " A0 B8 IJ CW GB Z 2 KI IY I3 JR IS MX JL EF AM LO ", "H9 FZ NH J7 MV F9 E4 C0 CM EZ ES FH AB J4 EC H0 HF", " KB IH JC EI CH IA D HM S MG JM K0 G AR IZ EE JZ Q", " KH I0 DT L DN I6 LI C3 K6 EY E IR KJ AV FF L9 C9 ", "E2 NE AA NB FR B7 IL MU BX GU CG 3 H6 H5 M4 GS HB ", "MJ DV MK AQ DD CP K3 G5 D5 G9 KN IP BW NF DX BT 0 ", "AW U 1 FK A5 FD IE MC DF CO LA CK D4 DW JG DS D6 D", "Y N JU ED AG BD L6 JN LF G0 K4 KO R CB II GX L1 A8", " AT IO F6 A3 KM KW MY DL HI CQ CT DC J9 JY EJ BQ H", "J KP EG EW 8 NC ID FL AO LW G7 4 HD KV L4 E7 FJ E0", " D7 BJ L0 EO L2 IC A7 JT CJ AY FP HG HP KF GJ GT F", "I MH IT MB KU KD K5 IM J1 FB D3 BF J0 HY X MR HC H", "3 KT B4 JH M3 JE KL CR AI MO EU G2 CV GH ME CF BM ", "J6 LZ C1 HR BB H7 EQ GO AN K1 JP B5 GM MQ LE LM BE", " K2 DR GZ EN MT BR BA GP M1 IG P EL FU I8 IK G8 GN", " BN DM G4 HA NG EH BI KK J8 FO DB FQ E3 LC D2 E9 H", "H 5 CN FG BP JQ D1 F0 LB AU CA CC JJ HL B3 B9 C5 D", "P HU DI MZ MS CI NA K9 CY B FN EX LP JW FM D0 I9 H", "Z LL F8 AD LT MF I H8 LS C7 BY GI M5 JK AH FW J2 A", "F EM IW DO GY J3 M0 KR FV T LJ D8 G6 DJ C K HE JO ", "FC MP CD JD ET F3 BK F4 M EA HV JS DU BC JA EP F5 ", "CU GD M2 A4 LH L7 E8 7 KE K8 A6 LD LX B6 GR E1 CZ ", "GQ C8 E5 JF EV C4 FT I4 G3 AZ IV ML 6 H1 BL LK I5 ", "L5 A9 HN M7 HS GV AX CS BH IQ F7 L8 FX LG FA AK BU", " FS HK BG IF D9 MI H A2 Y IN V AP C6 LN J JI AE HW", " GW KZ M9 I7 GL CX AL HQ AC GA W KA LV BZ 9 HO KQ"};
    vector<string> games = {"IA 3 NB FM Q EM 4 JE AM U JV ES CB EN CE EC J9 HR ", "F LF HI GO LF M1 G1 LG E2 HZ CW DW R MT AV LT DV C", "5 K6 C7 J5 MY M6 JY MG MU DZ KF JU IK IS E8 MV BW ", "H2 A7 JB EG FJ H3 EB MI F2 A8 LA BI KX IZ L2 BF MD", " HF B2 EV B0 JM IY DF B0 D7 CL M9 LQ EI FE HW G0 G", "P KW JP JC HE C3 K6 G FR B1 KW O E7 HT J9 EK IO F ", "AZ L3 I4 IB AC BV BL GE BU MD FL DH EO GK KH I3 KE", " CQ EQ ND HK H9 0 DG KV BS I5 GB D4 A1 G0 GT FI IA", " DJ D G6 IP D1 HX F7 HT F9 DK HO FH CP ES F4 HM D8", " A0 D6 KC FP C2 W JC M4 KO BR KH AF IE DB GG NH BO", " JU BJ X DX FG MJ DP AS MG I0 J2 GG L8 C2 I0 DH GL", " J7 JA FY L4 HJ BM E4 JS EB 8 MN R ER EE J7 NF KI ", "CO M8 AG A1 IV DF J8 HX HI EB J4 AB F3 AR NB CM EA", " LI GI I0 FF AJ J7 KS KB KG HP KY A2 IB JT B0 KZ F", "K LC DK GJ AQ B3 MX A5 K4 BA IH JO DZ I6 LU HS IB ", "Q K0 KR CO KK L9 F8 KF IT D6 BN BS GX E H8 I1 IH G", "1 DC DT FW E0 HC 8 CV MA GT IZ GY NH EP K0 B7 JB I", "F K7 I7 IU AP JR 7 AT LM KS IN L4 B4 IU G7 DS DM C", "G K9 KB HB S LJ MW DL LR HD KB FC G1 MV NE I9 EI H", "5 2 LA CL BJ ND HJ AG FU IY K8 IO LE BW JQ GS DI C", "L K0 EJ LZ KS AO D5 AU EO J0 A0 GQ FE FJ DN JK CJ ", "IM HT FA S BX G5 CA BV CB F1 HN H4 KO JR IE I1 LW ", "KM B5 IX G3 C9 LL KJ MF U E9 AJ FX JZ IW HB HU M6 ", "AK DN IR FY D KC KA FH BK K3 CC FZ F5 DL AN AW HH ", "DE N IU JC A DY JN IG IL EX EZ M J4 AQ MW H9 GE EJ", " DH AR L0 HY FR JW ES K3 I1 V DA L1 H9 CU MD Y ER ", "AL EE NE HP MB AB DD D CG NF BP EC JD J4 ET LO GD ", "CK EH CW GR MM L J5 BH JV KP GF CM HG KU I6 E I6 M", "5 LQ C6 MC FO KX L2 JB FH H4 6 IS FD EF 1 L AH LQ ", "4 ND EZ A5 E3 KV JH JZ E2 KG BZ KX CX DG IA K7 L0 ", "EF A4 GF FS M6 E4 GK GA L1 K2 MW IQ E7 KT JV BG HD", " M3 DT AV G9 LB FF AD 3 NA N G8 KC DT DE E5 H0 DV ", "L6 P GG CQ 0 5 EW GH FY JI EG ME MK B9 FD FQ DG J ", "BO JF D7 MR CP JJ LO AW ED I8 F6 MQ B2 ED ER IC DA", " L5 A C8 JL FK BT CN MA C3 B8 DS MU FN E6 LK I2 GV", " CE NC FZ BT DK LI D4 NG JL LH C0 G9 CT H7 GC KM J", "T J1 GJ MH JM IL KY ID AS E0 EI K JY C1 MY K1 LR L", "N DZ 9 GC AX GX DR LW CR MA KQ IJ JG JG G4 G7 KL M", "M LV BD EL E6 II O HM LU F6 AY K5 H2 HQ A3 GM IJ E", "1 M4 MZ H0 CD B1 CS IH GS C2 AY 2 LD KP CF KN F0 D", "C BB KH L9 NH DX F9 DU FL MO GB B6 CH H6 DW HA EC ", "MK HF MJ KI A6 1 D2 I3 MC AR J3 IR I O AE Z LX BQ ", "J6 F9 IP Q C9 K7 G F1 AT H5 MS C0 HV H6 CI IX JN A", "7 FB LY K4 MM HG DQ EW HX FZ II GZ MX L7 IC D3 DD ", "HL MV BC KG DN ID EU AO AI GU CY DQ AB FP KD M8 C4", " I2 A3 FE S MN H1 AS GW HF MP DQ D9 NC G2 MG T L K", "J CM D5 GE C0 JX BD B7 LP AA D0 LR CH IZ AA HM GU ", "EY LS GF BQ CH C H2 JZ L3 L6 EZ G5 JX FT A8 BE EE ", "DO Z CK DY GN JM FV G M0 LY ML AJ CT CE H B8 CZ KY", " H0 LI EY BX B AM M2 E4 KN F2 A9 GK CJ EK M7 C3 BY"};
    vector<int> seeds = {1, 493, 485, 36, 484, 91, 66, 338};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "L5", "MI", "GB", "A4", "GC", "H9", "LL"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> teams = {"IV FX MP C6 FA AL I5 I9 GV M4 BE DA AU D1 JD FD LQ", " B6 L8 FG KB DN DC 6 BH CS LE FL JG ME BG EB I4 K9", " MJ K7 AV GB JV MU CQ AQ I8 IK HB DW H L1 J4 CY LF", " KQ MW E6 J3 CG DO GX A9 4 HQ MV DB CC M7 AW MA NE", " LM MX BP DD B0 E5 ML AK CV AN EL CL E H7 DK LN BD", " BB NA Q ES GI P A0 KI H0 CR G6 GK IR BU IM MG DI ", "LA KC D6 L0 F2 A1 B5 AM MN I C3 GW IS A2 JA T KU I", "X GL BI JN JB C8 GY LS IC JC EP AH KZ FU I7 GT F0 ", "LP D8 DP GZ DG HA EW C JW I3 AZ EJ B D GC O A7 L5 ", "U D2 E3 Y EI EX K1 JH KG JE B7 B1 E2 GU KM LB CJ C", "K R JM MY KX BJ B9 F3 W DJ DV EG M8 MT E8 JS D0 D9", " JR KR KW IP DX 3 CZ A L4 FQ J5 JF L7 MB FE IU LD ", "JI F9 DM HS 0 F6 EQ JJ FM DL FI K4 BQ FC E1 JQ FW ", "CM ED HT HK FO X D3 A4 EO FS HI FZ MD IT KF FT I6 ", "1 MQ L E0 ET M1 BL HJ AF MS K5 EU IL JK MO KL KJ L", "Z LX KK IY FN HX D7 G0 H3 CD ER L3 9 8 FP GQ EV FH", " L9 M2 MM 2 HM IA BN NF EF BO GD A8 CB M5 F1 MK KV", " L6 GH GS J1 B4 CX IE EY MH BR EM HO BM H4 DR DT D", "H KP NH C4 JY BC AX G5 LR CH J CF HP CU FF LT AO G", "F LC H1 B3 GJ BY JO IZ AP LJ MZ GO EZ C0 AI IJ DU ", "C7 C1 5 M3 KA GA C5 KO F5 LH MI HD EN 7 CT II J6 I", "0 AR AT J2 JZ J0 HN M IQ FR E4 CP M6 H5 HH K0 JP C", "W CI GR AB LV LI LU NB B2 JX KE HG BZ AS AC LG E7 ", "HE BT HZ G3 EE MF G7 M9 F7 HU KN FB K8 C2 H9 K6 H8", " J9 V G1 BA KS H2 MR JL J7 Z EK AA LY DY K3 GP BV ", "K AE BF LO IW FY M0 BW FV CN D5 G9 JU GM LW I1 N I", "B G2 IN EA AY HV S F4 KH KD AJ BS CA HY H6 F8 A5 I", "G IF K2 LL GG NC FJ D4 C9 HL B8 DQ BX G4 AD A3 DE ", "BK HR IO KY JT HC NG FK LK CE E9 AG IH EH L2 DF I2", " ID A6 HF G8 ND HW EC CO F MC GN G DS DZ KT J8 GE"};
    vector<string> games = {"JG IM AQ HL 6 E9 B6 I2 MP KT M7 EA 6 FS E6 H6 A1 F", "B D J2 CQ DL AZ HN BH CE IR KS L0 C2 B1 KA I M9 BE", " M1 DN F2 CQ Q CY IF KB EH ME BU K9 CR ML DV GV HJ", " MV 3 K7 E1 GY KE LA H8 JI H4 HQ CZ B5 KN DI J9 FA", " DS M4 KU I4 G6 DW NC LM D0 E KX D3 NF C3 C CC IP ", "Q KM FX J8 JN I7 GW MF NA LB BP E8 JV K4 BG HT KR ", "CU M8 B3 HS EM JW IQ F2 K8 EB IO ES GU BP LW FX LS", " FC L6 BH KC GB BQ JG HC JB FU DA JA B0 M8 MN F7 F", "9 BM JR FF C6 IL H7 LO LE DI E8 LC C8 HG BJ MZ BG ", "IR DW 0 EQ EY C3 G7 DM HO K5 FN B6 MN DD MT IS HA ", "EO IA FA EU L0 GC MP JK EB GK H7 MY FL NG FU AB JB", " BZ E IW E0 L3 MA JR EJ J0 A4 BN DB HV GK EX BL H3", " I6 GQ GK H2 B0 JU IV GE BI GT FD A6 M4 BL FI J1 G", "6 MR KC A7 J5 JY AN F3 GB P MX JS I9 GL JD HF FD C", "3 I4 CM FG B5 D9 LT GU 5 A1 B GI LY DP HH B9 LJ CG", " JF FE DH MW F8 AV AD AL JN L4 AX IM E3 CC AY D1 G", "8 B7 GA BH EO DL B4 K1 LH KI JE E2 M3 KW HP FG IT ", "ET ER I8 JJ IS EE B6 FT HB FJ HB F6 AU E0 NE IB HK", " GD NA GP LF IG IL KK MU FI K9 BK BU Y A0 B7 FQ BC", " GL LG T DP EG GJ ED CB F2 D Q K3 JJ IE BB CJ LN A", "E EU IY HI 2 KU HE D1 IS FM CX KF FH JG FO AF D7 F", "W F1 LB C7 F0 CW BE EC I JW AK CN GY AH BD CK GW E", "W IK D4 DV BY MP GY 6 D6 H0 KG EI HD 3 CH FT EV P ", "B1 AW KR MG D2 0 BR JK LX AV A0 IM G1 G6 K1 CL BJ ", "AL K5 I5 GN AU ND H GG A9 KD GC AT JA GZ C6 DZ CY ", "JI GZ H5 C8 KZ IP CF CS A4 FX MO EL M0 JN AS IK EQ", " FL MG CR JH L1 DM FO BO FG L2 FD 1 LS EP CL FY MG", " V E6 MB L1 LL MA G2 JV BX H0 J7 MV S I3 M BI AC A", "H LI DN IH GT CI GX AJ A G5 DI U MT H1 ML D5 AM HU", " A2 G3 KX GO KQ IU K7 A3 C FR AM AZ MY EZ MO LZ DA", " ET FS HM BD K KL KJ IR EI I9 MC HJ G0 MW FE CK IJ", " IC B2 AQ FM LF LD A9 L4 LQ I6 AK DJ I7 GR L8 AM 1", " FP EW E4 M4 CO DD GM D1 L JV GI BE T MJ JQ CR JL ", "FA JB KC K6 GL F0 DO BS MN I3 KQ A5 U II JD GW AN ", "BW MJ DE JF C4 JD MQ I5 BI AL G FZ MM LP JP I8 C9 ", "ME HK R AI JS GF LM N I5 MS T BT MS HX LE FK DO J5", " J4 K2 CS LA M1 CD MJ H0 IX E7 JC NB LN R O AR K9 ", "FW LQ I W IZ K7 KI LS JX F3 AP JA HZ CZ LR E5 G9 L", "8 KF I9 AF F6 MH EP LU IX LP D2 CT DC L0 D6 O B JZ", " MD M2 NE D9 AW IN CS LK IT L9 HA CP DN FZ LA L5 M", "X I1 JH F5 KG KO C6 C8 ME JT MU ES BB BV BU BA DC ", "AG JE C5 CV W IU DT LE D3 M7 KW DK BF Y EN DJ JO E", "S DY AV FC GB G4 L8 DF J3 HY KU D8 E5 EG I4 HR 4 K", "H AQ NA LQ ID BQ GH HT A8 IV KL X EF MQ 8 K4 GS EB", " ED A2 DG MB KP MU DQ GV IX E3 7 CG CA D8 K0 D0 AO", " JM C0 KZ LV FL X KB MD I8 BB J3 L7 LD DR DX J DC ", "HI EX MI HQ F4 CV FV B5 EJ L7 NH KI Z E1 KV A7 I0 ", "L 9 DA HW EL B9 DG M6 D6 H9 P AA A0 EK JQ MK CQ B8", " KM C1 GV F H HS IC JC AU A2 GI E2 CJ DU J4 F9 IV ", "IC CM M5 DK JM L5 J6 4 A DB DX BG KY KB A1 GX FQ"};
    vector<int> seeds = {355, 256, 493, 140, 109, 447, 94, 112, 344, 117, 17, 276, 118, 320, 383, 155, 169, 393, 61, 218, 201, 473, 382, 452, 70, 494, 472, 37, 271, 271, 75, 148, 178, 156, 127, 162};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AT", "G5", "AY", "KW", "LM", "DY", "H7", "KC", "FR", "MA", "C6", "MZ", "ML", "5", "LT", "L7", "D2", "D5", "MJ", "ED", "FW", "DS", "AR", "CO", "DI", "DZ", "A6", "EB", "IA", "IA", "GI", "DM", "EW", "GC", "NE", "HS"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> teams = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y ", "Z 0 1 2 3 4 5"};
    vector<string> games = {"Z 0 Z 3 Z 5 3 G 0 I 0 1 I 4", " Y J Y H J C"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "A", "B", "Z", "0", "D", "E", "Y", "J", "F", "K", "I", "3", "L", "M", "N", "O", "P", "Q", "G", "4", "R", "S", "C", "H", "T", "U", "1", "5", "V", "W", "X"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> teams = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y ", "Z 0 1 2 3 4 5"};
    vector<string> games = {};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1", "2", "3", "4", "5", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> teams = {"Z Y X W V U T S"};
    vector<string> games = {"Z S Z T T V W U Y X"};
    vector<int> seeds = {7, 6, 5, 4, 3, 2, 1, 0};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"U", "S", "V", "X", "Y", "T", "Z", "W"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> teams = {"Z Y X W V U T S"};
    vector<string> games = {"W S W T T V Z U Y X"};
    vector<int> seeds = {7, 6, 5, 4, 3, 2, 1, 0};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "X", "U", "V", "T", "Z", "Y", "W"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> teams = {"Q0XYJEMVCVM KOVKNLJ O4AJFRHWE7U5MVKHP P8SU"};
    vector<string> games = {"Q0XYJEMVCVM P8SU Q0XYJEMVCVM KOVKNLJ KOVKNLJ O4AJF", "RHWE7U5MVKHP"};
    vector<int> seeds = {0, 3, 2, 2};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Q0XYJEMVCVM", "P8SU", "O4AJFRHWE7U5MVKHP", "O4AJFRHWE7U5MVKHP"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> teams = {"8ER24S8UR3ZPZXH0DA1Y JE8760XLS S7E9TH4LPC 7UVH32X6", "K7V LVZWELOGAKEOEEOJO 8O47V JXAKA68692YDCT3K 47RJL", "54Y"};
    vector<string> games = {"S7E9TH4LPC 8O47V JE8760XLS S7E9TH4LPC 8ER24S8UR3ZP", "ZXH0DA1Y 47RJL54Y JE8760XLS JXAKA68692YDCT3K 8ER24", "S8UR3ZPZXH0DA1Y 7UVH32X6K7V 8ER24S8UR3ZPZXH0DA1Y J", "E8760XLS 7UVH32X6K7V LVZWELOGAKEOEEOJO"};
    vector<int> seeds = {0, 6, 5, 1, 5, 1, 0, 2, 2, 1, 4, 3, 7, 7, 6, 7, 4, 6, 6, 5, 4, 6, 6, 3, 7};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"8ER24S8UR3ZPZXH0DA1Y", "JXAKA68692YDCT3K", "8O47V", "JE8760XLS", "8O47V", "JE8760XLS", "8ER24S8UR3ZPZXH0DA1Y", "S7E9TH4LPC", "S7E9TH4LPC", "JE8760XLS", "LVZWELOGAKEOEEOJO", "7UVH32X6K7V", "47RJL54Y", "47RJL54Y", "JXAKA68692YDCT3K", "47RJL54Y", "LVZWELOGAKEOEEOJO", "JXAKA68692YDCT3K", "JXAKA68692YDCT3K", "8O47V", "LVZWELOGAKEOEEOJO", "JXAKA68692YDCT3K", "JXAKA68692YDCT3K", "7UVH32X6K7V", "47RJL54Y"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> teams = {"NL7PFRZC3MO8C87 ALG9W MRUDTJCO5UOEYJY ME SRT4CYIT9", "UZYTXJS3Z RU91I35UK162M3NO B7P5D 96A44Y6CRF0BNYG8Q", "0 K3C9P2E1CGIDY K0L3ZSMM340DNL3A2R9 I0PNFAJ71H8B0Z", "Q87 EI34RR6J2 FHOZ INYKJLDHETBNN4 NLVE0NIK94GB H0X", "3TJ MI633AZK4K EM0BB1CN UXMPJIS03VK7KOIO5F LOZRW M", "40A9Z 9B4FZO9EU GUR O5975QHU37 AJRJ968OC6Q9IVOO TR", "TU6XN 6O5YLBIWOWTC VT6KYX 2P2SKFWLAXTG 78W 5VC 5N6", "HI WPI3NHR QKQ0W51DXV2S UTIHOFMBWKN 3M459QZU76RTB ", "YA7YBYHMT2YK5N 6G74B7PBVI0Z6JM33PJ 3HEML3 U84QBF6L", "P9LHXY5O C4 ZPDFROGCN5SK5VZ RCMNYB AFMNJTPCO9 M0YL", " B6ZLUC8 26X39Y23KV78 VSD2 0LL6J2 1NPQ VRABTXV32VO", "J3TH QMV21GE Q54S XPY9RT XK5VY6SX 5I4Q4FH1PKCPMET ", "RXRUO4 8XR3 VAZUW Z1A2I5W1VDX9IFLV2P A1B DJBEC6UR4", "C 8G31KY25A 9G3SZ72QPLB8MP0C5B FN2ILAOL OUYQO0BVEJ", "8EH7FQM 8SM26W8X1POVJ5VK 4K8VV6YE VS5CXA AFBBQEUGK", "C9FAXEPR 7NAWJCYC PB01AL5PV II7FCJO83C7GQZ9ND Z7WM", "DU7PDDGPIUCK3KEG H5Z XKO76BYE7N RW5P2UKA5NO13HRD R", "2F G7NGUAJ1QDQJRGM2GK9 UI8J87QFDK3YBVKT1S2 WLHJEE0", "4ZQ ORI2KBU6D6TSXC0EL 71W9S4T0K K30846FB1KO14 YUG1", "2AWATDO1QB0Z 16CVFKNE6 189LAFCS8CSUV8P19 H1IWGF6JS", " 6VJG1SF3 J2NSJE MTFTVR635I8M V3IN6WM42MVYO1H57V V", "ZZQ 5RMWJSJ D7BV6E8DYW8S45WI LPEK 856GYBWXN7J1S498", "7 IDAIG1A APXKUC9WF 4Q1QHU2O1R5O1A9UPS QEH8YO7EGVV", "PKRYA5M QXO5FITL6BEV8J BB4AX876O3779B3W UGZC3R4SAN", "4DF5 9JXS04GGTOU90N HKGGIACJSL9Z4JF84WS7 69KN5390S", "VIKUAIN 8HKH3EOUM36OUATI IYFXBTVJIMMTP4NLUS 3X6GHA", "2X9ZX4EB21M E7NZEN1A8 OPLZ 7AFC204G9G3P3AAMI5 7981", "MOG L7ECXPAYAFWJS2QX HMAS6XEEZO4ZSN5GJ35 QS HCBGDF", "7HOQ7TMN7 QLN0QP 74 9GU4F NAGXZQKVTXVBMY TTOK99GMF", "F 3JOS42DP70X S3VFCCHAEXKWWB51J9VW HQ8 TVCS09MWAV ", "2LZD49NCERQB3L9Q41"};
    vector<string> games = {"VT6KYX YA7YBYHMT2YK5N 2P2SKFWLAXTG 4Q1QHU2O1R5O1A9", "UPS NL7PFRZC3MO8C87 5N6HI AJRJ968OC6Q9IVOO UGZC3R4", "SAN4DF5 6O5YLBIWOWTC 6G74B7PBVI0Z6JM33PJ MRUDTJCO5", "UOEYJY DJBEC6UR4C Q54S XKO76BYE7N 0LL6J2 UI8J87QFD", "K3YBVKT1S2 ALG9W 8G31KY25A 5I4Q4FH1PKCPMET II7FCJO", "83C7GQZ9ND AJRJ968OC6Q9IVOO U84QBF6LP9LHXY5O 78W U", "TIHOFMBWKN 8XR3 7NAWJCYC K0L3ZSMM340DNL3A2R9 QLN0Q", "P K0L3ZSMM340DNL3A2R9 GUR M40A9Z 8HKH3EOUM36OUATI ", "5VC QKQ0W51DXV2S 26X39Y23KV78 ORI2KBU6D6TSXC0EL H0", "X3TJ 0LL6J2 96A44Y6CRF0BNYG8Q0 9GU4F FHOZ HMAS6XEE", "ZO4ZSN5GJ35 I0PNFAJ71H8B0ZQ87 XPY9RT DJBEC6UR4C 8S", "M26W8X1POVJ5VK ME A1B I0PNFAJ71H8B0ZQ87 9B4FZO9EU ", "VSD2 WLHJEE04ZQ UXMPJIS03VK7KOIO5F 3X6GHA2X9ZX4EB2", "1M TRTU6XN 3HEML3 6O5YLBIWOWTC QXO5FITL6BEV8J LOZR", "W M0YL ALG9W TVCS09MWAV GUR HKGGIACJSL9Z4JF84WS7 V", "RABTXV32VOJ3TH R2F NL7PFRZC3MO8C87 9G3SZ72QPLB8MP0", "C5B VT6KYX QEH8YO7EGVVPKRYA5M FHOZ LOZRW I0PNFAJ71", "H8B0ZQ87 HCBGDF7HOQ7TMN7 SRT4CYIT9UZYTXJS3Z VT6KYX", " B7P5D NAGXZQKVTXVBMY MRUDTJCO5UOEYJY HQ8 M0YL K30", "846FB1KO14 1NPQ G7NGUAJ1QDQJRGM2GK9 AFMNJTPCO9 YUG", "12AWATDO1QB0Z 2P2SKFWLAXTG 3M459QZU76RTB 96A44Y6CR", "F0BNYG8Q0 AJRJ968OC6Q9IVOO RU91I35UK162M3NO VAZUW ", "O5975QHU37 9JXS04GGTOU90N A1B 4K8VV6YE K0L3ZSMM340", "DNL3A2R9 XK5VY6SX MI633AZK4K OPLZ QMV21GE RW5P2UKA", "5NO13HRD TRTU6XN BB4AX876O3779B3W EM0BB1CN 26X39Y2", "3KV78 EI34RR6J2 QS XPY9RT H5Z RU91I35UK162M3NO TTO", "K99GMFF 9B4FZO9EU 69KN5390SVIKUAIN YA7YBYHMT2YK5N ", "V3IN6WM42MVYO1H57V LOZRW IYFXBTVJIMMTP4NLUS NL7PFR", "ZC3MO8C87 2LZD49NCERQB3L9Q41 RU91I35UK162M3NO 6O5Y", "LBIWOWTC 96A44Y6CRF0BNYG8Q0 RXRUO4 XK5VY6SX Z7WMDU", "7PDDGPIUCK3KEG SRT4CYIT9UZYTXJS3Z Z1A2I5W1VDX9IFLV", "2P 9B4FZO9EU RCMNYB EI34RR6J2 M40A9Z INYKJLDHETBNN", "4 VRABTXV32VOJ3TH QKQ0W51DXV2S D7BV6E8DYW8S45WI 78", "W APXKUC9WF RCMNYB 16CVFKNE6 ME S3VFCCHAEXKWWB51J9", "VW EI34RR6J2 Q54S B7P5D TRTU6XN M40A9Z AFMNJTPCO9 ", "B7P5D 8XR3 NLVE0NIK94GB 1NPQ 5N6HI WPI3NHR WPI3NHR", " LPEK MI633AZK4K VSD2 U84QBF6LP9LHXY5O 6VJG1SF3 VA", "ZUW AFBBQEUGKC9FAXEPR UTIHOFMBWKN 5RMWJSJ GUR ZPDF", "ROGCN5SK5VZ 3HEML3 J2NSJE SRT4CYIT9UZYTXJS3Z 3JOS4", "2DP70X H0X3TJ 7AFC204G9G3P3AAMI5 EM0BB1CN E7NZEN1A", "8 C4 H1IWGF6JS MRUDTJCO5UOEYJY 78W 9G3SZ72QPLB8MP0", "C5B FN2ILAOL 5N6HI 856GYBWXN7J1S4987 RXRUO4 PB01AL", "5PV B6ZLUC8 71W9S4T0K K3C9P2E1CGIDY O5975QHU37 UXM", "PJIS03VK7KOIO5F B6ZLUC8 Z1A2I5W1VDX9IFLV2P VS5CXA ", "INYKJLDHETBNN4 L7ECXPAYAFWJS2QX 5VC IDAIG1A 8G31KY", "25A OUYQO0BVEJ8EH7FQM ME 2P2SKFWLAXTG NLVE0NIK94GB", " 7981MOG ZPDFROGCN5SK5VZ 189LAFCS8CSUV8P19 ALG9W 5", "VC FHOZ QMV21GE K3C9P2E1CGIDY 5I4Q4FH1PKCPMET 6G74", "B7PBVI0Z6JM33PJ MTFTVR635I8M O5975QHU37 C4 3M459QZ", "U76RTB VZZQ K3C9P2E1CGIDY 74"};
    vector<int> seeds = {25, 126};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NLVE0NIK94GB", "TVCS09MWAV"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> teams = {"V2XABM YH3CDLA2775FH2DZY8T6 4BAHGZXCE9L054PZV85U S", "9C0LYVJT9GHVGV I6AWKZE 9G1ACOMV5RYCG1TQX K7DUG4RC2", "XIACCF2PEIE YH9VJBJ2WY"};
    vector<string> games = {"V2XABM YH3CDLA2775FH2DZY8T6 S9C0LYVJT9GHVGV I6AWKZ", "E 4BAHGZXCE9L054PZV85U 9G1ACOMV5RYCG1TQX YH3CDLA27", "75FH2DZY8T6 4BAHGZXCE9L054PZV85U V2XABM S9C0LYVJT9", "GHVGV YH3CDLA2775FH2DZY8T6 K7DUG4RC2XIACCF2PEIE V2", "XABM YH9VJBJ2WY"};
    vector<int> seeds = {3, 0, 2, 2, 5, 5, 6, 3, 4, 7, 0, 3, 5, 7, 5, 2, 2, 1, 3, 0, 3, 5, 5, 2, 3, 1, 0, 3, 4, 5, 5};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S9C0LYVJT9GHVGV", "V2XABM", "4BAHGZXCE9L054PZV85U", "4BAHGZXCE9L054PZV85U", "9G1ACOMV5RYCG1TQX", "9G1ACOMV5RYCG1TQX", "K7DUG4RC2XIACCF2PEIE", "S9C0LYVJT9GHVGV", "I6AWKZE", "YH9VJBJ2WY", "V2XABM", "S9C0LYVJT9GHVGV", "9G1ACOMV5RYCG1TQX", "YH9VJBJ2WY", "9G1ACOMV5RYCG1TQX", "4BAHGZXCE9L054PZV85U", "4BAHGZXCE9L054PZV85U", "YH3CDLA2775FH2DZY8T6", "S9C0LYVJT9GHVGV", "V2XABM", "S9C0LYVJT9GHVGV", "9G1ACOMV5RYCG1TQX", "9G1ACOMV5RYCG1TQX", "4BAHGZXCE9L054PZV85U", "S9C0LYVJT9GHVGV", "YH3CDLA2775FH2DZY8T6", "V2XABM", "S9C0LYVJT9GHVGV", "I6AWKZE", "9G1ACOMV5RYCG1TQX", "9G1ACOMV5RYCG1TQX"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> teams = {"TBMLXV8KV P44P5V7EKX5P XFBRHYY45UOVS0E LIAG81H 3DX", "AAMFKWF0FWIYS4RCR YL3J WJJC FAMS 8C1ZDW7DIH VJFN8N", "1SBX OT6GN02NL5BUQF0B CZMNW2MKV 72W4 XS3Z1N7I PORS", " EYUL8 LRQ0HBVA0Q6GUW1O9TJ 4LVHLSY RJN6DEHLSAPP6GE", "4821 QQ06XLUN2AKOC3JPEADD GO0CBDTJ6D8X523IS 53SLBJ", "SD 52AL3AX7IMXZ778GYEV X7PVR647YFZIYSBZY3 U4A 74PE", "9HJ1MJ9LH8L5 EF0NO8CCH 6X5YE PMOSLXJW83UV0DCMZ18 H", "FL52LESA7XO3 P24ZA 0S8HWXITG18SVH38AQG 74RZMBTX4B ", "L6X7RGA6LFIVFN1TBT57 8UG6U8HRML88FQ D4ZHY2HHDLW383", "TRQ1 IRNQ4ME6BY 2ESNPQ4ETJWHL21Z LH507LW AWVEF 2UL", "6Z DV37GYQ1L1 U4K W7WBW0NVWJVKDET VMFDY0LUN4R9 WCL", "GWB 7DL0O 2HOKB96QL N8R78VLU6Y 9PW428P17405G6RI8 8", "BEYZJIONA NXVDZ YUU9N4I YMKOKA7O6F2TTVU7A WDVD 7L ", "I43VU37B6IJLGZFRC 1DZOLXSRY8BQPU0EHJX4 3J MV68XPBB", "3EE5NESI2N RU1NZ9YAI1AWY H5N3CSNVGS28DNEUY YWXN436", "ESZ3OWZVK VBEZL40N1EQF LYC02X8N89N 30J2SR98RM 5EVD", "43PQ6 NGS8 W5CMMFQZFLIZZ KZ3SA8J67JU26OMTYAMI MHU8", "ULWNGJ4QAPWZ8PCH 0YGQZ4HP0WO85GPS8S X2KDJIY6N 0M2B", "2U EZT9IC2HC95A5ZPBZ W5AFJGVK63B2K03O NYJ1X H3OUMM", "TJFHHP1ICYQP3 FT4BHKZEFIZT40PH9IG JYUGAN Q4YZFBVST", "G2S2AS3IU46 HRC 7B1H5MVA9IAFFC8XG2 8V1MFK3Q3CBKR0I", "HBT UUG2E 0H2892VQMROCC42Y0 WWEQ374GCBJCOV1M D6Z97", "ARWY3TX3ZVX QIZZ1WTBD8MFPN ST0GK L3KAKOW72ZGEJO2K ", "K1QS4SAN XTVHSMHLQF6ZV M9 KDFT1QY62QHNJF L6EBRTM9D", "CR1SA50E 4N7OZMSDJ ZFB JD7V5AHBK426L64C 2ZHOTU U4K", "ZO8BD 4O9NDRCR6P08ANWTBC0 8729T RMH7VYO108M2GZ8AGO", " L46GLH4H ABX42UQFT0LGLPMAI7 6TIMKD9BRWJXR1I S1Z7Y", "NN43 SV13RLH50EU72RIWMUL I3SW6 X6XZSJGQDQZ46K12 1U", "S9 BTEH1OMIED PL8XCYCNK0EFVIA GWMY0474R5T7C 77PZXI", "FC73 9R22LB8F 97XT24W60QXH8QMG PR9H9JZN8 1Z970DTR4", "K1N6352X1GR JPAH1DT52 U23NOLBO77SPH3XU7 JY9SKT106M", "TJ8HNTC8XS S1DTAAC UZO80JJAYEJU KHQOO1WPQ W8SVLXD6", "LLACAEEHPWLM 3TWQ14"};
    vector<string> games = {"LIAG81H PMOSLXJW83UV0DCMZ18 XS3Z1N7I 8BEYZJIONA YL", "3J JY9SKT106MTJ8HNTC8XS 6X5YE U4KZO8BD 1DZOLXSRY8B", "QPU0EHJX4 MHU8ULWNGJ4QAPWZ8PCH 7DL0O HRC 3DXAAMFKW", "F0FWIYS4RCR S1DTAAC 8C1ZDW7DIH 7L L6X7RGA6LFIVFN1T", "BT57 KDFT1QY62QHNJF 9PW428P17405G6RI8 FT4BHKZEFIZT", "40PH9IG XS3Z1N7I GWMY0474R5T7C 3J KZ3SA8J67JU26OMT", "YAMI P44P5V7EKX5P YWXN436ESZ3OWZVK 8UG6U8HRML88FQ ", "M9 U4K 0H2892VQMROCC42Y0 52AL3AX7IMXZ778GYEV DV37G", "YQ1L1 U4A RMH7VYO108M2GZ8AGO OT6GN02NL5BUQF0B YMKO", "KA7O6F2TTVU7A MV68XPBB3EE5NESI2N W5CMMFQZFLIZZ WCL", "GWB 7B1H5MVA9IAFFC8XG2 LRQ0HBVA0Q6GUW1O9TJ 1US9 AW", "VEF QIZZ1WTBD8MFPN CZMNW2MKV 9R22LB8F 74PE9HJ1MJ9L", "H8L5 8729T YWXN436ESZ3OWZVK 30J2SR98RM TBMLXV8KV 0", "S8HWXITG18SVH38AQG 53SLBJSD U4K YMKOKA7O6F2TTVU7A ", "EZT9IC2HC95A5ZPBZ 72W4 77PZXIFC73 2UL6Z D6Z97ARWY3", "TX3ZVX XFBRHYY45UOVS0E HFL52LESA7XO3 VBEZL40N1EQF ", "LYC02X8N89N IRNQ4ME6BY K1QS4SAN 74RZMBTX4B L6EBRTM", "9DCR1SA50E 0S8HWXITG18SVH38AQG 74RZMBTX4B 6X5YE IR", "NQ4ME6BY 8BEYZJIONA H3OUMMTJFHHP1ICYQP3 WJJC 1DZOL", "XSRY8BQPU0EHJX4 X7PVR647YFZIYSBZY3 L46GLH4H QQ06XL", "UN2AKOC3JPEADD VMFDY0LUN4R9 7L X2KDJIY6N VJFN8N1SB", "X PR9H9JZN8 YL3J 3J 74PE9HJ1MJ9LH8L5 LH507LW LIAG8", "1H RU1NZ9YAI1AWY P24ZA ZFB PMOSLXJW83UV0DCMZ18 2ZH", "OTU PORS 9PW428P17405G6RI8 4LVHLSY 7DL0O WJJC U23N", "OLBO77SPH3XU7 OT6GN02NL5BUQF0B 97XT24W60QXH8QMG HF", "L52LESA7XO3 JD7V5AHBK426L64C LH507LW ST0GK H5N3CSN", "VGS28DNEUY 5EVD43PQ6 3DXAAMFKWF0FWIYS4RCR MV68XPBB", "3EE5NESI2N TBMLXV8KV VBEZL40N1EQF VJFN8N1SBX WDVD ", "LRQ0HBVA0Q6GUW1O9TJ 2HOKB96QL PORS PL8XCYCNK0EFVIA", " N8R78VLU6Y JYUGAN GO0CBDTJ6D8X523IS S1Z7YNN43 52A", "L3AX7IMXZ778GYEV ABX42UQFT0LGLPMAI7 RJN6DEHLSAPP6G", "E4821 I3SW6 RJN6DEHLSAPP6GE4821 WCLGWB 8C1ZDW7DIH ", "1Z970DTR4K1N6352X1GR 0S8HWXITG18SVH38AQG 4N7OZMSDJ", " FAMS I43VU37B6IJLGZFRC W7WBW0NVWJVKDET UUG2E RU1N", "Z9YAI1AWY NGS8 D4ZHY2HHDLW383TRQ1 XTVHSMHLQF6ZV P4", "4P5V7EKX5P W8SVLXD6LLACAEEHPWLM WDVD 0M2B2U VMFDY0", "LUN4R9 8V1MFK3Q3CBKR0IHBT QQ06XLUN2AKOC3JPEADD SV1", "3RLH50EU72RIWMUL TBMLXV8KV 3TWQ14 NXVDZ NYJ1X HFL5", "2LESA7XO3 8UG6U8HRML88FQ 53SLBJSD 6TIMKD9BRWJXR1I ", "PMOSLXJW83UV0DCMZ18 D4ZHY2HHDLW383TRQ1 DV37GYQ1L1 ", "WWEQ374GCBJCOV1M EF0NO8CCH 2ESNPQ4ETJWHL21Z EF0NO8", "CCH 4O9NDRCR6P08ANWTBC0 I43VU37B6IJLGZFRC 0YGQZ4HP", "0WO85GPS8S 2HOKB96QL Q4YZFBVSTG2S2AS3IU46 72W4 NXV", "DZ XFBRHYY45UOVS0E KHQOO1WPQ EYUL8 BTEH1OMIED YUU9", "N4I W5AFJGVK63B2K03O LIAG81H UZO80JJAYEJU 4LVHLSY ", "X6XZSJGQDQZ46K12 XFBRHYY45UOVS0E H5N3CSNVGS28DNEUY", " P44P5V7EKX5P P24ZA GO0CBDTJ6D8X523IS W7WBW0NVWJVK", "DET EYUL8 N8R78VLU6Y FAMS JPAH1DT52 U4A AWVEF 2ESN", "PQ4ETJWHL21Z L3KAKOW72ZGEJO2K P24ZA L6X7RGA6LFIVFN", "1TBT57 CZMNW2MKV YUU9N4I X7PVR647YFZIYSBZY3 2UL6Z"};
    vector<int> seeds = {26, 28, 33, 96, 107};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"U4A", "WJJC", "8BEYZJIONA", "JY9SKT106MTJ8HNTC8XS", "S1Z7YNN43"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> teams = {"NJ11KG07SV S8GLSEMB D4JF5 N6TRTYIR2EQEHT FIYI4N6E6", "Q 0TZKTUKA67N0MXUBHO JLS4U MZZN9ODIU69F N0BHM9YE98", " YI6N7K UELQ0YL KR67RL OZUKL2MAKC4 1NYCB7WPK5VHKKC", "DMYQ1 6443Q6RNGMZHQQQ0ZL OUVGWDDOTM"};
    vector<string> games = {"S8GLSEMB JLS4U N6TRTYIR2EQEHT FIYI4N6E6Q NJ11KG07S", "V OUVGWDDOTM D4JF5 1NYCB7WPK5VHKKCDMYQ1 JLS4U YI6N", "7K NJ11KG07SV S8GLSEMB D4JF5 0TZKTUKA67N0MXUBHO N6", "TRTYIR2EQEHT OZUKL2MAKC4 FIYI4N6E6Q KR67RL MZZN9OD", "IU69F N0BHM9YE98 NJ11KG07SV N6TRTYIR2EQEHT S8GLSEM", "B 6443Q6RNGMZHQQQ0ZL NJ11KG07SV MZZN9ODIU69F 0TZKT", "UKA67N0MXUBHO UELQ0YL S8GLSEMB D4JF5"};
    vector<int> seeds = {14, 6, 9, 0, 9, 15, 9, 10, 12, 3, 6, 5, 0, 5, 7, 0, 13, 14, 1, 5};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6443Q6RNGMZHQQQ0ZL", "JLS4U", "YI6N7K", "NJ11KG07SV", "YI6N7K", "OUVGWDDOTM", "YI6N7K", "UELQ0YL", "OZUKL2MAKC4", "N6TRTYIR2EQEHT", "JLS4U", "0TZKTUKA67N0MXUBHO", "NJ11KG07SV", "0TZKTUKA67N0MXUBHO", "MZZN9ODIU69F", "NJ11KG07SV", "1NYCB7WPK5VHKKCDMYQ1", "6443Q6RNGMZHQQQ0ZL", "S8GLSEMB", "0TZKTUKA67N0MXUBHO"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> teams = {"ZOIWXNJZZJINJDKM4U M4 VQLN7I18FDS9M0KQLQ 4U2KVI9GL", "HTFSHW6R 9K1IW5NY E37Y7OVBRCB6B36JT AF79EDX1F0CK1M", "RH PXQ8SSXEG03X7 Q81E1QX4G5V5NZN 4S8 V72UD OWQNB27", "1JOO2FG7Q 1XJV9DFNHQFT2CPM 285JIF 3D DLP597CVQ9J92", "5RO9ZY UJUDEC5 YBS2SKY6DHJQW5IKC66 P60TSEE4UOAEKZ6", "H DILQWRKG8FBIG8X725A 43JD9GSXWU 1F 6UYR5VR QO285P", "KYX9PK5RC YYMKGZN1H3NB6XPS4 KJAWSQIWOH ZBTRJJH2TSK", "A 3Z5Q70Z0KGLK9TD1L 536NDJ6G2O7EXFL BA5IMEB7S 03BS", "P0OTDF7C1X7 KRY9XD OA5T7WG AOLEG0FY9I XOH5DLIFYI4 ", "LTNUDC98 C6EFZ2PR98HGOPU RX7R8AK0UV0S9Q2WNTEJ H8ZC", "9 QSYVSXN F02E SVVNUK O762S107EPDAWKJHHCLS 21O0YQZ", "A FXG3X1SXX3GXQ06N5 VTI6K66BPFH52JMYE HN5 KMP4X7LV", "7 I5 RHJ665EKOH3A1PZ6 HIFUL2LOZII62F739N PKOM8W3 6", "0YEMFVV3PUNI6TYAWQ 674 DLXBI8JNMLIUYVY37F6E KWEKEX", "6DRFPOA WXSFPPVJP14V4XW OE UVCQ5UK9OVHIWX9NR PUG5C", " IHMLPTC29OZ2I8D 6NTLX1BR69S FQN66OJLD63 NYWSSNQ33", "3UF95E7 K5F294IH1HVV73VDOZU C67XS7L4DE 0G8A6YPDH90", "THB16N3 EIQ HH94PYO77ZKA1V 55FKYYPFXPGV1FQ 41J8M F", "2AJTPUL47GJB99L 29SABBTVSI B18A68EBO61U H7 4HSK2TV", "Z30GCXJ4WS RCCIS72WDHUZP CNKQ3CEA8H3WRR8UVO WTZAVS", "B4CI0EQD KNI261X W1VEGNT1KWLWZR2Y 5FENXWS4Z4J LI1B", " J1G1FL8QCOS FP9RC9R19Q0I5WFOA XAOB2A4 ZCIS3STIF5V", "EEK3MP TDOFFNHM25CKJ0NP 07SE27 61XGS9A SDLFNBRRTUI", "XNZJXPF0 V0IY2LVJ2JS I9GIJK8M402C T8SZQ7X4EF077WSI", "VDA P12J R1D7ETLAD5S4RI1 MNTY57WAVODWAE6F1 6SLWZLU", "UNX ADV4R03LS84MMZ25 ETSJC7KLFFFQ6BF31 NO7UOVP7OAS", "OXPDO2Y FAOWFD Z8EW2ZAI MY80UZU023PS Y1A1FPBM70NW0", "XXNA 070VMJZG6R 1RZ1MEXB WBA AGUQXXD5II W5NMUB AT6", "KY001RTRFHDOSE3 UE6C7E3XDY7FW39KL Y2WM08XW5KFVSGP ", "P0HTTWYI7MOMPAZB 048663JNZ UDBG7 0H4CCPFMG8U5WDRNC", "MM 7INGP81EU7Z19AF9 JSK B0HEK9945FU1WZTM 7N5N963PW", "PEN1D4XRXK X4AX7U9HV1YFTHKSYX E1RS2EX R3EUB4LW87WA", "KOVS PY6LDDDKUI0O4C 5GMNJ IBOUVYUS EOQVCJI9LK1CH4Q"};
    vector<string> games = {"V72UD 7INGP81EU7Z19AF9 QSYVSXN 07SE27 6NTLX1BR69S ", "0G8A6YPDH90THB16N3 AF79EDX1F0CK1MRH OE PXQ8SSXEG03", "X7 WXSFPPVJP14V4XW E37Y7OVBRCB6B36JT UVCQ5UK9OVHIW", "X9NR YYMKGZN1H3NB6XPS4 MY80UZU023PS ZOIWXNJZZJINJD", "KM4U NYWSSNQ333UF95E7 1XJV9DFNHQFT2CPM UDBG7 4U2KV", "I9GLHTFSHW6R PY6LDDDKUI0O4C QO285PKYX9PK5RC Y1A1FP", "BM70NW0XXNA YBS2SKY6DHJQW5IKC66 HN5 C6EFZ2PR98HGOP", "U V0IY2LVJ2JS DLP597CVQ9J925RO9ZY Y2WM08XW5KFVSGP ", "VQLN7I18FDS9M0KQLQ 5GMNJ 9K1IW5NY PUG5C 4S8 JSK 67", "4 H7 RHJ665EKOH3A1PZ6 WTZAVSB4CI0EQD M4 FQN66OJLD6", "3 3Z5Q70Z0KGLK9TD1L C6EFZ2PR98HGOPU DLXBI8JNMLIUYV", "Y37F6E B18A68EBO61U V72UD 674 OA5T7WG R1D7ETLAD5S4", "RI1 OWQNB271JOO2FG7Q 60YEMFVV3PUNI6TYAWQ HN5 5FENX", "WS4Z4J WXSFPPVJP14V4XW F2AJTPUL47GJB99L AOLEG0FY9I", " P12J HIFUL2LOZII62F739N CNKQ3CEA8H3WRR8UVO QO285P", "KYX9PK5RC F02E H8ZC9 61XGS9A ZBTRJJH2TSKA RX7R8AK0", "UV0S9Q2WNTEJ YYMKGZN1H3NB6XPS4 QSYVSXN XOH5DLIFYI4", " T8SZQ7X4EF077WSIVDA ZOIWXNJZZJINJDKM4U KRY9XD KRY", "9XD MNTY57WAVODWAE6F1 536NDJ6G2O7EXFL ETSJC7KLFFFQ", "6BF31 BA5IMEB7S ADV4R03LS84MMZ25 KJAWSQIWOH Z8EW2Z", "AI Q81E1QX4G5V5NZN KWEKEX6DRFPOA M4 IBOUVYUS FXG3X", "1SXX3GXQ06N5 J1G1FL8QCOS Q81E1QX4G5V5NZN B0HEK9945", "FU1WZTM 1F O762S107EPDAWKJHHCLS PKOM8W3 RCCIS72WDH", "UZP P60TSEE4UOAEKZ6H W5NMUB LTNUDC98 I9GIJK8M402C ", "OE 41J8M 9K1IW5NY R3EUB4LW87WAKOVS DLP597CVQ9J925R", "O9ZY I5 PXQ8SSXEG03X7 7N5N963PWPEN1D4XRXK 43JD9GSX", "WU 21O0YQZA I5 KNI261X 285JIF HIFUL2LOZII62F739N K", "JAWSQIWOH H8ZC9 NYWSSNQ333UF95E7 K5F294IH1HVV73VDO", "ZU ZBTRJJH2TSKA FAOWFD 21O0YQZA FP9RC9R19Q0I5WFOA ", "43JD9GSXWU WBA 03BSP0OTDF7C1X7 6SLWZLUUNX F02E TDO", "FFNHM25CKJ0NP ZOIWXNJZZJINJDKM4U EOQVCJI9LK1CH4Q P", "60TSEE4UOAEKZ6H VTI6K66BPFH52JMYE E37Y7OVBRCB6B36J", "T E1RS2EX O762S107EPDAWKJHHCLS XAOB2A4 3D RHJ665EK", "OH3A1PZ6 4S8 DLXBI8JNMLIUYVY37F6E KMP4X7LV7 W1VEGN", "T1KWLWZR2Y 536NDJ6G2O7EXFL LTNUDC98 285JIF 048663J", "NZ UJUDEC5 UE6C7E3XDY7FW39KL KRY9XD OA5T7WG OWQNB2", "71JOO2FG7Q 0H4CCPFMG8U5WDRNCMM 60YEMFVV3PUNI6TYAWQ", " 4HSK2TVZ30GCXJ4WS VQLN7I18FDS9M0KQLQ 6NTLX1BR69S ", "3Z5Q70Z0KGLK9TD1L NO7UOVP7OASOXPDO2Y 1F 1RZ1MEXB 4", "U2KVI9GLHTFSHW6R IHMLPTC29OZ2I8D KWEKEX6DRFPOA 29S", "ABBTVSI 6UYR5VR SVVNUK UVCQ5UK9OVHIWX9NR 55FKYYPFX", "PGV1FQ AF79EDX1F0CK1MRH X4AX7U9HV1YFTHKSYX DILQWRK", "G8FBIG8X725A AGUQXXD5II 1XJV9DFNHQFT2CPM PKOM8W3 Y", "BS2SKY6DHJQW5IKC66 AT6KY001RTRFHDOSE3 UJUDEC5 KMP4", "X7LV7 PUG5C HH94PYO77ZKA1V RX7R8AK0UV0S9Q2WNTEJ SD", "LFNBRRTUIXNZJXPF0 VTI6K66BPFH52JMYE LI1B SVVNUK ZC", "IS3STIF5VEEK3MP FQN66OJLD63 C67XS7L4DE 3D P0HTTWYI", "7MOMPAZB BA5IMEB7S XOH5DLIFYI4 6UYR5VR 070VMJZG6R ", "DILQWRKG8FBIG8X725A FXG3X1SXX3GXQ06N5 03BSP0OTDF7C", "1X7 AOLEG0FY9I IHMLPTC29OZ2I8D EIQ"};
    vector<int> seeds = {97, 1, 102, 92, 53, 107, 59, 100, 73, 109, 60, 8, 37, 61, 88, 77, 76, 41, 56, 10, 73, 88, 113, 73};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MY80UZU023PS", "1F", "Y1A1FPBM70NW0XXNA", "0G8A6YPDH90THB16N3", "SVVNUK", "IBOUVYUS", "RHJ665EKOH3A1PZ6", "7INGP81EU7Z19AF9", "I9GIJK8M402C", "E1RS2EX", "HIFUL2LOZII62F739N", "4U2KVI9GLHTFSHW6R", "KMP4X7LV7", "PKOM8W3", "29SABBTVSI", "T8SZQ7X4EF077WSIVDA", "41J8M", "VTI6K66BPFH52JMYE", "DLXBI8JNMLIUYVY37F6E", "6UYR5VR", "I9GIJK8M402C", "29SABBTVSI", "AGUQXXD5II", "I9GIJK8M402C"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> teams = {"BHID6YFBHJ6TO A247 6ZZSAB50BTB HB0ZPWVQGM32 BTZ1GH", " PK9 J9Q92C0 894310SXE 7EYKIIRZU 47IJ6 VZGSYLVT2PD", "O37QBNF YJJHVOH7TQSD5G1NX LPG6T N65JGV1 SHPA1BYFI0", "92 S01SP77SO1N VMQ1M3NO0CQX9M ZMT0T1N63TYNIK 4DZNI", "MTEA5 110HKZAAT8N NW32N E9Z2TLV3SWXF3P8K8ES W9CSL ", "0DXGH7DG6N ZJ91ZDA2ECUAXOLY FIRLPTSFLU5LVIQNZTY DR", "YCIB7QH N8PMYKU6ZFA G0ZOG2Q VHA73N1CEXICAJVZ0 XIKB", "QP1DI3O8 CDR TENQ8MLW2HU L67V5M1IH3 FM71BOIX I5W8V", " 4MSBRYWPY35O349O3FP O9 G7WKLL8EQ I7032LRLNW468XJ ", "557JE3P53HJOUJKI0LZQ VM0RLH9TBW9EXF8JB7YB PFL HYPP", "A3 61I89NQ PBJP53 W814ZUXZX 0ZH8KCH FGEBEZ5AK R6D ", "4E214UPW41XF7GEVCK NG3YLZF7 ZNFSCUGMTPVXZ80 GWEHJ4", "DSM J8228VR8F93FUJ7HX DNURK45IHCOY Y64 XZC YB8EX4W", "AW1RSGX0T 3HIABCDLD 6K0J8KUAGKY8LL6RODU A2T0FDU52A", "TIMI BNU4B6 8WPT8SIIXNHW998Q12J"};
    vector<string> games = {"0DXGH7DG6N 557JE3P53HJOUJKI0LZQ N65JGV1 4DZNIMTEA5", " 894310SXE ZJ91ZDA2ECUAXOLY 4DZNIMTEA5 PBJP53 DRYC", "IB7QH O9 NW32N HYPPA3 BHID6YFBHJ6TO CDR PK9 VZGSYL", "VT2PDO37QBNF W9CSL VM0RLH9TBW9EXF8JB7YB SHPA1BYFI0", "92 ZMT0T1N63TYNIK S01SP77SO1N VMQ1M3NO0CQX9M VZGSY", "LVT2PDO37QBNF GWEHJ4DSM ZMT0T1N63TYNIK W814ZUXZX B", "TZ1GH N8PMYKU6ZFA PK9 YB8EX4WAW1RSGX0T YJJHVOH7TQS", "D5G1NX ZNFSCUGMTPVXZ80 47IJ6 J8228VR8F93FUJ7HX A24", "7 BNU4B6 BTZ1GH YJJHVOH7TQSD5G1NX LPG6T NG3YLZF7 F", "IRLPTSFLU5LVIQNZTY G7WKLL8EQ BHID6YFBHJ6TO S01SP77", "SO1N VHA73N1CEXICAJVZ0 FM71BOIX YJJHVOH7TQSD5G1NX ", "NW32N BHID6YFBHJ6TO HB0ZPWVQGM32 S01SP77SO1N FGEBE", "Z5AK HB0ZPWVQGM32 BTZ1GH 47IJ6 W9CSL 894310SXE Y64", " J9Q92C0 47IJ6 BTZ1GH 3HIABCDLD LPG6T 110HKZAAT8N ", "N65JGV1 4E214UPW41XF7GEVCK CDR TENQ8MLW2HU 7EYKIIR", "ZU DNURK45IHCOY XIKBQP1DI3O8 L67V5M1IH3 HB0ZPWVQGM", "32 LPG6T ZJ91ZDA2ECUAXOLY I7032LRLNW468XJ 7EYKIIRZ", "U 0DXGH7DG6N J9Q92C0 FIRLPTSFLU5LVIQNZTY SHPA1BYFI", "092 R6D G0ZOG2Q I5W8V VZGSYLVT2PDO37QBNF E9Z2TLV3S", "WXF3P8K8ES A247 XIKBQP1DI3O8 E9Z2TLV3SWXF3P8K8ES P", "FL BHID6YFBHJ6TO 894310SXE PK9 DRYCIB7QH A247 J9Q9", "2C0 6ZZSAB50BTB PK9 6ZZSAB50BTB N65JGV1 BHID6YFBHJ", "6TO 8WPT8SIIXNHW998Q12J HB0ZPWVQGM32 6K0J8KUAGKY8L", "L6RODU HB0ZPWVQGM32 G0ZOG2Q A247 6ZZSAB50BTB N8PMY", "KU6ZFA 4MSBRYWPY35O349O3FP BHID6YFBHJ6TO A247 6ZZS", "AB50BTB A2T0FDU52ATIMI VMQ1M3NO0CQX9M 0ZH8KCH 8943", "10SXE 7EYKIIRZU J9Q92C0 XZC A247 SHPA1BYFI092 6ZZS", "AB50BTB VHA73N1CEXICAJVZ0 110HKZAAT8N 61I89NQ"};
    vector<int> seeds = {30, 55, 45, 59, 49, 36, 58, 25, 8, 6, 25, 47, 49, 9, 22, 37, 3, 54, 37, 52, 37, 42, 1, 55, 16, 7, 20, 6, 21, 41, 23, 63, 33, 27, 58, 37, 0, 11, 6, 46, 32, 60, 1, 23, 24};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XIKBQP1DI3O8", "DNURK45IHCOY", "PBJP53", "3HIABCDLD", "R6D", "4MSBRYWPY35O349O3FP", "YB8EX4WAW1RSGX0T", "FIRLPTSFLU5LVIQNZTY", "7EYKIIRZU", "J9Q92C0", "FIRLPTSFLU5LVIQNZTY", "0ZH8KCH", "R6D", "47IJ6", "W9CSL", "O9", "HB0ZPWVQGM32", "J8228VR8F93FUJ7HX", "O9", "ZNFSCUGMTPVXZ80", "O9", "PFL", "A247", "DNURK45IHCOY", "VMQ1M3NO0CQX9M", "894310SXE", "NW32N", "J9Q92C0", "E9Z2TLV3SWXF3P8K8ES", "VM0RLH9TBW9EXF8JB7YB", "0DXGH7DG6N", "8WPT8SIIXNHW998Q12J", "L67V5M1IH3", "N8PMYKU6ZFA", "YB8EX4WAW1RSGX0T", "O9", "BHID6YFBHJ6TO", "YJJHVOH7TQSD5G1NX", "J9Q92C0", "W814ZUXZX", "TENQ8MLW2HU", "6K0J8KUAGKY8LL6RODU", "A247", "0DXGH7DG6N", "ZJ91ZDA2ECUAXOLY"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> teams = {"H6AJQGR7F0LIE5QD O7HB0353MNQ9 FRNX C4PDOR7PAL8IPG ", "IW ARDQYNB0 6A2NMU7UP HYK F0LIK Q78FOQMYN8 K8X QBO", "C Z56A2X1IXHDDMFD7KX R93TBV4US5R7GIG66ZGI SXENKN E", "AUJSF97F26N5XG768 46YRBDCT4FVD DIDOPBUPPSP VLTOWS3", "0M20N OSZUFFCFK1RJJEATBZUO ES1UWG7OTNHFJIJTQ 1G041", "19YT6TC8 TOL Q90D06URQMJFUWUA0 JZM7JT7BP18NS5 Y2TE", "H7B9Y82 6U U7M AAE XB IGRJH09BCUS27FJ Y9Y1DI8OCI"};
    vector<string> games = {"O7HB0353MNQ9 SXENKN ARDQYNB0 6U HYK F0LIK C4PDOR7P", "AL8IPG IW FRNX R93TBV4US5R7GIG66ZGI K8X 1G04119YT6", "TC8 F0LIK Q90D06URQMJFUWUA0 H6AJQGR7F0LIE5QD Y9Y1D", "I8OCI FRNX XB IW QBOC HYK JZM7JT7BP18NS5 Q78FOQMYN", "8 TOL O7HB0353MNQ9 FRNX H6AJQGR7F0LIE5QD C4PDOR7PA", "L8IPG C4PDOR7PAL8IPG Z56A2X1IXHDDMFD7KX H6AJQGR7F0", "LIE5QD HYK QBOC ES1UWG7OTNHFJIJTQ SXENKN DIDOPBUPP", "SP R93TBV4US5R7GIG66ZGI VLTOWS30M20N O7HB0353MNQ9 ", "IGRJH09BCUS27FJ IW U7M EAUJSF97F26N5XG768 46YRBDCT", "4FVD FRNX ARDQYNB0 O7HB0353MNQ9 6A2NMU7UP 6A2NMU7U", "P Y2TEH7B9Y82 H6AJQGR7F0LIE5QD O7HB0353MNQ9 ARDQYN", "B0 K8X H6AJQGR7F0LIE5QD EAUJSF97F26N5XG768 Z56A2X1", "IXHDDMFD7KX OSZUFFCFK1RJJEATBZUO 6A2NMU7UP Q78FOQM", "YN8 C4PDOR7PAL8IPG AAE"};
    vector<int> seeds = {7, 23, 20, 5};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HYK", "Q90D06URQMJFUWUA0", "ES1UWG7OTNHFJIJTQ", "ARDQYNB0"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> teams = {"7FJEFPE8SCBR KAKM Y6JZMJ48B T4573I0NIGXJ15 QSMD3QN", "EBKO7BDW K4P 485EJE62YO 92K0O8EFSWQ 7JL6FYR6DZQYE2", "LGIX WMS4XBGSTGWBSTK J4HB WT5RJLTPOOSPYY F8924PRPE", "PG3J PMFVLXDUVKST8DX N14WI R7EIR8H QH7I 7GMFQKLG X", "L1SSTP60FB8S LQJKVHA134GHVOL 2IT R3QY2NPTOTDYH6 SC", "OADJ C0J8XWE 2E75AEBMGG25 L71RE7B8K2ZHPC 0R823N7VO", "FJ12 CM5DZ61CLERSQ9XE2K O8C5VH0ESJ8YX7 KC0QKSUSN45", "8MDL 875W7EBD2P 987 GBURXR XDX88RRW4 1WOR1CN5BPFPO", "MTU TPAIVGJOZNZLT1DQJ 0RTD9I2B ZM6X UO6LKDN8JI42FY", "MIP40 HBL6BBWSSPPM1KS91 0T3CHMA WLOLIXH047GURRA WM", "6R5L5KGKZANFI WR1VB NVVXMDQPHX3LUJ06GP3 8CL MZ T54", "ZWPP9XRSHDU PNVI2V2IYMO2SHKV1 22HG96 A8ZDBFBW1N6I4", "J5 8SOBE4 QQEQA89905L2YOI2OU J5LB ROS63CGI8YZNPLVC", "PO7 73YQIYOV3N OG6D7J L9W5Z N61TILK618YMYUYC7HD QS", "P88XRD139CKNY920 LNC8F3DLG2GUF3C XIR X8LC0Q9AKHBNA", "2YZXEVB N6EOZAEMSB3 PPI 0I1IC814T2V 2L KNLMK O7Y35", "SX322NKHVFN UQ5KO3S PCHDGZEC8RY6VS TOWN7SIUISBYD2K", "4IXRY QXUYGB 9E00O0Q ESCZRYC3CLTT1JV68 2KC5FIUNONM", "I W5 T9LGX5QXVV ZPSXI9ASMV7 P1BOATEGXHE YYJINLZAXL", "85D WPB3P KOX4DC3C WE24Q2GD1HJ1ZOU74X KUVO FKCL2BS", "J1 WUF9O0Q WKNDN8G6RXTAQ B1S7YPPUI27KRTB93X W0MTVR", "V5E X3MZCJGNHL9X5C6BY 6PBSJZDBEG BBJPYPD45Y 06U38M", "W3FV1O 2FSYP1P239A1SDJ IRFMO 37IEAK94ZP42RU3QCA4I ", "IREE13TAIHUFG 56FD9SKMES9M YGQNNN99QIAEIPZ5XE 35LB", "RX5MH66X UB6TT5U8F4EPHJ5 QZWQ41N6J36II9 7UO32F0D0W", "SG 5N4O60GGZ02TYBH L80HWIT05ZIYQMAKV JC 4M3ELG2QCO", "H TKT27TII7X 5DJ5V A378 T4IJ8EZY8IK DAJIV8VF0D2 S4", "QDLV3 O23LFGNZ926TJ 7OLP0ZO CC94OTUQACVHUXRY1N4 UA", "9MRC U5X G4B49P5U 8VYMWBL9 7L25J I2CP3REH2PL 8OYLX", "U4PK GJ5U29V TT6TJV8AGWD FOXI2BL8ACYFZY 1TEABN"};
    vector<string> games = {"XL1SSTP60FB8S 5DJ5V N14WI S4QDLV3 8CL KOX4DC3C KC0", "QKSUSN458MDL 56FD9SKMES9M LQJKVHA134GHVOL NVVXMDQP", "HX3LUJ06GP3 J4HB UA9MRC T4573I0NIGXJ15 LNC8F3DLG2G", "UF3C N61TILK618YMYUYC7HD UQ5KO3S LQJKVHA134GHVOL T", "KT27TII7X QSMD3QNEBKO7BDW 8OYLXU4PK 7FJEFPE8SCBR 1", "TEABN L71RE7B8K2ZHPC UO6LKDN8JI42FYMIP40 WMS4XBGST", "GWBSTK ROS63CGI8YZNPLVCPO7 92K0O8EFSWQ 2E75AEBMGG2", "5 485EJE62YO L9W5Z UO6LKDN8JI42FYMIP40 W0MTVRV5E 7", "FJEFPE8SCBR N6EOZAEMSB3 92K0O8EFSWQ OG6D7J PMFVLXD", "UVKST8DX O23LFGNZ926TJ QH7I T54ZWPP9XRSHDU 987 37I", "EAK94ZP42RU3QCA4I K4P I2CP3REH2PL CM5DZ61CLERSQ9XE", "2K 0RTD9I2B C0J8XWE 5N4O60GGZ02TYBH QH7I T4IJ8EZY8", "IK OG6D7J TOWN7SIUISBYD2K4IXRY QSMD3QNEBKO7BDW CM5", "DZ61CLERSQ9XE2K Y6JZMJ48B TT6TJV8AGWD F8924PRPEPG3", "J 7OLP0ZO XDX88RRW4 2FSYP1P239A1SDJ 7JL6FYR6DZQYE2", "LGIX G4B49P5U PMFVLXDUVKST8DX A8ZDBFBW1N6I4J5 73YQ", "IYOV3N QXUYGB KC0QKSUSN458MDL 1WOR1CN5BPFPOMTU GBU", "RXR IRFMO 8SOBE4 W5 R3QY2NPTOTDYH6 JC SCOADJ WLOLI", "XH047GURRA KAKM 875W7EBD2P 0R823N7VOFJ12 ZM6X LNC8", "F3DLG2GUF3C KNLMK J5LB ESCZRYC3CLTT1JV68 KAKM FOXI", "2BL8ACYFZY 92K0O8EFSWQ 8VYMWBL9 ROS63CGI8YZNPLVCPO", "7 9E00O0Q WM6R5L5KGKZANFI FKCL2BSJ1 7GMFQKLG MZ SC", "OADJ L80HWIT05ZIYQMAKV 2E75AEBMGG25 7UO32F0D0WSG N", "14WI 22HG96 HBL6BBWSSPPM1KS91 B1S7YPPUI27KRTB93X T", "PAIVGJOZNZLT1DQJ BBJPYPD45Y 0R823N7VOFJ12 UB6TT5U8", "F4EPHJ5 L71RE7B8K2ZHPC QZWQ41N6J36II9 WLOLIXH047GU", "RRA WUF9O0Q Y6JZMJ48B KC0QKSUSN458MDL R3QY2NPTOTDY", "H6 WM6R5L5KGKZANFI 1WOR1CN5BPFPOMTU 06U38MW3FV1O 4", "85EJE62YO L71RE7B8K2ZHPC 7GMFQKLG A378 T54ZWPP9XRS", "HDU YYJINLZAXL85D XL1SSTP60FB8S 8CL XIR 2L CM5DZ61", "CLERSQ9XE2K 35LBRX5MH66X QSP88XRD139CKNY920 O7Y35S", "X322NKHVFN K4P N61TILK618YMYUYC7HD 7JL6FYR6DZQYE2L", "GIX 73YQIYOV3N 7JL6FYR6DZQYE2LGIX C0J8XWE QQEQA899", "05L2YOI2OU 2KC5FIUNONMI WT5RJLTPOOSPYY CC94OTUQACV", "HUXRY1N4 F8924PRPEPG3J 8SOBE4 R7EIR8H DAJIV8VF0D2 ", "2E75AEBMGG25 HBL6BBWSSPPM1KS91 T4573I0NIGXJ15 GJ5U", "29V WMS4XBGSTGWBSTK U5X ZM6X X3MZCJGNHL9X5C6BY 485", "EJE62YO 7L25J L9W5Z PCHDGZEC8RY6VS 875W7EBD2P IREE", "13TAIHUFG QSMD3QNEBKO7BDW QSP88XRD139CKNY920 O8C5V", "H0ESJ8YX7 YGQNNN99QIAEIPZ5XE Y6JZMJ48B XIR X8LC0Q9", "AKHBNA2YZXEVB 0I1IC814T2V J4HB J5LB KAKM X8LC0Q9AK", "HBNA2YZXEVB 22HG96 ZPSXI9ASMV7 2IT WR1VB N6EOZAEMS", "B3 PPI 2IT 4M3ELG2QCOH 875W7EBD2P XDX88RRW4 R7EIR8", "H PNVI2V2IYMO2SHKV1 0T3CHMA WKNDN8G6RXTAQ WT5RJLTP", "OOSPYY QQEQA89905L2YOI2OU NVVXMDQPHX3LUJ06GP3 WE24", "Q2GD1HJ1ZOU74X MZ WPB3P C0J8XWE 0T3CHMA O8C5VH0ESJ", "8YX7 TPAIVGJOZNZLT1DQJ A8ZDBFBW1N6I4J5 T9LGX5QXVV ", "T4573I0NIGXJ15 O8C5VH0ESJ8YX7 K4P 0R823N7VOFJ12 WR", "1VB KUVO 7FJEFPE8SCBR 987 0RTD9I2B 6PBSJZDBEG PNVI", "2V2IYMO2SHKV1 P1BOATEGXHE 987 GBURXR"};
    vector<int> seeds = {3, 76, 105, 88, 39, 19, 51, 86, 84, 87, 75, 41, 76, 95, 38, 0, 80, 118, 51, 31, 101, 31, 61, 50, 88, 5, 18, 97, 0, 49, 101, 36, 67, 127, 113, 89, 91, 83, 95, 20, 90, 8, 106, 54, 108, 41, 65};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7GMFQKLG", "T9LGX5QXVV", "IREE13TAIHUFG", "WUF9O0Q", "WLOLIXH047GURRA", "QH7I", "A8ZDBFBW1N6I4J5", "2FSYP1P239A1SDJ", "FKCL2BSJ1", "X3MZCJGNHL9X5C6BY", "ZPSXI9ASMV7", "XDX88RRW4", "T9LGX5QXVV", "KOX4DC3C", "ROS63CGI8YZNPLVCPO7", "2IT", "06U38MW3FV1O", "FOXI2BL8ACYFZY", "A8ZDBFBW1N6I4J5", "XL1SSTP60FB8S", "7UO32F0D0WSG", "XL1SSTP60FB8S", "N6EOZAEMSB3", "QSP88XRD139CKNY920", "WUF9O0Q", "92K0O8EFSWQ", "CM5DZ61CLERSQ9XE2K", "QZWQ41N6J36II9", "2IT", "LNC8F3DLG2GUF3C", "7UO32F0D0WSG", "0T3CHMA", "WPB3P", "4M3ELG2QCOH", "GJ5U29V", "9E00O0Q", "WKNDN8G6RXTAQ", "YYJINLZAXL85D", "KOX4DC3C", "R3QY2NPTOTDYH6", "B1S7YPPUI27KRTB93X", "K4P", "DAJIV8VF0D2", "X8LC0Q9AKHBNA2YZXEVB", "T4IJ8EZY8IK", "XDX88RRW4", "PCHDGZEC8RY6VS"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> teams = {"AIK515YEFA PF99DFCQ6C0F4J6T1 IDVHY2R4A80BJ 6KSWC 8", "W79DFP5XB7G 0F7FMTJEH64K 5M MY45CKIXV"};
    vector<string> games = {"AIK515YEFA PF99DFCQ6C0F4J6T1 6KSWC 8W79DFP5XB7G PF", "99DFCQ6C0F4J6T1 5M PF99DFCQ6C0F4J6T1 IDVHY2R4A80BJ", " AIK515YEFA MY45CKIXV IDVHY2R4A80BJ 0F7FMTJEH64K A", "IK515YEFA 6KSWC"};
    vector<int> seeds = {0, 1, 5, 3, 5, 2, 6, 0, 0, 6, 7, 4, 1, 0, 2, 7, 5, 2, 3, 5, 0, 0, 2, 5, 1, 6, 2, 6, 6};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AIK515YEFA", "PF99DFCQ6C0F4J6T1", "0F7FMTJEH64K", "6KSWC", "0F7FMTJEH64K", "IDVHY2R4A80BJ", "5M", "AIK515YEFA", "AIK515YEFA", "5M", "MY45CKIXV", "8W79DFP5XB7G", "PF99DFCQ6C0F4J6T1", "AIK515YEFA", "IDVHY2R4A80BJ", "MY45CKIXV", "0F7FMTJEH64K", "IDVHY2R4A80BJ", "6KSWC", "0F7FMTJEH64K", "AIK515YEFA", "AIK515YEFA", "IDVHY2R4A80BJ", "0F7FMTJEH64K", "PF99DFCQ6C0F4J6T1", "5M", "IDVHY2R4A80BJ", "5M", "5M"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> teams = {"0KL I64AQ0XEK 6994Q21W 6Q4XUB CSLX1VA1W 2M6YBD8BBW", "MKHY7QPQB Z7LK7IJNSWA9MIYRM Q2R8 HKOKYFYDXOO30Q27 ", "9KWQ5J BMPEQK7WJTJGC FYM5VM1 U9UL89JGUOFIUM7J UWXM", "FT2P8NB8272PTK 0OFEEDV3IKW3QAA 6PD3TM41KKEAN38 075", "4F VH8ZEXN8IOXVNWAG 4UI27ORA2LXEH9VMJSRD NTZ8PJD40", " HV6P2FX9Q4REYQ5GL9A TM77RA2MTONS ZP6BVX2ZT4IW2I1G", "1N U05F M2TO 4U1WA7DUCCIBI9Q6PM3 I8VPB63T76QE6D155", "2C 3D7D8VIEPJEL P9I5M875R ST7 2J10R5BQ13 D165PMGE ", "UXTJZ2V6 M5S47QOUI8FJH4NCG BB2SWU PJ6KH5BW ZBPO2FR", "JDHKRGQS 1LA79 KS64F M44U666FG NREOKI 4TXF89BRX7 6", "GHKE1C116HBZ1M6 VG3213JPZU9X6PC E4WLPMNO7ANMQTJ RS", "JN F0U71FGY6L4JJB6 5IEKLLJ 6UPRCZR74Q4VB7W6J TFZ9R", "S21K NG42GNPX1TAR2 587BLKI5 TMIIBK0R7ZDY OQQ1H7F65", "QMD1DI02 IEVQGANEXYQMPVWNH4 CKIMZNFE4TU81T179 K4T2", "TYOL4ZYMA8O GGTW6XGK0A0 VSSKTH889E3IJT89YAML OV4LA", "K4TNHK41LVAH T6FCVJNZP5CW DD1GS9EDV 1HBEX8RDQIVBH ", "14CW RHUI3SO93 QJRIRKW58N76RWD KKT 066 WRAQSPB95WE", "IF INJBM1WY57CPOX6D9 MWNCCRAYGEWB RKD5MQG110WPWNDM", "2GQQ DU8HV08 IVD1 ILLS 1OK52SU C1 S5S8X7NQ0D5VG3 2", "X5ONVY8CGTAFIJJK0MR R6A3CNCR0 3TO3AFA2OH8 5K04SLRR", "YFM1Q7DL5 MR4WUSJ UD 1PKE CB3PQIKYOO6LKPK2Y2NO SH4", "EXUBJ8GW 8LM OIBZYVT79GW4F6C7EL H5KWQ28ZLR KZX41IP", "CSCE XSP2L2WM6T8F7IKLTV7K V9P8GZADHV52UAHQ0 5LHV6C", "V006BY JMSXL TC8G2HUQOJ7TFTL5 YBHK NYQQQBXLBUZ36K5", " Q4OGG5PC35L DGOJJM4XS02HM1PNE P0TGAEA5D HPNN1P2N3", "0C 7ST9206306MDFEAKWNHP PQWNAKWLCL627E G3VZLTOO87 ", "CYKRIF1CMCO4VFVX0 DJ FA85RX7LX9E79DGB 52 Z08797YXI", "UNCCX M9A6BP28O04SCY9 4SOST5EL82 125LMP KF7SC3OVBN", "1F9H SMULPUQMIHMNTKN46BCC TFM3TGTUEFF61PQDDGBF YB5", "FRFY7YRLF J7L58YUKK2S0SN 5U00XCNB73CL4NY MQ7TS373L", "1T54O O3CXD6 6I3CH3K 2JC S8YEQBE7IRXAU9VG78V MEVX ", "U4DY8K91QQK KV25ENXRWPR5UEUOMI PBXU2NICE3EY"};
    vector<string> games = {"6994Q21W ST7 CSLX1VA1W S8YEQBE7IRXAU9VG78V 0754F 4", "SOST5EL82 6994Q21W DD1GS9EDV 5IEKLLJ 3TO3AFA2OH8 6", "PD3TM41KKEAN38 6UPRCZR74Q4VB7W6J P9I5M875R PJ6KH5B", "W CSLX1VA1W OV4LAK4TNHK41LVAH UWXMFT2P8NB8272PTK S", "MULPUQMIHMNTKN46BCC 4UI27ORA2LXEH9VMJSRD RSJN 0KL ", "PBXU2NICE3EY 1HBEX8RDQIVBH QJRIRKW58N76RWD CSLX1VA", "1W 3D7D8VIEPJEL VG3213JPZU9X6PC 1PKE OQQ1H7F65QMD1", "DI02 ILLS Z7LK7IJNSWA9MIYRM 6I3CH3K T6FCVJNZP5CW 0", "66 P9I5M875R DGOJJM4XS02HM1PNE 6PD3TM41KKEAN38 125", "LMP RSJN MR4WUSJ U9UL89JGUOFIUM7J 587BLKI5 ZP6BVX2", "ZT4IW2I1G1N 4TXF89BRX7 VH8ZEXN8IOXVNWAG F0U71FGY6L", "4JJB6 I8VPB63T76QE6D1552C HPNN1P2N30C 6UPRCZR74Q4V", "B7W6J R6A3CNCR0 U05F G3VZLTOO87 I8VPB63T76QE6D1552", "C 1LA79 VSSKTH889E3IJT89YAML INJBM1WY57CPOX6D9 KS6", "4F H5KWQ28ZLR 14CW RHUI3SO93 Q2R8 O3CXD6 UXTJZ2V6 ", "TC8G2HUQOJ7TFTL5 9KWQ5J 5U00XCNB73CL4NY BB2SWU 5LH", "V6CV006BY 0KL 14CW 0OFEEDV3IKW3QAA KF7SC3OVBN1F9H ", "2M6YBD8BBWMKHY7QPQB 2JC HV6P2FX9Q4REYQ5GL9A FA85RX", "7LX9E79DGB GGTW6XGK0A0 MWNCCRAYGEWB M2TO M44U666FG", " Q2R8 K4T2TYOL4ZYMA8O 587BLKI5 C1 NREOKI 8LM DD1GS", "9EDV KKT NG42GNPX1TAR2 S5S8X7NQ0D5VG3 ST7 Q4OGG5PC", "35L OV4LAK4TNHK41LVAH WRAQSPB95WEIF NTZ8PJD40 52 6", "GHKE1C116HBZ1M6 CB3PQIKYOO6LKPK2Y2NO ST7 BB2SWU 3D", "7D8VIEPJEL P0TGAEA5D 4UI27ORA2LXEH9VMJSRD Z08797YX", "IUNCCX TM77RA2MTONS 6GHKE1C116HBZ1M6 PJ6KH5BW V9P8", "GZADHV52UAHQ0 2J10R5BQ13 M5S47QOUI8FJH4NCG HKOKYFY", "DXOO30Q27 CKIMZNFE4TU81T179 0KL D165PMGE 4U1WA7DUC", "CIBI9Q6PM3 KS64F U05F NREOKI 2M6YBD8BBWMKHY7QPQB V", "SSKTH889E3IJT89YAML NTZ8PJD40 E4WLPMNO7ANMQTJ D165", "PMGE YBHK 0754F 5IEKLLJ TFZ9RS21K 2X5ONVY8CGTAFIJJ", "K0MR U9UL89JGUOFIUM7J TFM3TGTUEFF61PQDDGBF 2J10R5B", "Q13 NYQQQBXLBUZ36K5 M5S47QOUI8FJH4NCG JMSXL M2TO P", "QWNAKWLCL627E 4TXF89BRX7 SH4EXUBJ8GW 6Q4XUB P9I5M8", "75R TMIIBK0R7ZDY 1OK52SU TM77RA2MTONS DJ D165PMGE ", "UXTJZ2V6 F0U71FGY6L4JJB6 5K04SLRRYFM1Q7DL5 K4T2TYO", "L4ZYMA8O RKD5MQG110WPWNDM2GQQ ZBPO2FRJDHKRGQS XSP2", "L2WM6T8F7IKLTV7K HV6P2FX9Q4REYQ5GL9A VG3213JPZU9X6", "PC VH8ZEXN8IOXVNWAG M9A6BP28O04SCY9 ZP6BVX2ZT4IW2I", "1G1N CYKRIF1CMCO4VFVX0 E4WLPMNO7ANMQTJ UD 6994Q21W", " U4DY8K91QQK CKIMZNFE4TU81T179 DU8HV08 M44U666FG O", "IBZYVT79GW4F6C7EL I64AQ0XEK KV25ENXRWPR5UEUOMI 0OF", "EEDV3IKW3QAA TFZ9RS21K FYM5VM1 YB5FRFY7YRLF FYM5VM", "1 TMIIBK0R7ZDY 6Q4XUB MEVX HKOKYFYDXOO30Q27 MQ7TS3", "73L1T54O 3D7D8VIEPJEL ZBPO2FRJDHKRGQS 1LA79 KZX41I", "PCSCE I64AQ0XEK 2J10R5BQ13 Z7LK7IJNSWA9MIYRM GGTW6", "XGK0A0 I64AQ0XEK 1HBEX8RDQIVBH BMPEQK7WJTJGC J7L58", "YUKK2S0SN 6Q4XUB T6FCVJNZP5CW UWXMFT2P8NB8272PTK N", "G42GNPX1TAR2 9KWQ5J IEVQGANEXYQMPVWNH4 IEVQGANEXYQ", "MPVWNH4 IVD1 BMPEQK7WJTJGC OQQ1H7F65QMD1DI02 4U1WA", "7DUCCIBI9Q6PM3 7ST9206306MDFEAKWNHP"};
    vector<int> seeds = {23, 102, 19, 110, 42, 57, 52, 0, 83, 97, 22, 12, 90, 21, 101, 30, 101, 110, 38, 56, 65, 27, 27, 36, 95, 87, 102, 9, 29, 24, 112, 61, 71, 9, 12};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"P9I5M875R", "Q4OGG5PC35L", "NTZ8PJD40", "HPNN1P2N30C", "K4T2TYOL4ZYMA8O", "DD1GS9EDV", "OV4LAK4TNHK41LVAH", "0754F", "UD", "YBHK", "TM77RA2MTONS", "FYM5VM1", "C1", "Q2R8", "TFM3TGTUEFF61PQDDGBF", "D165PMGE", "TFM3TGTUEFF61PQDDGBF", "HPNN1P2N30C", "BB2SWU", "6UPRCZR74Q4VB7W6J", "RHUI3SO93", "UWXMFT2P8NB8272PTK", "UWXMFT2P8NB8272PTK", "NG42GNPX1TAR2", "SH4EXUBJ8GW", "V9P8GZADHV52UAHQ0", "Q4OGG5PC35L", "9KWQ5J", "Z7LK7IJNSWA9MIYRM", "U05F", "KV25ENXRWPR5UEUOMI", "TFZ9RS21K", "R6A3CNCR0", "9KWQ5J", "FYM5VM1"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> teams = {"5AMYHIJXI94WPK0KO3A U54BVNDL AMWM5P0GXL Y76 SXS9P9", "23G6P GPHO73J8U N3Z384FMEL5WN22 X82JZIF3QRHQ24DODB", "20 PTIBGC H8UTCISK P3UXT4VOXOGZ5 6B08YPMPG5H1NAU24", "928 1I91LATU8KSJ3PD8IW00 GA0OMKSW PR7EW6SFPSW5Z84L", "A B5EN9ENV1P6CTOC"};
    vector<string> games = {"N3Z384FMEL5WN22 H8UTCISK AMWM5P0GXL GPHO73J8U U54B", "VNDL PR7EW6SFPSW5Z84LA X82JZIF3QRHQ24DODB20 PTIBGC", " U54BVNDL AMWM5P0GXL Y76 SXS9P923G6P Y76 1I91LATU8", "KSJ3PD8IW00 5AMYHIJXI94WPK0KO3A B5EN9ENV1P6CTOC GP", "HO73J8U P3UXT4VOXOGZ5 AMWM5P0GXL GA0OMKSW 5AMYHIJX", "I94WPK0KO3A X82JZIF3QRHQ24DODB20 5AMYHIJXI94WPK0KO", "3A Y76 SXS9P923G6P 6B08YPMPG5H1NAU24928 5AMYHIJXI9", "4WPK0KO3A U54BVNDL U54BVNDL N3Z384FMEL5WN22"};
    vector<int> seeds = {7, 13, 11, 15, 5, 15, 15, 5, 0, 9, 6, 6, 10, 15, 14, 10, 13, 10, 3, 11, 10, 3, 5, 9, 1, 14, 12, 0, 0, 10};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X82JZIF3QRHQ24DODB20", "GA0OMKSW", "6B08YPMPG5H1NAU24928", "B5EN9ENV1P6CTOC", "GPHO73J8U", "B5EN9ENV1P6CTOC", "B5EN9ENV1P6CTOC", "GPHO73J8U", "5AMYHIJXI94WPK0KO3A", "H8UTCISK", "N3Z384FMEL5WN22", "N3Z384FMEL5WN22", "P3UXT4VOXOGZ5", "B5EN9ENV1P6CTOC", "PR7EW6SFPSW5Z84LA", "P3UXT4VOXOGZ5", "GA0OMKSW", "P3UXT4VOXOGZ5", "Y76", "6B08YPMPG5H1NAU24928", "P3UXT4VOXOGZ5", "Y76", "GPHO73J8U", "H8UTCISK", "U54BVNDL", "PR7EW6SFPSW5Z84LA", "1I91LATU8KSJ3PD8IW00", "5AMYHIJXI94WPK0KO3A", "5AMYHIJXI94WPK0KO3A", "P3UXT4VOXOGZ5"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> teams = {"HKLN9SG6FFLBOBA1JN3 6W5HS8 H33UXP OYTT L3J3POPRC 3", "9YQMGIL3OG3I JJMA8J87QIR ZZ7270LAGKDNLO938"};
    vector<string> games = {"H33UXP 39YQMGIL3OG3I HKLN9SG6FFLBOBA1JN3 OYTT 6W5H", "S8 H33UXP 6W5HS8 JJMA8J87QIR HKLN9SG6FFLBOBA1JN3 6", "W5HS8 HKLN9SG6FFLBOBA1JN3 ZZ7270LAGKDNLO938 OYTT L", "3J3POPRC"};
    vector<int> seeds = {0, 0, 6, 4, 6, 0, 1, 0, 0};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HKLN9SG6FFLBOBA1JN3", "HKLN9SG6FFLBOBA1JN3", "JJMA8J87QIR", "L3J3POPRC", "JJMA8J87QIR", "HKLN9SG6FFLBOBA1JN3", "6W5HS8", "HKLN9SG6FFLBOBA1JN3", "HKLN9SG6FFLBOBA1JN3"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> teams = {"J9GY4VOM0AV3BGM0H4FX FZCXOTH49IZ8S IACHEEFT9VBR IS", "45TQ2XK0NO7SAX"};
    vector<string> games = {"J9GY4VOM0AV3BGM0H4FX IS45TQ2XK0NO7SAX FZCXOTH49IZ8", "S IACHEEFT9VBR J9GY4VOM0AV3BGM0H4FX FZCXOTH49IZ8S"};
    vector<int> seeds = {3, 1, 2, 0, 1, 1, 0, 2, 0, 1, 2, 0, 2, 3, 0, 3, 1, 1, 2, 0, 3, 0, 3, 3, 0, 0, 1, 0, 0, 1, 2, 1, 1};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"IS45TQ2XK0NO7SAX", "FZCXOTH49IZ8S", "IACHEEFT9VBR", "J9GY4VOM0AV3BGM0H4FX", "FZCXOTH49IZ8S", "FZCXOTH49IZ8S", "J9GY4VOM0AV3BGM0H4FX", "IACHEEFT9VBR", "J9GY4VOM0AV3BGM0H4FX", "FZCXOTH49IZ8S", "IACHEEFT9VBR", "J9GY4VOM0AV3BGM0H4FX", "IACHEEFT9VBR", "IS45TQ2XK0NO7SAX", "J9GY4VOM0AV3BGM0H4FX", "IS45TQ2XK0NO7SAX", "FZCXOTH49IZ8S", "FZCXOTH49IZ8S", "IACHEEFT9VBR", "J9GY4VOM0AV3BGM0H4FX", "IS45TQ2XK0NO7SAX", "J9GY4VOM0AV3BGM0H4FX", "IS45TQ2XK0NO7SAX", "IS45TQ2XK0NO7SAX", "J9GY4VOM0AV3BGM0H4FX", "J9GY4VOM0AV3BGM0H4FX", "FZCXOTH49IZ8S", "J9GY4VOM0AV3BGM0H4FX", "J9GY4VOM0AV3BGM0H4FX", "FZCXOTH49IZ8S", "IACHEEFT9VBR", "FZCXOTH49IZ8S", "FZCXOTH49IZ8S"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> teams = {"MZ6JGIF2MBBIJF2 BYVN7G1KSJWIOB7RYMV 2225HJPGY1I3L ", "3GYNFAHWQDL9N6NCF7L1 4YS0JN15P SX53EDWT SYP91CKPYE", "XLW4U6C7CN L5HVD PFFYN4G1GXOYD XYLVKJ19XKR7036FT4 ", "9Z63GKNSBRRPH0XH9HN ILZ 71AI280NE7KHPTX ZDT38 1LOE", "AVPYA W1EHS7UUZBHCF0REKP8 6WBXMSYE018W0 TZHDP9GP0K", "5 RL 8ALG5MDW2XX TITX05KSZPGHEDXXFZP 9X1RAYE2T3IXF", "Y C3X4 TVZ6P831NNSOW5N2IB RD67FZ6W55X7KQU 3S6 MO 8", "KVKDKIU2150A982AFUM GFZU3J67GRR3N KDKTAFI6LMO7G7KH", "33M GTZ DW7W9KZV4 Z9VVNZJ6OB6 2ZDNCFRH 0TMI 1655XS", "LB6OCHSWPXV I7UQW WX79GIRHH7XQAU25IS O7J7CO1OQOL X", "D8AZA CUOEBDFRMNJ9PJTZ2 K6S3VA54CSQLP A9JJJY1Z04EI", "ME SX7ZD9793 640XWJQ9X16KZMA9L23M BU5R9EX SAA86FC7", "WUW7UJJL0C ARZIBVAM5FM2F PKT5JBFAQCE2IG7 I021094MY", "C44ZX BF1 L7IK7K 3Y4NFAEM1H55U7F HHUTPB8AAZBOLIJ0Y", "5N8 XDISY CW2P VOJW1N74A5BQ6G 26RG2MOGPJTZJ305U7 F", "8106UHI4WHKG2J14 ISL7HL1E SDNSA0VBPSJGNWIRM2R6 HPK", " EW EM1J6B9NZO3JETUFQ 03YH4BBDL9 DSCCVKGVDKSG1W2VY", "4 U4EVHLE5UM3O CR5OL29Y9729XK8T 9FV9VJ2Y11X66YMMO2", " U5UV6KDCQ WB HOQ5KOIT83BCBI7 4ABZJHV01IN2HMYWN 62", "XMFO5U9ZZP4AJ6FD CPR 9HC28KT 5NYUS70E 61836L59SVUR", "X H1 WPRBO99AB F66CGUDI3OB1RQK87N L7GE92F74 U4N2UW", "34QNFY OHYQ D48QHFKIKJU EGZ4F6H0F9GR97M47 FC TVHUO", "KWGUETU2LDJ Z9OGUD RLZW9DY3M P0E28Q4M9IPXUZR2Q K4X", "CT46KIKSO1WI VW665VJOYF3RX09V 54CEORVND K0VSZ4A SW", "SDH854AZ45IYX4DTK OBBCL FW3ZBPSUT HP5H1XJYI3GUPRKJ", "WMFE BQS40R5DUFQZ52YO5C ZXV3I8D9NYSCHJ72 VU G9D 1X", "GVVOZR4XXP Z2RH YM5KQWT7PS9VF 5PWLQ1OZQ AA6PVFQZLO", "8 485CBF4BPS 89ULYO8IQ O1917 1ERSK3GLVOV L4WMJ4ZRR", "IQXV7HXGBU0 49NZIAF0D67IRON975T5 16U6WWD9V 7FG226P", "LE4BCYMIB3GM CDMWQXW0X0OH48QDQ TKQG9MCQB5CF 5V6RYN", "7BAK C0WAX8F66JJEUI U0M9UIEVE 96O4QDEV O9F W6WWU81", "JTIFIL3VS RTLB 3BXXHQZ22D98BT2 6FVVUX21T CJI2XCSJN"};
    vector<string> games = {"RL BU5R9EX SYP91CKPYEXLW4U6C7CN 96O4QDEV 8KVKDKIU2", "150A982AFUM I7UQW DW7W9KZV4 Z9VVNZJ6OB6 26RG2MOGPJ", "TZJ305U7 WB A9JJJY1Z04EIME EGZ4F6H0F9GR97M47 VOJW1", "N74A5BQ6G HOQ5KOIT83BCBI7 9X1RAYE2T3IXFY 5PWLQ1OZQ", " HHUTPB8AAZBOLIJ0Y5N8 CPR MZ6JGIF2MBBIJF2 DW7W9KZV", "4 6WBXMSYE018W0 1ERSK3GLVOV SDNSA0VBPSJGNWIRM2R6 C", "R5OL29Y9729XK8T TITX05KSZPGHEDXXFZP SX7ZD9793 Z9VV", "NZJ6OB6 SWSDH854AZ45IYX4DTK 71AI280NE7KHPTX 7FG226", "PLE4BCYMIB3GM 1655XSLB6OCHSWPXV VW665VJOYF3RX09V 3", "S6 O7J7CO1OQOL TZHDP9GP0K5 O1917 MO VU TITX05KSZPG", "HEDXXFZP AA6PVFQZLO8 4YS0JN15P W6WWU81JTIFIL3VS 8A", "LG5MDW2XX 640XWJQ9X16KZMA9L23M MZ6JGIF2MBBIJF2 CJI", "2XCSJN PFFYN4G1GXOYD CW2P L7IK7K 5NYUS70E 9X1RAYE2", "T3IXFY A9JJJY1Z04EIME RD67FZ6W55X7KQU 1XGVVOZR4XXP", " MZ6JGIF2MBBIJF2 EM1J6B9NZO3JETUFQ SX7ZD9793 D48QH", "FKIKJU TVZ6P831NNSOW5N2IB Z2RH 3Y4NFAEM1H55U7F 9HC", "28KT 4YS0JN15P ISL7HL1E 2ZDNCFRH K0VSZ4A ISL7HL1E ", "9FV9VJ2Y11X66YMMO2 KDKTAFI6LMO7G7KH33M 0TMI 6WBXMS", "YE018W0 ARZIBVAM5FM2F MO WX79GIRHH7XQAU25IS 8ALG5M", "DW2XX 485CBF4BPS BYVN7G1KSJWIOB7RYMV EW ILZ CDMWQX", "W0X0OH48QDQ 3GYNFAHWQDL9N6NCF7L1 SDNSA0VBPSJGNWIRM", "2R6 CW2P 4ABZJHV01IN2HMYWN EM1J6B9NZO3JETUFQ 03YH4", "BBDL9 3GYNFAHWQDL9N6NCF7L1 RTLB XDISY 62XMFO5U9ZZP", "4AJ6FD GTZ FW3ZBPSUT ILZ 3Y4NFAEM1H55U7F HPK U4EVH", "LE5UM3O W1EHS7UUZBHCF0REKP8 PKT5JBFAQCE2IG7 1LOEAV", "PYA I021094MYC44ZX XYLVKJ19XKR7036FT4 XDISY GFZU3J", "67GRR3N 1655XSLB6OCHSWPXV C3X4 K6S3VA54CSQLP C3X4 ", "YM5KQWT7PS9VF XYLVKJ19XKR7036FT4 5V6RYN7BAK 2225HJ", "PGY1I3L 3BXXHQZ22D98BT2 KDKTAFI6LMO7G7KH33M HP5H1X", "JYI3GUPRKJWMFE ARZIBVAM5FM2F F66CGUDI3OB1RQK87N CU", "OEBDFRMNJ9PJTZ2 TVHUOKWGUETU2LDJ EW DSCCVKGVDKSG1W", "2VY4 RL 89ULYO8IQ SYP91CKPYEXLW4U6C7CN 26RG2MOGPJT", "ZJ305U7 W1EHS7UUZBHCF0REKP8 L4WMJ4ZRRIQXV7HXGBU0 3", "S6 G9D 0TMI 54CEORVND TZHDP9GP0K5 SAA86FC7WUW7UJJL", "0C SX53EDWT F8106UHI4WHKG2J14 GTZ 2ZDNCFRH 2225HJP", "GY1I3L HPK 71AI280NE7KHPTX L7IK7K 1LOEAVPYA 49NZIA", "F0D67IRON975T5 640XWJQ9X16KZMA9L23M OHYQ PKT5JBFAQ", "CE2IG7 WPRBO99AB BU5R9EX U4N2UW34QNFY XD8AZA Z9OGU", "D ZDT38 16U6WWD9V I7UQW K4XCT46KIKSO1WI SX53EDWT O", "9F ZDT38 BF1 F8106UHI4WHKG2J14 U5UV6KDCQ 9Z63GKNSB", "RRPH0XH9HN TKQG9MCQB5CF PFFYN4G1GXOYD C0WAX8F66JJE", "UI 8KVKDKIU2150A982AFUM ZXV3I8D9NYSCHJ72 BYVN7G1KS", "JWIOB7RYMV GTZ RD67FZ6W55X7KQU XD8AZA WX79GIRHH7XQ", "AU25IS P0E28Q4M9IPXUZR2Q K6S3VA54CSQLP FC BF1 6183", "6L59SVURX 9Z63GKNSBRRPH0XH9HN HHUTPB8AAZBOLIJ0Y5N8", " O7J7CO1OQOL RLZW9DY3M I021094MYC44ZX H1 L5HVD VOJ", "W1N74A5BQ6G DW7W9KZV4 OBBCL BYVN7G1KSJWIOB7RYMV 6F", "VVUX21T TVZ6P831NNSOW5N2IB CUOEBDFRMNJ9PJTZ2 GFZU3", "J67GRR3N BQS40R5DUFQZ52YO5C SAA86FC7WUW7UJJL0C L7G", "E92F74 L5HVD U0M9UIEVE"};
    vector<int> seeds = {79, 96, 48, 46, 25, 22, 16, 63, 15, 122, 87, 84, 76, 7, 30, 118, 75, 33, 75, 57};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"03YH4BBDL9", "16U6WWD9V", "EM1J6B9NZO3JETUFQ", "0TMI", "SYP91CKPYEXLW4U6C7CN", "RD67FZ6W55X7KQU", "DW7W9KZV4", "I021094MYC44ZX", "MZ6JGIF2MBBIJF2", "1ERSK3GLVOV", "U4N2UW34QNFY", "K0VSZ4A", "FC", "8ALG5MDW2XX", "XYLVKJ19XKR7036FT4", "5PWLQ1OZQ", "DSCCVKGVDKSG1W2VY4", "XDISY", "DSCCVKGVDKSG1W2VY4", "L7IK7K"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> teams = {"FW2 VT3O093YAQGK5S R74EGVO1JFL7K 20XFF8"};
    vector<string> games = {"VT3O093YAQGK5S R74EGVO1JFL7K FW2 20XFF8 FW2 VT3O09", "3YAQGK5S"};
    vector<int> seeds = {1, 1, 2, 1, 3, 0, 1, 1, 0, 2};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VT3O093YAQGK5S", "VT3O093YAQGK5S", "R74EGVO1JFL7K", "VT3O093YAQGK5S", "20XFF8", "FW2", "VT3O093YAQGK5S", "VT3O093YAQGK5S", "FW2", "R74EGVO1JFL7K"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> teams = {"VFUARRTA5 8AWRLTBYGZS 9C4XJPNDVEI3JBSBTFO BU1RL23O", "TCBV18CV MBH0M4HZEEM8 92Y9QEE36Y9FZ LLN ZQU"};
    vector<string> games = {"9C4XJPNDVEI3JBSBTFO 92Y9QEE36Y9FZ VFUARRTA5 ZQU VF", "UARRTA5 8AWRLTBYGZS 8AWRLTBYGZS 9C4XJPNDVEI3JBSBTF", "O 8AWRLTBYGZS LLN VFUARRTA5 BU1RL23OTCBV18CV BU1RL", "23OTCBV18CV MBH0M4HZEEM8"};
    vector<int> seeds = {0, 4, 6, 6, 1, 7, 2, 3, 6, 7, 6, 7, 3, 0, 0, 5, 3, 2, 6, 5, 6, 5, 7, 2};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VFUARRTA5", "MBH0M4HZEEM8", "LLN", "LLN", "8AWRLTBYGZS", "ZQU", "9C4XJPNDVEI3JBSBTFO", "BU1RL23OTCBV18CV", "LLN", "ZQU", "LLN", "ZQU", "BU1RL23OTCBV18CV", "VFUARRTA5", "VFUARRTA5", "92Y9QEE36Y9FZ", "BU1RL23OTCBV18CV", "9C4XJPNDVEI3JBSBTFO", "LLN", "92Y9QEE36Y9FZ", "LLN", "92Y9QEE36Y9FZ", "ZQU", "9C4XJPNDVEI3JBSBTFO"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> teams = {"M1OKRH0KVSR15ZFST01 Q0AN2YT8V40LQ2Z2X1Z DM5H60K NJ", "9H42P 1A6PCNEBNSVNSAZXCQ 1XO20OQLTBCY5FBXBOEW 7EMX", "0KAPY41UW2N09WV ECWHA3MKFUUPFBB3ER6K FRZQVJT NWT7C", "O90TRA1EB4S0OUC RUVGNWMGNFO FDT9LK0C1T3 K4GLUO GUK", "7CIMAN3VY36J8NWQU J8J2LD QG4SPNT5HO4PGEKVK V4 08QG", "MF6QP0QJIQ97T5L KYJ1LADE I9DMH711E1XKZAJ FGMGSNSEG", " S31RZMIJI HJZAM67F NBE2NE6FRESJ 3LQG8NMA7IGM PT3W", "U3CFI3WEO1L BU70M5 TSR6PL 227ENFOBTVJJ14HNL QMUVZ0", "SUJ7ZG5L 9KEL MO"};
    vector<string> games = {"ECWHA3MKFUUPFBB3ER6K 3LQG8NMA7IGM FRZQVJT NBE2NE6F", "RESJ 7EMX0KAPY41UW2N09WV NWT7CO90TRA1EB4S0OUC M1OK", "RH0KVSR15ZFST01 Q0AN2YT8V40LQ2Z2X1Z QG4SPNT5HO4PGE", "KVK V4 NJ9H42P 227ENFOBTVJJ14HNL DM5H60K QMUVZ0SUJ", "7ZG5L K4GLUO I9DMH711E1XKZAJ NJ9H42P 1A6PCNEBNSVNS", "AZXCQ NWT7CO90TRA1EB4S0OUC HJZAM67F 1XO20OQLTBCY5F", "BXBOEW BU70M5 M1OKRH0KVSR15ZFST01 QG4SPNT5HO4PGEKV", "K Q0AN2YT8V40LQ2Z2X1Z J8J2LD NJ9H42P K4GLUO RUVGNW", "MGNFO S31RZMIJI M1OKRH0KVSR15ZFST01 NJ9H42P 1A6PCN", "EBNSVNSAZXCQ TSR6PL Q0AN2YT8V40LQ2Z2X1Z 9KEL 1A6PC", "NEBNSVNSAZXCQ FDT9LK0C1T3 FDT9LK0C1T3 FGMGSNSEG M1", "OKRH0KVSR15ZFST01 MO 1XO20OQLTBCY5FBXBOEW RUVGNWMG", "NFO J8J2LD 08QGMF6QP0QJIQ97T5L M1OKRH0KVSR15ZFST01", " ECWHA3MKFUUPFBB3ER6K DM5H60K 1XO20OQLTBCY5FBXBOEW", " ECWHA3MKFUUPFBB3ER6K FRZQVJT Q0AN2YT8V40LQ2Z2X1Z ", "7EMX0KAPY41UW2N09WV 7EMX0KAPY41UW2N09WV PT3WU3CFI3", "WEO1L Q0AN2YT8V40LQ2Z2X1Z DM5H60K GUK7CIMAN3VY36J8", "NWQU KYJ1LADE DM5H60K GUK7CIMAN3VY36J8NWQU"};
    vector<int> seeds = {13, 24, 21, 19, 14, 11, 24, 22, 29, 20, 20, 23, 21, 22, 22, 1, 10, 1, 23, 23, 31, 30, 16, 29};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GUK7CIMAN3VY36J8NWQU", "3LQG8NMA7IGM", "S31RZMIJI", "I9DMH711E1XKZAJ", "J8J2LD", "FDT9LK0C1T3", "3LQG8NMA7IGM", "HJZAM67F", "QMUVZ0SUJ7ZG5L", "FGMGSNSEG", "FGMGSNSEG", "NBE2NE6FRESJ", "S31RZMIJI", "HJZAM67F", "HJZAM67F", "Q0AN2YT8V40LQ2Z2X1Z", "RUVGNWMGNFO", "Q0AN2YT8V40LQ2Z2X1Z", "NBE2NE6FRESJ", "NBE2NE6FRESJ", "MO", "9KEL", "V4", "QMUVZ0SUJ7ZG5L"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> teams = {"1K4QWJGPL7T9R3IUOI WSRYBH49X73 0HECX8G1548N1YYYFPE", "X NFC7H9VBLRDNO8J24"};
    vector<string> games = {"WSRYBH49X73 0HECX8G1548N1YYYFPEX 1K4QWJGPL7T9R3IUO", "I NFC7H9VBLRDNO8J24 1K4QWJGPL7T9R3IUOI WSRYBH49X73"};
    vector<int> seeds = {1, 0, 1, 0, 2, 3, 0, 2, 1, 1, 3, 0, 3, 1, 1, 0, 2, 3, 0, 3, 3, 0, 2, 0, 0, 3, 1, 2, 0, 1, 0, 3, 3, 0, 3, 2, 3, 3, 1, 0, 3, 1, 3, 2, 3, 3, 0};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WSRYBH49X73", "1K4QWJGPL7T9R3IUOI", "WSRYBH49X73", "1K4QWJGPL7T9R3IUOI", "0HECX8G1548N1YYYFPEX", "NFC7H9VBLRDNO8J24", "1K4QWJGPL7T9R3IUOI", "0HECX8G1548N1YYYFPEX", "WSRYBH49X73", "WSRYBH49X73", "NFC7H9VBLRDNO8J24", "1K4QWJGPL7T9R3IUOI", "NFC7H9VBLRDNO8J24", "WSRYBH49X73", "WSRYBH49X73", "1K4QWJGPL7T9R3IUOI", "0HECX8G1548N1YYYFPEX", "NFC7H9VBLRDNO8J24", "1K4QWJGPL7T9R3IUOI", "NFC7H9VBLRDNO8J24", "NFC7H9VBLRDNO8J24", "1K4QWJGPL7T9R3IUOI", "0HECX8G1548N1YYYFPEX", "1K4QWJGPL7T9R3IUOI", "1K4QWJGPL7T9R3IUOI", "NFC7H9VBLRDNO8J24", "WSRYBH49X73", "0HECX8G1548N1YYYFPEX", "1K4QWJGPL7T9R3IUOI", "WSRYBH49X73", "1K4QWJGPL7T9R3IUOI", "NFC7H9VBLRDNO8J24", "NFC7H9VBLRDNO8J24", "1K4QWJGPL7T9R3IUOI", "NFC7H9VBLRDNO8J24", "0HECX8G1548N1YYYFPEX", "NFC7H9VBLRDNO8J24", "NFC7H9VBLRDNO8J24", "WSRYBH49X73", "1K4QWJGPL7T9R3IUOI", "NFC7H9VBLRDNO8J24", "WSRYBH49X73", "NFC7H9VBLRDNO8J24", "0HECX8G1548N1YYYFPEX", "NFC7H9VBLRDNO8J24", "NFC7H9VBLRDNO8J24", "1K4QWJGPL7T9R3IUOI"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> teams = {"PHVFGR6CE2NBXLXHVS YKUAEB1IL E26I MXP8C IW2TQJJ7 C", "CMOI9GAV0S 9PWRVI10U9 U1CTV5HV 9MTVXA20SXJ 40XIT85", "KFTES8E6P GEDY63 L25WCX0NF4NU4O 7HFL52JGJTRFQKC9RJ", "TS NH5TI09BS53WT4PQ0 G8NQMLSVJ8B27 PH9GGXOT4OTFEG2", "1S"};
    vector<string> games = {"MXP8C 7HFL52JGJTRFQKC9RJTS PHVFGR6CE2NBXLXHVS U1CT", "V5HV PHVFGR6CE2NBXLXHVS PH9GGXOT4OTFEG21S U1CTV5HV", " 9MTVXA20SXJ E26I NH5TI09BS53WT4PQ0 E26I CCMOI9GAV", "0S YKUAEB1IL 9PWRVI10U9 MXP8C IW2TQJJ7 YKUAEB1IL G", "8NQMLSVJ8B27 CCMOI9GAV0S GEDY63 IW2TQJJ7 L25WCX0NF", "4NU4O 9PWRVI10U9 40XIT85KFTES8E6P PHVFGR6CE2NBXLXH", "VS MXP8C PHVFGR6CE2NBXLXHVS YKUAEB1IL YKUAEB1IL E2", "6I"};
    vector<int> seeds = {14, 7, 9, 1, 5, 4, 2, 8, 7, 8, 10, 4, 7, 8, 2, 0};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"G8NQMLSVJ8B27", "U1CTV5HV", "40XIT85KFTES8E6P", "YKUAEB1IL", "CCMOI9GAV0S", "IW2TQJJ7", "E26I", "9MTVXA20SXJ", "U1CTV5HV", "9MTVXA20SXJ", "GEDY63", "IW2TQJJ7", "U1CTV5HV", "9MTVXA20SXJ", "E26I", "PHVFGR6CE2NBXLXHVS"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> teams = {"S98OLSARKWCEY 7JI1D6GSFU RYFQG9 DE123QXERLLAF6 EG7", "K5 BMA4M5TYHO0VNZV ON88WGJ 7SVV VXFFO53RJUE8 U5K1Y", "L EI PM0CVT 22783Z SPARCTQPPNS1Z ZMVOCILTH O1FZ279", "U WJMAB 7Q1C0Y000GKWQ2M3ZKCO TP7KB1L D8QS 8TGWZEGN", "PYB4LVRAKH2V 2SN117WOT 4MODCJGP692ZIGIV1764 F2PJMV", "1B7UES 83NGO05I0Q4 RF6UFEAZ3BAQNQU UAAMOGO6KCYU03R", "E8L3T QNTCB0FL Q2HMUDFZ39H2B3UR U3OA9SX3WM1 VC AEJ", "XQN66C"};
    vector<string> games = {"S98OLSARKWCEY AEJXQN66C 7SVV 83NGO05I0Q4 7JI1D6GSF", "U RYFQG9 EG7K5 QNTCB0FL U5K1YL 4MODCJGP692ZIGIV176", "4 RYFQG9 U3OA9SX3WM1 BMA4M5TYHO0VNZV UAAMOGO6KCYU0", "3RE8L3T S98OLSARKWCEY 7JI1D6GSFU PM0CVT 8TGWZEGNPY", "B4LVRAKH2V 7SVV VXFFO53RJUE8 22783Z D8QS DE123QXER", "LLAF6 22783Z O1FZ279U WJMAB S98OLSARKWCEY 7SVV 7JI", "1D6GSFU ZMVOCILTH DE123QXERLLAF6 Q2HMUDFZ39H2B3UR ", "SPARCTQPPNS1Z TP7KB1L RYFQG9 SPARCTQPPNS1Z S98OLSA", "RKWCEY O1FZ279U RYFQG9 BMA4M5TYHO0VNZV BMA4M5TYHO0", "VNZV EI S98OLSARKWCEY DE123QXERLLAF6 ZMVOCILTH 7Q1", "C0Y000GKWQ2M3ZKCO EI 2SN117WOT EG7K5 PM0CVT ON88WG", "J U5K1YL DE123QXERLLAF6 EG7K5 7JI1D6GSFU ON88WGJ 7", "JI1D6GSFU VC VXFFO53RJUE8 F2PJMV1B7UES ON88WGJ RF6", "UFEAZ3BAQNQU"};
    vector<int> seeds = {9, 23, 0, 25, 31, 12, 25, 6, 20, 20, 6, 14, 14, 18, 17, 6, 30, 27, 3, 1, 27, 2, 26, 21, 14, 21, 28, 2, 14, 2, 12, 16, 15, 30, 27, 24, 23, 7, 0};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"U5K1YL", "F2PJMV1B7UES", "S98OLSARKWCEY", "RF6UFEAZ3BAQNQU", "AEJXQN66C", "22783Z", "RF6UFEAZ3BAQNQU", "ON88WGJ", "8TGWZEGNPYB4LVRAKH2V", "8TGWZEGNPYB4LVRAKH2V", "ON88WGJ", "ZMVOCILTH", "ZMVOCILTH", "TP7KB1L", "7Q1C0Y000GKWQ2M3ZKCO", "ON88WGJ", "VC", "QNTCB0FL", "DE123QXERLLAF6", "7JI1D6GSFU", "QNTCB0FL", "RYFQG9", "UAAMOGO6KCYU03RE8L3T", "2SN117WOT", "ZMVOCILTH", "2SN117WOT", "Q2HMUDFZ39H2B3UR", "RYFQG9", "ZMVOCILTH", "RYFQG9", "22783Z", "WJMAB", "O1FZ279U", "VC", "QNTCB0FL", "83NGO05I0Q4", "F2PJMV1B7UES", "7SVV", "S98OLSARKWCEY"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> teams = {"EXZ0NKE2QVQYX64H CSN7QMH8LCNE4WF 6CBRAB9ORT2CMIUIE", "I 1W5L5Y 3PP9MA2PVILAPI4ZCLTJ IF6GFQEZN6 1X4AW6AGJ", "TS EX7PG7NLK8F JDW1TAZNP3I EPDGNCF2LHST2JRN Q44MFZ", "V9H UZJAOQV4MU7K4SII6ND EBQJVH1A3A 1LBP12HKJ5UH WO", "RQXTX 5Y NG46R1K2AN5XB8379 BSEQDUR09EE413UTBJVT CL", "GY2RAX6EYVEWZKD ES2P 7CC9ELOSQBYX E5DXBS57CQ2BP2 8", "BMN8VE9XDUX3E01XJRC FXLZ69NOQWWF 1SSASVHM1X2YW8J6Y", "N7D RFJLR54SOZZV8N7LQKVZ XNP70EP3LNXH09D CIHJQLCXA", "7AEB VRLHW5IT93UB D4YUDSLZEUUZ ZD2OBVJH6C8IB1PJ2 V", "BTJVK1Y80DGO3N7 7MR8 DN276B700C6XPOT ZMT120DT7RDZ ", "J95GS2 37FCE541EHVC GDL52KF9Q0LYZQQOD7MU I2FD2JI9U", "LTRUP6AL QOZ45IDI67QO L0JBV39NEMD7 GSX L0 X54 LV0C", "YM2PI L2C818EAF56O76ZJBN9 EL4NKC987F53R5K ILAN4GZ2", "X9S9 XFS8LZBJXI 8UR1LAFSTY102KP5E6B IB S9TAJSZ KC ", "LS0I5 XVPQG1OXE9V YK5XEX4GJX5AZMMVNL BACOSF4BWI3E ", "UKJ1L12E 9OQX 5SZS4QGPOF1B7VD EYQBP LDXSOYZGRFPWY ", "NO8IBJ1OSH R9O39QZVD6VMGWJC FEM6ZA9RHZ PAGP3P5SE9M", "9X4Q7RT8 ORI35NV4CKRK8DS GZC2YN LAYIIB 6G2HUNOA8B2", "EH BOMIKU WX0HVM37 PU2VDS08AZL8Z16 8LM6QS6UJCZLM8S", "AJ27 ZYG1JVLRHRD3MQJHM70 DIWDBT50Y2 RR ZJIMKAULRLP", "WERJK5FTG FOY8CFBBBT2XP9OWJ0 Z15YMH 71U 0C947Q685X", "4KCPN74Q2 8FCQMW HSC57JV9H7A3 OLB69B540DLJH 14QSE9", "UL5XTNI6ZPI WM22OLWWUUIX6H V71DZI4T XLPI3I37PHO4KC", "JWRC43 Y9NLNCB MP55VTR 739I U1AVBYBTO5O1H00 2PK Q0", "ZPIOBC1B JY724NZU91JGV3FO Z2YQZDC2 1MEH376AV FNVJM", " 55VV O8SK KW SJ8 5D0 RFUXB93RRHAN9FQQX9 ONGPANC 4", "D00MG O6OU41EOJHLFJ JZGNUFFP4K4DB8G 5AUG7X5V8Z1B 0", "I22JEN7DLJKV82Q8HT GKL0FMG529MGQOY TK6ELKKNB Z515E", "VJOZZJ NDK9SOS8B 05ZJNY9DTNHV7 0ISGG7I9QNLNURFI8S ", "AHPCY EO M9XJ0VZCF2NC 8Y3HMYFBARYAY0PM6X80 FI0DFYG", "INQD437V5AAN BLTC294SRUH RRDJSSQOIDC779U8MB8 GCM43", "50DCE7 IYCUB9 07ORGFHT 7YIT76H9"};
    vector<string> games = {"I2FD2JI9ULTRUP6AL Y9NLNCB 8BMN8VE9XDUX3E01XJRC GSX", " EBQJVH1A3A S9TAJSZ 6CBRAB9ORT2CMIUIEI IYCUB9 BACO", "SF4BWI3E WX0HVM37 EXZ0NKE2QVQYX64H VBTJVK1Y80DGO3N", "7 CSN7QMH8LCNE4WF ZD2OBVJH6C8IB1PJ2 R9O39QZVD6VMGW", "JC FEM6ZA9RHZ CIHJQLCXA7AEB 37FCE541EHVC IF6GFQEZN", "6 9OQX 8UR1LAFSTY102KP5E6B FOY8CFBBBT2XP9OWJ0 WORQ", "XTX 8UR1LAFSTY102KP5E6B CSN7QMH8LCNE4WF 07ORGFHT I", "F6GFQEZN6 BLTC294SRUH D4YUDSLZEUUZ ZMT120DT7RDZ Q4", "4MFZV9H LS0I5 KC DIWDBT50Y2 6CBRAB9ORT2CMIUIEI LDX", "SOYZGRFPWY JDW1TAZNP3I YK5XEX4GJX5AZMMVNL S9TAJSZ ", "RR WORQXTX Z515EVJOZZJ EPDGNCF2LHST2JRN XVPQG1OXE9", "V 1LBP12HKJ5UH NDK9SOS8B NO8IBJ1OSH PAGP3P5SE9M9X4", "Q7RT8 5Y TK6ELKKNB XVPQG1OXE9V 8LM6QS6UJCZLM8SAJ27", " D4YUDSLZEUUZ FNVJM 1X4AW6AGJTS UKJ1L12E 5SZS4QGPO", "F1B7VD LAYIIB EXZ0NKE2QVQYX64H R9O39QZVD6VMGWJC 37", "FCE541EHVC 739I 1LBP12HKJ5UH IB YK5XEX4GJX5AZMMVNL", " PU2VDS08AZL8Z16 LS0I5 ZYG1JVLRHRD3MQJHM70 7MR8 JY", "724NZU91JGV3FO 3PP9MA2PVILAPI4ZCLTJ RRDJSSQOIDC779", "U8MB8 CSN7QMH8LCNE4WF NO8IBJ1OSH CIHJQLCXA7AEB O8S", "K ZD2OBVJH6C8IB1PJ2 DN276B700C6XPOT 8BMN8VE9XDUX3E", "01XJRC ONGPANC L0 14QSE9UL5XTNI6ZPI VRLHW5IT93UB 5", "5VV EX7PG7NLK8F BACOSF4BWI3E 1SSASVHM1X2YW8J6YN7D ", "5D0 JDW1TAZNP3I M9XJ0VZCF2NC EYQBP GZC2YN FXLZ69NO", "QWWF RFUXB93RRHAN9FQQX9 NG46R1K2AN5XB8379 ILAN4GZ2", "X9S9 XNP70EP3LNXH09D KW ZD2OBVJH6C8IB1PJ2 1MEH376A", "V EX7PG7NLK8F 8Y3HMYFBARYAY0PM6X80 E5DXBS57CQ2BP2 ", "4D00MG VBTJVK1Y80DGO3N7 7MR8 BSEQDUR09EE413UTBJVT ", "EL4NKC987F53R5K 1SSASVHM1X2YW8J6YN7D QOZ45IDI67QO ", "UZJAOQV4MU7K4SII6ND 0ISGG7I9QNLNURFI8S QOZ45IDI67Q", "O XLPI3I37PHO4KCJWRC43 GSX WM22OLWWUUIX6H LDXSOYZG", "RFPWY ORI35NV4CKRK8DS 7CC9ELOSQBYX X54 IB ZJIMKAUL", "RLPWERJK5FTG E5DXBS57CQ2BP2 L0 RFJLR54SOZZV8N7LQKV", "Z SJ8 EPDGNCF2LHST2JRN EO VRLHW5IT93UB J95GS2 LV0C", "YM2PI HSC57JV9H7A3 XFS8LZBJXI Z15YMH UZJAOQV4MU7K4", "SII6ND KC CLGY2RAX6EYVEWZKD 5AUG7X5V8Z1B 1W5L5Y GC", "M4350DCE7 FXLZ69NOQWWF L0JBV39NEMD7 ILAN4GZ2X9S9 7", "1U ZMT120DT7RDZ 2PK 5Y XFS8LZBJXI RFJLR54SOZZV8N7L", "QKVZ I2FD2JI9ULTRUP6AL X54 OLB69B540DLJH EL4NKC987", "F53R5K 0C947Q685X4KCPN74Q2 DN276B700C6XPOT Q0ZPIOB", "C1B L0JBV39NEMD7 V71DZI4T EBQJVH1A3A 05ZJNY9DTNHV7", " ES2P LV0CYM2PI L2C818EAF56O76ZJBN9 8FCQMW CLGY2RA", "X6EYVEWZKD L2C818EAF56O76ZJBN9 ES2P JZGNUFFP4K4DB8", "G NG46R1K2AN5XB8379 GKL0FMG529MGQOY XNP70EP3LNXH09", "D GDL52KF9Q0LYZQQOD7MU EXZ0NKE2QVQYX64H 7YIT76H9 G", "DL52KF9Q0LYZQQOD7MU MP55VTR J95GS2 U1AVBYBTO5O1H00", " 7CC9ELOSQBYX O6OU41EOJHLFJ VBTJVK1Y80DGO3N7 Z2YQZ", "DC2 BSEQDUR09EE413UTBJVT 0I22JEN7DLJKV82Q8HT 3PP9M", "A2PVILAPI4ZCLTJ 5SZS4QGPOF1B7VD 1X4AW6AGJTS FI0DFY", "GINQD437V5AAN UKJ1L12E BOMIKU Q44MFZV9H AHPCY 1W5L", "5Y EYQBP 9OQX 6G2HUNOA8B2EH"};
    vector<int> seeds = {100, 58, 108, 103, 52, 67, 31, 32, 77, 104, 32, 15, 110, 122, 77, 39, 15, 34, 118, 6, 33, 26, 65, 76, 23, 28, 76, 46, 37, 27, 21, 70, 72, 50, 23, 45, 6, 90, 54, 76, 119, 95, 93, 111, 4, 21, 102};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SJ8", "XFS8LZBJXI", "1MEH376AV", "M9XJ0VZCF2NC", "L2C818EAF56O76ZJBN9", "BOMIKU", "XNP70EP3LNXH09D", "GDL52KF9Q0LYZQQOD7MU", "2PK", "BLTC294SRUH", "GDL52KF9Q0LYZQQOD7MU", "EXZ0NKE2QVQYX64H", "05ZJNY9DTNHV7", "TK6ELKKNB", "2PK", "YK5XEX4GJX5AZMMVNL", "EXZ0NKE2QVQYX64H", "J95GS2", "0I22JEN7DLJKV82Q8HT", "6CBRAB9ORT2CMIUIEI", "8UR1LAFSTY102KP5E6B", "Q44MFZV9H", "XLPI3I37PHO4KCJWRC43", "PAGP3P5SE9M9X4Q7RT8", "IF6GFQEZN6", "UZJAOQV4MU7K4SII6ND", "PAGP3P5SE9M9X4Q7RT8", "S9TAJSZ", "LS0I5", "RFJLR54SOZZV8N7LQKVZ", "EX7PG7NLK8F", "ORI35NV4CKRK8DS", "WM22OLWWUUIX6H", "ZMT120DT7RDZ", "IF6GFQEZN6", "XVPQG1OXE9V", "6CBRAB9ORT2CMIUIEI", "ZYG1JVLRHRD3MQJHM70", "EL4NKC987F53R5K", "PAGP3P5SE9M9X4Q7RT8", "ONGPANC", "MP55VTR", "U1AVBYBTO5O1H00", "Z2YQZDC2", "3PP9MA2PVILAPI4ZCLTJ", "EX7PG7NLK8F", "GKL0FMG529MGQOY"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> teams = {"90KM63QGBU MPQAZRKBKBKSQEN WP4IM1 PQT84XZZVU 13EZV", "JB8KRJXOLFI3Y YF2X52RBWY7T UGY7MVWI9CQZU95M DH ZKA", "RO JZNXLM KWFW ZDF TUBCT61DE UUT CIZ8D2HQ14BZ UTOY", "74BY5 SS3CLQHROKYQSH5U5B R4D0X1AGMBI8KL61 J9TNT1 W", "XS3JZ3YGG2VB3AW7KSV UVB50BH92RUY1CWGKU JG Q3VNGFS4", "FKM T752PIXTJBYUBDKXBRK A6J5V2P 3WWLYBYS291H JITW ", "REDC1V774GQ119PP2Z W43 Y19GV3RWXM12FH0 NMSOWVRPVVZ", "MIDH U7M6YV2J"};
    vector<string> games = {"90KM63QGBU U7M6YV2J MPQAZRKBKBKSQEN NMSOWVRPVVZMID", "H 13EZVJB8KRJXOLFI3Y ZDF MPQAZRKBKBKSQEN UGY7MVWI9", "CQZU95M PQT84XZZVU TUBCT61DE PQT84XZZVU 13EZVJB8KR", "JXOLFI3Y UTOY74BY5 SS3CLQHROKYQSH5U5B 90KM63QGBU M", "PQAZRKBKBKSQEN TUBCT61DE WXS3JZ3YGG2VB3AW7KSV ZKAR", "O T752PIXTJBYUBDKXBRK YF2X52RBWY7T JITW 13EZVJB8KR", "JXOLFI3Y REDC1V774GQ119PP2Z WP4IM1 UUT UGY7MVWI9CQ", "ZU95M JZNXLM PQT84XZZVU W43 KWFW JG DH ZKARO WP4IM", "1 Y19GV3RWXM12FH0 MPQAZRKBKBKSQEN WP4IM1 90KM63QGB", "U DH UGY7MVWI9CQZU95M 3WWLYBYS291H JZNXLM Q3VNGFS4", "FKM 90KM63QGBU UTOY74BY5 90KM63QGBU PQT84XZZVU ZDF", " UVB50BH92RUY1CWGKU DH A6J5V2P MPQAZRKBKBKSQEN CIZ", "8D2HQ14BZ WP4IM1 YF2X52RBWY7T CIZ8D2HQ14BZ R4D0X1A", "GMBI8KL61 YF2X52RBWY7T KWFW UUT J9TNT1"};
    vector<int> seeds = {8, 5, 31, 13, 30, 8, 4, 22, 2, 8, 4, 25, 12, 10, 29, 15, 8, 28, 25};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ZKARO", "YF2X52RBWY7T", "U7M6YV2J", "UUT", "NMSOWVRPVVZMIDH", "ZKARO", "13EZVJB8KRJXOLFI3Y", "Q3VNGFS4FKM", "WP4IM1", "ZKARO", "13EZVJB8KRJXOLFI3Y", "3WWLYBYS291H", "TUBCT61DE", "KWFW", "Y19GV3RWXM12FH0", "UTOY74BY5", "ZKARO", "W43", "3WWLYBYS291H"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> teams = {"HKH0YZXPD 01797NJ7UR3OLY412 4W01AQ1ER23ANR78XC73 F", "UVY39Y UOBXVYLON1BHF6U PG0 E2KO7X2DR L691QDI8 ISB ", "8G 2TD3CVRTNPJEGEB1 O1 X0NDKG 40WYED14 C7U NYRZJCP", "DO0JOWAMYK 6IR116JZ4MLY01G7 0DZZ7H3Z5WR9 K7MPX OF0", "V59I 5QE0UYP6AVLBCSGO BFL 9UF97XEHNROT7A559O7E 9PW", "2CJRB 83LC86 LQA7TKKVRED0X9E2B6TF MMUVQN5L G2WDHQE", "76 Y33CCKSJ1 86UZCD CFQTGRQJHIB596B91 W5CU47PL8ZWL", "V4Q 867ANHC9BB3967AH XT98JZ GHFSH5DMAA4 2YWUAUJFL1", "FRR 0TTF00FJUAIZFX5XI4R FS7LYK7TLX14FUB IJG1KSBM60", "W5WE5JOHZK VPMARJQRB7PRBOS1SCN0 GW 5L UF18MQECG N7", "520FI5VEXM0LZ 8LXDEDRNE4EJBO67 7Z9COJ1SMS4G4109H 6", "DA6CDK BO8RGBOFPC1UYJ ISZ5GF7JMRY4VCVXKQ FX9BGVP2 ", "ZEUXVBENZTXJA5 4E9WM27BER LV9B28IJ TBAD2EZO C0RCRS", "FJFWJ35N FCTGUFQM5E BJXWRMM4WZ3LDHIF99 8XMNX64U7KA", "K KG4M3HHK7T4S5N5D0X C0VSDB5KI8V6OPWJR3MD 3V7HZDNM", "M6ZS VM P1NI75MEQC TK27WHKWZHRC5NCPPW5 JHLO012AYI ", "DEMCTJOPKV1Y4KGBB85H TE4 K5OC9 TO C057PS153DR19K9G", "MZE 8IPQKJ APTNFI7E0K7X5OPP5X 8K8SKPH05YL 2F8VFBXS", "F54T3JOHQ0D 6RR NI7P705 M2RMQO97IZIBMAQHB6W KQ69KZ", "QPQRV71K EI85PI 14WVV9QFJ NDTCDI H4 4BRT2G9SM1FQY0", "C6MI IPVMKXEJH6O8R8V TCNPJSRXJO A34BUGBKONYR796UQS", " N8WWBDRIZKTWF6ICW2X9 NHZHRYJFIVFR799 WMS2GVX5WJBI", "APAHY35I CV 0V24TH GOTF 5ES2CPDOO4UIW1OAGR WCTOTE8", "8C4GJB3E NQTX665ZSR3JZFEQSY ONMIZEK7 OUB7VYFZX TYZ", "AHM7KUMM2R3 17 OGM84UTRZ JKZZK6F9M2H 7V9TR9VOY4KGK", "6FOR 1XKKVY6LP8JFE5TAAX8 L9X1Q8288A2N 3KZQRR WSDGL", "98V 3WBO2Y3TOGEN2AF9V ZE8QPXNPAQUN FKD8ZXUFL06H EB", "9XA8ZM1HN66QCTC 1QIK0YC 4APSTSGDHHIPDRG KXXJ7BRGUP", " 4A1DA09D5LHYBMDLF FMI8Y9F7JJAXV F3L UNT1A2MA3WNY ", "9SNW Z877US9PWQZJE2DMM63R 7Z054IEUZULY8N INSVOL 9A", " NPT6OD L4MID6B0Z6 7B 0TQTRGE5XVJ0Z NP3OGHIVOC5E92", "Z433IF 6OFH"};
    vector<string> games = {"83LC86 L9X1Q8288A2N GHFSH5DMAA4 WCTOTE88C4GJB3E 9P", "W2CJRB 3KZQRR 2YWUAUJFL1FRR 5ES2CPDOO4UIW1OAGR FUV", "Y39Y Y33CCKSJ1 83LC86 VPMARJQRB7PRBOS1SCN0 KG4M3HH", "K7T4S5N5D0X C057PS153DR19K9GMZE PG0 MMUVQN5L 5QE0U", "YP6AVLBCSGO ZE8QPXNPAQUN N7520FI5VEXM0LZ TCNPJSRXJ", "O W5CU47PL8ZWLV4Q 867ANHC9BB3967AH 2TD3CVRTNPJEGEB", "1 TBAD2EZO 01797NJ7UR3OLY412 NP3OGHIVOC5E92Z433IF ", "6IR116JZ4MLY01G7 BO8RGBOFPC1UYJ 5L N8WWBDRIZKTWF6I", "CW2X9 X0NDKG F3L O1 UNT1A2MA3WNY GW NHZHRYJFIVFR79", "9 8XMNX64U7KAK 8IPQKJ 0DZZ7H3Z5WR9 6DA6CDK 867ANHC", "9BB3967AH ONMIZEK7 O1 LV9B28IJ IJG1KSBM60W5WE5JOHZ", "K CV 6DA6CDK H4 L691QDI8 BJXWRMM4WZ3LDHIF99 ZEUXVB", "ENZTXJA5 KQ69KZQPQRV71K MMUVQN5L FS7LYK7TLX14FUB 4", "W01AQ1ER23ANR78XC73 0TQTRGE5XVJ0Z 8G Z877US9PWQZJE", "2DMM63R FUVY39Y 7B 4W01AQ1ER23ANR78XC73 86UZCD FX9", "BGVP2 EI85PI HKH0YZXPD 6OFH UOBXVYLON1BHF6U G2WDHQ", "E76 XT98JZ NQTX665ZSR3JZFEQSY BJXWRMM4WZ3LDHIF99 A", "PTNFI7E0K7X5OPP5X BO8RGBOFPC1UYJ NDTCDI 9UF97XEHNR", "OT7A559O7E WSDGL98V W5CU47PL8ZWLV4Q OUB7VYFZX 4E9W", "M27BER M2RMQO97IZIBMAQHB6W K7MPX EB9XA8ZM1HN66QCTC", " ISB FCTGUFQM5E 4W01AQ1ER23ANR78XC73 VM LQA7TKKVRE", "D0X9E2B6TF 1XKKVY6LP8JFE5TAAX8 FUVY39Y 3V7HZDNMM6Z", "S LV9B28IJ NI7P705 LQA7TKKVRED0X9E2B6TF IJG1KSBM60", "W5WE5JOHZK 01797NJ7UR3OLY412 P1NI75MEQC C7U 4A1DA0", "9D5LHYBMDLF 40WYED14 ZEUXVBENZTXJA5 HKH0YZXPD TK27", "WHKWZHRC5NCPPW5 BFL 3WBO2Y3TOGEN2AF9V HKH0YZXPD W5", "CU47PL8ZWLV4Q TK27WHKWZHRC5NCPPW5 JHLO012AYI 2TD3C", "VRTNPJEGEB1 9SNW C0VSDB5KI8V6OPWJR3MD TO P1NI75MEQ", "C DEMCTJOPKV1Y4KGBB85H 8LXDEDRNE4EJBO67 IPVMKXEJH6", "O8R8V 5QE0UYP6AVLBCSGO N7520FI5VEXM0LZ L691QDI8 IN", "SVOL TBAD2EZO 6RR G2WDHQE76 0TTF00FJUAIZFX5XI4R VM", " TE4 PG0 KG4M3HHK7T4S5N5D0X Y33CCKSJ1 2YWUAUJFL1FR", "R E2KO7X2DR 8XMNX64U7KAK NYRZJCPDO0JOWAMYK ISZ5GF7", "JMRY4VCVXKQ PG0 NPT6OD VPMARJQRB7PRBOS1SCN0 WMS2GV", "X5WJBIAPAHY35I 3V7HZDNMM6ZS K5OC9 86UZCD GHFSH5DMA", "A4 0DZZ7H3Z5WR9 1QIK0YC 7Z9COJ1SMS4G4109H 4BRT2G9S", "M1FQY0C6MI UOBXVYLON1BHF6U L4MID6B0Z6 C7U FX9BGVP2", " ISZ5GF7JMRY4VCVXKQ 14WVV9QFJ UOBXVYLON1BHF6U C0VS", "DB5KI8V6OPWJR3MD FS7LYK7TLX14FUB 0V24TH E2KO7X2DR ", "9A 9PW2CJRB GW C0RCRSFJFWJ35N 2F8VFBXSF54T3JOHQ0D ", "NYRZJCPDO0JOWAMYK KXXJ7BRGUP OF0V59I FKD8ZXUFL06H ", "01797NJ7UR3OLY412 CFQTGRQJHIB596B91 9UF97XEHNROT7A", "559O7E 5L K7MPX 7Z9COJ1SMS4G4109H FCTGUFQM5E 8K8SK", "PH05YL 8G C0RCRSFJFWJ35N BFL UF18MQECG UF18MQECG A", "34BUGBKONYR796UQS ISB 7Z054IEUZULY8N MMUVQN5L 7V9T", "R9VOY4KGK6FOR 40WYED14 FMI8Y9F7JJAXV CFQTGRQJHIB59", "6B91 TYZAHM7KUMM2R3 CFQTGRQJHIB596B91 XT98JZ OF0V5", "9I 8LXDEDRNE4EJBO67 86UZCD 17 X0NDKG 4E9WM27BER G2", "WDHQE76 JKZZK6F9M2H 6IR116JZ4MLY01G7 4APSTSGDHHIPD", "RG Y33CCKSJ1 OGM84UTRZ 0TTF00FJUAIZFX5XI4R GOTF"};
    vector<int> seeds = {125, 8};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9SNW", "8G"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> teams = {"AE01DHXX Z3KGTVI82BRKC 3XU RBFBV2R 0FSBBL0MQ1KC75G", "L 052TFKTFUYW U75QUIHQ7HX XD3AQ1H25VZNN3805V"};
    vector<string> games = {"AE01DHXX RBFBV2R Z3KGTVI82BRKC U75QUIHQ7HX Z3KGTVI", "82BRKC 3XU RBFBV2R 0FSBBL0MQ1KC75GL AE01DHXX XD3AQ", "1H25VZNN3805V 3XU 052TFKTFUYW AE01DHXX Z3KGTVI82BR", "KC"};
    vector<int> seeds = {0, 7, 2, 5, 6, 5, 2, 2, 2, 5, 2, 2, 6, 3, 5, 7, 6, 3, 0, 0, 1, 5, 1, 0, 2, 3, 5, 7};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AE01DHXX", "XD3AQ1H25VZNN3805V", "3XU", "052TFKTFUYW", "U75QUIHQ7HX", "052TFKTFUYW", "3XU", "3XU", "3XU", "052TFKTFUYW", "3XU", "3XU", "U75QUIHQ7HX", "RBFBV2R", "052TFKTFUYW", "XD3AQ1H25VZNN3805V", "U75QUIHQ7HX", "RBFBV2R", "AE01DHXX", "AE01DHXX", "Z3KGTVI82BRKC", "052TFKTFUYW", "Z3KGTVI82BRKC", "AE01DHXX", "3XU", "RBFBV2R", "052TFKTFUYW", "XD3AQ1H25VZNN3805V"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> teams = {"GOWXBY95QPVOMFY J3 C0NJ70BR SE4NB"};
    vector<string> games = {"J3 C0NJ70BR GOWXBY95QPVOMFY SE4NB GOWXBY95QPVOMFY ", "J3"};
    vector<int> seeds = {1, 0, 0, 2, 3, 2, 0, 2, 3, 1};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"J3", "GOWXBY95QPVOMFY", "GOWXBY95QPVOMFY", "C0NJ70BR", "SE4NB", "C0NJ70BR", "GOWXBY95QPVOMFY", "C0NJ70BR", "SE4NB", "J3"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> teams = {"5D4ZDCPCJZCUED3GQV SCPKHUMW 6ZBEJTK1GQ5W TAGEXSUYG", "Z2NK 9IMKTQTSPEPPPK8A GEMDCOJ5 G2JAJC NW2DXF QW02C", " BXPDV5SUMJH81K9R8 4F8R8FBK0IGC0V PR93MEV2Y3ZPBY4M", " EOM7OK6 7PR78B8JWYHQH2ASMNMF 78GO0HTS90B8N Q5ZQIW", "20OXX8Y 2Y3F3RVL2ALKKWQMM H9GSNJ0TPO35 WUACZKZ8HP ", "5HYR49S4537OY6W4PSC PJMLIXI0Y13E3M0IEU BIZIWIXM9BS", "KB2VX5 6P1YV3PBFOFWKA93UF S6U4KTJPMXPKIKT8CE5Q P4 ", "5NKZTR8BRVG87XXL 0TJDAEF37 SFNR 6FBT46ZL8R4YXV G10", "5IP14F78JO4 8U P2Z WQGUUA25SMA0TKTX3RV5 86M0TRMX19", "UBRXUHMKWQ YFOSK2ZCHHREA VL69TKA2EHE7 C8H 46XSOUN9", "DVAMIZRY44KR CNU4O3TDH5IL8 YP 52 7LK9RXXAGYM TW5CA", "V1F1KL2L4HHM8T RLDL0MLVGW T2 6PA9P7A1KL9DXPG76 ONM", "Z 69JUI49QGYBE5TYXP3 CTILMF6DX 2OSGQ2VRFGFRNIVU N1", "Z7Q1XL 3B KWWXF2ONWRG0BZ74 XLT90ONEYHH CW4FZVCVB8O", "D6 17FV6KFM7A44ZM9SUJH RKRFIEDD16 K8MJR7EVCN9Z6BXZ", "U V6FJ249F HL7L FXI38UTBJ7EB SF0SXGBPRX2OOQ OPV76A", "5BMBUOCAG45TW 2U0740LWP03JYV5599HM 3RI791GZF0YNP1O", "KO2W 324AU1I35LH7PU5JV4P 1BVW82SCYKS39N 4H9H17DKRH", "YL9SADA PVH6BKTZ 1H3ELT80GMAPRF0I5WK 2BLA21KK7YLW3", " ON8H4ETN69EN 8A1SYWR0RFO DRG PLL56LZCYDJVXC88 0CJ", "LTEVM4FHI QEJ9ZGCZ402 FI5NUTZZ0XB4FE4R SR2L ZD3BNK", "7O9Q6MTDCH NLZE4I2EXKBO5C37 OA0259FUTGDRRJU OK7 K6", "UIQTLRWADG3J AE64MK3HKEK S10VELIMQNRA2TEVA C5SPO00", "U36AYF B3CXGWZHO4RWC LFM2PXZYXOPS4 3VKYP7NSZM YML4", "XZS38Q5KN52K GP3MOWNG999 HRTVA9QJP6A5RUNFOT 3VURVP", "5H0 87MCAVVLPU0 1S815HW Y5OW6C0I3TGVCSBHBD 2GJAGPK", "4WQBGS OJKMF0RYZI5AWVSJB0JA VQ1 TBF8ID4B5B B571CSC", "YFDK LLQ 99R9CR47KY3DNNDL EZ9JGGVU1RBCLP LR0YBQ9 J", "G 930EVAI3ASG0 W73J74U049L88 Z2IO27RB1MAJJFK6 E2WL", " FA6L7FEAKW6 K2MORMWBJ838MXWW YL Y8SY05JLEUTOMJ7 0", "SLX6D6EI9NKVMIAU YYM3B0I1IV 139 TOM6 IPCYB IKEG7Z6", " QXJOTAFG 1GXFDRE779W1GR3113X MXX6BZT63D 600KTGL6L", "HKW R93 7M08BFFSP7YT OBX4DXNIX"};
    vector<string> games = {"2Y3F3RVL2ALKKWQMM FA6L7FEAKW6 5HYR49S4537OY6W4PSC ", "T2 7LK9RXXAGYM C5SPO00U36AYF P4 99R9CR47KY3DNNDL 2", "U0740LWP03JYV5599HM 3RI791GZF0YNP1OKO2W SFNR C8H K", "WWXF2ONWRG0BZ74 0CJLTEVM4FHI 5NKZTR8BRVG87XXL LLQ ", "G105IP14F78JO4 YFOSK2ZCHHREA Q5ZQIW20OXX8Y CTILMF6", "DX WUACZKZ8HP Z2IO27RB1MAJJFK6 SF0SXGBPRX2OOQ 1BVW", "82SCYKS39N 3B QEJ9ZGCZ402 G105IP14F78JO4 OJKMF0RYZ", "I5AWVSJB0JA 0TJDAEF37 46XSOUN9DVAMIZRY44KR C8H GP3", "MOWNG999 2OSGQ2VRFGFRNIVU SR2L 9IMKTQTSPEPPPK8A MX", "X6BZT63D G2JAJC QXJOTAFG GEMDCOJ5 1GXFDRE779W1GR31", "13X 4F8R8FBK0IGC0V XLT90ONEYHH 78GO0HTS90B8N 2OSGQ", "2VRFGFRNIVU G2JAJC K8MJR7EVCN9Z6BXZU P2Z Y5OW6C0I3", "TGVCSBHBD HL7L PVH6BKTZ YFOSK2ZCHHREA 3VURVP5H0 PJ", "MLIXI0Y13E3M0IEU 930EVAI3ASG0 6P1YV3PBFOFWKA93UF L", "R0YBQ9 9IMKTQTSPEPPPK8A HL7L CW4FZVCVB8OD6 DRG S6U", "4KTJPMXPKIKT8CE5Q 52 6ZBEJTK1GQ5W SF0SXGBPRX2OOQ 4", "6XSOUN9DVAMIZRY44KR YML4XZS38Q5KN52K RKRFIEDD16 ON", "8H4ETN69EN TAGEXSUYGZ2NK 600KTGL6LHKW RLDL0MLVGW A", "E64MK3HKEK 6PA9P7A1KL9DXPG76 OK7 SCPKHUMW OPV76A5B", "MBUOCAG45TW 5D4ZDCPCJZCUED3GQV 2U0740LWP03JYV5599H", "M 6P1YV3PBFOFWKA93UF 7LK9RXXAGYM PJMLIXI0Y13E3M0IE", "U RLDL0MLVGW EOM7OK6 0SLX6D6EI9NKVMIAU 8U 86M0TRMX", "19UBRXUHMKWQ OPV76A5BMBUOCAG45TW 324AU1I35LH7PU5JV", "4P 17FV6KFM7A44ZM9SUJH 8A1SYWR0RFO FXI38UTBJ7EB 4H", "9H17DKRHYL9SADA 78GO0HTS90B8N YL H9GSNJ0TPO35 E2WL", " T2 K6UIQTLRWADG3J BIZIWIXM9BSKB2VX5 JG 52 B3CXGWZ", "HO4RWC 7PR78B8JWYHQH2ASMNMF N1Z7Q1XL QW02C IPCYB O", "NMZ OA0259FUTGDRRJU 6FBT46ZL8R4YXV VQ1 4F8R8FBK0IG", "C0V 139 PR93MEV2Y3ZPBY4M YYM3B0I1IV CTILMF6DX ZD3B", "NK7O9Q6MTDCH QW02C 17FV6KFM7A44ZM9SUJH 5D4ZDCPCJZC", "UED3GQV P2Z XLT90ONEYHH PLL56LZCYDJVXC88 SFNR TBF8", "ID4B5B GEMDCOJ5 V6FJ249F N1Z7Q1XL FI5NUTZZ0XB4FE4R", " 5NKZTR8BRVG87XXL CNU4O3TDH5IL8 2Y3F3RVL2ALKKWQMM ", "69JUI49QGYBE5TYXP3 P4 YP BXPDV5SUMJH81K9R8 CW4FZVC", "VB8OD6 TAGEXSUYGZ2NK FXI38UTBJ7EB YP LFM2PXZYXOPS4", " 5D4ZDCPCJZCUED3GQV OBX4DXNIX CNU4O3TDH5IL8 3VKYP7", "NSZM WQGUUA25SMA0TKTX3RV5 1S815HW 6FBT46ZL8R4YXV V", "L69TKA2EHE7 WUACZKZ8HP 6PA9P7A1KL9DXPG76 0TJDAEF37", " B571CSCYFDK V6FJ249F 1H3ELT80GMAPRF0I5WK H9GSNJ0T", "PO35 ONMZ Q5ZQIW20OXX8Y K2MORMWBJ838MXWW PR93MEV2Y", "3ZPBY4M KWWXF2ONWRG0BZ74 69JUI49QGYBE5TYXP3 NLZE4I", "2EXKBO5C37 BIZIWIXM9BSKB2VX5 TW5CAV1F1KL2L4HHM8T 8", "6M0TRMX19UBRXUHMKWQ 87MCAVVLPU0 6ZBEJTK1GQ5W R93 K", "8MJR7EVCN9Z6BXZU 2BLA21KK7YLW3 5HYR49S4537OY6W4PSC", " W73J74U049L88 SCPKHUMW 8U 8U 2GJAGPK4WQBGS TW5CAV", "1F1KL2L4HHM8T S10VELIMQNRA2TEVA EOM7OK6 3B SCPKHUM", "W 7M08BFFSP7YT NW2DXF IKEG7Z6 VL69TKA2EHE7 HRTVA9Q", "JP6A5RUNFOT P2Z WQGUUA25SMA0TKTX3RV5 7PR78B8JWYHQH", "2ASMNMF Y8SY05JLEUTOMJ7 BXPDV5SUMJH81K9R8 TOM6 S6U", "4KTJPMXPKIKT8CE5Q EZ9JGGVU1RBCLP NW2DXF RKRFIEDD16"};
    vector<int> seeds = {24, 83, 111, 34, 31, 86, 88, 81, 26, 17, 102, 40, 81, 121, 75, 99, 35, 63, 2, 98, 122, 120, 96, 117, 126, 122, 108, 86, 9, 9, 112, 119, 91, 51, 80, 126, 16, 120, 27, 14, 79, 46, 96, 73, 67, 36, 67};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PR93MEV2Y3ZPBY4M", "1H3ELT80GMAPRF0I5WK", "2GJAGPK4WQBGS", "C8H", "WUACZKZ8HP", "LFM2PXZYXOPS4", "0CJLTEVM4FHI", "3VURVP5H0", "QW02C", "G105IP14F78JO4", "K2MORMWBJ838MXWW", "RLDL0MLVGW", "3VURVP5H0", "VQ1", "PVH6BKTZ", "Y5OW6C0I3TGVCSBHBD", "WQGUUA25SMA0TKTX3RV5", "46XSOUN9DVAMIZRY44KR", "4F8R8FBK0IGC0V", "TBF8ID4B5B", "LLQ", "LR0YBQ9", "Z2IO27RB1MAJJFK6", "Y8SY05JLEUTOMJ7", "FA6L7FEAKW6", "LLQ", "1GXFDRE779W1GR3113X", "LFM2PXZYXOPS4", "78GO0HTS90B8N", "78GO0HTS90B8N", "7M08BFFSP7YT", "R93", "B3CXGWZHO4RWC", "TW5CAV1F1KL2L4HHM8T", "87MCAVVLPU0", "FA6L7FEAKW6", "8U", "LR0YBQ9", "S6U4KTJPMXPKIKT8CE5Q", "EOM7OK6", "324AU1I35LH7PU5JV4P", "YFOSK2ZCHHREA", "Z2IO27RB1MAJJFK6", "SR2L", "3RI791GZF0YNP1OKO2W", "52", "3RI791GZF0YNP1OKO2W"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> teams = {"8LMJIG66O1KYEUOS V6EWTSA61FA3390 79ZV74XTVAMAW0IX6", "56 T25WMAWY36 T3LEBBKUV2OXXP EXEDFA UDCP19MQVF7C D", "FNEZY2DEL48 01A JFPXSPFKGW0O1ZU Z7Z9ASAOWATPYC1 CP", "AJDB45 86BLNQX7KQLE3M5SFE NQ4CLB1E2I N2JKMDUSG32B ", "J1TS1UZSJC 5L2EY1NS82DA33 F82OR6XBSLP488PPCQYA ZOE", "83Z PKV6F4DNLTGNX4EGYVME N6MC5K MS3J8JJCLZWBLL35QX", "E W5AUD32U 0LRGW8WRUTL8 RAWHGX3SJG7UD WWMSO1J2X5BC", "BC7Y VM357X5NAQKXZBU4 1ALYQRLO0QF9ZUDN80 6JOMPU7S ", "Z9H6KK0KDT9H NB8 60JREIUQ"};
    vector<string> games = {"V6EWTSA61FA3390 NB8 T25WMAWY36 6JOMPU7S NQ4CLB1E2I", " ZOE83Z UDCP19MQVF7C JFPXSPFKGW0O1ZU EXEDFA Z7Z9AS", "AOWATPYC1 8LMJIG66O1KYEUOS V6EWTSA61FA3390 86BLNQX", "7KQLE3M5SFE PKV6F4DNLTGNX4EGYVME Z7Z9ASAOWATPYC1 M", "S3J8JJCLZWBLL35QXE 8LMJIG66O1KYEUOS 60JREIUQ T3LEB", "BKUV2OXXP CPAJDB45 UDCP19MQVF7C WWMSO1J2X5BCBC7Y 8", "LMJIG66O1KYEUOS DFNEZY2DEL48 T3LEBBKUV2OXXP 1ALYQR", "LO0QF9ZUDN80 DFNEZY2DEL48 RAWHGX3SJG7UD N2JKMDUSG3", "2B F82OR6XBSLP488PPCQYA 79ZV74XTVAMAW0IX656 Z9H6KK", "0KDT9H T25WMAWY36 T3LEBBKUV2OXXP 79ZV74XTVAMAW0IX6", "56 NQ4CLB1E2I V6EWTSA61FA3390 79ZV74XTVAMAW0IX656 ", "V6EWTSA61FA3390 N2JKMDUSG32B CPAJDB45 N6MC5K 79ZV7", "4XTVAMAW0IX656 EXEDFA 01A 0LRGW8WRUTL8 JFPXSPFKGW0", "O1ZU W5AUD32U 8LMJIG66O1KYEUOS J1TS1UZSJC J1TS1UZS", "JC 5L2EY1NS82DA33 8LMJIG66O1KYEUOS T25WMAWY36 T25W", "MAWY36 86BLNQX7KQLE3M5SFE V6EWTSA61FA3390 UDCP19MQ", "VF7C EXEDFA VM357X5NAQKXZBU4 DFNEZY2DEL48 01A"};
    vector<int> seeds = {24, 12, 28, 23, 21, 25, 0, 3, 8, 1, 11, 29, 12, 28, 2, 0, 0, 0, 16, 3};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"RAWHGX3SJG7UD", "86BLNQX7KQLE3M5SFE", "6JOMPU7S", "0LRGW8WRUTL8", "MS3J8JJCLZWBLL35QXE", "WWMSO1J2X5BCBC7Y", "8LMJIG66O1KYEUOS", "T25WMAWY36", "01A", "V6EWTSA61FA3390", "CPAJDB45", "Z9H6KK0KDT9H", "86BLNQX7KQLE3M5SFE", "6JOMPU7S", "79ZV74XTVAMAW0IX656", "8LMJIG66O1KYEUOS", "8LMJIG66O1KYEUOS", "8LMJIG66O1KYEUOS", "5L2EY1NS82DA33", "T25WMAWY36"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> teams = {"50PUOJNC I5VVBLJEAJ 6DESI8XWQDKAAZNC SACSVDFVBUSY9", "LRF ZL4VY5F33NN1T8O UZ8 W78HP0 GMM JO0OIO1FEPHIM M", "XRQWTK0AC0NX29AF T29LR0LSS9BCYGWX 0380TKUMC6 926RF", "W0B0 GG7SPXC14YT91J04Q HJ0NC2L5XN21 SM SLKA2QI6MN1", "F1 FFQCY22TU2I7 H08WEFTJ MEKV3YV1WB7B G807C 88 DMC", "MDGSF2WXPWSBH8JZY 5HVJHQ24QPZ2OWLL4EO PJWYCBL7BQGL", "1 CX584HOMS1OUEKAVGA6 R05FA8C YV74K4CDLFYN660N1 E9", "M2DRP4YVACP0Z R6YKQ5AZ7WSUHA D4LF3KPBHZF0A8YX5P2B ", "WWFGDHF836FZ4 68E68GSIUU8XCLQR7 8LN63PEHN6UJNQRP I", "X0PEH51D158J1S LVL2DUNB07V3R 6V9D1Y5S1RY 4PS1T21UE", "W1JG9 XZP3B8YEIFN849Y3G2 7TICEDK2HOKNOPDY4 M0ADFDY", "OQIM6FBO6Z VVCSDXPV8NNTQG LU OMH9QZP1CQ3V 8N9K G05", "NLQ9H BC5RVIRVM0TL JZSTFZ1NALF2ZDEYH0X 79056550GK5", "CRLU7XSQS WYIK00SX 6CQJSBBU3NFPVGT2A NPIOYA5YR0J 8", "ZSUQWEG 09AKA ER5O ADH ST 28LR J8 7E RL9X3UK1 90ES", "NP0M4ON2F07ZK VHAM87Q R0QXSOPX11MXUB4W P59UWHIWL8R", "JUY 5HZ 190PEPGXV6Q2X VE6N 6VY1OSWYS7Y4NU ZCH6XH S", "H1C TOJ2EMCDGTP 90TREG119MM5D 797YFZL9DDC9CELFP 4Z", "V P7PSK LQF HLSKEO 0HIAOPH50S5Q TC4CUK 5RTRNY39BTL", "PX1VJ1GY F9 0VJT0 3LU EPY N0EZ87 96UWMH46PIYH9 PSI", "IJMH R4QAK25FCJRLH07LS90 DIHR9H2Y97 ZSOWHZ OQW9RCD", "TRU 0RH6B1D M4K MR4QVAYP6PH1OEHT P6 L7O6RBK44 ECAG", "4501JU EH2JJ VZ44GO H1RZ 3QOTX4XUJ003TFPSQRMX DPBJ", "FA5ZMN0MP99NFH5A NT7DQK6Z4D8K 5DBVG3DDRT5DAL0L7 FZ", "NOVFBUSB6S9RHS74FV TEK9JD 3G3EZ7 GGY HII8976Z W5KL", "PL4RICCLBA9 5NKM5NU58A3M 5RRXY5 3RRX7MXUT4TEDNBGDO", "MW TN9KFHKS08UKQIN9 YGWKFAT41G1RERT GKV9LE1UV8X3CH", "3VPA PJSYPAJGNAUTIYS4PZ2 8DU153NA812 O1GN3RH DY1PV", "YDAL344UPEKSIX6 E2VF5I2KQD602GY MYYPLSP1LD4D5 EA7Z", "0HKYBEOH4WI F6J 7KY1T08RNE0C7N TZIWR3X6BMHQ 9I6KA"};
    vector<string> games = {"G807C OMH9QZP1CQ3V 09AKA 4ZV UZ8 J8 H08WEFTJ G05NL", "Q9H 50PUOJNC R0QXSOPX11MXUB4W W78HP0 CX584HOMS1OUE", "KAVGA6 SM 79056550GK5CRLU7XSQS SACSVDFVBUSY9LRF E9", "M2DRP4YVACP0Z VHAM87Q 5HZ 28LR SH1C ADH 90TREG119M", "M5D CX584HOMS1OUEKAVGA6 XZP3B8YEIFN849Y3G2 6DESI8X", "WQDKAAZNC 90ESNP0M4ON2F07ZK OMH9QZP1CQ3V EPY W78HP", "0 28LR DMCMDGSF2WXPWSBH8JZY VVCSDXPV8NNTQG J8 ZCH6", "XH MEKV3YV1WB7B 8N9K 6V9D1Y5S1RY OQW9RCDTRU 88 TEK", "9JD 90ESNP0M4ON2F07ZK 190PEPGXV6Q2X ST TOJ2EMCDGTP", " GG7SPXC14YT91J04Q TN9KFHKS08UKQIN9 8LN63PEHN6UJNQ", "RP MR4QVAYP6PH1OEHT 8ZSUQWEG P7PSK IX0PEH51D158J1S", " M4K R05FA8C 3QOTX4XUJ003TFPSQRMX 926RFW0B0 YGWKFA", "T41G1RERT GMM DY1PVYDAL344UPEKSIX6 MEKV3YV1WB7B GG", "Y 7TICEDK2HOKNOPDY4 R4QAK25FCJRLH07LS90 50PUOJNC W", "WFGDHF836FZ4 NPIOYA5YR0J LQF PJWYCBL7BQGL1 7TICEDK", "2HOKNOPDY4 FFQCY22TU2I7 W5KLPL4RICCLBA9 LU N0EZ87 ", "PJWYCBL7BQGL1 NT7DQK6Z4D8K SLKA2QI6MN1F1 JZSTFZ1NA", "LF2ZDEYH0X CX584HOMS1OUEKAVGA6 DPBJFA5ZMN0MP99NFH5", "A MXRQWTK0AC0NX29AF ER5O I5VVBLJEAJ D4LF3KPBHZF0A8", "YX5P2B DMCMDGSF2WXPWSBH8JZY FZNOVFBUSB6S9RHS74FV 6", "DESI8XWQDKAAZNC R6YKQ5AZ7WSUHA 5HVJHQ24QPZ2OWLL4EO", " 5DBVG3DDRT5DAL0L7 VVCSDXPV8NNTQG 96UWMH46PIYH9 R6", "YKQ5AZ7WSUHA IX0PEH51D158J1S YV74K4CDLFYN660N1 6V9", "D1Y5S1RY 79056550GK5CRLU7XSQS TC4CUK MXRQWTK0AC0NX", "29AF 8DU153NA812 JO0OIO1FEPHIM O1GN3RH 7E 6VY1OSWY", "S7Y4NU R6YKQ5AZ7WSUHA EH2JJ D4LF3KPBHZF0A8YX5P2B E", "CAG4501JU FFQCY22TU2I7 BC5RVIRVM0TL SACSVDFVBUSY9L", "RF F6J JO0OIO1FEPHIM ADH GG7SPXC14YT91J04Q 6CQJSBB", "U3NFPVGT2A UZ8 MYYPLSP1LD4D5 SACSVDFVBUSY9LRF RL9X", "3UK1 88 LU ZL4VY5F33NN1T8O YV74K4CDLFYN660N1 ER5O ", "797YFZL9DDC9CELFP HJ0NC2L5XN21 WYIK00SX 68E68GSIUU", "8XCLQR7 P6 YV74K4CDLFYN660N1 H1RZ WWFGDHF836FZ4 68", "E68GSIUU8XCLQR7 8N9K 3LU H08WEFTJ HII8976Z M0ADFDY", "OQIM6FBO6Z PSIIJMH 50PUOJNC 9I6KA LVL2DUNB07V3R 0R", "H6B1D 926RFW0B0 NPIOYA5YR0J ZL4VY5F33NN1T8O 7E I5V", "VBLJEAJ VHAM87Q HJ0NC2L5XN21 3RRX7MXUT4TEDNBGDOMW ", "T29LR0LSS9BCYGWX 09AKA 5HVJHQ24QPZ2OWLL4EO M0ADFDY", "OQIM6FBO6Z XZP3B8YEIFN849Y3G2 DIHR9H2Y97 G807C 3G3", "EZ7 4PS1T21UEW1JG9 ZSOWHZ SLKA2QI6MN1F1 5NKM5NU58A", "3M W78HP0 E2VF5I2KQD602GY ZL4VY5F33NN1T8O EA7Z0HKY", "BEOH4WI I5VVBLJEAJ TZIWR3X6BMHQ G05NLQ9H 0VJT0 WWF", "GDHF836FZ4 L7O6RBK44 D4LF3KPBHZF0A8YX5P2B 8LN63PEH", "N6UJNQRP BC5RVIRVM0TL F9 UZ8 R05FA8C 0380TKUMC6 GK", "V9LE1UV8X3CH3VPA GMM ST RL9X3UK1 VE6N 6CQJSBBU3NFP", "VGT2A HLSKEO SM 5RRXY5 0380TKUMC6 8ZSUQWEG R0QXSOP", "X11MXUB4W P59UWHIWL8RJUY E9M2DRP4YVACP0Z VZ44GO R0", "5FA8C 4PS1T21UEW1JG9 T29LR0LSS9BCYGWX PJSYPAJGNAUT", "IYS4PZ2 GMM PJWYCBL7BQGL1 6DESI8XWQDKAAZNC 7KY1T08", "RNE0C7N JZSTFZ1NALF2ZDEYH0X 5RTRNY39BTLPX1VJ1GY WY", "IK00SX 0HIAOPH50S5Q E9M2DRP4YVACP0Z LVL2DUNB07V3R"};
    vector<int> seeds = {41, 114, 118, 61, 35, 53, 95, 45, 21, 86, 86, 3};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"G05NLQ9H", "MYYPLSP1LD4D5", "TN9KFHKS08UKQIN9", "M0ADFDYOQIM6FBO6Z", "IX0PEH51D158J1S", "ST", "4ZV", "4PS1T21UEW1JG9", "PJWYCBL7BQGL1", "0VJT0", "0VJT0", "6DESI8XWQDKAAZNC"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> teams = {"E97OF7CID HQQV AE0SIKMBSZ2IF19O VIY7RLQ06N6W4N MQ9", "IW 9G M9SU6APULPV NYLKBP4 CWD2DZ024U1M 08IXO3MEL2T", "19Y LZJ KLDOUZOXXY2I373L5JJL JT5Q 03EX 8DWIA5TQSH ", "6GDYGIUFSWURID PHNKJI00VDRAH NC AFCC9QGWNA 01921LC", " 0M5R3E016JEM6X0Z7MS DBFMSBY989IST39GNK0 61MV6WY L", "9OF7PFTHRV71DDT284 LG L322BKMPSRVI8AP YCQOB2OUZ7YS", "8 XDYE53 0SMJ BFEMAELHS RPROPKH70N0BD77 9SQGIYEUIB", "9W204G2RHW"};
    vector<string> games = {"LZJ DBFMSBY989IST39GNK0 HQQV M9SU6APULPV 03EX AFCC", "9QGWNA VIY7RLQ06N6W4N MQ9IW M9SU6APULPV 08IXO3MEL2", "T19Y AE0SIKMBSZ2IF19O BFEMAELHS HQQV 8DWIA5TQSH HQ", "QV RPROPKH70N0BD77 9G YCQOB2OUZ7YS8 M9SU6APULPV L3", "22BKMPSRVI8AP VIY7RLQ06N6W4N 0SMJ AE0SIKMBSZ2IF19O", " 03EX E97OF7CID HQQV MQ9IW XDYE53 9G LZJ 08IXO3MEL", "2T19Y 61MV6WY HQQV AE0SIKMBSZ2IF19O NYLKBP4 LG E97", "OF7CID 9SQGIYEUIB9W204G2RHW 8DWIA5TQSH NC VIY7RLQ0", "6N6W4N JT5Q 6GDYGIUFSWURID PHNKJI00VDRAH AE0SIKMBS", "Z2IF19O 9G MQ9IW KLDOUZOXXY2I373L5JJL E97OF7CID NY", "LKBP4 E97OF7CID VIY7RLQ06N6W4N CWD2DZ024U1M L9OF7P", "FTHRV71DDT284 JT5Q 01921LC E97OF7CID 6GDYGIUFSWURI", "D KLDOUZOXXY2I373L5JJL 0M5R3E016JEM6X0Z7MS NYLKBP4", " CWD2DZ024U1M"};
    vector<int> seeds = {19, 31, 18, 10, 29, 1, 13, 14, 16, 8, 25, 8, 9, 14, 22, 9, 30, 31, 14, 1, 21, 28, 13, 29, 21, 1, 18, 14};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01921LC", "9SQGIYEUIB9W204G2RHW", "AFCC9QGWNA", "LZJ", "BFEMAELHS", "HQQV", "03EX", "8DWIA5TQSH", "PHNKJI00VDRAH", "CWD2DZ024U1M", "L322BKMPSRVI8AP", "CWD2DZ024U1M", "08IXO3MEL2T19Y", "8DWIA5TQSH", "61MV6WY", "08IXO3MEL2T19Y", "RPROPKH70N0BD77", "9SQGIYEUIB9W204G2RHW", "8DWIA5TQSH", "HQQV", "DBFMSBY989IST39GNK0", "0SMJ", "03EX", "BFEMAELHS", "DBFMSBY989IST39GNK0", "HQQV", "AFCC9QGWNA", "8DWIA5TQSH"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> teams = {"T3ZXCIIXE0F5PN 8W9C6XHYLECJZ8B9 IUATXEE47 3DH5L3CW", "ZIR921NV8P 6W U784YCB3MDO7R YPR8ENQGE66EGD MEV HA4", "CHD MN4UDQ 56QDG5X4NM H7NEJYI4X72GWWKSH X1NW0LTOXW", "7 BE 6YABKPHB25ICLK45B OTJYLGWP2IXM738I BL8V DPL24", "D4Z KW3WWR84A VDRRMJXR5OJYS8 COV7FN SOSRLQ7BZOD1QB", " 8J4QEPN3J6O FRT1CQC QU2RRPGKZ YGEC5RNM5LT73SOD28 ", "U8RJI0RU8JCP70 7B32Z3WSF1O2M4R ZIH182739R 9WM565KH", "5Q T7DFNWD9Z79JIVFU7NW GRW2UKLSVNBCVMFEG"};
    vector<string> games = {"HA4CHD FRT1CQC MEV QU2RRPGKZ 8W9C6XHYLECJZ8B9 IUAT", "XEE47 8W9C6XHYLECJZ8B9 T7DFNWD9Z79JIVFU7NW T3ZXCII", "XE0F5PN GRW2UKLSVNBCVMFEG 6YABKPHB25ICLK45B DPL24D", "4Z T3ZXCIIXE0F5PN 3DH5L3CWZIR921NV8P YPR8ENQGE66EG", "D MN4UDQ 3DH5L3CWZIR921NV8P ZIH182739R MEV HA4CHD ", "IUATXEE47 9WM565KH5Q 8W9C6XHYLECJZ8B9 6YABKPHB25IC", "LK45B IUATXEE47 BE 6W H7NEJYI4X72GWWKSH U784YCB3MD", "O7R U8RJI0RU8JCP70 X1NW0LTOXW7 VDRRMJXR5OJYS8 3DH5", "L3CWZIR921NV8P 6W IUATXEE47 U784YCB3MDO7R U784YCB3", "MDO7R 56QDG5X4NM MN4UDQ 8J4QEPN3J6O 8W9C6XHYLECJZ8", "B9 YPR8ENQGE66EGD T3ZXCIIXE0F5PN OTJYLGWP2IXM738I ", "YPR8ENQGE66EGD YGEC5RNM5LT73SOD28 T3ZXCIIXE0F5PN 8", "W9C6XHYLECJZ8B9 6W 7B32Z3WSF1O2M4R 56QDG5X4NM SOSR", "LQ7BZOD1QB OTJYLGWP2IXM738I BL8V H7NEJYI4X72GWWKSH", " COV7FN T3ZXCIIXE0F5PN MEV BE KW3WWR84A 3DH5L3CWZI", "R921NV8P X1NW0LTOXW7"};
    vector<int> seeds = {23, 6, 5, 16, 11, 25, 29, 24, 8, 3, 29, 29, 0, 28, 14, 28, 21, 17, 22, 12, 9, 9, 18, 11, 21, 8, 5, 28, 30, 20, 16, 17, 5, 23, 3, 6, 29, 5, 18, 14, 2, 30, 11, 18, 8, 22, 7, 22, 18};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FRT1CQC", "YPR8ENQGE66EGD", "U784YCB3MDO7R", "BL8V", "H7NEJYI4X72GWWKSH", "YGEC5RNM5LT73SOD28", "9WM565KH5Q", "QU2RRPGKZ", "HA4CHD", "3DH5L3CWZIR921NV8P", "9WM565KH5Q", "9WM565KH5Q", "T3ZXCIIXE0F5PN", "ZIH182739R", "6YABKPHB25ICLK45B", "ZIH182739R", "SOSRLQ7BZOD1QB", "DPL24D4Z", "8J4QEPN3J6O", "X1NW0LTOXW7", "MN4UDQ", "MN4UDQ", "KW3WWR84A", "H7NEJYI4X72GWWKSH", "SOSRLQ7BZOD1QB", "HA4CHD", "U784YCB3MDO7R", "ZIH182739R", "T7DFNWD9Z79JIVFU7NW", "COV7FN", "BL8V", "DPL24D4Z", "U784YCB3MDO7R", "FRT1CQC", "3DH5L3CWZIR921NV8P", "YPR8ENQGE66EGD", "9WM565KH5Q", "U784YCB3MDO7R", "KW3WWR84A", "6YABKPHB25ICLK45B", "IUATXEE47", "T7DFNWD9Z79JIVFU7NW", "H7NEJYI4X72GWWKSH", "KW3WWR84A", "HA4CHD", "8J4QEPN3J6O", "MEV", "8J4QEPN3J6O", "KW3WWR84A"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> teams = {"A B C D E F G H"};
    vector<string> games = {"A B C D A C E F"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 6, 7};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "E", "G", "C", "D", "H", "F", "B"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> teams = {"Z Y X W V U T S R Q P O NH NG NF NE ND NC NB NA N ", "MZ MY MX MW MV MU MT MS MR MQ MP MO MN MM ML MK MJ", " MI MH MG MF ME MD MC MB MA M9 M8 M7 M6 M5 M4 M3 M", "2 M1 M0 M LZ LY LX LW LV LU LT LS LR LQ LP LO LN L", "M LL LK LJ LI LH LG LF LE LD LC LB LA L9 L8 L7 L6 ", "L5 L4 L3 L2 L1 L0 L KZ KY KX KW KV KU KT KS KR KQ ", "KP KO KN KM KL KK KJ KI KH KG KF KE KD KC KB KA K9", " K8 K7 K6 K5 K4 K3 K2 K1 K0 K JZ JY JX JW JV JU JT", " JS JR JQ JP JO JN JM JL JK JJ JI JH JG JF JE JD J", "C JB JA J9 J8 J7 J6 J5 J4 J3 J2 J1 J0 J IZ IY IX I", "W IV IU IT IS IR IQ IP IO IN IM IL IK IJ II IH IG ", "IF IE ID IC IB IA I9 I8 I7 I6 I5 I4 I3 I2 I1 I0 I ", "HZ HY HX HW HV HU HT HS HR HQ HP HO HN HM HL HK HJ", " HI HH HG HF HE HD HC HB HA H9 H8 H7 H6 H5 H4 H3 H", "2 H1 H0 H GZ GY GX GW GV GU GT GS GR GQ GP GO GN G", "M GL GK GJ GI GH GG GF GE GD GC GB GA G9 G8 G7 G6 ", "G5 G4 G3 G2 G1 G0 G FZ FY FX FW FV FU FT FS FR FQ ", "FP FO FN FM FL FK FJ FI FH FG FF FE FD FC FB FA F9", " F8 F7 F6 F5 F4 F3 F2 F1 F0 F EZ EY EX EW EV EU ET", " ES ER EQ EP EO EN EM EL EK EJ EI EH EG EF EE ED E", "C EB EA E9 E8 E7 E6 E5 E4 E3 E2 E1 E0 E DZ DY DX D", "W DV DU DT DS DR DQ DP DO DN DM DL DK DJ DI DH DG ", "DF DE DD DC DB DA D9 D8 D7 D6 D5 D4 D3 D2 D1 D0 D ", "CZ CY CX CW CV CU CT CS CR CQ CP CO CN CM CL CK CJ", " CI CH CG CF CE CD CC CB CA C9 C8 C7 C6 C5 C4 C3 C", "2 C1 C0 C BZ BY BX BW BV BU BT BS BR BQ BP BO BN B", "M BL BK BJ BI BH BG BF BE BD BC BB BA B9 B8 B7 B6 ", "B5 B4 B3 B2 B1 B0 B AZ AY AX AW AV AU AT AS AR AQ ", "AP AO AN AM AL AK AJ AI AH AG AF AE AD AC AB AA A9", " A8 A7 A6 A5 A4 A3 A2 A1 A0 A 9 8 7 6 5 4 3 2 1 0"};
    vector<string> games = {"IN EM ME L8 MY AB LQ IG LU BF MX AC IG ET KX J9 NF", " A3 LZ BA JC DX L6 J K0 D8 T GT MR KW HL FO J9 E N", "C KK L4 J1 LV BE MN AM MQ KX IM EN KY CB MG HQ KS ", "JE K9 JX KO CL MB HV IA EZ N H6 NA H5 MS KV GS GH ", "NB KL NE A4 LX BC HO FL MZ KO HQ FJ LO II JX DC M7", " HZ LF BU NG H J0 E8 Z K3 IF EU M0 I5 II ER MZ AA ", "K3 D5 J1 E7 MU KT KW JA MH HP L2 J3 LA IW X K5 KB ", "JV IV EE KT CG MC AX IO EL KF JR MV KS NC A6 KV CE", " Z GN L8 C0 MR HF KL CO NC H3 KD CW I0 F8 NB A7 MR", " AI KR JF L0 C8 NH GZ Q 9 LC IU KG CT HU FF H2 G6 ", "GY GB HW FD KH CS Y 1 J7 E1 JI DR J3 E5 I8 F0 HF F", "U LL BO M8 B0 IJ EQ KT JD L7 C1 K4 K1 M5 I0 HI FR ", "O KE NG KG I4 F4 MW KR MA AZ GZ GA NF KH IP EK KC ", "JU MY KP MF L7 M1 B7 JN DM LR BI LS BH K9 D W K6 I", "X EC HJ FQ M4 I1 I6 F2 M0 B8 JL DO MU HC MJ HN MI ", "AR K6 K KQ CJ NG A2 O GY K3 K2 MO HI IZ EA Q GW JP", " DK KO JI M8 HY MQ HG NB H4 L5 J0 HV FE IW ED MP K", "Y KP JH L1 C7 JT DG U 5 GU GF MO AL LF IR Q KC L9 ", "C ND A5 KN JJ K2 D6 LB IV JR DI H3 G5 LY BB MW AD ", "LZ I7 LI IO LV IB LD BW M2 B6 LR IF JF DU MG L6 MN", " L KD JT KA CZ MV HB HG FT L6 C2 JY DB KP CK N KN ", "K8 JY MM L0 I5 F3 I9 F HN FM N A9 MW HA MP AK HC F", "X IE EV JO DL HS FH LI BR MB AY MT HD HB FY LJ BQ ", "JS DH KE CV K4 D4 V 4 LM BN LL IL KZ CA M I6 GT GG", " LY I8 LJ IN JE DV MS HE KC CX I F9 KW CD M6 I LW ", "IA NH A1 K D9 L4 C4 MJ AQ ME HS NA KM MD L9 KJ JN ", "J8 E0 MV AE LT ID I2 F6 MJ L3 MD AW NE KI IB EY MX", " H9 K5 K0 JU DF M2 I3 LG IQ IH ES H0 G8 Z 0 H4 G4 ", "JJ DQ K8 D0 P GX MU AF LA BZ JA DZ K7 JZ Y GO I3 F", "5 KI CR GV GE W 3 LQ BJ L J6 HA FZ LE BV IR EI MT ", "AG HD FW GX GC LS IE MS AH MM AN LB BY MD HT KI JO", " M3 B5 L7 IZ GQ GJ V GR R KB KU JC GP GK LN IJ KQ ", "JG H6 G2 HP FK J5 E3 HE FV I1 F7 KE JS LD IT H9 G ", "L3 J2 MZ H7 M9 HX L C9 J4 E4 KM JK M1 I4 JZ DA MQ ", "AJ S GU LW BD K7 D1 KM CN IC EX LU IC GO GL LP BK ", "KR CI MH L5 HY FB I7 F1 GW GD KX CC LP IH KV JB IS", " EH O A0 H5 G3 KZ J7 K5 D3 MK HM LN BM MG AT U GS ", "KB CY IU EF LC BX H1 G7 MP HH JK DP GR GI J E9 L9 ", "IX LK BP S KA ND H2 LG BT R 8 IQ EJ LK IM L2 C6 ID", " EW K6 D2 JH DS HH FS M7 B1 ML AO MF HR LH IP V K7", " T K9 LX I9 KH JP KL JL MK AP L5 C3 GN GM IL EO KK", " JM Y K4 X 2 KF CU MY H8 KJ CQ S 7 MN HJ H7 G1 IT ", "EG K1 D7 MK L2 LO BL JG DT M B9 MI L4 J2 E6 J6 E2 ", "M6 B2 JQ DJ L1 J4 NE H1 IK EP KY J8 H8 G0 KA JW P ", "KD P A M9 B LM IK NH KF L0 J5 X GP NF H0 ML HL MA ", "HW MH AS KK CP JD DW MX KQ HK FP U K8 T 6 KG JQ H ", "G9 KS CH W GQ MO KZ LT BG M3 I2 JV DE HX FC ME AV ", "HM FN MT KU IY EB MI HO ML L1 LH BS JW DD KU CF L8", " IY LE IS MF AU MC HU MM HK HZ FA KN CM R GV JM DN", " ND KJ NA A8 L3 C5 JB DY HT FG M5 B3 HR FI M4 B4"};
    vector<int> seeds = {264, 220, 243, 168, 397, 254, 446, 498, 235, 113, 255, 160, 464, 59, 117, 262, 140, 382, 135, 120, 371, 77, 464, 190, 130, 190, 475, 450, 70, 65, 299, 396, 506, 304, 127, 112, 240};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EL", "HE", "IK", "JG", "B9", "IV", "D4", "BM", "HT", "LZ", "IW", "J8", "A5", "V", "M2", "EJ", "I5", "FE", "I0", "M5", "F3", "KG", "A5", "K1", "HW", "K1", "AG", "2", "K9", "K4", "G2", "B8", "BU", "G7", "MC", "LY", "IH"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> teams = {"ZZQ ZZ3 ZYH ZXH ZWE ZUW ZSN ZQK ZPD ZKR ZK4 ZD4 ZC", "U ZC3 Z72 Z6J Z4X Z1A Z09 YW8 YVR YUG YQS YM7 YLA ", "YK5 YJY YIT YDC YCK YBO YA1 Y9R Y23 XZS XY5 XWV XQ", "R XPB XPA XMW XJS XEP XBT XBD XAE X75 X6K WXN WQE ", "WMD WKN WJC WGF VZ9 VYK VY6 VW5 VUJ VSD VS5 VOO VK", "T VK8 VJG VIK VHL VH3 VFK VFC VF2 VE0 VDX VCS VA5 ", "V78 V3I V2S UZY UTI UGZ UC9 UAT U84 U6D U5V U4F TX", "V TSX TRT TQ5 TPC TP4 TOK TJZ TJC TIR TFT TDO TBN ", "TB4 T9T T7N T2Z SXK SWX SM2 SF3 S79 S6X S4T S2Q S2", "4 S03 RYH RY9 RXN RW0 RUO RT4 RR6 ROG RO3 RDU RCM ", "RAL R8R R63 R3Z QZ9 QXO QPN QPM QP5 QN0 QMO QLN QL", "A QFV QB3 QB0 Q87 Q82 Q2H Q16 PNF PLB PKY PKR PKL ", "PI3 P9L P3A P2E OZZ OWT OVJ OUY OU9 OS4 OQ7 OPL OL", "P OJO OJE OGA OFM OBK O8C O59 O1H O14 O13 O0B NZE ", "NYK NO1 NEM NCE NAR NAG N6H N5S N2N N2I N0U MZD MY", "U MTO MRU MR8 MQW MPJ MP0 MOG MN7 MM3 ML3 MI5 MEB ", "M4E M3Y M36 M26 M0L LYL LUS LSL LL2 LHJ LFD LDH LB", "I L7E L6T L3Z L1J KZ8 KYX KWW KQ0 KO7 KFW KA5 K97 ", "K96 K8V K7K K68 K50 K3Y K3C K2K JXS JSN JSJ JRJ JM", "Y JJ7 JIM JEG JC3 JBM JBE J71 J5V J4O J3T J2N J1S ", "IOD IO5 INN IK9 IK4 IJJ II7 IFL IDA IBC I8M I8J I5", "W I2K HRE HNO HMT HI0 HCB HAE HA2 H7N H7F H4L H1P ", "GUR GTR GPI GM2 GLP GJ3 GGI GFN GB6 G9W G9G G73 G1", "A FW4 FQM FMN FIT FCT FCS FBB FB1 F8X F84 F55 F33 ", "EZO EUG EOE EM5 EJ8 EI3 EGV EG2 EBM EB2 EAZ E6E E6", "B E04 DWJ DW9 DVI DQJ DP7 DF7 DA1 D7Z D7B CVY CV7 ", "CSU CRZ CRF CR3 CPM CLP CK3 CJS CJO CI8 CGI CFO C9", "F C9E C8J C20 BYE BVI BTX BNY BKY BIZ BH1 BF6 BEH ", "BB1 B7A B4A B3W B3H B0Y AXX AXT APZ APX AOL AO0 AN", "4 AKT AKP AKA AJ1 AIN AH3 AGT AFW A78 A6G A5M 9ZX ", "9ZM 9Z4 9UP 9UI 9QZ 9Q4 9MW 9KN 9GM 9G3 9FZ 9EU 9C", "G 9C5 987 959 91I 8YO 8X1 8VT 8Q0 8P1 8O4 8KD 8JT ", "8HK 8ER 8B0 89L 87N 876 869 7YB 7V5 7RJ 7QF 7PF 7P", "D 7P5 7NG 7J8 7IA 7HR 7E9 798 76R 760 75N 71W 706 ", "6ZL 6YE 6XN 6X3 6WM 6UR 6Q9 6O5 6J2 6HM 6GY 6E8 6B", "E 68O 660 633 62M 5ZH 5YS 5VZ 5UO 5UK 5RM 5QH 5PV ", "5P2 5O1 5IY 5BP 54Y 53Y 51J 51D 4ZN 4S8 4Q9 4Q4 4M", "Y 4LO 4HY 4GG 4FZ 4B7 45W 44Y 40A 3X6 3R4 3M4 3K0 ", "3EO 3C7 3A2 390 37H 377 36V 36R 34K 33P 32V 31K 2P", "D 2P2 2O1 2MV 2K1 2GJ 2F4 2AW 2AF 25A 21G 1QH 1NP ", "1C4 1BR 1AF 1A8 0X3 0I3 0FO 0EL 0DN 08V 084 01A"};
    vector<string> games = {"ZSN J1S OJO BF6 PKR AKT VJG 5RM K96 G73 RY9 8P1 J4", "O HNO X6K 4HY QB3 A6G N5S CPM ZYH IK9 ZD4 J71 YW8 ", "2GJ M26 EBM PLB AKA OPL BB1 TPC 76R VFC 5ZH J5V HM", "T XMW 3X6 XPB 3M4 YCK 36R QPN 9Q4 Z09 2F4 MI5 E04 ", "PNF AJ1 XZS 3A2 M36 EB2 ZZQ IJJ NAR CJS N0U CRZ O5", "9 BVI YVR 2K1 P9L AOL WJC M26 ML3 DWJ JJ7 H4L WKN ", "M0L K2K GLP L3Z F8X YQS 2O1 TIR 7J8 O14 C20 WXN 4L", "O QMO 9Z4 YVR JSJ YCK K8V WQE LUS L7E F55 ZPD J3T ", "KYX FCS K50 GFN VFK 5YS QP5 9UI N2N CR3 L6T F84 R8", "R 9FZ TDO 7P5 RCM 9CG R3Z 9GM XJS L6T YBO 36V VA5 ", "6BE RT4 8YO RXN 8Q0 VF2 62M YK5 31K Z1A 2AW X6K LL", "2 UAT 6WM VKT 5PV S6X 8B0 INN IBC RR6 91I RW0 8VT ", "MP0 DP7 TB4 7PF K3C GJ3 OLP BEH K7K G9W OBK BNY PI", "3 AO0 QFV A5M ZQK J2N PKL AN4 KZ8 FBB SXK 7YB RAL ", "9EU XEP 44Y VCS 68O P2E APZ ZD4 1C4 M0L EG2 MM3 DW", "9 ZWE IO5 U4F 6ZL UZY 6J2 ROG 959 ZUW IOD VK8 5QH ", "Q16 AIN XY5 3C7 ZZ3 084 YUG JSN QN0 9UP O0B C9E VS", "5 5O1 IK4 IFL ZQK 0X3 ZZQ 01A XQR KYX ZC3 JBM KFW ", "FQM LYL EGV SWX 869 UC9 6UR T2Z 7V5 ZXH INN TQ5 76", "0 WMD 4Q4 ZCU 1NP LUS EI3 VH3 5VZ L1J FB1 KA5 FW4 ", "Z6J JEG JIM H7F YUG 2MV XPA 3R4 MYU CV7 JSN GPI O8", "C BTX VW5 54Y XWV 3EO VY6 53Y V78 6E8 Z6J 25A ZK4 ", "J5V YA1 377 N2I CRF TJC 7IA WXN LSL NZE C9F YA1 K9", "7 J71 HI0 O1H BYE K68 GB6 XJS 40A S2Q 8HK P3A APX ", "XMW L3Z Q2H AH3 O13 C8J ZPD 1A8 VYK M4E ZYH 08V Q8", "2 AGT V2S 6HM X75 LHJ LDH EZO X75 4GG YLA K3C TFT ", "7NG Z1A JJ7 Z72 JC3 J3T HRE QPM 9QZ OFM BKY OVJ B0", "Y IO5 I8M OQ7 B7A M3Y EAZ Z09 JMY JMY H1P U6D 6XN ", "J1S I5W LHJ EOE OWT AXX XEP L7E IOD I8J YW8 JRJ U5", "V 6YE MRU D7B MQW DA1 NCE CJO XWV KWW YIT 33P VE0 ", "633 ZC3 1QH ZK4 1BR YBO K96 ZXH 0DN TP4 798 XBD LD", "H RYH 8O4 WKN 4Q9 YM7 2P2 SM2 876 OU9 B3W Z4X 2AF ", "K3Y GGI NYK CFO XBT LBI JEG H7N TJZ 7HR XY5 KQ0 VZ", "9 M3Y Z72 21G UTI 6O5 Y9R 37H Y23 390 Z4X JIM NEM ", "CI8 OS4 B4A Q87 AFW WJC 4S8 WGF M36 NO1 CGI VUJ 5B", "P XZS KO7 N6H CLP LSL EJ8 ZSN 0I3 ZUW 0FO XAE 4FZ ", "OZZ AXT VOO 5P2 V3I 6GY QB0 A78 VSD 5IY VHL 5UO S4", "T 8ER VDX 660 YDC K7K OJE BH1 PKY AKP MR8 D7Z YQS ", "JXS ZKR J4O KQ0 FIT MTO CVY QLN 9ZM K8V G9G IK9 ID", "A XBT 45W RUO 8X1 YJY K50 TXV 706 LL2 EM5 YK5 K3Y ", "TRT 75N YJY 32V JC3 HA2 QXO 9MW RDU 9C5 T7N 7RJ VI", "K 5UK XBD 4B7 Y23 KFW TSX 71W KWW FCT MPJ DF7 JSJ ", "GTR VZ9 51D Y9R KA5 KO7 FMN YLA 2PD MN7 DVI TBN 7P", "D J2N I2K JXS GM2 WMD LYL LFD EUG XPB KZ8 IJJ II7 ", "U84 6X3 ZCU JBE QLA 9ZX WGF 4ZN S79 89L YM7 K2K LB", "I F33 JRJ GUR RO3 987 VYK 51J YDC 34K S03 8KD OUY ", "B3H SF3 87N QZ9 9KN ZWE 0EL YIT K68 K97 G1A XAE LF", "D S24 8JT NAG CK3 XQR 3K0 R63 9G3 MEB E6B JBE HCB ", "UGZ 6Q9 ZZ3 IK4 MZD CSU M4E E6E ZKR 1AF JBM HAE TO", "K 7E9 XPA L1J T9T 7QF WQE 4MY OGA BIZ MOG DQJ"};
    vector<int> seeds = {395, 509, 145, 456, 313, 473, 147, 66, 138, 229, 175, 373, 163, 199, 191, 351, 216, 403, 90, 460, 18, 413, 342, 205, 372, 396, 395, 358, 62, 176, 474, 135, 241, 406, 111, 61, 436};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1C4", "DWJ", "JJ7", "AIN", "8KD", "BB1", "JRJ", "QP5", "J5V", "UAT", "LL2", "HMT", "KQ0", "S24", "RR6", "FW4", "TJC", "2GJ", "XQR", "AKT", "N6H", "36R", "F84", "SM2", "HI0", "1NP", "1C4", "GGI", "QLA", "LSL", "BEH", "J2N", "VF2", "2O1", "Z4X", "QFV", "4S8"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> teams = {"ZY3 ZVX ZVK ZV8 ZT9 ZSJ ZRK ZQF ZPB ZMF ZMB ZJF Z9", "7 Z77 Z5A Z3O Z2H Z1N YY4 YW4 YUU YUL YRN YQ1 YMK ", "YL3 YH3 YGQ YCG YAG Y8T Y8B Y6N Y42 Y2H XV8 XR1 XQ", "P XPB XLR XIF XE7 X5Y X4B X42 X0S WZ8 WXN WVE WO8 ", "WNG WJA WHL WBW W84 W83 W7D VZP VR6 VOT VNI VKD VJ", "T VJB VGS VDZ VDP VBE V6G V37 V2U V1M V13 V0D UYA ", "UQF UOV UL2 UG0 U8U U4A U46 U2S U1T U1N TYU TYA TV", "U TVH TUP TU5 TQX TM9 TJ6 TG1 TEH TBM T7C T4D T2V ", "T2R T0G SVH SS1 SQD SPH SOX SNP SLX SA8 SA7 S9T S8", "5 RS3 RNQ RML RLM RK1 RIW RGA RCR RAW R9O R78 R22 ", "QVM QS4 QP3 QIZ QFT QDQ Q8U Q3J Q1K Q1D Q0N PZU PW", "5 PV8 PU0 PSO PN6 PL3 PEI PEA P6G OZM OUN OQP OMI ", "OC3 OAF O9T O3R O10 NYU NVW NRJ NPM NP5 NO8 NO0 NL", "5 NGZ NES N9P N89 N88 N4I N2A MZ1 MY0 MV6 MV5 MSW ", "MRO MNW MMT MKV MKD MJ9 MHL MFK ME6 MAI M2G LXS LW", "Q LUN LU6 LSA LNB LIZ LH5 LGL LGB LFI LBN L6X L40 ", "L3A L0O L0I KUK KDJ KDF KAB KA7 K7D K63 K5W K3Q K1", "N JYU JPA JM9 JLG JIO JFL JCO J8L J1X IYS IWJ IRD ", "ILK IAG I9M I8A I70 I5P I5A I3K I2T HWX HVX HVL HR", "C HQA HLS HKZ HJX HGZ H9J H8L H7V H6T H50 H4V H4B ", "H3O H2D GZ1 GYE GUW GPS GN0 GLH GHV G4R G2S G2R G2", "E FT4 FRC FQZ FN8 FN1 FMO FK7 FJG FIZ FHH FG9 FDY ", "FC8 FBR FBH FAD F6Z F0F EZ2 EZ0 EU7 ERD EQ3 EJO EF", "V ECE E72 E4N E44 E19 DXA DTR DSX DRC DLW DLA DKP ", "DJ6 DIG DH5 DDK DCX D8M D7V D6W D4Z D4A CZ8 CVF CT", "2 CR1 CPR CNK CLG CHH CH1 CEF CE9 CCF CBK C9F C42 ", "C2H C1Z C0L BYC BX7 BVS BT5 BRW BQQ BO7 BN9 BKH BJ", "S BEY BC0 B96 B8F B6P B67 B30 AXN AWW AWK AT0 AS3 ", "ARW ANW ANQ ANP AKO AHF AHB ABM A52 A50 A3J A2G A0", "Q 9YA 9XS 9V6 9PQ 9IG 9IA 9HJ 97X 97G 95A 94L 92V ", "8ZQ 8XC 8X6 8X5 8SO 8RM 8QM 8IZ 8FQ 8DN 8BD 8AQ 8A", "G 872 84N 83T 7YN 7YF 7UL 7NG 7IM 7EK 7B6 7B1 77P ", "775 774 74R 74P 73K 72Z 72W 6ZO 6Z9 6XL 6VN 6U8 6P", "0 6LY 6F4 6F2 6EB 6DE 69A 67R 67J 64C 5PU 5O8 5MV ", "5LK 5G6 5EV 5CM 5CK 53S 52L 4YZ 4R7 4QA 4P5 4O9 4K", "Z 4HP 4GT 4GC 4ET 482 46K 43P 437 428 426 40P 3VU ", "3TX 3SW 3Q7 3NO 3IS 3EE 3CS 36E 352 2ZH 2XI 2WY 2U", "H 2SR 2QH 2NM 2L4 2KZ 2K0 2HO 2H0 2GZ 2DD 28Z 26O ", "24Z 24W 21U 201 1Z4 1YH 1WT 1SB 1QY 1MW 1IC 1HX 1G", "R 1F1 1EQ 1E1 1DZ 1DT 1AW 1AC 17U 174 0V2 0RW 0QX ", "0M2 0IH 0HB 0H2 0EZ 0CW 0CS 0CC 0CB 07T 054 02X"};
    vector<string> games = {"ME6 BYC NO0 ARW ZRK 0CW I8A EU7 JFL DXA YUU HVX TU", "P 5PU M2G C1Z ZVK 07T I2T FAD S9T 775 PN6 97X YQ1 ", "1F1 Y8T 1WT K1N DKP QDQ 8QM ZVX 054 VBE 43P GPS GN", "0 WBW L0I U46 53S X0S 2L4 TVH 5O8 H6T FQZ NVW AHF ", "IAG EQ3 RK1 7NG HWX FBH UYA 4KZ Q1K 8X5 WHL 2ZH T7", "C 6F4 ZV8 0CB X4B K1N V6G 46K V1M 4GC PL3 9HJ W84 ", "36E X5Y 2HO YRN 1EQ KDF D7V OMI A0Q RIW 7UL Z1N 1A", "C VGS 426 UOV 4P5 QS4 8BD MZ1 B8F WXN K7D YMK I5A ", "YCG 1QY L40 CT2 IWJ ECE SLX 74P ZQF 0EZ I5P EZ2 NP", "M ANP PEI 9IA X5Y JYU QFT 8IZ LGB CLG ZJF H8L WNG ", "2WY T2R 6U8 ZPB 0H2 LNB CE9 R78 872 TEH 6EB YUL 1E", "1 SA8 74R OZM 9V6 ZRK H4B YY4 1AW H7V FN8 MJ9 BT5 ", "N2A B6P V13 4GT WBW 352 K3Q DJ6 PW5 92V TBM 6F2 L0", "I D4A XPB 28Z R22 8AG U2S 5CK YW4 1DT YW4 HVL ZMB ", "H7V MFK BX7 OUN 9XS RCR 7YN RLM 7IM VNI 3SW ZT9 0C", "C YUL HWX XLR 2DD MKD BRW J1X E4N MRO BKH YL3 I5P ", "Q1D 8X6 WO8 2UH ZMB 0IH O10 ABM SNP 73K N88 B30 UL", "2 4QA PU0 95A MAI C0L KDJ D6W LIZ CEF LFI CNK KUK ", "D4Z TJ6 69A L0O CZ8 O3R A52 Z1N HQA HGZ FK7 VJT 3V", "U JIO DTR MV5 BEY Z77 0RW IRD EFV ZMF H6T LU6 CBK ", "YUU 1DZ VDZ 428 OAF A3J UG0 4R7 ZVK GYE RNQ 7B6 Z5", "A 0V2 LWQ C42 S85 77P YGQ I8A W83 L3A XV8 24W I5A ", "F0F XIF 2GZ Y6N 1Z4 ZV8 GZ1 NL5 AS3 N9P AWW I3K F6", "Z XE7 JPA V37 482 HRC FDY TU5 64C WVE KA7 H8L FN1 ", "K5W DIG KAB D8M Z3O HKZ YGQ 1MW ZY3 GPS WXN 2QH LH", "5 CH1 YL3 1HX YRN I2T Y2H 21U U4A 52L TG1 6DE YCG ", "I9M ZT9 H2D RS3 7B1 J8L E44 R9O 84N P6G 9PQ GZ1 G4", "R JPA DLW XQP JFL W84 L0O Z2H 17U O9T A50 OQP 9YA ", "Z2H HLS NRJ AKO WJA KDJ VZP 3IS HJX FJG NES AWK V2", "U 4ET ZPB H50 T4D 6LY Q3J 8SO GUW GLH SQD 6ZO SOX ", "72Z ILK EJO H2D G2S JLG DSX GYE GHV WJA 2XI LSA CC", "F Y6N IWJ W83 3CS Y42 201 H4V FT4 SVH 6XL XV8 J8L ", "N89 AXN IYS E72 Y8B IRD XPB JIO TM9 67R ZY3 02X YH", "3 I70 RML 7EK VDP 437 NYU AHB XQP 26O ZSJ 0CS LBN ", "CPR I9M ERD K7D DDK QP3 8DN WZ8 2NM JCO E19 HKZ FI", "Z PEA 9IG HVX FBR X4B 2K0 RGA 7YF Z97 H9J XE7 2H0 ", "TYU 5G6 I70 EZ0 Y8B 1YH K63 DH5 VOT 3Q7 PV8 94L H9", "J FMO QIZ 8FQ HLS FHH XIF JM9 WZ8 K63 SS1 6Z9 HVL ", "FC8 U1N 5EV JYU DLA X42 K3Q Q0N 8XC X42 2KZ YH3 1I", "C ZMF 0HB YQ1 I3K VKD 3TX MMT BO7 WVE 2SR SPH 72W ", "H4B G2E YMK 1GR MNW BN9 VR6 3NO QVM 8AQ W7D 3EE MS", "W BJS SA7 774 JM9 DRC XR1 JCO PSO 97G WNG KDF Y42 ", "IYS UQF 4O9 L6X CR1 Z77 HGZ ZSJ H3O Q8U 8RM KA7 DC", "X NO8 ANW YY4 HRC TYA 5LK T2V 6P0 XLR JLG WO8 KAB ", "YAG 1SB HQA FG9 YAG IAG LGL CHH PZU 8ZQ TVU 5MV T0", "G 6VN Z3O 174 H3O G2R H50 FRC ZVX GUW L3A CVF OC3 ", "A2G LUN C9F ZJF 0M2 LXS C2H MHL BVS ZQF H4V U8U 4Y", "Z N4I B67 X0S K5W Z97 0QX U1T 5CM NGZ AT0 VJB 40P ", "TQX 67J MV6 BC0 RAW 83T Z5A HJX MKV BQQ NP5 ANQ V0", "D 4HP Y2H J1X WHL KUK MY0 B96 Y8T ILK XR1 24Z"};
    vector<int> seeds = {451, 12, 278, 445, 40, 182};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"95A", "LWQ", "4R7", "8X5", "NP5", "L0O"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> teams = {"ZZS ZU3 ZN8 ZMT ZII ZC9 Z4J Z30 Z0K YYM YUJ YR5 YP", "F YKE YJJ YI4 YHG YCB Y9X Y9I Y6L Y6F Y2W Y2L XYR ", "XXN XWS XPF XOH XNZ XKB XFL XAE X9P X9M X9L X7C X7", "2 X4E WZL WYB WVQ WTZ WSL WRR WQ4 WPK WNT WLW WKO ", "WKJ WHN WAK W9K W5N W3M W2Z VYU VY3 VV7 VTI VSC VS", "B VQL VQ9 VP7 VOH VMJ VJP VHK VGW VDO VCJ VBR V52 ", "UVO UQC UOO UNX UIC UG5 UBH UBC U9H U2K U1W U1F U1", "8 U02 TWY TVS TVM TSE TRF TQS TMH TLA THB TB5 T7W ", "T7I T6K T2P T1N SZQ SYL SXX SXW SXN SUG STI SSN SS", "0 SP7 SO1 SIV SHP SGP SFP SE2 SAB SA1 S9Q S85 S84 ", "S10 RYX RVZ RTU RS2 RJJ RFP RF4 RDL RC9 R98 R8A R6", "9 R4H R2Y R03 QXX QX4 QW5 QVY QSY QQ0 QO2 QF1 QDS ", "QCO Q6B Q5U Q3C Q11 PZB PZ6 PYO PUN PTD PS3 PME PG", "V PFH PEN PE0 PDO PBM PAZ P61 P4X P0H OWF OTD OOO ", "ODW OA4 O9Z O7U O76 O37 O1A O0C NZT NUK NTY NT1 NR", "F NJ1 NI2 NCM NB2 N65 N5N N5B N0G MZH MZ2 MNJ MG8 ", "MEX MEB MAK M40 M32 M25 M0K LXB LX1 LW8 LV7 LTN LQ", "W LQO LQ5 LPT LPS LK9 LIU LIQ LI1 LFF LD6 LAG L82 ", "L4D L47 L2L KWE KOM KM4 KJ0 KII KHJ KGB KG8 KC6 K9", "Y K66 K3M K2T K21 JZZ JV9 JTP JG8 JD9 JC7 JBH JB9 ", "J32 J2J IZM IWX IWO IW8 IW5 IOW INJ IK6 IJK IH1 IC", "N IBO I9G I8J I5W I5R I10 I0O I09 HW6 HUZ HUK HTF ", "HKS HJ6 HIF HH9 HEO HEK HCL H6S H4D H3N H3A GZN GX", "Q GVZ GV1 GS9 GR3 GP8 GOP GOA GIH GH7 GGJ GA3 G6T ", "G6R G3X FZ2 FVV FT2 FQA FP3 FNH FNB FFN FDS F95 F7", "E F6E F29 F0C F02 EX6 EUB EU7 EPX EPD ELH EKZ EIQ ", "EG0 EDX E6F DZN DV2 DV0 DOT DOS DLI DJ6 DH9 DEC DD", "K DC9 DBG D4X D3P D1L D07 CXJ CV5 CRX CNY CLT CIS ", "CI0 CH4 CDM CCP CCI CAO C0U BTZ BSP BO6 BNF BKB BI", "G BHI BA5 B6B B50 B0Z AWS ASO AOB ANF AI9 AG4 AF7 ", "AE3 ADW ADV A8H A6Y A68 A4Z A2V A2P 9Q9 9OV 9NG 9L", "K 9KL 945 943 92J 925 8YZ 8WB 8SS 8QV 8JN 85J 81E ", "80U 80H 7ZK 7Y7 7XS 7WK 7WA 7UV 7SV 7MO 7IJ 7I1 7F", "W 7DK 7C1 74Z 74D 72W 72U 6ZQ 6Z8 6YF 6XP 6UY 6TY ", "6RN 6N5 6N3 6N0 6JT 6FQ 6DH 6C7 6C6 66O 663 63P 60", "4 5WD 5VR 5VE 5V7 5V5 5S4 5RC 5Q7 5PK 5KF 5II 5G1 ", "5FK 5FE 5ET 5EK 597 56N 536 4V4 4UO 4UK 4F2 4EW 4B", "1 4AX 476 443 3XD 3TY 3S0 3J7 3FP 3B1 333 31U 31B ", "2TS 2SK 2SD 2P6 2O7 2JM 2JH 2I8 2FG 2F7 29O 1YF 1X", "3 1VE 1V8 1UV 1RZ 1MR 1M3 1JO 1J8 1FL 1D7 1BY 1A1 ", "19Q 19A 0YQ 0YE 0UV 0SX 0NW 0AN 08X 077 01N 001"};
    vector<string> games = {"JC7 I9G PDO CV5 LQW G6T W5N MEB WKO M0K MNJ F6E YP", "F JV9 RTU A2P KG8 HJ6 TVS 6YF VSC 5FK SXN 7Y7 YR5 ", "JTP U18 6TY WKO 4B1 XOH 2FG ZMT 08X SUG 7ZK SGP 8W", "B Z4J JB9 UBC 6JT XYR KJ0 N5B EX6 WTZ LQO K2T HW6 ", "KHJ HH9 SXX 7WK VJP 5S4 N65 EU7 LPS GIH XAE 2O7 YI", "4 K2T L4D GZN NJ1 EKZ YHG K3M LXB FT2 QDS BIG Y9I ", "KC6 VMJ 5RC W3M 536 QCO BKB U1W 6N5 MEX F95 TWY 6X", "P SYL 7WA Q6B BNF WHN M32 WRR 3TY OA4 DH9 PYO CCI ", "WTZ 3J7 YJJ K21 VSB 5G1 O0C DV2 R2Y AI9 MAK FFN VT", "I 5FE Z4J 0SX RS2 A2V SZQ 7UV RFP A68 JB9 ICN V52 ", "604 Y6L 1RZ KC6 HKS X9M 2SD RDL A8H WAK M40 XFL L8", "2 YR5 19Q PAZ D07 QSY B50 IZM IK6 RF4 A6Y NT1 EG0 ", "Y2W 1V8 XWS 29O M25 FP3 LQO GA3 QVY B0Z NZT DZN ZI", "I 0AN JV9 I10 X9L 2SK SP7 85J PBM CXJ KOM H6S U9H ", "6N0 Z0K 0YE UVO 63P PFH CLT J32 IH1 WZL LPS WHN 4F", "2 L82 GXQ UQC 663 X72 LIU Y2W KHJ XKB 2JH RYX 9OV ", "Q11 BTZ YYM JD9 VP7 5PK R4H AG4 XYR 1X3 O9Z DJ6 XK", "B L4D ZU3 IWO JBH IBO Z30 0UV Y6F KGB QQ0 B6B WSL ", "LQW XXN 1YF UOO 66O IW8 IW5 W9K MAK UIC 6C7 SO1 8J", "N LW8 FZ2 KII HEO VDO 5VE WZL 333 ZC9 0NW L2L H3N ", "XPF KWE XPF 2F7 MG8 F7E K21 I09 THB 7C1 PZB C0U YU", "J JG8 IWO IOW LTN G6R VCJ 5VR X9P LD6 OWF DBG ZU3 ", "01N T2P 7MO X9P 2P6 P4X D3P PE0 CRX SAB 92J Z0K JC", "7 PZ6 CAO RVZ 9Q9 Q3C BSP WYB 3B1 ZN8 077 TQS 72W ", "LI1 GR3 WVQ 3FP SXW 7XS WNT LX1 NTY EDX NI2 ELH KG", "B HIF ZII J2J ZMT IZM RJJ A4Z Y9X 1M3 WLW 4AX VQ9 ", "5KF JG8 I5W VHK 5V5 PTD CDM W3M MEX P61 D1L WAK 4U", "K XWS KOM PUN CCP VBR 5WD XAE LAG VY3 5EK MZH F0C ", "JTP I5R K66 HUK SA1 943 LAG GVZ SSN 80U M0K FQA NC", "M EPD IWX INJ PME CI0 LQ5 GGJ X9L LI1 LD6 GV1 ODW ", "DEC U1F 6RN OOO DDK MEB FDS S9Q 945 STI 80H X7C LI", "Q LK9 GOA R69 AF7 SIV 8QV YKE JZZ PGV CIS W2Z 56N ", "XOH L2L WQ4 3XD YCB 1JO UNX 6C6 WSL 3S0 LV7 G3X U0", "2 6UY XXN KM4 WPK LW8 XNZ 2I8 LFF GS9 YPF 1A1 X4E ", "31U JD9 I8J M40 FNB LPT GH7 YKE 1BY S10 9NG UG5 6D", "H X72 31B W9K 4UO KJ0 HEK YCB K66 ZZS 001 T1N 7SV ", "LIU GOP QX4 ASO MZ2 F29 LIQ GP8 YUJ 19A Y2L KII T6", "K 7IJ SHP 8SS WLW LXB OTD DC9 TSE 6ZQ LX1 FVV YHG ", "1J8 Y9I 1MR N5N EUB WQ4 LV7 Y2L 1VE TB5 7DK X9M LF", "F O1A DV0 J2J IJK VYU 597 K9Y HTF L47 H3A XNZ L47 ", "PEN CNY O7U DLI X7C 2TS TRF 72U Z30 JBH K3M HUZ R0", "3 ANF R8A AE3 O37 DOT TLA 74Z SS0 81E WPK 443 NUK ", "E6F T7I 7I1 KWE H4D YJJ 1D7 KM4 HCL VOH 5Q7 QO2 BA", "5 TMH 74D Y6F 1UV Q5U BO6 R98 ADW NRF EIQ TVM 6Z8 ", "RC9 ADV U2K 6N3 T7W 7FW ZC9 J32 WRR LTN QW5 AWS PS", "3 CH4 WNT 476 N0G F02 VV7 5ET X4E LK9 P0H D4X QXX ", "AOB SE2 925 WYB LPT W5N 4V4 NB2 EPX O76 DOS ZN8 IW", "X SFP 8YZ WKJ 4EW Y9X K9Y UBH 6FQ WVQ LQ5 ZZS IW8 ", "S85 9KL XFL 2JM WKJ M25 YI4 1FL VQL 5II JZZ I0O QF", "1 BHI YYM 0YQ S84 9LK M32 FNH VGW 5V7 Y6L KG8"};
    vector<int> seeds = {373, 177, 55, 99, 85, 270, 362, 46, 11, 234, 29, 384, 271, 301, 167, 39, 394, 169, 163, 290, 270, 254, 67, 168, 133, 186, 488, 365, 104, 197, 495, 288, 306, 253, 205, 56, 19, 29, 350, 240, 488, 227, 378, 400};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"I5W", "M0K", "QVY", "XOH", "WTZ", "5V7", "HIF", "Q3C", "NJ1", "UOO", "P4X", "001", "5VE", "7IJ", "LPS", "PS3", "19A", "LQ5", "LI1", "6YF", "5V7", "VYU", "RF4", "LPT", "J32", "S10", "DH9", "HTF", "Y2L", "SO1", "DZN", "6UY", "7WK", "VY3", "SXX", "QW5", "O37", "P4X", "GV1", "VDO", "DH9", "U2K", "IH1", "1J8"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> teams = {"ZZM ZY8 ZWQ ZWP ZUF ZRY ZQO ZQD ZNF ZLT ZIY ZHP ZF", "7 ZDO ZAX ZAE Z80 Z48 YY4 YUY YT6 YP1 YOI YMO YD2 ", "Y8Q Y86 Y82 Y6V Y6J Y2T Y1D XWW XRW XQU XJ1 XGK XC", "0 X4D X3M WUA WT5 WSS WR1 WPB WOU WM6 WLO WIY W7E ", "W5Z W53 W1N VXM VSZ VOV VOF VLX VK8 VF0 V5E UYG UX", "R UVK UTJ US5 UQB UOJ UIS U5T U3Q TQ1 TPV TPM TN1 ", "TKT TK1 TDY TBV TB9 T8D T2V T1J T13 SXL SXI SWQ SS", "T SN4 SMP SHK SGX SGH SES SB3 S91 S7Z S7W S27 S1U ", "RTO RRW RRA ROS RJJ RJH RGQ R8F R7P R1G R1C QYN QY", "6 QSP QQE QPH QKS QKL QJK QGR QDL Q9A PZK PZ5 PYP ", "PT8 PRP PPU PPS PPI POM PO7 PNV PM1 PLV PJX PG3 P4", "2 P0R OWX OWS OUO OU7 OTU OQO OPB OOS ONW OL3 OL2 ", "OJZ ODU OAD O8E O32 NZ9 NX9 NU4 NS5 NPT NMI NLM NH", "F NFI NC8 NBU NBB NAO N99 N8J N7S N6E N61 N5X N4O ", "MYN MXJ MTV MS4 MO3 MJF MJ4 MIP MIO MGG MAK M5D LR", "9 LQL LL6 LJM LG2 LBR L8I L6B KPQ KNY KME KHV KHD ", "KCL KC5 K94 K6O K45 JSF JRG JOZ JNB JLT JKP JIV JI", "N JIF JH0 JEF J9Y J9L J53 J4D J2F IYO IXZ IXH IUN ", "IT8 IT0 ISX IRJ IRE INV IMN ILK IJT IJ8 IJ4 IIX II", "R IHU IDS IAE IAB I4J HYK HW9 HMA HL9 HJC HJ1 HG9 ", "HDU HDG HCO HBN HA1 H7N H7I H7B H6A GWE GWB GVH GQ", "N GO7 GNI GKZ GKY GBU G7O G6D G3Y G25 FYR FV1 FDU ", "FDI FD9 F2E F0L EX4 EWU EVB ERS ENK EJE EHY EGX EC", "8 EBK EA3 E8S E5Q E43 E2L E24 DZQ DX8 DQJ DNU DN8 ", "DLD DJ5 DDM DBF DBE D7K D3Q D2P CYB CUG CRG COH CK", "M CJG CFK CC9 C8I C81 C5V C1Z BWT BSJ BRR BPI BP1 ", "BOA BO7 BH0 BGS BE4 BDC B8N B8K B6T B03 AYN AW1 AT", "B ASM AQO AKM AIV AEC ACV A9E A89 A4I A2T 9XR 9XE ", "9QS 9O0 9MQ 9LG 9K4 9I2 9HA 9DF 9BC 997 987 92K 90", "D 8YZ 8YX 8XW 8XR 8WK 8UT 8SX 8Q1 8OC 8NX 8MW 8MD ", "8LC 8KU 8H4 8G7 8FO 8E2 892 85D 80H 7XZ 7X8 7UP 7T", "I 7OL 7M4 7JT 7JL 7IE 7HX 7HD 7GM 7GI 7GE 7F2 7EI ", "7EA 7BD 7A8 768 75P 73Y 6XT 6UR 6UA 6TJ 6T5 6RX 6L", "K 6K0 6DS 6A2 68Y 67Z 66Z 61W 61C 618 60F 5U8 5QX ", "5MH 5LB 5L5 5KO 5HL 5C6 5BP 5AR 5AE 573 4PD 4M3 4L", "R 4IX 4HB 4GH 4FV 4EP 4CT 47G 46Y 45Y 42F 41X 411 ", "3QY 3N6 3MO 3MN 3LU 3LF 3FU 3DL 3CL 3CG 3C2 388 36", "I 35S 33E 322 2YZ 2YO 2V2 2SS 2NM 2LZ 2GU 2GD 2AT ", "27K 23N 239 228 20L 1SD 1S7 1RE 1N6 1M2 1IX 1FI 18", "Y 18S 13T 139 128 0ZO 0VL 0T3 0RT 0RS 0O0 0NI 0M2 ", "0KC 0IH 0I1 0GG 0ES 0D0 087 06U 06G 05L 02T 026"};
    vector<string> games = {"ZZM 026 JEF DX8 WR1 2V2 SXI 5LB ILK EX4 T1J 5HL XR", "W 228 WT5 2NM RRW 6T5 WLO 33E K94 CUG ZIY HMA KCL ", "COH HBN H6A ISX EJE UYG 3QY X4D 2GD OU7 8SX HCO GW", "E WPB 2YO XC0 2AT ZUF HDG Z80 IDS NBU A4I WIY JOZ ", "H7N H7I YMO ILK W7E 36I YOI IJT ZQO HG9 INV EVB IX", "Z EA3 PRP 7X8 QGR 7IE OPB 8XR T8D 5BP WSS 2SS YD2 ", "IMN ZQO 0D0 NZ9 9HA IRE ERS ZNF HJC WM6 322 OTU 8U", "T PT8 7UP KPQ C8I Z48 0T3 Q9A 7JT V5E 3N6 QY6 7EI ", "IIR FDU OL3 8YZ WIY 35S OQO 8WK M5D BOA ZQD HJ1 W5", "Z JSF NAO A9E KNY CC9 WT5 JH0 L6B C81 Z48 IHU UIS ", "4CT VF0 3MO Z80 0RT MO3 B8K ZWQ HBN T13 5KO NBB A8", "9 XWW IXH MIP BE4 MYN AW1 XWW 20L ZNF 0GG KC5 CRG ", "OAD 997 Y1D 1SD X3M J9Y PJX 8KU ZDO I4J ZRY HDU IU", "N EC8 PYP 7TI ROS 6UA WR1 JIN Y8Q 1FI TN1 4LR QSP ", "7F2 HJC GNI OWX 8NX PM1 8G7 XJ1 J2F RTO 6RX J9Y DZ", "Q ODU 987 S7Z 6A2 Y6V ISX RRA 6TJ PPU 7XZ JIV DLD ", "MJF B8N IJ8 F2E W5Z 388 JLT DDM IIX FDI K45 D2P ZW", "P 06G NHF 9XE YOI 13T LQL BPI IMN EWU XQU IYO Y82 ", "IRJ PLV 8H4 VOF 3LF VXM K94 QJK 7HX NMI 9O0 WSS JI", "F YMO 18S OL2 90D YP1 IJ8 YUY 0ZO LR9 BP1 N8J AEC ", "VSZ 3DL OJZ 92K N5X ASM J2F E5Q MGG BH0 NS5 9LG RJ", "H 6XT TQ1 4GH WLO JNB ZHP 0KC YT6 IJ4 W7E JRG QKL ", "7HD Y6J IT0 SB3 67Z POM 892 N4O ATB Y86 IRE ZY8 HA", "1 XGK J4D OOS 8XW LL6 BRR XJ1 23N Y1D IUN ZAE IAE ", "KME CFK SWQ 5MH W1N K6O IAB G3Y TKT 4M3 PPS 80H J9", "L E24 L8I C5V ZAX 0O0 VK8 3MN IJ4 FD9 Y2T IT8 IDS ", "FYR NFI 9XR JOZ DBE ZAE 0RS XGK 27K HMA GKY ZWQ 05", "L Y6J 1RE T2V 5C6 VLX 3LU UQB 46Y U3Q 4FV PNV 8FO ", "XC0 J53 QDL 7JL ZIY 0IH WOU 2YZ W53 3C2 QYN 7EA HY", "K G7O TB9 5AR WOU JKP R1C 7BD LJM BSJ K6O CYB N99 ", "ACV YT6 128 LG2 BWT XRW IXZ MIO BGS HW9 GBU R8F 75", "P UVK 41X IJT F0L I4J G6D HDU GVH JNB DBF ZHP HW9 ", "U5T 4EP MXJ AYN TBV 5AE ZQD 0ES JSF D3Q IT0 EHY Y2", "T 1S7 X3M 2GU WM6 JLT SHK 618 ZDO 0NI PG3 8LC JRG ", "D7K N7S AIV TPV 4HB IYO E8S R7P 768 PZK 7M4 ZUF 06", "U KHV CJG VXM 3CL MAK BO7 HJ1 GO7 MJ4 BDC VOV 3FU ", "UTJ 42F YUY IIX SST 5QX IT8 EGX QPH 7GI UXR 411 QQ", "E 7GE W1N 3CG PO7 8E2 ZLT 0I1 JKP DJ5 KHD CKM ONW ", "8YX US5 45Y VOV KCL SGX 61C WUA JEF SXL 5L5 N6E AK", "M ZWP HCO ZY8 02T N61 AQO TDY 573 JIF DNU X4D J9L ", "ZRY 087 S7W 6DS S27 6K0 YP1 139 XQU 239 S1U 6LK ZF", "7 HYK OWS 8OC J53 E2L ZZM H7N YY4 0VL SES 66Z QKS ", "7GM YD2 18Y IRJ ENK VSZ KC5 ZLT HL9 O32 9DF NLM 9Q", "S LBR C1Z NC8 A2T MTV B03 O8E 9BC IXH EBK W53 K45 ", "P0R 8MW SGH 61W TPM 4IX PZ5 7OL R1G 7A8 UOJ 47G J4", "D E43 JIN DN8 HL9 GKZ OUO 8Q1 PPI 85D JH0 DQJ S91 ", "68Y ZF7 0M2 WPB JIV P42 8MD Y6V 1N6 NX9 9I2 SN4 5U", "8 MS4 B6T ZAX IAB TK1 4PD WUA 2LZ Y86 1IX Y82 1M2 ", "NU4 9K4 RJJ 6UR IHU FV1 Y8Q INV RGQ 73Y IAE G25 NP", "T 9MQ YY4 IIR SMP 60F HDG GWB HA1 H7B HG9 GQN"};
    vector<int> seeds = {400, 337, 220, 193, 176, 123, 261, 402, 413, 468, 470, 202, 50, 415, 280, 355, 145, 69, 283, 440, 440, 157, 495, 490, 86, 362, 214, 387};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0RT", "DDM", "SGX", "QJK", "JOZ", "ZUF", "3QY", "0VL", "1RE", "9I2", "9LG", "R1G", "OL2", "1SD", "5BP", "EJE", "IHU", "POM", "5KO", "80H", "80H", "IT0", "BGS", "B6T", "WT5", "F2E", "S7W", "06G"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> teams = {"ZW9 ZR7 ZP5 ZNQ ZNF ZJ2 ZI7 ZEZ ZEX YZL YRM YO2 YN", "Y YNJ YMA YM5 YK0 YHV YGE YBB Y49 Y3S Y19 Y0X Y0K ", "XXO XUB XRK XHY XHW XHD XF8 XEK XEH XDS X93 X8R X7", "N X6D X5X X5O X1W WZL WZI WTA WRJ WRF WQR WQ5 WPW ", "WOQ WLP WJT WDJ WD4 WAB WA2 W9Y W6D VY8 VTM VS0 VO", "F VNW VMJ VJR VJN VIE VD1 VBH V7H V6E V4L V28 UXR ", "UWX URE UPR UL3 UJB UE7 U8H U66 U1W TZ8 TWR TW6 TQ", "7 TQ2 TPX TO3 TKF TJZ THQ TAR T8G T74 T2T SZ7 SWU ", "SW7 SPL SO9 SKT SKI SIE SHK SDG SB0 S7S S7I S6Q S6", "4 S5S S1Z RYV RO1 RNK RN9 RMQ RGQ RF2 REO RDL RA2 ", "R6A R50 R3S QSP QSM QQ1 QQ0 QPO QOU QMD QIV QGA Q8", "J Q4V Q4O Q2R Q21 PWA PW8 PSQ PJ6 PD3 P9I P5S P49 ", "P46 P3B P2F OWR OT7 OMW OLV OLI OL4 OFI OFE OBC OA", "P O3G O2F O17 NWV NUD NUC NPX NO7 NNV NMT NMQ NJB ", "NH4 NFJ NC7 NB2 N6L N2Z N14 MZM MTX MTO MPV MLB MK", "H MEZ M87 M7J M41 M34 M1F M0L LVY LVA LSS LK7 LJL ", "LDM L8I L6G L4J KZK KZI KYF KW3 KVD KSW KSV KHY KE", "A KE1 KBK K4T K0P JYN JX8 JPZ JNU JNS JJR JID JEL ", "JEH JDH JD4 JBM J6T J1E J1C IXV IW2 IRK IN6 ILL IJ", "J IIB IFT IEK IC1 IAF I9Q I84 I27 HY2 HUI HU5 HSA ", "HON HNH HK4 HJ6 HGA HDU HBZ H9P H91 H5B H3R GZ9 GX", "P GX5 GTA GSY GL9 GL7 GK0 GIG GCD GC4 GA0 G9P G42 ", "G38 G2V G1O G11 FYJ FTZ FTF FT6 FT2 FHF FGY FGP FC", "Q FBN FAZ F9R F9G F99 F8W F8M F5Q EZD EYQ EY4 EXY ", "EVV ERP EQK EOU EO6 EF4 EDV ECI E4E E0N DYS DXO DV", "3 DRU DRC DM2 DKE DIV DIR DIQ DI0 DHV D7D D5M D15 ", "CWE CVJ CTF CSL CRV CNC CKI CKE CJJ CIB CH6 CD1 CC", "R C5P C0F BZ1 BXC BWZ BTR BRX BQ1 BM4 BLU BLK BJN ", "BIT B69 B0Y AXI AVP AMK AKX AJT AIK AFS AAR AA7 A9", "M A8D A3M 9X6 9V5 9UL 9RS 9QJ 9Q6 9Q4 9LZ 9JG 9HK ", "9DF 9D7 96Q 95W 91O 8VP 8UE 8RF 8QR 8PU 8NB 8IO 8G", "7 8FJ 8DW 8BB 8AX 8AJ 89Y 889 86L 7Y9 7X7 7W6 7TP ", "7RA 7QP 7PA 7G2 7FM 7F6 7DU 7CP 7BN 79L 771 754 71", "W 6YB 6XF 6WY 6VH 6SV 6RW 6QE 6OH 6MF 6MD 6K4 6DG ", "6BV 6AC 699 665 63T 633 5XB 5S4 5PM 5E1 5DA 58N 55", "T 534 52S 4ZI 4ZB 4TU 4NC 4KC 4G8 4EK 4DU 4D1 4D0 ", "4CT 4AQ 4AB 4A8 486 45C 458 44W 41L 406 3RS 3RK 3I", "J 3HR 3EB 3AV 38Z 321 320 30Q 2ZZ 2ZT 2WX 2QU 2LA ", "2IW 2FQ 2CY 284 272 1ZR 1WY 1VA 1U0 1T1 1OT 1NL 1K", "T 1HB 1GS 1GD 1G1 1F7 17E 15Y 116 10R 0ZS 0YZ 0U7 ", "0R7 0QV 0MR 0KK 0FX 0E3 0D5 0D1 0CT 08J 04S 021"};
    vector<string> games = {"LDM DXO NWV BQ1 JJR FAZ YGE IJJ NMT C0F U8H 633 X7", "N JX8 P2F AFS P3B AAR HSA GXP ZR7 04S YNY 0U7 ZW9 ", "HDU NPX BWZ V7H 4ZB IW2 G11 P9I A3M WZL KE1 RF2 8B", "B JID FBN R6A 8IO RO1 86L XXO J1E HUI GTA ZR7 HGA ", "KHY EVV T8G 6VH V28 534 XUB 1OT Q21 9Q6 T2T 6XF KW", "3 EO6 WZI 320 IRK G1O JNU F9G Q4O 9LZ SHK 7F6 QPO ", "91O NUD BRX QQ1 8UE M1F DIR X5O K4T YNJ 0YZ YZL 0M", "R YBB ILL NO7 BXC X93 2FQ XHD JEH ZP5 08J I27 GL9 ", "MPV CVJ Y49 1G1 IIB G9P YO2 0R7 IXV FYJ JPZ F99 TH", "Q 6RW S5S 7W6 IJJ G42 XEH 284 X8R JPZ XF8 1ZR WQR ", "KVD KE1 EY4 WRJ 38Z VS0 4CT QGA 9DF S64 7TP LSS DR", "C VMJ 4DU TQ7 6DG KBK EYQ WDJ L6G IC1 GCD TO3 6MF ", "X1W 2ZZ HDU HBZ YMA IC1 VD1 4NC LVA DM2 YK0 IFT QM", "D 96Q XDS JNS NFJ CH6 VBH 4TU Q8J 9HK RDL 8FJ Y3S ", "1GD ZEX HUI M7J DHV K0P F5Q NB2 CJJ YK0 116 IN6 G2", "V UXR 55T YNY I9Q KVD EOU V4L 52S ZW9 021 SO9 79L ", "HY2 GSY YO2 I84 MEZ D5M ZEX 0KK XHY 1U0 UWX 58N LJ", "L DV3 X93 JNU NUC BTR RNK 889 JDH FGY NJB CCR OBC ", "BIT OAP BJN U1W 665 QIV 9D7 X6D 2QU VOF 4D0 OWR AI", "K WPW KYF RGQ 8AX WPW 3IJ KZK ECI WLP KZK SB0 7G2 ", "VNW 4D1 TW6 6BV WAB 458 YHV 15Y HGA H9P Y19 1GS MT", "X CSL YZL HY2 KSW EQK YM5 IEK RMQ 8AJ W9Y 486 VTM ", "4AQ LVY DKE ZI7 0E3 XHY JD4 MZM CRV XXO 1NL N2Z CK", "I OT7 AJT X1W KBK WZL 30Q IAF GIG ZJ2 0D5 P46 AA7 ", "HON GZ9 PD3 9X6 REO 8DW VJN 4G8 KSV ERP KZI EDV X5", "X 2WX W6D 4A8 VY8 4AB PJ6 9V5 O3G BLK WRF 3AV SZ7 ", "6YB P49 A9M YRM I27 NC7 CIB MTO CTF Y19 IW2 ZP5 HJ", "6 WA2 45C I84 GL7 WJT L4J QSP 8QR WQR 3EB YRM 0QV ", "KYF EF4 ZI7 HSA L4J E4E L8I DYS WAB LDM JEH FGP WJ", "T 406 X5O 2ZT J1E FTF M34 DIQ XUB J6T OLI AVP K4T ", "EZD ZJ2 HON WLP 3RS SW7 754 Q4V 9JG TJZ 6QE TKF 6O", "H Y0K J1C N14 CNC OMW AKX WDJ 41L QSM 8RF S7I 7QP ", "PWA 9QJ XDS 2CY TPX 6MD ILL G38 XF8 JEL XHW 1VA WO", "Q KZI Y49 IN6 XHD 1WY HK4 H5B YNJ IAF YHV IIB WQ5 ", "3HR Y3S IRK JYN F8M Y0X 1HB S1Z 7X7 RYV 7Y9 OL4 AX", "I P5S A8D X6D JYN URE 5DA YM5 10R YMA 0ZS VJR 4EK ", "QOU 95W S7S 7PA JEL FCQ OFE B69 ZNQ HK4 TWR 6AC SP", "L 771 Y0K 1KT TQ2 6K4 ZEZ HU5 ZNF 0D1 HJ6 H91 X8R ", "2IW SWU 71W UL3 5PM L6G E0N OLV AMK WD4 L8I RA2 8G", "7 WTA KHY MLB CWE HNH H3R JX8 F8W J1C FTZ VIE 4KC ", "JD4 FHF M87 D7D SIE 7DU WQ5 KW3 XEH JJR ZNQ 0CT WO", "Q 3RK R3S 8PU TAR 6SV MKH D15 UJB 5S4 M41 DI0 PW8 ", "9RS OFI B0Y Y0X IXV O17 BM4 U66 63T ZEZ 0FX X7N 2L", "A SKT 7BN WTA 321 YBB 1F7 WD4 44W NH4 CD1 RN9 89Y ", "XHW JDH HU5 GX5 Q2R 9Q4 SKI 7CP NNV BZ1 XRK 1T1 I9", "Q GK0 XEK JID IFT GA0 IEK GC4 J6T FT6 UE7 5XB KEA ", "EXY TZ8 699 UPR 5E1 R50 8NB WZI KEA JBM FT2 T74 6W", "Y LK7 DRU XEK 272 O2F BLU SDG 7FM X5X K0P NMQ C5P ", "M0L DIV QQ0 8VP N6L CKE XRK JBM PSQ 9UL ZNF HNH S6", "Q 7RA V6E 4ZI JNS F9R WRJ KSV YGE 17E WRF KSW"};
    vector<int> seeds = {119, 442, 170, 286, 425, 325, 490, 508, 114, 249, 476, 317};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ZEX", "8UE", "KE1", "6BV", "2ZZ", "8IO", "CJJ", "DM2", "YNJ", "VOF", "BLU", "889"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> teams = {"ZWT ZUQ ZP5 ZIF ZDN ZCX Z84 Z78 Z63 Z5H Z52 Z4E Z2", "S YXC YWJ YVS YV9 YPP YP9 YOY YMZ YKR YID YF5 YEP ", "YAU Y9J Y9G XZZ XZ3 XYL XW3 XV6 XUA XT4 XSU XRW XM", "2 XKR XIU XD1 X82 X4Z X1H WTR WTK WS8 WQP WM1 WKL ", "WJT WE6 WCB WBY WBX WAL W74 W5Z W5H W2P VXF VWK VU", "4 VRH VQ3 VG3 VFV VA3 V3B UZE UWR UOM UL5 UC5 UB3 ", "U8T U2N U19 U17 U0H U00 TXY TWI TUE TQ4 TQ3 TPH TO", "C TNN TH4 TGP TGL TFG T9V T7J T71 T5E T48 T44 T41 ", "SYE STR STA SSK SNF SND SJR SG6 SFP SBP S9P RZI RY", "M RSM RRP RPT RPB RON RLF RE2 R6Z R5U R54 R32 R22 ", "R05 QTF QRH QR8 QQ1 QOW QMT QKL QFA QDD Q7T Q2W PR", "S PRC PPP PP7 POZ PMP PLW PHG PGK P8X P7U P6E P52 ", "P0G OYR OYD OXO OVB OPU OMK OMA OM0 OI6 OF0 OAZ O0", "4 NYX NY0 NTK NO7 NMO NKR NIH NEA N8H N7G N7C N3Z ", "N3R N22 N0W MYH MWM MSZ MNL MIH MGY MGI MF6 MCO MA", "8 M9A M7Q M7B M3T M17 M0H M0C LZM LXZ LXX LX9 LUY ", "LPU LH1 LEK LBV LB5 LAT LAG L6K L6I L5H L1A KVK KS", "J KOK KNS KLN KJ1 KBP K9D K6I K2S K2K JZG JXI JU1 ", "JRF JQ2 JN1 JME JJV JGI JCZ J8U J8F J8B J7L J50 J3", "P IZ8 IYV IWE IW0 IRX IOL IOB IJJ IJF IJ9 I8W HY9 ", "HQ0 HOJ HO7 HNU HJZ HIW HIA HEE H8U H3Y GYN GY4 GY", "1 GWS GK6 GIC GHU GBV G7G G78 G1G G11 FZC FYN FY7 ", "FXR FX9 FTZ FS5 FR0 FQH FQ1 FLB FGH F8Q F7B F61 EY", "W EYH EXL EQB EOP END EL5 EJ3 EHJ EGC EGA EAV E6T ", "E6H E5U DY8 DXM DW1 DUS DT3 DO0 DNL DMY DMN DLK DL", "9 DKP DD9 DB2 D9R CY9 CXD CXA CND CNB CKP CJ1 CIS ", "CH3 CFO CE3 CCX CCN CA0 C9J C8Z C85 C3T C01 BRY BP", "2 BMV BI5 BHC BGC BFV BA1 B9Q B90 B5F B5E B2Y B0I ", "B08 AXZ AVH AU9 AU2 ATL AQW AHW ACK AC2 A99 A58 A3", "U A3H A1L A0U 9Z8 9XF 9QV 9MZ 9HK 9EN 9E0 9CW 9CC ", "9BQ 938 928 91Q 90Q 8YU 8YL 8VV 8UH 8TL 8SX 8S0 8N", "L 8KS 8GA 8G3 8FW 8FN 8CH 8AV 87Q 875 86H 84Q 84P ", "84F 84D 82A 80N 7UU 7SQ 7SC 7MW 7L1 7KH 7IR 7EW 7E", "2 7DA 7CN 79D 797 727 70T 6TB 6PS 6P3 6O9 6NC 6HM ", "6GV 6FD 616 5ZD 5W0 5RX 5M0 5KN 5KA 5JZ 5HJ 5H1 5F", "1 5EJ 58S 53E 533 52J 4ZZ 4YS 4WP 4U6 4SO 4OO 4LX ", "4LA 4FW 4FP 4F6 4BV 4BI 47P 46B 45T 3VA 3UX 3UO 3Q", "7 3PD 3OG 3M1 3L1 3CL 39Y 373 32Q 2XQ 2XK 2O4 2MW ", "2MB 2LC 2JM 2HK 25L 25E 24D 23J 23G 20X 1T5 1RT 1P", "6 1MH 1KD 1IK 1I9 1HG 1F9 1EH 1AI 18W 17Q 165 13L ", "11P 10X 0Z0 0XH 0TX 0RE 0PM 0MA 0KO 0JZ 06D 036"};
    vector<string> games = {"P7U A1L XUA 2HK X82 32Q J8B FTZ PHG 9XF KSJ E6T U1", "7 5KA LX9 DKP RSM 84Q PGK 9Z8 XZ3 JQ2 IYV FZC QMT ", "8YU YP9 1F9 ZUQ HJZ ZWT HIW RLF 8CH YV9 1AI UZE 52", "J HJZ HEE MF6 CFO KBP EJ3 N22 C01 XIU 2XK Z84 HY9 ", "Z52 10X WCB 3VA QTF 8SX W74 4BI Y9G 20X SFP 80N NM", "O B9Q ZCX HQ0 XZZ JN1 VU4 4LX RPT 875 VA3 4YS JJV ", "FLB PMP 9MZ Z78 0TX V3B 4ZZ YPP 1EH M7B CNB KJ1 EH", "J WAL LPU YWJ 17Q YV9 IYV XKR 2O4 P52 A3U J8F FS5 ", "XKR KBP Z5H 0Z0 IJ9 GK6 XYL JRF K6I END WQP L6I T9", "V 70T MYH C85 M0C CY9 PPP 9E0 T48 7CN MWM C8Z UL5 ", "58S UOM 53E OPU AQW M7Q CKP YEP JCZ HNU H8U UB3 5F", "1 WE6 3UX YKR J8B L5H DY8 YWJ IW0 IW0 G1G M0H CXD ", "STA 7KH SG6 7UU WTR 3CL ZWT 036 TGP 6P3 NO7 B90 M3", "T CND SSK 7L1 ZIF HO7 JXI EYH RZI 84F MNL CA0 TNN ", "6NC YID 1KD Z5H IJF JRF F61 U8T 5H1 YF5 J8U YOY J5", "0 NEA BGC NYX B2Y X4Z 373 OYD AC2 WBX LH1 J3P FY7 ", "ZP5 0JZ KNS EGA YVS IWE NY0 B5E SNF 7MW LUY DL9 T4", "1 7E2 LAG DUS WKL LAG Z4E 11P NTK B5F HOJ GYN ZDN ", "HOJ TQ4 616 KLN EGC VQ3 4SO RPB 87Q U19 5JZ WKL 3Q", "7 JCZ FQH RON 8AV HY9 GY1 TGL 6PS WJT LAT NKR BA1 ", "PLW 9QV TOC 6HM QRH 8TL YID J8F Z52 IJJ MGY CCX WQ", "P 3OG I8W GWS XIU KJ1 Y9G JME HO7 H3Y QDD 928 PP7 ", "9EN YPP IZ8 OM0 AU9 IJJ GHU XSU 2LC Z2S IOL QFA 91", "Q XZ3 23J X4Z KOK L6K DW1 OYR A99 XW3 JU1 WM1 3PD ", "SND 7SC XRW K6I LAT DT3 XM2 K9D ZCX 0PM YAU 1RT Z8", "4 0RE XT4 2JM XUA JZG Y9J 1T5 IJF GIC YOY 1HG LPU ", "DLK YP9 J3P XW3 25E XRW 2MB HIW HIA NIH BFV J50 FX", "R YF5 1MH TQ3 6FD U0H 5KN XV6 25L R05 8S0 RE2 8FN ", "WCB LBV K2K EQB POZ 9HK WBY 45T IRX G78 JN1 F8Q S9", "P 84D JGI FQ1 QQ1 8VV TH4 6O9 XM2 2MW LZM D9R TXY ", "5RX HQ0 GY4 STR 7IR N7C BMV VRH 4OO XZZ 23G R54 8G", "A W5Z 4BV MCO CH3 T7J 727 ZUQ 06D WAL 47P XV6 JXI ", "LXX DD9 UWR 533 LBV DNL RYM 84P UC5 5EJ TUE 5ZD N7", "G BI5 WS8 3M1 IZ8 FYN YAU JGI QOW 8YL LXZ DB2 N3R ", "BRY LB5 DO0 IWE G11 KVK E6H W2P 4FP R32 8KS J7L FX", "9 K9D EL5 U00 5M0 R6Z 8FW YXC IRX Z2S 13L ZDN 0MA ", "MGI CE3 WJT 3UO VFV 4WP Z63 IJ9 MSZ C9J Z63 0XH L1", "A E5U X1H 39Y T71 797 ZP5 HNU Z4E IOB LH1 DMN L6I ", "DXM SJR 7SQ WTK 3L1 QKL 90Q X82 KNS OMK ATL WTK L1", "A Q7T 938 X1H KSJ TPH 6GV WTR KVK WBY LEK YVS 18W ", "XT4 K2K ZIF 0KO Y9J JJV WS8 L5H WBX 46B OMA AU2 LE", "K DMY OXO ACK OVB AHW R5U 8G3 SBP 82A KOK EAV N3Z ", "BP2 JU1 EYW RRP 86H T44 7DA IOL G7G PRC 9CW W5H 4F", "6 R22 8NL VWK 4LA TWI 5W0 P6E A3H VXF 4FW P0G A58 ", "OF0 AXZ J8U FR0 XSU K2S U2N 5HJ XYL 24D P8X A0U YE", "P 1P6 T5E 79D YMZ 1I9 OI6 AVH QR8 8UH O04 B0I JZG ", "EXL XD1 KLN JME FGH M17 CXA VG3 4U6 MA8 CIS MIH CC", "N WE6 LB5 Z78 I8W N8H BHC TFG 6TB PRS 9CC N0W C3T ", "SYE 7EW OAZ B08 YXC 165 XD1 2XQ YMZ J7L M9A CJ1 IO", "B GBV JQ2 F7B Q2W 9BQ K2S EOP YKR 1IK WM1 L6K"};
    vector<int> seeds = {225, 249, 407, 507, 321, 139, 9, 364, 480, 26, 90, 447, 86, 173, 4, 215, 11, 219, 212, 158, 333, 396, 156, 495, 159, 4};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"TPH", "VU4", "1MH", "D9R", "8G3", "IOB", "M7B", "FXR", "BA1", "N7C", "XM2", "938", "X82", "L1A", "LZM", "T5E", "M9A", "TFG", "T41", "JRF", "DT3", "13L", "JN1", "CCX", "JU1", "LZM"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> teams = {"ZW3 ZLO ZIA ZDS ZBP Z45 Z2R Z22 YX4 YSC YQU YPE YO", "8 YMM YMI YI0 YG2 YF3 Y7O Y5N Y2V XXY XXP XXH XXE ", "XV3 XU0 XR8 XQS XOX XOF XMZ XM7 XLF XJY XGV XCS XB", "C X77 X6E X18 X0O X09 WYX WSE WSD WNF WM5 WBV WAX ", "W6W W6N W4M W48 W2P VW6 VVU VUS VT3 VR4 VOV VOJ VO", "1 VMR VHL VFW VFJ VEQ V7H V6R V3B V26 V1M UZM UV6 ", "UTY UFQ UET UEK U9Z U81 U7F U6W U3F TZG TVH TO8 TK", "F TIF TEL TC0 T9X T5J T46 T27 SZT SYY SYL SSQ SPH ", "SOV SOC SLD SG1 SCW SA0 S73 S70 RX2 RSD RRT RQK RM", "B RM2 RLZ RKJ RIU RIQ RH3 RBO RA1 R9E R8G R78 R2Q ", "QZP QXW QXG QWP QWI QOE QNO QJH QG9 QF7 QDX QD3 Q9", "T Q61 PXU PXD PWL PVF PU4 PP0 PF1 PB8 P91 P88 P7Q ", "P70 P5H P4C P4A P3C OZR OXM OSL OQ5 OPC OKW OIT OF", "U OFN OFC ODQ O9R O9F NZO NYF NUM NT6 NG0 ND9 N7Q ", "N7B N4M N31 MYW MOG MMM MIT MGP MFO MFE MDV MDQ M9", "P M7Z M4V LYJ LU4 LLT LIJ LFQ L4W L3V L1M L0C KX6 ", "KSE KQW KQI KPN KPM KNC KID KI1 K7K K4X K3G K2A JU", "3 JU0 JTZ JQQ JPR JFT JEU JET JD3 J8Y J72 J6B J5M ", "J4Z J2Y J2V J14 IZF IXP ISL ISC IRO IQW IN2 IMA IK", "S IKE IIR IBU IAR I7Y I71 I69 I49 I48 I2S I1C I0B ", "HYB HV0 HSN HL1 HKG HI4 HHU HF3 HA3 GZB GZ4 GVD GU", "D GR9 GOM GNW GIL GCP GBU GAH G81 FZO FW2 FV9 FQM ", "FQK FOP FKI FIA FHB FH3 FEY FAQ FAE FAA F9O F66 F4", "Z F29 F0B EZ9 ESX EPT EPN EOR EO0 ENT EN9 EIR ED4 ", "EBF EAO E6G E4B E2I E28 DOQ DNG DME DGY DEV DEL DC", "Q D9V D89 D7J D4R D36 D1Z CXQ CQB CPR CP6 CMJ CLC ", "CJI CIU CFS CDM CCV CBF C9Y C6X C1E BVA BQS BPS BF", "V BBD BBC B8W B83 B5K B0F AZS AZB ARZ AQG AQ8 AKA ", "ADQ ACA ABZ AB5 AAS AAO A9N A5H A5B A54 A39 9Y9 9W", "H 9UI 9SV 9HC 9GR 9GD 9DY 9DP 9CV 9B8 9AB 98B 975 ", "962 91P 917 8YM 8T9 8RK 8P9 8ME 8KT 8EE 8D9 89U 86", "F 854 81M 7YY 7XE 7WU 7UJ 7S2 7PS 7NR 7M4 7JZ 7JI ", "7GE 7G3 7FG 7FF 7EM 74E 72R 6UH 6SJ 6RG 6QF 6QC 6P", "0 6O4 6KH 6H0 6G3 6FD 6DZ 68T 633 62Z 5Y2 5VJ 5UM ", "5SO 5RM 5OL 5NY 5NR 5L7 5GP 5FM 5CK 5B1 53U 52Y 4V", "L 4QN 4O1 4MY 4M9 4JO 4IA 4HO 4CB 4A6 48Q 46J 44Z ", "3ZZ 3YH 3Y4 3OB 3M8 3KJ 3GU 3GM 3F7 3BC 36L 365 31", "X 305 2YB 2X6 2VY 2UW 2TU 2SA 2QT 2QS 2LO 2LD 2L1 ", "2KK 2J6 2G1 2F7 2CP 29X 28T 26P 25E 21T 210 1X6 1W", "I 1U4 1RE 1RB 1OZ 1NL 1N7 1JW 1IG 1H5 1ER 17V 16V ", "15Q 123 10H 106 0YK 0VS 0V7 0R5 0II 0D6 093 048"};
    vector<string> games = {"P7Q 9WH WYX 2TU ODQ ARZ NYF B5K SOV 6QC MDQ CJI S7", "3 74E YI0 1H5 XGV 2J6 X09 2SA ZBP HV0 UZM 4QN QD3 ", "962 ZBP 0R5 VFW 4A6 HKG HF3 W4M KPN Y5N IMA ZLO HK", "G Z22 0YK XXE 1WI W6W 365 WSE K2A MFE CFS WSD K3G ", "WSD 2VY VMR 46J Z2R I0B J8Y EZ9 HI4 HHU VOV 3YH LY", "J CPR I2S GOM R78 854 R9E 7YY X09 JU0 I49 GIL LLT ", "CXQ ND9 BBD JTZ EN9 L1M D89 PWL 9CV X77 2LD JQQ EN", "T QWI 8ME YX4 I2S TKF 5UM X77 JFT Y7O 1N7 RQK 7GE ", "T27 6FD I1C GR9 I7Y GAH Z2R 0VS OQ5 AB5 IQW FKI TV", "H 5RM QXG 8EE YG2 1IG IZF FAQ VVU 3KJ U3F 5NY ISL ", "FH3 ZIA HL1 RA1 7XE PB8 9HC VR4 3Y4 JET EPT UET 5B", "1 XXP 1RE X0O JTZ P4A A5B OIT ADQ RLZ 7M4 XXH ISC ", "YMM 17V XMZ J5M XLF J72 XOX J2Y LFQ D36 I71 GBU V3", "B 4M9 XXY IQW WNF K4X XU0 IZF HL1 HA3 YX4 106 XOF ", "28T MDV CIU O9R AZB YSC 10H XV3 1X6 VW6 KSE W6W KN", "C RM2 7JZ WAX 31X XMZ 29X UEK 5CK K2A EBF I0B GUD ", "SYY 6H0 MOG C6X W2P 3GM NG0 BBC SYL 6KH MFO CDM ZI", "A 0D6 YQU 123 OZR A9N TO8 5SO ZDS HSN JU3 ED4 RBO ", "7WU N31 BVA Y5N 1NL IAR G81 O9F AZS WBV KI1 RH3 7U", "J QOE 8P9 XR8 21T SLD 6RG RX2 7FF XLF 2F7 XR8 J14 ", "YF3 IKE WSE 2UW MYW C1E SOC 6QF T9X 633 RIQ 7S2 XG", "V JD3 QXW 8D9 SPH 6P0 PXD 9B8 LIJ D1Z Y2V 1OZ KQW ", "DEV P3C A5H KSE DEL W6N 36L J72 F0B SA0 72R QNO 8R", "K ISC FHB XBC JEU Y2V IN2 I69 GCP YO8 I71 XJY J8Y ", "X0O 2QT WM5 K7K NUM B83 X18 JQQ XBC 2L1 T46 6DZ VE", "Q 4HO R8G 81M N7Q BFV NT6 B8W XJY 2G1 YPE I69 TC0 ", "62Z PF1 9GR OFC AQG YMM I7Y HYB GVD XXY 1RB VHL 48", "Q QZP 89U OFN AQ8 W48 3F7 JEU EPN JFT EOR UFQ 53U ", "IIR FW2 W4M 3BC J2Y F9O K3G EAO P5H A39 Q9T 975 OP", "C ABZ X6E JPR R2Q 86F KI1 E2I KID E28 SCW 6UH NZO ", "B0F ZDS 0II Y7O IKS KX6 DCQ J5M F4Z IKS FQM N4M BQ", "S HV0 GZ4 OXM AAO W48 KQI MMM C9Y RMB 7JI Z45 HYB ", "VFJ 4CB S70 7EM SSQ 6O4 OSL AAS XQS 25E J6B F29 P9", "1 9SV XCS JET KPN DME SG1 6SJ PP0 9GD TEL 5Y2 YPE ", "15Q IBU FZO U81 5GP XM7 J6B MGP CCV WBV 305 IXP FE", "Y K4X E6G YG2 IIR YO8 16V M7Z CMJ OFU AKA XU0 210 ", "Z22 I1C RRT 7G3 HSN GZB ZLO 093 WAX KID XOX 26P L0", "C D9V PVF 9DP JD3 ESX X18 2QS V6R 4JO YMI 1ER VO1 ", "44Z QJH 8T9 WNF 2X6 YSC I48 IN2 FOP QDX 91P J4Z F6", "6 W2P KQW ZW3 HI4 U6W 5NR XM7 2CP KNC DOQ I48 GNW ", "V1M 4O1 OKW ACA XOF J4Z UV6 4VL IRO FIA VUS 3M8 V7", "H 4IA P4C A54 U9Z 5FM M9P CLC XXH 1U4 KPM DNG J14 ", "FAE TZG 5OL N7B BPS U7F 5L7 XQS J2V IMA FQK ZW3 04", "8 XXP IRO L4W D4R WM5 2YB VT3 3OB V26 4MY J2V FAA ", "UTY 52Y XCS 2KK PU4 9DY Q61 98B QF7 917 TIF 5VJ X6", "E 2LO JU0 EIR XV3 IXP P88 9UI YI0 IBU QG9 8YM P70 ", "9Y9 W6N KPM YMI IAR PXU 9AB MIT CBF QWP 8KT LU4 CQ", "B K7K E4B Z45 0V7 T5J 68T VOJ 3ZZ M4V CP6 RSD 7FG ", "IKE FV9 XXE ISL YQU I49 JPR EO0 VW6 3GU KQI DGY YF", "3 1JW RKJ 7NR L3V D7J RIU 7PS WYX JU3 SZT 6G3"};
    vector<int> seeds = {221, 18, 422, 70, 382, 252, 450, 417, 417, 56, 93, 286, 121, 510, 352, 342, 337, 317, 398, 335, 289, 223, 183, 487, 95, 78, 46, 118, 279, 311, 381, 175, 318, 142, 342, 455, 324, 210, 205, 218, 232, 402, 197, 138, 80, 48, 424, 489, 345};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"TC0", "MIT", "2LD", "QWI", "HF3", "VR4", "98B", "2F7", "2F7", "PU4", "XJY", "5SO", "Z2R", "D9V", "F4Z", "EN9", "E6G", "7S2", "1ER", "E2I", "5Y2", "TIF", "KSE", "BPS", "XM7", "WAX", "P4A", "YSC", "5FM", "7GE", "HA3", "K7K", "7UJ", "IAR", "EN9", "9DY", "86F", "SOC", "S73", "T46", "U9Z", "1N7", "RLZ", "I49", "WM5", "P5H", "2QS", "BVA", "EOR"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> teams = {"ZV8 ZQQ ZQC ZOA ZMV ZMI ZL8 ZKY ZJB ZIS ZGR ZC2 ZB", "J ZAM ZA9 Z2X YW8 YUD YP5 YM2 YII YG1 YB4 Y80 Y63 ", "Y1S XSO XNG XMO XKZ XCS XB8 XB5 XA2 X8G X7P X73 X6", "4 X54 X4A X23 X12 WU3 WSR WQ2 WJC WGJ WER WCE W2T ", "VZR VZ0 VUK VT5 VRA VPT VMY VLR VKC VJJ VJH VI1 VE", "9 V4M V39 V1B V0S UZY UWO URT UR0 UOI UN3 ULW UJ7 ", "UES UBC UAH UAE UAA U92 U2V U1S TZJ TSZ TSR TRF TG", "W TBA T94 T93 T88 T85 T50 T4P SXJ SXH SX3 SVY SVJ ", "SHZ SFU SEQ SEG SAR S9Q S8C S6U S6N S53 S31 S2F S1", "Z S08 RYF RUP RQX RQN RJZ RJU RI3 RF6 RDZ RD3 RAB ", "R82 R6C R1L QZV QXE QWW QWJ QVQ QSG QPP QP0 QJV QJ", "H QGS QG4 Q44 Q0L PWY PQG PP9 PNT PM0 PLB PL7 PKD ", "PJ8 PH9 PGL PDG P5S P5E P2O P2B P12 OZ4 OXE OTT OS", "F OSB ORT OQX ON8 OMI OGO OF1 ODC O8T O05 NZV NZQ ", "NXH NWQ NV4 NQU NQM NP7 NO8 NKE NKC NH5 NGE N6B N2", "7 N0L MVN MT1 MMX MKA MHY MGS M5T M1X M19 M0E M08 ", "LZE LXH LVD LV0 LUQ LTJ LS0 LRL LOS LM6 LLA LCX L2", "5 L0J KWI KRK KNS KJF KJ5 KCY KC9 K9V K1Y JXQ JVT ", "JVK JUX JTS JRN JRC JMF JMA JLR JJ7 JIQ JAO J95 J1", "L J1K IWH IWD IV8 IV1 ILA II6 IHJ IFZ IF6 IEI IDI ", "I9H I9G I4Z I4V I4L I1Q I1N I09 HZR HW5 HVF HVC HU", "N HST HO4 HO0 HMU HI2 HFL HEO HCW H2V H2B H1U GXO ", "GP6 GO3 GMF GEK GDL G97 G5L FZV FZ3 FZ2 FXL FVR FT", "E FST FS8 FQE FPE FOB FO5 FL0 FI3 FEM FEA FBU F95 ", "F7Q F4N EZU EYQ EXZ EWZ ETI ESJ EP3 EO1 EMD EH2 EG", "N EG2 EE4 EAF E6F E5D E4W E26 E12 E01 DW1 DUX DSY ", "DSU DQM DMH DLN DLE DIB DET DEE DCT D9R D7M D6G D2", "S D2O D2J D1L CZL CX0 CU6 CQ2 CMI CLG CIL CH2 CF2 ", "CCM CC9 CB0 C8I C81 C7J C6X C6A C0Y C0A BYX BWI BS", "I BSD BS5 BMN BMA BLR BJ1 BH4 BE2 BA0 B70 B27 B0N ", "AZN AVB ASV ARC AN4 ALX AJS AGP A8B A2P 9UQ 9UL 9S", "9 9R3 9PW 9O3 9MT 9ME 9M9 9KE 9D5 98O 98D 987 8SA ", "8RU 8NM 8LC 8L3 8G7 8FM 8E6 8CV 87W 83N 7VD 7T5 7S", "V 7QO 7QM 7NL 7LQ 7KB 7K5 7K4 7IG 7H9 7FL 7FC 7AE ", "799 727 708 6YN 6YE 6VM 6RD 6R1 6O7 6EY 6AG 69N 66", "C 648 61H 5YE 5XE 5SZ 5HV 5AZ 56C 548 541 53R 50X ", "4YM 4VX 4SO 4QG 4Q7 4OT 4O4 4NK 4HN 4GJ 40X 3ZK 3U", "T 3OA 3NF 3LQ 3I3 3EI 3BA 37Z 36J 36G 33R 2ZI 2SN ", "2RA 2PK 2PJ 2NB 2MR 2LD 2KF 2JG 2E8 2AN 27E 278 27", "1 24M 1YY 1YD 1W5 1PJ 1LA 1JT 1IL 1D6 1CT 1A3 17W ", "16S 11E 102 0Q4 0M5 0KG 0I8 0HV 0HE 0DT 03R 00G"};
    vector<string> games = {"ZIS 102 T4P 7KB UAA 6R1 UN3 61H V39 541 NQM DEE QP", "P ASV NZV D2O ZQQ I4L TBA 7FC MMX E12 YII JAO XB5 ", "2MR UOI 5YE PP9 BLR PL7 BSD VJJ 4SO ZMI I9H JMA G9", "7 VE9 50X YG1 1YD X64 2SN X64 KJ5 IDI HUN XSO JRC ", "OSF CF2 KC9 FPE WJC LLA S6N 8L3 UWO 5HV M19 EE4 WE", "R LOS J1L GXO S08 987 XMO JTS RF6 9O3 V1B 548 PJ8 ", "BWI ZQQ 03R I1Q I1N URT 5SZ I4L I09 QVQ AN4 XNG JR", "N MKA E26 KJF FL0 RDZ 9PW Y1S JMF S31 8NM ZV8 00G ", "N0L DUX VUK LV0 WCE LRL PQG BJ1 TSZ 708 Y63 271 VM", "Y 4OT WSR 3BA NO8 DIB KCY FOB XB8 JVT I9G HVF X12 ", "KWI X8G K9V WQ2 3EI YG1 JIQ X7P KC9 S6U 8G7 OZ4 CB", "0 XKZ 2JG WER 3NF KWI FEA T93 7H9 WJC 3I3 RQN 9KE ", "N6B DSU QG4 B70 L25 F95 IV8 HCW PGL C0A ODC CZL I4", "V HZR MGS E5D U1S 6YE LS0 EWZ TGW 7AE VZ0 40X Z2X ", "1D6 K1Y FS8 WGJ LM6 L0J FBU JVT FTE X23 KRK RYF 98", "D UAH 6EY ILA HFL NV4 D9R YM2 J95 II6 HI2 S1Z 8SA ", "LLA F4N IWD H2V NQU DCT ORT CIL OGO CU6 X73 KCY X5", "4 KJF X8G 2PJ ZV8 I1Q NKE DLE M1X EAF ZJB IF6 SFU ", "7VD P2O C7J JJ7 GEK LRL EXZ ZGR IHJ M0E EG2 NGE DQ", "M QWW AJS MHY E4W X7P 2PK NWQ D7M RQX 9D5 ZKY 0M5 ", "ZOA I4Z XB8 2LD Y80 24M RI3 9MT MVN DW1 VZR LTJ S2", "F 8RU W2T 3UT VT5 LVD QJV AZN O05 D2J V4M 53R KJ5 ", "FO5 ZKY IEI RD3 9R3 JAO GO3 P5E C6X RJU 9ME WSR L2", "5 XA2 2NB QJH B0N OQX CLG LZE EH2 ULW 648 TRF 799 ", "JTS FZ2 ZJB 0Q4 R6C 9UQ ZBJ 17W ZQC I4V M5T E6F JR", "C FZV WU3 L0J ZMV 0HV UES 69N IHJ HMU PNT BMA ZIS ", "IFZ IF6 HO4 S9Q 8E6 PKD BSI QWJ ALX ZOA 0HE JXQ FS", "T Q44 BA0 T94 7FL ZBJ ILA S8C 8FM RJZ 9M9 WCE 3OA ", "SVY 7QO X73 2RA X23 36G PM0 BMN SXJ 7LQ ZQC 0DT LV", "D EO1 ZL8 0KG M08 EGN P5S C6A TZJ 6YN XSO 27E XCS ", "2KF NZQ D2S QSG ARC PH9 BYX XB5 JXQ R1L A2P XMO 2E", "8 K9V FQE VKC 4QG Z2X IWD PLB BS5 YP5 1LA OMI CQ2 ", "Y1S 278 P2B C81 ZGR 11E X54 2ZI OF1 CX0 PWY BH4 SV", "J 7SV YB4 1YY VUK 4GJ RUP 98O Q0L BE2 UJ7 66C WU3 ", "37Z J95 GP6 ZAM 1A3 Y80 JLR SXH 7NL V0S 56C P12 C8", "I RAB 9S9 IEI HST LXH EMD SX3 7QM YII 1W5 QXE AGP ", "KNS FI3 NKC DLN QGS B27 ZA9 1CT JIQ GMF VZR 3ZK YP", "5 J1L X4A KNS JMF G5L VLR 4Q7 T50 7K5 ZC2 16S KRK ", "FEM YB4 JJ7 YW8 1IL IWH H2B LCX F7Q ZA9 IV8 VRA LX", "H X4A 33R W2T LS0 U92 6RD SHZ 7T5 U2V 6VM VRA 4NK ", "SEQ 83N VJH 4VX XCS JVK UBC 6AG LOS EYQ Y63 JMA LU", "Q ESJ ZAM IV1 IV1 HEO T88 7IG SAR 8CV ZL8 IDI NH5 ", "DMH JUX FXL S53 8LC YUD J1K SEG 87W WGJ 3LQ YUD 1J", "T QP0 AVB MT1 E01 N27 DSY ZMV I9G WQ2 LCX XA2 K1Y ", "J1K H1U UR0 5XE OSB CH2 VPT LZE NP7 DET UZY 5AZ O8", "T D1L XNG 2AN PDG C0Y I4Z HW5 LV0 EP3 ZMI 0I8 I9H ", "HVC VT5 4HN QZV A8B YW8 IWH LTJ ETI ZC2 II6 YM2 1P", "J OXE CC9 TSR 727 UAE 6O7 JLR GDL VPT 4O4 JVK FVR ", "VI1 4YM VZ0 LUQ NXH D6G OTT CCM R82 9UL ON8 CMI XK", "Z JUX T85 7K4 X12 36J IFZ HO0 LM6 EZU JRN FZ3"};
    vector<int> seeds = {203, 137, 269, 246, 205, 193, 486, 297, 64, 389, 133, 459, 278, 14, 14, 263, 33, 498, 398, 67, 379, 504, 384, 410, 37, 299, 151, 397, 238, 45, 439, 245, 151, 206};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S6N", "IFZ", "5SZ", "V1B", "S8C", "RJZ", "D2S", "7QM", "QP0", "0I8", "I9H", "BS5", "6O7", "NGE", "NGE", "53R", "ON8", "DSU", "1CT", "QVQ", "HVF", "E26", "00G", "27E", "OSF", "7SV", "JLR", "1A3", "ULW", "P5S", "4O4", "V0S", "JLR", "S9Q"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> teams = {"ZZM ZXP ZVU ZQT ZNZ ZMI ZLN ZKA ZJP ZJ8 ZIW ZHZ ZD", "E Z9L Z7R Z7H Z5W YY0 YOL YKW YK8 YJB YED YE8 Y7T ", "Y7O Y74 Y50 Y3W Y2J Y0P Y05 XRO XFH XBR XBL XAW X6", "7 X1P X1I X0S WXM WRB WOA WL1 WKV WJD WGV WCZ W5V ", "W4D W2L W2C W01 VZC VYL VVV VR7 VN3 VK4 VJO VJB VB", "5 V87 V7Z V7D V77 V3F UYP UVV UUT UUI UU3 UT2 UOB ", "UMG UK4 UIM UGY UEH UDZ UBD UB9 UAS U95 U3N U3B U1", "J U0Z TYF TWR TLG TKY TKV TJB TIE TH0 TFN TF1 TCP ", "TCM T7A T76 T75 T01 SV8 SV0 SRU SPQ SPA SOW SNT SJ", "1 SEW SBU S3J S3C S29 S0V RZJ RWX RWE RUY RTN RSY ", "RQJ RPV RLQ RHX RHE RFL RFI RB2 RAD R78 R72 R32 R2", "L QZH QY6 QHR QAZ Q8H Q5R Q4Z Q1E PYM PUH PQH PKQ ", "PGD PG0 PDO PCY P45 OVK OV9 OS8 OOJ OLY OLF OKS OK", "E OID OF0 OCV O0X NXL NX1 NU6 NS0 NMT NLN NLD NIY ", "NIE NHQ NHE NH2 NGF NDK NCV NC6 NBH N9Y N9S N6D N5", "L N4W N33 N2N N1B MYK MYF MW4 MVW MUV MPX MMI ML9 ", "MJP MIL ME5 M6Y M6U LYB LX1 LTA LFS LBS L9G KYQ KX", "X KXO KWY KVR KV8 KV7 KUM KSQ KSM KRJ KPD KOW KKK ", "KH0 KBK K0U JSS JOW JNY JKP JKE JGD JEG JDB JD7 JD", "1 JAM J9U J4N J1U J0D ISG IRR IQP IQ6 INQ IFL IB5 ", "IA8 IA6 I8K I8I I52 HWW HR6 HQE HNR HN4 HM8 HIZ HI", "A HBU H5U H5A H40 H25 H1J H1C H09 GTI GQO GQ1 GNR ", "GMI GJ2 GHT GFH GAR G90 G72 G2W FUV FR1 FQT FMU FJ", "T FJE FJ3 FIC F6U F2X F2D EXG EW6 ERX EOR EO9 ELV ", "ELK EKJ EGY EDM EDC EAE E7Y E5V E35 E2K E2B DTN DP", "3 DK9 DJE DGS DFY DCE DBM DAL D7U D74 D4K D3C D2H ", "D1Z D0X CWG CUN CSG CR6 CNP CIZ CI9 CGD CDX CDH C7", "3 C3N C29 BVR BT7 BRQ BRH BPX BM6 BH9 BFR BFI BCT ", "BBF B1F AZD AXW AXI AW7 AW5 AVL AUT ATK ARY AP8 AJ", "Q AGM A7T A76 A51 A41 A3I A3C A2F A27 A05 9ZK 9XJ ", "9TN 9PP 9M5 9LZ 9GV 9CQ 97X 97T 97N 91Q 8Y3 8XH 8S", "O 8RX 8Q3 8Q2 8MB 8LG 8GM 8GC 8EO 86U 84X 80K 7X2 ", "7UR 7R8 7I9 7FQ 7EO 7DL 78E 77K 779 6X8 6WU 6WG 6R", "L 6Q8 6JW 6IR 6GP 6DD 6B9 67Y 66H 65Q 61W 601 5WO ", "5V2 5T8 5QV 5QE 5MR 5KP 5ID 5I7 5E1 5AA 59O 59I 55", "C 529 515 4TC 4ML 4IM 4GE 4FO 4FK 4AK 437 435 3ZP ", "3YG 3Y1 3V2 3UN 3QG 3LC 3I6 3GY 3G4 3EI 3EA 3CC 39", "Y 39C 30E 2Y3 2VB 2TW 2TK 2RR 2RB 2PI 2NC 2LU 2LK ", "2KA 2JE 2J7 2EH 29E 27M 26H 23A 22N 219 1TX 1RR 1O", "A 1O7 1JW 1GJ 1DE 1CB 16J 14B 13E 12F 120 0SN 0MX ", "0KM 0HQ 0H0 0GK 0FM 0ES 0B0 09J 07O 06P 01V 01G"};
    vector<string> games = {"Y05 27M OVK AW5 J1U H09 ZZM 01G T75 779 JNY G72 X0", "S 2PI QAZ A2F WGV 30E YY0 JAM RHE 97T ZQT 07O X67 ", "KUM T01 77K T76 6X8 Y7O 1RR KKK FJT WCZ LTA YE8 JK", "E ZQT I8K TJB 6DD ZMI 0B0 UEH 5I7 Z7R J1U OKE BCT ", "RFI 9CQ V87 435 R72 9PP NIY C73 VR7 3QG SPQ 7FQ IS", "G H1J ZLN 0ES WRB 2RR NCV CR6 NMT BVR J4N GTI MW4 ", "DCE PYM A76 S3C 8EO WGV LFS ZVU I8I Y3W K0U TKV 6B", "9 KVR ERX NXL BPX X1I 2NC RFL 97X Y05 KKK SBU 84X ", "W01 3G4 ZJ8 0H0 JGD GFH WL1 KYQ NHQ CDX KYQ ELK SR", "U 7EO VJB 3YG ZJP 0GK WCZ 39C TIE 6GP KH0 FMU VN3 ", "3UN N5L D2H PKQ AJQ NLD C3N TYF 61W TLG 66H SV0 7D", "L UAS 5QE MVW DFY JD1 GNR Y74 1TX RZJ 8LG QY6 A05 ", "YOL 16J WXM 2RB IB5 HIA PQH AGM K0U FR1 Q4Z A41 JK", "E GAR RAD 9LZ NS0 BT7 NGF CIZ SNT 7UR Y7T JKP WJD ", "2Y3 T7A 6WU TKY 67Y Z9L J0D ZXP I52 N33 D4K YKW JD", "7 QZH 9ZK ZIW 0HQ U3N 5T8 N4W D3C I8K HN4 N9Y CWG ", "XAW KSQ NH2 CI9 PG0 ARY JKP G90 W2C 3EI ZLN IB5 QH", "R A27 UT2 529 XFH KPD L9G EKJ V7D 4AK OCV BH9 YK8 ", "JDB ZIW IQP UVV 4IM R32 9TN MMI DK9 YOL JD1 SJ1 7X", "2 Z9L 0SN R2L 9XJ RWX 8MB RQJ 8XH IA8 HIZ UIM 5AA ", "VZC 3GY Y7O JNY YK8 1DE ZDE 0MX Y74 JOW RPV 8Y3 XB", "R KRJ WJD LBS M6U E5V TFN 6JW NBH CUN WKV L9G N6D ", "D1Z OLY AZD LYB E7Y OOJ AXW MYK DAL Y3W 22N JAM GQ", "1 Z7H 12F X1P KV7 NDK CNP ZKA IFL W5V 39Y SPA 7I9 ", "ZJ8 IQ6 YED JGD W5V LX1 UUT 4ML S29 8GC MIL E2B VY", "L MJP P45 AVL Q8H A3C ZJP INQ Y2J 23A X67 2LK X1P ", "2LU OLF B1F YJB JEG V77 4FK UK4 59O KV8 EW6 TCM 6W", "G ZZM HWW W2L 3EA Q1E A51 IFL HBU RWE 8Q2 N1B D7U ", "Z7R 120 SEW 80K N2N D74 INQ H5U NLN C29 WL1 2TW TH", "0 6IR J9U GQO N9S D0X WOA 2TK MJP DTN MUV DGS YY0 ", "14B Y7T 1OA U95 5QV W01 ME5 ZKA 0FM KPD FJ3 XAW 2K", "A VB5 3ZP ME5 E2K Z5W J9U KXX ELV O0X BM6 UOB 55C ", "ML9 DP3 X0S KVR KWY EOR WKV 2VB KOW FJE U0Z 601 KS", "M F6U Y50 219 U3B 5V2 WXM KWY OID BFI UDZ 5ID VJO ", "3Y1 M6Y E35 W4D LYB Y0P KH0 VYL 3I6 LFS EDM MPX DJ", "E VK4 3V2 HWW HR6 NC6 CSG JDB GJ2 SV8 78E PDO ATK ", "VVV 3LC Y0P 26H X1I KV8 JOW G2W KUM F2D PGD AP8 Y5", "0 JSS RLQ 91Q R78 9M5 RB2 9GV XBR 2J7 XBL 2JE IQP ", "H40 W4D 3CC UU3 515 Q5R A3I Z5W 13E Y2J KBK RSY 8S", "O KRJ FIC YED 1JW KSQ F2X ZHZ 0KM OV9 AW7 IRR H25 ", "RHX 97N KV7 EXG YJB 1GJ JEG GHT LTA EDC J0D H1C V3", "F 4FO OKS BBF JD7 GMI NHE CGD WRB KXO TWR 65Q RTN ", "8RX S3J 86U S0V 8GM VZC MIL TF1 6Q8 ZXP 01V JSS FU", "V PCY AUT WOA KXX NX1 BRH OF0 BFR NU6 BRQ UYP 4GE ", "LX1 EAE XBL KSM LBS EGY IA6 HM8 MYF DBM UB9 5MR XF", "H 2EH ZDE ISG XRO 29E ZHZ IRR ZNZ 09J UUI 4TC IQ6 ", "H5A ZNZ IA6 UGY 5E1 XRO KOW KBK FQT RUY 8Q3 UBD 5K", "P ZMI IA8 NIE CDH W2C M6Y W2L M6U V7Z 437 Z7H J4N ", "U1J 5WO KXO EO9 SOW 7R8 ZVU 06P OS8 AXI PUH A7T UM", "G 59I I52 HQE YKW 1CB I8I HNR YE8 1O7 TCP 6RL"};
    vector<int> seeds = {226, 497, 149, 227, 57, 169, 113, 130, 3, 150, 264, 229, 160, 168};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"U3N", "D0X", "JEG", "U95", "Q8H", "KWY", "Z7R", "I8I", "MUV", "JGD", "437", "UB9", "KOW", "KVR"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> teams = {"ZXV ZX7 ZQP ZOE ZNN ZNI ZMF ZL0 ZJE ZIB ZHR ZCZ Z3", "B Z34 Z05 YY7 YXK YV9 YTG YRC YQ1 YL9 YJF YIM YFH ", "YEW Y7K Y6D Y4K Y4I Y3T Y39 XYE XX1 XWX XUX XUO XU", "1 XEW XBF XAG X9Y X7U X64 X3R X34 X1Q WZU WXX WWB ", "WRM WRB WOZ WN8 WHK WBO W70 W5Z W2I W1Q W1M VYH VX", "5 VVT VV9 VPN VOM VKG VI8 VHS VFR VAO V8K V5R V2U ", "V2H V24 V1Y V1L UZS UZC UUO UU0 URN UNT UMM ULY UH", "H UH0 UFL UA7 U26 TYZ TX6 TWF TSX TRZ TRG TP1 TOT ", "TMI TK2 TFU TFF TEK TE4 TCN TAA T7Z T2G SVO STS SR", "Y SP6 SMN SM1 SL9 SKT SFQ S5N S4V S3H S2N S05 RV7 ", "RV3 RRB RNJ RJV RIZ REY RBS R9V R8W R8V R81 R7W R6", "L R3W R3S R3M R2H QY0 QSX QPX QO4 QKZ QKJ QGF QCT ", "QBW QBC Q9D Q69 PYE PW5 PU8 PNI PH0 PDR PDO PAT PA", "Q PAH P9C P3O P1A OSJ OPW OL2 OJ9 ODT OBS OA6 O97 ", "O26 O1C NYR NT0 NPT NHF N7I N0F MSK MS2 MR0 MQ1 MO", "F MM6 MM2 MGI MFO MC0 M84 M3H M2H LZB LTE LSX LQP ", "LQ7 LQ4 LO3 LNK LJU LH1 LDH LC9 LB0 L7R L6O L0K KZ", "Q KXG KXE KW3 KS7 KQS KQ7 KOB KKV KGB KCD K8S K8P ", "K7T K6F K5O K5E K3D K0Y K02 JXJ JU9 JTJ JSR JSM JR", "V JP4 JOP JOH JO8 JND JKZ JK1 JHL JG6 JFE JF7 JEO ", "JBI JBD J8B J7B J6N J6J J4A J0T IZE IPV IPS IFH IE", "U ICW IBJ I8Y I8V I7P I75 HZH HZD HWR HQ7 HN6 HN5 ", "HM7 HIV HEE H9G H6O H3X H25 GVG GUP GMZ GKC GJB GJ", "9 GEN GE4 GDQ GBS GBK G5U G5H G4A FZX FTF FJC FI7 ", "FHK FGS FFV FAE F99 F8V F7W F7J F7G F6R F3Z F3L F1", "Q EYQ ES2 ERB EQS EQC EMC EKX ECI E9N E8A E6Q E4X ", "E1N DZE DV7 DTX DTC DP1 DMM DHS DHH DGL DEZ DDT DB", "K DB5 DAG D9A D8Z D8I D8B D3W D0X CVE CVC CTG C75 ", "C5E C2L C0V BXS BWW BV2 BUQ BRK BMD BDY BBL B9X B9", "5 B7V B2A AY9 AXV AQH APT AKG AGU AF9 ABZ A76 A2M ", "A09 9ZR 9XY 9RT 9RK 9QT 9PW 9OS 99P 96U 8ZM 8XX 8X", "M 8VG 8VF 8TL 8O5 8LL 8EF 8AZ 88C 85P 85H 84J 84B ", "830 80L 805 7ZF 7V9 7UF 7R5 7PS 7PO 7KA 7JO 7HG 7G", "P 7EN 79R 77U 73I 72I 71M 6WE 6TZ 6SI 6PK 6OF 6MI ", "6LP 6KA 6J8 6HO 6G7 6B0 629 614 5ZS 5XV 5XU 5WW 5V", "O 5S8 5QU 5OP 5NC 5MH 5LH 54T 53D 4Y9 4XM 4WZ 4UN ", "4UI 4QP 4ON 4MV 4MI 4ME 4DQ 4B1 4AR 4A1 49B 47D 40", "8 3WN 3R0 3KG 3JZ 3IF 3EK 3E9 3CS 3AQ 35I 34B 2Z4 ", "2US 2TV 2TF 2RM 2Q9 2NN 2MV 2KY 2KB 2J4 2FX 2AR 29", "A 288 26I 24K 23V 20N 1WH 1ON 1OA 1LM 1DX 19K 17Q ", "10H 0ZX 0XT 0NK 0K7 0G2 0E7 0DT 09S 050 01D 012"};
    vector<string> games = {"UUO 6B0 YV9 1ON YEW 2AR OL2 D8I KQ7 G5U XAG 3AQ XE", "W 34B X9Y 3CS W1Q 4ON VOM 53D UZC 629 LO3 F6R TMI ", "7HG MFO ECI XU1 KQ7 TYZ 6WE K8S GEN WRB 49B UHH 6M", "I MM6 E6Q YTG JRV WZU LB0 YTG 1WH WN8 4AR YFH 29A ", "LQP F1Q JOH HWR RIZ 9OS XBF KS7 JEO IEU ZCZ JK1 PU", "8 BV2 YXK 1OA ZOE J8B X7U KXG JK1 I7P JU9 H9G RNJ ", "96U XU1 2Z4 NPT DHS OA6 DB5 JOP HQ7 Z34 JND LSX EY", "Q R8W 9RT RJV 99P JBD IPS K0Y H25 X9Y KXE VKG 54T ", "R8V 9XY QGF B7V ZCZ 10H URN 6HO YV9 JP4 TEK 7PS OB", "S DAG K8P GJ9 R2H AGU TX6 71M VAO 5OP PDR C0V WBO ", "4DQ X64 KZQ M2H EQS KOB GBK QO4 AXV PAT C5E S5N 8L", "L TRZ 77U WRM 47D P3O CVE WN8 LO3 X64 3EK Y7K K3D ", "TSX 73I UFL 6PK L7R FFV R9V 9RK ULY 6LP NHF DMM K5", "E GUP VHS 5MH UH0 6OF REY 9PW KS7 G4A JBI IFH QSX ", "APT MQ1 E1N JHL I8V PNI BWW K7T GJB ZHR 0ZX YFH K0", "2 ZHR JHL LJU F7J ZOE 09S VI8 5LH T2G 805 N0F DTC ", "S2N 8VF O26 DDT X34 3JZ VV9 4XM Y3T K7T M3H EQC J7", "B IZE WZU 3R0 YQ1 JSR YRC 20N MGI E9N ZJE 0NK JG6 ", "I8Y K02 H3X X34 L6O Y4I K6F WHK LQ4 ZQP 050 ZIB JG", "6 WOZ 4A1 NYR DGL UU0 6G7 WRM LH1 R3M AF9 UZS 614 ", "PH0 BXS KGB GDQ O97 DBK P9C CVC XYE 2Q9 Y7K 2FX M8", "4 EMC SM1 85P ZX7 J6N Y39 2NN OJ9 D8Z XUO KOB WBO ", "LQ7 R3W A76 V5R 5S8 JFE IBJ X3R L0K SFQ 8EF SVO 80", "L Y4K 2KB S4V 8O5 PDO C2L R81 9ZR XWX 2TF LC9 F99 ", "WOZ LNK R7W A09 UMM 6KA PW5 BUQ TWF 72I KCD GE4 W5", "Z 4MI LDH F8V WHK 4B1 OSJ D3W TFF 7PO JKZ I75 XUO ", "2US KXE FTF TOT 7GP RV7 8XM SMN 85H YJF 26I Q9D BD", "Y TP1 7EN KKV GBS MM2 E8A ZMF 0G2 YIM 288 Y6D 2J4 ", "WWB 408 YEW K0Y MOF E4X J6J J4A KW3 FZX PAH CTG OD", "T D9A LQ7 F3L MR0 DZE P1A D0X YY7 JOH TFU 7KA J8B ", "IPV LH1 F7W MSK DTX NT0 DHH XX1 2RM Y6D K5E VFR 5N", "C Z05 JO8 Z34 19K OPW D8B X1Q L7R K6F GKC S05 8VG ", "Y3T 2MV WXX LC9 ZNN JBD WRB LJU X7U 3E9 SP6 84J QP", "X AQH JF7 ICW ZXV J6J V2H 5WW UNT 6J8 Z05 1DX UA7 ", "6SI R6L A2M JRV HN5 XAG KW3 Z3B 17Q ZL0 JF7 O1C DE", "Z YJF JU9 XX1 KCD SKT 8AZ N7I DP1 LTE ES2 ZNI 0E7 ", "WXX 3WN TRG 79R QY0 AKG LQ4 F3Z VX5 4UN Z3B JKZ PY", "E BRK XYE K8S X3R 3IF JO8 HZD YRC JSM ZXV 012 QBC ", "BBL V1Y 5XV W70 4ME VYH 4UI XUX KKV S3H 8TL V1L 5Z", "S JXJ H6O R3S ABZ X1Q 3KG RRB 8ZM KZQ FI7 LZB ERB ", "TE4 7R5 ZNN 0DT YXK JOP T7Z 7ZF PAQ C75 Y4I 2KY LB", "0 FAE V24 5XU ZNI JBI KXG FJC TK2 7JO W2I 4MV QCT ", "B95 ZJE JFE ZIB 0XT J6N J0T V8K 5QU Y4K K5O YY7 1L", "M STS 830 TCN 7UF YL9 24K MC0 EKX ZQP J7B K5O GMZ ", "XWX KGB XBF 35I RV3 8XX JTJ HEE TAA 7V9 JND HZH JS", "M HM7 L0K FHK KQS G5H SL9 88C VPN 4Y9 YIM JXJ QBW ", "B9X XUX 2TV MS2 DV7 Q69 BMD JP4 HN6 L6O FGS K3D GV", "G SRY 84B VVT 4WZ RBS 9QT Y39 K8P YQ1 23V ZL0 0K7 ", "WWB LDH ZX7 01D QKJ B2A W1M 4QP LNK F7G YL9 JTJ V2", "U 5VO QKZ AY9 XEW KQS JSR HIV ZMF JEO U26 6TZ"};
    vector<int> seeds = {456, 270, 269, 74, 217, 138, 203, 443, 192, 355, 219, 252, 233, 94, 443, 34, 102, 95, 149, 65, 74, 312, 192, 222, 338, 191, 138, 422, 203, 35, 309, 96, 175, 384, 63, 288, 274, 432, 487, 189, 188};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AQH", "5NC", "5MH", "WN8", "TWF", "JHL", "T7Z", "9QT", "S5N", "GMZ", "TYZ", "W1Q", "V1L", "XX1", "9QT", "P3O", "YEW", "XYE", "JTJ", "R8V", "WN8", "84B", "S5N", "UFL", "FGS", "S4V", "JHL", "34B", "T7Z", "P9C", "805", "Y39", "LB0", "012", "R7W", "6OF", "5VO", "3WN", "DDT", "S2N", "S05"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> teams = {"Z Y X W V U T S R Q P O NH NG NF NE ND NC NB NA N ", "MZ MY MX MW MV MU MT MS MR MQ MP MO MN MM ML MK MJ", " MI MH MG MF ME MD MC MB MA M9 M8 M7 M6 M5 M4 M3 M", "2 M1 M0 M LZ LY LX LW LV LU LT LS LR LQ LP LO LN L", "M LL LK LJ LI LH LG LF LE LD LC LB LA L9 L8 L7 L6 ", "L5 L4 L3 L2 L1 L0 L KZ KY KX KW KV KU KT KS KR KQ ", "KP KO KN KM KL KK KJ KI KH KG KF KE KD KC KB KA K9", " K8 K7 K6 K5 K4 K3 K2 K1 K0 K JZ JY JX JW JV JU JT", " JS JR JQ JP JO JN JM JL JK JJ JI JH JG JF JE JD J", "C JB JA J9 J8 J7 J6 J5 J4 J3 J2 J1 J0 J IZ IY IX I", "W IV IU IT IS IR IQ IP IO IN IM IL IK IJ II IH IG ", "IF IE ID IC IB IA I9 I8 I7 I6 I5 I4 I3 I2 I1 I0 I ", "HZ HY HX HW HV HU HT HS HR HQ HP HO HN HM HL HK HJ", " HI HH HG HF HE HD HC HB HA H9 H8 H7 H6 H5 H4 H3 H", "2 H1 H0 H GZ GY GX GW GV GU GT GS GR GQ GP GO GN G", "M GL GK GJ GI GH GG GF GE GD GC GB GA G9 G8 G7 G6 ", "G5 G4 G3 G2 G1 G0 G FZ FY FX FW FV FU FT FS FR FQ ", "FP FO FN FM FL FK FJ FI FH FG FF FE FD FC FB FA F9", " F8 F7 F6 F5 F4 F3 F2 F1 F0 F EZ EY EX EW EV EU ET", " ES ER EQ EP EO EN EM EL EK EJ EI EH EG EF EE ED E", "C EB EA E9 E8 E7 E6 E5 E4 E3 E2 E1 E0 E DZ DY DX D", "W DV DU DT DS DR DQ DP DO DN DM DL DK DJ DI DH DG ", "DF DE DD DC DB DA D9 D8 D7 D6 D5 D4 D3 D2 D1 D0 D ", "CZ CY CX CW CV CU CT CS CR CQ CP CO CN CM CL CK CJ", " CI CH CG CF CE CD CC CB CA C9 C8 C7 C6 C5 C4 C3 C", "2 C1 C0 C BZ BY BX BW BV BU BT BS BR BQ BP BO BN B", "M BL BK BJ BI BH BG BF BE BD BC BB BA B9 B8 B7 B6 ", "B5 B4 B3 B2 B1 B0 B AZ AY AX AW AV AU AT AS AR AQ ", "AP AO AN AM AL AK AJ AI AH AG AF AE AD AC AB AA A9", " A8 A7 A6 A5 A4 A3 A2 A1 A0 A 9 8 7 6 5 4 3 2 1 0"};
    vector<string> games = {"N KN S R NH KF W GQ LN IJ NE H1 LX LQ NG M6 MN L L", "2 J3 U K8 NH GZ Y NF N MD M9 LD MX MG M2 LK LJ IN ", "NE KI MS KV P MZ P KD NC H3 NF KH MG L6 KS JE MA H", "W S MW LS IE MG HQ LP IH KB JV ND KJ N H6 NE ND MH", " HP T Q ML HL K7 JZ M6 LG S GU Y GO LE IS LU IC NA", " H5 MU HC MJ L3 MZ KO LZ I7 M5 LH Z K3 U MU LW LR ", "LL IL MY KP L4 J1 LV IB M0 LM KK JM X GP MD HT MM ", "HK KA JW MZ H7 M4 LI R MX Q KC V GR NH NA MT KU MC", " HU KN JJ LR IF K6 K Q MY MO HI MX H9 MP MO LH IP ", "MV MI LZ LO MC LA KZ J7 M I6 Z S LB IV Y MQ T MV N", "E M8 KX J9 MV HB MJ HN MS HE W K6 NF NC R M1 MR MM", " MT HD LC IU X K5 M7 LF MX KQ KW JA MY H8 L6 J S M", "0 Y LV MF HR MI HO Q GW MU MJ MQ KX ND M9 MF L7 MQ", " HG M LN NA MC O N Z NE K4 K1 M9 HX L3 J2 NG H LY ", "I8 NB H4 KR JF MP KY KH JP X MR KY J8 U LZ W LX KG", " JQ ND H2 M2 I3 K9 JX MA LC M3 I2 Z GN KT JD LW IA", " MT MK W MS T M U GS MM L0 M5 I0 L7 IZ Z MP V K7 L", "0 J5 NF M7 KE JS W NH KP JH MZ ME W V Y T T K9 R K", "B ME HS ME L8 MB LB P M3 LD IT LK IM M6 I LG IQ KJ", " JN L5 J0 M7 HZ Y K4 MS ML O GY KV JB KC JU L8 IY ", "V LY M1 LL NB MB MY MF L9 IX LM IK MK L2 MP HH LO ", "II O M4 V O KI JO LY LP KU JC T GT KD JT K5 K0 KO ", "JI L1 J4 LV LS NF H0 K3 K2 M4 I1 X U MI L4 O KE MR", " HF MD L9 MW HA Y X LT ID X LW L J6 Z LU NA KM KF ", "JR Z Y MB HV MK HM MN HJ V MT MR KW LX I9 KQ JG U ", "P MW KR MV KS LF IR KL JL LU LT M0 I5 MO KZ ML L1 ", "NG KG LI IO Z W M3 LJ M1 I4 NH M5 NC MA K8 JY M8 L", "E LA IW KM JK MQ MN NC KK MH L5 M8 HY NB KL LQ IG ", "Q M2 S KA X NG NG NB MU KT MW MH P GX R GV"};
    vector<int> seeds = {278, 443, 273, 173, 174, 292, 392, 377, 254, 82, 219, 293, 67};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JS", "FP", "JV", "L7", "L6", "DO", "F0", "IG", "K3", "MF", "CO", "JL", "AM"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> teams = {"Z Y X W V U T S R Q P O NH NG NF NE ND NC NB NA N ", "MZ MY MX MW MV MU MT MS MR MQ MP MO MN MM ML MK MJ", " MI MH MG MF ME MD MC MB MA M9 M8 M7 M6 M5 M4 M3 M", "2 M1 M0 M LZ LY LX LW LV LU LT LS LR LQ LP LO LN L", "M LL LK LJ LI LH LG LF LE LD LC LB LA L9 L8 L7 L6 ", "L5 L4 L3 L2 L1 L0 L KZ KY KX KW KV KU KT KS KR KQ ", "KP KO KN KM KL KK KJ KI KH KG KF KE KD KC KB KA K9", " K8 K7 K6 K5 K4 K3 K2 K1 K0 K JZ JY JX JW JV JU JT", " JS JR JQ JP JO JN JM JL JK JJ JI JH JG JF JE JD J", "C JB JA J9 J8 J7 J6 J5 J4 J3 J2 J1 J0 J IZ IY IX I", "W IV IU IT IS IR IQ IP IO IN IM IL IK IJ II IH IG ", "IF IE ID IC IB IA I9 I8 I7 I6 I5 I4 I3 I2 I1 I0 I ", "HZ HY HX HW HV HU HT HS HR HQ HP HO HN HM HL HK HJ", " HI HH HG HF HE HD HC HB HA H9 H8 H7 H6 H5 H4 H3 H", "2 H1 H0 H GZ GY GX GW GV GU GT GS GR GQ GP GO GN G", "M GL GK GJ GI GH GG GF GE GD GC GB GA G9 G8 G7 G6 ", "G5 G4 G3 G2 G1 G0 G FZ FY FX FW FV FU FT FS FR FQ ", "FP FO FN FM FL FK FJ FI FH FG FF FE FD FC FB FA F9", " F8 F7 F6 F5 F4 F3 F2 F1 F0 F EZ EY EX EW EV EU ET", " ES ER EQ EP EO EN EM EL EK EJ EI EH EG EF EE ED E", "C EB EA E9 E8 E7 E6 E5 E4 E3 E2 E1 E0 E DZ DY DX D", "W DV DU DT DS DR DQ DP DO DN DM DL DK DJ DI DH DG ", "DF DE DD DC DB DA D9 D8 D7 D6 D5 D4 D3 D2 D1 D0 D ", "CZ CY CX CW CV CU CT CS CR CQ CP CO CN CM CL CK CJ", " CI CH CG CF CE CD CC CB CA C9 C8 C7 C6 C5 C4 C3 C", "2 C1 C0 C BZ BY BX BW BV BU BT BS BR BQ BP BO BN B", "M BL BK BJ BI BH BG BF BE BD BC BB BA B9 B8 B7 B6 ", "B5 B4 B3 B2 B1 B0 B AZ AY AX AW AV AU AT AS AR AQ ", "AP AO AN AM AL AK AJ AI AH AG AF AE AD AC AB AA A9", " A8 A7 A6 A5 A4 A3 A2 A1 A0 A 9 8 7 6 5 4 3 2 1 0"};
    vector<string> games = {"MD HT MK HM NG NB R KB MG L6 T M LV LS MI L4 MF HR", " Q GW KH JP MQ KX Q KC LR IF N H6 W MS X LW LQ IG ", "Y LV Z W Z S MV MI P KD M7 HZ KE JS MY H8 NC KK R ", "MX Y X MU KT NA H5 LC IU M8 LE MV HB T MV W LX NF ", "H0 V MT NA MC MX KQ MC LA MA LC KB JV MM HK M LN M", "Z ME NE KI KL JL Z MP K8 JY X MR P MZ V K7 L0 J5 K", "T JD LI IO X K5 NB MB LP IH M5 I0 KY J8 O M4 LS IE", " M I6 LZ I7 U MU LG IQ KX J9 MF L7 MX H9 LD IT ME ", "L8 NC MA NG M6 KW JA K7 JZ MO HI M6 I MP KY W GQ M", "L L1 LK IM M5 LH S GU KZ J7 Y T NE M8 Z NE MQ HG Q", " M2 X U NH M5 O GY NB H4 LE IS V LY ND KJ MS ML M0", " LM KU JC R GV L8 IY NG KG K5 K0 U LZ M1 LL L4 J1 ", "MP HH MK L2 LB IV NC H3 KV JB LW IA KQ JG P GX LU ", "LT M3 LJ KN JJ MP MO LX LQ ND H2 ND M9 MS KV NE H1", " LT ID M0 I5 LZ LO W V M7 LF U GS LM IK KK JM MW K", "R MR KW ME HS LJ IN MN HJ LU IC KF JR KI JO MY KP ", "NH KF L7 IZ ML HL MC HU KO JI U P NF NC LH IP MW M", "H Y GO KR JF LV IB MT MK X GP KG JQ MB HV K6 K X N", "G M1 I4 V GR L9 IX MQ MN Z Y M2 I3 MJ L3 Y NF KD J", "T M4 I1 KJ JN N MD M8 HY MZ KO L5 J0 MA HW MW HA L", "N IJ L J6 NG H NB KL M2 LK R M1 T Q T GT S R KS JE", " NE ND V O MT KU Z LU MS HE MD L9 LA IW MI HO MJ H", "N P M3 W NH NH GZ KM JK LY I8 MT HD KA JW MH HP M9", " HX LF IR M9 LD NA KM N KN K3 K2 S KA MR HF MR MM ", "NF KH Z K3 T K9 M4 LI MX MG O KE LX I9 O N NF M7 K", "C JU Z GN L2 J3 S MW Y MQ MB LB MG HQ K9 JX LY LP ", "MH L5 MU HC MU MJ M3 I2 Q MY MO KZ MZ H7 M6 LG MV ", "KS LO II L1 J4 L3 J2 W K6 LL IL LW LR MY MF K4 K1 ", "U K8 NH NA Y K4 S M0 L6 J MM L0 MN L KP JH"};
    vector<int> seeds = {176, 458, 295, 255, 472, 413, 276, 333, 500, 121, 39, 345, 322, 124, 412, 193, 248, 461, 396, 391, 32, 35, 100, 440, 166, 391, 149, 76};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C3", "HC", "DP", "D5", "G3", "HZ", "DG", "J1", "GH", "LX", "A8", "IW", "J6", "BE", "FA", "KY", "D2", "HB", "F2", "F", "A5", "A6", "B2", "FO", "LA", "F", "LJ", "AR"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> teams = {"Z Y X W V U T S R Q P O NH NG NF NE ND NC NB NA N ", "MZ MY MX MW MV MU MT MS MR MQ MP MO MN MM ML MK MJ", " MI MH MG MF ME MD MC MB MA M9 M8 M7 M6 M5 M4 M3 M", "2 M1 M0 M LZ LY LX LW LV LU LT LS LR LQ LP LO LN L", "M LL LK LJ LI LH LG LF LE LD LC LB LA L9 L8 L7 L6 ", "L5 L4 L3 L2 L1 L0 L KZ KY KX KW KV KU KT KS KR KQ ", "KP KO KN KM KL KK KJ KI KH KG KF KE KD KC KB KA K9", " K8 K7 K6 K5 K4 K3 K2 K1 K0 K JZ JY JX JW JV JU JT", " JS JR JQ JP JO JN JM JL JK JJ JI JH JG JF JE JD J", "C JB JA J9 J8 J7 J6 J5 J4 J3 J2 J1 J0 J IZ IY IX I", "W IV IU IT IS IR IQ IP IO IN IM IL IK IJ II IH IG ", "IF IE ID IC IB IA I9 I8 I7 I6 I5 I4 I3 I2 I1 I0 I ", "HZ HY HX HW HV HU HT HS HR HQ HP HO HN HM HL HK HJ", " HI HH HG HF HE HD HC HB HA H9 H8 H7 H6 H5 H4 H3 H", "2 H1 H0 H GZ GY GX GW GV GU GT GS GR GQ GP GO GN G", "M GL GK GJ GI GH GG GF GE GD GC GB GA G9 G8 G7 G6 ", "G5 G4 G3 G2 G1 G0 G FZ FY FX FW FV FU FT FS FR FQ ", "FP FO FN FM FL FK FJ FI FH FG FF FE FD FC FB FA F9", " F8 F7 F6 F5 F4 F3 F2 F1 F0 F EZ EY EX EW EV EU ET", " ES ER EQ EP EO EN EM EL EK EJ EI EH EG EF EE ED E", "C EB EA E9 E8 E7 E6 E5 E4 E3 E2 E1 E0 E DZ DY DX D", "W DV DU DT DS DR DQ DP DO DN DM DL DK DJ DI DH DG ", "DF DE DD DC DB DA D9 D8 D7 D6 D5 D4 D3 D2 D1 D0 D ", "CZ CY CX CW CV CU CT CS CR CQ CP CO CN CM CL CK CJ", " CI CH CG CF CE CD CC CB CA C9 C8 C7 C6 C5 C4 C3 C", "2 C1 C0 C BZ BY BX BW BV BU BT BS BR BQ BP BO BN B", "M BL BK BJ BI BH BG BF BE BD BC BB BA B9 B8 B7 B6 ", "B5 B4 B3 B2 B1 B0 B AZ AY AX AW AV AU AT AS AR AQ ", "AP AO AN AM AL AK AJ AI AH AG AF AE AD AC AB AA A9", " A8 A7 A6 A5 A4 A3 A2 A1 A0 A 9 8 7 6 5 4 3 2 1 0"};
    vector<string> games = {"L6 J K4 K1 MK L2 M5 I0 NG M6 MF L7 X U KT JD M3 LJ", " MC LA X LW LT ID KZ J7 MK HM KP JH R GV Z GN NH G", "Z T K9 KL JL MI HO NH NA LI IO M8 LE U LZ Y X M1 L", "L Y T Q KC MY KP KN JJ Y NF N MD MW KR MU MJ W MS ", "LY LP K5 K0 MZ KO S KA KI JO LK IM KU JC L4 J1 NH ", "M5 P MZ MV KS U K8 O GY NC KK MR MM KX J9 ND M9 S ", "M0 W V LH IP V LY L3 J2 L1 J4 NA KM MG HQ MJ HN M ", "I6 KC JU Z LU K9 JX M5 LH S MW U MU MC HU X K5 Z K", "3 KG JQ LJ IN X GP MO HI LW IA MP HH V GR V MT KK ", "JM NA H5 ME HS M4 LI KF JR MF HR KE JS NF H0 NE H1", " P GX KY J8 W K6 LL IL K7 JZ MS KV MD HT T Q MP KY", " MS ML X NG MJ L3 K3 K2 M8 HY LU IC MQ MN M9 LD Z ", "MP N H6 N KN M2 I3 P M3 LO II Y LV LV IB MU KT LE ", "IS MX KQ LB IV R M1 MI L4 MR HF ME L8 Q GW V O MY ", "H8 LV LS W LX Y GO MU HC LX I9 LN IJ O KE MW HA L ", "J6 MW MH L9 IX L5 J0 T M MY MF KV JB KS JE MP MO L", "W LR KB JV LQ IG MX MG M1 I4 MQ HG L8 IY KR JF X M", "R M0 I5 NC MA NF NC NC H3 MT KU MZ ME MB LB MG L6 ", "M4 I1 M6 LG LG IQ NG NB KD JT Y K4 M0 LM LA IW MA ", "HW ML L1 ND H2 U P LX LQ S R MD L9 Y MQ U GS MS HE", " KA JW MO KZ LF IR LR IF Z S MV MI ND KJ MT HD LM ", "IK NG H K6 K Z W M LN NE KI NE ND S GU NE M8 NB H4", " MQ KX MR KW NB MB LP IH NA MC L2 J3 KW JA KQ JG O", " N M3 I2 KO JI V K7 MV HB MX H9 MN L Q M2 LC IU MH", " HP NH KF ML HL P KD MZ H7 NB KL LD IT NF KH M7 HZ", " MM L0 Q MY KJ JN M2 LK T MV MM HK M6 I LY I8 K8 J", "Y MH L5 MA LC M7 LF MT MK Z NE Z Y MN HJ O M4 LU L", "T W NH LZ I7 W GQ LZ LO MB HV M9 HX NF M7 KH JP LS", " IE R MX KM JK R KB L0 J5 L7 IZ NG KG T GT"};
    vector<int> seeds = {1, 190, 336, 107, 278, 470, 323, 33, 387, 281};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Z", "KZ", "E9", "B5", "JS", "H6", "E2", "ND", "EY", "JR"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> teams = {"Z Y X W V U T S R Q P O NH NG NF NE ND NC NB NA N ", "MZ MY MX MW MV MU MT MS MR MQ MP MO MN MM ML MK MJ", " MI MH MG MF ME MD MC MB MA M9 M8 M7 M6 M5 M4 M3 M", "2 M1 M0 M LZ LY LX LW LV LU LT LS LR LQ LP LO LN L", "M LL LK LJ LI LH LG LF LE LD LC LB LA L9 L8 L7 L6 ", "L5 L4 L3 L2 L1 L0 L KZ KY KX KW KV KU KT KS KR KQ ", "KP KO KN KM KL KK KJ KI KH KG KF KE KD KC KB KA K9", " K8 K7 K6 K5 K4 K3 K2 K1 K0 K JZ JY JX JW JV JU JT", " JS JR JQ JP JO JN JM JL JK JJ JI JH JG JF JE JD J", "C JB JA J9 J8 J7 J6 J5 J4 J3 J2 J1 J0 J IZ IY IX I", "W IV IU IT IS IR IQ IP IO IN IM IL IK IJ II IH IG ", "IF IE ID IC IB IA I9 I8 I7 I6 I5 I4 I3 I2 I1 I0 I ", "HZ HY HX HW HV HU HT HS HR HQ HP HO HN HM HL HK HJ", " HI HH HG HF HE HD HC HB HA H9 H8 H7 H6 H5 H4 H3 H", "2 H1 H0 H GZ GY GX GW GV GU GT GS GR GQ GP GO GN G", "M GL GK GJ GI GH GG GF GE GD GC GB GA G9 G8 G7 G6 ", "G5 G4 G3 G2 G1 G0 G FZ FY FX FW FV FU FT FS FR FQ ", "FP FO FN FM FL FK FJ FI FH FG FF FE FD FC FB FA F9", " F8 F7 F6 F5 F4 F3 F2 F1 F0 F EZ EY EX EW EV EU ET", " ES ER EQ EP EO EN EM EL EK EJ EI EH EG EF EE ED E", "C EB EA E9 E8 E7 E6 E5 E4 E3 E2 E1 E0 E DZ DY DX D", "W DV DU DT DS DR DQ DP DO DN DM DL DK DJ DI DH DG ", "DF DE DD DC DB DA D9 D8 D7 D6 D5 D4 D3 D2 D1 D0 D ", "CZ CY CX CW CV CU CT CS CR CQ CP CO CN CM CL CK CJ", " CI CH CG CF CE CD CC CB CA C9 C8 C7 C6 C5 C4 C3 C", "2 C1 C0 C BZ BY BX BW BV BU BT BS BR BQ BP BO BN B", "M BL BK BJ BI BH BG BF BE BD BC BB BA B9 B8 B7 B6 ", "B5 B4 B3 B2 B1 B0 B AZ AY AX AW AV AU AT AS AR AQ ", "AP AO AN AM AL AK AJ AI AH AG AF AE AD AC AB AA A9", " A8 A7 A6 A5 A4 A3 A2 A1 A0 A 9 8 7 6 5 4 3 2 1 0"};
    vector<string> games = {"MG HQ NE ND JQ DJ MW HA S 7 JR DI J5 E3 MP AK KA J", "W MT KU GX GC LQ IG GP GK IL EO O GY KD JT MW AD W", " MS MG L6 KZ J7 M6 B2 LB IV JI DR M9 LD NB KL KM J", "K NG NB NG M6 JJ DQ MP HH M0 I5 N MD N H6 LG BT ML", " AO K8 JY MS HE MR HF LD IT I0 F8 MU MJ L1 C7 NE M", "8 K D9 LD BW IQ EJ KG JQ KT JD M3 I2 J2 E6 JV DE H", "2 G6 MO HI MG AT ME AV MP MO LE BV X GP NH NA LR B", "I LM BN NG H GV GE KU JC NE A4 W 3 II ER J8 E0 MR ", "AI K3 D5 HC FX MH AS M4 B4 LI IO MD HT KE CV KR JF", " Z GN O M4 K7 JZ JN DM MC HU IP EK K6 D2 KI JO HL ", "FO LB BY V 4 LZ I7 L6 C2 LP BK H1 G7 MD AW KQ JG I", "V EE ND M9 NA H5 R 8 MW MH M1 I4 L5 C3 HQ FJ LZ LO", " JZ DA GU GF NA MC U P H G9 LT BG L8 IY M9 B LU LT", " LW LR KW CD JF DU LW BD M5 LH L3 C5 K8 D0 LR IF N", "G KG KD CW KE JS L5 J0 HN FM ID EW KF CU Z NE J3 E", "5 W LX I7 F1 NH M5 MP KY L3 J2 I9 F KT CG M5 B3 LI", " BR M0 B8 S GU P GX MB HV IF EU MS ML ND KJ L0 J5 ", "LY LP ME L8 M1 B7 U MU J4 E4 V GR KV JB M9 HX HS F", "H I8 F0 MC AX IT EG NE KI U LZ W K6 LA BZ LH BS NA", " A8 M4 LI LX I9 MO KZ K0 D8 LA IW LX BC KF JR MH L", "5 MX MG Z MP GQ GJ KL CO KZ CA P A IO EL P KD MB A", "Y MT AG IA EZ KB CY MK AP HY FB LZ BA P MZ LU IC H", "E FV V LY IC EX M6 LG LJ IN O KE S KA HK FP HD FW ", "MO AL KM CN U K8 IY EB GZ GA MU HC JY DB L1 J4 KN ", "CM Z 0 I1 F7 K7 D1 M1 LL LW IA S M0 NH KF O A0 L8 ", "C0 X K5 LP IH KR CI IW ED Z LU R GV MZ H7 IH ES MS", " KV H9 G S MW HU FF MD L9 L0 C8 S R W NH NH GZ NB ", "A7 H7 G1 ND H2 MJ L3 L9 C X NG HV FE L9 IX LG IQ J", "D DW L2 J3 N KN J7 E1 JK DP KU CF ME HS LO II JC D", "X M3 B5 U 5 GS GH HI FR IS EH JT DG MU KT KV CE W ", "GQ K5 D3 M0 LM MX AC I5 F3 H5 G3 JA DZ IX EC R KB ", "KJ JN MK L2 MC LA J E9 JO DL I F9 JL DO LL IL LU B", "F JS DH MZ KO MX KQ MM L0 R MX HH FS X U KB JV I4 ", "F4 NH A1 H6 G2 HF FU GR GI HT FG IK EP MJ AQ K6 K ", "NG A2 MS AH GN GM KQ CJ KL JL V O LH IP MX H9 LY B", "B L6 J M8 B0 W V M6 I MB LB P M3 KO CL I2 F6 K2 D6", " V K7 X 2 IG ET LJ BQ Z K3 MH HP U GS HA FZ Z W KW", " JA L2 C6 LL BO LQ BJ R M1 LY I8 KA CZ HX FC O N M", "8 HY M5 I0 M3 LJ MR MM JB DY MZ ME HM FN IN EM K3 ", "K2 KI CR H4 G4 MZ AA X LW MR KW MM HK NB MB LT ID ", "LM IK MT HD JG DT Z S KO JI KN JJ KJ CQ X MR MW KR", " MU AF ML L1 GY GB KY J8 J0 E8 HP FK KG CT LX LQ M", "L HL LE IS MJ HN LO BL KY CB NB H4 MM AN MK HM JW ", "DD K5 K0 NA KM NE H1 V MT MT MK M4 I1 M8 LE N A9 N", "D A5"};
    vector<int> seeds = {474, 41, 365, 318, 98, 224, 150, 274, 308, 191, 57, 422, 319, 137, 350, 497, 365, 14, 227, 108, 296, 161, 30, 288, 29, 459, 194, 3, 319, 65, 7, 388, 271, 276, 261, 357, 283, 296, 97, 457, 197, 231};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AP", "MG", "DP", "EX", "KV", "FT", "JG", "G3", "F6", "EV", "M0", "C3", "IB", "JV", "E1", "A4", "DP", "NE", "HF", "KL", "HR", "J7", "MP", "HJ", "MS", "B5", "I9", "X", "IB", "LT", "6", "D0", "H0", "G1", "GI", "DX", "FX", "HR", "KY", "B7", "I8", "FY"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> teams = {"Z Y X W V U T S R Q P O NH NG NF NE ND NC NB NA N ", "MZ MY MX MW MV MU MT MS MR MQ MP MO MN MM ML MK MJ", " MI MH MG MF ME MD MC MB MA M9 M8 M7 M6 M5 M4 M3 M", "2 M1 M0 M LZ LY LX LW LV LU LT LS LR LQ LP LO LN L", "M LL LK LJ LI LH LG LF LE LD LC LB LA L9 L8 L7 L6 ", "L5 L4 L3 L2 L1 L0 L KZ KY KX KW KV KU KT KS KR KQ ", "KP KO KN KM KL KK KJ KI KH KG KF KE KD KC KB KA K9", " K8 K7 K6 K5 K4 K3 K2 K1 K0 K JZ JY JX JW JV JU JT", " JS JR JQ JP JO JN JM JL JK JJ JI JH JG JF JE JD J", "C JB JA J9 J8 J7 J6 J5 J4 J3 J2 J1 J0 J IZ IY IX I", "W IV IU IT IS IR IQ IP IO IN IM IL IK IJ II IH IG ", "IF IE ID IC IB IA I9 I8 I7 I6 I5 I4 I3 I2 I1 I0 I ", "HZ HY HX HW HV HU HT HS HR HQ HP HO HN HM HL HK HJ", " HI HH HG HF HE HD HC HB HA H9 H8 H7 H6 H5 H4 H3 H", "2 H1 H0 H GZ GY GX GW GV GU GT GS GR GQ GP GO GN G", "M GL GK GJ GI GH GG GF GE GD GC GB GA G9 G8 G7 G6 ", "G5 G4 G3 G2 G1 G0 G FZ FY FX FW FV FU FT FS FR FQ ", "FP FO FN FM FL FK FJ FI FH FG FF FE FD FC FB FA F9", " F8 F7 F6 F5 F4 F3 F2 F1 F0 F EZ EY EX EW EV EU ET", " ES ER EQ EP EO EN EM EL EK EJ EI EH EG EF EE ED E", "C EB EA E9 E8 E7 E6 E5 E4 E3 E2 E1 E0 E DZ DY DX D", "W DV DU DT DS DR DQ DP DO DN DM DL DK DJ DI DH DG ", "DF DE DD DC DB DA D9 D8 D7 D6 D5 D4 D3 D2 D1 D0 D ", "CZ CY CX CW CV CU CT CS CR CQ CP CO CN CM CL CK CJ", " CI CH CG CF CE CD CC CB CA C9 C8 C7 C6 C5 C4 C3 C", "2 C1 C0 C BZ BY BX BW BV BU BT BS BR BQ BP BO BN B", "M BL BK BJ BI BH BG BF BE BD BC BB BA B9 B8 B7 B6 ", "B5 B4 B3 B2 B1 B0 B AZ AY AX AW AV AU AT AS AR AQ ", "AP AO AN AM AL AK AJ AI AH AG AF AE AD AC AB AA A9", " A8 A7 A6 A5 A4 A3 A2 A1 A0 A 9 8 7 6 5 4 3 2 1 0"};
    vector<string> games = {"M3 I2 R GV NE H1 Z 0 LU BF LP BK K8 JY KN CM IA EZ", " II ER IL EO LJ BQ ME AV NB KL N MD HX FC JG DT W ", "V LE IS K6 K K8 D0 LB BY LQ BJ MG HQ LH IP M4 B4 L", "3 C5 JA DZ KY J8 KM JK MZ H7 S GU L5 C3 KJ JN M9 L", "D KW CD JN DM JC DX IS EH M0 B8 NG H NE M8 LT ID L", "G BT MZ KO J7 E1 MU KT KQ JG GU GF MJ L3 MT KU R M", "1 J3 E5 NG NB ME L8 K7 D1 MP KY JF DU W K6 HV FE M", "O HI V LY GS GH MS AH JL DO I5 F3 ND A5 KM CN M3 B", "5 MR KW M0 LM HF FU L9 C MX AC K5 K0 LX I9 U MU NH", " A1 KJ CQ X K5 JW DD I4 F4 KB CY K7 JZ O A0 M6 LG ", "MW MH MC LA HS FH M8 LE MP MO M6 I MD HT KG JQ ND ", "H2 Z MP LJ IN LX LQ LW LR LX BC Z S JO DL L0 C8 HE", " FV LW IA KN JJ LY BB KW JA MO AL NB H4 N KN LQ IG", " KI CR MB HV L8 C0 N H6 LD IT U 5 M5 B3 MC AX GQ G", "J JZ DA P GX MD AW IY EB LZ LO H6 G2 LB IV LZ BA M", "K HM LE BV NA A8 GX GC LD BW M8 B0 MT AG H G9 J E9", " I0 F8 NE A4 MZ ME N A9 M5 I0 LH BS M9 B J0 E8 M1 ", "I4 H7 G1 GZ GA HP FK MH HP HY FB KF CU Z LU MK AP ", "J4 E4 R MX KV CE MU AF MU HC NE KI ID EW L0 J5 KD ", "JT I2 F6 K3 D5 O M4 LP IH MJ HN KR JF KA JW MX MG ", "LM IK V 4 HQ FJ R 8 L2 C6 JI DR IG ET HK FP U K8 N", "G A2 I8 F0 I F9 HD FW MT HD O GY ND KJ MJ AQ Z GN ", "W 3 L1 C7 P MZ L9 IX KZ J7 HI FR KQ CJ MU MJ MG AT", " J2 E6 HH FS MM L0 M4 I1 LG IQ I1 F7 V O IF EU M5 ", "LH U GS MX KQ MP HH KZ CA LA IW Z NE JS DH L2 J3 M", "9 HX GV GE IH ES LU LT HA FZ KU CF JK DP IT EG LL ", "IL LW BD H1 G7 MS HE KE CV K D9 K5 D3 JJ DQ IV EE ", "V MT JT DG M6 B2 LZ I7 LM BN IC EX JY DB NH KF HN ", "FM LR BI KO CL O KE H9 G NH M5 M3 LJ P KD NE ND S ", "M0 V K7 LI IO L5 J0 MM AN L1 J4 LY I8 J5 E3 Z W MH", " AS W GQ O N W LX S MW LR IF JR DI LL BO M8 HY IK ", "EP KR CI P A LT BG I9 F H4 G4 ML AO MR MM JV DE IO", " EL IP EK U P HL FO W MS ML HL MR AI NA H5 NA MC G", "R GI NA KM I7 F1 R KB KU JC U LZ LO II NB MB MD L9", " MZ AA MW HA W NH KL CO KG CT NH GZ X 2 KO JI M0 I", "5 L8 IY MC HU MP AK MR HF HM FN H2 G6 X MR S R NG ", "KG IQ EJ HU FF H5 G3 S KA LI BR KD CW ME HS LO BL ", "MH L5 MM HK MK L2 X U MB AY S 7 NG M6 L6 C2 JQ DJ ", "M4 LI KL JL MB LB K2 D6 IW ED MW KR HC FX LA BZ M1", " B7 P M3 MS KV K3 K2 GP GK HT FG KV JB MX H9 ML L1", " X LW IX EC ND M9 KA CZ KF JR MT MK KT CG NH NA LY", " LP KT JD L3 J2 V GR KI JO L6 J MS ML LU IC GY GB ", "J8 E0 GN GM KY CB KB JV X NG Z K3 X GP JB DY NB A7", " MW AD MG L6 JD DW MO KZ IN EM M1 LL K6 D2 K0 D8 K", "E JS"};
    vector<int> seeds = {467, 287, 1, 190, 336, 107, 278, 470, 323, 33, 387, 281, 21, 280, 152, 299, 44, 302, 395, 505, 270, 476, 444, 496, 458, 270, 61, 365, 148, 49, 146, 116, 431, 397, 181, 164, 400, 469, 94, 362, 64, 508, 384, 118, 2, 331, 23, 107, 310};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AY", "HG", "Z", "ID", "IU", "KO", "G", "AT", "EU", "MO", "D3", "FZ", "N", "HB", "DV", "FH", "MB", "FC", "CW", "7", "G7", "AN", "BI", "NF", "B4", "G7", "LX", "DP", "JI", "M8", "JK", "KD", "LC", "CU", "IO", "J2", "KK", "AW", "KZ", "DQ", "BH", "2", "K4", "KB", "W", "EM", "AB", "KO", "F4"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> teams = {"Z Y X W V U T S R Q P O NH NG NF NE ND NC NB NA N ", "MZ MY MX MW MV MU MT MS MR MQ MP MO MN MM ML MK MJ", " MI MH MG MF ME MD MC MB MA M9 M8 M7 M6 M5 M4 M3 M", "2 M1 M0 M LZ LY LX LW LV LU LT LS LR LQ LP LO LN L", "M LL LK LJ LI LH LG LF LE LD LC LB LA L9 L8 L7 L6 ", "L5 L4 L3 L2 L1 L0 L KZ KY KX KW KV KU KT KS KR KQ ", "KP KO KN KM KL KK KJ KI KH KG KF KE KD KC KB KA K9", " K8 K7 K6 K5 K4 K3 K2 K1 K0 K JZ JY JX JW JV JU JT", " JS JR JQ JP JO JN JM JL JK JJ JI JH JG JF JE JD J", "C JB JA J9 J8 J7 J6 J5 J4 J3 J2 J1 J0 J IZ IY IX I", "W IV IU IT IS IR IQ IP IO IN IM IL IK IJ II IH IG ", "IF IE ID IC IB IA I9 I8 I7 I6 I5 I4 I3 I2 I1 I0 I ", "HZ HY HX HW HV HU HT HS HR HQ HP HO HN HM HL HK HJ", " HI HH HG HF HE HD HC HB HA H9 H8 H7 H6 H5 H4 H3 H", "2 H1 H0 H GZ GY GX GW GV GU GT GS GR GQ GP GO GN G", "M GL GK GJ GI GH GG GF GE GD GC GB GA G9 G8 G7 G6 ", "G5 G4 G3 G2 G1 G0 G FZ FY FX FW FV FU FT FS FR FQ ", "FP FO FN FM FL FK FJ FI FH FG FF FE FD FC FB FA F9", " F8 F7 F6 F5 F4 F3 F2 F1 F0 F EZ EY EX EW EV EU ET", " ES ER EQ EP EO EN EM EL EK EJ EI EH EG EF EE ED E", "C EB EA E9 E8 E7 E6 E5 E4 E3 E2 E1 E0 E DZ DY DX D", "W DV DU DT DS DR DQ DP DO DN DM DL DK DJ DI DH DG ", "DF DE DD DC DB DA D9 D8 D7 D6 D5 D4 D3 D2 D1 D0 D ", "CZ CY CX CW CV CU CT CS CR CQ CP CO CN CM CL CK CJ", " CI CH CG CF CE CD CC CB CA C9 C8 C7 C6 C5 C4 C3 C", "2 C1 C0 C BZ BY BX BW BV BU BT BS BR BQ BP BO BN B", "M BL BK BJ BI BH BG BF BE BD BC BB BA B9 B8 B7 B6 ", "B5 B4 B3 B2 B1 B0 B AZ AY AX AW AV AU AT AS AR AQ ", "AP AO AN AM AL AK AJ AI AH AG AF AE AD AC AB AA A9", " A8 A7 A6 A5 A4 A3 A2 A1 A0 A 9 8 7 6 5 4 3 2 1 0"};
    vector<string> games = {"MH L5 MS HE NE KI IO EL LH IP IA EZ LJ IN MR MM HM", " FN J3 E5 L8 C0 M9 HX X K5 L3 C5 NG NB I F9 H9 G I", "Y EB LP IH JR DI MX AC N KN H G9 KY J8 MT HD L3 J2", " LX BC M5 I0 I7 F1 Z NE X 2 H2 G6 MH AS M1 I4 LG I", "Q V O Z GN MO KZ L8 IY NB KL KV JB LO BL K8 JY V G", "R ML AO LT ID W V MB AY KI JO M8 HY J0 E8 K6 D2 MG", " L6 L6 J LB IV Z LU S 7 J E9 LJ BQ L2 J3 ML L1 ML ", "HL HP FK M1 B7 KM JK H1 G7 MP HH KL JL MW HA JV DE", " Z S MT KU HN FM MW MH MT MK O KE R M1 HK FP R GV ", "K6 K LE BV HQ FJ MW AD GR GI KI CR H7 G1 LP BK MU ", "KT KB JV LU LT HU FF M4 I1 KU CF H5 G3 K7 D1 JA DZ", " MB HV KG JQ NH NA NA A8 JI DR MC LA P KD KZ J7 NA", " KM KL CO LW IA GP GK JS DH JL DO NA MC MU MJ HC F", "X L5 J0 U 5 I1 F7 GX GC LQ IG KA CZ ME L8 P M3 GQ ", "GJ LZ I7 GS GH HA FZ KF CU K3 D5 J5 E3 IL EO MK L2", " GN GM KW JA HT FG LO II NE M8 MX H9 MR KW O A0 W ", "NH N H6 N A9 KF JR L5 C3 JB DY NE ND M0 B8 KG CT R", " MX U P NG M6 MW KR KR CI IT EG KD JT NG KG NB MB ", "LU BF MJ AQ MO AL KM CN MD AW JC DX MS ML LU IC U ", "LZ NE H1 K D9 HF FU JK DP Z 0 L0 C8 MS KV LH BS O ", "GY JT DG LT BG MR AI NH GZ L9 IX W MS JD DW KD CW ", "NG A2 HE FV KR JF KT JD ID EW NH KF MB LB MP KY MM", " HK K8 D0 HS FH X NG MC HU MP MO W 3 KT CG IW ED K", "J CQ JN DM K0 D8 GY GB J7 E1 M3 I2 LE IS JW DD KU ", "JC V 4 MM L0 LA IW P A N MD LI IO JQ DJ ND A5 R 8 ", "NB H4 MU HC M8 B0 MZ KO U GS LW BD Z MP MJ L3 MM A", "N KN CM NB A7 MT AG M8 LE H4 G4 O N IH ES NG H X G", "P J8 E0 LA BZ LQ BJ S MW KQ CJ K5 K0 M4 B4 HL FO S", " R MH HP K3 K2 ME HS Z W GU GF M1 LL MP AK LI BR X", " LW ND H2 MX KQ KW CD M9 B X U LL IL LB BY IG ET P", " MZ HX FC ND KJ M9 LD S KA W GQ MG AT W K6 MD L9 L", "L BO HI FR MR HF JJ DQ NH M5 JZ DA KZ CA KB CY LX ", "LQ KY CB IX EC GV GE HD FW LX I9 M0 LM I0 F8 II ER", " ME AV IV EE LZ LO KN JJ KJ JN HY FB MZ AA LM IK K", "O JI MX MG NH A1 MZ H7 NE A4 MK AP KA JW KQ JG M4 ", "LI M5 B3 M5 LH MG HQ MD HT KO CL IC EX K5 D3 S GU ", "M3 LJ JF DU IN EM LW LR LY LP K7 JZ J4 E4 MK HM V ", "MT M6 I I2 F6 L2 C6 LR IF IF EU IK EP KE JS HH FS ", "MZ ME KV CE P GX LZ BA LY BB LM BN MS AH U K8 LY I", "8 L1 J4 L0 J5 S M0 V LY IP EK O M4 NA H5 JG DT L9 ", "C K2 D6 I8 F0 JO DL IS EH I5 F3 L1 C7 ND M9 GZ GA ", "MC AX J2 E6 V K7 MJ HN U MU MU AF MO HI M6 B2 IQ E", "J L6 C2 HV FE M3 B5 W LX H6 G2 JY DB R KB M6 LG X ", "MR LD IT I4 F4 LR BI I9 F KE CV LG BT Z K3 M0 I5 L", "D BW"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "Z", "W", "X", "U", "V", "S", "6", "9", "R", "O", "P", "NG", "NH", "NE", "A3", "A6", "ND", "NA", "NB", "MZ", "N", "MX", "AB", "AE", "MW", "MT", "MU", "MR", "MS", "MP", "AJ", "AM", "MO", "ML", "MM", "MJ", "MK", "MH", "AR", "AU", "MG", "MD", "ME", "MB", "MC", "M9", "AZ", "B1", "M8"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> teams = {"Z Y X W V U T S R Q P O NH NG NF NE ND NC NB NA N ", "MZ MY MX MW MV MU MT MS MR MQ MP MO MN MM ML MK MJ", " MI MH MG MF ME MD MC MB MA M9 M8 M7 M6 M5 M4 M3 M", "2 M1 M0 M LZ LY LX LW LV LU LT LS LR LQ LP LO LN L", "M LL LK LJ LI LH LG LF LE LD LC LB LA L9 L8 L7 L6 ", "L5 L4 L3 L2 L1 L0 L KZ KY KX KW KV KU KT KS KR KQ ", "KP KO KN KM KL KK KJ KI KH KG KF KE KD KC KB KA K9", " K8 K7 K6 K5 K4 K3 K2 K1 K0 K JZ JY JX JW JV JU JT", " JS JR JQ JP JO JN JM JL JK JJ JI JH JG JF JE JD J", "C JB JA J9 J8 J7 J6 J5 J4 J3 J2 J1 J0 J IZ IY IX I", "W IV IU IT IS IR IQ IP IO IN IM IL IK IJ II IH IG ", "IF IE ID IC IB IA I9 I8 I7 I6 I5 I4 I3 I2 I1 I0 I ", "HZ HY HX HW HV HU HT HS HR HQ HP HO HN HM HL HK HJ", " HI HH HG HF HE HD HC HB HA H9 H8 H7 H6 H5 H4 H3 H", "2 H1 H0 H GZ GY GX GW GV GU GT GS GR GQ GP GO GN G", "M GL GK GJ GI GH GG GF GE GD GC GB GA G9 G8 G7 G6 ", "G5 G4 G3 G2 G1 G0 G FZ FY FX FW FV FU FT FS FR FQ ", "FP FO FN FM FL FK FJ FI FH FG FF FE FD FC FB FA F9", " F8 F7 F6 F5 F4 F3 F2 F1 F0 F EZ EY EX EW EV EU ET", " ES ER EQ EP EO EN EM EL EK EJ EI EH EG EF EE ED E", "C EB EA E9 E8 E7 E6 E5 E4 E3 E2 E1 E0 E DZ DY DX D", "W DV DU DT DS DR DQ DP DO DN DM DL DK DJ DI DH DG ", "DF DE DD DC DB DA D9 D8 D7 D6 D5 D4 D3 D2 D1 D0 D ", "CZ CY CX CW CV CU CT CS CR CQ CP CO CN CM CL CK CJ", " CI CH CG CF CE CD CC CB CA C9 C8 C7 C6 C5 C4 C3 C", "2 C1 C0 C BZ BY BX BW BV BU BT BS BR BQ BP BO BN B", "M BL BK BJ BI BH BG BF BE BD BC BB BA B9 B8 B7 B6 ", "B5 B4 B3 B2 B1 B0 B AZ AY AX AW AV AU AT AS AR AQ ", "AP AO AN AM AL AK AJ AI AH AG AF AE AD AC AB AA A9", " A8 A7 A6 A5 A4 A3 A2 A1 A0 A 9 8 7 6 5 4 3 2 1 0"};
    vector<string> games = {"IN EM ME L8 MY AB LQ IG LU BF MX AC IG ET KX J9 NF", " A3 LZ BA JC DX L6 J K0 D8 T GT MR KW HL FO J9 E N", "C KK L4 J1 LV BE MN AM MQ KX IM EN KY CB MG HQ KS ", "JE K9 JX KO CL MB HV IA EZ N H6 NA H5 MS KV GS GH ", "NB KL NE A4 LX BC HO FL MZ KO HQ FJ LO II JX DC M7", " HZ LF BU NG H J0 E8 Z K3 IF EU M0 I5 II ER MZ AA ", "K3 D5 J1 E7 MU KT KW JA MH HP L2 J3 LA IW X K5 KB ", "JV IV EE KT CG MC AX IO EL KF JR MV KS NC A6 KV CE", " Z GN L8 C0 MR HF KL CO NC H3 KD CW I0 F8 NB A7 MR", " AI KR JF L0 C8 NH GZ Q 9 LC IU KG CT HU FF H2 G6 ", "GY GB HW FD KH CS Y 1 J7 E1 JI DR J3 E5 I8 F0 HF F", "U LL BO M8 B0 IJ EQ KT JD L7 C1 K4 K1 M5 I0 HI FR ", "O KE NG KG I4 F4 MW KR MA AZ GZ GA NF KH IP EK KC ", "JU MY KP MF L7 M1 B7 JN DM LR BI LS BH K9 D W K6 I", "X EC HJ FQ M4 I1 I6 F2 M0 B8 JL DO MU HC MJ HN MI ", "AR K6 K KQ CJ NG A2 O GY K3 K2 MO HI IZ EA Q GW JP", " DK KO JI M8 HY MQ HG NB H4 L5 J0 HV FE IW ED MP K", "Y KP JH L1 C7 JT DG U 5 GU GF MO AL LF IR Q KC L9 ", "C ND A5 KN JJ K2 D6 LB IV JR DI H3 G5 LY BB MW AD ", "LZ I7 LI IO LV IB LD BW M2 B6 LR IF JF DU MG L6 MN", " L KD JT KA CZ MV HB HG FT L6 C2 JY DB KP CK N KN ", "K8 JY MM L0 I5 F3 I9 F HN FM N A9 MW HA MP AK HC F", "X IE EV JO DL HS FH LI BR MB AY MT HD HB FY LJ BQ ", "JS DH KE CV K4 D4 V 4 LM BN LL IL KZ CA M I6 GT GG", " LY I8 LJ IN JE DV MS HE KC CX I F9 KW CD M6 I LW ", "IA NH A1 K D9 L4 C4 MJ AQ ME HS NA KM MD L9 KJ JN ", "J8 E0 MV AE LT ID I2 F6 MJ L3 MD AW NE KI IB EY MX", " H9 K5 K0 JU DF M2 I3 LG IQ IH ES H0 G8 Z 0 H4 G4 ", "JJ DQ K8 D0 P GX MU AF LA BZ JA DZ K7 JZ Y GO I3 F", "5 KI CR GV GE W 3 LQ BJ L J6 HA FZ LE BV IR EI MT ", "AG HD FW GX GC LS IE MS AH MM AN LB BY MD HT KI JO", " M3 B5 L7 IZ GQ GJ V GR R KB KU JC GP GK LN IJ KQ ", "JG H6 G2 HP FK J5 E3 HE FV I1 F7 KE JS LD IT H9 G ", "L3 J2 MZ H7 M9 HX L C9 J4 E4 KM JK M1 I4 JZ DA MQ ", "AJ S GU LW BD K7 D1 KM CN IC EX LU IC GO GL LP BK ", "KR CI MH L5 HY FB I7 F1 GW GD KX CC LP IH KV JB IS", " EH O A0 H5 G3 KZ J7 K5 D3 MK HM LN BM MG AT U GS ", "KB CY IU EF LC BX H1 G7 MP HH JK DP GR GI J E9 L9 ", "IX LK BP S KA ND H2 LG BT R 8 IQ EJ LK IM L2 C6 ID", " EW K6 D2 JH DS HH FS M7 B1 ML AO MF HR LH IP V K7", " T K9 LX I9 KH JP KL JL MK AP L5 C3 GN GM IL EO KK", " JM Y K4 X 2 KF CU MY H8 KJ CQ S 7 MN HJ H7 G1 IT ", "EG K1 D7 MK L2 LO BL JG DT M B9 MI L4 J2 E6 J6 E2 ", "M6 B2 JQ DJ L1 J4 NE H1 IK EP KY J8 H8 G0 KA JW P ", "KD P A M9 B LM IK NH KF L0 J5 X GP NF H0 ML HL MA ", "HW MH AS KK CP JD DW MX KQ HK FP U K8 T 6 KG JQ H ", "G9 KS CH W GQ MO KZ LT BG M3 I2 JV DE HX FC ME AV ", "HM FN MT KU IY EB MI HO ML L1 LH BS JW DD KU CF L8", " IY LE IS MF AU MC HU MM HK HZ FA KN CM R GV JM DN", " ND KJ NA A8 L3 C5 JB DY HT FG M5 B3 HR FI M4 B4"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"LA", "LB", "LC", "LD", "LE", "LF", "LG", "LH", "LI", "LJ", "LK", "LL", "LM", "LN", "LO", "LP", "LQ", "LR", "LS", "LT", "MD", "ME", "MF", "MG", "MH", "MI", "MJ", "MK", "ML", "MM", "MN", "MO", "MP", "MQ", "MR", "MS", "MT", "MU", "MV", "MW", "MX", "MY", "MZ", "N", "NA", "NB", "NC", "ND", "NE", "NF"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> teams = {"0 1 2 3 4 5 6 7 8 9 A B C D E F"};
    vector<string> games = {"F 0 E 1 D 2 C 3 B 4 A 5 9 6 8 7 F 8 E 9 D A"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 13, 15};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "D", "E", "F", "8", "9", "A", "C", "3", "5", "6", "7", "0", "2", "1", "4"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> teams = {"0 1 2 3 4 5 6 7"};
    vector<string> games = {"7 0 6 1 5 2"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 6, 7};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "5", "6", "7", "0", "1", "2", "4"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> teams = {"0 1 2 3"};
    vector<string> games = {"3 0"};
    vector<int> seeds = {0, 1, 2, 3};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "3", "0", "2"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> teams = {"A B C D E F G H I J K L M N O P"};
    vector<string> games = {"P A O B N C M D L E K F J G"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"H", "J", "K", "L", "M", "N", "O", "P", "A", "B", "C", "D", "E", "F", "G", "I"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> teams = {"A B C D E F G H I J K L M N O P"};
    vector<string> games = {"P A O B N C M D L E"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"F", "G", "H", "L", "M", "N", "O", "P", "A", "B", "C", "D", "E", "I", "J", "K"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> teams = {"A"};
    vector<string> games = {};
    vector<int> seeds = {0};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> teams = {"SPAIN GERMANY ITALY FRANCE ", "CROATIA TURKEY DUTCH POLAND"};
    vector<string> games = {};
    vector<int> seeds = {0, 1, 1, 2, 3, 4, 5, 4, 6, 7};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CROATIA", "DUTCH", "DUTCH", "FRANCE", "GERMANY", "ITALY", "POLAND", "ITALY", "SPAIN", "TURKEY"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> teams = {"Z Y X W V U T S R Q P O NH NG NF NE ND NC NB NA N ", "MZ MY MX MW MV MU MT MS MR MQ MP MO MN MM ML MK MJ", " MI MH MG MF ME MD MC MB MA M9 M8 M7 M6 M5 M4 M3 M", "2 M1 M0 M LZ LY LX LW LV LU LT LS LR LQ LP LO LN L", "M LL LK LJ LI LH LG LF LE LD LC LB LA L9 L8 L7 L6 ", "L5 L4 L3 L2 L1 L0 L KZ KY KX KW KV KU KT KS KR KQ ", "KP KO KN KM KL KK KJ KI KH KG KF KE KD KC KB KA K9", " K8 K7 K6 K5 K4 K3 K2 K1 K0 K JZ JY JX JW JV JU JT", " JS JR JQ JP JO JN JM JL JK JJ JI JH JG JF JE JD J", "C JB JA J9 J8 J7 J6 J5 J4 J3 J2 J1 J0 J IZ IY IX I", "W IV IU IT IS IR IQ IP IO IN IM IL IK IJ II IH IG ", "IF IE ID IC IB IA I9 I8 I7 I6 I5 I4 I3 I2 I1 I0 I ", "HZ HY HX HW HV HU HT HS HR HQ HP HO HN HM HL HK HJ", " HI HH HG HF HE HD HC HB HA H9 H8 H7 H6 H5 H4 H3 H", "2 H1 H0 H GZ GY GX GW GV GU GT GS GR GQ GP GO GN G", "M GL GK GJ GI GH GG GF GE GD GC GB GA G9 G8 G7 G6 ", "G5 G4 G3 G2 G1 G0 G FZ FY FX FW FV FU FT FS FR FQ ", "FP FO FN FM FL FK FJ FI FH FG FF FE FD FC FB FA F9", " F8 F7 F6 F5 F4 F3 F2 F1 F0 F EZ EY EX EW EV EU ET", " ES ER EQ EP EO EN EM EL EK EJ EI EH EG EF EE ED E", "C EB EA E9 E8 E7 E6 E5 E4 E3 E2 E1 E0 E DZ DY DX D", "W DV DU DT DS DR DQ DP DO DN DM DL DK DJ DI DH DG ", "DF DE DD DC DB DA D9 D8 D7 D6 D5 D4 D3 D2 D1 D0 D ", "CZ CY CX CW CV CU CT CS CR CQ CP CO CN CM CL CK CJ", " CI CH CG CF CE CD CC CB CA C9 C8 C7 C6 C5 C4 C3 C", "2 C1 C0 C BZ BY BX BW BV BU BT BS BR BQ BP BO BN B", "M BL BK BJ BI BH BG BF BE BD BC BB BA B9 B8 B7 B6 ", "B5 B4 B3 B2 B1 B0 B AZ AY AX AW AV AU AT AS AR AQ ", "AP AO AN AM AL AK AJ AI AH AG AF AE AD AC AB AA A9", " A8 A7 A6 A5 A4 A3 A2 A1 A0 A 9 8 7 6 5 4 3 2 1 0"};
    vector<string> games = {"IN EM ME L8 MY AB LQ IG LU BF MX AC IG ET KX J9 NF", " A3 LZ BA JC DX L6 J K0 D8 T GT MR KW HL FO J9 E N", "C KK L4 J1 LV BE MN AM MQ KX IM EN KY CB MG HQ KS ", "JE K9 JX KO CL MB HV IA EZ N H6 NA H5 MS KV GS GH ", "NB KL NE A4 LX BC HO FL MZ KO HQ FJ LO II JX DC M7", " HZ LF BU NG H J0 E8 Z K3 IF EU M0 I5 II ER MZ AA ", "K3 D5 J1 E7 MU KT KW JA MH HP L2 J3 LA IW X K5 KB ", "JV IV EE KT CG MC AX IO EL KF JR MV KS NC A6 KV CE", " Z GN L8 C0 MR HF KL CO NC H3 KD CW I0 F8 NB A7 MR", " AI KR JF L0 C8 NH GZ Q 9 LC IU KG CT HU FF H2 G6 ", "GY GB HW FD KH CS Y 1 J7 E1 JI DR J3 E5 I8 F0 HF F", "U LL BO M8 B0 IJ EQ KT JD L7 C1 K4 K1 M5 I0 HI FR ", "O KE NG KG I4 F4 MW KR MA AZ GZ GA NF KH IP EK KC ", "JU MY KP MF L7 M1 B7 JN DM LR BI LS BH K9 D W K6 I", "X EC HJ FQ M4 I1 I6 F2 M0 B8 JL DO MU HC MJ HN MI ", "AR K6 K KQ CJ NG A2 O GY K3 K2 MO HI IZ EA Q GW JP", " DK KO JI M8 HY MQ HG NB H4 L5 J0 HV FE IW ED MP K", "Y KP JH L1 C7 JT DG U 5 GU GF MO AL LF IR Q KC L9 ", "C ND A5 KN JJ K2 D6 LB IV JR DI H3 G5 LY BB MW AD ", "LZ I7 LI IO LV IB LD BW M2 B6 LR IF JF DU MG L6 MN", " L KD JT KA CZ MV HB HG FT L6 C2 JY DB KP CK N KN ", "K8 JY MM L0 I5 F3 I9 F HN FM N A9 MW HA MP AK HC F", "X IE EV JO DL HS FH LI BR MB AY MT HD HB FY LJ BQ ", "JS DH KE CV K4 D4 V 4 LM BN LL IL KZ CA M I6 GT GG", " LY I8 LJ IN JE DV MS HE KC CX I F9 KW CD M6 I LW ", "IA NH A1 K D9 L4 C4 MJ AQ ME HS NA KM MD L9 KJ JN ", "J8 E0 MV AE LT ID I2 F6 MJ L3 MD AW NE KI IB EY MX", " H9 K5 K0 JU DF M2 I3 LG IQ IH ES H0 G8 Z 0 H4 G4 ", "JJ DQ K8 D0 P GX MU AF LA BZ JA DZ K7 JZ Y GO I3 F", "5 KI CR GV GE W 3 LQ BJ L J6 HA FZ LE BV IR EI MT ", "AG HD FW GX GC LS IE MS AH MM AN LB BY MD HT KI JO", " M3 B5 L7 IZ GQ GJ V GR R KB KU JC GP GK LN IJ KQ ", "JG H6 G2 HP FK J5 E3 HE FV I1 F7 KE JS LD IT H9 G ", "L3 J2 MZ H7 M9 HX L C9 J4 E4 KM JK M1 I4 JZ DA MQ ", "AJ S GU LW BD K7 D1 KM CN IC EX LU IC GO GL LP BK ", "KR CI MH L5 HY FB I7 F1 GW GD KX CC LP IH KV JB IS", " EH O A0 H5 G3 KZ J7 K5 D3 MK HM LN BM MG AT U GS ", "KB CY IU EF LC BX H1 G7 MP HH JK DP GR GI J E9 L9 ", "IX LK BP S KA ND H2 LG BT R 8 IQ EJ LK IM L2 C6 ID", " EW K6 D2 JH DS HH FS M7 B1 ML AO MF HR LH IP V K7", " T K9 LX I9 KH JP KL JL MK AP L5 C3 GN GM IL EO KK", " JM Y K4 X 2 KF CU MY H8 KJ CQ S 7 MN HJ H7 G1 IT ", "EG K1 D7 MK L2 LO BL JG DT M B9 MI L4 J2 E6 J6 E2 ", "M6 B2 JQ DJ L1 J4 NE H1 IK EP KY J8 H8 G0 KA JW P ", "KD P A M9 B LM IK NH KF L0 J5 X GP NF H0 ML HL MA ", "HW MH AS KK CP JD DW MX KQ HK FP U K8 T 6 KG JQ H ", "CH W GQ MO KZ LT BG M3 I2 JV DE HX FC ME AV ", "HM FN MT KU IY EB MI HO ML L1 LH BS JW DD KU CF L8", " IY LE IS MF AU MC HU MM HK HZ FA KN CM R GV JM DN", " ND KJ NA A8 L3 C5 JB DY HT FG M5 B3 HR FI M4 B4"};
    vector<int> seeds = {0, 1, 2, 3};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> teams = {"A B C D E F G H I J K L M N O P"};
    vector<string> games = {"P A P B P C A D A E D F B G H J H K J L I M"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 6, 7};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"H", "P", "A", "I", "N", "D", "B", "J"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> teams = {"A B C D E F G H I J K L M N O P"};
    vector<string> games = {"P A P B P C A D D F B G H J H K J L I M"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 6, 7};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> teams = {"SPAIN PORTUGAL"};
    vector<string> games = {"SPAIN PORT", "UGAL PORTUGAL SPAIN"};
    vector<int> seeds = {0, 0, 0, 1, 1, 1};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> teams = {"A S D F G H J K"};
    vector<string> games = {"A S S D D F F G G H H J J K"};
    vector<int> seeds = {0, 3, 4, 5, 3, 2, 3, 5};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> teams = {"9 E9 BO ER B6 EI CG BF DY 7 CD R F5 GC V CK ES A2 ", "FC D8 FM DT D5 BK CC CN CE AP BP GD AY D7 DC P F A", "4 DL E3 CO B0 BT 8 EV F8 AI EZ D BN AQ C1 BS J DZ ", "EQ EH AN AK CQ F0 DR AA FA DO A0 S CU BG AW DM E7 ", "GB FU 5 E C2 FX FB CS F2 FW E1 EK EU 4 U BU DI DQ ", "AF DW DP CY B1 F9 F6 CF AD CW BI FG D1 F3 EM O DK ", "BJ DS B4 6 AE BD E4 D6 FS Z F1 DF K E2 BZ L FV CB ", "C0 BY X FO AO DE D4 CA AU A6 CR A3 DB AV W DD C M ", "D9 DH D2 AJ DU FI D0 2 C8 EG GA EC EJ CI C6 BL 1 B", "3 E0 ED FT BC BM B8 AS AC AB H EO CM EP BQ EY BV F", "K 3 A8 BW FF EW BX CP T DG Q AM A9 BR FQ FR D3 E5 ", "EB CX FP A7 DV CZ AG EF AZ B9 Y BA CV E6 FE FH FN ", "CL AH BE BH FY EL C7 DX AX N DN E8 EX F4 ET CT A A", "T B5 B2 F7 A1 FL DA CH B AR EA FD A5 EN B7 C9 FJ 0", " I EE FZ C3 C4 G CJ C5 AL DJ BB"};
    vector<string> games = {"GC FC FA BG EV BU AW BR EQ C2 CW B3 DQ H GC BS ER ", "F5 CG C4 GD BI A2 BD DW AC AY CW FM F8 BO FA BT EL", " EM EJ FV A3 EZ CL FM B D8 AR BP FG EI CE FC AE A0", " S A2 D DT DS E7 AM C1 E6 BO GD GC C9 9 AO CK ES A", "K AG CE F3 BI 1 B0 C7 4 BQ CY B8 BO X BZ AV F0 E7 ", "7 EH F1 M D5 8 CN EM 9 BB GD A BF DY A2 FD AY P O ", "EC BF CC F5 FJ EK BV EI CD ER B6 R FM F3 CI GD F D", "R DM FO D4 J BA R DF GC Z CC O D7 DC D EK CG 7 V F", "S B6 R E2 W AQ FW D5 BJ 8 DI DT EV ER BY DZ Y CN C", "O CE B2 E3 AX BY AU R 0 E9 V AO DE DC F4 7 EE DS C", "8 AQ FE AY CT FC EA AF AB D7 AD BJ EG F2 A8 7 E2 A", "P DL B4 2 EU EY F0 DV FX EW DO EB AA AW BG FQ BT D", "Q P F6 EZ EU K DD 9 CK CN F7 DO CU FM B4 CB CR F F", "9 J FB B6 AP CC A1 F5 D8 AP B5 5 T CQ CZ DR A7 C2 ", "BX BP AT BS CV FA CX 9 D7 EV BH D8 6 F8 U E4 AJ BF", " AK S D3 E3 DP CK D6 BK FL X CA EH AZ FC EZ CS BW ", "CD I C0 A6 E9 DJ CQ GB BN E1 F6 FT AN 5 CU FR F8 B", "E D6 D2 DI EO B6 CJ DY BZ D1 C6 CC B0 9 BF GB Q DK", " GA DF C E1 FK DP AS DT CH CK AQ E9 BO BN FH 9 E9 ", "9 A0 6 D0 B6 DR AN EF BF C3 C1 F2 DY AN A0 E5 CD E", "Q EI F0 B0 AF BP A4 ES BN DM A9 FG BL CF ED DL N E", "I G R DZ D7 ET U EP BF L ES A5 E CP V A2 7 D5 F5 J", " 9 ER CG CN 8 FY FB FF AK FU B6 C0 CG FV AA FP FS ", "DH AE FI CG CQ BD DU E9 FO ER AA D5 DA P EX DL CY ", "CO DW B1 BM CK EN AD E0 E9 DO L DB CD K FU DG F5 F", "1 F9 BC BO AL V C1 V B7 CD DT A4 DN D FN E9 CG DZ ", "FX BK DK EI CB Z D9 E9 AY ER BP ER C5 DC CF EQ B9 ", "CE E3 AP D1 BO EI EH E CO DX BS CS A4 B1 D8 AI BU ", "CM AI 4 FW 3 AI AH F E8 DY BK DY FZ BK BT ES E4 BO", " GC"};
    vector<int> seeds = {0, 1, 76, 236, 3, 76, 115, 230, 5, 180, 49, 14, 170, 173, 207, 213, 176, 202, 39, 255, 216, 157, 20, 77, 244, 121, 39, 89, 66, 124, 156, 193, 248, 205, 140, 135, 32, 35, 100, 184, 166, 135, 149};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9", "E9", "FB", "AR", "ER", "FB", "F1", "F7", "EI", "EW", "C1", "V", "CM", "EY", "FE", "BH", "3", "B9", "B0", "BB", "C7", "1", "FM", "CS", "0", "FV", "B0", "DW", "BG", "BY", "BL", "EB", "C3", "CV", "M", "DB", "DC", "A4", "D1", "DG", "AC", "DB", "C8"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> teams = {"D6 BZ E9 EA F FK 1 FF B7 AZ FY FM CM BW BE 6 AV A0", " CB BC B3 FT R EE ED A4 ES A CO B2 AQ CF A3 AG CD ", "E5 B1 BA CL CQ E2 EV C6 C2 C4 DX AL FA GD EH DP ER", " D4 AT AB EF FX E FO BF H DU EG DM B4 BK AO Q EZ C", "E EW FL EI E6 DJ AF BT DI DE AM DN A6 FG I CP DW D", "9 A1 DR CV F0 EY E4 CY 2 EN FP L FN EU FI 8 F8 DZ ", "S BM F9 AU EC FW BV CH AI DS 9 DY BQ P DL CS C7 AH", " B CK EB B8 D2 DC C5 F4 AN C1 F6 BG DG BN E7 FZ E1", " 5 FU BJ BI DA FH DH 4 CI 7 CX CT E8 CU C8 V FV Z ", "EM Y B9 FD C3 F1 FB AS A5 B6 AY FJ EL GA ET CC G M", " E3 EP AX BB BO BH EK DB FS T CZ BD O CW AC AD C0 ", "CJ A7 B0 DD K AW AR F3 N F7 AE CG BP C9 AA CN J A2", " EX FQ D7 BY D GB U BX DK F5 FC E0 0 EO C D0 B5 AP", " FR CR X A8 AK EJ GC D8 F2 DQ A9 W DV EQ BS D5 D3 ", "DT D1 CA FE DF AJ DO 3 BR BU BL"};
    vector<string> games = {"BA F0 DC C5 CE BD D6 6 ES 8 E9 B2 E9 FK BW CB C4 I", " AL A2 EY AS FM D4 C4 FQ CK F6 EG BK AB F7 R BM E5", " E4 C6 DW CM DY DP C9 2 C3 AB E6 B7 CS EF EI D6 BL", " DR AY CP ET L Y EU Z AH DG FF ED D4 CG EI FS E EW", " FX FL A B1 EA 3 EV D9 EA CM EN FD B4 C0 AI DA AQ ", "AG EF N CM ER 9 BJ CL BX BW DP AV FA DL FZ BQ 5 B ", "BG B3 AU E2 GB CH FH CO AP F BF FP B9 BZ 1 E2 A1 E", "G A7 D6 EA BZ BE FK FO 1 AH D6 DM 1 AZ A0 A9 CQ U ", "A0 BV E9 DU EA H B2 CD CM D5 BE EQ ER BT F9 CX C7 ", "BN A3 EN BF EZ FO AW E AR EW CZ DX FG BE EH I CC H", " Q CO E5 AZ R FL T EC CI CS E7 DS BI AG 2 H DD E4 ", "FB E9 BW BZ D2 DU B0 EZ O GD AM ED A8 EH AA D6 DC ", "6 AV 6 GD E5 FC A1 FJ F DO EA EB FG G D4 AF CD CY ", "CD E0 BW 9 BC F2 F CK BK AD FK FY AG 0 AO AC DE AX", " EE S FT C6 GD CN BC C4 CB DQ 6 DV FT F9 CO EU FA ", "J BZ E9 FF C7 BW BS 8 V DY FU FN EM CF C AT AE FY ", "AT FI FV AZ D1 CB DX EE AK C2 D7 B2 B5 BE DS DP DI", " DX EX B7 CA BT BO EA CO FY FT DI BB B1 EY BF K FX", " F3 BM CT FT GC C2 CP DM CJ FM D3 F8 C8 AL A6 A4 F", "8 FK AJ AV W BZ AQ B7 EE EV D R EV DZ CU A FI DJ E", "K AM EP FK ES DN E3 D6 CF ES CR 6 AI FK B FF B7 E9", " BR AV CH CQ DR B8 AN F0 A5 R EJ CL CV EA F EB C1 ", "BV DH BE A0 FF FE ED DZ BC EC CF FP FA DN A4 X E9 ", "B8 Q CW D6 BZ AU 7 F A DU AO DM B4 1 A4 D9 EL E6 D", "B ES BA AZ AB 1 E FM BQ A4 CL CV B6 AT DJ FF FX AQ", " L D2 F4 B7 EF B1 F5 CM BC AF BH FY P A0 AL BZ EG ", "DW GA D6 FF AQ D0 CB FW B3 C2 B2 FN FM B3 S E8 FO ", "CE A3 EO F FM AZ DL CY F1 BA DK C6 BY FY DT B3 D8 ", "A6 M P E1 ED CQ CF A3 EH DE BZ BU A FR ER BP FW 4 ", "1 DF EE E2"};
    vector<int> seeds = {114, 251, 242, 70, 204, 38, 9, 126, 246, 122, 216, 237, 85, 151, 18, 202, 87, 2, 182};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9", "DO", "BS", "EW", "BP", "CL", "AZ", "D2", "D1", "B", "U", "DQ", "DW", "E8", "CB", "AE", "A1", "E9", "DB"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> teams = {"I C5 FL B AE BK AK EF CL CS FN AQ CB BM A5 AU EH A", "3 E4 EW EJ E3 F9 BG AY F6 FH FM BP AL DA CJ T DI B", "U CW C8 EV EZ E8 AT A4 DR A0 BX G EY CG C4 J F2 CZ", " F8 E1 BE AA CR EI B5 FW BN D1 CA 3 BI AF AJ D5 EE", " CH DE E6 DF D6 E7 ET EA P V F4 EO D EU AG 5 D4 B1", " D8 FC CE 2 B9 CM A8 DK CU EP F3 BL DM M DG CP FU ", "FZ DU E0 FQ AB BV FI A6 6 AS DY E5 DZ AM CI EM C2 ", "X DN EK DC E2 B2 BD EX BS BH AV C GB B7 DS CF C0 E", "L DJ B3 BC D3 C1 DL CX GD 9 A7 AO C6 FD CV C9 Z A9", " BY FE B4 FF O F7 AP AN ED H FO CN Y FJ EC W D0 AC", " 7 BR DB FX FY F1 FG BJ BZ FA ES EN GA R BF B0 CO ", "D7 BW E9 D9 DW BT FB U A DD A2 B6 N L CK CC DX DV ", "S DH GC AI CY AZ EG 1 4 E FP DP BA FR 8 FV BQ ER E", "B BO F5 FT AR C7 K AW CD B8 0 CQ AX DQ D2 CT F Q E", "Q F0 C3 A1 BB DO FK AH FS AD DT"};
    vector<string> games = {"EK C EF C2 F4 DB BM E4 CZ EA DM BY EY S FQ A7 E2 B", "H AQ Q CR A BV GD DA BQ FM C8 A5 D2 AE FK C5 AK AT", " D8 C8 FP EF CR T CU EW B8 A6 DL CW CM AK EI EF CL", " BM F2 D6 BZ F3 B4 CL EM E7 BJ FH F5 C4 F4 BE D6 E", "3 AW DR D4 CM AN DI DK EJ A0 CP C9 BM CT F6 EZ AY ", "AR C5 DA F9 A4 AU C4 FZ FD A0 AI AU 6 FL E2 D5 BF ", "AY E8 AA DD BU A8 F9 K DF FA AU DQ CG EO FW EE CA ", "E9 FU CV E4 G G DH CG DV CS F0 I DT BK FH C4 DX AE", " AQ DG Z A5 A3 EJ CD F2 P BG AT CZ L FN AM EF AY A", "0 5 EE R CJ FV FL BK DN GB AU EH FN EQ AG D0 E6 ES", " CL BG EH AX BN D5 2 H EW BX CA AF A5 AS AQ DZ C8 ", "B9 E8 FC AL ER FH EV F6 CP CL C3 AE EK E3 DR EH CG", " BI D7 B5 FB CH GA AQ F8 FW BT BK DO EJ FQ CR E6 E", "1 B6 B AE F9 DU FL D1 FH DG CS CI CU O AM EL J CC ", "DZ DJ BL FE CI C0 B DC 3 BI A5 J AL BL E3 E0 BD EX", " B BN I C5 EW AB G EU CJ T FM BO A3 FI EV 2 B BP C", "B CZ D1 AJ FL AL AB 9 AK CS EO BR BP CW FL FS BP D", "M C5 FL FL BM J V B5 CH DE EN A8 AP BG C7 EH A6 6 ", "C1 BU BA DY BC F8 ET BG FZ DR CY A4 AZ C5 B2 EI U ", "D 7 5 W CE FO DA F3 A4 B1 B AH DC AV AT EG BK DN E", "Z CE AQ EJ F6 FT E8 1 FN E1 I B E4 0 B2 BS EM CF A", "J B0 BN DW P FY M A9 DK F7 T 8 AE FM B CB ET FG AE", " FW BE A2 BK B5 D4 EC CL AA BP EB E0 AO I 3 E1 E7 ", "CJ EP B9 ED A3 CQ F2 CK CB EW EV E AK X DA DI V FX", " FN E3 CS F9 C2 DS CB E5 BX AG I EF FC CN C5 CA EA", " F1 CS BE BM DY C5 A5 EF A1 DU C6 CW DP DI FR B1 F", "J AY FU E5 B3 3 BW F8 N EI DE D8 Y I CJ A3 EY BK F", "N EU AC AK F6 X B7 FM M I AU AF CO I BD AK BB FI C", "X AS D3 AL BU AA DF D1 D9 BX GC C5 AD CB F EP FF E", "Y D E4 BV EZ 4"};
    vector<int> seeds = {203, 141, 170, 23, 177, 174, 5, 5, 41, 198, 130, 127};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"N", "BC", "EC", "BG", "FX", "7", "BK", "BK", "A4", "U", "BH", "BD"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> teams = {"EM AM BE BG A0 C FV EW R A4 EB D9 CX U W V E6 EX F", "D B7 BC AL EV EH D4 8 A7 CR C6 P AH X FC FH F3 AF ", "E2 BS CE A1 C7 O DJ CI CW B9 BK DF DT E1 D6 BH F0 ", "CY BJ EU E3 DL F9 Y EK EO CC EQ A3 AI E5 DP DA D0 ", "ER EL T DV DY AX D7 F5 AJ C1 F1 FF CM AY BR DB AR ", "BI B5 BU DR DH DM CZ EP FW AS BA CK Z DC BD E DX S", " BT H 4 AD C2 B GC 1 FG AV EI D3 FY EE FZ AO AN CH", " F8 CS 3 B1 D DG BZ B8 FA D5 A2 BY 0 E8 DD D1 DI B", "O CQ EG C8 F6 Q AP AT D2 F4 AQ FI CT K GB EF FR BQ", " B0 D8 AG C0 FS M E4 N FP BW 7 6 A9 EA FX FL F7 J ", "G C3 B6 E7 FB FT F2 FJ AE DW FO BM FQ GD B4 A5 EN ", "AC BL CJ BF CF FM 9 F DQ CU C9 BB ET EZ CL C5 L CV", " FU DO B2 A6 2 AZ EY BP A C4 B3 AB BX FK CO CN AA ", "DE BN E0 DZ DN GA AW 5 EC CA CP FN BV A8 CD CB AU ", "E9 DK ES EJ ED FE AK CG I DS DU"};
    vector<string> games = {"CX CB EB FY AN BY D9 AU C FE AM FV A4 EE CZ FS BJ ", "DQ A0 F8 R EH A1 B5 C1 G CX BH BC 4 DR N EM AM AM ", "AH DH E4 D4 DZ X FC DL FM EV GA EV O EM D D9 F0 FW", " AG FY D1 CR E2 F3 B3 FV AN B9 CM U D6 V 1 D6 ET E", "L AE A7 BD DV F2 A7 BN AH BA V DT A4 EV Y BF BK FF", " BJ DV A1 AZ BH D7 DF C5 AM BE DC EF 4 D2 EK CJ D3", " DI D DG D6 F5 EH C7 BD GB P CK FH AB FD B9 AM B1 ", "AF C4 EB CY CK BQ EW R V BV DF F1 B7 EC CW AY BG C", "6 A0 Y AR 6 B Q DJ B2 R ES B5 BW EM EW C6 AF B9 CV", " F9 D0 EM DU C EB C CH EM EQ EH DN DL ER F1 J EP C", "0 DY FT AL AW H F4 AS D8 D9 BC C F9 CY DY BA B0 EM", " BG AF DM BT AQ AY FX Z FR W E1 EM X F0 C9 F8 D5 B", "E 3 BE U P F3 CI DO AM W CE EY CM FL R EU A0 AK D4", " A1 CH A2 BE P AM DS EE DD BC 5 U CD AI B4 AM CC E", "W EJ Y DA EW D4 AO 0 FC BX A4 DK C6 Z 8 E E1 EZ DB", " A9 BI 7 BG CG 1 C8 FF F7 BG CS EX B O A6 AX FB DA", " BM FG EG BC CI X AS FV DL BG EK EH S DT CL EK DP ", "E K CY CU CX B7 E6 DF F9 CF EU F BS DR FD C2 8 E0 ", "A4 BJ FH EP C6 AA FV ED E6 GC D9 D3 EI BO CR DE EW", " E3 8 CE B1 BZ A7 BS U AV CE BU FZ E8 D7 E7 D0 FO ", "U FD GC F6 FD CA BG CX ER DW EO BL E2 A EQ A3 CC A", "I FV 8 P CN C2 AP R FZ E3 9 FV A4 O AR W A8 BU FP ", "W FG E3 EL EQ EN T FJ X FK A0 D9 BG A0 BR EA EB E9", " A0 CR E6 FN C7 2 C7 BI B7 CW BE C C A7 F5 B6 FC F", "W EX CP CI BR E1 AJ V E6 EX BK F3 CZ EV BT BE I F0", " AX DP FQ S FI AJ C3 AH CO D4 DX 3 B8 E5 GD DX CT ", "A3 A5 AV CQ CR DC W EX AL H EM V AL DJ EU T BH BB ", "EO E5 DT C1 BK L CX EI AH FH AD AT CS FA DJ DB B7 ", "AD BS BP BE EO E2 DH EB AL CC AC DM M EW AO CW FU"};
    vector<int> seeds = {22, 53, 191, 154, 19, 61, 237, 136};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EV", "CY", "A5", "GB", "B7", "EO", "CA", "E8"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> teams = {"EW DO AL 8 K AR C4 CO DV AC CA FI FW CY BC FM AS A", " E7 AZ C F9 S DU CS DI ED BA FR AM EN DN B1 ET FB ", "AW BU BG A1 F7 5 D7 AI FV D5 AP FL EM EI E5 BB DP ", "7 EP GB BY F5 EH BV T R FO Y A6 M E6 2 O E3 BP CV ", "EQ 4 EB C5 G DW X AO DG CL B D0 FA B4 B9 E0 CK EU ", "DZ FD CN L FN BH FQ CH AX E4 BL B3 D2 GD P EF B8 B", "S D1 E8 D8 AH D4 CE C3 AE BJ CR CU ER DR FS FT CM ", "FX DA EZ EY ES V F8 AG FK AK A2 EX A9 GC DT BI BZ ", "0 AD EJ EV E2 DK FY AV E FE FJ 1 DD AY 9 CT BX B5 ", "EE AA FU BR DH CB B6 N CQ C9 EC 3 F4 CZ CI DX DM I", " Q E9 DL F6 AQ A5 AU BO A0 F2 CC C8 DE B7 J DF DC ", "BN BE H F1 EL FG U B0 BK C1 6 A7 DS C7 EA FZ FF DB", " CJ D3 AT CX A4 EG CP F GA BQ CF AN DQ C0 FP C6 C2", " D B2 DJ EK F0 DY EO AB FH BW FC CW CD CG BD E1 BT", " AF F3 A8 BM AJ BF W Z D9 D6 A3"};
    vector<string> games = {"B3 CT CH AA DV DU EW A3 DZ CQ EP C1 EH CV BA BU CO", " DV AM C6 8 FR EW ES E5 AO DO BC EM FZ FR BL C4 EH", " R H B9 F4 CY E7 A FL D7 E0 FO BE ET BH EN FP FO 2", " GD AY BC C3 7 G DU EF DO EN DN C0 EP C5 EW A6 EY ", "F8 D7 CX C4 AJ AX EE ES V E5 C7 M DF BU CN AL CY D", "R GC A1 DZ CA CU DO C4 FD N DO AL FA CI CS EK FW B", "J DI GD K T AR CM 8 DA AZ D5 B8 FJ BC A K BA 5 CK ", "EU C9 FL FF DO D6 ED D2 A FC FM CD S D7 FM AS C3 E", "J AI B9 FI C CO F5 CS P E4 B5 E6 J EN ET L CB F7 E", "U X DL ET AN AC F3 AS CW E0 3 AS EM CO CS O DE C4 ", "FT EN AX AP D0 DP A7 Y E6 FS A9 E3 C8 FQ FU K W BB", " DS EW DO 8 K EW 8 K FI BS FE B1 DQ FM CE A1 CP DV", " A8 BG FD C D1 EW CO AW L FV D3 DI DJ R O CY AE DG", " Q DN B1 F5 EQ AR BF AL EZ D1 E AR CA AM FB EI EA ", "ED B2 CS F7 D0 DX BG F F9 BS S DY CK EC BP CC DU F", "0 5 A4 GB EB B1 FQ CN B6 8 FW D4 E2 C4 DI BH BR EW", " FM FW DP BL BX Y BN DV BY DI A1 FW E1 C5 A5 ER DT", " FB FN BC E5 BU GA AL D9 FL B BC CG AL FO FV B4 FI", " BT BY 4 B DM AE AD T F1 AR BV AC GB BA B3 E7 BW C", "A EP FI CR DP DW K FX S B8 BJ 0 CE EV CY BB DV DR ", "EW DN AZ FH C AB E7 AP BV BP DW F6 AZ E8 A6 DC CA ", "F9 8 R CR BZ B4 CZ 2 B7 FR AW EI DG AL AR FX AK 8 ", "Z BV EL AR ED D5 CJ AS D4 F9 EO CO FS D2 9 ED BG A", " AH FW AZ E8 AV EH FG F5 U CM A2 BY B0 BB X C FV E", "F 1 EZ AG A6 M CO BM E7 D8 AW BQ FI 7 F9 AI C4 AC ", "FN DH D5 FA FT EX AI AT EB AU CY BD D8 FY DU 5 FR ", "C2 DO Y AC S CV F2 AH DK P DD F7 EG EM CL AL AM 4 ", "BO FB CF CA AF G AQ CL I DA FK GB BK DO EY 7 6 EQ ", "A0 CU BI AC ER FM EI T E3 AM E4 DN CH BA D AO E9 A", "P DB"};
    vector<int> seeds = {84, 242, 213, 101, 190, 138, 206, 117, 220, 133, 30, 11, 205, 216, 240, 113, 65, 196, 149, 135, 47, 181, 216, 192, 198};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B4", "BD", "AT", "D2", "J", "BI", "C7", "CU", "BQ", "A2", "EN", "FI", "DS", "EG", "CD", "C3", "E6", "F1", "FE", "A9", "EM", "A5", "EG", "DC", "FG"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> teams = {"9 E9 BO ER B6 EI CG BF DY 7 CD R F5 GC V CK ES A2 ", "FC D8 FM DT D5 BK CC CN CE AP BP GD AY D7 DC P F A", "4 DL E3 CO B0 BT 8 EV F8 AI EZ D BN AQ C1 BS J DZ ", "EQ EH AN AK CQ F0 DR AA FA DO A0 S CU BG AW DM E7 ", "GB FU 5 E C2 FX FB CS F2 FW E1 EK EU 4 U BU DI DQ ", "AF DW DP CY B1 F9 F6 CF AD CW BI FG D1 F3 EM O DK ", "BJ DS B4 6 AE BD E4 D6 FS Z F1 DF K E2 BZ L FV CB ", "C0 BY X FO AO DE D4 CA AU A6 CR A3 DB AV W DD C M ", "D9 DH D2 AJ DU FI D0 2 C8 EG GA EC EJ CI C6 BL 1 B", "3 E0 ED FT BC BM B8 AS AC AB H EO CM EP BQ EY BV F", "K 3 A8 BW FF EW BX CP T DG Q AM A9 BR FQ FR D3 E5 ", "EB CX FP A7 DV CZ AG EF AZ B9 Y BA CV E6 FE FH FN ", "CL AH BE BH FY EL C7 DX AX N DN E8 EX F4 ET CT A A", "T B5 B2 F7 A1 FL DA CH B AR EA FD A5 EN B7 C9 FJ 0", " I EE FZ C3 C4 G CJ C5 AL DJ BB"};
    vector<string> games = {"GC FC FA BG EV BU AW BR EQ C2 CW B3 DQ H GC BS ER ", "F5 CG C4 GD BI A2 BD DW AC AY CW FM F8 BO FA BT EL", " EM EJ FV A3 EZ CL FM B D8 AR BP FG EI CE FC AE A0", " S A2 D DT DS E7 AM C1 E6 BO GD GC C9 9 AO CK ES A", "K AG CE F3 BI 1 B0 C7 4 BQ CY B8 BO X BZ AV F0 E7 ", "7 EH F1 M D5 8 CN EM 9 BB GD A BF DY A2 FD AY P O ", "EC BF CC F5 FJ EK BV EI CD ER B6 R FM F3 CI GD F D", "R DM FO D4 J BA R DF GC Z CC O D7 DC D EK CG 7 V F", "S B6 R E2 W AQ FW D5 BJ 8 DI DT EV ER BY DZ Y CN C", "O CE B2 E3 AX BY AU R 0 E9 V AO DE DC F4 7 EE DS C", "8 AQ FE AY CT FC EA AF AB D7 AD BJ EG F2 A8 7 E2 A", "P DL B4 2 EU EY F0 DV FX EW DO EB AA AW BG FQ BT D", "Q P F6 EZ EU K DD 9 CK CN F7 DO CU FM B4 CB CR F F", "9 J FB B6 AP CC A1 F5 D8 AP B5 5 T CQ CZ DR A7 C2 ", "BX BP AT BS CV FA CX 9 D7 EV BH D8 6 F8 U E4 AJ BF", " AK S D3 E3 DP CK D6 BK FL X CA EH AZ FC EZ CS BW ", "CD I C0 A6 E9 DJ CQ GB BN E1 F6 FT AN 5 CU FR F8 B", "E D6 D2 DI EO B6 CJ DY BZ D1 C6 CC B0 9 BF GB Q DK", " GA DF C E1 FK DP AS DT CH CK AQ E9 BO BN FH ", "9 A0 6 D0 B6 DR AN EF BF C3 C1 F2 DY AN A0 E5 CD E", "Q EI F0 B0 AF BP A4 ES BN DM A9 FG BL CF ED DL N E", "I G R DZ D7 ET U EP BF L ES A5 E CP V A2 7 D5 F5 J", " 9 ER CG CN 8 FY FB FF AK FU B6 C0 CG FV AA FP FS ", "DH AE FI CG CQ BD DU E9 FO ER AA D5 DA P EX DL CY ", "CO DW B1 BM CK EN AD E0 E9 DO L DB CD K FU DG F5 F", "1 F9 BC BO AL V C1 V B7 CD DT A4 DN D FN E9 CG DZ ", "FX BK DK EI CB Z D9 E9 AY ER BP ER C5 DC CF EQ B9 ", "CE E3 AP D1 BO EI EH E CO DX BS CS A4 B1 D8 AI BU ", "CM AI 4 FW 3 AI AH F E8 DY BK DY FZ BK BT ES E4 BO", " GC"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 193};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9", "E9", "BO", "ER", "B6", "EI", "EB"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> teams = {"9 E9 BO ER B6 EI CG BF DY 7 CD R F5 GC V CK ES A2 ", "FC D8 FM DT D5 BK CC CN CE AP BP GD AY D7 DC P F A", "4 DL E3 CO B0 BT 8 EV F8 AI EZ D BN AQ C1 BS J DZ ", "EQ EH AN AK CQ F0 DR AA FA DO A0 S CU BG AW DM E7 ", "GB FU 5 E C2 FX FB CS F2 FW E1 EK EU 4 U BU DI DQ ", "AF DW DP CY B1 F9 F6 CF AD CW BI FG D1 F3 EM O DK ", "BJ DS B4 6 AE BD E4 D6 FS Z F1 DF K E2 BZ L FV CB ", "C0 BY X FO AO DE D4 CA AU A6 CR A3 DB AV W DD C M ", "D9 DH D2 AJ DU FI D0 2 C8 EG GA EC EJ CI C6 BL 1 B", "3 E0 ED FT BC BM B8 AS AC AB H EO CM EP BQ EY BV F", "K 3 A8 BW FF EW BX CP T DG Q AM A9 BR FQ FR D3 E5 ", "EB CX FP A7 DV CZ AG EF AZ B9 Y BA CV E6 FE FH FN ", "CL AH BE BH FY EL C7 DX AX N DN E8 EX F4 ET CT A A", "T B5 B2 F7 A1 FL DA CH B AR EA FD A5 EN B7 C9 FJ 0", " I EE FZ C3 C4 G CJ C5 AL DJ BB"};
    vector<string> games = {"GC FC FA BG EV BU AW BR EQ C2 CW B3 DQ H GC BS ER ", "F5 CG C4 GD BI A2 BD DW AC AY CW FM F8 BO FA BT EL", " EM EJ FV A3 EZ CL FM B D8 AR BP FG EI CE FC AE A0", " S A2 D DT DS E7 AM C1 E6 BO GD GC C9 9 AO CK ES A", "K AG CE F3 BI 1 B0 C7 4 BQ CY B8 BO X BZ AV F0 E7 ", "7 EH F1 M D5 8 CN EM 9 BB GD A BF DY A2 FD AY P O ", "EC BF CC F5 FJ EK BV EI CD ER B6 R FM F3 CI GD F D", "R DM FO D4 J BA R DF GC Z CC O D7 DC D EK CG 7 V F", "S B6 R E2 W AQ FW D5 BJ 8 DI DT EV ER BY DZ Y CN C", "O CE B2 E3 AX BY AU R 0 E9 V AO DE DC F4 7 EE DS C", "8 AQ FE AY CT FC EA AF AB D7 AD BJ EG F2 A8 7 E2 A", "P DL B4 2 EU EY F0 DV FX EW DO EB AA AW BG FQ BT D", "Q P F6 EZ EU K DD 9 CK CN F7 DO CU FM B4 CB CR F F", "9 J FB B6 AP CC A1 F5 D8 AP B5 5 T CQ CZ DR A7 C2 ", "BX BP AT BS CV FA CX 9 D7 EV BH D8 6 F8 U E4 AJ BF", " AK S D3 E3 DP CK D6 BK FL X CA EH AZ FC EZ CS BW ", "CD I C0 A6 E9 DJ CQ GB BN E1 F6 FT AN 5 CU FR F8 B", "E D6 D2 DI EO B6 CJ DY BZ D1 C6 CC B0 9 BF GB Q DK", " GA DF C E1 FK DP AS DT CH CK AQ BN FH ", "9 A0 6 D0 B6 DR AN EF BF C3 C1 F2 DY AN A0 E5 CD E", "Q EI F0 B0 AF BP A4 ES BN DM A9 FG BL CF ED DL N E", "I G R DZ D7 ET U EP BF L ES A5 E CP V A2 7 D5 F5 J", " 9 ER CG CN 8 FY FB FF AK FU B6 C0 CG FV AA FP FS ", "DH AE FI CG CQ BD DU E9 FO ER AA D5 DA P EX DL CY ", "CO DW B1 BM CK EN AD E0 E9 DO L DB CD K FU DG F5 F", "1 F9 BC BO AL V C1 V B7 CD DT A4 DN D FN E9 CG DZ ", "FX BK DK EI CB Z D9 E9 AY ER BP ER C5 DC CF EQ B9 ", "CE E3 AP D1 EH E CO DX BS CS A4 B1 D8 AI BU ", "CM AI 4 FW 3 AI AH F E8 DY BK DY FZ BK BT ES E4 BO", " GC"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9", "BO", "E9", "ER", "B6", "CG", "EI", "BF", "DY", "CD", "7", "R", "F5", "V", "GC", "CK", "ES", "FC", "A2", "D8", "FM", "D5", "DT", "BK", "CC", "CE", "CN", "AP", "BP", "AY", "GD", "D7", "DC", "F", "P", "A4", "DL", "CO", "E3", "B0", "BT", "EV", "8", "F8", "AI", "D", "EZ", "BN", "AQ", "BS"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> teams = {"NEWYORKISLANDERS"};
    vector<string> games = {};
    vector<int> seeds = {0};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NEWYORKISLANDERS"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> teams = {"REDSOX PHILLIES METS DODGER", "S ORIOLES BLUEJAYS CUBS AN", "GELS"};
    vector<string> games = {"METS ANGELS", " METS CU", "BS ORIO", "LES ANGELS"};
    vector<int> seeds = {0, 1, 2, 3, 4, 5, 5, 5};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> teams = {"A B C D E F 8 H I 3 9 L 4 N O P"};
    vector<string> games = {"P A B H D C D E E N"};
    vector<int> seeds = {0, 2, 0, 0, 3, 4, 7, 2};
    TournamentSeeding* pObj = new TournamentSeeding();
    clock_t start = clock();
    vector<string> result = pObj->getSeeds(teams, games, seeds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "8", "3", "3", "D", "E", "P", "8"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22629574&rd=12180&pm=9802
********************************************************************************
#include <iostream> 
#include <vector> 
#include <string> 
#include <map> 
#include <sstream> 
 
using namespace std; 
 
struct TournamentSeeding 
{ 
  vector<string> parse(vector<string> v) 
  { 
    string s; 
    for (int i=0; i<v.size(); i++) 
      s += v[i]; 
    istringstream sin(s+" "); 
    vector<string> res; 
    for (;;) 
    { 
      sin >> s; 
      if (sin.eof()) 
        break; 
      res.push_back(s); 
    } 
    return res; 
  } 
  vector<pair<int, int> > g; 
  map<string, int> m; 
  vector<int> lose; 
  vector<int> wins; 
  vector<int> a; 
  vector<bool> u; 
  int n; 
  vector<int> w; 
  bool f(int i) 
  { 
//    cout << i << endl; 
    u[a[i]] = true; 
    vector<pair<int, int> > t; 
    for (int j=0; j<n; j++) 
      if (lose[j] == a[i]) 
        t.push_back(make_pair(wins[j], j)); 
    sort(t.begin(), t.end()); 
    int nn = n; 
    for (int j=0; j<t.size(); j++, nn>>=1) 
    { 
//      cout << i << " " << t[j].first << " " << t[j].second << endl; 
      if (t[j].first != j) 
        return false; 
      a[nn-i-1] = t[j].second; 
      w[j]--; 
      if (!f(nn-i-1)) 
        return false; 
    } 
    return true; 
  } 
  vector<string> getSeeds(vector<string> teams, vector<string> games, vector<int> s) 
  { 
    vector<string> t = parse(teams); 
    vector<string> gg = parse(games); 
    sort(t.begin(), t.end()); 
    n = t.size(); 
    int i, j; 
    for (i=0; i<n; i++) 
      m[t[i]] = i; 
    for (i=0; i<gg.size(); i++, i++) 
      g.push_back(make_pair(m[gg[i]], m[gg[i+1]])); 
    lose = vector<int>(n, -1); 
    wins = vector<int>(n, 0); 
    for (i=0; i<g.size(); i++) 
    { 
      wins[g[i].first]++; 
      if (lose[g[i].second] != -1) 
        return vector<string>(); 
      lose[g[i].second] = g[i].first;       
    } 
    w = vector<int>(20, 0); 
    for (i=0; i<n; i++) 
      w[wins[i]]++; 
    a = vector<int>(n, -1); 
    u = vector<bool>(n, false); 
    for (i=0; i<n; i++) 
    { 
      if (a[i] != -1) 
        continue; 
      int k = 0; 
      for (j=19; j; j--) 
      { 
        k += w[j]; 
        if (k+i == n>>j && k) 
          break; 
      } 
      k = j; 
//      cout << i << " " << k << endl; 
      for (j=0; j<n; j++) 
        if (!u[j] && lose[j] == -1 && wins[j] >= k) 
          break; 
      if (j == n) 
        return vector<string>(); 
//      cout << i << " " << t[j] << endl; 
      a[i] = j; 
      w[wins[j]]--; 
      if (!f(i)) 
        return vector<string>(); 
    } 
    vector<string> res; 
    for (i=0; i<s.size(); i++) 
      res.push_back(t[a[s[i]]]); 
    return res; 
  } 
};

********************************************************************************
*******************************************************************************/