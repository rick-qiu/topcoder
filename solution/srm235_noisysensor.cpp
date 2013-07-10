/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4019
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

class NoisySensor {
public:
    vector<int> medianFilter(vector<int> data);
};

vector<int> NoisySensor::medianFilter(vector<int> data) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> data = {10, 1, 9, 2, 8};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 9, 2, 8, 8};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> data = {500, 500, 500, 500, 500};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {500, 500, 500, 500, 500};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> data = {-2147483648, 2147483647};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2147483648, 2147483647};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> data = {432296535, 1983848899, -434724194, 135703525, -1146336142, -680568092, -1183352724, 1337550909, -1597342716, -1901441857, 1726722019, -558651015, 649930787, 1889036519, 1752815826, 930647381, -852547667, 2028345278, -1835531493, -1040566300, -1566043783, -1282411107, -1123988603, 2132078516, -1169614369, -523503536, 1466102514, -2003903121, -779001645, 1919742042, 1210980485, -9273881, 1033032137, -1474003783, 296280591, 920184999, -1235054743, -1329769514, -1727085135};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {432296535, 432296535, 135703525, -434724194, -680568092, -1146336142, -680568092, -1183352724, -1597342716, -1597342716, -558651015, 649930787, 649930787, 1752815826, 1752815826, 930647381, 930647381, -852547667, -1040566300, -1566043783, -1282411107, -1282411107, -1123988603, -1123988603, -523503536, -523503536, -523503536, -779001645, -779001645, 1210980485, 1210980485, 1033032137, -9273881, 296280591, 296280591, 296280591, -1235054743, -1329769514, -1727085135};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> data = {-2147483648};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2147483648};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> data = {-1709237886, 77375361};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1709237886, 77375361};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> data = {1334409654, 894371166, -1433702440, -1373069138, -1422774521, 1829186169, -1998197062, 1792562474, 1498044403, -818388289, 578077684, 1920750650, 1405277216, 865055243, -1188264321, 1242421540, 1252002612, -397626660, -1010754950, -876663783, 1663724347, 1259723062, 28571945, -52514442, 1371140983, -709578816, -2117672297, -1458103647, 798651806, 236228018, 43977076, -1030383722, -252839130, -28197681, 2033714471, 1468381645, 1026393411};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1334409654, 894371166, -1373069138, -1422774521, -1373069138, -1422774521, 1792562474, 1498044403, 1498044403, 578077684, 578077684, 1405277216, 1405277216, 865055243, 865055243, 1242421540, 1242421540, -397626660, -876663783, -876663783, 1259723062, 1259723062, 28571945, 28571945, -52514442, -709578816, -1458103647, -1458103647, 236228018, 236228018, 43977076, -252839130, -252839130, -28197681, 1468381645, 1468381645, 1026393411};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> data = {1172731181, -2094232691, 84067790, -926318995, 1823005376, -1033954177, 555952741, 208679276, 752332669, 1762488842, -2140791219, -113245001, -1218849440, -1747735385, -218461770, -516029849, 1070630148, 1613202254, -1785870045, 536194243, 1747022497, -178329423, 8271226, 226176580, -1941908743, 653982928, -880807937, 1431675277, -2834493, -1315058121, -1262548637, 709935883, -1054148159, -1522072665, 1319190152, -2086949355, -1440739325, -1344869472, -1951928638, 2058767724, 857107468, 581433905, 202090224, 313373423, 734942003, -1231100295};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1172731181, 84067790, -926318995, 84067790, -926318995, 555952741, 208679276, 555952741, 752332669, 752332669, -113245001, -1218849440, -1218849440, -1218849440, -516029849, -218461770, 1070630148, 1070630148, 536194243, 536194243, 536194243, 8271226, 8271226, 8271226, 226176580, -880807937, 653982928, -2834493, -2834493, -1262548637, -1262548637, -1054148159, -1054148159, -1054148159, -1522072665, -1440739325, -1440739325, -1440739325, -1344869472, 857107468, 857107468, 581433905, 313373423, 313373423, 313373423, -1231100295};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> data = {-1272826636, -1115109335, 1831859936, 528182947, -2029461214, -907791229, 1059420275, 1950337528, 318704270, 823695035, -1067956381, 913177753, -2036153644, 1352937420, 130786065, 1550589267, -1610317607, -807758764, 8897119, 1447459144, 1897200048, -1330740472, 531247217, -418564960, 528894815, 1113548303, -196677788, -1354007432, 630524338, -614932100, -1613401939, -1250990485, -356040196, -1743871227, -1290013276, -1979418413, 1458817834, -675466393, 1974821034};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1272826636, -1115109335, 528182947, 528182947, -907791229, -907791229, 1059420275, 1059420275, 823695035, 318704270, 823695035, -1067956381, 913177753, 130786065, 1352937420, 130786065, -807758764, -807758764, 8897119, 1447459144, 1447459144, 531247217, -418564960, 528894815, 528894815, 528894815, -196677788, -196677788, -614932100, -614932100, -1250990485, -1250990485, -1250990485, -1290013276, -1743871227, -1290013276, -675466393, 1458817834, 1974821034};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> data = {-2053604663, -551595205, -1655155303, 362902, -413368671, -890756039, 1158643832, -907604617, 1324979280, -1426252219, 1607437680, 315986613, 1205932029, -1008778475, -81048585, 180458756, 1522125398, 402527157, -1363741003, -763540653, -1854729372, -1120108480, 713497642, -2097810958, 2119019780, -134638886, 1591501409, 1375045874, -1154704869, -869824881};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2053604663, -1655155303, -551595205, -413368671, -413368671, -413368671, -890756039, 1158643832, -907604617, 1324979280, 315986613, 1205932029, 315986613, -81048585, -81048585, 180458756, 402527157, 402527157, -763540653, -1363741003, -1120108480, -1120108480, -1120108480, 713497642, -134638886, 1591501409, 1375045874, 1375045874, -869824881, -869824881};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> data = {-103245536, -481574526, 390101090, 1483949949, -1669530543, -575759986, -1948181085, 647134428, -1635797086, -1015656233, -506392071, -307493504, -2073142964, -1433230358, -2116246320, 1335800242, 1187152954, -842993622, -600271058, -1903381945, 1729495989, 713890387, 444605999, 79072632, -2118974525, -2082872651};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-103245536, -103245536, 390101090, 390101090, -575759986, -1669530543, -575759986, -1635797086, -1015656233, -1015656233, -506392071, -506392071, -1433230358, -2073142964, -1433230358, 1187152954, 1187152954, -600271058, -842993622, -600271058, 713890387, 713890387, 444605999, 79072632, -2082872651, -2082872651};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> data = {222233311, 1670353921, -2025425342, -1749579873, 1386157619, -1059632542, 109557709, -115847761, 847591558, -879656886, 1485799311, 1161444427, 1093403340, -2087007710, 1543543715, -165520453, 876055427, 1402465646};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {222233311, 222233311, -1749579873, -1749579873, -1059632542, 109557709, -115847761, 109557709, -115847761, 847591558, 1161444427, 1161444427, 1093403340, 1093403340, -165520453, 876055427, 876055427, 1402465646};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> data = {2041781549, 1933882198, 100624560, 930300821, -500694400, -1831429576, -1661529312, 2065999347, 1563828442, 362158536, -98678002, -1864317256, -1012380961};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2041781549, 1933882198, 930300821, 100624560, -500694400, -1661529312, -1661529312, 1563828442, 1563828442, 362158536, -98678002, -1012380961, -1012380961};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> data = {1331710306, 992346406, 226009201, 1489487759, -352094754, -129915329, -1052633849, -52050269, 27220279, -554866183, -18092501, 1907475419, 1081498507, 1572962319, 1015777165, -80559394, -37390717, 1370384155, 459037225, 1785417111, 683594732, -1960678948, -72073942, 1957366546, -2069026605, -1624691052, -808789537};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1331710306, 992346406, 992346406, 226009201, -129915329, -352094754, -129915329, -52050269, -52050269, -18092501, -18092501, 1081498507, 1572962319, 1081498507, 1015777165, -37390717, -37390717, 459037225, 1370384155, 683594732, 683594732, -72073942, -72073942, -72073942, -1624691052, -1624691052, -808789537};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> data = {-1847865848, 1669633954, -906598642, -132549882, -1733660816, 243977496, -353262832, -63771538, -1742163749, 1883235402, 1140260444, 1084632945, 914517230, -72076578, -839217167, 17712765, -1158508545, -626406784, -908545201, 801466552, -220585455, 743696764, 315920073, 1939187211, -500512657, 1873171616};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1847865848, -906598642, -132549882, -906598642, -132549882, -353262832, -63771538, -353262832, -63771538, 1140260444, 1140260444, 1084632945, 914517230, -72076578, -72076578, -839217167, -626406784, -908545201, -626406784, -220585455, 743696764, 315920073, 743696764, 315920073, 1873171616, 1873171616};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> data = {1368853775, -293383248, 1978948462, -1431007163, -1276697391, -190203935, -260504427, -1355810539, 1943375105, 838323235, -87975793, 753867202, -499597900, 1498242487, 101562109, 108078374, 1756570402, -1237086472, 102141308, 675410158, -1022390495, 159548376, -198055691, 585928068, 515685395, 1042947058, -311681526, -1716050985, 1478355985, -1924163736, -603375589, 850176315, 1522908597, 2105797760, 921284891, 503509238, 170089502, 205607149, -1592350694, -670900550};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1368853775, 1368853775, -293383248, -1276697391, -1276697391, -260504427, -260504427, -260504427, 838323235, 838323235, 753867202, -87975793, 753867202, 101562109, 108078374, 108078374, 108078374, 102141308, 102141308, 102141308, 159548376, -198055691, 159548376, 515685395, 585928068, 515685395, -311681526, -311681526, -1716050985, -603375589, -603375589, 850176315, 1522908597, 1522908597, 921284891, 503509238, 205607149, 170089502, -670900550, -670900550};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> data = {283970151, -843152440, -1005613302};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {283970151, -843152440, -1005613302};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> data = {1907296123, 2001653077, 413903584, 1055645611, -396588520, 1062600022, 1597714455, -837078117, 1190819637, 1130866821, -1543376127, -831333609, -1188261628, 1266708566};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1907296123, 1907296123, 1055645611, 413903584, 1055645611, 1062600022, 1062600022, 1190819637, 1130866821, 1130866821, -831333609, -1188261628, -831333609, 1266708566};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> data = {-1388092430, 1398381325};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1388092430, 1398381325};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> data = {-1710531215, -517018928, -894134965, 1214587929, 851143644, 1657621810, 1996477688, -851243634, -238457726, -1642112081, 1093800307, -734840030, -1882268071, -1005547232, -1193953018, 1607921540, -669890390, -972984417, 870480392, 2016019208, -584960740, -380972181, -1152267131, -1460846999, 974084021, 1004409727, -1482610405, 1460886255, -2061543838, 1482541317, 1838368955, 1692249948, 1214271544, 1150240297, 250969656, -1742243005, 482528330, -1727542355, -1906829147, 381844418, -2124031740, -2128110171, -353137864};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1710531215, -894134965, -517018928, 851143644, 1214587929, 1657621810, 1657621810, -238457726, -851243634, -238457726, -734840030, -734840030, -1005547232, -1193953018, -1005547232, -669890390, -669890390, -669890390, 870480392, 870480392, -380972181, -584960740, -1152267131, -1152267131, 974084021, 974084021, 1004409727, -1482610405, 1460886255, 1482541317, 1692249948, 1692249948, 1214271544, 1150240297, 250969656, 250969656, -1727542355, -1727542355, -1727542355, -1906829147, -2124031740, -2124031740, -353137864};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> data = {1236574253, -476693691};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1236574253, -476693691};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> data = {-846767274, 1628746928, 1130946740, 1733983122, 536392403, -1606486547, -2125497324, 819646312, -356905438, 1779752886, -165293276, -175042800, 31020837, -552803206, 756826352, 554430735, -1498841853, 826222257, 374268832, -1652636060, -1143478393, 724200051, 888290790, -1008092176, 1029613976};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-846767274, 1130946740, 1628746928, 1130946740, 536392403, -1606486547, -1606486547, -356905438, 819646312, -165293276, -165293276, -165293276, -175042800, 31020837, 554430735, 554430735, 554430735, 374268832, 374268832, -1143478393, -1143478393, 724200051, 724200051, 888290790, 1029613976};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> data = {-168994262, -312367816, -479236432, -404474, 59326806, 1574888185, -1094031988, 1694556308, 140120431, 142865883, 453975671, 996838877, 1955840796, 1169647540, 570923330, 1274615014, -100534070, 1908505113, 430523760, 977465401};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-168994262, -312367816, -312367816, -404474, 59326806, 59326806, 1574888185, 140120431, 142865883, 142865883, 453975671, 996838877, 1169647540, 1169647540, 1169647540, 570923330, 1274615014, 430523760, 977465401, 977465401};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> data = {161495012, 2080556936, -1099866628, -26101359, 418202650, -1369925277, 844024286, -1706410651, -379502088, 2058570612, 227970708, -1816679572, 785933412, 942851645, -1128416563, 410052160, -1974182532, -845739388, 1821023623, 1829645928, 2107194802, -1578900837, -1623264151, -593953093, -550898933, 413453469, 681632148, -1347451696, 128705416, 880950626, 1003455927};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {161495012, 161495012, -26101359, -26101359, -26101359, 418202650, -1369925277, -379502088, -379502088, 227970708, 227970708, 227970708, 785933412, 785933412, 410052160, -1128416563, -845739388, -845739388, 1821023623, 1829645928, 1829645928, -1578900837, -1578900837, -593953093, -550898933, 413453469, 413453469, 128705416, 128705416, 880950626, 1003455927};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> data = {1553935027, 1537257907, 986048931, -371819514, -894524355, 2136068632, -1409398905, -1598003391, -1590387497, 1728900759, 1963885037, 1204740803};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1553935027, 1537257907, 986048931, -371819514, -371819514, -894524355, -1409398905, -1590387497, -1590387497, 1728900759, 1728900759, 1204740803};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> data = {-21655724, 89119053, -1170420370, 118956494, -420369252, -580077904, 2030811749, 157123781, -2143038012, 1818400051, -1947978742, 1422415857, -861442250, 1946907833, 2119724782};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-21655724, -21655724, 89119053, -420369252, -420369252, -420369252, 157123781, 157123781, 157123781, -1947978742, 1422415857, -861442250, 1422415857, 1946907833, 2119724782};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> data = {2076636719, 1821125206, -1115017011, -743346738, 403348771, 875989238, 1773606714, 817980522, -1891870552, 2138962927, -1074728167, -1311929550, -120870726, -677541316, 177022001, -1742956593, -426019051, 1338930973, 944050064, -45396530};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2076636719, 1821125206, -743346738, -743346738, 403348771, 875989238, 875989238, 817980522, 817980522, -1074728167, -1074728167, -1074728167, -677541316, -120870726, -677541316, -426019051, -426019051, 944050064, 944050064, -45396530};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> data = {1023156994, -83992696, 787247740, -581521878, 2093284108, 85971679, 955465081, -783481274};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1023156994, 787247740, -83992696, 787247740, 85971679, 955465081, 85971679, -783481274};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> data = {473676738, -641088845, 1205830631, -397923267, -1258940344, -2039856245, -1281137620, -1760544552, -1792763404, 1926764055, -361575116, -281251368, 731419523, -2044301884, -952054021, -1960049459, -1067695611, 640722654, -160999300, -253492504, 802266450, -1717943443, -1984520659, 930780926, 676439264, 1912217062, 212877632, 1076010621, 546653352, -1709422721, 1237691155, 95226826};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {473676738, 473676738, -397923267, -397923267, -1258940344, -1281137620, -1760544552, -1760544552, -1760544552, -361575116, -281251368, -281251368, -281251368, -952054021, -1960049459, -1067695611, -1067695611, -160999300, -160999300, -160999300, -253492504, -1717943443, -1717943443, 676439264, 930780926, 676439264, 1076010621, 546653352, 546653352, 546653352, 95226826, 95226826};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> data = {-1350173658, 442274731, -2111628016, 671483566, -1174811244, -900870046, -1853842559, -2006860292, -225847003, -1621216223, -751392107, -894478206, -1120611703, 1160641923, -661823993, 924104629, 1447959905, 1167356268, 190260909, 1650928709};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1350173658, -1350173658, 442274731, -1174811244, -900870046, -1174811244, -1853842559, -1853842559, -1621216223, -751392107, -894478206, -894478206, -894478206, -661823993, 924104629, 924104629, 1167356268, 1167356268, 1167356268, 1650928709};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> data = {-2009155010, 1053014520, -1528170021, 537165532, 1093239661, 1388075862, -1595647625, -215303572, -593090884, 949832754, 1571367649, 349731342, 13451624, -1400130440, 712835323, -2109294718, 752126315, 520292549, 1408404661, 1566434064, 1484496006, -1164863856, -1647525959, -1037821689, -1942010688, 82231622, -1976770141, -676276409, 687186016, 540345063, -1683381594, 438178393, 1380284203};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2009155010, -1528170021, 537165532, 537165532, 1093239661, 1093239661, -215303572, -593090884, -215303572, 949832754, 949832754, 349731342, 13451624, 13451624, -1400130440, 712835323, 520292549, 752126315, 1408404661, 1484496006, 1484496006, -1164863856, -1164863856, -1647525959, -1037821689, -1942010688, -676276409, -676276409, 540345063, 540345063, 438178393, 438178393, 1380284203};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> data = {-1164381981, 2024556067, -816899768, -1234450627, 14077639, 1215494163, -814827052, 353412259, -177540255, 538896410, 406479252, -534926885, 994205017, -1122250396, -318272112, 215083618, 916928872, -80417217, 2016797368, 519317100, 1753612800, -1674086419, 2044515108, -1339309147, 2114579767, 495698781, -480417623, -1641618172, 1006259592, -239438094, 2006326176, 56048186, -553196432, 1234777768, 100631958, -978630531, 23639798, -739395781};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1164381981, -816899768, -816899768, -816899768, 14077639, 14077639, 353412259, -177540255, 353412259, 406479252, 406479252, 406479252, -534926885, -318272112, -318272112, 215083618, 215083618, 916928872, 519317100, 1753612800, 519317100, 1753612800, -1339309147, 2044515108, 495698781, 495698781, -480417623, -480417623, -239438094, 1006259592, 56048186, 56048186, 56048186, 100631958, 100631958, 23639798, -739395781, -739395781};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> data = {896664219, -149424773};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {896664219, -149424773};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> data = {1512055594, 1064064260, -1370575280, 481667101, 1630778383, -1203497837, -1688997821, 617774673};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1512055594, 1064064260, 481667101, 481667101, 481667101, -1203497837, -1203497837, 617774673};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> data = {528953926, 1186991842, 1593808134, -431365921, -530782903, -271508351, 1273312877, -1883121235, -1440989465, -1499388216, -960154765, -2043922683, 622495728, -1296741605, -555898659, 49278794, -210434692, 728512648, -829468487, -415756138, 1016366574, -1770138836, -452930120, -758895707, -177530810, -1914669781, 1798432784, -921621615, -2137376665, 616782907, -311772650, 1332539752, -1771818028, -1001963902, -449682824, -2090474732, -13532815, -791304962, 939046781, -665519124, -1136389974, 81455484, -1226591193, -424658184, 503172448, -1735290773, 480560954};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {528953926, 1186991842, 1186991842, -431365921, -431365921, -271508351, -271508351, -1440989465, -1499388216, -1440989465, -1499388216, -960154765, -1296741605, -555898659, -555898659, -210434692, 49278794, -210434692, -415756138, -415756138, -415756138, -452930120, -758895707, -452930120, -758895707, -177530810, -921621615, -921621615, -921621615, -311772650, 616782907, -311772650, -1001963902, -1001963902, -1001963902, -449682824, -791304962, -13532815, -665519124, -665519124, -665519124, -1136389974, -424658184, -424658184, -424658184, 480560954, 480560954};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> data = {864189853, 482139747, 1041947288, -672915682, -2140775912, -1113528295, 683701226, 1354731725, 599827438, -224354436, 393851857};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {864189853, 864189853, 482139747, -672915682, -1113528295, -1113528295, 683701226, 683701226, 599827438, 393851857, 393851857};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> data = {-1860244563, 2050630420, 411459623};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1860244563, 411459623, 411459623};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> data = {-167040817, -236853264, -1596935004, 2133563905, 1812822855, 1116707570, 318902908, 1542576697, -544385631, -1931406791, 1309444353, 163611065, 1580008989, 1465758435, -906959125, 1532469714, 986315111, 527849504, 2124388246, -212054558, 434489242, -232042389, -963968042, -601481117};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-167040817, -236853264, -236853264, 1812822855, 1812822855, 1116707570, 1116707570, 318902908, -544385631, -544385631, 163611065, 1309444353, 1465758435, 1465758435, 1465758435, 986315111, 986315111, 986315111, 527849504, 434489242, -212054558, -232042389, -601481117, -601481117};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> data = {-369863576, 1736286372, 642423721, -1223148232, -1794449890, -1152934843, 1608173791, 1042830080, -782056451, -891758229, 1925717516, 442195668};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-369863576, 642423721, 642423721, -1223148232, -1223148232, -1152934843, 1042830080, 1042830080, -782056451, -782056451, 442195668, 442195668};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> data = {1};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> data = {432296535, 1983848899, -434724194, 135703525, -1146336142, -680568092, -1183352724, 1337550909, -1597342716, -1901441857, 1726722019, -558651015, 649930787, 1889036519, 1752815826, 930647381, -852547667, 2028345278, -1835531493, -1040566300, -1566043783, -1282411107, -1123988603, 2132078516, -1169614369, -523503536, 1466102514, -2003903121, -779001645, 1919742042, 1210980485, -9273881, 1033032137, -1474003783, 296280591, 920184999, -1235054743, -1329769514, -1727085135};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {432296535, 432296535, 135703525, -434724194, -680568092, -1146336142, -680568092, -1183352724, -1597342716, -1597342716, -558651015, 649930787, 649930787, 1752815826, 1752815826, 930647381, 930647381, -852547667, -1040566300, -1566043783, -1282411107, -1282411107, -1123988603, -1123988603, -523503536, -523503536, -523503536, -779001645, -779001645, 1210980485, 1210980485, 1033032137, -9273881, 296280591, 296280591, 296280591, -1235054743, -1329769514, -1727085135};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> data = {2147483647};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2147483647};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> data = {1, 5, 2};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> data = {7, 7, 8};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 8};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> data = {12};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> data = {0};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> data = {-2147483648, 2147483647};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2147483648, 2147483647};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> data = {2, 1, 2};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> data = {1, 4, 3, 2, 5};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 3, 3, 5};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> data = {2, 3, 1};
    NoisySensor* pObj = new NoisySensor();
    clock_t start = clock();
    vector<int> result = pObj->medianFilter(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7502828&rd=6534&pm=4019
********************************************************************************
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;
typedef  vector<int> VI;        typedef  vector<vector<int> > VVI;
typedef  vector<string> VS;     typedef  vector<vector<string> > VVS;
typedef  set<int>  SI;  typedef  set<string>  SS;
typedef  long long i64; typedef  unsigned long long u64;
typedef  istringstream ISS;     typedef  ostringstream  OSS;
 
int gcd(int a, int b) {
        if(a > b) return gcd(b,a);
        if(a == 0) return b;
        else    return gcd(b%a, a);
}
 
class NoisySensor{
public:
        VI medianFilter(VI d) {
                if(d.size() < 3)
                        return d;
                VI res = d;
                for(int i=1; i < d.size()-1; i++){
                        VI tmp(3,0);
                        tmp[0] = d[i-1];
                        tmp[1] = d[i];
                        tmp[2] = d[i+1];
                        std::sort(tmp.begin(), tmp.end());
                        res[i] = tmp[1];
                }
                return res;
        }
};

********************************************************************************
*******************************************************************************/