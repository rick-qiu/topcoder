/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4718
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

class SuperString {
public:
    string goodnessSubstring(vector<string> superstring);
};

string SuperString::goodnessSubstring(vector<string> superstring) {
    string ret;
    return ret;
}


int test0() {
    vector<string> superstring = {"CHALLENGE"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "CHALLENG";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> superstring = {"THEWORD"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "THEWORD";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> superstring = {"THE", "MULTI", "LINE", "TEST"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "HEMULTI";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> superstring = {"ZYXWVUTSRQPONMLKJIHGFEDCBA", "ZYXWVUTSRQPONMLKJIHGFEDCBA"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "AZYXWVUTSRQPONMLKJIHGFEDCB";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> superstring = {"AK", "A", "E", "J", "C"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "KAEJC";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> superstring = {"MAL"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "MAL";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> superstring = {"NGBAB", "D", "AJJ", "FGCAF"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "BDAJJFGC";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> superstring = {"J", "KAF", "J"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "JKAF";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> superstring = {"HADLH", "O", "AOLL", "B"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ADLHO";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> superstring = {"MAGG"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "MAG";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> superstring = {"AI", "ADF", "EGDKO", "A", "K"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "FEGDKOA";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> superstring = {"FMNB", "IKM", "GD", "D"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "FMNBIKMGD";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> superstring = {"FIAH"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "FIAH";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> superstring = {"Z"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> superstring = {"AZ"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "AZ";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> superstring = {"ZZ"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> superstring = {"ZZZ"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> superstring = {"A", "B", "A"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> superstring = {"A", "B", "B"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> superstring = {"A", "B", "B", "A", "C"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "BAC";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> superstring = {"XBGHEWUAAWYSAIGCAMN", "B", "SEQQGCEZGYMLMKK", "A", "L", "T", "EEWZYWASAOK"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "HEWUAAWYSAIGCAMNB";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> superstring = {"U", "DZWZIRUWSOJESS", "X"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ZIRUWSOJE";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> superstring = {"SOJCAUNVYEIE", "SCHEUEPWILCGOCHIH", "OQSLONVONGUSN", "JMPAMKQWYW"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "CHIHOQSLONVONGUSNJMPAMKQWY";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> superstring = {"PWAOO"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "PWAO";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> superstring = {"A", "YSSAAACUK"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ACUK";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> superstring = {"GLKGAEIBENJPJAOCS"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "LKGAEIBENJPJAOCS";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> superstring = {"LSJWSPB", "ZAGUUIOAYTO", "Y", "ZWGQKIGUWWAUKBZYZIG", "E", "YOMNC"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "WAUKBZYZIGEYOMNC";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> superstring = {"UUYGS"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "UYGS";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> superstring = {"I", "EAOMV", "YLONVNUOWECZOUCOIEN", "A", "IJEAQYGYGGAJEU", "AKUTEAMMCGIYUEWAZ", "SEPLTSUIIWSRIAGWL", "NHMYOPUGAUIEEEOWWGCA"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "SRIAGWLNHMYOPU";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> superstring = {"U", "AZCQCMYAU", "XYQFR", "QQQKMCBTF", "NCAKQGGIAOAAIMIAECGI", "IEAGSKBAAG", "W", "G", "AMSED"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "AUXYQFRQQQKMCBT";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> superstring = {"KAIQSZJGG", "UCQQQCFUYDWMHACAWUWIKBKYNVKUSOKYQUMD", "IUDXYIZNUIYPJZZGGACUNOQKAWMFAACUQMI", "AQCQEJOAEQGWQAQ", "YUSGYEICKTUMZNAQPCSPF", "CKIECEAXJXKMSKUMCEVBKIUHQRWYISC", "YIMEFAJOAWJ", "YK", "IAWWWQWBVONK", "AMSAAAYUHKGCKZOOPCAIZYQONUYSUPOWYH", "KGAJADNASCLOKGKXMSQOEESAUQYHANCKHIRMDOQOXDAHARYOL", "PAYDWIHAAWO", "ANAGD", "WQTOASATGUCKWMMCEATYAYHQETENFERAFEILGL", "TENYYNKRDAHOMOE", "AZTQAZUMQPIGOOILOAEGGQURAGOELFYIANQIEE", "MIOAWYC", "LWG", "AGCWWYQFNECGIOAAGUEKD", "EKQUAUNWSCCJUQUQPWWDHIEINAWVGJGISUEAOZAENWW", "IEEYZCKCSJWVXNCJZSGMVS", "UXOYAMIKQAAANMYUMWCNLUJPBTZA", "TGFSEKCCSCIWCMSIKAP", "MMBKGAHGL", "DQCSZRUTWEAYM", "ANGWXKDIQIAYGATMIFSEYGAUEWIYZCIAPLIGKVO", "UUSEUZUIATRXOOCAPNLCFJSCOWENQZNZYSBZDGFAGARKOVK", "PPICGAEAGVKOU", "CQWFWL", "GAMASBRUMHRUOCYHYAGRELWAWGNGGWEEQAHOADY", "KWZJWNQUGWASMNWKIHGAACALLAHUAVQUYYIAGBQIIUGESDA", "KNGUWGIQUAOA", "WJQXMGALKNQIKQMSCFWFUQKOSQEUKEBUGQGNMEXA", "MSUQSSSEOKHQUGAABIOOKGSMKU", "R", "EKYQOQSLMJAAQGTIQANADHGKECGTCJKWMA", "YWE", "JACEPGXGXCSWDAYQOMBOPXKIAWM", "GHZETHXRKEECAOSWAAQA", "RCGMQIVSUAS", "YUSIQCAAMESJUEIDVSEEGEOELNSOCWJ"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "APMMBKGAHGLDQCSZRUTWEAYMAN";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> superstring = {"AQMKIHXUJUGMAMGYMYUGGGEAOG", "K", "FZDYUNFMANM", "E", "A", "TNGEHYYSUSUECOOAAYN", "SMKYSWQLMMAAXAUIDSIHYIQOOXASGSZTGAQQRAVTUAUSA", "AWCMIUIUGFSOZAKAAXAMSSSICQSEC", "NMTUPCMAIEA", "CUAMRTAAMQKCWAXSKJOYKCVEANP", "SYIFUGGOJRKQSAX", "IAWNWUGMPGSCMUUKXKEOATATNEIGGXACO", "VKNBCE", "NZQEQ", "ABCAAU", "TLEBUNGU", "OYIAOGUANNVLQQWABQMIOCMOPQ", "KOGLYQMXGIH", "KUKCSNCGEUM"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "CVEANPSYIFUGGOJRKQ";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> superstring = {"AEOSWSOWAYUSYOWGSEWOCQSSASRAKHM", "WCEHS", "KSAAKWZWLUIVOSOYDQXBLKRMNYAWHMFAAEMAEXAXOFAKA", "YKAWMUS", "K", "VOOKAAOSEEGWCSAAGNSPPCXYU", "UILD"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "UIVOSOYDQXBLKRMNYAWH";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> superstring = {"HIEWQAAIOA", "EUWQAAHDQWOXSFAMISQCEQKDUYNYWGO", "O", "QRI", "SGWPAAYAQAQPEXZJR", "JKMILUOWKHUUIEKSGOODUMBMARCGEGUNGSOYBNDGME", "VAIMNCOOT", "AQFLNOCKDMYDAEHASGCYABKPGAELAYYINEUCWECAILKWROG", "RZGMKOTSTGIYCUQARGRIUACAYUIIMBYIIEIE", "USVPUIAAQAEQZGJUAKQOSSNKQSKBOYEYCUHKKKCZAECSY", "OMMFCJTYMYKBTCCXSFKGWYYAPIM", "LQWQEBYVAIHWHTASMKUMWCSZGJINYV", "ODI", "INJA", "CAHGDXMZRLAWFAUGCGFMQSKQPWAGIJI", "EVAAAQEOQVOTYUQOUANUOQZJKSQYACSKQIEQOK", "CIMKPTAZUGSMBEEYCCSU", "YYESWVJASIOEIUYGMCNPUKZKFQCANSKQT", "AASBCAGDALUQGMO", "NJAIQKXK", "AMJWAYYFWCWYAXKLZXMXGOXWAIKUYWXQNIQNM", "ESWUG", "UYENWLWEQCHQNIAAQIASIBIYUGCIWIKLKGOAIEGA", "QQV", "DCGAXBIADOPGECAAMJOQSWEQIAODTSZWVYOUV", "UHYATMOCKAOQGYHQSEEAWMDFIWNWRMRGQCMWYAEAFAJCIVC", "QDYFGKPYQYKQGGAOCAJDUKOGAFUASRH", "SQUTGKASUAWQYUWUIEYGSGSUBMMVEMAMUYMJZRYWGN", "O", "YOACMXWCQFKVAAWAV", "CAIAGOQFSXCBCKEORMRTKPB", "ZIIOUQORUMHYCAUKAQALJ", "AQQCFSIKOAIGHOC", "UENSSIZRJARMSQMREWT"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "HTASMKUMWCSZGJINYVOD";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> superstring = {"UUGHZSUHAUOUA", "OCYKJKNA", "WXOWKQMYBYAQOFMTYFETSAYIGLECAXF", "JEEOFVY", "PRKUKMSBLAYBCEQNYEDACPAOAQCNMGACPKS", "ASBNWKSCSZEMISYQMKESGXCSQWWYO", "SQGANOPGQJBHXMSBMIEEAOQIB", "YGOZAQADGWYADDENWCSVE", "CHONAGLEMXQOZAIAYIZALSU", "U", "FLGAYIGVAOMXWQQGOOOCWGCQQREQSQEWQQASQWCSUAGUM", "CZLCJAGUMRBYFOAWECIWIWQAIEANHBDK", "MEIYROQWEAMWKUXAHGMEEXUYPUNEINCL", "L", "AILOLMIOWIOVSKLQIAYPEZHNGDFAYSWWSAANQUJKG", "GAYPACBSOGEPCGXSAUWOOPCQJUASUCAC", "PQUMNGAHKEYBEUTCNQFAEEDWPYAMSKQULEVUEAUUD", "YAROIRWNBKCFASSHFPLAEKGAUWMOIUG", "KJSNOAGYPYDEMSSVQLATDQY", "QKOPNLWYKIUGAIUE", "HCVQZAQUSXLESYAKZGT", "ZWASALIWZMEUEGSFUMWTUWVMCCSOBCIY", "U", "AJPWQHOCCGKUAWQSZYJWCCHUIKAYLEUUOCXIIJDDI", "VUASWUCAGAAVOGGAUMUYCGQQC", "S", "APNENWK", "SJSESOIPJWOLIRNAKMUVQMMKD", "UZSAT", "OIGMIGYKEBGIYSWYQAWFBUCILDYGDRIVYJAKMWHYSTEA", "WOZOAHAKBWUKCAGQSQSBEQQ", "SGQLVOUSSEKA", "ISCQVSQLOKQNABSTGWIEB", "SCIYIGAYALEARQYYKNUSNULMDEYAMSQUCMIQJIGCHLT", "DNRKMDRABEHESFCEGOANANF", "X", "SJXYYYXGXMIKEE", "IAFAYKGFCQYXUUUEEMGIWNMOURWUITOESJRMYOIWYEBOEHQ", "GOBXKIUGGIYKQQZHOHGQYHQCMUQNASC", "KIWUUCAXWSOEQAL", "ZYYIYYQXJNNAGUMAKGYMHAHCA", "SUGEYMWCSWGYAMGWATWAMCZXYWIKCKFWAJTCQMZG", "WZMGYEOBXOGSXXDGMXYKXUDOBISBEINYA", "IUGEAQJYFAZIRMCOGYDVFYNIXAGMZNGDKGLG", "EUINLJGUILECMMQCAUAQMAKISYCAU", "BKEEOCAMOJJOICNOAUACVYTSWRR", "NNAWPMQAFSIAN"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "QAWFBUCILDYGDRIVYJAKMWHYSTEAWOZ";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> superstring = {"MCWFCAOYASYSWODQUKAWWAG", "KHHZ", "KSZMKB", "TMVUYEOOKNYAUIEDALYKEHYXOWWPCGOFCSI", "JZEAGEGCHNIGRIAAIRUSBGYUAVVGAAEWOMDMJJUZL", "WBNUAACLUADMO", "OMAPEHEIFAKDAUAKVGFCVAOFQSO", "UMCWMXGNWSKGGOUMNARSKMNAECGCQPO", "WHFNYCOQIBWEI", "HEAUYUYIGBUEKIGSUBCKAKOPMQK", "WCRRMWVIFMXVOQEKMWWAOBASCYJENCOOSSMVWPAGMDGWYV"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "BTMVUYEOOKNYAUIEDALYKEHYXOWWPCGOFCSIJZ";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> superstring = {"DAUYMMYMIWMBQYAUOQASNITHCHIUQLVIKIMLZ", "WAOOOTUWALE", "EIYNIAAMKMF", "WDUOEYOAZXSUAWMK", "SECMCFEKNADANKNGBQHOEDLSXVGGNVWAEYPCKSW", "CCMQUCVONSYCTAM", "YNEIMGAKSYEUIYWGCTWLICKQUPAGSIPIWAGFM", "GOONJYWMGRAMDXIFHIWSYTLGBVOOUOAQA", "ASAAWEYAGNZUUAABURGKQKQWZOK", "GYCGENWNGNTYYMBWZJKQEJEUIUUM", "NUI", "XPSKMSYEYVGBCABGACIQGPZYOULITSGKA", "IJSGYSMDXCQS", "OUFKCULVYGGUQSJINFUQMUYAOMUOFKGKKAQDMGL", "XMUAGKTAAQUKAMVEEWYA", "IWI", "AORGNSGJICWMANWCQFAFOMEWEWECF", "DCMIWBRLKGIYMXDATRVVOUEAZKKTEQPJUFN", "OEFWACMCEUYKGPFA", "WQAOEVNNQJNAQHCIGSQED", "ZOYAHEDBSQALYXKSINAIS"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "MDXIFHIWSYTLGBVOOUOAQ";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> superstring = {"AQGCCJCSKACCIAKIGSMOOIBRQTMRAWAKGYQRKSJYAYHYWOAEN", "GQYMALUCWCZQWCPNWQUWWQYNIRSACNQYNRDAQ", "QSJNGAICGCYOAESHAUWXA"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "RKSJYAYHYWOAENGQYMALUC";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> superstring = {"WOH", "CSIYDAZZKSY", "EHOUIGIIWGUOIXMSK", "QOJEQSXRAPCUCYSVXSMOU", "AGIYIIXMYKSUGAUGDQJUEHYJIQIKQ", "QAGB", "AEAMGGQSTXUJOKDNAYEEAUYJDZOMWQW", "ZXUNHQYTUWEJSMG", "KYQNHEGOMYGAKCMMRCGAQAG", "IWNGIETIGJUIKGOMEJSQGAPOW", "NFCKC", "ASB", "GKHRCIHSAWRGGTJAAOXAKCYWASSTFYOWHQAAITORMAAEZY", "AYSHUNOPXWIGWWJKANWAAQQUGZAWAXA", "OOIUUSGUIGO", "AIGFKTNUOZSOOUPKNOYAOZ", "EMIHQERKGCEXQAEUIOECLBCINKQEKLWOTQOSLHKGH", "HZMWKEQIAAIOAMNDEUANZAC", "AQGEPRGOTWCZQMWSUUEJEVNXGYGCQ", "YODOUXWQIDICSMCLCNEVASALGQCWTGKIJRIQGQM", "GYNOJDDSSBWILSHIA", "A", "GEACLICZVSFKWSNSIEAWFAUNYAMQAWOJXKQK", "UQBQIWICQWKNMVQTISGHIKIKRWHAAAIAAVAAUGIKM", "KYOCG", "XACQKAUXHCGGVMUAQUEYJLKMHAMMAOHTSGQ", "KMVNUNMYKSCMZFOEWUISAPEAON", "MQDOGRAAVCLUMOKWWIENFCSWAFOATIEOIGUQZIUGWRSEEU", "RONIEMMMNDAEYAUOFBOGTAGEHAWXWNNY", "GUEAOXEEKFSVQGGCAYHOLMMWHMIYSOQDWWWIWYFENC", "MMIQFKNQHMCWGAKWIOEYYKFMEWKEHUWYQUWMVIYUYLWBKN"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ZFOEWUISAPEAONMQDOGRAAVCL";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> superstring = {"WCATIIOLMOKCFMMDVOI", "JDKOAOYAHLGERAA", "TNDRPMMIQQESWAAEEONNARYUAIAYMAVIAGQBWXYDYCN", "AUZSAMAFCAKFSWQWMGWZONAYWEIAAYJMWUUFWBISAJ", "IEMTQXK", "HAHAEMFAGYKTPOYQYEAIJ", "WEIOCAATQYAYMDVONAYZSCUOQOEGAQWANYPI", "YMMUGEWYAHTAESYWENJIHGVKMQFUCDLWAMEYYICQCCZIK", "PVKOBC", "CEIMFMPVIZMBKQMJAOHUUAONAUIMXFC", "GIMEZQGEQNQGDAOMLQOWCIEKEWSMWKDQBUCECP", "CDMLGBMAGYS", "OAEAIN", "MSF", "LDAXNUWYWAMJJAEDYNLOCXPNBBCKBCEO", "QNSCGJALSHALAC", "Z", "G"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "TAESYWENJIHGVKMQFUCDL";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> superstring = {"DQNTGEWNGGONPLKLUNYCBYEUYGGGWSAMCLOTYAWAGTCSKSCASM", "QDWCOFGCCJKIBAJBYCLXGAKGQTAKWARXAXCHIYISGYIMWGOKQB", "EOUNYOWOSECFMKAMSATNKOWGWZZGUEFKACZSSXHFIZKXQIKMEA", "WESYRDMQCQNIAHMSQQKSHYOQQHCCNMFAAAECJBUICAIQCGQLAC", "ZKUUOTXSCOUYLOEUQKVQBUKQKUSNAEYGWOYUWWZCCVVDSAWTSW", "SSRLCCPGZAASOVNWISNSYIFMZSLOBBEUSAIMASFVNMIQAUNIEU", "CQMMACDWYRAAIABAOIDZYMQFRUNYCADXCIGIADPGTRIVGYAIAU", "YACABECABUZAXUQWEYUQWWAAKNSMAEALIUOEGQNHKUANBGLJZS", "MECBEIINLKCMJEIMNIEQAQADQMOGQEJOQIOCQUUOJICMSMOUIK", "YTMFBONWCAQEUEOOYHSUAEFYILAHKUGCNOOIUCCANKCTECAKIB", "EIJMAGIVJQJCEVSAXUAXKCQFAZZKBWWAIKMFUUZSLMJAUIKFSO", "NHNWNMYUCXCDGREIZHWKAJBMQTEZOCUXPGVOASMYJYWMIDSCSM", "MGNDWQQSYHQCOVHWVAKRPYYEKGMEAWSXMUIXMFKQGSIQGHIGQU", "CAAFSKOWAUEEUOXMAFNMDQOOIDCGHVUUKEZNYWAVMSIEFYQXAI", "FYXARKBHANODACAAIZCCTUQIQCUWMMKEEKGMKKQQOCMEAUMSSJ", "RQWARAMEAAWKCIBKGBUBRBAAMAWEMOWDBIUASCMTDUOSABMCQK", "PBEYKENSLNEOQIOCTOPUUPSEEKXWNOYVUDMAVRUPQIENUQWAHC", "GWANYUGWOAYMAONQNGYUALPBZEWKEEYUDQKGXIUIXYOQICDOAO", "OMTGMKMUNEGGKESASWWZKKKSSDYAAQBSYISKUBWMQKECQDIAKY", "QMKXIZLNAGKGVQCOWNALBIMIXEWIYOORAZKIQMCSKSOWOMLAKC", "NPSYWSDEFXMCJRIMCAZWWFKXQJTRNASOSKKIBXQOQBMFJKRCEH", "WKVWWOFWURXGITFQQWGGYEHUEBOQCDUAGACAWBIWJQMBIKYAAM", "IRQKOKNNEAIXEXTLYCWVZMAHIETTPAWAUKXODQAGIBAUACSXTN", "QUTGEGIAGKWKKKKOCAHXEIQWSTCAIZUIEAYEMOAMIEYIAYYAYJ", "AUWMHAEGMEYOZMCNKWEOWUIWOCSFWIWUAUHNYOYMVALKLYGAQL", "OIUHUSLAAOYOKOUWZQEQYKNRCCSWAONYEYKDYATMGEWAKKQLUU", "FBOVQAWYBWGYMMATAXOQOANYRMSWYGBWGKOMSSIDESCYAOAYJU", "OYHHCMNSAQKUHKAFPCKCIDMNQALOYIFKQYACAISLOKYSAYLULM", "VKNZGKEGKXAAICCQSCVSEAAZCJJOUKADMLEGQEVFWHCQSKSKAM", "PKZAIJOOSXOFQOBEOCXSMVIGKJPQKFWSVTGCEONIHIQMMTYEKT", "EKVEQAUUMCWUGZOEKHYGCBRBOAUSIASUWAMWAMGSXSYYFWIUMM", "YFSANOHEYXNSUBEQWLJOQLWNDWWAAOCFOJWYGDAKAEOGIAENDG", "SDYUOSAWTCWIMSIJIFQSAGUEEOWMHMWZPYQCOQEUAMUJYQZKAJ", "AAKMSYCBMICUAZGOASIGEYHICOPDCEKTELUAGNAOSMAKCUMGQM", "GKQOCMFJSAUIIFCOCZSDAUOIJWAGMWJABNOFACAZEWQQVZOGAS", "ENJMEASVTFOAQNMCHXAMWSQONYJAWLYOAUPQCWKSNATDARUOQW", "OUHMAXOISOAGMGUHLIGHCEIIYONXWFCSLVTAXGAGMQNICOYNEK", "AWAAYQABKEOYSMIAQAJXFUKFQEYRGIUWPOYIAKXOMNQFDGSPIB", "AIAQOBISMVYGWUKSNDFAMAWOAGWGWGEKKOARCPEWCEKAIYZGQG", "IRMVQCCDVQUMEQUEISNEMMAHUIONCGVOUKICNSTKQIXMUICWHP", "DYQUHAASEUUWPWKKGNDPKAOJQWEAQVWMEOMWMPPOQQWHEMEKWE", "ACCIJIZTEEYMGOZWYGMNDRUEDOCEBSYYMNWIOUQQAOIWECORIG", "SYYZMRGEJKWAICQGMAMHEOKAQGYAACHAPANQAASYARGJXCAECS", "GYZNFAZANIUAYWWUMUHASMMGAATGKQMMOSIMWTANLEACMOCGDA", "FFAACUMOROINYOUAFATEJWOPSNRIGEAJAMAOIAKEUPQGUAUCJC", "KJFOHOBWAEFQZYACCEWYROPAWUMAAUTKPYGRAEMIARRLIOUEZF", "AQSMGOYUPVBZQZKMTONECQSSVRJEGMNQAIOKSNCOKNSOSMOVMP", "KYAAACNKHYKQSAAWGFEEWVKUACJIAORCNSKCAWUGJJYQCWFONE", "IGQWTSYAMAXGQAVGONCAWWURBSWUKDOFMOSDAQBGFTJJICIDNA", "QAHPHUUMMQQGAUKEUQBMIUXSABUNIYMYWTKQSCEMQWVVMWSYAA"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "DGREIZHWKAJBMQTEZOCUXP";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> superstring = {"WMAPMKBEYRKURNEAGIWIQOCDWKGSFINCCWCAEQGQPMSWNCEMQM", "JOUAAGNCUQIJKICMEUOCZWCOCEIGAZYKPRSUAAKBAFECBVPNGS", "KGGGHZCQWCUZSMNCWVZCYSGHSPAAMLHKFCVGWUKCANMQGKKVOS", "IVKNMCVOAEKOIWFOQKKLWOARNSKNQUUQAWADZPEWCQOQYIJAVY", "YMSAQBKSDYMAYWGEIEQNOIAOFIICADCAYEVHQOPRWNGQVBMQNF", "MJZDYNGMSENYOQCWUEZVVIRAOMCEUERGHCDQAKUWYKIHXIBNID", "EIAIURNCZUWAEXAWSAAOPSGIIQCWASUYPVNACWVIAOMAQGGTSA", "MSJNXLBKUVICGPARAKTHQKEUUSHWEFAEZWAMAQYGWSIIMUUZQG", "HZWAKQYCOIVMYLHOKWCBJNXKIGNKFHKAZKTAOOEWNOAGELSIVN", "QAWUNASSFNOCAACTIRRFCKQNYUQXKFRQOOGWKRXJOKQAONQISQ", "SCBCGOOCYKYNOSIQVGFCAAHPMWEWBCEUEMUJETZYCAIAAGDZIN", "KNOIGMCUWVWOCGGOMDAWMYSOSUCNLIWHYIAICSOVSELHMEZMWN", "CMACIVAUOKIVZKUECYKYRNGAACGQGWCACQVYQEOCUWALYWATZH", "YVAGKGSKQEKIXIAGINAQEYFBGUIQKWSIUILAYSDITRGKJFCUUW", "CDMSHABWZMEEUMAWODKQPHCEMYAMAUUNYKAYYACKCMUMAYCBGO", "ULKKGUIGTQUKIZGREYGASEUXQEIWOAIIAYGKONAUJKVKGOPNAY", "CEOJUWGAGSUAJGNKNMOQPJZGCCMQYWESMVQAAOWANAIFCQLAII", "TALYSHTMVGYWSDOPRSIWSACDGTMUAGYBAOGIOCEHNSUSAQVCGO", "MKFXEIAHWEQMQGVLJIGYHLTMCLAAOKIAKKCKQYOEMEIAINEIGM", "KAOGCQCKSKAQYCMUGMNUMCEKNQKPCTFSFRAKWMBSIHCWNEQAAX", "IHITUQMNXAMBFMUAKAECIIEEKNQEQKWCWSJCPUOKGOYQDOKAUA", "IERASGYAJADISUDZKGMHRUOOMMERGASAAGUMNMEAADDONKNQEW", "QRWGCSWLGIWMIBSSSBAKDHKSLMCNWKDYRPBWLPAWAAKHIOTODA", "YUMIQCEXYCMGHLAAIIUNKFINSQKOQGKELUAALYGUGCLKXOKQQI", "WQJNYJSMVOBCRAAKWJBJCLMEWROIEBOIEAWUSALYMYQWEYWAAW", "OQAUNGUAAWQYKKINCMYMXAUEUEXYCAEBOIGAVKIXSOIANQAAOL", "SLQYEGUQVAECSGPAWMZETUCALZEAQCLUAJLSAYFSWAIWQRSAQG", "AGYNPGUACODJUXJEDQAAOXAYHOWNVFWNASTABOAYYMTARJMKMI", "GPKAKUWAUACTNBQCOAHXSKWJOAXSHBKZECYNUYIAEMKAQCIOUN", "NUIGUKBYSWZSBDOEEDSWJGMZKWAGQISSAKSATOUAIWAKSKGCRF", "OCJAEWWKMAQGSBVMMOHMJDUXUGQSIGVOACLDAMAQDHHSLIHEAA", "WUGLYAGMWDOETKWCUCVRTYYZKAGMKNKMKKKWQSOHAUDYELLOUG", "AICOWAYPLABAMVJKCQCAIIJSNAMWGEPYALNQOUSYQKCAIISEOQ", "GKPNAKOXIZBIUWUGKAAKGCWMEPILLGKNFWSCEIYQSVGCSWSSOF", "YOPXYIWWXMSMQYIYMPHBWDYAKRABSTEAYMEEIMHJKQBNOINPOM", "YASYUAEWYHSQWAESDOYUKQGJOYTOJTGBPAMUQFAFAARMUWAVJJ", "YSJNJCNWNWZUCEUIAGTCEQIMAENZJOSCOIYZNKUGYBWHMSOJNC", "PJHEQMQWGCCKXMRCWTEKDASXISDKRMOWNNSYYRBNMQSCRGKAWU", "KOQOXMYOQGMCKHGSIQARTBUBWIBGOUWASCMDWAAAUUAZICKHVA", "NJIWJGUDYEKBQYAGMMUBCIRPSUGUCCCZQCMFACNWBUWSWECNQY", "IYKAJSWYWRIYTAMYETAOUWINASJACXHOICUAIYVTSPYYCGAJAJ", "ONYSBKCEIDMNWAUGVWJABUAGLOYOSCGSIMCUTOVLAEQGACCENI", "QCOTOOMCCSGCIEPKIENATECEDYYCAJAIAFOASAYESMGIHCXFAY", "PQCCZZZCATUSGHUPUOAOMIWUNMLOAILYJUQAIEVEKYYIOKMBMS", "EUACCBUSFOOQMIQBGLAUCMEHQXCIBWAUQWCPSRPGEACYUATSSA", "XCPAWONAYLSFAGJMIPLGKUQKXKOXSOONNEHQEOKGEKJCMPDKEZ", "YIREAUIBFWYAXQAXADTKEWGEENIHROOASKGCCUSMAEUAUAYQDL", "KETIEKSMRAEARKXZSNAKEEOCEPASEEZPXZEYFWNUIFBNEBPJSJ", "HQGKKDPTUYJSSCGAISAXUNROANNYFBMWWAQJMASJAYMCWOLGTU", "XHIBEIVMAOOGKNIYOOQAEEAWXGEEBYWVASAYAYGOBNQOWAHAXA"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "AMSJNXLBKUVICGPARAKTHQKE";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> superstring = {"QQMGQMAYYWAYXRAMYSKPNQQQWGIAOJWHRWOONMAOWGEASXQCKV", "JIQGPQKKPMWYSKLMGNZKMEQEUIUDKGYGGGAKSNXXIOFGDUCQTQ", "MEVCVTAOZIYIWISKYBVAGPUAKUEDEUUFYOAAESAQOIGTQAQWAQ", "UKASWVSNYYEEIKBAQQWOSFIIWRYEDTTVABEOSADESKTLIOQNUG", "FGWEMFBGVQIUHYGDSKAGQAOAHGAGOWQSILHDASXEZWJNLAUQNJ", "ASAKGCIAWSXFUYRPWKZMUSIWBWFGRCPJRDGCAPWAIRIOUSUGSW", "SIAYTOHURGSOAEGNQRXBAPFAKYWAKAQAINNRUNAUWOOOAMMUGK", "QAZDAWWPMGHQLWANYRTEOUJJOCWAAAYEQAAOEACUOLLRCIVGLQ", "KOSNKFLLZQAKUCTSUOIXAYUUHMQWEUQYCWUQKQYSEEGCYUVDUR", "WMWWRXDOQGQNSGOCKLAQLAANCYKZGUCQJAAAOAACWAVAJAAJYG", "CEASIVMMBAMLPSZUYSUSWWCOAPMUBIOWNCJQVMYYXCALAIYGMY", "SGKJIDKJCTAENCQEMAAWSIYIMQMOUKWMLIHSIAVUAZAAOUSOQY", "SIQKSWGIAATYXURAQINQSYVIOKGGCSKQFGWBGOMOMSSSQEWJIU", "WOIIGLECLVSQNSMIWVBYZJWIAWJUQUDZQMSGCWSQIUISRMAGOQ", "NWAAAOAQHSFOYAYTDADOYYOAFMEMDKEKGEVMAAEQAMUODOYUSE", "CMHEAQQZQARMMAIQWIIKKTYKUWKACSYEMYLBCFYHAAJOIAYEQX", "OEWMSVCZGAUYMXKYOTMSCYUKUGDLHBNYOKUVSNIOAAYRAZINEO", "SSAXAGWSGNCCSCZYSNQAEYBVAAIZESXGZNYMGPKMAIEAPVWYNS", "WYFBWKUQMMTSYCOISAMAGSURUZHINACKPBKSAHBCLTYAAMWAFQ", "IKKIHRPJAUSYXKACTMMQKPOWWZIFQSDKHKVQQEIUJSSSUFOEQM", "STKGIWABQENOIMMYAUOMOEAYCKGAMAEFWJUDPGBAPCQUQGRWRE", "UWAUWNAHNCWSVNCWQAHHEAQOAAGGAEIYIEGEMUGOWBQSUURTEO", "SKCQAPJNUSNDAKRAUOICVKNEMEMKNYALESKOVAERVQXUJACPEK", "MQWKTHSSMIDDKIZZAEMWJOTKMUAUMEHTBWVMAKMNSPMWFTUEMC", "TEYNQTAIEOSQCKHAECREKNHLQYIAMCASCIINKSRAAYUSAZQYHJ", "XAUCCARMIYMOIWAQBADVNGENWBKUMMIYAYMJMBMOGKSAWEFEYY", "AHMLBPEPAKLYGVQGYMCYRCIGFROHNKVWSVMWUGMBAAAKBWNWBC", "KWYVUKIPCSRAWWRGIHICCRKCMSKXYJUUOYDAISMCYXGFDGGTVS", "MSNAKAQSOVTXJYNGJIONXGJOZSRLAWEIQAWOWIXUAQWYADRLSA", "WGUOCMUUABEEMEUYQMNAZEOSASZMPOIAEXEUOCOAUWTGMFSJYH", "AOXOCPSRACSBQPVMKEKKMGHBIWHICQUOUINAVFRICAGUVUAEUN", "QNIKRQOYMOODAJMXPCOAULAYWMHEYNNJKOGUATADMAAUAAKVMU", "SLZAOWEAGBWKKWYCNZIUSIGYMPALNZAGMEOGGANHIAULYZOAKO", "GHOINMJQTIWZCHKNGWAQUHOSISYASCOEUZYWCPAIMHCKNIIZCO", "YKASEOQEZMEHGKMCKZYLIMUQOYQXKAAYCDKKAYWIOLZAPCNRZG", "ONYWUEWQQMUAVEMXWGYAUKAIAUMCCGMFQJYKYUJRMAYMKAOAKJ", "PLAQESGEONAOAYXUWOYCCIZVTYQUAAYQEKLQIRMWTHMAOARAQT", "UGGNIGYPWSSVJKWTJKYPKAGNCMKLGWVWEGYEUQKOECIPAJAAXB", "OGAAIFDGQLTQEJNUDENCHYKKSUCSNUAICQKSMGADMUAEKUAWAL", "DBWLMMQGAUNGGSEFGDPICCCSMWFCOOHWYOIAUYESLJAQUUQOAS", "CPWILEUKIDUAENVCYDQBEMJQRKUAELKAKUUGMMAMLFKVUEYNAC", "JCEYCAEZSAIEOOCIEWMOIQMOOWKKAKQGKYENIIYTVKIOMXSIVW", "LYKQWGXAETCIIBMBWGNTIGWUJSRZLYVAQGIKEJUAYIAAKUGGNY", "ONNSKHEYGAGIPUTFBAGVSMVUAJMAIUAAXGMYAOIEWKJUTYGBFI", "RNEQSFZOVXAKXSYQAYKEEBYRMJDAMGQOCINOAYRUIMOUGSIIWR", "LVSCUCAANNPTIYNMQEAXKWYQWOOYUSAEUSYILMACVBJGYLMWQI", "MNIESAAUAATNKUEXQOWEQQCCOIJIKKUSCSSBMOEUSZAYSAAKQE", "KPTKYCAAWHOQMAIQIGAUYAONNADUNUKAGUUYNHGAAATSSQKGAI", "TIIFMUEOWPBWJQSANQWNYIAENDGRQOUPCMVEGIIMGCAAEDCDPC", "UZNHRUGBMWOGTUCWMYUGAWMXWHANYKWCWBSEODCQQSWQOWCNAG"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "WKJUTYGBFIRNEQSFZOVXA";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> superstring = {"XJPBSDAMAOLYNZMNGELUWCBGISXWUYKBWKARIBUTQZXKSXNSOC", "UKIKCHEUKVYFIKOPGIZWADAYFGJAMLJFAIAGXTRQMSLSAOMASW", "IGAXSAQGWQWSUYNQEKAYBQAMEGLYCGQGQFUEWLVZAYPEIICMYP", "CWZBFAKSBGIUCWKAROKCYISEGXEKACKGIEYUGIAEIDDNYAAYON", "BKOLMGIKSMRWOSTSWEQAXCUCAAIMWFWIUAQWCPULUBJGEASXYS", "DAGCCGCWWTGNQHYDDANWCTQBRALSJIOLQIUTOEAOSKMQAKYSCU", "VNYQUBQZKJAAKGEKKKDUNQPYEKLKQKEEBZWKCUYKUWBVAOIUWP", "HTQSYWCFNAAOUEFXCSEEUCCJSCBNYOACXSQSQIMLSDAWEGJCMS", "VKFIMNXMTMAAKEGGCDASDAAWNGCNABEGYFOYAOSOSHZIASNEYM", "YANONIQVALXBIZWMZJIMQEGLMSMOZKJOOAOVKQIWYUPABPKQUF", "PMBMMSNGMANZHSNWPJAAQSXKADNYNAUGUPCWBFRCMQGNCSAKLO", "QUEGUEYKUJWSWEDQHQVDQUOFCYQGRGCXYOHWGCKCFEBGYCIMYP", "LMSAATKALAKMAYKCYYPGQRNIWAEOARAEXMWCUQAYASIGBKUCCW", "AWGURMIAQMKEIWNAACAKCPGEIOFWOIVWODYAGHAHQANSXQCSNI", "VKMAITIYQGRMIGAUTAQPPKAOMUKSMIESOWCATAMOHTEAUFSBUA", "MAQFNIOMARDAAVKEVCRLQWOUWJAAUSEITDCEXIPMQTFENWKWAF", "TQAIYUCYDIKWKSOKGNCASTOUYGGJCQSWWHOOGHUACUIMWGGKAN", "YCMDLGDCWFVJESHAZIQUYOGYJNIMHOHKKLMNIYYYHQKISYWOIC", "UWCJMWOEEMAIOKOOWIQTMARJNANQMQOEHQGOMDIOUSSAANQZJS", "ATOMJGFNLEUOYIAVVANYJLJPWSMGFUWGFOYCIKIGIFIUONGMSG", "UAMAUNDMCIVVSGNWIWARSOPAGWAMOQPWBTQXGNSCIUKRHWYWOA", "GQGMODOAGMMTSVOALMQRNMUZGCCYOQYOKWKBCKCHPCQYAUWPSQ", "YJOKCQKQSAAINODCHSIHJQJYDAZTHAWOVUUFYIUUMWOGQIAVSU", "GGUGOCAQACWRUAAPQYFBHQEYAVMSMMUCAYXYYOSNSQAYGLCGDS", "KSTJOQAEUMAHOPGHAQPYARAWEGUOPTVAARYSWEASFIAUGAICNK", "KSZGCIUGYERSYIJXNYNCGFDWBUBAFXMKGADKYKQZDOXWOXLMAG", "WGIBRIGLDOIGIQAGVGUWWAWMKNWUWSUAOGSABOJCMATCGWNOQM", "OYCSQYAAFWDCGWUIAMCKRLNUYAYAHUDEIAMWQJUESOMAUYOWEC", "RYPEJPAJGMUKIGAOSOQARAIUINQSMQGGVUAFQXCMGOYEGPNWXO", "GGNVMECCAASQZOAMBSFKMOAERKUNQAYASMQSLLMYUUNOCGSSBA", "UWQJGUUAAGWJRWKQZQLMUMSYAAIMOBGEZXAUWMKGIAOKSQSTKY", "QEAYSYBCTSQGOZPNMQVIDMYPIINAYKAIKMWRUUSNQNYGTMWWIE", "VCWMKDEJCRIRQOPAAVAUKCUECKMONNVIAMESKCYKWAYAPNOGJG", "MSHPBKAGWICSYGAIMIOTOAJAUOMZQYWORUUNEGSECYSEFILISW", "KYOMXASLSCYJAACGEAKEHLNYGOGKWUAOVAUXCGRLUAYMBKEAYK", "MQHQBTMOOCOXSENEGXMUWECIUAOAKAKYJAAIYAUHOKSHIUDMSK", "RKUYSEAADOXWBTAQJIAIENAKLAUYSWSUESOGYNMSAIDGOAHDZI", "QTKGYRZUPVYOCUUHYEAAYTZUUAGMEAXGAMCCELIIOFKAMSQEWA", "NIVIOSUAIFQANUQKCVMPYZILWTKIFLYHUIESGWAXAEMSFAAWGM", "WEIBMTDWCBIMMCYUOYGCAAAKWWTUUODUUEVNBAWASJWKWOHEZG", "KAMATBKQSEPUGGUQADVLCIOSEFUQKUSUOGMKSEZGPAKWAAAYSD", "NSWHJAXVFYKRDSADCYWUVOQYMYRUUWIACIPNEPNNFPUKGEVWRW", "SUYICMQCSOHDCWWZUUUQFPIAAYYTCICACTOAXWLMYGVCGUIMSU", "ZQHHYXSVSGEWSWQOKZTEGMDRMKXUEKPDKMJBHKRSOVZLYWXAKG", "ODPGNTRUANFYJAMYZCIXBABDIMNCAFUYEIMAXESKALRSFSGUHT", "ULPWAEYTMWAUDOEASEYZUAAYGPUWGNWWMZGVONSQQIMAQICIUF", "SAIWJDBSVUMAEMWKOYLCMAMWKWMCNJCYALMUCSSSMHESQWWMXU", "ALKASYCCWYOYNOISOICOCKSEIKXAUWXGIOYOQNOGZMNAACJKTY", "ACAWIMQGGJKKDIPIAXYYLQCKHZWEAKGXWGHYWZAUDOWIQQFKAW", "WSTUKAUROMCIKWKUSXCBRSLMCKZINGZPBRNUQCJWKASMAKEAFG"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "UEKPDKMJBHKRSOVZLYWXAKG";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> superstring = {"MYWCEIUAUKKSKSWAOASALSIKDOAUUCCMMBCWOWITYWCACMSPZI", "YUMQAWNEEQUSSYWCARGMXHGIGLCAKMCMAAVAXAMACAGUVEVWEI", "OKMENWOUASTUAAAQQECYDBMTJWGUCKWAWGINCWIZQARHWGCMWG", "WAMRIKAKFOCQMAWSLOVSTSEAICBEIUBIJAHEQMSSKMEMMLJWJY", "KABYDQYAVAIYACZWHAIIOAWYXMRBVUUGWJUQALUNGOXMNEAUKA", "BAIGMKUTSGOUJEWQNVWYZFUAFZKNCAMBYPEAAXZQFAWHUAEMGR", "ATASZDNNKQMWKCGYYOMFWJUAWWSKNADEKCOWIOAUIUOKCUAZWM", "CIMAOQQKYAQGWCXMAWMQQAWDAGSAWZQSKAAHOONWWEWOKMEMMU", "YGFHGSYYGNENASYMSKAKINQACVEKOMEAYNUAGCCPIASTEMYNUG", "QAMSCENWVNAQEGESNPDVVZKOWOYSROEQUKWIGCPNWUUJCPUAGI", "QAZUWAANOSSWAXAJJUKGWMROEEYCCDGHRFNDBEEXENSMSMQKPC", "UQLSGJUNOKVDAEPYFMUHWSDTCYIAGGMSECWUHUCAKNPHOQAACD", "QNUUMOIEKUPNACFHMEAHPAEEFCMFCSACMGVDJNWAVUXCSKWOQD", "AIASOYCAAUYGIAXAOOXMWVOYZGCQFGEMIZAKKCKCIQKJSAYGRO", "UMEGIGUPWCJSWSSAWMCNRANEICKGLFICEBUJWIYYHLYNHKEIYV", "MKISHGXXAAAWPKYAAUGRMKGIIGPSOARKGEQAUYNXMXTYFAOYQY", "GJUQQUDJAIJMEXURIDSZAUENQCJCQHWLCSCCUNYRCYOMMAMJAY", "IJPIUSIPKNUOMYABQKQSMXAAAGOOMBAYEMEKGOMAAPTCGAJWWK", "IKMUBUUKAPYYNQUKIWSCOAHLWWMKEDQCWUWCIQNNAIGKSFKLXH", "JIYLYUWGGQAMNTCSLAKAQUAMGYOKHEMWOGMRIOUTAYDWAJVQSA", "GEAWYAUYKAIUOIAQLJATSSPFOZKAYTQEYCAUXGIWGMGUTCLAKQ", "OAMKDYKFAMKUAOEOEAULAXUEOKUKRTKWAYSPIEGHIWSSWYWYWA", "CPIIONUKQEQUEASKKHYMSNEEBEKNMZQONZSPWEKDGMWYETUOSG", "IEKCCCWPAJEEMWUIAYTRFSGOAHSVIACAUIKKIFNAOOOFACUCOS", "TGFLCLSDCEGDIRFTUNNMPWAMVGGMWOMIEGIUIWVHGDMCSVYYKQ", "MCHUMVIALPAMURVGRAVUGUSZASRWWIVNGAAATSEMEXWPOOSABA", "MFQUSTYEOUWCBMKPMPAUYIQGNOAYKVPOQYSWHCSMPUOACLSNVY", "ZSURAAXXWGPIJKSOMQXKNDQLEARNDUDMSGEQALKCKIXGFIIIUQ", "OEUMAYACQNXEQRJHSIYVAOYEWIYGEACNQQPOPKSOARPOANMAMI", "MDRWAEYHSHBCWMCZSYNKTPOIEERRLSCAQTEACSUAAGAGHAPICS", "REQIYEAULYWQSWYAMJOKYHAPOAQAQBYBMYSQAOSDYCAAUKXOMJ", "NEUKBKQKMOOWCASMIAOXCCOENIWAEZAOLNEBAYSMONKKCMEQQN", "IOVGMAFLMLLXURMGYBMUIULQNUDUHUKENAMAAWUASQWNKMUGYQ", "ICOUACWCVQIAKJAQWAWSHANIIJGQIMQYZSIFJMOGKROYLYSJUY", "OWYIMMQOIMZMCMGWRSPNNMIAAIIEEACYWWSAKCYIUSQESFAASO", "MGIHNAAOZCKXNTOYBOMWWBUIXAHKDOUCQGRJAKGQDVIFFSUSAN", "UZHKMZCHGRGQHMQPYOXIMYYIIUUGCANWOIAYOAUQYCEMPWDWIG", "KROKILCYGLUOOFGXLDIOPCSHCAUUWALTIOWACQWFYLECMLANCX", "KSKKUJQYLISABGLWWLBFEAACWUKWEHEFZASRAUYIWKJIMYFEAT", "QWEAPTXINELQEUXOJGHRCIUIMIAGOCUAIUGOAKWICWYMGWQUYM", "BESLOSUFIUAYOCAOMAOMZUKKXAKMAVKTKCAKRWQKWMSWUWAQGA", "UKYICNWFJENGKUQAUKMGEEAKIAELJXLETZPYBRHMMYUEUIQEQM", "TWNSOXQPNMQHUSNNSATIOLEMMWAAQDECAUGSJSYKAGMCYKKQKO", "YMOCHUKWAAMTIZQMOQOWYTOIMYEAAKOSONHEIONIEGKAIDBWAI", "WFGAQSLLUOKQZAGAOMSCMYEFVVILCAIOEDISGYKOQGCCIOORCA", "OEOEWQYTRMAYZBCMOWBAMNIODMWCIEOJGZWSAANXMIAVVRMISY", "INQLCUIAVCEOSGQCGMOUWIPINHIGSWCAPXDBQHARMQANSVWCZF", "OESCFDAOIYEYIZAUNGIENWAMGYRUKYGDKWQAAUGVDGYEGUKWOY", "EGCCYVLUXKNIMESHNCGYTOMWMMYWAINAPQYDAGMYAECJGNCXJF", "HIUVAMDSUBESGCIKMQACFMOUYCAPUUJHEASSOSAEQAUNJQUOBQ"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "CUQLSGJUNOKVDAEPYFMUHW";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> superstring = {"ATPMUQAIACCMKOSYNUJRYOAQGYTNERSANOZAZREOASYGYAMAIU", "SDUNOYXSCOZCWMGJUZJARAXAASAYGQYKVVOCYOWUKQAAQMQWCQ", "WKCHXGQBLJQKGLGWCEIIYJEHOKKEAFMEGSXQURWFEMQMAAYCAO", "VPOHMOEDJAECNGQGTSOXMUYPCRAAIUSANGRUQQQCIAHLADTMII", "KGMBAGDGVKACNCUKDNUELSSANQMAGGBJCYQYEUSSIPSACEGLNU", "QYSZJOAPWCSSAHVFWAMUEWUAUAQKKACAAJOQMSGZYBMYFKYNWS", "LKEEOUGEYMUBGKOYMDCUIOIAOKHAOPOCAYICMUTYAAASMGPXGA", "QXCAMWSQQAATFEYUWXJKAEABJCEDKPVNGOXKBGBZAAIHQGSEAM", "KGWOPKQDLAOKOEGGYKMDSFVCEVWQKNYKWAFBMPYCDWXRQAVQAY", "GMOCOACSDNWYAMCCGXAWMAAKMSAKYRSQUWNWOVSZUOLYYEYPID", "SQEFGHLWSBNUQGSKANXEDNMCJYDCMMOMAOWQAOVQBWHRNKEYQP", "OCSEYCVZASCNKIUQRGTCWXHCPAAESSEMAUTBAAMASSNKWIBCME", "OFXVAAGYGGJSMLTDXWAAZHAOPKUZHUJRCNEDYHKQMWUOAKRAVA", "IVAITHYODAFKVUUIPCWAZKWENCFHQQFIBEEAOHBCIZAYDAKWHM", "KMWWAMXQCOEKCUYVIAWGSOMCQKSEDIVYHYNKSUAOOUAZEUAICQ", "HYEKEMJAWOCAYRSFCLKIAUWMNPQQMIQSJWMYWYEEMSIIYTOOCH", "WQANHSWAKPXANTOCOCIXOYAWIZANMCYNIUVGNCVMKJTUSMWUEG", "XTOYIMIQUNAQHIZSUUCAAGOBEEXUOXUYBQWOSMAUSAQUAQQSMG", "NGMEQXOUSMISSVPZACAFYGSHRUBLYMQUMSCAOALCGELWYLKCWG", "KKMBFUDSAOGXWXAEITAOLMJIQQYALSOGANUSUGNAANQUQCNYGM", "GYYKWOORUUHXKCSPASKQCSWFZPUUYRMEUMMNAVQOUNUGACQEPQ", "TNASYIAZQWQCYAHKGKXIPCLIOCMOMQQCINAUXAQKYGNSMAQUYA", "EVQUYYEAQMWLTGQPMAWGOSSYYSETONQQNVSYIXOIVRKCYLJMZP", "XMTSWAMEKIMYGGHWSKOTUAWQQSIYZOAOUCBPSAPMRASAEVXOON", "AQUSYIDERSAUHCFMICABMKMEKSAIAMMUKGWDKIMAUEAIDIPLNX", "DSTELYJGKQRFUYBWCKNHAQSOUMWAAMQNIUWGAMSUIUTHCKGHGO", "YSCOEJOWSICIJYCIWYZASVSGOKEWWIGNWSOKTYZUUUAEWYAEUU", "ANHXMFOXEYLCUCXZCUMYKKOSOLOTGSRSNLASABSAKOONUOMMOS", "ZIWAQXFGKYCAXGKDMIYYXEQAOKXKOOCGNQARMNAYATICUYMJDS", "ODRXCKBIZUGRKASUKHQXLCKGEUTXCNSOPGLHIAIIUIGQSJKOOS", "GQLJKAPGHIZKKQSPVYOCWEXEAXKIKHIEYCELOAVKECTWGDQEMA", "MQOUFZAGWQUGOMPGDOKVWNTHKTWYEUSNAWFOWMAZJUWJYRCQMK", "EZVTWKJWXYBJPNVGIGACSOUAQUCUDBWESUKOEOAEUAWGALUWXS", "XJMOMWAILCMIUMIITAKOWCEWXGGYAOKMCDUMIODCOAQINAACTA", "KPYBKCXSDICQIKFLCQYOQICRIJIIGYCGSIEEEKHAJYAJCAIAUR", "WNGXKOMPYAAACYMIKGMENORAEOGJXVWDUKEBSIBWVOOGCAWIUA", "QUSEALPJEBQMFMWCWBUVPIANMGCBLAXNQYYYJKUBANAZSMQAZA", "AKMMRCLMAGZWMAMYMDGAAALOADNWACRZSIPQAZDAMVSNAWWKMC", "YAEBFDNQBQYQWSKATXOURYNQLAFHNVDANAUKNFYEQAQNAHGFGB", "QWMOOCOGOQSGKPGJAHYAZMEYATEQRQMNNCIAYYCGPKQSXYAWAE", "WLOPUHLWYAUONVNOKVDNXCOKBXDTLVOEAABAPWJKCQZIHGQYCC", "ZNGWWUDEYOTRAEREGEYKAKQEPAOIWWQASCWWFGWIOPYOUWCMMP", "WRGOABIAUORANMAAFYGGHWSXWGIUUMQWJQUGSMUGAHEDWSZEMY", "LCHDLNGOFUWUGYZODNLUXRYVYNACGSZGYUWYQWAWWNUWTECEGK", "GMIYFMXGAKJCTAAWEQFRAEIPASVESIYYUWKGWNGECUPFWLDRXW", "UWORGQVNOOELSIYWNFQADSESMARMKOYAHMXUVTRXOKFAIAZHAN", "IYUAITAUWBSAYWYLQNGLSWGKBQARPROXSEIAXUNAAJVEPOAFIS", "ACJYWKRFWFPWIFWGKCIWCOGSKWMWMUNYHRAOKYCYKFYABIQAEY", "KRSKJWULWSMGECSGSGIHYCWNMQQUONQENUKSHMSABMUQYQUKAF", "AAGANTSUAAFWUCWKGZESYKSKYGNNGCKOECAASBAOQBKQNAYQYC"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "EYCVZASCNKIUQRGTCWXHCP";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> superstring = {"HIDAUKKAXKWIEGAQAKKYQGYQQSKZQABOMISMINWSNOUQWSEOWU", "EMAAWAGUUMQYEOJOSAFKTYCAWACHUPOSRNIUKAQEWZISJAZWIH", "OSSCAYKKKSQYGCGDNTJFYENAMEWPKVWQIRNAQSHAANSSRGQWAQ", "IKNDRSUQVKTKGIMOCMLCKTAOWCFPUUGBAQMYQUMSGGCOFMBSYU", "TSISLSEATRPVNZHMSADJMYVAHUYGRKWNMQWJCISWUZEMHSHSSV", "EEGEYCWOTZUNTCSYKQNGICWEHAQZFMCNGNUWSWGWUXIAAKYOEE", "RMWDVEWAQISCKJYNUMMAFEYKLGMMUKAEYOCSANGIQYNNKTIOFI", "VIYAVMMAOMLOUUGVIWMQYGKIGSEIWYEUSSQVSMOOEACAFUHMXU", "QNAIYANIZASWYOGAIXQEQAASXEIYSOZMAGAEAOSSJWUFUMJPCA", "AKSRTKOOAAXOEEAJKCXWFSFYGWSOMNKSSGYRMLELATFMAISGYA", "POEOWYUASDBFLOKWCHEYJCSXWIURWAQOYKMCNGKAWDDIWAUUBL", "EPQEJUXKUUWMOGYYSRMRINJIMNQWUVLAAQLOWIAEAMCAKKGGTQ", "WDUOIFQNIWAAYAKCAAOTRWQUYEKAXLXQPBKZZSQMKESOJWAGWW", "PCMJWWMPALGTEZKWCCSWCIAUNTMOMABQOTWKALGXAYYGEGAJAO", "AUAAWUYCKHAUEYXIAGAAUMPAUDLMKHAHOMKSUCCHJYCGKGJANO", "HEWLCSZAUUGFMJRMMZUAMGLGYGLQQQQXGHOXUSIDXYOKNYAIYI", "UXUYBSWEAURNAMAOYBMAVGCNUGHHYAQSDCAAYGFMEAZCAFICLF", "URUYECGKIAWEAXAAQQQZQWOQECYGKEDIOWDSPBEECNBTGBYKQA", "OWSAEAAXIWSAYTYEACACYJACAMGAYOMQYDSFSENIAJSQSGUNIN", "UWOFGOCSNWZOEEKQALRXNMGENMROGBGUJXCCWBOACIANIPNSKA", "HQETUUQBIZCXXFCYGZGEGEYGTGQYGPSGMCPMKCULKIIQMBOOAW", "CCOIYTSMEINALJAAOKDCNQIEYKSIMYQQGIHCMMLSUAZERAYQUT", "IAQYIECALENSHNEMIDKAUMUAWUSMASISIQWOZWDVWUCHMRWEEI", "UAAOHWASUDSSIUAGETHIIAICSFMUTZIOAVERMQGQMENAMPEERQ", "EAQDYSUYHKIMEVEQHOYZESYMMCOAYEXMASNYJWYHWUKMTCQELF", "NXVVXAYJAWUXHLVQYBFUAYSYTEARYAKOWKWKWUWKDROMMAEANY", "AOSIQQQWXGACXNSKEUCGOMAQSTKMANHCAUQYUGAWKWAOJDOIOS", "OCOARGVYWPJJOKYYEHKCASAGPWUVKEGCJINIAZVNGDSCVGKMNY", "NZUGVGDJBRBDCGAOWNHRKMWZQWCTNKRGWEQNAASQGDNWXMWUTQ", "UOQFIIAIOOMJNIKOQIKMDULIAIAZQCCNWATDWYWMRNAUFITEEC", "RVGSAEKCEKTYNATGCAODWQEJYXMAIIGAINCEVRAEOSKEWEEJEW", "IYNCAAXBSUPOEEPSAISGHESASJXQDGSCMMNSDSOIKXQAQWDLOU", "SYDSAUCPOCPGCGHSWPZCOTWNAQNKYUAMRMANUOABOMRFAZAUZG", "EYIKYGVUGUKCDJQCOAHKISEAEXORMGTUOUTAINWACGCUUUOWXH", "NJAVLMMCEGSVYEDUGNHXAVEEMESIIUQEWUMLGTWWUAROACHWVE", "SQWSGQIIECGKZSLOQGQMJENQMSCVGMNAGVYQGXQNALASSQEATE", "VAQIQAIAOSSAAESCIKKASMTUCSJWKJIWKQBEECJBMSQRSUEAOQ", "GLAAVMUOOYGQXAIOAKOATDVDGAMWQUAAMSSFOUCMCGAYASBTMX", "RGOSCUPMASFNFEEETYWAOXANGAREYIUOFZCHAAGIAGAVOWAAUO", "HAPAEIAWQRGPOUKUMNEGESWSBQKWUUYPDASKCISUKBMEIWQKEC", "CSAYQIDAWVOKQBKFSAGEHROCZXMMOCZQMAMINTIKIGIUKEAKAK", "FWUFMLPKMITHXWKMEOQAWUICSGEKLGCOKJMYKUKOUDTMACMJUA", "KTNYMEFAYFWTQSIIQEOABIGYQDOYGTWOOQGCWIESYPAEKPCBBC", "BEZHQUBYQAGWIFASDYFYEMLCNVCKOASSYVAXAXKLNHLVALOADC", "UGSACAAXSSULDAJGUMMAKAMENEKJTKQTPTAOYSWNUACSCOCUWS", "AFSAYQYIAIPQTMGXEECYMYPJSEWTWNFADSHUCOANLQUSQIGUSI", "LKMSNBBSQXYAGMPLMSBIKGTYOBSVOXEAIEASQOAWUBKGKIAZCY", "YIPOSCEAKKNACYAWNMLCAAABAYKAQKTKKMNIEMYNENLYIGAHDG", "CCMHYMNULEQUCXCFGCYERHCSCEZNAFOYJOEULAEVAAKXUVEEDR", "SCUGZAMEANMMAAATAHCWUAMRSKOYNYIWIKWCYAUEKKCIHRNHUA"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "GCOFMBSYUTSISLSEATRPVNZH";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> superstring = {"IPEZRMAEEGQIJIIUDBMQMIKDKVSSGMGWGADALETJBPSRGLBUAY", "ETVMEIIEDWAWGESUASIYQWVGGAGDMCEIACNAYYEAIINIAJGGKY", "AIAMQMUGXISEUCFGAXPKQCWAVTJYKXUDDWAJPIAAHABOAKAAUD", "OHYDMEUUYKGIAESGTHSUGDAGRSTJEURVROUEKCMQWBFUTNCYUA", "GIUWSNCWNRAUACYZAKGCYCOQYMLLCCEEDYBIUAIWTCUMQOIEQI", "STYCYMEYAXCGPQSQLIZUAMCUFMAQAKAOWUGYKWUNQGCNQYCWCL", "WMJKSYAAAALCWYIAPSUIGCKXSAOAYCOHYYYGAASNCPAADGOKAK", "ZHAKUQEFAAQNDGLYSOLAACQUEGTAQOURCFXYAKWUXCYEPYFTMA", "QGOAYSSIWYNLXGWKAAMFYCYUOTZTRXKPIIABCEJNNTYUOYULNA", "FUXZIYSOWLMLQJXFKMCHJEQMBOFOGOIWMSCCDQQSAOTMYKSEGF", "MZWINZRAHCWQORYAQAOEKCABMAQQDYDHQYTQWQNAUTSCNSZSJZ", "OCEEYWMWYNATGEZJHIISEICUEIGVQYBQZOAAAIIMMGWSICACOE", "KCYOOXXCCJICLVJQCQQHHQRWIKRGUNCASAGCCCMQRUWNENYELE", "UAQOTGYAQQIKHGWCSICEMJQTAMCVMAAUFCAIYWOAOEGPEWGCCO", "GOCMQYCZSOBIZUEQFFSNAOFZKUPWAXAFFPEUAAIEWDCKOQQXGE", "JXWUYYCQKYMYGGCGUWMORGKOMOMHKGZCPYNSVGCKUSKQOEDYBA", "EISXWGAATSDUCKYFCSJEASIIGEJKQMMLAYKICORQZUNRKAUGRR", "MQANVGRIKCMMEGYHAQNLWAHUXAWQYUAGEIIQXHJYMOGUMQYIFX", "WAOQMYKCKOWQPEOWFMGGOBKRWAKJZUOYAWSWIPWICOUASTLQOA", "MOSSWRNENIOFEOSQYKEYFKKIACKKOKOETNOWDSYUECWWJNWAYD", "AAGQPABGYUAIIMXNSLLSCPSBUPVKYLAYOCQMSOQKGWIDKKQUAQ", "CWAQQAWQWOLKMFKZCGLCBHOOOZYGEMFAMEZCCACXSSNSUAQYUI", "OXRQAEKWSLMSAFODNCKYNMUQMISFAATXGYIYESHOJAYYOEUBUN", "IWUFIGRKEAIHXASDKWIEAOPUOWECJZQATQQAHAOHZCUMAQSMBG", "MSOTLQASFOASGAMMIGQKAIQKZIEUEAANOOOSAYAWIQOMGKGADA", "CCONKGEGIYQYCYCGYDMAQQUMCLEGQJOZVCINQXVCNAKWYIKNLU", "ESZGMCTEYKVSKVOWDYPIPHYYFKNUAHASTQTBEQXSAOSSOUAIII", "KDEKICZISEWQQRJAVPAAYMGSMIANMWLSGGPDVEDMAAUECMDANS", "EWQUUCASAZSAAMNEIUGEMUUQKACEIWZSHWBGSYSOJQCCJHQDIP", "IMHAAWWQMTFCJMDECSBREHQQZUCKUKYASUQQBXORUEIWXSMYIQ", "UQIJNJCDHEMIQMQBUOIWAQWNOKZMKWIGLGIIAMCSGWVUJKYYPQ", "EQXUWEDANNEKUZAKRAIQKMSCASAUIUQAGOUXUWRRTBQKQUQONQ", "YWSEQGWIQWZKNMGGYYPIYEUMBNVGTCMYGACBYNBICKYVCTKDEI", "CWOAAEXZSCNFJNKMAVWUSKSNCIAAOMZVISTHGZKAAKYEEIECIE", "IAKPQGGNKDADYVOUIWUEEAAOAAQMYPMMRLCGFGWBKSSECYGIIA", "NELWQGJOGOZMKNIETSAMUALEPUQFIHUKWCGOOMQEUYEYMAXSMK", "LSZAUOMSKWYMSYAVSYVDMIXCAMNYYAJNFJFYGZMQEGNAJQNEXR", "QJVVYNSKZYKKXCNAAKZTFUQISAYXYCKSTVAWKXRADPOYBJAFWK", "CIGNMWGWKIWAYRKWRLGMQAMFAUNUZWFNDNUWGORFOWTXAJSQCC", "JWYWCASAAAPSSMQCQHQSOOTCAXYUOGEKMKEMABPZUFEZYKWWMG", "WEEAMQNABGFKWEGCACTAMMEQPEWAGUOMEKAAWADGIWAMJOACAB", "WWVKAAAKQSRUDUTGEGSUOCBEUGEGLNEAXACKFCLMCUJAYQNAVK", "GYEIAAASAWGCSQCPSRKTNJUXYAYOOIDKPOEBNAMLXUGAOIQEAA", "BUGEARAYIASKVAQASASYITEWLKGKNODXARKIACCCAZNVWWBDQC", "SYUKIKYAGGICFVNMGKNOLQEEVWYSAVAUTIGUUWKHQYAONYKAQA", "NNWWWSACMQKIGASKCQCWYGTRIVNKOMHCOANTCXIOUVNKIFIYHQ", "WQBSKCMIUQAUSXXUKWKSWCFKPNKCAGQAAGOEIATIDGEGGWPSWO", "CNJMVFLRIFNAWATAIKQMYNUIIOOSUKYJQYSGOCAACSROMSTCWM", "HCMEAVYSCWWPAQNIGGQGIUSOKWWUYFJVEAPKSMIUQUXQICFIAA", "KXSUEQUIQTNYCRNDSYYAMAEKDEHUCHIUCCCQQQSKKAOYMWGGMG"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "KSTVAWKXRADPOYBJAFWKCIGNM";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> superstring = {"WLWTWIXMACSKFEANYAAOSYTAIPGZOYGOAADCKJCNBHWGENEMAU", "IXWCKDWUCACQAIHKEZQEAACARYLUPIZUAIHGEQYFHNWEOWWASL", "CUIPZCAQAKYALWGAKACCGYHNEEAYCAZFMMHKINNSCWGMBOSMKQ", "YEXREUYMOVGRQNAYRSVAKDQMSEQNGAAUAUNTNGMISMAQFQKNSC", "CFGOKIQGXSSSVDFAHKSSPKYHAGAHRQMOQQSIMMIZIAPMSVWOYQ", "MUDLQAWYOMXHQGUBNWQMUUAOURXKARPDEYYQCAYMAIAKHUAJPH", "YIMYASGUSQAKIDILIXSENUKCOMCUQHAYXYBYASCAMAJKRJGUCS", "ACGWAQUTAGMWHEVUYHUUGQVBNACSSQXCEGPDFWIGNOSEAAHQKU", "GXIFRIASXQEZGXWWIUDGUGGDWHUFPGEKYKSSBIASAENLYWAUQA", "BQSWWTOWKOYWGCCOQJSSNVIUUBEAOEKCAIFJKTGNVRMUVGBNOI", "IOHNYUUWJYAMERXNSNCGCKPSCQIEMBFANIWIEBUFNXCATQAOWZ", "WCNEIRUSGAYEXUOCDUWCSNAQQNSTOWTHJYTGYDDILUARKNWNGY", "KCAQDKWEEIEGOBASNGCMJSQUFSYAXAMKOIIYWXNKJAUEAEIFWF", "AZOVMFOQSAAOICAAGEKOQOJNDWMALCANMQPQSPAEPAOSLVSUUX", "PQIKMACUCAIJMEAKKADYOUACAASQYDJPYSQOKGKOPWIUNGHUGC", "RUNJNAWFGNDMSKCKUIOFQOCMPMAOAXNNLNIPYYGAIOVEYMSGIE", "PZWNGOSNSOAOGXAVUPOACOKBCBWMYARUGOYFGYICIMCQRIXONK", "NWKAZMTWXHYLUIANOKWKRNOWGFSPKIMRQAKQINSQCYAIWHILRI", "ASSOBDRHWAOKENDCMVAKWMOWOJELSIAGACSKIPJCQCUAPQNMQE", "QWEAEOMLKWEMNQCSCIKLAUBAAGDSSUSGIICOITSEMQUWYSASWG", "YYDGIJQYCTYADMIUZGASQGAOUEEHIJXKJRCAEAMEQQCYIJUAWQ", "BWWKWEFVGUANEMSSKNDMCSFLEONELTYQWEJPOQSCGRGEIJCYEU", "JSTWIJMCJOEBUOPXNJYOAQSAJJXOXXASAWHCWXGAZXNIEMEQYS", "MIZNUALPIGPMGHGNYSIICWWCYYREEAWHCMDNWYCJAYYNMEMQKE", "QYIKSSKYYIOQRQDZYUCQHODEWAHAALKWAIAJIQWYUCNZQAACNV", "KYXHJGNHXUOYYIOEIGUWONWIAAFLAGAENNMSNDOGWGKACSBEDO", "UUGIGYQGIAXJVOCDOUDVRAEAGCDESUOLDCYQIKKAIGUZKIDRAK", "EUAQDWAEYSLNOJMAQSXKYAAZITQNSDQKAMBUCRAIWKIACIKCQC", "FEAMCPWANSBAGKQQMECVOWCOGINUPDAGNJMWQCAAFYWNGAYUSO", "MCWJSANAAAUGKXTABISYMZLNMOKYSLSDYMIAIEAMUUKZZPOUAA", "YACTHEGASGKOGQVSRWEINAUVKSDPKWAOGTNQGONAPVKIAWDANQ", "IAAOQAYZMKSANLUMFQWYIQBQQMDZOLBZSWAGAGAGUMAKPSSBTA", "DKAOMQWTKAAMUUJENBNIFGFOKEWAKAZDGAEYOOVACTENVXPKKS", "MMQQAAAAZFOVGZEVWAZGZEGYDUGEAJCGCQCKENCWHUTIKKEKHV", "OAMYUACCKSEEGWWXKQULSIDETAHYSEKRWQYNVEATSPZJMUYQEF", "AAKKIESOUKAJQSATRGOENWXEMMWWUKXGYCAZCILUOUMANYUAIK", "GYFQOYOACNAGRKWMMAETSAWAQKACEVUIADYRJKZAAAZLOGOIZG", "XWCAMQNNRMOLGLOYZISNCRAOUQVYXIVYSQUFSAFSASACCWMEIO", "UASSTOKAKJBYIKXGGGRACAVNSOCZESCDSAQUZXAMAIWLINKMHK", "THKWMGJMYEUMSKLASYAJAKASSKMDWGXAAEBEJUWUQANECZUAMF", "QMECGWIMGISGTEEUSRAXOGGPCNQHKDGODEINNAUKSIGQISOGGY", "OTYIWICAIKMANGUKYOIYWMKMGMQYWFNKKXGVBDQGUMUUNEGZMG", "USAAOMAAOMOIAUMCRBSNESYVSJGTKSCEECCYIDKAPCYCSAZLCG", "AYWOAIUSDUONWEAQAKDTVCMAMPWUKAKERIMEPKQGKMAQCPMASI", "AAJMSBAQQSFQBSGDNJYMFQZAUMASARFGZSJYTCKEETUFXZRQAC", "SEWCGIWKYAMWNKHCBNWCUAOENAIUVEEIGAEKXHGGMGYSQHZHVR", "UIYCAJBAGAIRNWQHKYAADRAYUYZAAEAOVGUOATKGAEKGACWAZO", "MANKNMUOOQOOIGVKFOFUAHISUAMUIGOGOMNCQXGOGFCSMBAGGS", "XQNYJAGBKBMBLAEQTMOECIGAWMAGSIEAGATAVOKEIECHUXLIUA", "BQMYWAHNAAOOQISOSMMTEAVZYOOUORNYCLKOVAMZAUGDNDAWGM"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "CAJBAGAIRNWQHKYAADRAYUYZAAEAOV";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> superstring = {"CULIASWKRSAGSAKETPAKUCOSNXFRUOIUVYQVAYNYMHUGPOEGWF", "OUELNBOUOIBNNQCSYSYESHOACJRZUQCIWKBRBSAXANSGYIKMOE", "SCAEAPPRSOXAZPAGGOSRINZSNWEGTEAHEVHGGGMEEMIKYUADJI", "ASAKWZLQEKYGJHZBNBEGEMAZAJAGOCAYOEZMNAJOQGQCSYRNWG", "KKDWASPCUQXVIOENGQMSSXEHQKEENIDHPYEWAZINIHIOSIGTJC", "SCYUCNMCUSRTSNARJAKCCCKEKASAIAAMEGWUCEXHGYCHUWJCSA", "FKCXSSKSKQNDDCIMUMOAAAJMQECWANJACGCIAACIYYQMUXAECT", "KAUCWDTAMWTSSSKBHADAGCASGLHXTMTIOKCMVZYSKSWANDMAUK", "OTRCSYSXKEPOFUPGZKSGTDXUQSSBNEQCJABYGOKUOUPPTAGSSA", "IKEGKKNZWKIEOSHAGYLESMSOOQYSUPCKPOSKNISJASUYRECIWN", "LMIXISDOSTGAFCJTACNKAJQUADZWKTNASUMLMKZLZCMMNERAAA", "IQQAUHUMOYCXKMUSQTIOQSBGFISHKGIDUAQSHHPTOUMEAPFPYD", "NCOYMCDNKEINCCAMOQKGYAPANACEEGNGSYACOWIMANODSKFNAV", "YARYSICSILQPAPBNLZNEWWQUCUJAWAFSPGCUTDKAGTNLIPDQQK", "QKGGMUYGUJLANYIPQRFASCSWYQPCSCBDMRINJSUGIYQAWCZKIF", "RMLTNVWTWYCEWKCUIGQBPOADJYNMCACJECIKVCHHSPXKIWGKMN", "XMKOBAWAKIYNYAEIUTUCUAIIIUJEKVRQATKIKAMMGMICEKUOCH", "ALOWAUAYTSYAAYBNYEAOAMWQYHHKBUYGAAPAWIMYCJJZWMQENC", "NTCZEGWIXXQASEYRJTAEOQAEYBCDAGQWCQEACQTRQUUQYQSWOC", "RXOHBEGQSJTKBSKMRFKHUMYGWQNVAQMYSAAAANNYARMZQCJAAS", "XRQMEIADYMCEKTKGAICOAWOOOWCGYWWWEYMCMMAZGNDIMABWUT", "PUQAKYWTEGAJGLHRCXXVAAQAUUNBGYKNAXWMJXSTAJIGAIRWNA", "CSVKYASIBGYYPHALAHYOUWNWEUOHAFOAAKSMGKAWOSYCOJUANY", "UCYYYAKEVURADONSGNWCQSGQUAWCOOCAUISPMMZOLEAIONGAEA", "OKAEUYUJAJIYIQXQIGRXCMQIVUIUIAAJWLSAGAIAGQKCIWAAKB", "MHYMASMKPAAGZSAAXEINEACEYGRGOSMQAAMSAZWJICJKQFAHIO", "AEGQEFIQANAOAJVXNKMCWEEYQDTQOXUYSKSUSSMCSKEOHSIXYW", "EWNUUANXQCGYTAASEGOAHYOCBUUNWNOQAAAASWQAEEKAQMODMQ", "KMLGXQAGQTKAGNKYUHEQEIHKAZYBAJSCVKUIOQYGXODQIGUXCJ", "CJZMWWMWYRMYCMYUJYQKQQSWGWTLYWUUFYQRADJEANMQCYYOOO", "YRSSPAASMKAEGUQJQZJAUNWIWKMMGOCAZOZMGCWYVAXYSMTXAE", "ONPQHSYWYDWRUTAKGKOIQAQUUCAOCAFTYCUAALKFBYYAGAEWMX", "GOYGGAEIHWIAFCKGGUMCCIAPKSYAPQAQLZUKQJKZWUESWGGCFA", "NJNSUSOTWEAQHSEUOVDAAUKJMGWQWYOOICOKSHMJTHKWWQAKGG", "ARKQOQMRSQYWYOAMBJAWKPTCYKEOKEMCAWAOEOAQLCAVSYFFYE", "SCYNPTKKUQIMIMAAGWZETUIGQJKNMUVCKIQMETYSYWDJVAKSQI", "NKPEAJIQGGAHOSADTSAICSSOSGOAKIEDAOZZAAVGUYKLKIMOEA", "DBOTACMUKAGEQQWEITIQQIJKAFUPOUZSOOKTCGYULAZWUAFNEE", "GBEEJABYYAEGLGJWQSNOCWSEUKFGUOAQGWMAIFMCGWAUQAZNAW", "SKIAWIMGKSMNOQTTEIOXESMIIWDGIGYAQSCAAIYOCWAIVEVYMP", "MCMXCFAAHDNRAWUIACAJLQUFCKVVSWELQWVAAEKAURIWENAIGP", "EUPOCUGQATTDAMEYQNEESWCCVNUCCGKWNFXAJQACNCBKEKMUGI", "UUSPAHSWYOYBYCGCNNYOCGJEMECCGAANMYIYQCTWCSKUAMGSPG", "FUEIJETIRAZAUSAAAYBKJIKUSRYIQKACINFXLKQCGNIDAAWMIE", "IDQGQPIUDQUAJOWSWULGANKNKUYYWCUQICGEWWZYAMADJSGUOO", "DPIQAUWSIKAASAAEQEEKMIEEOKQQUADYMYAYULIERAIUSUGAYO", "CAUSIUVJKNWSMARSMHESJMNNFKTCWWWKMAMSKYYKHNAQAAEGKC", "OYAEWRVAYQWUUUSWMSFCMKIASAKBCSSEUIUWAZCBTEXMEIABIC", "VOYAAKFQUHOMECASIGPGIJGCACROKSSQGWECCMGZCQMSFENLOU", "YQSUNKOUGGYJEMSADRVEQBNXOTYPTJQGXAGECAASSCVIIKYCAY"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "FRMLTNVWTWYCEWKCUIGQBPOADJ";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> superstring = {"AACAAABCAACAAABABAAABCBAAAACACAAAABACBBBACBABBABAC", "CCAAACCAAABBAAAABCACAABCCBAACBAABBABCBBBCBCBACCACA", "BAAAAACAACCAAAACABCCACCCCAAAAAABBCBABABABCAABAAABC", "BBCAAABBBBCCAABCCBAABACBCCAABACCACABAAAACBAAABCACA", "CAACAAABCAABACAAAAAAAABACBAACBAAAAABABCCAACBBACABB", "BAABBBBCCBACABAAAABAAAAACAAACAAACAAABBCCAACAAACACA", "ACAACBABBACAAAAABAABBBBAABAAAACBAACCAAABABBBAAAAAA", "AACAABAAAAABCACAACCBCAAAACCCBBCCABBBAABACCCABCBABA", "AACCBACAAABBBCACCAACCACACABACBABABAAABABAAAAAAAACA", "BABACABCAACBAAACCBACAACABAAACAABAACAABABCBCBABACBA", "AAACABABABAACAAACABABACABAAACCABCABAACBAACAAACAAAA", "CCCAACAAACABACABAABCAAAACAAACBBCABACAABBCAABCAAAAC", "BBBAABAACABAAAAAAAACAACAAAABCAAACAABACAACBCAAAAAAB", "ACAAABCAAAACCAAAAAACAABCAABAAAAACACCAAAACACABAAAAA", "BAAABCAABAAAABAACAAABABACBCAAACACCAACABACBAAAAAACC", "CBBAAACCAAAAAAAAACCAABACBAABACCAAAAABAAABAAABCAACA", "AABAACAACACABBACACBAACCCAABAAAACBACACAABAAAACACACC", "BAAACCACAAACAAAAAACBCAABAACAAACCCBAACACABCAACCBABA", "ACBBCAAAABBCAACCAACAABCAABABBABAACCAACAAABAACCACAC", "BABACAACCBBAACAACABAABAAAAABCAAABBBCACBAABCCAABACA", "ACABCACBCBAAAABABCBBAACBAABBAAAAACACAAAABCAAAABCBC", "BCBACCAAAACABAABAABCAAACCABABCAAACAAAAACBACBBCABCA", "AABACAAAAACABCCACABACBAABAAACBCBAACAAABAAABACAACAA", "BCAAAABACBABAAAAAAAACAAAAAABBAAABAACCAAAABAABCAABC", "CAACCAABAAAAAAAAAACBBBAAAAAAAAAAAAAAAACCBAAABABACA", "AABABCAAABCABAAAACCACBACAAACABAAACCAAAAAACABCCACAA", "AAAAACAAACBAABAABAABAACCBBAAABBAAAABAABBACAAACCABB", "ABBBAACBAACABCABAAAACAAACACAACBAAABCBABBACBAACBBAC", "CAABCAABABAAAAACAAABBBAABCACAACACCCBACABBACABACACC", "ABAAAAAAABACAABCBCAAAACAAAACACAAAAAACAACBBCCABACAA", "ACBACAAAACBAAAAACACBAAAAACAACBBAABAACCAAAAAAACBCAA", "BAAACACABAABCAABAACCABACBAAABAABCAACBAAAAAACAACAAA", "CABAABBACCCAAAAAACABAAAABBAACAAAABAABCABACAACAABBA", "ABABCAAACAAACBABCAAABCCAACCAAAAAAABCACBCBACACABAAB", "ACCAAAAAACACCCACABAAABACAAACAAAACAABACAACCABCABAAA", "AAAACAABBABCCAAAABABAACBAACCAAABBBACBAAACAABABABAA", "CAABABAAAAAAAAACBAAAABAAABCBABCACAACAACABAAAAABCBA", "ABCAAAAACBAAABBAAACBABBBBAAAABACAABCCBCAAAACAABAAA", "BAABAABBBCAACAACAAAAAAAACCCBAABBCCBABACBABACCCAAAA", "ABBAAAACBBACBBCAAAAACACAACCACAACACCCBACABAAAAACBBA", "ACCAABABAAACBABACAAACCAABCAABABCCACCBACACAABBBAAAA", "BAAABBBBACCCBAACAAABCABACAABABBAACBAACCABBBABCAAAA", "BBCAACACBAABAABCAAAAACAAAAAACCACCAAAAAACAABABCACBA", "BABCAABABBAAAAAAAAABABAAAAABBACCAABABCAAABCBBCCAAA", "BABABACAABBBBAACCAAABAAACABBCBACACABBCBBAAAACABABA", "AACAAAAABCCBAAAACCABAAAABABCBBCCAABBBAAAABABBACBCB", "CACABCCAAACAAAACAABCCCBCCABCABBCCABAACACBBBAAAABAA", "CAACCABBCBABAAACCAACAAAACAACABAAAAACCBBCBAACABAAAA", "AABCBBCBACACAAAABABABCBACBCCABABACAAAACABBABCABAAC", "AACABACACCBBACACABAAABBBACCABABAABABAAACAAABABBBCA"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABC";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> superstring = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> superstring = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAC"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAC";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> superstring = {"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFZF", "FYFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFZFFY";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> superstring = {"ZZZZZZFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFZF", "FYFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFZFFY"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFZFFY";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> superstring = {"ZZZFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFZF", "FYFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFZFFY"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFZFFY";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> superstring = {"ABFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFCD"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFCD";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> superstring = {"ABFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFD"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABF";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> superstring = {"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFDF", "FEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "DF";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> superstring = {"ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAZ"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "BAZ";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> superstring = {"ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABAYZBAB", "AKTBABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABAYZBABAKT";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> superstring = {"ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABTRABABYZ"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABTRABABYZ";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> superstring = {"ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABTRABABYZ", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABABAA"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABABTRABABYZ";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> superstring = {"ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "ZYXWVUTSRCDEFGHABCFGHABCDEQPONMLKJIFGHHABCDEFAABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABZYXWVUTSRCDEFGHABCFGHABCDEQPONMLKJI";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> superstring = {"ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCD", "EFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEF", "GHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGH", "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHAB", "CDEFGHABCDEFGHABZYXWVUTSRDEFGHABCDEFGHABCQPONMLKJI"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABCDEFGHABZYXWVUTSRDEFGHABCDEFGHABCQPONMLKJI";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> superstring = {"XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF", "XYZABCDEFGHIJKLMNOPQRSTVUWXYZABCDEGHIJKLMNOPQRSTVF"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPQRSTVUWXYZ";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> superstring = {"ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY", "ABCDEFGHIJKLMNOPQRSTUVWXYABCDEFGHIJKLMNOPQRSTUVWXY"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPQRSTUVWXY";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> superstring = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAABAACCDCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAC";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> superstring = {"PNEHENHCPHEBVUGOAPVYGJKFGNOKYOZQYZBHCKYBXOQYLZPSEH", "YDEDIYJVUUTTPWBGTMYPRBYGSIMUWPOUNOUVFQXFWLGEMUAKKQ", "QUELELGIZEDKRVLJHLYBTRRFTJKVWKRASCTQJLOMZESYEJHZWY", "QQWFYAIZOYQIJHQQKUDOHLUQHGXXNXPWXHGZVGHKHTZVXWTANL", "WLZAPSSKYQHZKUGXYSEEXIJRDMNAMEUDHAVUJNOMUXKIZITZYY", "NDVKWBYFQDJWSAGXCHFXQKZUDCDPXALPBFOGYDBZHDMEQLKKVQ", "FMXLOPLWXLMGIENKQPXKUZXQWFRFJHWWLMUYJFZCGMKLFLWRJI", "KXLSKYSTTTZUITGXHMRBPJXGWKWRLRHKEDMNREEPBMNTNBUHMO", "GJINSGFJBAPMUDJPDFBIREVYJVSOEUFRACYBMWQZYZWKGWCKZR", "TBIMRGMUEMBCSQCQHUEXWUZRLGZBNIDEMXVLCDOASXGBBSBQUW", "FTVSBMIKHGVGGMXASJXUFMLKQNVXHDMFLSNJBFMOQALFTSVBHS", "OIFCSFZGTWOLZOYPJCTAMAPXGWMDPJFUMVVFJMFDIWQOGKMKQE", "YMUPEDNYJHLSBKQODBUBYMWJTWEJVXLBGSXWPYFWYEACULGLZL", "ZMHXXMZVERIPFTIPKGNHYCKEPFWUGPYOEDBZPLEZSMPGWEDITU", "NICYAGIGHXXHNXPVHLBRFFWEYXDTTDZNBZYLCRWYCWRXNBGKYA", "NVJKHPPPLXCVWRBQSFLFTXRNCUUHKITOMTDYXNVDDHMHDGNBHK", "UKCXOMGIZXKWWHRJJFVFIDJYVIYXHFBEMKOZWCVZOBOFCRJBXC", "XCYLDJPQQSNXKQHMUEFRKGIUBYOUHTKUMFENRVPPCRCMDSSVRY", "KKGHQVLQFSWBLNBLZFTEESDEPMQOSWKZDMOSTIVZVRSYYAWDQW", "HKAFPFJDMSAEXVLDZIFRBUSSLXYPXGPZGMFYCWLVLQSLRBSBUR", "DJLJBIJODWAZYMSYMBXRWCGMWJIEEBABRQGOKQGWCZYIVRSRPV", "SSVLXMBMJWSAPIADWMOZGBJNFRTUBTCEOOPSOEZKVYRLTXXAKB", "TGIMPXCTCPXHXTHUDPKWOBFGLSVDBHAHTIGIVLJXXEPGIVBYSQ", "IRSPUXNQFRSBSWCFEYTLTECAMWRXXQJEFNCVZGPFPVNVKNPPQF", "KZVRHELKSEHPKRAMIYGCDCYRDDGTSAPYYSRABZXNDLWBLXPFUV", "IAEPPPITATQOUVESUDSPRPRQISSMHOWJEPNNARWNBODPNSUASN", "YMNIFRIWRPXULLQNHOIBPLUGHJFOCGSGJUYHJUWUSJLRBNBKHI", "YPAHCGKZXDKBQPGJIOBFYDJNNLFYYEMWJEDJUYWUEGAYEWNZZV", "KYLVSAGPMKJOPEVVONNGTACRKHVLPHIKSXPGLTLIDLVKOLSQQA", "YFMNHKDFEJJRNQYVUVNURCRVYYVFDQIESSUTCCRTTQDLYCHQCQ", "BVBSKYCADSRYHYYMCORCPQLTYZVKEICIXKABXOTUHZXGLNUQQC", "UKGBKMJLUCHUKLCCGCTOCKSDHYNVPKOJFEDGFUCTTYRABECFDU", "XAXUFDFMEISRKCXKKRQYSLNPOZJPFROQZRMTRJMRYGWVHQKYYF", "ZQAPYCCAVWIOJZCIPFWUQRTOWVJZTZYAHAPMPYQQNNNTFEPDRZ", "IMCUJRRMFPFPGTNHQDRGDQTNRAODXDWLRYSGICNOTYRHSAXTIH", "QTDDJEDIEMSGSVZWFOBUWIBAOSRSPLDQMQKTGHWMMJQSCHKDAC", "KICUYRACDZUHCIZXRUTCOGFCQKYNQOZOSBWVBVYHUTZAFDYKBG", "YOILBXALPWSSZXDVHWPTHADHUFCJQUCFRJSUSZKLVMXXBONYQH", "BWFOCVBZVFZSAWHHCSORILIXLSVIRKKUFOJQYAWPLJSQGQSRPL", "BQVPVREONPLZNDPTWFHMUSAONFJMWHYOZUHSSTJJCDUSEZPJSG", "CBUORLBBAUPSSOIEEKPNPDUNMJNIMMKBYCESDSJBQWNXDJWWKP", "URXFZPDGKYDSCSUQREUYJHKPEYKEEHUXTPKABQFQEZQVXILIUK", "PMEPUROABSOZXRGYROQKRGIDPMEXEVZODKLOPWJHVUAVJMZFKF", "DTZEWMZWLAQOGWZUSYFGYBMRPLDPELSHFCDJCLCRZVBDJMNPPD", "VYJBPSXHIVSQFJGTOGALSNCECGPGCPSWENKDPRJHIQFNOVOZRR", "XFTROZWKNRGJOEQRPLWLLCANMKCPMYJIHGNMUPXBFGNOTFTBSB", "EBDAQUXAXLZWQHMDWYORVCELWLIGHYVZFRQRKHAWLVNIDACFNV", "RFGNHQDFSWCTYMAGTRRIJBORZPHTLAUNNJKBNDUAXMGMXTRXQG", "JSMQVBTGYYDYHWVIEGRXSAENYUVGEMBQXVQBDJETIJHVKCQQSC", "MERMYOXOLZMYCOATHPMQYURUMRRNKEXOXVOMYLTVKJVXARJUSV"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "QDFSWCTYMAGTRRIJBORZPHTLAUN";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> superstring = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> superstring = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABCDEFG"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFG";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> superstring = {"ABCDEFGHIJKLMNOPQRSTUVWXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXYZ"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPQRSTUVWXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXYZ";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> superstring = {"KTCDSCYHLZFQQHLWRJCDZLKEOLSEWDNJUBJOKWUWXCZSPHJFZG", "EROJPBULVLSLXHQTQDNKCCTSFAHJYRYQEKTPDHGOSBPVYWZAHN", "LAUVIFNHEZZDRPRLJVQABNWHAUJFHEIQRLMDBCYUSQEFRUFAHA", "YVRLHRRFVTYURJHRBXKGRRGSYKHPRBVQRWYUJNGTDHVPOBELIK", "DDZWYBUDQKTSCZXEHVUTQANICJBHROVIRHJTXMSJHKROZWMDPJ", "AVDQJPMIADOUCQVEFOVKWDWGFTYKZHOQYGDUZAOIIMGTBMQIGQ", "MGUSIEDOOJPHEJLZZSUSHYCPBGSDSJPFZLIRUMKBWFQGTIRHXB", "PIFALCYTAQQUBKSEIIMAHBGDUITXLUROFQDKKYKFEJNRLDAFKQ", "BBAPJNHHHCNTVZKIWVZZRYWVCRJXSWTYBMLDPMNSLPURUHYHRI", "NHBADAVKCGILLHTZFMJZWFLHBCWEWSFNMJPSDPJXYRASBZXVST", "BMOZHVQPOTJTPLFACHLQIKNXHTEBIOCOCZHOOOQGFJHKWMEWCY", "IPYMMKOBOKEFKPCALULUAXXYNOLQFTJDOJSHPUGWHBTQGHKCDE", "CCRHJLGJHAJYQBHRIZWAWQHMNCOVBHCJDCOWOIPVSLPYKLFUUS", "XMPABHJALLODAZOFLGZVLNZPBADLYKCPWIWTRJBJPWJXFORXTS", "XWMWXDLUPDWTMVEJPDXAAQVAJSGWPELYBTUHNFNAQSTAZOTVCN", "WGKUSCOKALODQGFPGANEFXAOHBXJROTERTFWUVFGFJZWXQUOKQ", "KQQHPZEEXLPMQHLSVENVCGPGKVJQPTSMELMGRQAHGYYHOJNBVS", "GMAJBNTYMXXXUQGORFTBFOAJZLEVXXZRMWQHNABMQJYZAYNLGU", "KHZQAMHEPQCHLIJALFEQDYPMJDMJTDOHIYAXPIMZAPBBHCNKBB", "GMQFHVCWBNHQPHYNZNXJENSOJGGAYTSTQANYBWPNRQUBROWWLS", "HJDEFBUKTFMWFXYSLDUDWYCLLTGCYXDOXTWMVAZGCTBCTWWTRJ", "RHLMPVIXEQKTKWXBDOJZLUAXTOIMRCEPVYYEGYBAAACTRHIWAR", "DGVOLHMFGWCQSTPIHBDQPJRKKIPRSPDFAQJUMPRNVUFXTKTIAB", "BWLOJZYKCWUFBYCFPLPMIYOQXTZQBVXWJVZRQUWQXLGGZHHGKB", "GNFHIQIHOFEIUCAQCMYWENCZGAUDJUHWMRNMXASIIBRQSUABDT", "BNJBBJMKDVDAQLEXKQVWNVIUMZDZAWXGDGMJSMDJZBYFTFYWHE", "HYMQWUHHQWCSCMVBAUYFTDGRKRPQXGWMORLNFFLVUVAGYBOGQC", "FJHNUAGFEELYUKNUYOGOCYFXJNCCJENALGVHQDTPAYZTJOGUML", "UFNBUNLJSAQHNAIHZEKSZJUJMEOFIUMNPLPBOLWMUKGTFGQWBT", "XTRBKDSNJEWVFPFMSXGZWJYJBVFXZPAVKBFIDJHHDEICIHMBUG", "PJMQDZMVCQQNEWKGRRHDJTODYPBOBXSSMMIUXXJFYHTZSYMWOE", "TECUMFCDKPCVWZSWKUPPGAWBWJPRUAEOBWBCJJIISNMVXOXWDJ", "FGNJEQLIWKYTZPSIAJOFDAOBBKUKGATHBLJMASUDDBMFOQKBXA", "KVMYSUFJJDHWCVZYJSNTLJAPCTBICLDAYBZPJZSSRDEUCVULVV", "RCIUJFKJEWTXZYGCGKXSRSWKRJHPUZDUYAOPFSXHVGPANKDEFZ", "LAYMKBFOWHRJINVMJOJWGCNSUALQRMDYCMTKEOHSNPTYCDTRGZ", "DHNUVUZKIEJMKQDZJJEAZFCKCKUCHDKKAMEDCEGBIIJKDJOVFO", "MQVYVCMGYCMAIVFCTOIEPHTDYBITYUGHARYNRRADWRROYBUOHW", "NFDOZGKOYIMVKFFJHDYMHPMMDWNKPTROBSAUZQWYUMDXNRHIJK", "EAYBOSNXGPYCGFOBJUQSVJVPMUKOJABQCYABBNBSVXCVZDPBNA", "MTIATHENZVGPNGEPCSSAHANMLPPKDKKKULBZSIHWCFBAXKDIEN", "ALAYFCJDWXZNNWUSEQLEJBCCOGOCWQGDKIJZVABNOVJRQJCWQA", "IJEXDQEWDELZXVMKHIBEVDEJCHGZPZQOFXIAHGWYPZPFAVUDCG", "GLKNIQQLZPJKMFAQMHCFRYOWGIDDPFPCSMUADVPTGJXSOPTKMV", "QRFEVGJZQLGOXYULZUVSNNKVRTQLYDDSHRKEJTEWMHHEEHAIKE", "WFVXVCWZHLZCTNGRSTJTKYBSHYDEPECFAJZMLJJDTGBOIUZHKU", "LXXYIWQUWDXVRJXPAHQKZZXODWVQBXBVMGQHDZTWGFQVASQCFR", "VWAPOUEIUBIFNJFGOGXRLNCEUNPBTJDSFDAMYSUSZXAJYSNMFE"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "FZGEROJPBULVLSLXHQTQDNKC";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> superstring = {"THEWORD"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "THEWORD";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> superstring = {"ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRSTUWXYZABCDEFGHIJKLMNOPQRST"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPQRSTUWXYZ";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> superstring = {"RJKYKDDSHN", "WAPWNNNAO", "IDFYPU", "QHAEYFH", "BBEHUHRO"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "NAOIDFYPUQH";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> superstring = {"CDAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEF"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "CDAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEF";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> superstring = {"TTTTTTTTTTTT"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "T";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> superstring = {"ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX", "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> superstring = {"ABAAAAAAC"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> superstring = {"ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF", "ASFKKFHJDAHFKJAHFKADHFAEDHF"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "DAHFKJ";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> superstring = {"ABBBBBBBBBBBBBBBBBBBBCDEBBBBFGHIJ"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBBBBBBBBBBBBBBBBBBBCDEBBBBFGHIJ";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> superstring = {"QWRAURSHMOBEVVWOEZFCNQAJSRIZSSWTZMWVNZCEUGIXANIVQZ", "FUARYOECCGCVUQMVHZQYJTUDDSLSEXOBRNUDLQBZDIBHONJTXW", "CAJLFRHKICWNNPGMYYJRMFKUDEXMNSCHRYSMIYYENODKSDPEHO", "INHSRESKHELVIDSXDHWISPZPBBJSPNPLANRPABTIYTCUCZATWO", "MEYAXNEKISOSDJOSVEKEIMLYQQMUPQBOWULLYJJFGVMVYSDGHM", "MMPMIABKUQQTMLKLEHGRCHBBNOIOLWXRCWCBHVPAPDUTMMNMRJ", "GDAOPQUIKOOUQLAJSXJJUMDYHWAQOASMAXFVOOAITHXHZWXQQA", "DZAYBBERIZHYFPLPVDNZHKVDEBPGNFCOOLFSXNHYWWCMAPGHBC", "CVBDIPZZJIYTHEIMPPVVLXSDMREFPNRUQOYVJPMQFGMHEADZGB", "UCLODHNQNMJRQAUJXNHPMSBJSOXITDLGOPDTDQPVNVQGQIFGLR", "HVABGWLJNNQPFOPGSMMRGXOMJMDNVBCSIHUQBPXXETJQNBMARD", "RNPOHOHFIGCKMVQOIRCKITPKJRBTGZOIJVDCQKSXXUZRJXFWUF", "CRCXZEXDNQJOFCYMYULHLSWYXMVPIIPHIYQQADSOIAZPYPEWGW", "BYLACJNVVPIPUACOYAZYGJVVKPVUYYHFHUEXDQXPAOLPZXMFGP", "XCJHCAKDYEIOERJYZSBWMIEQMQSLNEJSARLVWRAXLIAVTDVQBT", "XLHONBQGDZWNTKUMDMORPOGFOJYPMTASZMCBYOJZXCQVRFMLIN", "HFTURDVZIPMYCBCDRRPGYKCOMQWTFYYXBZYMZJGCKTRWIEEMDM", "WRMNOSEFVLGXRACDACDQPAUNCYPDNOXWANPNEDUQSTKIGVDAGX", "CQMEAEFPYWEQENBHLMROTULKZRROJPRMESVILZESYTJYIMTTJD", "DIMLGQDYCJNYLEKSJBHQYMZIIQPZXUEKMIMSDTNGBTDYUKIAIP", "MQXWRGKFLZMGFBIZLXERABXTKNKGDSYFIFFWLHKZJLOXZZJYFU", "HSGVRZKPYFADWGMNJVWLHBEDXYEUBDIPGJMQZTCISDVHXLHACO", "CIEGVRLGIHUFMSRRJEHYHWORLJZXHEMECOIDTMTNWUKOHRVFDD", "LINJFLAMSEHCBGRLUHGPRPHSNIEKTNFFCMJQDMHQLBWCBRTDFJ", "EGZTRFDYSCQWURPWJHNXHPUWUXVCWXOSBSYPHBJJKPAHQAVAUL", "SLKHNOAEPPBDRMNBICOZCVCZZDAIXKNLNJNSMHQDVVEBAADXMR", "SYAHBCWNIYIGMFQPHFGIBUWZDRZRWOSJGCNTLQZZPMBPIBBIWN", "WYYPMOODVEGYYBTYACPZWIEIRAYOERIAWPTWULMBVIIHPGREPI", "IDYMDITTQNBZGLAGFZLHTNVIZLNXQPUKYCQUNVTBTOQJSIULKE", "MTETXJXHXIFPVNSNQQSFBYOCVAWBTZNMHWGLBCBFFERNDIWOMT", "FDGWJHBVOMXWFRDEMCOMTADOFILUTMSGRQAMEVTJZNSHKBHAAQ", "ARSVOHMIBTQEKAGOLTSMHRPQHZDSNSKMLQXGMEISPWVKPYBOIV", "YYPDJURHHOHWGHIQAJPMVCNKRIOAXVRHHNCUKXEKYFWBGIGUUD", "SEWRWEDBXFEYTLCVKVJGICJHQKMCFVGLDYMPTFFGKYDOEDJMTL", "IUQYHRYHCZHHUZMDXIKKIRUIVRQGOBEXRXEMADUNQSAXCOOFOG", "JOKZLEMOYCSKXUYPYDROAGKNAJRSFRAVMAGMFBFRKTYAUFJWWX", "MBTDZBFYWXALBTKBVKRGZIYPYKMWOGLFAADUIYXSMHDKIINLPR", "PSEPJDXYDWWKEEEXCWSDEIQYYXNXJDXNBWCANTOUWCMUTCMJYU", "BBMRSYAQJSDKOCYMGHAWRHBTDIMKPRKZBYLMOHTSPJGROPOZPW", "FQLLIMJSPEKFTQZFPUZSEFXSUHTKQYQTQMZNWYGWXJVWFRGAGL", "UTNKUHZTPYKGHRKTTFXETKODEOWRSCDMDJAFXOLWUISOMEROPC", "BHPMMNCVWGWDXXFNCFKRGPWMHFPHRKKALMBAICWVSFZCFPNRVD", "CIMNZEPQAXTFRFPHGUHRDSLYLUZYXTVIAZNAFGLHPOBEPDTPMR", "NZOOWGZIRXYEJZAHXTUSXZEUAZIZYLVHAGVVSSIJARVJXGPGOX", "ODPYTKCRNTHMADVPONAGUDKIKUXIDMWNHYKNQEVSZOKVEOESEB", "VLGVBTQEIWHHWYPLOAWNEDIDNPPXXWARERREWMKDVNKNNSHRLD", "CVPPDKDRWJCNUBSBXCXGYBYHCSLMIUKYJFWXQKAZYACYXBJBQQ", "XJOWVSEKKWNELSPFYUMKUCJJWUKZPMTWGOVMEWWCNDMNSFQXME", "YHVANPYVJPVPHCKQKDZHBMUHTGIBDLBWGGEPRGEIFVLRVDOUOJ", "LYQADXZXDYVNJHCNVMMNYNJKJBKLWNXJVDDKUOTDYVDGMYLFQY"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "UQSTKIGVDAGXCQMEAEFPYWEQENBHLMRO";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> superstring = {"ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC", "ZYXWVUTSRQPONMLKJIHGFEDCBAZYXWVUTSRQPONMLKJIHGFEDC"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "BAZYXWVUTSRQPONMLKJIHGFEDC";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> superstring = {"WAPPYWMGOY", "PFHRKTY", "PHMVHQC", "TULXQTHSFG", "ZFEOHPKH", "ATOPGCKWI", "QEFMZZW"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "FHRKTYPHMVHQCTULXQTHSFGZFEO";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> superstring = {"GTVESRVGIRWDYHIOSGEWRUIIGRJEYTREGDRSWQRWDYHIOSGEG", "GTVESRVGIRWDYHIOSGEWRUIIGRJEYTREGDRSWQRWDYHIOSGEG", "GTVESRVGIRWDYHIOSGEWRUIIGRJEYTREGDRSWQRWDYHIOSGEG", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "GTVESRVGIRWDYHIOSGEWRUIIGRJEYTREGDRSWQRWDYHIOSGEG", "GTVESRVGIRWDYHIOSGEWRUIIGRJEYTREGDRSWQRWDYHIOSGEG", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "GTVESRVGIRWDYHIOSGEWRUIIGRJEYTREGDRSWQRWDYHIOSGEG", "GTVESRVGIRWDYHIOSGEWRUIIGRJEYTREGDRSWQRWDYHIOSGEG", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "GTVESRVGIRWDYHIOSGEWRUIIGRJEYTREGDRSWQRWDYHIOSGEG", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "GTVESRVGIRWDYHIOSGEWRUIIGRJEYTREGDRSWQRWDYHIOSGEG", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "GTVESRVGIRWDYHIOSGEWRUIIGRJEYTREGDRSWQRWDYHIOSGEG", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "GTVESRVGIRWDYHIOSGEWRUIIGRJEYTREGDRSWQRWDYHIOSGEG", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "GTVESRVGIRWDYHIOSGEWRUIIGRJEYTREGDRSWQRWDYHIOSGEG", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "GTVESRVGIRWDYHIOSGEWRUIIGRJEYTREGDRSWQRWDYHIOSGEG", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "GTVESRVGIRWDYHIOSGEWRUIIGRJEYTREGDRSWQRWDYHIOSGEG", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV", "ASEXDEWXWECERVRTBYTGUNJIMUMLIPKUMKTYBEVTWCRXDFREV"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "GUNJIMUMLIPKUMKTYBEVTWCRXDF";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> superstring = {"ABCDEFGHIJKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAALMNOPQRSTUVWXYZ"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAALMNOPQRSTUVWXYZ";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> superstring = {"CDAAAAAAAEF"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "CDAAAAAAAEF";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> superstring = {"QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE", "QLEJQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHTYGFREFSE"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "JQOEJOADJSOFJKLXCVCVBMNMLPOPUOPIYOGHT";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> superstring = {"ABAAAAACDE"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABAAAAACDE";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> superstring = {"BACCCCCCCXL"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "BACCCCCCCXL";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> superstring = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABC", "ADEFGAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "BCADEFG";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> superstring = {"ABCBDBBBBBBE"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCBDBBBBBBE";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> superstring = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBA", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> superstring = {"ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB", "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "BZYXWVUTSRQPONMLKJIHGFEDC";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> superstring = {"A"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> superstring = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    SuperString* pObj = new SuperString();
    clock_t start = clock();
    string result = pObj->goodnessSubstring(superstring);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=8394868&rd=8012&pm=4718
********************************************************************************
#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <numeric>
#include <algorithm>
 
using namespace std;
 
typedef vector<string> vs;
 
#define For(i,a,b) for(int i=(a); i<=(b); i++)
#define Rep(i,n) for(int i=0; i<(n); i++)
#define Size(x) (int(x.size()))
#define Fil(a) memset(&a,0,sizeof(a))
 
struct SuperString
{
  string goodnessSubstring(vs superstring)
  {
    string st,res;
    Rep(i,Size(superstring)) st+=superstring[i];
    res="";
    int best=0;
    Rep(i,Size(st))
    {
      int mx=0,pos=i-1;
      int cnt[26];
      Fil(cnt);
      int cur=0;
      For(j,i,Size(st)-1)
      {
        int k=st[j]-'A';
        ++cnt[k];
        if(cnt[k]==1) ++cur;
        else if(cnt[k]==2) --cur;
        if(cur>mx)
        {
          mx=cur;
          pos=j;
        }
      }
      if(mx<best) continue;
      string ss=st.substr(i,pos-i+1);
      if(mx>best || mx==best && ss<res)
      {
        best=mx;
        res=ss;
      }
    }
    return res;
  }
};

********************************************************************************
*******************************************************************************/