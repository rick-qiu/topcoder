/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9834
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

class RoadsOfKingdom {
public:
    double getProbability(vector<string> roads);
};

double RoadsOfKingdom::getProbability(vector<string> roads) {
    double ret;
    return ret;
}


int test0() {
    vector<string> roads = {"04", "40"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> roads = {"08", "80"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> roads = {"00", "00"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> roads = {"088", "808", "880"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> roads = {"044", "404", "440"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.375;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> roads = {"002108622061", "002221002016", "220216221000", "122020022027", "021202206178", "816020112601", "602021001122", "202201000016", "221262100220", "000016102020", "610270212202", "160781260020"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0013411192609836136;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> roads = {"000510780", "000108000", "000700208", "517003060", "100006001", "080360000", "702000000", "800600000", "008010000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10527242720127106;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> roads = {"070110100", "701008011", "010080083", "100021008", "108200010", "080100008", "100000072", "018010708", "013808280"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10478835854883073;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> roads = {"0160", "1080", "6807", "0070"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6015625;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> roads = {"00828", "00701", "87000", "20007", "81070"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.537109375;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> roads = {"070288000001211", "700021082220010", "000108003008000", "201001010181800", "820001011830008", "818110111101270", "000001020100108", "080111200101001", "023011000010880", "020181110010021", "020830001100022", "108101010000010", "200802108000000", "110007008221000", "100080810120000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 8.353718030909834E-4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> roads = {"002020801010", "000008702061", "200300810110", "003072270008", "200700000015", "080200008002", "878200001008", "001700000810", "120008100021", "001000080002", "161010012000", "010852801200"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007275944867937785;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> roads = {"012017010880608", "100220800012180", "200000310000802", "020001102208001", "120000112008010", "700100102001020", "083111010001100", "101010100072100", "000222000218862", "800200002010212", "810000071100011", "020881128000012", "618000118200001", "080012006111008", "802100002212180"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8060165337908392E-4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> roads = {"07828", "70000", "80080", "20802", "80020"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4921875;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> roads = {"02116081025008", "20000720101201", "10060100220000", "10602720070002", "60020111021570", "07171010042002", "82021100110001", "10001000801801", "01200018008020", "20272410002000", "51001201820000", "02005008000000", "00007000200001", "81020211000010"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004774762053226047;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> roads = {"028100026110", "200008004016", "800080000080", "100010020800", "008100010128", "080000010700", "000000000070", "200211001106", "640000010800", "100817018001", "118020700000", "060080060100"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.020535913861762067;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> roads = {"080108", "800302", "000171", "131020", "007208", "821080"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.26087379455566406;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> roads = {"008003072010", "001010072010", "810801020060", "008010212001", "010100781800", "301000110108", "000271000001", "772181006030", "220210060008", "000081000003", "116000030001", "000108108310"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.016168641512342725;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> roads = {"00030005300", "00024700018", "00080082000", "32800112061", "04000612011", "07016000821", "00811000210", "50222000252", "30000822012", "01061215100", "08011102200"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.025005865272538192;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> roads = {"0610100010021", "6010083002111", "1101001100713", "0010000080100", "1000031000820", "0800301000772", "0310110780200", "0010007010010", "1008008108000", "0200000080067", "0171872000000", "2110270106000", "1130020007000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01300613145177568;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> roads = {"0000000100080", "0010180060370", "0102120000051", "0020120080021", "0111010102035", "0822102008270", "0000020200008", "1000102050828", "0608000502220", "0000280020200", "0300020822070", "8752370220700", "0011508800000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 8.917997675803906E-4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> roads = {"0200112811170", "2010010800020", "0102010000006", "0020022180802", "1000070110210", "1112700017820", "2002000226081", "8801102010000", "1008112102010", "1000076020811", "1008280008025", "7200128011202", "0062001001520"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 3.928878527314567E-4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> roads = {"0011018", "0000118", "1000881", "1000006", "0180030", "1180306", "8816060"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.20464837551116943;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> roads = {"011000000108208", "101020600501200", "110001812002081", "000008202230110", "020007120220010", "001870002002000", "068210020000813", "001020201220012", "002202010812000", "150220028082000", "000320021802600", "812002002220000", "220100800060020", "008110110000201", "801000320000010"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0026568264147685174;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> roads = {"0231010602", "2013801002", "3100188010", "1300112810", "0811012181", "1081100000", "0182200888", "6008108010", "0011808101", "2200108010"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01626888166257883;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> roads = {"08170", "80818", "18002", "71000", "08200"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5126953125;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> roads = {"0701", "7071", "0708", "1180"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.622314453125;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> roads = {"061", "606", "160"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5390625;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> roads = {"01006312002", "10180012802", "01081007000", "08802101000", "60120700101", "30017000008", "11000001018", "22710010280", "08001002002", "00000018006", "22001880260"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03481324419362492;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> roads = {"0010201000500010", "0010001021118000", "1100010110721110", "0000810010001301", "2008007200707008", "0011000108000010", "1100700310001000", "0010213002010060", "0211001008006000", "0100080280102110", "5170700001000211", "0120000100000600", "0811701062000811", "0013000001268000", "1010010601101006", "0001800000101060"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0024469988865552564;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> roads = {"00200201180", "00600211061", "26000162810", "00000017300", "00000060210", "22100001247", "01616000021", "11270100851", "10832208001", "86101425001", "01000711110"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012445193211079914;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> roads = {"0022050000210260", "0000800002100000", "2008200400030860", "2080007100070030", "0820060271830800", "5000600800001220", "0007000210002220", "0041282020000000", "0000701200103003", "0200100000104828", "2100800011000030", "1037300000003010", "0000012034030006", "2080822008000001", "6063022002310000", "0000000038006100"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0374768605829596E-4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> roads = {"00807001110000", "00002830008020", "80024060028080", "00200002007001", "72400001112001", "08000010282000", "03600101110011", "10021010108006", "10001211004810", "10201810000000", "08872208400110", "00000000801010", "02800010101100", "00011016000000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0030906973824006076;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> roads = {"07808", "70100", "81010", "00108", "80080"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.68359375;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> roads = {"0200282058001210", "2002007000002060", "0000007010001102", "0200017731000010", "2000000200000080", "8001001600000028", "2777010200002800", "0007262020027021", "5013000202077101", "8001000020102200", "0000000001022008", "0000000270201002", "1210002772210280", "2010008012002000", "1601820200008000", "0020080110820000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 2.803479093095758E-4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> roads = {"072007200811", "701010201100", "210010021227", "000080221108", "011800100150", "700000082000", "220210010080", "002208102060", "011102020080", "812110000017", "102050868101", "107800000710"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009109796913593496;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> roads = {"011080000223110", "100011601100180", "100220010180020", "002012100007021", "812100501116180", "010200616012008", "060156000600000", "001001006200201", "010016060801011", "211010628000010", "208011000002081", "300762001020832", "110010020008020", "182280001183200", "000108011012000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 3.08589175109348E-4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> roads = {"071002", "707670", "170122", "061008", "072000", "202800"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25832855701446533;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> roads = {"08008100220", "80050067000", "00001080010", "05002080218", "80120000000", "10000081081", "06880800802", "07000100202", "20020082020", "20110800200", "00080122000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.027459338983362613;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> roads = {"00600", "00780", "67002", "08006", "00260"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.427734375;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> roads = {"070834", "700300", "000871", "838002", "307002", "401220"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16260719299316406;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> roads = {"08270282", "80020002", "20000710", "72000100", "00000080", "20710088", "80108801", "22000810"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13883891701698303;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> roads = {"0880013", "8020007", "8201080", "0010080", "0000072", "1088700", "3700200"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.24421119689941406;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> roads = {"0808080", "8032008", "0302081", "8220610", "0006000", "8081000", "0810000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.201873779296875;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> roads = {"0110008200110", "1001080020102", "1000007701800", "0100000808080", "0000000270025", "0800000002110", "8070000220000", "2078202000011", "0200702008400", "0018020080000", "1180010040012", "1008210100106", "0200500100260"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009568156090532205;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> roads = {"087062001", "801400701", "710200080", "042028020", "600200003", "200800178", "070001000", "008207000", "110038000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07263769695418887;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> roads = {"00108", "00607", "16080", "00800", "87000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.61328125;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> roads = {"0000180080", "0021000870", "0200280001", "0100110500", "1021000721", "8081000120", "0000000026", "0805710017", "8700222100", "0010106700"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.056864038112145465;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> roads = {"08", "80"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> roads = {"086", "801", "610"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6875;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> roads = {"0068000010", "0008010000", "6000840008", "8800181120", "0081026001", "0148200000", "0001600210", "0001002080", "1002001806", "0080100060"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09692986274603754;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> roads = {"0108220507", "1006010220", "0001207000", "8610226080", "2022028800", "2102200720", "0076800211", "5200872021", "0208021200", "7000001100"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01185741138735115;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> roads = {"00800080800", "00003800002", "80020608007", "00208007112", "03080001021", "08600018071", "80000101000", "00871810002", "80010000002", "00012700000", "02721102200"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012527380791148346;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> roads = {"081120110220310", "806002010000170", "160312820000000", "103000001027068", "201008001801018", "022080108260102", "108001001000220", "112000005200001", "000118150021100", "200082020000030", "200206002000600", "000710001000021", "310001201060014", "170610200302100", "000882010001400"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 8.466174283526495E-4;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> roads = {"018801000010", "100728060000", "800100001080", "871023008000", "020200001208", "180300010200", "000000027843", "060001200010", "001810700207", "000022802010", "108000410102", "000080307020"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.011145313352352528;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> roads = {"08", "80"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> roads = {"02828018", "20088010", "80011810", "28101111", "88110060", "00810021", "11116201", "80010110"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0982679764479144;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> roads = {"0073201400", "0071006088", "7700100010", "3100201280", "2012011800", "0000100620", "1601100200", "4002862077", "0818020701", "0800000710"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006760675107822134;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> roads = {"08", "80"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> roads = {"00000380020001", "00020000000082", "00010600020082", "02101008300180", "00010871200100", "30608020801820", "80007203161021", "00081030000810", "00032810018010", "20200060100120", "00000110800200", "00011808012000", "08880221120008", "12200010000080"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 5.419235857831317E-4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> roads = {"08013", "80800", "08018", "10108", "30880"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.478515625;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> roads = {"062003018000017", "600180001282000", "200010060163062", "010000050800610", "081002130002010", "300020140730080", "000011000871001", "106534000060100", "810000000000000", "021807800000001", "086003760001100", "023020100010708", "000600010017000", "106118000000002", "702000100108020"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 3.10171232247634E-4;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> roads = {"021018001010", "202011102701", "120806021220", "008080883212", "110800120001", "816000061211", "010810002113", "002826000877", "121301200801", "072202188002", "102101170003", "010211371230"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 4.540553674793519E-4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> roads = {"0182020010", "1010722008", "8100008188", "2000080000", "0700000700", "2208000601", "0280000001", "0010760010", "1080000101", "0880011010"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11363424997307447;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> roads = {"080030870", "801220118", "010108102", "021000008", "320001801", "008010218", "811082010", "710001102", "082818020"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.043265042451707814;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> roads = {"03182", "30088", "10080", "88802", "28020"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3076171875;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> roads = {"08", "80"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> roads = {"00880", "00807", "88018", "80101", "07810"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.095703125;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> roads = {"008300000211", "001000800280", "810002030800", "300006000020", "000000041820", "002600220087", "080002030600", "003042300802", "000010000801", "228080688010", "180228000108", "100007021080"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.001093718638336405;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> roads = {"0080", "0088", "8801", "0810"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.875;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> roads = {"0000000008271", "0001031070010", "0000000700810", "0100813202210", "0008026000002", "0301208020120", "0103680120602", "0072001000720", "0700022008007", "8002000080001", "2082016700062", "7111020200602", "1000202071220"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002199841725814541;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> roads = {"000801010", "008061168", "080020110", "800010028", "062104610", "110040000", "011060000", "161210000", "080800000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0983093302056659;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> roads = {"0083", "0008", "8008", "3880"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.625;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> roads = {"00200280227007", "00200000601028", "22082801000008", "00800000022100", "00200207821208", "20802002012803", "80000000220000", "00107200102120", "26008021002002", "20022120000370", "71021202200028", "00012801030021", "02000002072208", "78808300208180"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7831943073089652E-5;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> roads = {"000200030070000", "001308088220030", "010020820200221", "230080000200000", "002800307081020", "080000313030010", "008033000182708", "382001000110000", "080073000100002", "022200111001281", "720083810008070", "000010200180210", "002000700202002", "032021000871000", "001000802100200"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0264017528131878E-4;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> roads = {"0700078007", "7000210070", "0000812060", "0000812010", "0288001710", "7111000002", "8022100002", "0000700001", "0761100000", "7000022100"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09535348850681657;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> roads = {"08", "80"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> roads = {"080000", "800818", "000820", "088010", "012108", "080080"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.57421875;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> roads = {"0008000", "0008670", "0006701", "8860001", "0670000", "0700008", "0011080"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2854461669921875;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> roads = {"0801731071101", "8010002820600", "0100110018100", "1000050200000", "7010002018008", "3015000700111", "1200200400182", "0802074033000", "7210100300220", "1080800300040", "1610011020000", "0000018024008", "1000812000080"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0013687352641443256;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> roads = {"00100017114", "00107020020", "11060221800", "00600081060", "07000818408", "00208001000", "12281000000", "70118100021", "10804000000", "12060002001", "40008001010"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.048030336065062185;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> roads = {"08308100", "80171011", "31000000", "07000082", "81000800", "10008000", "01080006", "01020060"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14124155044555664;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> roads = {"0800", "8056", "0506", "0660"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4453125;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> roads = {"0101001180400", "1000800830001", "0001001026180", "1010142382003", "0801003086400", "0004000811120", "1012300008311", "1803080005000", "8328810000040", "0062618500718", "4010413007002", "0080021041000", "0103001008200"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 3.023084592532742E-4;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> roads = {"00200040806", "00003003038", "20000038800", "00000700110", "03000610060", "00076076001", "40301700010", "03800600200", "80810002010", "03016010100", "68000100000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.033499600401984964;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> roads = {"0180113", "1028718", "8201006", "0810180", "1701011", "1108102", "3860120"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12867871756316163;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> roads = {"001012303008010", "001070002401000", "110101208000168", "001022020301711", "170206131872001", "201260101002201", "302011070800306", "000230701011200", "328011010204811", "040380802000231", "000070010000000", "810122014000710", "001702328207000", "106100001301000", "008111601100000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 9.674293578236317E-5;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> roads = {"08188111", "80801070", "18011000", "80100110", "81100400", "10014007", "17010000", "10000700"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1742766122915782;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> roads = {"060088281012", "601011002830", "010280001000", "002000008008", "818001010000", "810010008070", "200000080103", "800010801200", "121808010100", "080000121000", "130007000000", "200800300000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.025476845448206276;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> roads = {"077", "700", "700"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.765625;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> roads = {"020002080000082", "201067120110034", "010280018026620", "002010800000012", "068100000000002", "270000200111000", "010802040040600", "821000402210012", "008000020032003", "010001020001820", "012001413003000", "006001002130210", "006000600802081", "832100010201803", "240220023000130"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 8.636784085030727E-4;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> roads = {"0000800012", "0088270110", "0800012105", "0800008011", "8200081110", "0710801708", "0028110410", "0110174081", "1101101800", "2051080100"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.022187137119748873;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> roads = {"0082100", "0000063", "8000027", "2000008", "1000080", "0620800", "0378000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2559814453125;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> roads = {"0200860081020020", "2000010001700080", "0000213803208201", "0000000020800000", "8020011008211000", "6110100160002001", "0030100620061120", "0080016008101000", "8002062002002210", "1130800820112210", "0728200101027801", "2000106001200001", "0080121122700001", "0020001022800000", "2800002011000000", "0010010000111000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0015748404159882E-4;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> roads = {"082830260030", "801100101006", "210600103388", "816077801200", "300701100000", "000710200010", "211812038301", "600000300820", "013100800421", "003200384002", "308001022000", "068000101200"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 8.773815697570304E-4;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> roads = {"021781", "200820", "100180", "781002", "828006", "100260"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.24901771545410156;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> roads = {"0210020210080220", "2008008021003281", "1000000180800000", "0800000012010021", "0000022018010382", "2000200012700021", "0800200001368020", "2010000070101206", "1281110701001870", "0102821010001020", "0080073100004100", "8001106000000310", "0300008111400200", "2200300280132002", "2802822072010001", "0101210600000210"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 6.302673334043435E-5;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> roads = {"0040706580000", "0007021070200", "4001270102702", "0710403010770", "7024001200007", "0270000020020", "6103100230020", "5010202008111", "8701023002000", "0020000820000", "0277000100000", "0007022100000", "0020700100000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005934082560854132;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> roads = {"00040000000200", "00202100010086", "02000118000102", "40002208712030", "02020061000800", "01120022082100", "00106200001201", "00881200041101", "00070000010007", "01010804101800", "00020211010881", "20108121088000", "08030000008002", "06200011701020"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002178153032768257;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> roads = {"0218020011", "2008000820", "1000761420", "8800100150", "0071018000", "2060100070", "0010800021", "0841000008", "1225072000", "1000001800"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07006259806865955;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> roads = {"0022101007200", "0000000110080", "2001000071286", "2010122031802", "1001030030304", "0002302300881", "1002020210080", "0100032008128", "0173301001100", "7011000810001", "2028380110000", "0880088200000", "0062410801000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0025467298881316283;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> roads = {"000020120082", "000030062086", "000002001820", "000062808000", "230600011000", "002200100028", "100801000200", "260010000200", "021810000810", "008000228007", "882002001000", "260008000700"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02575523171862315;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> roads = {"0622100102300020", "6070000107208008", "2700207010110410", "2000188001010820", "1021032008000021", "0008300013001000", "0078200200000201", "1100002007000011", "0010010000600000", "2701830700518172", "3210000065000200", "0011000001002081", "0800010008020100", "0048002001201000", "2012200107080000", "0800101102010000"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 5.519032471358341E-5;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> roads = {"001080", "008211", "180060", "020072", "816708", "010280"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.33832550048828125;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> roads = {"01070", "10060", "00085", "76801", "00510"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3641357421875;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> roads = {"00088", "00026", "00082", "82800", "86200"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.46875;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> roads = {"0800000011111111", "8080000011111111", "0808000011111111", "0080800011111111", "0008080011111111", "0000808011111111", "0000080811111111", "0000008011111111", "1111111108000000", "1111111180800000", "1111111108080000", "1111111100808000", "1111111100080800", "1111111100008080", "1111111100000808", "1111111100000080"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0017766313749683436;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> roads = {"0123456712345671", "1034567123456712", "2305671234567123", "3450712345671234", "4567023456712345", "5671204567123456", "6712340671234567", "7123456012345671", "1234567103456712", "2345671230567123", "3456712345071234", "4567123456702345", "5671234567120456", "6712345671234067", "7123456712345601", "1234567123456710"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8790095458511038E-24;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> roads = {"0123453153111111", "1076544254111111", "2703215355111111", "3630342456111111", "4523061551111111", "5414607652111111", "3452170753111111", "1234567054111111", "5555555505111111", "3456123450111111", "1111111111011111", "1111111111101111", "1111111111110111", "1111111111111011", "1111111111111101", "1111111111111110"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 4.615031096841837E-9;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> roads = {"0775247327136267", "7067363217423364", "7601555513716436", "5710214257423151", "2352012341531613", "4651107562124775", "7354270554324131", "3252355072455152", "2115465706421217", "7737124260445116", "1474513444037252", "3212322524306226", "6363144515760326", "2341671121223037", "6635173511522302", "7461351276266720"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0804729917391314E-22;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> roads = {"0451462361141351", "4013276336567435", "5106231166623777", "1360216415366366", "4222026541635321", "6731206777424663", "2616660747377353", "3314577046122371", "6361474402321353", "1665177620726725", "1563643137052662", "4626327222503163", "1736547216230531", "3473363337615033", "5376265752663306", "1576133135231360"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 5.734639778483716E-25;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> roads = {"0000000000000008", "0080000000000000", "0808500000000000", "0080800000000000", "0058080000000000", "0000808000000000", "0000080800000000", "0000008080000000", "0000000808000000", "0000000080800000", "0000000008080000", "0000000000808000", "0000000000080803", "0000000000008082", "0000000000000808", "8000000000003280"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.17578125;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> roads = {"0440000000", "4044000000", "4404000000", "0440400000", "0004040000", "0000404400", "0000040440", "0000044040", "0000004404", "0000000040"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0078125;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> roads = {"0444444444444444", "4044444444444444", "4404444444444444", "4440444444444444", "4444044444444444", "4444404444444444", "4444440444444444", "4444444044444444", "4444444404444444", "4444444440444444", "4444444444044444", "4444444444404444", "4444444444440444", "4444444444444044", "4444444444444404", "4444444444444440"};
    RoadsOfKingdom* pObj = new RoadsOfKingdom();
    clock_t start = clock();
    double result = pObj->getProbability(roads);
    clock_t end = clock();
    delete pObj;
    double expected = 5.421010862427522E-20;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22511877&rd=13516&pm=9834
********************************************************************************
#include <string> 
#include <vector> 
//#include <cmath> 
#include <algorithm> 
#include <map> 
#include <set> 
#include <iostream> 
#include <sstream> 
#include <queue> 
 
#define ii pair<int,int> 
#define mp make_pair 
#define int64 long long 
#define all(v) v.begin(),v.end() 
#define sz(v) ((int)(v.size())) 
#define vi vector<int> 
 
const double eps=1E-9; 
 
using namespace std; 
 
template<class T> T abs(T x) {return x>0 ? x:(-x);} 
template<class T> T sqr(T x){return x*x;} 
 
double sp[16][1<<16]; 
double sm[16][1<<16]; 
 
double a[16][16]; 
 
int n; 
 
double d[1<<16]; 
 
int nbits(int x) 
{ 
  int res=0; 
  while(x) 
    res+=(x&1),x/=2; 
  return res; 
} 
 
double go(int mask) 
{ 
  if(mask==0) 
    return 1.0; 
  if(nbits(mask)<=1) 
    return 1.0; 
  double& res=d[mask]; 
  if(res>-eps) return res; 
  res=0.0; 
  int f=0; 
  while(!((mask>>f)&1)) f++; 
  int s=f+1; 
  while(!((mask>>s)&1)) s++; 
  mask^=(1<<f); 
  for(int m=mask;m;m=(m-1)&mask) 
  { 
    if(!((m>>s)&1)) continue; 
    if(sp[f][m]<eps) continue; 
    double koef=1.0; 
    for(int i=0;i<n;i++) 
      if(((mask^m)>>i)&1) 
        koef*=sm[i][m]; 
    if(koef<eps) continue; 
    res+=go(m)*go(mask^(1<<f)^m)*sp[f][m]*koef; 
  } 
  return res; 
} 
 
class RoadsOfKingdom { 
  public: 
  double getProbability(vector <string> roads) { 
    n=sz(roads); 
    for(int i=0;i<n;i++) 
      for(int j=0;j<n;j++) 
        a[i][j]=double(roads[i][j]-'0')/8.0; 
    for(int i=0;i<n;i++) 
      for(int j=0;j<(1<<n);j++) 
      { 
        int nz=0; 
        double pr=1.0; 
        for(int p=0;p<n;p++) 
          if((j>>p)&1) 
          { 
            if(1.0-a[i][p]<eps) 
              nz++; 
            else 
              pr*=1.0-a[i][p]; 
          } 
        double res=0.0; 
        for(int p=0;p<n;p++) 
          if((j>>p)&1) 
          { 
            double t=pr; 
            int z=nz; 
            if(1.0-a[i][p]<eps) 
              z--; 
            else 
              t/=1.0-a[i][p]; 
            if(z>0) t=0.0; 
            res+=t*a[i][p]; 
          } 
        sp[i][j]=res; 
        sm[i][j]=1.0; 
        for(int p=0;p<n;p++) 
          if((j>>p)&1) 
            sm[i][j]*=1.0-a[i][p]; 
      } 
    memset(d,-1,sizeof(d)); 
    return go((1<<n)-1); 
  } 
   
  
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.2 [01-Jan-2008] (MB__'s mod)
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/