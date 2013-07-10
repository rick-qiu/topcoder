/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2913
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

class UserName {
public:
    string newMember(vector<string> existingNames, string newName);
};

string UserName::newMember(vector<string> existingNames, string newName) {
    string ret;
    return ret;
}


int test0() {
    vector<string> existingNames = {"MasterOfDisaster", "DingBat", "Orpheus", "WolfMan", "MrKnowItAll"};
    string newName = "TygerTyger";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "TygerTyger";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> existingNames = {"MasterOfDisaster", "TygerTyger1", "DingBat", "Orpheus", "TygerTyger", "WolfMan", "MrKnowItAll"};
    string newName = "TygerTyger";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "TygerTyger2";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> existingNames = {"TygerTyger2000", "TygerTyger1", "MasterDisaster", "DingBat", "Orpheus", "WolfMan", "MrKnowItAll"};
    string newName = "TygerTyger";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "TygerTyger";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> existingNames = {"grokster2", "BrownEyedBoy", "Yoop", "BlueEyedGirl", "grokster", "Elemental", "NightShade", "Grokster1"};
    string newName = "grokster";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "grokster1";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> existingNames = {"Bart4", "Bart5", "Bart6", "Bart7", "Bart8", "Bart9", "Bart10", "Lisa", "Marge", "Homer", "Bart", "Bart1", "Bart2", "Bart3", "Bart11", "Bart12"};
    string newName = "Bart";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "Bart13";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> existingNames = {"lzO", "HQu65", "RAr", "gtY", "HQu18", "HQu26", "HQu70", "HQu60", "UpJ", "HHV", "HQu10", "HQu5", "eWI", "SQC", "HQu23", "ZvM", "HQu17", "TJG", "VDp", "HQu54", "HQu59", "nQd", "jYg", "pXB", "OQz", "bxj", "HQu31", "HQu12", "HQu64", "cdV", "HQu8", "MKs", "HQu19", "mAr", "HQu37", "HQu27", "PAA", "KFf", "HQu34", "nnn", "HQu6", "HQu21", "iGu", "HQu43", "HQu14", "AhW", "HQu4", "GLP", "HQu30", "Fgv"};
    string newName = "HQu";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "HQu";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> existingNames = {"gvI", "umf48", "umf40", "vPl", "uQF", "umf29", "Ubo", "Leu", "umf46", "zKB", "umf9", "umf19", "XTS", "umf18", "eRC", "tXu", "umf", "NYm", "umf57", "fUz", "fgO", "umf17", "umf62", "umf33", "KTj", "umf63", "kSW", "Jed", "umf59", "umf39", "SvE", "umf54", "umf41", "ysr", "umf6", "umf52", "Wvo", "Xck", "PmI", "umf23", "wtn", "umf24", "UfC", "umf32", "umf21", "umf14", "umf61", "umf38", "etz", "mQL"};
    string newName = "umf";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "umf1";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> existingNames = {"ARu38", "nzu", "ARu43", "bDV", "ARu62", "ARu47", "ARu58", "moC", "ARu69", "ARu20", "Cky", "dpS", "kaR", "GkV", "UtF", "maK", "ARu35", "ARu44", "EFu", "ARu7", "ARu30", "ARu49", "ARu55", "ARu51", "OZP", "ARu15", "ARu46", "ARu21", "HFz", "ARu", "ARu26", "ARu36", "ARu19", "ARu22", "xEC", "ARu12", "sRd", "GHb", "HTh", "wgV", "rFt", "uUM", "hEN", "tbd", "EvV", "ARu17", "grn", "ARu53", "ARu59", "TMh"};
    string newName = "ARu";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "ARu1";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> existingNames = {"BXw", "iFz", "BXw1", "BXw9", "BXw47", "PnI", "EtY", "BXw33", "BXw57", "BXw50", "MTZ", "BXw36", "OmB", "Sbv", "wMo", "avC", "OGD", "rbb", "BXw25", "BXw69", "aiS", "BXw40", "BXw7", "HtW", "uwR", "BXw23", "GeP", "BXw68", "BXw59", "nyg", "seu", "Ggp", "BXw65", "zgA", "BXw2", "eYM", "BXw64", "BXw38", "BXw29", "BXw53", "BXw17", "BXw56", "avq", "WSE", "uUT", "BXw43", "pxx", "BXw52", "Nla", "BXw24"};
    string newName = "BXw";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "BXw3";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> existingNames = {"iyB", "buB", "azl", "kFY61", "kFY45", "wAo", "kFY60", "swc", "bPh", "xsr", "MDa", "kFY26", "kFY11", "qET", "kFY51", "kFY48", "kFY42", "kFY28", "CMt", "cdf", "kFY41", "kFY31", "Gdw", "usC", "kFY55", "HUb", "kFY9", "kFY68", "kFY25", "IWk", "kFY54", "keM", "oWU", "UNQ", "kFY4", "LvC", "YhU", "kFY5", "lmy", "kFY32", "kFY10", "kFY14", "kFY67", "kFY29", "wye", "kFY49", "ncg", "Ivg", "kFY", "kFY20"};
    string newName = "kFY";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "kFY1";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> existingNames = {"wje", "GhY10", "HSw", "GhY36", "GhY64", "GhY29", "GhY40", "JkZ", "gqO", "GhY39", "GhY48", "KeP", "GhY35", "fgv", "GhY8", "nsN", "iaA", "iBk", "GhY53", "GhY37", "SaF", "GhY2", "TpA", "GhY63", "GhY17", "GhY24", "GhY42", "GhY", "GhY67", "GhY22", "GhY59", "GhY38", "QpI", "ztc", "GhY18", "GhY1", "XPo", "GhY19", "IKa", "KgF", "GhY16", "QyV", "GhY41", "Nsi", "Wkb", "fab", "ZjD", "HDk", "EYD", "yzy"};
    string newName = "GhY";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "GhY3";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> existingNames = {"Lsh", "OBw", "onU43", "onU32", "onU4", "JkW", "onU40", "PRB", "onU50", "onU17", "PLK", "MsH", "onU12", "Hbl", "onU53", "ogQ", "onU66", "Qmi", "onU2", "CSf", "onU36", "onU26", "QaB", "onU24", "Gwi", "onU8", "PIr", "onU18", "jfp", "onU5", "onU34", "BDG", "Rxw", "onU9", "elU", "uUX", "TBC", "onU61", "onU46", "onU22", "onU48", "Hyg", "Xcp", "UbS", "nFX", "onU15", "onU", "onU29", "bdK", "onU57"};
    string newName = "onU";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "onU1";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> existingNames = {"Dow37", "Sam", "NWb", "Dow52", "WlR", "Dow54", "HmU", "Dow1", "Dow7", "tmc", "baS", "Dow59", "Dow51", "zOE", "zul", "Dow", "WIm", "Dow31", "JsA", "Dow44", "yGw", "Dow58", "XWV", "Dow65", "qlC", "ayT", "Dow38", "nPi", "Dow32", "FHf", "AcO", "mys", "Dow4", "bWn", "Dow35", "Dow8", "yAs", "Dow50", "Dow2", "Dow16", "Dow57", "Dow61", "Dow3", "pLA", "Dow26", "kWI", "Dow13", "tFM", "SOK", "Dow55"};
    string newName = "Dow";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "Dow5";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> existingNames = {"MJz", "eZa25", "mrH", "WwQ", "baV", "jAD", "Yhv", "bAc", "eZa8", "eZa14", "eZa48", "lbJ", "eZa33", "eZa61", "oBm", "xoB", "eZa50", "eZa63", "eZa10", "eZa66", "eZa12", "aQq", "eZa53", "eZa34", "eZa54", "eZa55", "eZa5", "tNX", "eZa1", "EmO", "CKo", "atp", "vPC", "eZa", "eZa17", "eZa46", "eZa22", "eZa69", "cPC", "eZa2", "Jnz", "dBO", "zDY", "DmW", "eZa28", "eZa31", "eZa9", "yms", "qrE", "ZlG"};
    string newName = "eZa";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "eZa3";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> existingNames = {"lqG", "KLU8", "KLU40", "KLU53", "ncl", "xMO", "KLU52", "KLU36", "KLU51", "KLU64", "KLU47", "SRx", "KLU20", "pjD", "KLU49", "KLU12", "uyT", "xbV", "KLU31", "KLU68", "ZuW", "KLU11", "KLU45", "pVR", "KLU61", "SrM", "dwl", "KLU66", "KLU56", "aDM", "KLU5", "exq", "KLU1", "QUn", "wud", "Gvo", "KLU9", "KLU28", "KLU55", "Yoh", "AaQ", "sJN", "vcf", "KLU24", "ruS", "KLU42", "ouo", "Bqr", "EXr", "jfg"};
    string newName = "KLU";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "KLU";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> existingNames = {"Zgv46", "nLr", "wdh", "Zgv37", "rbo", "sNj", "Zgv13", "Zgv2", "Zgv47", "gLa", "bjp", "Jst", "Zgv44", "Zgv24", "Zgv26", "Iti", "KNa", "Zgv15", "Zgv67", "obz", "Zgv11", "Zgv66", "Zgv12", "Zgv45", "Fys", "Zgv60", "lYc", "Zgv6", "gHZ", "Zgv59", "Zgv1", "tEh", "GHS", "yyh", "Zgv65", "Pzl", "Zgv4", "Zgv29", "Zgv69", "OjX", "Owc", "xAO", "Zgv33", "zog", "wIf", "Zgv49", "hUD", "OYt", "Zgv68", "vrQ"};
    string newName = "Zgv";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "Zgv";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> existingNames = {"Joi50", "Joi55", "Joi9", "hXa", "Joi18", "qPY", "Joi62", "GXU", "Joi11", "Joi41", "Joi56", "Pct", "eaf", "Joi1", "Joi4", "PoL", "VYz", "ZUT", "yai", "Joi10", "PgV", "bCU", "dRV", "Heb", "Qwd", "Joi68", "Joi13", "Joi63", "Joi40", "Joi47", "Joi57", "Joi8", "qJW", "IRn", "Joi44", "ARq", "Joi16", "wfM", "Joi31", "MbZ", "Joi23", "Joi54", "Joi45", "gqw", "rPB", "jEc", "mff", "Joi42", "beL", "QiB"};
    string newName = "Joi";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "Joi";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> existingNames = {"aZq", "Bmx31", "Bmx1", "jnE", "Bmx46", "Bmx40", "Bmx20", "BPt", "tGx", "djs", "Bmx13", "aMh", "hau", "Bmx49", "VIN", "Bmx63", "ruN", "Bmx25", "LNC", "TKu", "Bmx11", "Bmx54", "Bmx42", "mxg", "VBd", "fvR", "IYg", "Bmx48", "Bmx51", "Bmx29", "xjd", "Fih", "bcR", "Bmx65", "Bmx5", "fju", "ySY", "Oto", "Bmx58", "Rff", "Bmx", "Bmx27", "Bmx21", "Bmx61", "Bmx35", "Bmx38", "LyB", "phx", "Bmx3", "Bmx56"};
    string newName = "Bmx";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "Bmx2";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> existingNames = {"ZIm44", "GiV", "oMz", "ZIm4", "ZIm68", "Vwx", "ZIm38", "ZIm54", "ZIm9", "ZIm32", "vGn", "yHt", "UyI", "ZIm65", "ZIm", "Iqb", "ILj", "KHM", "wGl", "ZIm50", "ZIm40", "ZIm52", "ZIm14", "gZc", "ZIm47", "kdt", "ZIm48", "ZIm67", "ZIm62", "pVo", "ViO", "ZIm64", "NEk", "OPv", "ZIm58", "Aqm", "ZIm22", "ZIm42", "ZIm49", "nRJ", "NOd", "ZIm63", "ZIm24", "ZIm5", "NRs", "ZIm69", "bTc", "kgx", "wMo", "jsH"};
    string newName = "ZIm";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "ZIm1";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> existingNames = {"ALx51", "ThO", "yVQ", "ALx", "qqe", "ALx56", "ALx58", "ykm", "ePB", "ALx64", "ALx16", "ALx38", "ALx60", "ALx47", "iXL", "axj", "oQA", "shz", "sXr", "ALx7", "ALx57", "eAJ", "LrX", "ALx31", "eKw", "xxE", "ALx48", "CqD", "ALx45", "KvR", "ALx68", "ALx11", "fEI", "ALx20", "ivE", "ALx63", "ALx8", "qnZ", "ALx49", "ALx23", "JeF", "ELH", "ALx21", "yXG", "ALx10", "KYo", "Zxd", "ALx22", "ALx43", "ALx9"};
    string newName = "ALx";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "ALx1";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> existingNames = {"XCA", "OWP", "yHt", "JQv", "pYy43", "pYy57", "pYy49", "YfK", "pYy66", "pYy18", "fPe", "pYy64", "NdJ", "pYy50", "pYy7", "pYy34", "qep", "KhL", "pYy44", "pYy46", "pYy21", "pYy70", "pYy30", "pYy45", "xUY", "RSs", "pHt", "pYy69", "ggi", "pYy6", "rRG", "pYy17", "QqO", "pYy39", "jCo", "pYy12", "pYy35", "pYy60", "XSZ", "YAM", "sQN", "tSY", "QTK", "pYy63", "APS", "Ian", "LVf", "pYy53", "xhK", "pYy62"};
    string newName = "pYy";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "pYy";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> existingNames = {"lUG36", "lUG62", "lUG57", "lUG23", "oob", "lUG52", "AXH", "lUG25", "GiW", "cCM", "mHW", "lUG58", "TjO", "OVg", "lUG67", "GRq", "Odi", "lUG18", "lUG3", "lUG70", "MVY", "SrG", "lUG64", "lUG20", "PlX", "Lrh", "lUG47", "MKT", "WOp", "lUG33", "lUG15", "lUG12", "lUG6", "paz", "lUG56", "lUG34", "Oxp", "lUG66", "lUG28", "lUG63", "lUG22", "eOR", "vMD", "pTt", "gqo", "FhN", "VFV", "lUG55", "pqz", "qMB"};
    string newName = "lUG";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "lUG";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> existingNames = {"kYg", "YSM38", "STL", "YKI", "Rcj", "YSM18", "eEG", "YSM16", "YSM36", "YSM24", "YSM66", "jLe", "WrA", "Vlx", "uMZ", "YSM46", "PRL", "YSM11", "MLT", "YSM59", "BHX", "fza", "YSM65", "yqi", "YSM56", "YSM32", "YSM22", "xlb", "YSM62", "YSM27", "YSM1", "unP", "ZQh", "YSM19", "YSM52", "fQg", "NSW", "YSM60", "YSM", "YSM31", "YSM3", "dkL", "YSM10", "tAX", "YSM41", "RLf", "PFd", "MSY", "YSM50", "YSM25"};
    string newName = "YSM";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "YSM2";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> existingNames = {"XIf", "nTq", "JSY63", "JSY21", "JSY68", "JSY10", "JSY12", "JSY15", "JSY13", "pMd", "JSY6", "YZh", "nmC", "JSY70", "Wxa", "Zsf", "ffX", "JSY3", "ODM", "mET", "JSY5", "JSY64", "JSY69", "JSY2", "sfL", "JSY46", "JSY27", "JSY30", "Uwd", "JSY52", "luO", "lFt", "JSY", "sin", "ilg", "JSY43", "diy", "sar", "JSY54", "PYc", "JSY20", "Lsh", "uGv", "NiY", "wdf", "JSY34", "JSY50", "JSY24", "JSY32", "SSh"};
    string newName = "JSY";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "JSY1";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> existingNames = {"EUD62", "Itb", "EUD67", "hvh", "cnw", "NGe", "qgz", "Kfc", "EUD68", "EUD63", "TRe", "IWx", "EUD48", "EUD31", "EUD10", "EUD25", "OcH", "EUD65", "ARB", "EUD23", "DCk", "uid", "ckC", "IpN", "IIS", "EUD44", "MIk", "EUD36", "EUD40", "YTH", "EUD22", "EUD13", "EUD20", "nPa", "EUD39", "wPz", "EUD28", "wkR", "EUD52", "EUD46", "dGK", "EUD24", "tvM", "AFT", "EUD29", "EUD55", "OUb", "fhP", "EUD66", "EUD56"};
    string newName = "EUD";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "EUD";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> existingNames = {"Vmc39", "Vmc68", "sAk", "eCZ", "Vmc46", "Vmc14", "yVC", "Vmc4", "Vmc56", "ebk", "Hiq", "Vmc30", "lnH", "Omb", "Vmc11", "Vmc42", "Vmc21", "AtV", "Vmc45", "Vmc53", "sZQ", "Ffl", "bRL", "Vmc19", "Vmc8", "sgJ", "Vmc22", "Iup", "nYh", "Vmc69", "yiM", "Ypk", "Vmc31", "Vmc52", "ERS", "Vmc64", "bQG", "Vmc24", "uft", "YDE", "tFl", "Vmc34", "Vmc28", "Vmc59", "Vmc66", "Vmc65", "gvI", "JpU", "IfL", "ogI"};
    string newName = "Vmc";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "Vmc";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> existingNames = {"gqD", "vcn", "RfP16", "muo", "RfP10", "RfP38", "RfP48", "cbF", "Rde", "hOO", "ekV", "rVO", "KPG", "RfP19", "FXl", "RfP60", "tzP", "MKw", "RfP31", "RfP70", "ziA", "RfP30", "RfP33", "rsC", "RfP45", "RfP64", "Zqr", "RfP62", "RfP37", "RfP67", "mUB", "RfP12", "RfP28", "wlP", "RfP39", "RfP17", "Kak", "OkI", "viN", "RfP32", "RfP56", "RfP15", "RfP42", "RfP8", "bDn", "RfP13", "FdL", "chC", "DIv", "MMI"};
    string newName = "RfP";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "RfP";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> existingNames = {"CZt38", "nSp", "CZt24", "Axw", "CZt29", "ZPS", "uIR", "dAh", "CZt32", "ftt", "NKF", "hTq", "CZt35", "OLP", "CZt28", "CZt20", "CZt21", "CZt48", "CLT", "CZt31", "CZt53", "nSr", "Mpm", "Dls", "lYq", "CZt14", "CZt30", "CZt68", "vZE", "CZt51", "PMH", "fVq", "CZt25", "CZt46", "CZt67", "CZt27", "EvN", "ocB", "NYp", "CZt37", "CZt62", "CZt19", "CZt1", "LkH", "CZt", "fLc", "ZsZ", "KQB", "CZt50", "CZt5"};
    string newName = "CZt";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "CZt2";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> existingNames = {"bYG1", "Lbz", "hMo", "bYG9", "Cda", "zJD", "bYG16", "bYG3", "bYG25", "lyy", "bYG61", "pad", "gkO", "bYG31", "bYG29", "BGg", "BoB", "bzV", "Cdd", "bYG38", "pko", "wfe", "bYG67", "wEn", "Ced", "bYG17", "bYG47", "bYG53", "bYG59", "bYG33", "NpJ", "smk", "LoT", "bYG49", "vVS", "QOG", "bYG5", "bYG21", "yIR", "bYG50", "bYG43", "bYG27", "CJt", "bYG54", "qcu", "UXn", "bYG", "bYG13", "bYG14", "bYG24"};
    string newName = "bYG";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "bYG2";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> existingNames = {"gOa", "HAm", "xIx", "HAm40", "HAm39", "wEf", "GQE", "kfH", "HAm1", "ssD", "Yao", "nEv", "HAm51", "lfV", "HAm60", "EZO", "HAm70", "HAm9", "IsZ", "HAm64", "HAm63", "HAm55", "kVQ", "lHq", "HAm65", "yBC", "GlB", "HAm10", "XWC", "qvL", "pSW", "IQC", "HAm50", "LZT", "HAm28", "HAm16", "HAm49", "HAm54", "HAm26", "dLe", "HAm62", "HAm41", "bDr", "cSC", "hcN", "HAm68", "HAm11", "HAm30", "HAm14", "HAm12"};
    string newName = "HAm";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "HAm2";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> existingNames = {"qWT40", "QdF", "ySI", "Dsz", "GdV", "qWT4", "qWT60", "RHb", "fnR", "Wjf", "qWT66", "YnP", "GiM", "qWT16", "qWT6", "arM", "kOX", "qOs", "LTf", "qWT65", "qWT24", "qWT31", "qWT12", "qWT64", "Nbo", "qWT7", "qWT", "Lgo", "qWT55", "qWT5", "qWT26", "qWT28", "iDd", "qWT59", "tvB", "qWT17", "pWo", "qWT62", "qWT48", "qWT37", "xID", "Beq", "Kfc", "qWT53", "qWT9", "qWT47", "KmH", "rRl", "AiH", "qWT32"};
    string newName = "qWT";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "qWT1";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> existingNames = {"MZe", "Hxt11", "Hxt66", "xua", "iPA", "Hxt38", "Hxt62", "enX", "xUO", "wQj", "huC", "Hxt13", "Hxt49", "Hxt32", "Hxt16", "jVJ", "Mjw", "dkY", "Hxt17", "dbt", "Hxt25", "Hxt51", "XWL", "LQZ", "Hxt19", "rdm", "DeL", "Hxt44", "Hxt59", "Hxt15", "Hxt10", "hwy", "eUB", "Hxt64", "dpu", "Xrn", "TFo", "Hxt35", "Hxt33", "bmy", "Hxt57", "Hxt2", "Hxt26", "Hxt29", "Hxt39", "Hxt", "qZt", "Hxt36", "Rqh", "qHB"};
    string newName = "Hxt";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "Hxt1";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> existingNames = {"dII69", "dII67", "dII43", "dII30", "dxC", "dII1", "dII6", "dII63", "dII24", "mfl", "dII2", "dII52", "dII61", "dII51", "MIU", "dII37", "abt", "dMQ", "MSf", "dII49", "dII12", "dII57", "abR", "JNW", "QmS", "dII56", "dII26", "HOz", "dII40", "nyi", "dII4", "Uvw", "dII23", "dII27", "dII32", "dII16", "Ajy", "psX", "zWj", "aXr", "KeD", "abS", "dcf", "dII54", "zBq", "wtu", "opQ", "Cyo", "Dos", "eaE"};
    string newName = "dII";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "dII";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> existingNames = {"YPb", "YPb51", "YPb20", "sxz", "eGy", "YPb69", "YtN", "YPb35", "YPb56", "YPb43", "nqM", "YPb37", "YPb21", "YPb25", "YPb19", "CGD", "YPb64", "kPB", "rkb", "YPb26", "YPb67", "VeT", "YPb32", "YhC", "vHL", "YPb18", "WlK", "YPb9", "kYT", "RzZ", "PeP", "ciV", "YPb65", "YPb5", "Jqb", "KNl", "YPb50", "eOe", "YPb30", "Mmw", "YPb31", "QWR", "Gle", "LuZ", "YPb10", "PuG", "YPb63", "YPb66", "YPb42", "rVk"};
    string newName = "YPb";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "YPb1";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> existingNames = {"hZs17", "Jop", "EWf", "hZs41", "hZs1", "hZs39", "pAA", "hZs2", "jvz", "gBd", "peA", "eLa", "MnZ", "hZs32", "hZs30", "DwF", "hZs11", "hZs18", "Lhy", "hZs36", "NzN", "pve", "hZs19", "Gcl", "Ixf", "TyN", "NNV", "ofI", "hZs45", "hZs60", "hZs47", "NBD", "hZs68", "HXx", "hZs10", "hZs12", "hZs42", "xXf", "EPC", "krp", "hZs25", "KJM", "bXb", "hZs59", "hZs38", "hZs27", "hZs57", "hZs20", "TYO", "hZs24"};
    string newName = "hZs";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "hZs";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> existingNames = {"Nch", "rFx", "sPG53", "sPG41", "sPG59", "sPG20", "sPG27", "UQq", "sPG46", "sPG17", "sPG52", "sPG19", "sPG42", "hRY", "xib", "XWq", "yaN", "tID", "QMx", "sPG40", "RYx", "sPG69", "BPM", "BKh", "sPG25", "gtY", "hYV", "sPG6", "dlk", "sPG61", "OmJ", "sPG50", "sPG48", "Noe", "aMI", "iKs", "sPG67", "sPG31", "sPG58", "QVt", "sbH", "hfn", "JmS", "sPG34", "sPG45", "sPG49", "Xvt", "sPG37", "SzP", "sPG56"};
    string newName = "sPG";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "sPG";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> existingNames = {"juR5", "Yky", "juR1", "juR3", "juR14", "juR70", "juR24", "juR8", "juR36", "zyU", "jNT", "juR32", "juR43", "juR26", "juR35", "qty", "juR11", "bLw", "juR22", "jTL", "hML", "juR", "jGM", "NSV", "juR25", "MPe", "juR21", "Ljf", "juR49", "zre", "KMR", "JQz", "Xii", "fbx", "zuw", "iPj", "juR18", "juR29", "juR60", "YXq", "beU", "Fuc", "WNH", "juR37", "juR20", "juR62", "beh", "juR68", "xQZ", "juR48"};
    string newName = "juR";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "juR2";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> existingNames = {"Rtx", "cFS32", "cFS11", "cFS44", "cFS6", "NRd", "zqO", "cFS1", "cFS22", "Nbc", "wPo", "cFS70", "cFS5", "cFS9", "vRq", "pjl", "cFS58", "CVl", "fFI", "cFS68", "dyQ", "LBE", "cFS", "wYn", "cFS26", "cFS7", "cFS41", "cFS51", "Ycm", "bXI", "IzO", "cFS4", "BEv", "RdJ", "cFS61", "zAn", "oUU", "cFS53", "Iht", "cFS54", "NaL", "Zap", "cFS66", "cFS14", "cFS33", "cFS16", "jAM", "cFS57", "DOB", "cFS64"};
    string newName = "cFS";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "cFS2";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> existingNames = {"EgY", "eQg11", "eQg36", "eQg25", "eQg16", "KfI", "Nky", "CtQ", "ZXe", "eQg6", "ePz", "UaD", "RMw", "eQg40", "eQg55", "eQg64", "gXN", "eQg18", "eQg66", "eQg45", "CAL", "ScG", "eQg34", "tEi", "oGv", "eQg38", "eQg", "eQg50", "eQg49", "Tho", "eQg43", "wVV", "aZO", "eQg67", "llr", "eQg17", "eQg63", "eQg1", "eQg21", "fwV", "ueR", "ewa", "Laa", "AKQ", "eQg28", "IwQ", "eQg7", "eQg56", "eQg19", "awW"};
    string newName = "eQg";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "eQg2";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> existingNames = {"Epv47", "RlY", "Jnx", "Epv42", "Epv22", "Zfg", "xfM", "Epv51", "mvv", "Epv67", "Epv1", "HfF", "Epv56", "Epv4", "Epv27", "Epv62", "iTk", "vAm", "Epv2", "Epv65", "YCf", "Epv43", "Epv59", "Ncq", "SVu", "Epv11", "oZB", "vZa", "Epv61", "Epv49", "nGj", "Epv58", "Epv26", "Epv55", "DHb", "ssz", "ZWZ", "BVE", "Epv63", "SxU", "Epv45", "Epv70", "Ayf", "Epv13", "MrF", "aqh", "Qvm", "bhJ", "Epv20", "kGt"};
    string newName = "Epv";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "Epv";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> existingNames = {"IOE56", "IOE63", "RRG", "IOE21", "rYQ", "dir", "KFs", "uvX", "GDW", "OTq", "IOE44", "IOE39", "IOE6", "tzJ", "Slf", "ChT", "IOE27", "IOE24", "IOE68", "IOE22", "AeE", "IOE9", "IOE52", "gmP", "IOE61", "lny", "IOE32", "IOE40", "XOP", "nsn", "IOE43", "IOE65", "WoY", "IOE13", "XlW", "IOE25", "IOE12", "ixG", "vBa", "Nac", "tps", "IOE66", "HWH", "hmb", "VMX", "IOE14", "IOE17", "IOE30", "ZPi", "IOE69"};
    string newName = "IOE";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "IOE";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> existingNames = {"UrK", "ewX41", "qyY", "ewX61", "ewX16", "ewX18", "ewX48", "pob", "ewX42", "ewX64", "Cgp", "xwm", "eop", "ewX54", "ZOL", "ENf", "nyr", "ewX26", "UCk", "sny", "qkk", "ewX39", "ZIR", "ewX22", "HHr", "xSf", "ewX47", "ZFb", "bvT", "bIi", "ewX21", "ewX62", "eJk", "ewX25", "ewX19", "zsZ", "cMk", "ewX5", "ewX65", "lhJ", "xYr", "ewX10", "ewX7", "ele", "ewX28", "ewX63", "ewX12", "ewX50", "ewX51", "puc"};
    string newName = "ewX";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "ewX";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> existingNames = {"kqb14", "kqb42", "auQ", "Wbs", "lgk", "kqb8", "TNZ", "YFW", "WwR", "zhS", "kqb13", "Fgn", "kqb23", "kqb64", "kqb45", "kqb70", "kqb20", "kqb", "kqb61", "kqb9", "kqb48", "Qhs", "kqb34", "Tjw", "Fql", "kqb37", "kqb57", "kqb35", "wxX", "kqb31", "dav", "YNl", "kqb63", "YGS", "kqb21", "VaM", "Ctc", "ZMN", "jDB", "kqb68", "kqb15", "mMj", "kqb24", "xOq", "Iun", "kqb46", "QOf", "pwo", "kqb55", "kqb47"};
    string newName = "kqb";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "kqb1";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> existingNames = {"yxB", "PVW56", "bGt", "PVW10", "gZD", "PVW2", "SVK", "GKG", "eWk", "DJS", "Vke", "PVW43", "OAe", "PVW45", "PVW13", "PVW55", "PVW33", "PVW28", "PVW16", "pFq", "PVW47", "PVW40", "tnl", "PVW38", "moI", "PVW42", "PVW7", "STQ", "RIC", "PVW54", "PVW60", "PVW67", "URf", "OMv", "hwQ", "PVW32", "PVW52", "ntL", "Vib", "PVW48", "PVW68", "PVW37", "PVW66", "dnz", "Nft", "PVW26", "seY", "eUC", "uMZ", "Owd"};
    string newName = "PVW";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "PVW";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> existingNames = {"ScL", "nMn", "iqw14", "iqw31", "iqw17", "YPi", "iqw37", "UyQ", "iqw41", "iqw57", "xIu", "iqw36", "iqw23", "iqw10", "MSz", "CDH", "iqw16", "iqw24", "kJP", "bUa", "iqw63", "sqa", "iqw56", "XVf", "yoq", "sNy", "XLm", "iqw51", "iqw52", "CSX", "iqw67", "iqw2", "iqw3", "eMs", "GuS", "iqw48", "zZr", "iqw15", "Epl", "iqw61", "iqw30", "JvE", "iqw7", "Rpu", "fba", "exh", "iqw13", "ABl", "AKF", "iqw9"};
    string newName = "iqw";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "iqw";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> existingNames = {"xnc36", "rXK", "rpi", "YYL", "zxn", "Cxb", "xnc69", "xnc12", "Jnb", "xnc52", "GvD", "xnc50", "KwG", "ruQ", "xnc24", "zjT", "xnc67", "Gwm", "xnc5", "UaK", "Xyq", "rBW", "xnc35", "FyV", "xnc25", "xnc49", "xnc33", "TRW", "xnc43", "YOJ", "AAF", "jjr", "ZEP", "xnc41", "xnc17", "fxQ", "xnc4", "oZg", "xnc37", "xnc34", "nsF", "nnB", "xnc57", "xnc15", "xnc63", "xnc22", "bmB", "xnc11", "xnc66", "xnc48"};
    string newName = "xnc";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "xnc";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> existingNames = {"JVV55", "jsh", "HOS", "JVV52", "JVV12", "Aah", "oau", "sJv", "JVV2", "FLW", "RWX", "jPm", "JVV25", "JVV11", "JVV30", "nJf", "tCe", "JVV65", "JVV18", "xdt", "JVV13", "VRM", "JVV53", "JVV15", "uAU", "JVV37", "jVS", "JVV31", "OCZ", "JVV54", "JVV41", "JVV68", "JVV20", "JlX", "JVV7", "JVV66", "ztl", "ISU", "CYH", "ppS", "UVX", "JVV48", "pZk", "JVV3", "JVV23", "JVV1", "uIR", "sFP", "JVV34", "YfW"};
    string newName = "JVV";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "JVV";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> existingNames = {"fvD34", "CVh", "fvD23", "fvD39", "fvD28", "fvD26", "fvD6", "eue", "Jzj", "giC", "qRX", "fvD30", "fvD35", "fvD", "Ftb", "fvD55", "fvD64", "fvD38", "fvD45", "pqs", "Iyr", "fvD7", "pZP", "fvD3", "BsG", "ctJ", "WqL", "rdG", "hCu", "oTA", "fvD68", "fvD27", "fvD43", "fvD62", "NTu", "HKX", "lGq", "fBY", "fvD44", "yhI", "fvD19", "VBM", "fvD40", "fvD29", "fvD61", "ORg", "Aqg", "nIV", "fvD42", "fvD59"};
    string newName = "fvD";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "fvD1";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> existingNames = {"mnt", "sPt", "nyh21", "DCQ", "nyh65", "JGE", "gVX", "nyh69", "nyh51", "WTw", "nyh35", "nyh49", "vnR", "yuk", "axr", "ZwP", "Vnu", "nyh68", "nyh57", "hnh", "LcS", "ldh", "ztU", "nyh45", "uig", "MnD", "IEP", "nyh4", "nyh8", "nyh9", "nyh62", "nyh34", "nyh31", "nyh53", "BEu", "Zjq", "pwz", "aat", "nyh67", "Oar", "nyh27", "nyh36", "iUJ", "nyh14", "nyh29", "nyh24", "ysu", "nyh39", "nyh23", "nyh2"};
    string newName = "nyh";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "nyh";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> existingNames = {"zYS", "xPL", "xPL21", "rtI", "xPL20", "kKp", "xPL30", "Dyn", "xPL44", "xPL7", "nMZ", "xPL8", "sEp", "UQM", "xPL65", "qth", "yXM", "mGb", "xPL70", "ztY", "sRB", "hrI", "wPm", "xPL63", "xPL37", "xPL6", "Xfh", "xPL2", "xPL59", "BDK", "xPL9", "JLn", "xPL12", "xPL42", "xPL32", "xPL53", "xPL46", "Rys", "xPL55", "lnN", "jkV", "xPL67", "xPL61", "EmI", "eil", "Afk", "xPL43", "xPL38", "wxN", "xPL5"};
    string newName = "xPL";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "xPL1";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> existingNames = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    string newName = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa1";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> existingNames = {"MasterOfDisaster", "TygerTyger1", "DingBat", "Orpheus", "TygerTyger", "WolfMan", "MrKnowItAll"};
    string newName = "TygerTyger";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "TygerTyger2";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> existingNames = {"skatou", "skatou2"};
    string newName = "skatou";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "skatou1";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> existingNames = {"kick", "kick", "kick"};
    string newName = "kick";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "kick1";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> existingNames = {"A", "AB"};
    string newName = "A";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "A1";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> existingNames = {"a", "a1", "a2", "a7"};
    string newName = "a";
    UserName* pObj = new UserName();
    clock_t start = clock();
    string result = pObj->newMember(existingNames, newName);
    clock_t end = clock();
    delete pObj;
    string expected = "a3";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=5849&pm=2913
********************************************************************************
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>
 
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define EACH(i,x) REP(i,(x).size())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
 
typedef long long int lint;
typedef unsigned long long int ull;
typedef pair<int,int> pi;
typedef vector<pi> vp;
typedef vector<int> vi;
typedef vector<string> vs;
 
class UserName
{
  public:
    string newMember(vs exist, string newname)
    {
      set<string> s;
      EACH(i, exist) s.insert(exist[i]);
      int num = 0;
      char candidate[1024];
      while(1)
      {
        if(num > 0)
          sprintf(candidate, "%s%d", newname.c_str(), num);
        else
          sprintf(candidate, "%s", newname.c_str());
        if(s.count(candidate) == 0)
          break;
        ++num;
      }
      return string(candidate);
    }
 
};

********************************************************************************
*******************************************************************************/