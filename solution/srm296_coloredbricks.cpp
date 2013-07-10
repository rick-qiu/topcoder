/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6191
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

class ColoredBricks {
public:
    int minRepaints(vector<string> bricks);
};

int ColoredBricks::minRepaints(vector<string> bricks) {
    int ret;
    return ret;
}


int test0() {
    vector<string> bricks = {"012345", "012354"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> bricks = {"012345", "301245"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> bricks = {"012012", "345345"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> bricks = {"000000", "111111", "222222", "333333"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> bricks = {"062413", "041246", "043134", "125611"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> bricks = {"354256", "504505", "344101", "364103", "133105", "661310", "423045", "056136", "454225", "246130"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> bricks = {"354256", "504505", "344101", "364103", "133105", "661310", "423045", "056136", "454225", "246130", "506503", "260001", "450041", "121152", "522102", "600146", "434564", "541635", "561160", "336204", "224510", "523164", "315562", "004261", "156634", "135500", "606640", "166556", "050630", "333213", "463014", "250542", "602305", "612335", "350632", "354166", "166653", "462332", "131452", "463351", "503121", "160042", "205355", "614632", "532233", "655324", "241623", "062615", "201361", "602606"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 151;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> bricks = {"055101"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> bricks = {"304046", "211425"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> bricks = {"446326", "435226", "551022"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> bricks = {"644455", "125320", "433551", "336220"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> bricks = {"451621", "341640", "462663", "211005", "562513"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> bricks = {"125061", "525212", "410110", "152502", "512324", "403105"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> bricks = {"651421", "230640", "542126", "061553", "321151", "413205", "652165"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> bricks = {"615145", "424525", "540056", "141113", "340352", "541511", "402666", "153055"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> bricks = {"322012", "251551", "130463", "035515", "301330", "341506", "161654", "022454", "332653"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> bricks = {"501106", "556026", "323604", "431564", "533566", "463561", "260615", "434420", "005136", "142525"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> bricks = {"400466", "340063", "216555", "411315", "255606", "456632", "152203", "632015", "504332", "661203", "642034"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> bricks = {"631143", "352422", "413535", "260063", "430265", "210116", "225122", "206450", "363004", "540400", "640616", "314164"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> bricks = {"241251", "155420", "340345", "553525", "202525", "664534", "361230", "501114", "140641", "532211", "110320", "003420", "350020"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> bricks = {"041156", "104550", "630650", "553553", "536612", "132436", "623020", "526101", "464201", "415461", "002361", "251006", "206110", "504416"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> bricks = {"131162", "445022", "305404", "555203", "524144", "361502", "506444", "035300", "145125", "626134", "211545", "666420", "544111", "442463", "420331"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> bricks = {"433422", "252440", "151304", "140343", "326213", "032055", "423241", "244161", "032063", "135521", "436000", "420356", "260406", "152131", "112153", "665502"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> bricks = {"220344", "646112", "156002", "455242", "234012", "423041", "506515", "622555", "412202", "445060", "665534", "555125", "043664", "221324", "002101", "156224", "616213"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> bricks = {"545353", "460536", "453206", "666135", "545344", "500204", "151145", "340644", "505416", "520636", "220500", "456515", "561416", "134111", "252166", "514452", "334314", "555610"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> bricks = {"542116", "401432", "261355", "261626", "255041", "166144", "035532", "034663", "400354", "554533", "011106", "102202", "526014", "424542", "105266", "162531", "222222", "542535", "315263"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> bricks = {"521363", "143445", "000122", "164166", "234253", "436241", "202633", "406446", "651311", "035412", "362432", "254263", "054330", "650335", "010422", "354312", "612615", "546053", "254463", "642363"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> bricks = {"354430", "424110", "142010", "316320", "245333", "364053", "331226", "234264", "422661", "303503", "156150", "113111", "643354", "512166", "453244", "502423", "304232", "026353", "663200", "151205", "105326"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> bricks = {"115625", "161114", "413360", "356456", "363646", "053400", "155325", "310354", "541403", "130410", "442005", "360631", "603254", "024544", "605231", "322630", "331343", "163613", "135441", "034321", "136435", "366260"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> bricks = {"044030", "244615", "330441", "410364", "353056", "562441", "651105", "610426", "642014", "010425", "226650", "565331", "103010", "620103", "026214", "040263", "616600", "005022", "343605", "014654", "662512", "542610", "332163"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> bricks = {"336505", "424543", "416526", "232142", "046552", "160352", "311361", "616150", "215361", "303610", "326356", "515136", "540106", "243325", "512356", "420122", "015654", "512343", "155402", "050060", "206454", "620546", "505656", "122431"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> bricks = {"623060", "363632", "344020", "660156", "314606", "534550", "615442", "011204", "534242", "161165", "531035", "441541", "410342", "425421", "043240", "266166", "002313", "526425", "135632", "506526", "611424", "431060", "460034", "130213", "110364"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
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
    vector<string> bricks = {"205555", "230504", "635463", "105543", "621414", "023306", "521060", "360553", "140152", "236014", "612241", "453204", "204566", "565223", "560252", "260614", "604325", "230305", "363264", "152112", "201260", "501415", "654345", "432433", "530054", "345533"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> bricks = {"640413", "626231", "060342", "404262", "221220", "332324", "333241", "443251", "632323", "422024", "530205", "060636", "404000", "146231", "001323", "206566", "506415", "204420", "026201", "064142", "212036", "344136", "135213", "053605", "346025", "136305", "421301"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> bricks = {"044422", "015050", "550315", "416130", "635226", "501201", "513454", "011444", "025301", "366136", "155330", "652560", "131264", "641433", "046042", "103350", "634256", "605431", "133053", "354126", "264621", "222363", "522363", "466552", "006101", "453424", "143010", "462205"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> bricks = {"455524", "665235", "411104", "434214", "153324", "403041", "561465", "524515", "254442", "325344", "401301", "126100", "330026", "212421", "352302", "622112", "044652", "212141", "342506", "544654", "324454", "626042", "232524", "115536", "236436", "434402", "461544", "551246", "441215"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> bricks = {"302320", "526614", "255454", "440531", "642302", "512410", "062166", "411431", "320305", "066404", "623410", "561335", "561112", "516454", "655512", "202334", "146554", "366035", "431462", "546654", "434200", "623101", "516020", "510111", "323563", "305652", "612351", "662662", "632536", "503462"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> bricks = {"012563", "351253", "025124", "435043", "210022", "651632", "041051", "146116", "006040", "165342", "154443", "110640", "205325", "044443", "443021", "215304", "620644", "300216", "142045", "163404", "313241", "442401", "224665", "260154", "526656", "063423", "332025", "123562", "005123", "345210", "513523"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> bricks = {"200311", "545421", "550066", "030211", "546313", "352603", "162216", "253121", "121240", "410405", "052221", "542266", "224336", "022134", "452311", "002162", "656211", "201112", "651226", "431113", "421246", "611550", "646304", "546104", "506216", "361632", "544306", "342216", "235014", "235301", "665155", "310554"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> bricks = {"605350", "350302", "336240", "156635", "046446", "530544", "425554", "655002", "331123", "031344", "602626", "510412", "054444", "134365", "034444", "245612", "521111", "414065", "065522", "323405", "221643", "104326", "632435", "633361", "014030", "401420", "061453", "320130", "215051", "413011", "366441", "563110", "604226"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> bricks = {"443155", "512203", "610365", "015224", "123053", "031350", "452555", "460521", "035163", "231626", "611243", "346162", "022345", "314500", "015663", "013462", "446633", "620364", "660501", "445662", "432510", "431323", "063023", "302631", "501264", "324233", "336021", "155460", "426424", "356240", "003001", "524111", "500560", "606066"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> bricks = {"363223", "303644", "232130", "065243", "143556", "121526", "363405", "633530", "165016", "200036", "522306", "150121", "612100", "160431", "461355", "136130", "141543", "435365", "521644", "142625", "551614", "556363", "630301", "563102", "326350", "334533", "322555", "501550", "351164", "625526", "224000", "625142", "550226", "364156", "603612"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> bricks = {"556220", "245020", "320661", "522104", "065031", "354664", "365566", "140126", "601306", "410220", "343614", "103141", "163144", "133020", "523213", "154103", "403440", "264022", "264301", "636042", "524242", "315061", "210102", "443323", "200161", "565613", "101501", "042452", "635604", "312236", "066166", "323053", "145602", "361633", "561554", "653602"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> bricks = {"450133", "605560", "333103", "122306", "610553", "054305", "132254", "111425", "203553", "631330", "441364", "241115", "103232", "043621", "055516", "140505", "632655", "021132", "366220", "522626", "256504", "541116", "554604", "236600", "315556", "356336", "461601", "533115", "251434", "142005", "004321", "504515", "523052", "664106", "601536", "340041", "451223"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> bricks = {"556550", "015246", "562436", "405026", "421006", "400052", "521123", "003115", "240100", "641143", "545010", "316130", "122534", "401411", "226440", "441016", "416601", "504223", "060123", "603303", "165462", "103540", "424533", "622032", "130460", "550201", "555515", "402225", "456025", "445111", "233330", "243406", "445306", "262664", "161433", "303242", "523040", "125335"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> bricks = {"455020", "236303", "324056", "214666", "602421", "054303", "555065", "261315", "662566", "456013", "524536", "035565", "651240", "611616", "346320", "400541", "201334", "552026", "322033", "366646", "066062", "562630", "246325", "120665", "536313", "511326", "665543", "344040", "312563", "461321", "442452", "644530", "116136", "335311", "621656", "445153", "535603", "056136", "100430"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> bricks = {"311134", "146652", "650654", "553144", "316513", "623116", "622321", "220606", "243030", "540262", "024323", "345002", "045046", "440332", "310022", "221116", "301623", "640000", "211666", "220200", "545316", "116125", "661653", "132260", "312140", "624314", "324016", "404003", "642544", "241563", "630326", "645161", "021505", "563445", "263441", "246522", "540226", "230441", "102355", "500426"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> bricks = {"642336", "142233", "234221", "344210", "100246", "255661", "612344", "026654", "114401", "616555", "531153", "041543", "111455", "025321", "062232", "104462", "625054", "332204", "221660", "220561", "335221", "446265", "346026", "566556", "205154", "122323", "031443", "344060", "355553", "655642", "005432", "411332", "650014", "325436", "512565", "114226", "133002", "400241", "445246", "404665", "523403"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> bricks = {"013644", "054135", "324421", "532026", "561146", "154305", "501122", "645660", "136652", "060254", "366640", "152300", "603131", "624321", "166542", "312020", "246034", "055640", "065244", "424334", "525522", "544643", "622022", "214062", "455225", "232055", "566210", "555506", "450260", "465461", "000363", "031052", "051355", "464231", "050353", "304615", "303616", "212556", "423644", "020203", "424163", "232211"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> bricks = {"010014", "025225", "254361", "361634", "161254", "213446", "433331", "262240", "543356", "111563", "553243", "131662", "033424", "411260", "040406", "425254", "351316", "160050", "331440", "565402", "153562", "536023", "253506", "155153", "306650", "043216", "432224", "160353", "361614", "555466", "252020", "540322", "553142", "415545", "046214", "610442", "234624", "414343", "655132", "413360", "003512", "402650", "502321"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 130;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> bricks = {"522113", "045113", "350340", "624002", "113515", "024162", "623225", "622060", "216110", "255201", "010240", "342604", "120256", "136505", "460062", "342022", "004162", "240642", "562501", "156111", "312401", "423503", "651244", "402001", "523613", "134213", "653016", "143203", "221132", "066315", "510164", "140121", "422112", "615301", "222104", "454020", "043430", "240032", "646353", "612256", "531463", "331010", "502253", "355121"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> bricks = {"012026", "521146", "366144", "505422", "333210", "603151", "652504", "035642", "006416", "550235", "235210", "034014", "133022", "116632", "626263", "216032", "351362", "624121", "565246", "462456", "066133", "216523", "164166", "235666", "601052", "400354", "432141", "542626", "431041", "603030", "440143", "534462", "500131", "623031", "045444", "232265", "342333", "535144", "412663", "206244", "335301", "104236", "465106", "430242", "301521"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> bricks = {"065504", "560666", "464356", "664401", "530144", "263632", "320250", "020226", "542623", "266166", "500564", "651155", "243236", "304636", "120351", "210645", "056414", "456021", "414141", "234102", "511366", "362514", "503525", "040641", "455262", "545322", "324264", "226331", "242040", "034036", "222451", "126121", "413521", "360322", "515035", "523063", "615326", "041652", "524434", "330056", "506314", "544334", "244514", "644451", "556134", "410464"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 141;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> bricks = {"146130", "661656", "122642", "664354", "453202", "201633", "433032", "643133", "661410", "512300", "353152", "126013", "011114", "633631", "112331", "445215", "643042", "044203", "654332", "306641", "052653", "142365", "525644", "111516", "161234", "250221", "155236", "565131", "342222", "115630", "400414", "312456", "446526", "421215", "312456", "021334", "602100", "625600", "621611", "201432", "500266", "130051", "105620", "355651", "044134", "116561", "565415"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 142;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> bricks = {"204154", "300552", "666246", "160303", "210255", "600345", "110246", "455240", "410014", "060526", "010442", "023152", "564122", "544356", "203606", "034350", "533000", "165005", "004546", "224556", "031665", "152630", "565260", "022625", "346462", "544342", "054550", "530131", "464152", "120453", "413243", "602604", "110042", "010400", "321345", "205454", "356141", "655324", "622263", "003014", "411332", "454500", "560424", "436664", "430201", "542164", "536054", "634416"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> bricks = {"230161", "421636", "605104", "253114", "024406", "234304", "252410", "403614", "231442", "533630", "066510", "564015", "651622", "141422", "362251", "034345", "042526", "564342", "150106", "565003", "026003", "615060", "631531", "364221", "665564", "544141", "136615", "113203", "512312", "420332", "133522", "646510", "642022", "620314", "131340", "462053", "226341", "103345", "226263", "450242", "346044", "260461", "300114", "226641", "102141", "454113", "123163", "564035", "002055"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> bricks = {"233032", "456066", "606646", "510032", "545305", "210010", "430146", "414315", "414415", "262503", "311526", "430255", "530502", "545242", "405560", "615123", "012062", "453554", "603155", "006001", "422621", "622445", "506215", "614052", "405365", "050510", "150355", "460633", "052141", "241015", "545235", "335033", "232536", "010340", "316005", "616604", "544505", "224132", "556555", "601160", "066044", "516566", "246335", "063652", "420533", "020211", "065366", "352242", "121154", "504010"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> bricks = {"011111", "100020", "000100", "120310", "000011", "002000", "302001", "000100", "001300", "002300", "020110", "010000", "300110", "000000", "001301", "103020", "101000", "014010", "000001", "000000", "010020", "000100", "010200", "002130", "000011", "120000", "110012", "110000", "100140", "001002", "014041", "110031", "000120", "110031", "200000", "002030", "200000", "111110", "011000", "121114", "000000", "110002", "010221", "421200", "000101", "020000", "310010", "010000", "010000", "002012"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> bricks = {"110001", "000000", "000000", "100000", "000010", "000000", "000000", "000200", "000000", "000000", "000010", "000000", "000000", "000000", "000000", "001000", "000000", "000000", "001000", "000000", "000000", "000001", "000000", "000100", "010000", "000000", "000000", "000000", "000000", "000000", "011000", "000000", "000001", "000001", "000000", "000010", "000000", "000000", "000000", "000000", "100000", "000010", "000100", "000000", "010000", "100000", "000010", "000000", "000000", "010000"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> bricks = {"000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000100", "000000", "000000", "000000", "000001", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> bricks = {"343311", "333411", "313134", "313143", "433311", "433311", "413133", "413133", "343311", "333411", "313143", "313134", "334311", "334311", "314133", "314133", "131343", "141333", "131334", "131433", "131334", "141333", "131343", "131433"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> bricks = {"611502", "651120", "601251", "621015", "165120", "115602", "105261", "125016", "116520", "156102", "106215", "126051", "561102", "511620", "501216", "521061", "062115", "012516", "012651", "052161", "260151", "210561", "210615", "250116"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> bricks = {"243225", "223452", "223524", "253242", "422352", "432225", "422523", "452232", "342252", "322425", "322542", "352224", "224325", "234252", "224532", "254223", "225342", "245232", "235224", "225423", "522324", "542223", "532242", "522432", "053611", "063511", "013165", "013156", "506311", "536011", "516103", "516130", "350611", "360511", "310156", "310165", "605311", "635011", "615130", "615103", "101356", "151630", "131065", "161503", "101365", "151603", "131056", "161530"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> bricks = {"350506", "350560", "300655", "360055", "535060", "505306", "505630", "565003", "053560", "053506", "003655", "063055", "535006", "505360", "505603", "565030", "036055", "056503", "006355", "056530", "630055", "650530", "600355", "650503", "054533", "054533", "034355", "034355", "505433", "545033", "535304", "535340", "450533", "450533", "430355", "430355", "505433", "545033", "535340", "535304", "303455", "353540", "343055", "353504", "303455", "353504", "343055", "353540"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> bricks = {"663023", "522131", "060104", "441434", "050546", "555645", "246061", "200515", "164001", "244142", "326330", "644152", "064656", "630311", "146256", "253056", "102403", "535235", "146634", "652166", "661134", "664024", "041214", "152060", "326256", "543646", "215553", "233111", "031632", "144304", "532242", "042642", "002121", "310526", "023332", "503443", "034444", "552535", "300224", "610034", "653561", "502312", "661046", "504441", "640515", "311452", "044316", "611122", "153140", "244202"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 154;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> bricks = {"000000", "111111", "222222", "333333", "444444", "555555", "666666", "123456", "234231", "423423", "543623", "634561", "242342", "123456", "242345", "234225", "325235", "235232", "214242", "523524", "252152", "252524", "252521", "523425", "251423", "525234", "523542", "523422", "523423", "524324", "523423", "523424", "325235", "235232", "214242", "523524", "252152", "252524", "252521", "523425", "251423", "525234", "523542", "523422", "523423", "524324", "523423", "523424"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> bricks = {"541121", "025504", "254240", "360011", "225643", "261333", "245322", "003420", "051503", "526536", "524405", "156115", "663615", "312543", "236115", "613354", "306203", "332416", "153546", "415440", "426235", "410626", "152554", "221155", "022443", "655206", "253553", "156112", "445662", "024366", "212404", "435034", "645213", "215101", "311364", "353503", "032465", "504250", "042634", "343664", "116200", "654101", "261560", "135465", "315124", "344545", "154326", "431010", "305121", "636442"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> bricks = {"351326", "021063", "426402", "365160", "342120", "444344", "242145", "631306", "343233", "631165", "103435", "051432", "640151", "301241", "666201", "444224", "254265", "166210", "230442", "342411", "100266", "044345", "251221", "245501", "414266", "662266", "360665", "533263", "423432", "560165", "465453", "004252", "553201", "432334", "436062", "542616", "331060", "261565", "301420", "331154", "330356", "652354", "602613", "151125", "522665", "016613", "665124", "610041", "532064", "363110"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 153;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> bricks = {"123456", "412412", "112241", "414120", "010102", "123456", "412412", "112241", "414120", "010102", "123456", "412412", "112241", "414120", "010102", "123456", "412412", "112241", "414120", "010102", "123456", "412412", "112241", "414120", "010102", "123456", "412412", "112241", "414120", "010102", "123456", "412412", "112241", "414120", "010102", "123456", "412412", "112241", "414120", "010102", "123456", "412412", "112241", "414120", "010102", "123456", "412412", "112241", "414120", "010102"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> bricks = {"623145", "012345", "223333", "444444", "555655", "556555", "012345", "012354", "120354"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> bricks = {"012345", "321054", "143502", "534120", "524013", "042031", "012345", "321054", "143502", "534120", "524013", "042031", "012345", "321054", "143502", "534120", "524013", "042031", "012345", "321054", "143502", "534120", "524013", "042031", "012345", "321054", "143502", "534120", "524013", "042031", "012345", "321054", "143502", "534120", "524013", "042031", "012345", "321054", "143502", "534120", "524013", "042031"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> bricks = {"124520", "251042", "234610", "236620", "124220", "164520", "225520", "123450", "164420", "122520", "345620", "042520", "120020", "032520", "642520", "234520", "626520", "004520", "335520", "654520", "600620", "522450", "124526", "662420", "224420", "655520", "332450", "123402", "154520", "620520", "124124", "140520", "051220", "105120", "632020", "105160", "610520", "610220", "240220", "532400", "421540", "543210", "531220", "521520", "121520", "153216"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> bricks = {"621343", "506655", "246222", "514055", "641225", "653455", "662245", "424412", "133364", "061422", "603205", "154064", "166450", "432031", "311512", "221641", "364654", "205231", "346504", "031065", "423461", "564364", "420202", "345066", "144543", "036035", "651523", "422522", "063131", "621100", "414665", "631015", "311012", "033103", "233005", "135315", "130535", "222163", "332146", "303425", "025216", "324523", "514113", "453434", "014045", "241005", "333450", "356524", "551046", "150240"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 151;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> bricks = {"223456", "133456", "124456", "123356", "123455", "123450"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> bricks = {"062413", "041246", "043134", "125611"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> bricks = {"001222", "010333", "100444"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> bricks = {"012345", "321054", "143502", "534120", "524013", "042031", "012345", "321054", "143502", "534120", "524013", "042031", "012345", "321054", "143502", "534120", "524013", "042031", "012345", "321054", "143502", "534120", "524013", "042031", "012345", "321054", "143502", "534120", "524013", "042031", "012345", "321054", "143502", "534120", "524013", "042031", "012345", "321054", "143502", "534120", "524013", "042031", "012345", "321054", "143502", "534120", "524013", "042031"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> bricks = {"205042", "516636", "551531", "306521", "020134", "641331", "030103", "563101", "634311", "665352", "441423", "005414", "034021", "103606", "021125", "253354", "534134", "545414", "311306", "621062", "456345", "602336", "242356", "302314", "451022", "640213", "322323", "262325", "430154", "244432", "203204", "351654", "633505", "123560", "163612", "302636", "406451", "406425", "435256", "624441", "622631", "251050", "212536", "341043", "430200", "146316", "036623", "316401", "600206", "303266"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> bricks = {"253461", "245163", "162354", "235614", "413256", "216435", "635124", "216534", "264153", "421365", "654321", "524163", "261345", "645123", "615234", "352164", "423651", "463215", "354162", "641352", "341625", "513264", "256413", "643521", "654231", "526341", "431265", "653241", "364152", "523614", "152364", "135642", "615324", "236154", "435612", "541623", "512364", "514623", "321456", "345612", "465231", "146352", "423165", "251346", "156324", "512364", "253416", "461532", "146352", "126453"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> bricks = {"002345", "011345", "212345"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> bricks = {"000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "000000", "111111", "111111", "111111", "111111", "111111", "111111", "111111", "111111", "111111", "111111", "111111", "111111", "111111", "111111", "111111", "111111"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> bricks = {"000061", "000024", "000034", "000065"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> bricks = {"666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666", "666666"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> bricks = {"000043", "000042", "000042", "000051", "000051", "000061"};
    ColoredBricks* pObj = new ColoredBricks();
    clock_t start = clock();
    int result = pObj->minRepaints(bricks);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=307060&rd=9817&pm=6191
********************************************************************************
#include <string> 
#include <vector> 
#include <algorithm> 
#include <sstream> 
#include <cstdio> 
#include <cmath> 
#include <map> 
#include <set> 
#include <cstdlib> 
#include <queue> 
using namespace std; 
 
int perm[24][6] = { 
{0,1,2,3,4,5},{0,2,3,4,1,5},{0,3,4,1,2,5},{0,4,1,2,3,5}, 
{1,5,2,0,4,3},{1,2,0,4,5,3},{1,0,4,5,2,3},{1,4,5,2,0,3}, 
{5,3,2,1,4,0},{5,2,1,4,3,0},{5,1,4,3,2,0},{5,4,3,2,1,0}, 
{2,5,3,0,1,4},{2,3,0,1,5,4},{2,0,1,5,3,4},{2,1,5,3,0,4}, 
{3,5,4,0,2,1},{3,4,0,2,5,1},{3,0,2,5,4,1},{3,2,5,4,0,1}, 
{4,5,1,0,3,2},{4,1,0,3,5,2},{4,0,3,5,1,2},{4,3,5,1,0,2}, 
}; 
 
int best; 
typedef vector<int> VI; 
int b[60][6]; 
int n; 
int a[6]; 
 
class ColoredBricks { 
  public: 
  void backtrack(int act) { 
    if (act == 6) { 
      int res = 0; 
      for (int i=1; i<24; ++i) { 
        for (int j=0; j<6; ++j) { 
          if (a[j] != a[perm[i][j]]) { 
            if (a[j] > a[perm[i][j]]) 
              return; 
            break; 
          } 
        } 
      } 
      for (int i=0; i<n; ++i) { 
        int add = 6; 
        for (int j=0; j<24; ++j) { 
          int cnt = 0; 
          for (int k=0; k<6; ++k) 
            if (a[k] != b[i][perm[j][k]]) 
              ++cnt; 
          add = min(add,cnt); 
        } 
        res += add; 
      } 
      if (res < best) 
        best = res; 
      return; 
    } 
    for (int i=0; i<=6; ++i) { 
      a[act] = i; 
      backtrack(act+1); 
    } 
  } 
  int minRepaints(vector <string> bricks) { 
    n = bricks.size(); 
    best = n*6; 
    int p[6] = {0,4,5,2,1,3}; 
    for (int i=0; i<n; ++i) { 
      for (int j=0; j<6; ++j) 
        b[i][p[j]] = bricks[i][j]-'0'; 
    } 
    backtrack(0); 
    return best; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/