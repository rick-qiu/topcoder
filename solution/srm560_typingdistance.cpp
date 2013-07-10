/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12297
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

class TypingDistance {
public:
    int minDistance(string keyboard, string word);
};

int TypingDistance::minDistance(string keyboard, string word) {
    int ret;
    return ret;
}


int test0() {
    string keyboard = "qwertyuiop";
    string word = "potter";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string keyboard = "kwadrutove";
    string word = "rowerowe";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string keyboard = "qwertyuiopasdfghjklzxcvbnm";
    string word = "topcodersingleroundmatchgoodluckhavefun";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 322;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string keyboard = "tc";
    string word = "tctcttccctccccttc";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string keyboard = "a";
    string word = "aaaaaaaaaaa";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string keyboard = "d";
    string word = "dddddddddddddddddddddddddddddddddddddddddddddddddd";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string keyboard = "co";
    string word = "coccooccocoococoocccoo";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string keyboard = "vej";
    string word = "ejevvevevjjjejvevvvevvejeeeejjjejjveevjjvjejevveve";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string keyboard = "lsit";
    string word = "sltittsltiitststsitlltitltiilsillltiliitiss";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string keyboard = "xkumo";
    string word = "xmmxuuuxmxooxxumkxokuxokkxkmoxxkkumukkxkxkkmxmxoom";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string keyboard = "tqlbdo";
    string word = "oboq";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string keyboard = "ecjskyi";
    string word = "eesjjyykeysccsseyskkejeeyciikkcesejjeejysyycceyies";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string keyboard = "awcyepqf";
    string word = "ppfywwyceayfyaacaypfyecpcqyywfafqyp";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string keyboard = "kdqtbmnep";
    string word = "bpnkdqtdnq";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string keyboard = "vhtgywqkem";
    string word = "wvkkvwqqtqetevqqmhqmvmythemmvhtmtwvkhqvvgegekmhkwy";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string keyboard = "tqrgnikvyxj";
    string word = "gjtynnynyviitjyikgxrgjivyir";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string keyboard = "cahvkibdmejt";
    string word = "vhejijvabvimajedbhtackvabvmkitjceatchtjbvtijbeckvi";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 226;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string keyboard = "kfsqvzpwbtmhg";
    string word = "qqphwmzzkbpmvbhggbfzpkwwbbfvwggkhkzwwvfvvmhpsspwtf";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 182;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string keyboard = "izkldmubhqonrg";
    string word = "zzoimlbgrgdkhirdgdigbl";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string keyboard = "qilwphgasdcfvun";
    string word = "hcpflldugvslficifnvvwahcuqhiacpsgispvvvqdgwlavcwsp";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 259;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string keyboard = "efsxwdybtivcpurk";
    string word = "yidkxkbifcvbbtpkfyyyrxvdpurcfssbepibcykyxwrwpcb";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 247;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string keyboard = "sipndlwvyzcxtemkg";
    string word = "ntekzwvgxyewygenltgvmssvgmcnytcelcnvmdxexlnglypykw";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 275;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string keyboard = "weiuosvgkhtbjdymrx";
    string word = "drbdetjgitumrduhhdwdshohxeehtyewjrytwy";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string keyboard = "uatspmolvizqnhryedg";
    string word = "vqgaahssnnmeepmuqevhdhovooqeezeqszinpvahooazganumt";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 296;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string keyboard = "phjafsgzoirxqevkcumy";
    string word = "earxykijjrcjcfryygucfh";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 152;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string keyboard = "zdpvagwsouileyjnfqrcm";
    string word = "alqnueweyiqsnszzczagdoiuquivpugrvenszjccicvqzrlnaa";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 352;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string keyboard = "damgreuvtjiqswkfxzopbc";
    string word = "tticddvdizidsfqjgmicwwqojjisofsrpvwggmzrazsfofpffs";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 294;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string keyboard = "pnmjsqldkwfhoyxrzibvtug";
    string word = "mnkqjwbqbptdzinxzjrytrfuqvsvdqpskglxqbyrtixgqdkvfz";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 420;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string keyboard = "tfqvbawsdeuypcgxmirlokjz";
    string word = "zayapdleckjikgoflvwykzktkdpwsmrc";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 254;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string keyboard = "ijzqafksuobcmlypgthrdwnex";
    string word = "obyhorcajwymhsfotmhyqodtm";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 157;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string keyboard = "ljkhuogfrqwycvabszxptiendm";
    string word = "feiusvgkvwdocbciqktviclbsgvzdonuzmlktyybolrjxynilc";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 481;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string keyboard = "flcmhuzedpkatjwoigbxsvqnyr";
    string word = "ktvnnhiaasmqxfddocosnoshwn";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 213;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string keyboard = "tfvpkgomeuyriqhjzwnaxscbdl";
    string word = "hkzdbfsouxxhkmxdfydgwqqyalosqxvykafgldxxgogejayqln";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 442;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string keyboard = "kdliovyxcuajrnpsmthbfqgezw";
    string word = "vlkbyzrjbuwslnoshdmxoumbngatishhqthviysyihxwjztnil";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 421;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string keyboard = "mxcqsfkpbawgzlrtdynheojiuv";
    string word = "ffpaceimfkarzthgjtevemdenvkuyvmkexzwcktluustvkersq";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 422;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string keyboard = "xabuvlzychokmnpsdirqewftgj";
    string word = "imwrqmzipxtlvvmeqjovhwpeslpjbtwyoxrurxaahspdukeaei";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 438;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string keyboard = "mwnruqchglsofaybitdvxejzkp";
    string word = "wwwfoirbrycfkvpstvtswsctykkqjotylrwrusfrpwxtulpuqz";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 412;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string keyboard = "uwjseliorkqdtngfbamyvhzpxc";
    string word = "jnhtcg";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string keyboard = "qdawxopznfimuvlsehrjytckbg";
    string word = "itgfggtzjopoqzyxfeamkyeqhiqmxbxpcrhxgcptcytnnxqcou";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 458;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string keyboard = "isyrwvdnlbqjzcthumaxgpkfeo";
    string word = "ukjokxadbbzhaoqxopvlhrsztgqeytezrg";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 268;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string keyboard = "xeplifckyhaodrmqzbuvwsjngt";
    string word = "yvvwzxkypuabekenotjttubcfjofciunddidotsaegnpzziyto";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 407;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string keyboard = "pfxrlngakdjzcheyobmwsuivtq";
    string word = "rcdgbgkwet";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string keyboard = "uswzhvxckleagipbydtjornfmq";
    string word = "wzmyntnsjynqpzehrccgljxtegwcqtkoctsp";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 330;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string keyboard = "jgkmapryeobtxihnvcfulsdwqz";
    string word = "ybizsclklgaommexhetojxjbcnsdzpxcqwapzaigcpbfdqxrjb";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 385;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string keyboard = "anbqfskrldzgjotyvwemxhcipu";
    string word = "vmpjscntltpaifjdgvlfqxfxaduhqrmhzbekymhpevrpgjaqhp";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 480;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string keyboard = "gnyrlobmixsvcutejhdpkfzawq";
    string word = "wvasjmytqikqkmpqbshqutbbhjlgvuiqeskxhmpqivfzczxobi";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 416;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string keyboard = "tdxayljmpungcrzhvqsoiebwfk";
    string word = "jlwqqpndnbbdggonfocrvxbmlnycjduvuxwlyenlntquaadbwu";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 411;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string keyboard = "jzkyoavrswfnqdlpbxeucimtgh";
    string word = "oqnfywrsuvqwumjmaffgvynpevkzmog";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 264;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string keyboard = "poeayickhxzfbdqlnrmstjwuvg";
    string word = "hmwjcvzwwujhzzingowbooukvvgpicfeafuixolqipyinruyui";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 443;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string keyboard = "eucbakgtsrpxhqvflwomniydjz";
    string word = "vagcvydmdjnzkwzziasqporzqemqwdsvvzgrxtsnfktzwic";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string keyboard = "wocnthkgupysamdjxvqizbferl";
    string word = "glvovglzznskvwzxarqrpqhodoaciqbcpafdwmlsnvhekkmcot";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string keyboard = "qwertyuiopasdfghjklzxcvbnm";
    string word = "qmqmqmqmqmqmqmqmqmqmqmqmqmqmqmqmqmqmqmqmqmqmqmqmqm";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string keyboard = "ab";
    string word = "b";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string keyboard = "abcdefg";
    string word = "cb";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string keyboard = "abcdefghijklmnopqrstuvwx";
    string word = "abcdefghijklmnopqrstuvwx";
    TypingDistance* pObj = new TypingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(keyboard, word);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23049840&rd=15182&pm=12297
********************************************************************************
#include <iostream> 
#include <string> 
 
using namespace std; 
class TypingDistance 
{ 
public: 
  int minDistance(string keyboard, string word){ 
    int dis=0,x,y; 
     
    for(int i =0;i<word.size()-1;i++){ 
      x=0; 
      y=0; 
      if(word[i+1]!='\0'){ 
         
        while(keyboard[x]!=word[i]){ 
          x++; 
        } 
        while(keyboard[y]!=word[i+1]){ 
          y++; 
        } 
         
        if ( x > y) 
        dis=dis+(x-y); 
        else 
          dis=dis+(y-x); 
      } 
    } 
    return dis; 
  } 
};

********************************************************************************
*******************************************************************************/