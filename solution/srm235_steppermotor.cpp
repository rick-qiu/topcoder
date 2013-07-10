/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4427
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

class StepperMotor {
public:
    int rotateToNearest(int n, int current, vector<int> target);
};

int StepperMotor::rotateToNearest(int n, int current, vector<int> target) {
    int ret;
    return ret;
}


int test0() {
    int n = 10;
    int current = 0;
    vector<int> target = {-2, -3, 4, 5, 6, 9999999};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 2;
    int current = 314159;
    vector<int> target = {10, 8, 6, 4, 2};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
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
    int n = 1;
    int current = -2147483648;
    vector<int> target = {-2147483648, -2147483648, 2147483647, 2147483647};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 23;
    int current = 10;
    vector<int> target = {64077, -567273, 105845, -279980, 35557, -286190, -652879, -431665, -634870, -454044};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -11;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 1000000000;
    int current = 1403466951;
    vector<int> target = {1233321992, 11423750, 1356595134, 1130863021, 1183514764, 1943494859, 1714480374, 1529875954, 1738756510, 1190153525};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -46871817;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 2;
    int current = 999999999;
    vector<int> target = {-10, -8, -6, -4, -2, 0, 2, 4, 6, 8, 10};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 1234606884;
    int current = -1269631868;
    vector<int> target = {63898276, -1478856578, -1781791632, -1587308300, -1217280692};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 52351176;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 324112531;
    int current = -1005686761;
    vector<int> target = {1837061486};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -74264532;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 1309873021;
    int current = -1189918674;
    vector<int> target = {1359647161, 2027815943, -1762293394, 820352209, -88785247, -1200699068, -1136408750, 1545780181, -30494064, -1332285260, 1946724780, 914720102, 1942179809, 1132098562, 2134480634, 814791424, -384293268, -1282313338, -1653590810, 779910114, -265436391, -1903853184, -1885115958, -1524975801, 1285976867, -612284614, -613181181, -1862554745};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -10780394;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 1934820548;
    int current = -605865686;
    vector<int> target = {415501376, -1701013064, -1905491487, -378543610, 142898498, 697590879, 533252332, 1389016634, -578962518, -138524734, 1624971525, -1549923231, 967056534, 1423628648, 1019529178, -952357432, -1730424236, 1801059004, -2037611635, -624999386, -847907760, -1095399441, -1140475224, 1331837183, 590988606, -1090935755, -1679002785, -803625706};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 2882321;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 1311370311;
    int current = 1262873336;
    vector<int> target = {-433651567, -597407311, 106725470, 937188748, 1600501195, 365605064, 838099973, -1558039025, -793406560, -1381997842, -1419122157, 863057886, -1012535025, 1267381340, -823815270, 2072772566};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 4508004;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 96990042;
    int current = 1143957701;
    vector<int> target = {-1958563732, 1048967690, -1628981179, -131451257, -1864581415, 2142493772, -1405515047, 1451265788, 37209319, 940980913, 1495517033, -142685813, 927897518, -297250619, 1077280562, -1647309043, -763035103, -1929410877, -1167432977, 1426624541, -1111927733, 169580984, 170416961, -1836332636, -132169352, -364183515, 1675415717, 568696673, 1497579854};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1159911;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 1086781749;
    int current = -1491126637;
    vector<int> target = {-122790625, 1617889415, -1341411906, -1197790095, 372522899, -211061941, 709591014};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 27154153;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 1631696329;
    int current = 1856122239;
    vector<int> target = {508898489, -636733422, -1253821802, -632504575, -1356742156, 355529149, 2027016196, -188341327, 606082068, -1915500800, 1845811281, 415956185, 1987489374, -1939391419, 1317682200, 587110328, -941622233, 425465376, -158152490, -858158142, -1127538876, -128873016, 1297842643, -560012285, 678998222, -1008433492, -1800894448, -801609162, 808473800, 1655878120, -2106512406, -1590247101, -1135899100, -1263496039, -645664320, -375660173};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -10310958;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 1988365113;
    int current = 496313541;
    vector<int> target = {-477951433, -1514829366, 1379761995, -1597449138};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -22777794;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 443413992;
    int current = -332339155;
    vector<int> target = {-438216833, -849741615, -32951219, 545319145, -393464738, -1852767207, 1271489581, 1797191598, -2135492007, 1825217903, -1213060974, -1363644923, 521754198, 1882854501, -734539320, -1566417111};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1876304;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 1285491931;
    int current = -311643833;
    vector<int> target = {-2079782327, 817817397, 445810906};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -156030701;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 1245703705;
    int current = -1146310400;
    vector<int> target = {943267478, -791030826, 1347521089, 307036888, 437911212, -267509736, -1626544924, -1567425135, 93124841, 1875999040, -1211322067, -726678339, -797966826, 1952275462, -2103362578, 997413544, 745493277, -1552378478, -2116258164, -292844976, -337731819, 443413446, 1029026105, 1746945450, -909900276, -1214840100, -2141298822, -711564312, -393920417, 518134338, 1681591982, 99090561, 551072331, 1244287381, -1732779257, -127212515, -1125178143, -1168999721, 1030834864, 2018909730, -1653220355, -366733487, 889872173, 41065868};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -302744;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 77522399;
    int current = 1640933224;
    vector<int> target = {-537141489, 7933473, -182596770, -836381185, 648138545, -1444787380, -501527731, -1613643964, -1606544479, -2098694751, -1686944961, -971682757, 189129672, 422179706, 735698338};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1363570;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 332437278;
    int current = -2078081305;
    vector<int> target = {1000033143, 1173430178, 13665640, 2016818839, 1817234272, 1013863978};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -72861297;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 1493341144;
    int current = 425349443;
    vector<int> target = {1715559205, -682116304, -884337959, -790956693, 1160358791, 2132804493, 2096514027, -1709705357, 855697858, -782793075, 540698023, -1544508989, -1178361866, 2136189342, 2054146761, -1892664208, 1233419886, 49173701, 1971918831, -862141950, -1763519291, 510224882, 1545887831};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 53228244;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 2071319703;
    int current = 170951153;
    vector<int> target = {-477123266, 1840496224, -1326371213};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -401774632;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 2110534659;
    int current = -137255652;
    vector<int> target = {-766687848, -1346780578, 174672679, 1238322585, 698890968, 223208085, 460466181, -1781121380, 552933345, 1080461362, 844805602, -1869730788, -1970867844, 52122747, 808737003, -1864211361, -1538944332, 1272926586, -522610508, -1468244656};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 189378399;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 231446783;
    int current = 208699839;
    vector<int> target = {1455487182, -1197581358, -27846002, 1265985636, 914914999};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -5099058;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 1373650207;
    int current = -1422050426;
    vector<int> target = {-1321271462, -1883394078, -868773755, 1764027592, -949749319, -1395708467, 1419859409, 1777166755, 1237747051, -1707357882, -1368051418, -70415450, 685335918, -1135516970, -1613189211, 1253198443, -360099475, 910493811, 860850142, 1467051079, -2117015490, 62981778, 406167512, 373458151, 711901091, 1397221526, -2062209559, -1837570124, 305050470, 1069932124, -2103234750, -1791538794, -856165988, -1346703384, 247564226, 900565016, 1830245105, 1584202532, 654511346, -1744206883, -1175648890, 829435151, -502905093};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -22015231;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 876371784;
    int current = -129800009;
    vector<int> target = {-1684294877, 577660437, -298323600, 1356533997, 1065293310, 1396567254, 345903503, 1408803196, 1594401857, 1691612257, 143767931, -970006990, -1114222645, 740227390, -1688382962, 589876499, -2094035063, 1864370194};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -6344385;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 2073623506;
    int current = 1995141706;
    vector<int> target = {195478956, -284793955, -1965859132, -419273404, -1081494701, 1751066518, 1281802038, -1663556741, 1619017080, 277460370, 1894841365, -1831923262, -1008161774, 1755289713, -1567768951, 1895174347, 805907279, 563914634, -2073590926, -1190754654, -2085116171, 1768725797, 457501567, 1861170651, 605473548, 584469643, 981024042, -1237762574, 544172723, -1623837030, 1490858508, -247139665, -1333105787, 1280483396};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 66989135;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 1770393013;
    int current = -458428426;
    vector<int> target = {1766134470, 1862641955, -1390207453, -1318635397, 644469788, -713856367, 1218163265, -1104203885, -1498498428, -298126497, -1069605532, 744686623, 1982428220, -389879773, 986810535, 625373131, 1026451505, -1314101148, -365448170};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 68548653;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 200716390;
    int current = 804554339;
    vector<int> target = {1494752339, 554628014, -1607307783, 790646893, 879006024, 2133939938, -1841821746, -237581376, -1441527224, -1712753086, -207412416, -806125902, -2143751561, -156586701, -556265667, -1765061546, 1662495688, 548264075, -1158923630, -1367352123, 318193325, 1752687344, 94413724, 344886147, 1851010111, -1406602798, 2107114376, -9850176, 293606704, -1997629186, 1379942471, 1999656054, -1622390741, 1254938844, 991840654, -2056992971, -1532600700, -1775002599};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -3265442;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 1190931003;
    int current = -1195594129;
    vector<int> target = {-1244892749, 470053993, 1286280801, -2001748914, -1696819760, 556214842, 1570362178, 1869362283, 930820422, 144464397, -1974178725, -1253956233, 1723987290, -1298895497, 2090630683, -1599773077, -1967344477, 1220207765, 1938728444, 54439954, 1908500847, 340927001, 1130450247, -1547874576, 302104855, -1826316992, -385973514};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 33939888;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 1316189613;
    int current = -1630352634;
    vector<int> target = {925219773, -1805985613, 481294542, 915197610, -1164163158, 1081972749, 212495868, 1526031366, 277373890, 1358121762, -1580842522, 1077807063, 1405322094, 2057268862, -1216198599, -851126349, 1122869457, -690931514, -588760206, 738874121, 1152473526, 973969833, 472285650, -1708922403, 964173405, 1397520255, -1815934177, 1092138828, -1716975382, 759291036, -82987713, 50776776, 968425032, 591001176, -1926979610, 1211790756};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -28056759;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 68569360;
    int current = -582059828;
    vector<int> target = {-1280625957, 1297637112, 470243454, -2086928839, 199388415, -1816825837, -877484597, 1965146273, -953219244, -1889509167, 981470626, -700450299, -1065266233, -706687862, -1887273907, -76344934, -3304802, 1919851926, -1044768949, 1750009041, 911304048, 534645786, 682377216, -1386760811, -1035180982, 1461579626, 1435357513, 152796898, 349801415, -1348947292, -2399424, 2011948018, 2025500496, 25311728, -669745604, -1318419296, 574122313, 1831300063, -1019855894};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -517529;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 1704816054;
    int current = 1211063670;
    vector<int> target = {419592819, -1401097360, 993072251, -1203220607, -1164240874, -1384941570, 1856816860, -1443596633, 326436767, 385484239, -847691119, -997442804, -1662621472, -874194, 2039368049};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -217991419;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 843930618;
    int current = -670662123;
    vector<int> target = {1015024174, -1969218793, -259057028, 192814104, -1720990209, -552852917, 1203782259, -664712497, 1780055682, -461622735, 1335608349, 1436993256, 2475039, 177616122, 1691142948, 1239956937, -1959036831, 1649873349, 169150386, 21525213, 1741001163, 1240552644, -1812497334, -511847626, 42799746, 2006604618, -613353270, -845622012, 163698609, 1617822185, -1777848393, -793182642, 715873838, -1459078704, -884421020, -2130464055, 966652932, 1177847719, 735371801, -1709313340, 1992861702, 749068039, -865533717, 739395111, 1258883442, -1529838386, 2033408214, 1843887162, 1963562366};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -2174939;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 1878057736;
    int current = -675171841;
    vector<int> target = {-1749960017, -869271836, -645008102, 699841767, 1537869672, -584839737, -421352200, -97739642, -1703352199};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 30163739;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 230126552;
    int current = -810319434;
    vector<int> target = {1515545520, 79014573, 1350221078, 967269421, -1549036423, 944320605, 439330020, -1541081333, -86229001, -476563510, -1601697769, 429232918, -980739346, -372218857, -1049846855, 1281574157, 1217036580, -369003865, -1788993294, 968136787, -28059251, 2105360021, -471470153, 866106771, -1383599808, 1728311800, -180450259, -1611694092, -2074283456};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 7239162;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 1364717164;
    int current = 123541976;
    vector<int> target = {-684916511, 838822800, -1563171997, 360506265, -1049256851, 567454859, 87184809, 1881970894, 613673625, -839876974, 1116592899, 1381900301, 1712227419, -769709358, -192784687, 685062727, 1245611753, 1228592101, 1913855467, -1732852770, 1113780195, 433453686, 1515368938, 78660410, -815642894};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 27109798;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 1298650083;
    int current = -442328038;
    vector<int> target = {-52964110, -1341811103, 417732147, 944569902, 114804172, 2074159475, 1009579233, 1164744823, 2122578789, -1299687478, -1258281349, -2069020515, -649079667, -1801635973, -957454156, 628955266, 2049378597, 724254194, -1101519865, 1784141510, -2111646806, -492975125, -1541765807, -1879034646, 951151800, -1990684311, 958778974, 2049654262, -577836784, -1800581802, -510875058};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -32393339;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 1417289523;
    int current = -1113451299;
    vector<int> target = {-1206052919, 1560339906, -186229923, 752121628, 697830066, -971862312, 1590614757, 1997029023, 646889840, 1779070350, -758581739, -2017851559, -1913902885, -1640444709, -797765505, -1350118808, -2068630257, -282952791, -1401002529, 368125070, -787711352};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 57942603;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 1115097892;
    int current = -1000929758;
    vector<int> target = {-1993804319, 1444989347, -1010357195, 2114474007, -459149038, 795989486, -1333611407, -779655320, -1579697066, 1217407876, -1754320404, -145109204, -213488360, 728648624, 1917312826, -598568646, -968376977, -844169486, 2134721498, 134688810, 2115665959, -1505480319, -1391119082, 191792611, 859978514, 2016552814, -1890526092, -601085236, 1796856868, 1112432769, -1017048050, 1317598782, -1772943076, 1973966479, 1164207552, 348512323, 1836504259, -780476325, 1455735421, -543298391, -2010876334, 1817675555, 1934878461, -807505193, -876285331, 1942783981, -1201518709};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -9427437;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 2062790576;
    int current = 1159823765;
    vector<int> target = {-876342651, 361805867, -1372193326, 1060126024, 1332277262, -1597024014, 826386970, -1971914690, 301488877, 1941509187, -1561077124, -1103038114, -1934090326, -444438127, 1232966138, -595932842, 1373155850, -555440451, -563930579, -1927928014, -733605938, -1497471470, -329564923, -546325756, -1036852769, -320734536, -1279625661, -617475441};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 26624160;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 10;
    int current = 9;
    vector<int> target = {4};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
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
    int n = 10;
    int current = 100;
    vector<int> target = {395};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 3;
    int current = -2000000000;
    vector<int> target = {2000000000};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 10000;
    int current = 2147483647;
    vector<int> target = {-2147483647};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 2706;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 1000000000;
    int current = 1403466951;
    vector<int> target = {1233321992, 11423750, 1356595134, 1130863021, 1183514764, 1943494859, 1714480374, 1529875954, 1738756510, 1190153525};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -46871817;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 2100000000;
    int current = 2000000000;
    vector<int> target = {-1000000000};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -900000000;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 10;
    int current = 4;
    vector<int> target = {2, -99995};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
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
    int n = 2;
    int current = 314159;
    vector<int> target = {10, 8, 6, 4, 2};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 10;
    int current = 5;
    vector<int> target = {4, 6};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 10;
    int current = 9;
    vector<int> target = {7, 1};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 1000;
    int current = 10;
    vector<int> target = {8, 12};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
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
    int n = 2147483647;
    int current = 2;
    vector<int> target = {3};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
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
    int n = 2147483640;
    int current = 0;
    vector<int> target = {2147483637};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 2000000001;
    int current = -2000000000;
    vector<int> target = {2000000000};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 2;
    int current = 5000000;
    vector<int> target = {5};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 100;
    int current = 2147483647;
    vector<int> target = {-2147483648};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 2;
    int current = 2147000000;
    vector<int> target = {1};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 3;
    int current = 1;
    vector<int> target = {0, 2};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
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
    int n = 2000000;
    int current = 1000000;
    vector<int> target = {2};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -999998;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 5;
    int current = 1;
    vector<int> target = {-1};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 2000000000;
    int current = -2147483648;
    vector<int> target = {2147483647};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 294967295;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 1000000000;
    int current = 2147483647;
    vector<int> target = {-2147483648};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -294967295;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 10;
    int current = 0;
    vector<int> target = {-2, -3, 4, 5, 6, 9999999};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 2147483647;
    int current = -2147483647;
    vector<int> target = {2147483647};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 9;
    int current = 0;
    vector<int> target = {0};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
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
    int n = 5;
    int current = 3;
    vector<int> target = {4};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 5;
    int current = 2;
    vector<int> target = {3, 1};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 2000000000;
    int current = -2003466951;
    vector<int> target = {1233321992, 11423750, 1356595134, 1130863021, 1183514764, 1943494859, 1714480374, 1529875954, 1738756510, 1190153525};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 14890701;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 2147483647;
    int current = 0;
    vector<int> target = {-2147483648, -2147483648, 2147483647, 2147483647};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 3;
    int current = 0;
    vector<int> target = {2, 1};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 10;
    int current = 2147483647;
    vector<int> target = {-2147483648};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 5;
    int current = 0;
    vector<int> target = {0, 1};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
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
    int n = 2;
    int current = 314159;
    vector<int> target = {10, 8, 6, 4, 2, 1};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 2;
    int current = -2147483648;
    vector<int> target = {-2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648, -2147483648};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
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
    int n = 3;
    int current = -2147483648;
    vector<int> target = {0};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 5;
    int current = 2;
    vector<int> target = {-2};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 100;
    int current = 2;
    vector<int> target = {6, 0, 3};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 1000000000;
    int current = 1403466951;
    vector<int> target = {476575848, 236473284, 443856834, 854676746, 234678234, 783465744, 746574447, 398758745};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -4708206;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 5;
    int current = 0;
    vector<int> target = {3};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 2147483647;
    int current = 10;
    vector<int> target = {64077, -567273, 105845, -279980, 35557, -286190, -652879, -431665, -634870, -454044};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 35547;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 2;
    int current = -2147483648;
    vector<int> target = {-2147483648, -2147483648, 2147483647, 2147483647, 2147483647, 2147483647, 2147483647, 2147483647, 2147483647, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, -1000000000, -1000000000, -1000000000};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 2147483647;
    int current = -1324123;
    vector<int> target = {-2147483648};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1324122;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 2147483647;
    int current = -2147483648;
    vector<int> target = {1073741823};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1073741823;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 1000001;
    int current = 2147483646;
    vector<int> target = {-2147483647};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 37002;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 10;
    int current = 0;
    vector<int> target = {-1, 1, -1, -1};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 10;
    int current = 5;
    vector<int> target = {6, 4};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
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
    int n = 5;
    int current = 2;
    vector<int> target = {1, 3};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
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
    int n = 100;
    int current = 2;
    vector<int> target = {0, 4};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 10;
    int current = 0;
    vector<int> target = {-6, -6};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 100;
    int current = -99;
    vector<int> target = {99};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 2000000000;
    int current = 1999999999;
    vector<int> target = {-1999999999};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 5;
    int current = 0;
    vector<int> target = {-1, 1};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 10;
    int current = 23;
    vector<int> target = {-2, -3, 4, 5, 6, 9999999};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 10;
    int current = 5;
    vector<int> target = {3, 7};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 3;
    int current = 9999997;
    vector<int> target = {-999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 500000;
    int current = 2147483637;
    vector<int> target = {-2147483617, -444444};
    StepperMotor* pObj = new StepperMotor();
    clock_t start = clock();
    int result = pObj->rotateToNearest(n, current, target);
    clock_t end = clock();
    delete pObj;
    int expected = 32746;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=6534&pm=4427
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
typedef long long LL;
const int INFLL = 1000000000000000000LL;
 
LL myabs(LL x) { return x<0 ? -x : x; }
 
struct StepperMotor {
 
  // MAIN
  int rotateToNearest(int n, int current, vector <int> target) {
    LL best = INFLL;
    LL nn = n;
    FOREACH(it,target) {
      int t = *it;
      LL v = ((LL(t)-LL(current))%nn+nn)%nn;
      if(myabs(v)<myabs(best) || myabs(v)==myabs(best) && v>=0)
        best = v;
      v -= nn;
      if(myabs(v)<myabs(best) || myabs(v)==myabs(best) && v>=0)
        best = v;
    }
    return int(best);
  }
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/