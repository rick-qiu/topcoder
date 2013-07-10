/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1876
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

class Twain {
public:
    string getNewSpelling(int year, string phrase);
};

string Twain::getNewSpelling(int year, string phrase) {
    string ret;
    return ret;
}


int test0() {
    int year = 1;
    string phrase = "i fixed the chrome xerox by the cyclical church";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "i fiksed the chrome zeroks by the cyclical church";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int year = 2;
    string phrase = "i fixed the chrome xerox by the cyclical church";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "i fiksed the chrome zeroks bi the ciclical church";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int year = 0;
    string phrase = "this is unchanged";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "this is unchanged";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int year = 7;
    string phrase = "sch kn x xschrx cknnchc cyck xxceci";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "sk n z zskrks nchk sik zksesi";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int year = 7;
    string phrase = " concoction convalescence cyclical cello ";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = " konkoktion konvalesense siklikal selo ";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int year = 7;
    string phrase = "";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int year = 7;
    string phrase = "a sly gypsy yelled loudly by the gym yesterday";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "a sli gipsi ieled loudli bi the gim iesterdai";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int year = 0;
    string phrase = "sch kn x xschrx cknnchc cyck xxceci";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "sch kn x xschrx cknnchc cyck xxceci";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int year = 1;
    string phrase = "sch kn x xschrx cknnchc cyck xxceci";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "sch kn z zschrks cknnchc cyck zksceci";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int year = 2;
    string phrase = "sch kn x xschrx cknnchc cyck xxceci";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "sch kn z zschrks cknnchc cick zksceci";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int year = 3;
    string phrase = "sch kn x xschrx cknnchc cyck xxceci";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "sch kn z zschrks cknnchc sick zkssesi";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int year = 4;
    string phrase = "sch kn x xschrx cknnchc cyck xxceci";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "sch kn z zschrks knnchc sik zkssesi";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int year = 5;
    string phrase = "sch kn x xschrx cknnchc cyck xxceci";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "sk kn z zskrks knnchk sik zkssesi";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int year = 6;
    string phrase = "sch kn x xschrx cknnchc cyck xxceci";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "sk n z zskrks nnchk sik zkssesi";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int year = 6;
    string phrase = "magic circus giraffes suffer dazzling performances";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "magik sirkus giraffes suffer dazzling performanses";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int year = 7;
    string phrase = "x";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int year = 7;
    string phrase = "kn";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "n";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int year = 7;
    string phrase = "aabbccddeeffgghhiijjkkll";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "aabkdeefghiijkl";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int year = 7;
    string phrase = "mmnnooppqqrrssttuuvvwwxxyyzz";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "mnoopqrstuuvwksksiiz";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int year = 7;
    string phrase = "the bookkeeper recalled rearranging the bookcase";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "the bookeeper rekaled rearanging the bookase";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int year = 6;
    string phrase = "carcass circus caucus catchy catch chance charisma";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "karkass sirkus kaukus katchi katch chanse charisma";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int year = 5;
    string phrase = "chancellor chocolate chaotic chronological chuckle";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "chansellor chokolate chaotik kronologikal chukle";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int year = 4;
    string phrase = "church circa circle circuit circumstance chronicle";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "church sirca sircle sircuit sircumstanse chronicle";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int year = 3;
    string phrase = "circumcise circumference cockroach clench chicken";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "sircumsise sircumferense cockroach clench chicken";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int year = 7;
    string phrase = "chaos choice character charade chasm chemical";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "chaos choise charakter charade chasm chemikal";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int year = 1;
    string phrase = "xylophone xenon xanthum exclaim expert sioux";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "zylophone zenon zanthum eksclaim ekspert siouks";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int year = 7;
    string phrase = "scholar school schooner scholastic schwab";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "skolar skool skooner skolastik skwab";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int year = 7;
    string phrase = "sch";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "sk";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int year = 7;
    string phrase = " chandelier tom cellocck xzz zzx cck ";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = " chandelier tom selok z zks k ";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int year = 7;
    string phrase = "could my mighty knight always protect castles";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "kould mi mighti night alwais protekt kastles";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int year = 7;
    string phrase = "cck xzz aaaaa";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "k z aaaaa";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int year = 5;
    string phrase = "cchh";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "kchh";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int year = 7;
    string phrase = "abba";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int year = 7;
    string phrase = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int year = 7;
    string phrase = " concoction convalescence cyclical cello ";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = " konkoktion konvalesense siklikal selo ";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int year = 7;
    string phrase = "cck xzz aaaaa";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "k z aaaaa";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int year = 7;
    string phrase = "vv";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "v";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int year = 1;
    string phrase = "x";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int year = 7;
    string phrase = "a b c d e";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "a b k d e";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int year = 7;
    string phrase = "sch kn x xschrx cknnchc cyck xxceci";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "sk n z zskrks nchk sik zksesi";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int year = 1;
    string phrase = "xoxox";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "zoksoks";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int year = 6;
    string phrase = "kooc cooc cooc cooc cooc";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "kook kook kook kook kook";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int year = 2;
    string phrase = "i fixed the chrome xerox by the cyclical church";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "i fiksed the chrome zeroks bi the ciclical church";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int year = 5;
    string phrase = " concatenation cck";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = " konkatenation k";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int year = 7;
    string phrase = "sch chr zzbzzb aa bccb xx cei cb ci chr chk";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "sk kr zbzb aa bkb zks sei kb si kr chk";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int year = 6;
    string phrase = "cooc cooc cooc cooc";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "kook kook kook kook";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int year = 5;
    string phrase = "c";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "k";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int year = 1;
    string phrase = "xenon xenon";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "zenon zenon";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int year = 7;
    string phrase = " xx xx xxdxx knndsch sch schrrhc yiiyy knnsc ";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = " zks zks zksdksks ndsch sk skrhk iiiii nsk ";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int year = 7;
    string phrase = "thsx xstt cic tess ofc knkn zzoopp xox cyci";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "thsks zst sik tes ofk nkn zoop zoks sisi";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int year = 7;
    string phrase = "aaa iii eeknee";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "aaa iii eeknee";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int year = 1;
    string phrase = "xfdkjf xdksax";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "zfdkjf zdksaks";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int year = 7;
    string phrase = "ch";
    Twain* pObj = new Twain();
    clock_t start = clock();
    string result = pObj->getNewSpelling(year, phrase);
    clock_t end = clock();
    delete pObj;
    string expected = "ch";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7369089&rd=4650&pm=1876
********************************************************************************
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <sstream>
#include <numeric>
#include <algorithm>
 
using namespace std;
 
//Sets stuff
#define _in(c, x) (c.find(x) != c.end())
 
//Constant stuff
const long double zero=0.000000000001;
const long double pi=3.14159265358979323846;
 
//Floating point stuff
bool _equal(long double v1, long double v2) {return abs(v1-v2)<zero;}
bool _less(long double v1, long double v2) {return v1-v2<-zero;}
 
//Math stuff
long long gcd(long long a,long long b);
long long lcm(long long a,long long b);
 
long long fakt(int n);
long long vari(int n, int k);
long long komb(int n, int k);
 
long double det2(
long double a1,long double a2,
long double b1,long double b2);
 
long double det3(
long double a1,long double a2,long double a3,
long double b1,long double b2,long double b3,
long double c1,long double c2,long double c3);
 
long double det4(
long double a1,long double a2,long double a3,long double a4,
long double b1,long double b2,long double b3,long double b4,
long double c1,long double c2,long double c3,long double c4,
long double d1,long double d2,long double d3,long double d4);
 
//Calendar stuff
bool leap(long long x);
int nrdays(int year,int month);
string dayname(int day);
string monthname(int month);
 
//Conversion stuff
int chr2int(char a) {return a-'0';}
string long2str(long long a);
long long str2long(string a);
 
//Splitting stuff
 
vector<string> split(string str,string delim);
 
//Vector and set outputting stuff
 
template <class T> ostream &operator <<(ostream &os, const vector<T> &vec);
template <class T> ostream &operator <<(ostream &os, const set<T> &st);
 
//The real stuff
bool wordstart(string s,int w)
{
  return (w==0 || s[w]!=' ' && s[w-1]==' ');
}
class Twain 
{
  public:
  string getNewSpelling(int year, string phrase) 
  {
// BEGIN CUT HERE
    static bool s_FirstTime = true; if (s_FirstTime) { s_FirstTime = false; run_test(-1); }
// END CUT HERE
 
    string solution=phrase;
    if (solution.size()==0) return solution;
    for(int q=1;q<=year;++q)
    {
      switch (q) 
      {
        case 1:
        {
          for(int w=0;w<solution.size();++w)
          if (wordstart(solution,w) && solution[w]=='x') solution[w]='z';
          for(int w=0;w<solution.size();++w)
          if (solution[w]=='x') solution.replace(w,1,"ks");
          break;
        }
        case 2:
        {
          for(int w=0;w<solution.size();++w)
          if (solution[w]=='y') solution[w]='i';
          break;
        }
        case 3:
        {
          for(int w=0;w<solution.size()-1;++w)
          if (solution[w]=='c' && (solution[w+1]=='i' || solution[w+1]=='e')) solution[w]='s';
          break;
        }
        case 4:
        {
          bool cs=true;
          while (cs)
          {
            cs=false;
            for(int w=0;w<solution.size()-1;++w)
            if (solution[w]=='c' && solution[w+1]=='k') 
            {
              solution.erase(w,1);
              cs=true;
            }
          }
          break;
        }
        case 5:
        {
          for(int w=0;w<solution.size();++w)
            if (wordstart(solution,w) && solution.substr(w,3)=="sch") solution.replace(w,3,"sk");
          for(int w=0;w<solution.size();++w)
            if (solution.substr(w,3)=="chr") solution.replace(w,3,"kr");
          for(int w=0;w<solution.size();++w)
            if (solution[w]=='c' && (w==solution.size() || solution[w+1]!='h')) solution[w]='k';
          break;
        }
        case 6:
        {
          for(int w=0;w<solution.size();++w)
            if (wordstart(solution,w) && solution.substr(w,2)=="kn") solution.replace(w,2,"n");
          break;
        }
        case 7:
        {
          bool cs=true;
          while (cs)
          {
            cs=false;
            for(int w=0;w<solution.size()-1;++w)
            if (solution[w]==solution[w+1] && solution[w]!=' ' && solution[w]!='a' 
            && solution[w]!='e' && solution[w]!='i' && solution[w]!='o' && solution[w]!='u') 
            {
              solution.erase(w,1);
              cs=true;
            }
          }
          break;
        }
      }
    }
    return solution;
  }
// BEGIN CUT HERE
  public:
  void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
  private:
  template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
  void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
  void test_case_0() { int Arg0 = 1; string Arg1 = "i fixed the chrome xerox by the cyclical church"; string Arg2 = "i fiksed the chrome zeroks by the cyclical church"; verify_case(0, Arg2, getNewSpelling(Arg0, Arg1)); }
  void test_case_1() { int Arg0 = 2; string Arg1 = "i fixed the chrome xerox by the cyclical church"; string Arg2 = "i fiksed the chrome zeroks bi the ciclical church"; verify_case(1, Arg2, getNewSpelling(Arg0, Arg1)); }
  void test_case_2() { int Arg0 = 0; string Arg1 = "this is unchanged"; string Arg2 = "this is unchanged"; verify_case(2, Arg2, getNewSpelling(Arg0, Arg1)); }
  void test_case_3() { int Arg0 = 7; string Arg1 = "sch kn x xschrx cknnchc cyck xxceci"; string Arg2 = "sk n z zskrks nchk sik zksesi"; verify_case(3, Arg2, getNewSpelling(Arg0, Arg1)); }
  void test_case_4() { int Arg0 = 7; string Arg1 = "  concoction   convalescence   cyclical   cello   "; string Arg2 = "  konkoktion   konvalesense   siklikal   selo   "; verify_case(4, Arg2, getNewSpelling(Arg0, Arg1)); }
  void test_case_5() { int Arg0 = 7; string Arg1 = ""; string Arg2 = ""; verify_case(5, Arg2, getNewSpelling(Arg0, Arg1)); }
  void test_case_6() { int Arg0 = 7; string Arg1 = "cck xzz aaaaa"; string Arg2 = "k z aaaaa"; verify_case(6, Arg2, getNewSpelling(Arg0, Arg1)); }
 
// END CUT HERE
 
};
 
//Forwarded stuff
 
long long gcd(long long a,long long b)
{
  long long m;
  while (b!=0)
  {
    m=a%b;
    a=b;
    b=m;
  }
  return a;
}
long long lcm(long long a,long long b)
{
  return a/gcd(a,b)*b;
}
bool leap(long long x)
{
  return (((x%4)==0) && ((x%100)!=0) || ((x%400)==0));
}
int nrdays(int year,int month)
{
  switch (month) 
  {
    case 1:return 31;
    case 2:if (leap(year)) return 29;
    else return 28;
    case 3:return 31;
    case 4:return 30;
    case 5:return 31;
    case 6:return 30;
    case 7:return 31;
    case 8:return 31;
    case 9:return 30;
    case 10:return 31;
    case 11:return 30;
    case 12:return 31;
    default:return -1;
  }
}
string monthname(int month)
{
  switch (month) 
  {
    case 0:return "December";
    case 1:return "January";
    case 2:return "February";
    case 3:return "March";
    case 4:return "April";
    case 5:return "May";
    case 6:return "June";
    case 7:return "July";
    case 8:return "August";
    case 9:return "September";
    case 10:return "October";
    case 11:return "November";
    case 12:return "December";
    default:return "No";
  }
}
string dayname(int day)
{
  switch (day) 
  {
    case 0:return "Sunday";
    case 1:return "Monday";
    case 2:return "Tuesday";
    case 3:return "Wednesday";
    case 4:return "Thursday";
    case 5:return "Friday";
    case 6:return "Saturday";
    case 7:return "Sunday";
    default:return "No";
  }
}
long long fakt(int n)
{
  return n==0?1:n*fakt(n-1);
}
long long vari(int n, int k)
{
  long long c=n-k+1;
  int q=n-k+2;
  while (q<=n)
  {
    c*=q;
    ++q;
  }
  return c;
}
long long komb(int n, int k)
{
  return vari(n,k)/fakt(k);
}
long long str2long(string a) 
{
   stringstream ss(a);
   long long answer;
   ss >> answer;
   return answer;
}
string long2str(long long a) {
   stringstream s;
   s << a;
   return s.str();
}
vector<string> split(string str, string delim) 
{
   vector<string> answer;
   string temp;
   for (int i=0; i < str.length(); ++i) {
      bool isDelim=false;
      for (int j=0; j < delim.length(); ++j)
         if (str[i] == delim[j]) isDelim = true;
      if (!isDelim) {
         temp += str[i];
         continue;
      }
      if (temp != "") answer.push_back(temp);
      temp = "";
   }
   if (temp != "") answer.push_back(temp);
   return answer;
}
 
long double det2(
long double a1,long double a2,
long double b1,long double b2)
{
  return a1*b2-b1*a2;
}
 
long double det3(
long double a1,long double a2,long double a3,
long double b1,long double b2,long double b3,
long double c1,long double c2,long double c3)
{
  return a1*b2*c3+a3*b1*c2+a2*b3*c1-c1*b2*a3-a2*b1*c3-a1*b3*c2;
}
 
long double det4(
long double a1,long double a2,long double a3,long double a4,
long double b1,long double b2,long double b3,long double b4,
long double c1,long double c2,long double c3,long double c4,
long double d1,long double d2,long double d3,long double d4)
{
  return a1*det3(b2,b3,b4,c2,c3,c4,d2,d3,d4)-
  a2*det3(b1,b3,b4,c1,c3,c4,d1,d3,d4)+
  a3*det3(b1,b2,b4,c1,c2,c4,d1,d2,d4)-
  a4*det3(b1,b2,b3,c1,c2,c3,d1,d2,d3);
}
 
template <class T> ostream &operator <<(ostream &os, const vector<T> &vec) 
{
   if (vec.empty()) return os<<"[]"<<endl;
   os<<'[';
   for (int i=0; i < vec.size() - 1; ++i) os<<vec[i]<<',';
   return os<<vec[vec.size()-1]<<']'<<endl;
}
 
template <class T> ostream &operator <<(ostream &os, const set<T> &st) 
{
   if (st.empty()) return os<<"{}"<<endl;
   os<<'{';
   for (set<T>::iterator i=st.begin();i!=st.end();++i) 
   {
     if (*i==*st.rbegin()) os<<*i<<'}';
     else os<<*i<<',';
   }
   return os<<endl;
}
 
// Powered by PopsEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/