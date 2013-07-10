/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4484
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

class Cards {
public:
    vector<string> deal(int numPlayers, string deck);
};

vector<string> Cards::deal(int numPlayers, string deck) {
    vector<string> ret;
    return ret;
}


int test0() {
    int numPlayers = 6;
    string deck = "012345012345012345";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000", "111", "222", "333", "444", "555"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int numPlayers = 4;
    string deck = "111122223333";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"123", "123", "123", "123"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int numPlayers = 1;
    string deck = "012345012345012345";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"012345012345012345"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int numPlayers = 6;
    string deck = "01234";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int numPlayers = 2;
    string deck = "";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", ""};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int numPlayers = 50;
    string deck = "";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int numPlayers = 14;
    string deck = "0599697978175398614539051900046562586985";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"09", "58", "96", "91", "64", "95", "73", "99", "70", "85", "11", "79", "50", "30"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int numPlayers = 31;
    string deck = "27867631900196675345613819617";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int numPlayers = 43;
    string deck = "605879437255602911174915883255397";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int numPlayers = 44;
    string deck = "34478182766078953839905438";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int numPlayers = 30;
    string deck = "18862814300488944379691795479032498916675296147";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "8", "8", "6", "2", "8", "1", "4", "3", "0", "0", "4", "8", "8", "9", "4", "4", "3", "7", "9", "6", "9", "1", "7", "9", "5", "4", "7", "9", "0"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int numPlayers = 38;
    string deck = "1296806198892800840333780891108851780022492474119";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2", "9", "6", "8", "0", "6", "1", "9", "8", "8", "9", "2", "8", "0", "0", "8", "4", "0", "3", "3", "3", "7", "8", "0", "8", "9", "1", "1", "0", "8", "8", "5", "1", "7", "8", "0", "0"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int numPlayers = 19;
    string deck = "405432699259465009801237421388432461095898946221";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"40", "01", "52", "43", "37", "24", "62", "91", "93", "28", "58", "94", "43", "62", "54", "06", "01", "90", "89"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int numPlayers = 44;
    string deck = "3013065647352572357662603230063541173876";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int numPlayers = 37;
    string deck = "66007176088906299872270165111838901490361027590235";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "6", "0", "0", "7", "1", "7", "6", "0", "8", "8", "9", "0", "6", "2", "9", "9", "8", "7", "2", "2", "7", "0", "1", "6", "5", "1", "1", "1", "8", "3", "8", "9", "0", "1", "4", "9"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int numPlayers = 27;
    string deck = "7834513392215551377627";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int numPlayers = 23;
    string deck = "2190583129472596869610998300893";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "1", "9", "0", "5", "8", "3", "1", "2", "9", "4", "7", "2", "5", "9", "6", "8", "6", "9", "6", "1", "0", "9"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int numPlayers = 20;
    string deck = "85548311612386223485102737095";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"8", "5", "5", "4", "8", "3", "1", "1", "6", "1", "2", "3", "8", "6", "2", "2", "3", "4", "8", "5"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int numPlayers = 25;
    string deck = "1950051046752158477249515706135236";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "9", "5", "0", "0", "5", "1", "0", "4", "6", "7", "5", "2", "1", "5", "8", "4", "7", "7", "2", "4", "9", "5", "1", "5"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int numPlayers = 43;
    string deck = "5930445960394930553149";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int numPlayers = 24;
    string deck = "2437543013035742641207376916588101890020304974475";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"26", "49", "31", "76", "55", "48", "38", "01", "10", "31", "08", "39", "50", "70", "42", "20", "63", "40", "14", "29", "07", "74", "34", "77"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int numPlayers = 32;
    string deck = "366829043329857162855678386194377923216581";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "6", "6", "8", "2", "9", "0", "4", "3", "3", "2", "9", "8", "5", "7", "1", "6", "2", "8", "5", "5", "6", "7", "8", "3", "8", "6", "1", "9", "4", "3", "7"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int numPlayers = 39;
    string deck = "22562723947662830778291265";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int numPlayers = 48;
    string deck = "08732494568077459002311191778270213966440";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int numPlayers = 10;
    string deck = "56739477043273099967428229799649201";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"534", "622", "778", "332", "902", "499", "797", "799", "069", "476"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int numPlayers = 17;
    string deck = "160749588240899994066486030872";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "6", "0", "7", "4", "9", "5", "8", "8", "2", "4", "0", "8", "9", "9", "9", "9"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int numPlayers = 23;
    string deck = "84956911794121794848500183760999218482377";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"8", "4", "9", "5", "6", "9", "1", "1", "7", "9", "4", "1", "2", "1", "7", "9", "4", "8", "4", "8", "5", "0", "0"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int numPlayers = 35;
    string deck = "1737307532124258006381492409125";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int numPlayers = 16;
    string deck = "11224698757875638384400024050008186";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"18", "13", "28", "24", "44", "60", "90", "80", "72", "54", "70", "85", "70", "50", "60", "38"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int numPlayers = 28;
    string deck = "4992817102221105460438193162";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "9", "9", "2", "8", "1", "7", "1", "0", "2", "2", "2", "1", "1", "0", "5", "4", "6", "0", "4", "3", "8", "1", "9", "3", "1", "6", "2"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int numPlayers = 20;
    string deck = "85500626135092329088730464048";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"8", "5", "5", "0", "0", "6", "2", "6", "1", "3", "5", "0", "9", "2", "3", "2", "9", "0", "8", "8"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int numPlayers = 27;
    string deck = "50776163242945767575592068206";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "0", "7", "7", "6", "1", "6", "3", "2", "4", "2", "9", "4", "5", "7", "6", "7", "5", "7", "5", "5", "9", "2", "0", "6", "8", "2"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int numPlayers = 3;
    string deck = "1432589534718683112195503276518263";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"12948325368", "45576115252", "38318190716"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int numPlayers = 37;
    string deck = "8000113311463589761226714366";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int numPlayers = 44;
    string deck = "14606817704950971664329253099202282743947380089310";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "4", "6", "0", "6", "8", "1", "7", "7", "0", "4", "9", "5", "0", "9", "7", "1", "6", "6", "4", "3", "2", "9", "2", "5", "3", "0", "9", "9", "2", "0", "2", "2", "8", "2", "7", "4", "3", "9", "4", "7", "3", "8", "0"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int numPlayers = 33;
    string deck = "520282652766966629283";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int numPlayers = 11;
    string deck = "0598089322558298655198773155299450";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"057", "587", "923", "891", "085", "865", "952", "359", "219", "294", "585"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int numPlayers = 22;
    string deck = "541098855271065955874317059915503631554231765426";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"51", "47", "10", "05", "99", "89", "81", "55", "55", "20", "73", "16", "03", "61", "55", "95", "54", "52", "83", "71", "47", "36"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int numPlayers = 16;
    string deck = "6600707378292887878200424146430561136414";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"68", "67", "08", "02", "70", "00", "74", "32", "74", "81", "24", "96", "24", "83", "80", "75"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int numPlayers = 24;
    string deck = "05971540311759747325791812415225031119611";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "5", "9", "7", "1", "5", "4", "0", "3", "1", "1", "7", "5", "9", "7", "4", "7", "3", "2", "5", "7", "9", "1", "8"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int numPlayers = 19;
    string deck = "210157353784092295423657901";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "1", "0", "1", "5", "7", "3", "5", "3", "7", "8", "4", "0", "9", "2", "2", "9", "5", "4"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int numPlayers = 19;
    string deck = "132482202569508131397648085633361";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "3", "2", "4", "8", "2", "2", "0", "2", "5", "6", "9", "5", "0", "8", "1", "3", "1", "3"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int numPlayers = 36;
    string deck = "4764434853537024814379";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int numPlayers = 34;
    string deck = "7992772960559070429310685991064614589012631";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7", "9", "9", "2", "7", "7", "2", "9", "6", "0", "5", "5", "9", "0", "7", "0", "4", "2", "9", "3", "1", "0", "6", "8", "5", "9", "9", "1", "0", "6", "4", "6", "1", "4"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int numPlayers = 30;
    string deck = "905750368446078804545280479755759504379";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9", "0", "5", "7", "5", "0", "3", "6", "8", "4", "4", "6", "0", "7", "8", "8", "0", "4", "5", "4", "5", "2", "8", "0", "4", "7", "9", "7", "5", "5"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int numPlayers = 49;
    string deck = "43700225515496851866733402";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int numPlayers = 17;
    string deck = "55042558631706546603102";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "5", "0", "4", "2", "5", "5", "8", "6", "3", "1", "7", "0", "6", "5", "4", "6"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int numPlayers = 25;
    string deck = "61073905750059086113002";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int numPlayers = 8;
    string deck = "52683311382812084947631388172204";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5348", "2898", "6241", "8877", "3162", "3232", "1010", "1834"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int numPlayers = 1;
    string deck = "43977974978414429024296949732111408546626793193160";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"43977974978414429024296949732111408546626793193160"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int numPlayers = 5;
    string deck = "423147497835303719242922329";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"47372", "24519", "39392", "17022", "48343"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int numPlayers = 25;
    string deck = "342131866809015304860341920859687427656546";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "4", "2", "1", "3", "1", "8", "6", "6", "8", "0", "9", "0", "1", "5", "3", "0", "4", "8", "6", "0", "3", "4", "1", "9"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int numPlayers = 21;
    string deck = "3439434422834490897438978957869323202";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "4", "3", "9", "4", "3", "4", "4", "2", "2", "8", "3", "4", "4", "9", "0", "8", "9", "7", "4", "3"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int numPlayers = 50;
    string deck = "1403207906730252869034691004267180";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int numPlayers = 11;
    string deck = "2412522939767890787556137797836499364049";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"261", "473", "187", "297", "509", "277", "288", "973", "356", "954", "769"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int numPlayers = 28;
    string deck = "86835763021914766348307855578973714339231475799";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"8", "6", "8", "3", "5", "7", "6", "3", "0", "2", "1", "9", "1", "4", "7", "6", "6", "3", "4", "8", "3", "0", "7", "8", "5", "5", "5", "7"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int numPlayers = 3;
    string deck = "12345673";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"14", "25", "36"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int numPlayers = 2;
    string deck = "012";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int numPlayers = 2;
    string deck = "123";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int numPlayers = 8;
    string deck = "012345012345";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1", "2", "3", "4", "5", "0", "1"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int numPlayers = 4;
    string deck = "1234512345";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"15", "21", "32", "43"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int numPlayers = 6;
    string deck = "111555555";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1", "5", "5", "5"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int numPlayers = 5;
    string deck = "234526626626";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"26", "36", "42", "56", "26"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int numPlayers = 4;
    string deck = "123456";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2", "3", "4"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int numPlayers = 6;
    string deck = "012345012345012345";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000", "111", "222", "333", "444", "555"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int numPlayers = 4;
    string deck = "111122223333";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"123", "123", "123", "123"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int numPlayers = 4;
    string deck = "11112222333";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"12", "12", "12", "12"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int numPlayers = 6;
    string deck = "0123450123450123451";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000", "111", "222", "333", "444", "555"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int numPlayers = 6;
    string deck = "012345012345012345012";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000", "111", "222", "333", "444", "555"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int numPlayers = 5;
    string deck = "012345012345012345";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"054", "105", "210", "321", "432"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int numPlayers = 2;
    string deck = "012";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int numPlayers = 3;
    string deck = "11122233344";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"123", "123", "123"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int numPlayers = 3;
    string deck = "0123";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1", "2"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int numPlayers = 6;
    string deck = "01234";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "", "", "", "", ""};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int numPlayers = 5;
    string deck = "98273846628398279619861987398729874234";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9887872", "8439639", "2696198", "7681987", "3229874"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int numPlayers = 4;
    string deck = "111122223333";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"123", "123", "123", "123"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int numPlayers = 3;
    string deck = "12345";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2", "3"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int numPlayers = 3;
    string deck = "1234";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2", "3"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int numPlayers = 6;
    string deck = "012345012345012345122";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000", "111", "222", "333", "444", "555"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int numPlayers = 2;
    string deck = "1231231";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"132", "213"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int numPlayers = 4;
    string deck = "012345012345012345";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0420", "1531", "2042", "3153"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int numPlayers = 2;
    string deck = "01011";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00", "11"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int numPlayers = 2;
    string deck = "01234567890123456789012345678901234567890123456789";
    Cards* pObj = new Cards();
    clock_t start = clock();
    vector<string> result = pObj->deal(numPlayers, deck);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0246802468024680246802468", "1357913579135791357913579"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10420698&rd=6536&pm=4484
********************************************************************************
#line 73 "Cards.cpp" 
#include <string> 
#include <stack> 
#include <queue> 
#include <vector> 
#include <algorithm> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <iostream> 
#include <sstream> 
#include <utility> 
#include <map> 
#include <set> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long LL;   
 
#define REP(i,n) for(int _n=n, i=0;i<_n;++i) 
 
// BEGIN CODE: 
class Cards { 
  public: 
  vector <string> deal(int numPlayers, string deck) { 
        VS ret(numPlayers); 
        REP(i,deck.size()) { 
            if (i + numPlayers <= deck.size()) { 
                REP(j,numPlayers) { 
                    ret[j] += deck[i+j]; 
                } 
                i += numPlayers - 1; 
            } else { 
                break; 
            } 
        } 
        return ret; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/