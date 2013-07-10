/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10176
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

class MagicSpell {
public:
    string fixTheSpell(string spell);
};

string MagicSpell::fixTheSpell(string spell) {
    string ret;
    return ret;
}


int test0() {
    string spell = "AZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZA";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string spell = "ABACADA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ABACADA";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string spell = "AABZCADZA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AZBACZDAA";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string spell = "AZBASGHNAZAHBNVZZGGGAGGZAZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZABZSGHNAZZHBNVAZGGGAGGAZA";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string spell = "ZZZAZZFAZAZBANZZZFZAZZZPZAAASZZAZZZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZZAZZFAAAZBZNZZAFZZZZAPZAZASZZAZZZ";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string spell = "A";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string spell = "ZKAVAEAYXXAGPZDOEXBZJVVBYPZLPN";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZKZVZEAYXXAGPADOEXBAJVVBYPZLPN";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string spell = "AAZAAZZAAAZLAAWXZZCZAZZZZAAAAAAANA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAZZZLZAWXZZCZAAZAAAZZAAZANA";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string spell = "ZZAMAAAELHKAGQCDUAAWAZAAAALVUFAAZLTACWAE";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AAZMAAAELHKAGQCDUAAWZAAAAALVUFAAALTZCWZE";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string spell = "DZOZN";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "DZOZN";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string spell = "AAZVAAZVZZBAAZAZAAAAANZAAZAZAAAZZZZAKZAAKAZEPA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AZAVAAZVAZBZZZAAAZAZANAZAAAAAZAZAAZZKZAAKZAEPA";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string spell = "ZAZAAZZAZAMZAOZZAZNSZSAKAZZZZZZAZAPZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZAZAZZZZZZMAAOZZAZNSZSAKZAZAZZAAZAPZ";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string spell = "DPZAAAATZAAAAPAAAAAAATAAAAAAPAAJA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "DPAAAAATAAAAAPAAAAAAATAAAZAAPAAJZ";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string spell = "WZYZZBH";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "WZYZZBH";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string spell = "APAAHZAWAHQHBAZAAA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "APAAHZAWAHQHBAZAAA";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string spell = "IGZEDUORRSOAZWZWJLFAAAZPUG";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "IGZEDUORRSOAAWAWJLFZZAZPUG";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string spell = "JZWXMZHLZZDZZTJNXGZSZNCVAZMOHWBZZWZRZMHHR";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "JZWXMZHLZZDZATJNXGZSZNCVZZMOHWBZZWZRZMHHR";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string spell = "AZGCCZAGXTAAZZPIBZBGZZKOZKBJM";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZGCCZZGXTZZAAPIBABGZZKOAKBJM";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string spell = "AAZZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZAA";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string spell = "ZJGZUZWIAPAZLUZZWZDZZZZMCFZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZJGZUZWIZPZZLUZZWZDAAZZMCFZ";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string spell = "AAAAAAYAAVDAZZZAAEAZAKDZIAAAAHDGZL";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZAAAAZYAZVDAAAZZZEAAAKDAIAAAAHDGAL";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string spell = "AZEOWTAZZZKZAZZZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZEOWTZAZZKZZAZA";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string spell = "EXXGEYHGCRDPMCOROPFHOQ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "EXXGEYHGCRDPMCOROPFHOQ";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string spell = "ZZAZYGZAZGVZK";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZAZYGZAZGVZK";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string spell = "WZXMAFQAAALAYZZAWYBACKKKAAAYUFBSEYGVAPAV";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "WAXMAFQAAALAYAZZWYBACKKKAAAYUFBSEYGVAPZV";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string spell = "AXAHAIESAHAUX";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AXAHAIESAHAUX";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string spell = "PAAWZJAAA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "PAAWAJZAA";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string spell = "AAAOGAFFCFEARAPS";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAOGAFFCFEARAPS";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string spell = "OES";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "OES";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string spell = "ZUAYNANAASAAAGMKAAOAMAAAOHAFAWVJAAKAAAAA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AUAYNANAASAAAGMKAAOAMAAAOHAFAWVJAAKAAAAZ";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string spell = "AZJJHSQAAEACAZTAZWGALRMAAAASB";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AAJJHSQAAEACZATZAWGALRMAAZASB";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string spell = "JWZNRIZZZZTZZWZZZZANZZGZZHEGFKZZJAFAAZRACZRVRZZEF";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "JWZNRIZZAZTAAWAZZZZNZZGAZHEGFKZZJZFZZZRZCZRVRZZEF";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string spell = "CGZZZZUNGP";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "CGZZZZUNGP";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string spell = "LBWXZASGHZGNPZKMUKZFCVRKLALTZOOXA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "LBWXAZSGHAGNPZKMUKZFCVRKLZLTAOOXZ";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string spell = "ZRZWCXZRUXRUEJBXYFKT";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZRZWCXZRUXRUEJBXYFKT";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string spell = "UADZMZATCKAAZXTBGN";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "UZDAMAATCKZZAXTBGN";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string spell = "JAZLKGZPZKCZDWXZQLVZWZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "JZZLKGZPZKCZDWXZQLVZWA";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string spell = "GRCMNJAWSFZAAOAASZAHLAFAAACZRPHN";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "GRCMNJZWSFAAAOAASZAHLAFAAZCARPHN";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string spell = "AARAIXFPPFLP";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AARAIXFPPFLP";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string spell = "LZTUP";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "LZTUP";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string spell = "NAUMTZNMDYZVZAMARFUZAKKSMNNAAHB";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "NAUMTANMDYAVZAMARFUZZKKSMNNZAHB";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string spell = "AAAAAAAAAAAATAAAAWAAAAAAALAASKAAHAOAAAAWAAAAAJW";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAATAAAAWAAAAAAALAASKAAHAOAAAAWAAAAAJW";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string spell = "UTZAZLZZBUXAFNZWAAAJIAO";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "UTAAALAZBUXAFNZWZZAJIZO";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string spell = "CWNABTHAKIUHTUDBMNFAQKLZTJAEFUKLJQ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "CWNABTHZKIUHTUDBMNFAQKLATJAEFUKLJQ";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string spell = "EZZHZFZXAZAALJAAAAZZAAGAZADLZZZZAZZAZAZZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "EZZHAFZXAZZALJZZZZAZAAGAZZDLAAAAAAZAZZZZ";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string spell = "TKTRKXNVZTUWOVJPVN";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "TKTRKXNVZTUWOVJPVN";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string spell = "OMLZSCZZQWMVHMZZBZAGZNIXZAKNZUZZODWZZGE";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "OMLZSCZZQWMVHMZZBAZGZNIXAZKNZUZZODWZZGE";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string spell = "ARAYAAAZRZJAQZAAMALAE";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ARAYAAZARZJZQAAAMALAE";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string spell = "LSXKTPWZDYKZBTVXXJOTHX";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "LSXKTPWZDYKZBTVXXJOTHX";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string spell = "ORAEAQNMHZIYBZGPXJTYULVBUKMZRN";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ORZEZQNMHZIYBAGPXJTYULVBUKMARN";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string spell = "ZPHZAMNAIMUCTSQMNPHWJZZCMPXXZYXWZIYXQ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZPHZZMNZIMUCTSQMNPHWJAACMPXXZYXWZIYXQ";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string spell = "AAXAAAAAAZAPAAAZAZAAAAANAAAGGAAAAA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AAXAAAAAAAAPAAAZAZAAAAZNAAAGGAAAAA";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string spell = "SNQKCZIZZGPVRJZLZJZHYXZBACFCZBHUXZVZCGX";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "SNQKCZIZZGPVRJALZJZHYXZBZCFCZBHUXZVZCGX";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string spell = "ZMZEDZQCAZIZZILIZFSZZXZHKCZEZJPZRZBZZZAYZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZMAEDZQCZZIZZILIZFSZZXZHKCZEZJPZRZBZAZZYZ";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string spell = "VAXANM";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "VAXANM";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string spell = "ZHAZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZHAZ";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string spell = "AOAARVAZZIZUWFLTAAYIDJAKEAAAAANAAAAAUQKAAWXTX";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AOAARVAAAIAUWFLTAAYIDJAKEAAAAANZZZAAUQKAAWXTX";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string spell = "AACAAEAAPAZABCPALAAALARKATAPTAAZAAAAKNYAAMAAA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AACAAEAAPAAABCPZLAAALARKATAPTAAAAZAAKNYAAMAAA";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string spell = "F";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "F";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string spell = "ZOWVRCLZVIZYKZZMZTRZANTJTSAZRZJPAMZQVZMAZAAI";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AOWVRCLAVIZYKAZMZTRAZNTJTSZARAJPZMZQVZMZZZZI";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string spell = "KZAZJAVBCAAPA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "KAAAJAVBCZAPZ";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string spell = "PZAHBIIXQTQEAJQOPFUQVXMX";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "PAAHBIIXQTQEZJQOPFUQVXMX";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string spell = "MAZNTSWHFJRAHQZHKAVEYPFPHUA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "MAANTSWHFJRZHQAHKZVEYPFPHUA";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string spell = "W";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "W";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string spell = "OKMAARAXZAZAKQIZZAYPZBAEAAKVAAAIAAAZAAOZUAZUKZAUK";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "OKMAZRZXAZAAKQIZAAYPABAEAAKVAAAIZAZZAZOAUZAUKAAUK";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string spell = "DPBLJPDYACVTFVEKMURJUEVZITRSCPGLXAGYUIUDAHKXTIX";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "DPBLJPDYACVTFVEKMURJUEVAITRSCPGLXZGYUIUDAHKXTIX";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string spell = "QERZIHZVJAZZZMPRPG";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "QERZIHZVJZAZZMPRPG";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string spell = "AAAAZAAAAZAAZAAAGQA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAZAAZAAAAZAAAGQA";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string spell = "TSVZZZZOUJZWSZQZZZOLJRZSZZZLQASZZZRLZZXFZKTJX";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "TSVZZZZOUJZWSZQAZZOLJRZSZZZLQZSZZZRLZZXFZKTJX";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string spell = "QVZHJRSYDVAFJSHIAJJPZBUOQKTJKXAPHJUHYEJZYALHGBSR";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "QVAHJRSYDVZFJSHIAJJPZBUOQKTJKXAPHJUHYEJAYZLHGBSR";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string spell = "XJCXSFHYYKUJJVQTDPSXBIRGMUWCIZCT";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "XJCXSFHYYKUJJVQTDPSXBIRGMUWCIZCT";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string spell = "AWARUZRAAZAMESCMZGMXKYZRKGUSZBEJZZGZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZWZRUZRZZZAMESCMZGMXKYARKGUSABEJZAGA";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string spell = "Q";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "Q";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string spell = "IRVCZXHLRAMZIQATZBDIMFBZNYMXDYRXLTILHWLY";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "IRVCZXHLRZMAIQZTABDIMFBZNYMXDYRXLTILHWLY";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string spell = "MOPZXMMYGGUJBXHOOMTQTEOXZHTFLKRUKSQPIAQTSK";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "MOPAXMMYGGUJBXHOOMTQTEOXZHTFLKRUKSQPIZQTSK";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string spell = "ZCNAZZZXWAZWZZZZZAZZZAZAZFZZVZAZJZICAAAZA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ACNZAAAXWZZWAZZZZAZAZZZAZFZZVZZZJAICZZZAZ";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string spell = "KLMATAIBBMEYHTXAPWAAYVYCTAAZARBDDDEIZOUZQIWAOR";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "KLMATZIBBMEYHTXZPWAZYVYCTAAAARBDDDEIAOUAQIWAOR";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string spell = "VXIAIAZZAWATADAYKWQ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "VXIAIAAAZWZTADAYKWQ";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string spell = "AVAZACAUYHGAZZAUZZZZAHSAZWN";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZVAAZCZUYHGZZAZUZAAAZHSAAWN";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string spell = "ARAZCZAZZAZMWAAAAAAAZRAXAZYEHLAEZZAX";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ARZZCAZAAZAMWAAAAAAZARZXZAYEHLZEZAAX";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string spell = "ZZWCNTRBTYY";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZWCNTRBTYY";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string spell = "NIJZTJQUWVCOKRBRPGJRD";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "NIJZTJQUWVCOKRBRPGJRD";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string spell = "RZRRQVP";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "RZRRQVP";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string spell = "TZALAAJAAAAPAWHEACVKAZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "TZALAAJAAAAPAWHEACVKAZ";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string spell = "AAAZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZAAA";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string spell = "AZCZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZCA";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string spell = "AZJZAAAZZJBNZABKMZAKMMZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZAJZAZZZAJBNAABKMZZKMMA";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string spell = "ABAAZAAZBBA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ABZAAZAABBA";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string spell = "AABA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AABA";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string spell = "AZBCDZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZBCDA";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string spell = "BBBAAZZBBZZZ";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBZZZZBBZAA";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string spell = "CC";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "CC";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string spell = "B";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string spell = "BCD";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "BCD";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string spell = "BBBBBBB";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBB";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string spell = "ZZXXAAXXZZA";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "AZXXZAXXAZZ";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string spell = "AXXXZX";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "ZXXXAX";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string spell = "BCDEF";
    MagicSpell* pObj = new MagicSpell();
    clock_t start = clock();
    string result = pObj->fixTheSpell(spell);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDEF";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22739533&rd=13515&pm=10176
********************************************************************************
#include <cmath> 
#include <iostream> 
#include <algorithm> 
#include <string> 
#include <vector> 
#include <ctime> 
#include <sstream> 
#include <iomanip> 
#include <map> 
#include <set> 
 
using namespace std; 
 
 
#define REP(i,n) for(int i=0;i<(n);++i) 
#define RME(x) (x).erase((x).end()-1) 
 
class MagicSpell 
{ 
public: 
  string fixTheSpell(string spell); 
 
}; 
 
string MagicSpell::fixTheSpell(string spell) 
{ 
  string str; 
 
  REP ( i, spell.length() ) { 
    if ( spell[i] == 'A' || spell[i] == 'Z' ) { 
      str += spell[i]; 
    } 
  } 
  REP ( i, spell.length() ) { 
    if ( spell[i] == 'A' || spell[i] == 'Z' ) { 
      spell[i] = str[str.length()-1]; 
      RME ( str ); 
    } 
  } 
 
  return spell; 
 
}

********************************************************************************
*******************************************************************************/